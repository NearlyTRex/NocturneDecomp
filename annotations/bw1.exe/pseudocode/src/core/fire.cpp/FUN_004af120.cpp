// Name: core_fire.cpp_FUN_004af120
// Address: 004af120
// Address Range: [[004af120, 004af165]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004af120(void)

#include "nocturne.h"

void core_fire_cpp_FUN_004af120(void)

{
  CKeyFramedModelInstance *this_ptr;
  int iVar1;
  char local_6c [100];
  
  this_ptr = (CKeyFramedModelInstance *)0x1c576a8;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    FUN_005bfb40(local_6c,"leaf%d.kfm",iVar1);
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(this_ptr,local_6c);
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(this_ptr);
    this_ptr = this_ptr + 1;
  } while (iVar1 < 4);
  return;
}
