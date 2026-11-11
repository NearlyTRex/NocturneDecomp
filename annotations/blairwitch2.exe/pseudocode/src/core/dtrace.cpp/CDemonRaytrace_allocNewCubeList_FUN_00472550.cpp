// Name: core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00472550
// Address: 00472550
// Address Range: [[00472550, 004725bd]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00472550(CDemonRaytrace *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00472550(CDemonRaytrace *this_ptr)

{
  uint uVar1;
  CDemonCube *pCVar2;
  int iVar3;
  
  iVar3 = (this_ptr->grid_coord).z * (this_ptr->grid_coord).x * (this_ptr->grid_coord).y;
  uVar1 = operator_new_array(iVar3 * 0x34 + 4,iVar3,&g_CDemonCubeTypeInfo)
  ;
  pCVar2 = (CDemonCube *)__vec_new(uVar1);
  this_ptr->cube_data = pCVar2;
  if (pCVar2 != (CDemonCube *)0x0) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\dtrace.cpp";
  _DAT_01d046a4 = 0xae;
  core_main_c_FUN_004e4500("CDemonRaytrace::allocNewCubeList - Out of memory!");
  return;
}
