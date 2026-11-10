// Name: core_fire.cpp_FUN_0049a170
// Address: 0049a170
// Address Range: [[0049a170, 0049a1b5]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049a170(void)

#include "nocturne.h"

void core_fire_cpp_FUN_0049a170(void)

{
  CKeyFramedModelInstance *this_ptr;
  int iVar1;
  char local_6c [100];
  
  this_ptr = (CKeyFramedModelInstance *)0x1c73c88;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    _sprintf(local_6c,"leaf%d.kfm");
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(this_ptr,local_6c);
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(this_ptr);
    this_ptr = this_ptr + 1;
  } while (iVar1 < 4);
  return;
}
