// Name: core_pendulum.cpp_CPendulum_process_FUN_004f3a20
// Address: 004f3a20
// Address Range: [[004f3a20, 004f3b85]]
// Convention: unknown
// Signature: void core_pendulum_cpp_CPendulum_process_FUN_004f3a20(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_pendulum_cpp_CPendulum_process_FUN_004f3a20(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if (*(int *)(param_1 + 0x394) == 0) {
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x2cc);
    if (iVar2 == 0) {
      return;
    }
    *(uint *)(param_1 + 0x394) = 1;
  }
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x330);
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x428) != 0x3f800000)) {
    *(uint *)(param_1 + 0x42c) = 0;
    *(uint *)(param_1 + 0x428) = 0x3f800000;
  }
  core_pendulum_cpp_CPendulum_updateSwing_FUN_004f3430(param_1,param_2);
  fVar7 = (float10)1;
  fVar5 = (float10)1.4426950408889634 *
          (float10)*(float *)(param_1 + 0x428) * (float10)-1 *
          (float10)*(float *)(param_1 + 0x42c);
  fVar6 = (float10)f2xm1(fVar5 - (fVar5 / fVar7) * fVar7);
  fVar7 = (float10)fscale(fVar6 + fVar7,fVar5);
  if (fVar7 <= (float10)0.10000000000000001) {
    *(uint *)(param_1 + 0x438) = 1;
    return;
  }
  *(uint *)(param_1 + 0x438) = 0;
  if ((*(int *)(param_1 + 0x420) == 0) && (*(int *)(param_1 + 0x424) == 0)) {
    return;
  }
  iVar4 = 0;
  iVar2 = 0;
  do {
    while( true ) {
      if (*(int *)(0x01E57284 + 0x14ecb0) <= iVar2) {
        return;
      }
      uVar1 = *(uint *)(iVar4 + 0x14ecb4 + 0x01E57284);
      if ((*(int *)(param_1 + 0x420) == 0) ||
         (iVar3 = core_actor_cpp_castToClassHash_FUN_0040d890(uVar1,_DAT_01cae124), iVar3 == 0))
      break;
      core_pendulum_cpp_CPendulum_testCollisionWithActor_FUN_004f2e60(param_1,uVar1,iVar3,0);
LAB_004f3aee:
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
    }
    if ((*(int *)(param_1 + 0x424) == 0) ||
       (iVar3 = core_actor_cpp_castToClassHash_FUN_0040d890(uVar1,_DAT_01bcdef4), iVar3 == 0))
    goto LAB_004f3aee;
    core_pendulum_cpp_CPendulum_testCollisionWithActor_FUN_004f2e60(param_1,uVar1,0,iVar3);
    iVar2 = iVar2 + 1;
    iVar4 = iVar4 + 4;
  } while( true );
}
