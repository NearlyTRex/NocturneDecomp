// Name: core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00467330
// Address: 00467330
// Address Range: [[00467330, 0046739d]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00467330(int param_1)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00467330(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x44);
  uVar1 = shape_memdbg_cpp_malloc_FUN_00564c18
                    (iVar2 * 0x34 + 4,iVar2,&g_CDemonCubeTypeInfo_0059c8c0);
  iVar2 = __vec_new(uVar1);
  *(int *)(param_1 + 0x50) = iVar2;
  if (iVar2 != 0) {
    return;
  }
  PTR_01cc4800 = "..\\core\\dtrace.cpp";
  INT_01cc4804 = 0xae;
  core_main_c_FUN_004c8440("CDemonRaytrace::allocNewCubeList - Out of memory!");
  return;
}
