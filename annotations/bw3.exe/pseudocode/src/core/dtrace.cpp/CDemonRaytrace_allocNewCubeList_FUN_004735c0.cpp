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
  CDemonCube *pCVar2;
  int iVar3;
  
  iVar3 = (this_ptr->grid_coord).z * (this_ptr->grid_coord).x * (this_ptr->grid_coord).y;
  uVar1 = FUN_005a40df(iVar3 * 0x34 + 4,iVar3,&g_CDemonCubeTypeInfo);
  pCVar2 = (CDemonCube *)__vec_new(uVar1);
  this_ptr->cube_data = pCVar2;
  if (pCVar2 != (CDemonCube *)0x0) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\dtrace.cpp";
  _DAT_01d71de4 = 0xae;
  core_main_c_FUN_004e4330("CDemonRaytrace::allocNewCubeList - Out of memory!");
  return;
}
