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
  CDemonCube *pCVar2;
  int iVar3;
  
  iVar3 = (this_ptr->grid_coord).z * (this_ptr->grid_coord).x * (this_ptr->grid_coord).y;
  uVar1 = FUN_005c1268(iVar3 * 0x34 + 4,iVar3,&g_CDemonCubeTypeInfo);
  pCVar2 = (CDemonCube *)__vec_new(uVar1);
  this_ptr->cube_data = pCVar2;
  if (pCVar2 != (CDemonCube *)0x0) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\dtrace.cpp";
  _DAT_01d1d404 = 0xae;
  core_main_c_FUN_005030e0("CDemonRaytrace::allocNewCubeList - Out of memory!");
  return;
}
