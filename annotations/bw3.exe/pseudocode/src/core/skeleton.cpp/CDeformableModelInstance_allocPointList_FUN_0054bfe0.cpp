// Name: core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0054bfe0
// Address: 0054bfe0
// Address Range: [[0054bfe0, 0054c059]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_0054bfe0(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_0054bfe0(CDeformableModelInstance *this_ptr)

{
  int iVar1;
  CDeformableModel *pCVar2;
  int iVar3;
  
  core_skeleton_cpp_FUN_0054c060(this_ptr);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr);
  iVar1 = *(int *)&pCVar2->field_0x2c;
  iVar3 = FUN_005a40df(iVar1 * 0xc);
  *(int *)&this_ptr->field_0x2324 = iVar3;
  if (iVar3 != 0) {
    *(uint *)&this_ptr->field_0x2320 = 0xffffffff;
    return;
  }
  _DAT_01d71de0 = "..\\core\\skeleton.cpp";
  _DAT_01d71de4 = 0x910;
  core_main_c_FUN_004e4330("CDeformableModelInstance::allocPointList out of memory for %d points!",iVar1);
  *(uint *)&this_ptr->field_0x2320 = 0xffffffff;
  return;
}
