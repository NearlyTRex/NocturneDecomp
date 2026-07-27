// Name: core_cloth.cpp_CCloth_allocMemory_FUN_004351b0
// Address: 004351b0
// Address Range: [[004351b0, 00435200]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_allocMemory_FUN_004351b0(int param_1)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_allocMemory_FUN_004351b0(int param_1)

{
  int iVar1;
  
  core_cloth_cpp_FUN_00435210(param_1);
  iVar1 = shape_memdbg_cpp_malloc_FUN_00564c18(*(int *)(param_1 + 0x104) << 2);
  *(int *)(param_1 + 0x3aafc) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  PTR_01cc4800 = "..\\core\\cloth.cpp";
  INT_01cc4804 = 0x77;
  core_main_c_FUN_004c8440("CCloth::allocMemory - Out of memory");
  return;
}
