// Name: core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_0048aa40
// Address: 0048aa40
// Address Range: [[0048aa40, 0048aaad]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_0048aa40(CDemonRaytrace *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_0048aa40(CDemonRaytrace *this_ptr)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)&this_ptr->field_0x48 *
          *(int *)&this_ptr->field_0x40 * *(int *)&this_ptr->field_0x44;
  uVar1 = FUN_005c1268(iVar2 * 0x34 + 4,iVar2,&g_CDemonCubeTypeInfo);
  iVar2 = __vec_new(uVar1);
  *(int *)&this_ptr->field_0x50 = iVar2;
  if (iVar2 != 0) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\dtrace.cpp";
  _DAT_01d1d404 = 0xae;
  core_main_c_FUN_005030e0("CDemonRaytrace::allocNewCubeList - Out of memory!");
  return;
}
