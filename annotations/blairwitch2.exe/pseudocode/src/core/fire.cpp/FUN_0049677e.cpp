// Name: core_fire.cpp_FUN_0049677e
// Address: 0049677e
// Address Range: [[0049677e, 004967c5]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049677e(void)

#include "nocturne.h"

void core_fire_cpp_FUN_0049677e(void)

{
  CKeyFramedModelInstance *this_ptr;
  int iVar1;
  char acStack_6c [100];
  
  this_ptr = (CKeyFramedModelInstance *)0x1c3e4e8;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    FUN_005b7790(acStack_6c,0x5d542a,iVar1);
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(this_ptr,acStack_6c);
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(this_ptr);
    this_ptr = this_ptr + 1;
  } while (iVar1 < 4);
  return;
}
