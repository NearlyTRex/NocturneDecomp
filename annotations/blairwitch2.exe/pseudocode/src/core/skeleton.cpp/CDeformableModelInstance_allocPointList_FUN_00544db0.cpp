// Name: core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_00544db0
// Address: 00544db0
// Address Range: [[00544db0, 00544e29]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_00544db0(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_00544db0(CDeformableModelInstance *this_ptr)

{
  int iVar1;
  CDeformableModel *pCVar2;
  int iVar3;
  
  core_skeleton_cpp_FUN_00544e30(this_ptr);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr);
  iVar1 = *(int *)&pCVar2->field_0x2c;
  iVar3 = FUN_005b8df8(iVar1 * 0xc);
  *(int *)&this_ptr->field_0x2234 = iVar3;
  if (iVar3 != 0) {
    *(uint *)&this_ptr->field_0x2230 = 0xffffffff;
    return;
  }
  _DAT_01d046a0 = "..\\core\\skeleton.cpp";
  _DAT_01d046a4 = 0x909;
  core_main_c_FUN_004e4500("CDeformableModelInstance::allocPointList out of memory for %d points!",iVar1);
  *(uint *)&this_ptr->field_0x2230 = 0xffffffff;
  return;
}
