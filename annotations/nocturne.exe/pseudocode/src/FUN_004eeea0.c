// Name: FUN_004eeea0
// Address: 004eeea0
// Address Range: [[004eeea0, 004eef7c]]
// Convention: unknown
// Signature: void FUN_004eeea0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004eeea0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0xc4))(param_1);
  if (iVar2 == 0x1d46820) {
    fVar1 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
    iVar2 = param_1 + 0x150;
    *(float *)(param_1 + 0x2434) = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)(param_1 + 0x2434) = 0;
      (**(code **)(*(int *)(param_1 + 0x14c) + 0xa0))(param_1,0x32,0x41c80000);
      core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0(param_1);
      core_npc_cpp_CNPC_setRandomMotionVariant_FUN_004eedc0(iVar2,&DAT_0058cb6f);
    }
    else if ((0.0 < *(float *)(param_2 + 4)) && (*(int *)(param_1 + 0x2590) == 0)) {
      iVar3 = core_npc_cpp_CNPC_setRandomMotionVariant_FUN_004eedc0(iVar2,&DAT_0058cb73);
      if (iVar3 == 0) {
        iVar3 = core_npc_cpp_CNPC_setRandomMotionVariant_FUN_004eedc0(iVar2,"DAMAGE");
        if (iVar3 == 0) {
          core_npc_cpp_CNPC_setRandomMotionVariant_FUN_004eedc0(iVar2,&DAT_0058cb7f);
          core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
          return;
        }
      }
    }
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
  return;
}
