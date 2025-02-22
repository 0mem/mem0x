#ifndef __ISR_H
#define __ISR_H

#include <stdint.h>

#define pushaq()                                                          \
	__asm__ volatile("pushq %%rax\n\t"                                \
			 "pushq %%rcx\n\t"                                \
			 "pushq %%rdx\n\t"                                \
			 "pushq %%rsi\n\t"                                \
			 "pushq %%rdi\n\t"                                \
			 "pushq %%r8\n\t"                                 \
			 "pushq %%r9\n\t"                                 \
			 "pushq %%r10\n\t"                                \
			 "pushq %%r11"                                    \
			 :                                                \
			 :                                                \
			 : "rax", "rcx", "rdx", "rsi", "rdi", "r8", "r9", \
			   "r10", "r11")

#define popaq()                                                           \
	__asm__ volatile("popq %%rax\n\t"                                 \
			 "popq %%rcx\n\t"                                 \
			 "popq %%rdx\n\t"                                 \
			 "popq %%rsi\n\t"                                 \
			 "popq %%rdi\n\t"                                 \
			 "popq %%r8\n\t"                                  \
			 "popq %%r9\n\t"                                  \
			 "popq %%r10\n\t"                                 \
			 "popq %%r11"                                     \
			 :                                                \
			 :                                                \
			 : "rax", "rcx", "rdx", "rsi", "rdi", "r8", "r9", \
			   "r10", "r11")

typedef struct {
	uint64_t ip;
	uint64_t cs;
	uint64_t fr;
	uint64_t sp;
	uint64_t ss;
} esf_t;

#endif
