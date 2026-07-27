// Name: core_npc.cpp_FUN_004eeea0
// Address: 004eeea0
// Address Range: [[004eeea0, 004eef7c]]
// Convention: unknown
// Signature: void core_npc_cpp_FUN_004eeea0(int param_1,int param_2)

#include "nocturne.h"

void core_npc_cpp_FUN_004eeea0(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  CDemonActorType *pCVar3;
  int iVar4;
  
  pCVar3 = (CDemonActorType *)(**(code **)(*(int *)(param_1 + 0x14c) + 0xc4))(param_1);
  if (pCVar3 == &g_CNPCActorType_01d46820) {
    fVar2 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
    iVar1 = param_1 + 0x150;
    *(float *)(param_1 + 0x2434) = fVar2;
    if (fVar2 <= 0.0) {
      *(uint *)(param_1 + 0x2434) = 0;
      (**(code **)(*(int *)(param_1 + 0x14c) + 0xa0))(param_1,0x32,0x41c80000);
      core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0(param_1);
      core_npc_cpp_CNPC_setRandomMotionVariant_FUN_004eedc0(iVar1,"DIE");
    }
    else if ((0.0 < *(float *)(param_2 + 4)) && (*(int *)(param_1 + 0x2590) == 0)) {
      iVar4 = core_npc_cpp_CNPC_setRandomMotionVariant_FUN_004eedc0(iVar1,"HURT");
      if (iVar4 == 0) {
        iVar4 = core_npc_cpp_CNPC_setRandomMotionVariant_FUN_004eedc0(iVar1,"DAMAGE");
        if (iVar4 == 0) {
          core_npc_cpp_CNPC_setRandomMotionVariant_FUN_004eedc0(iVar1,"SHOT");
          core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
          return;
        }
      }
    }
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
  return;
}
