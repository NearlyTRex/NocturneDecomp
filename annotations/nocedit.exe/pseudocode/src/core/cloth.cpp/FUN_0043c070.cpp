// Name: core_cloth.cpp_FUN_0043c070
// Address: 0043c070
// Address Range: [[0043c070, 0043c0ef]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_0043c070(void)

#include "nocturne.h"

/* Signature: byte core_cloth.cpp_FUN_0043c070(uint param_1) */

void core_cloth_cpp_FUN_0043c070(void)

{
  void *ptr;
  int *piVar1;
  int iVar2;
  int *in_stack_00000004;
  
  iVar2 = 0;
  piVar1 = in_stack_00000004;
  if (0 < *in_stack_00000004) {
    do {
      g_CurrentDebugLine = 0x5bd;
      g_CurrentDebugFilename = "..\\core\\cloth.cpp";
      if (piVar1[0x65] != 0) {
        ptr = (void *)core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
        shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *in_stack_00000004);
  }
  *in_stack_00000004 = 0;
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004 + 1,0,400);
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004 + 0x65,0,0x28);
  return;
}
