// Name: core_charactr.cpp_FUN_004285f0
// Address: 004285f0
// Address Range: [[004285f0, 0042874d]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_004285f0(int param_1,CDemonActor *param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_004285f0(int param_1,CDemonActor *param_2,uint param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CMotionList *this_ptr;
  int iVar4;
  char *state_name;
  CDemonActor *error_on_not_found;
  float local_18;
  
  if (param_2 == (CDemonActor *)0x0) {
    if (((*(int *)(param_1 + 0x27ac) != 0) && (*(int *)(param_1 + 0x2774) != 0)) &&
       (*(char *)(param_1 + 0x2514) != '\0')) {
      state_name = "?STAND" + 1;
      error_on_not_found = param_2;
      this_ptr = core_motion_cpp_FUN_00503860((CMotionController *)(param_1 + 0x2b4));
      iVar4 = core_motion_cpp_FUN_00502fa0(this_ptr,state_name,(int)error_on_not_found);
      if (-1 < iVar4) {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_005036b0
                  ((CMotionController *)(param_1 + 0x2b4),"STAND",1);
      }
    }
    local_18 = -1.0;
    iVar4 = *(int *)(param_1 + 0x2b0);
    *(uint *)(param_1 + 0x27ac) = 0;
  }
  else {
    *(uint *)(param_1 + 0x27ac) = 1;
    iVar4 = core_actor_cpp_FUN_0040c840(param_2,"CCharacter");
    if (iVar4 == 0) {
      fVar1 = *(float *)(param_1 + 0x20) - *(float *)&param_2->field_0x20;
      fVar3 = *(float *)(param_1 + 0x24) - *(float *)&param_2->field_0x24;
      fVar2 = *(float *)(param_1 + 0x28) - *(float *)&param_2->field_0x28;
      local_18 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) * (float)_DAT_005cced6;
      if (_DAT_005ccede <= local_18) {
        if (_DAT_005ccee2 < local_18) {
          local_18 = 60.0;
        }
      }
      else {
        local_18 = 5.0;
      }
      iVar4 = (CBasicEnemy *)core_actor_cpp_castToClassHash_FUN_0040c8f0(param_1,g_CBasicEnemyClassInfo.name_hash);
      if (iVar4 != 0) {
        local_18 = local_18 * _DAT_005ccee6;
      }
      iVar4 = *(int *)(param_1 + 0x2b0);
    }
    else {
      local_18 = -1.0;
      iVar4 = *(int *)(param_1 + 0x2b0);
    }
  }
  (**(code **)(iVar4 + 0x140))(param_1,local_18);
  *(CDemonActor **)(param_1 + 0x2774) = param_2;
  *(uint *)(param_1 + 0x2778) = param_3;
  *(uint *)(param_1 + 0x277c) = param_4;
  return;
}
