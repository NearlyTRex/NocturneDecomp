// Name: core_charactr.cpp_FUN_00427730
// Address: 00427730
// Address Range: [[00427730, 004277e2]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00427730(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int param_6)

#include "nocturne.h"

void core_charactr_cpp_FUN_00427730(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((*(int *)(param_1 + 0x2f08) < 0x32) &&
     (((param_6 != 0 ||
       (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CHero"), iVar1 == 0)) &&
      (*(char *)(param_1 + 0x23b0) != '\0')))) {
    iVar2 = core_skeleton_cpp_CDeformableModelInstance_findClosestBone_FUN_0051e9e0
                      (param_1 + 0x150,param_2);
    iVar3 = 0;
    iVar1 = param_1;
    if (0 < *(int *)(param_1 + 0x2f08)) {
      do {
        if (iVar2 == *(int *)(iVar1 + 0x2f18)) {
          return;
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 0x18;
      } while (iVar3 < *(int *)(param_1 + 0x2f08));
    }
    *(uint *)(param_1 + 0x2f0c) = param_4;
    *(uint *)(param_1 + 0x2f10) = param_5;
    uVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                      (param_1 + 0x150,iVar2);
    core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_004266a0(param_1,uVar4);
    *(uint *)(param_1 + 0xfc) = 1;
    return;
  }
  return;
}
