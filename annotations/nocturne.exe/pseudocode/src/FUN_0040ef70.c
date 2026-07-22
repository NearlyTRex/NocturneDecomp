// Name: FUN_0040ef70
// Address: 0040ef70
// Address Range: [[0040ef70, 0040ef8b]]
// Convention: unknown
// Signature: undefined4 FUN_0040ef70(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0040ef70(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CHero");
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 2;
  }
  return uVar2;
}
