#ifndef __REGISTERS_H
#define __REGISTERS_H

#include <stdint.h>

static inline uintptr_t cr1(void)
{
	uintptr_t tmp;
	__asm__ volatile("movq %%cr1, %0" : "=r"(tmp));
	return tmp;
}

static inline uintptr_t cr2(void)
{
	uintptr_t tmp;
	__asm__ volatile("movq %%cr2, %0" : "=r"(tmp));
	return tmp;
}

static inline uintptr_t cr3(void)
{
	uintptr_t tmp;
	__asm__ volatile("movq %%cr3, %0" : "=r"(tmp));
	return tmp;
}

static inline uintptr_t cr4(void)
{
	uintptr_t tmp;
	__asm__ volatile("movq %%cr4, %0" : "=r"(tmp));
	return tmp;
}

#endif
