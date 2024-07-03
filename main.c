/*
read comments to learn what each reg does
*/

#include <stdio.h>

int main() {
    unsigned long rax, rbx, rcx, rdx, rsi, rdi, r8, r9, r10, r11, r12, r13, r14, r15;
    unsigned long long xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    unsigned long long xmm8, xmm9, xmm10, xmm11, xmm12, xmm13, xmm14, xmm15;

    // Inline assembly to read general-purpose registers
    asm ("movq %%rax, %0\n\t"   // RAX: Accumulator for operands and results data
         "movq %%rbx, %1\n\t"   // RBX: Base index for data pointers
         "movq %%rcx, %2\n\t"   // RCX: Counter for string and loop operations
         "movq %%rdx, %3\n\t"   // RDX: Data register for I/O operations
         "movq %%rsi, %4\n\t"   // RSI: Source index for string operations
         "movq %%rdi, %5\n\t"   // RDI: Destination index for string operations
         "movq %%r8,  %6\n\t"   // R8 : General purpose register
         "movq %%r9,  %7\n\t"   // R9 : General purpose register
         "movq %%r10, %8\n\t"   // R10: General purpose register
         "movq %%r11, %9\n\t"   // R11: General purpose register
         "movq %%r12, %10\n\t"  // R12: General purpose register
         "movq %%r13, %11\n\t"  // R13: General purpose register
         "movq %%r14, %12\n\t"  // R14: General purpose register
         "movq %%r15, %13\n\t"  // R15: General purpose register
         : "=r" (rax), "=r" (rbx), "=r" (rcx), "=r" (rdx),
           "=r" (rsi), "=r" (rdi), "=r" (r8),  "=r" (r9),
           "=r" (r10), "=r" (r11), "=r" (r12), "=r" (r13),
           "=r" (r14), "=r" (r15)
         :
         : "memory"
    );

    // Inline assembly to read XMM registers
    asm ("movdqu %%xmm0, %0\n\t"  // XMM0: Used for floating-point operations and SIMD
         "movdqu %%xmm1, %1\n\t"  // XMM1: Used for floating-point operations and SIMD
         "movdqu %%xmm2, %2\n\t"  // XMM2: Used for floating-point operations and SIMD
         "movdqu %%xmm3, %3\n\t"  // XMM3: Used for floating-point operations and SIMD
         "movdqu %%xmm4, %4\n\t"  // XMM4: Used for floating-point operations and SIMD
         "movdqu %%xmm5, %5\n\t"  // XMM5: Used for floating-point operations and SIMD
         "movdqu %%xmm6, %6\n\t"  // XMM6: Used for floating-point operations and SIMD
         "movdqu %%xmm7, %7\n\t"  // XMM7: Used for floating-point operations and SIMD
         "movdqu %%xmm8, %8\n\t"  // XMM8: Used for floating-point operations and SIMD
         "movdqu %%xmm9, %9\n\t"  // XMM9: Used for floating-point operations and SIMD
         "movdqu %%xmm10, %10\n\t" // XMM10: Used for floating-point operations and SIMD
         "movdqu %%xmm11, %11\n\t" // XMM11: Used for floating-point operations and SIMD
         "movdqu %%xmm12, %12\n\t" // XMM12: Used for floating-point operations and SIMD
         "movdqu %%xmm13, %13\n\t" // XMM13: Used for floating-point operations and SIMD
         "movdqu %%xmm14, %14\n\t" // XMM14: Used for floating-point operations and SIMD
         "movdqu %%xmm15, %15\n\t" // XMM15: Used for floating-point operations and SIMD
         : "=x" (xmm0), "=x" (xmm1), "=x" (xmm2), "=x" (xmm3),
           "=x" (xmm4), "=x" (xmm5), "=x" (xmm6), "=x" (xmm7),
           "=x" (xmm8), "=x" (xmm9), "=x" (xmm10), "=x" (xmm11),
           "=x" (xmm12), "=x" (xmm13), "=x" (xmm14), "=x" (xmm15)
         :
         : "memory"
    );

    // Print out general-purpose register values
    printf("General Purpose Registers:\n");
    printf("RAX: %lx\n", rax);  // Typically used for return values from functions
    printf("RBX: %lx\n", rbx);  // Can be used as a base pointer for data
    printf("RCX: %lx\n", rcx);  // Used as a counter in loops
    printf("RDX: %lx\n", rdx);  // Used for I/O port access, multiplication and division
    printf("RSI: %lx\n", rsi);  // Source index for string operations
    printf("RDI: %lx\n", rdi);  // Destination index for string operations
    printf("R8:  %lx\n", r8);   // General purpose register
    printf("R9:  %lx\n", r9);   // General purpose register
    printf("R10: %lx\n", r10);  // General purpose register
    printf("R11: %lx\n", r11);  // General purpose register
    printf("R12: %lx\n", r12);  // General purpose register
    printf("R13: %lx\n", r13);  // General purpose register
    printf("R14: %lx\n", r14);  // General purpose register
    printf("R15: %lx\n", r15);  // General purpose register

    // Print out XMM register values
    printf("XMM Registers:\n");
    printf("XMM0:  %llx\n", xmm0);  // Used for SIMD floating-point operations
    printf("XMM1:  %llx\n", xmm1);  // Used for SIMD floating-point operations
    printf("XMM2:  %llx\n", xmm2);  // Used for SIMD floating-point operations
    printf("XMM3:  %llx\n", xmm3);  // Used for SIMD floating-point operations
    printf("XMM4:  %llx\n", xmm4);  // Used for SIMD floating-point operations
    printf("XMM5:  %llx\n", xmm5);  // Used for SIMD floating-point operations
    printf("XMM6:  %llx\n", xmm6);  // Used for SIMD floating-point operations
    printf("XMM7:  %llx\n", xmm7);  // Used for SIMD floating-point operations
    printf("XMM8:  %llx\n", xmm8);  // Used for SIMD floating-point operations
    printf("XMM9:  %llx\n", xmm9);  // Used for SIMD floating-point operations
    printf("XMM10: %llx\n", xmm10); // Used for SIMD floating-point operations
    printf("XMM11: %llx\n", xmm11); // Used for SIMD floating-point operations
    printf("XMM12: %llx\n", xmm12); // Used for SIMD floating-point operations
    printf("XMM13: %llx\n", xmm13); // Used for SIMD floating-point operations
    printf("XMM14: %llx\n", xmm14); // Used for SIMD floating-point operations
    printf("XMM15: %llx\n", xmm15); // Used for SIMD floating-point operations

    return 0;
}
