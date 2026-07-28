// Name: crt_stack.c_GetStackUsage_FUN_00571150
// Address: 00571150
// Address Range: [[00571150, 0057115e]]
// Convention: __cdecl
// Signature: int __cdecl crt_stack_c_GetStackUsage_FUN_00571150(void)

#include "nocturne.h"

int __cdecl GetStackUsage(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR_crt_thread_c_GetTLS_FUN_005671dc_005c1abc)();
  return (int)(&stack0xfffffffc + -*piVar1);
}
