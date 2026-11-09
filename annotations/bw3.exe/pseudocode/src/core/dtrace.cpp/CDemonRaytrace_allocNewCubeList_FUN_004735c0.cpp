// Name: core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_004735c0
// Address: 004735c0
// Address Range: [[004735c0, 0047362d]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_004735c0(CDemonRaytrace *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_004735c0(CDemonRaytrace *this_ptr)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)&this_ptr->field_0x48 *
          *(int *)&this_ptr->field_0x40 * *(int *)&this_ptr->field_0x44;
  uVar1 = FUN_005a40df(iVar2 * 0x34 + 4,iVar2,&g_CDemonCubeTypeInfo);
  iVar2 = __vec_new(uVar1);
  *(int *)&this_ptr->field_0x50 = iVar2;
  if (iVar2 != 0) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\dtrace.cpp";
  _DAT_01d71de4 = 0xae;
  core_main_c_FUN_004e4330("CDemonRaytrace::allocNewCubeList - Out of memory!");
  return;
}
