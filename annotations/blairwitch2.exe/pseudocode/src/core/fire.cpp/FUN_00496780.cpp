// Name: core_fire.cpp_FUN_00496780
// Address: 00496780
// Address Range: [[00496780, 004967c5]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_00496780(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_fire_cpp_FUN_00496780(void)

{
  CKeyFramedModelInstance *this_ptr;
  int iVar1;
  char acStack_6c [100];
  
  this_ptr = (CKeyFramedModelInstance *)0x1c3e4e8;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    _sprintf(acStack_6c,(char *)0x5d542a);
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(this_ptr,acStack_6c);
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(this_ptr);
    this_ptr = this_ptr + 1;
  } while (iVar1 < 4);
  return;
}
