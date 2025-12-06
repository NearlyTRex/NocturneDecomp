// Name: core_cloth.cpp_UnknownSomethingAndFreeMem_FUN_00438cb0
// Address: 00438cb0
// Address Range: [[00438cb0, 00438ced]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_UnknownSomethingAndFreeMem_FUN_00438cb0()

#include "nocturne.h"

/* Signature: byte core_cloth.cpp_UnknownSomethingAndFreeMem(uint param_1) */

void core_cloth_cpp_UnknownSomethingAndFreeMem_FUN_00438cb0(void)

{
  int in_stack_00000004;
  
  if (*(void **)(in_stack_00000004 + 0x3fe3c) == (void *)0x0) {
    return;
  }
  g_CurrentDebugFilename = "..\\core\\cloth.cpp";
  g_CurrentDebugLine = 0x85;
  crt_memory_c_free_FUN_005fe659(*(void **)(in_stack_00000004 + 0x3fe3c));
  *(uint *)(in_stack_00000004 + 0x3fe3c) = 0;
  return;
}
