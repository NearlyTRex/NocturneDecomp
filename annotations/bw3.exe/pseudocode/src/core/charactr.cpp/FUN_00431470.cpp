// Name: core_charactr.cpp_FUN_00431470
// Address: 00431470
// Address Range: [[00431470, 004315bd]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00431470(int param_1,CDemonActor *param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_00431470(int param_1,CDemonActor *param_2,uint param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CMotionList *this_ptr;
  int iVar4;
  char *state_name;
  CDemonActor *error_on_not_found;
  float local_10;
  
  if (param_2 == (CDemonActor *)0x0) {
    if (((*(int *)(param_1 + 0x273c) != 0) && (*(int *)(param_1 + 0x2704) != 0)) &&
       (*(char *)(param_1 + 0x24a8) != '\0')) {
      state_name = "?STAND" + 1;
      error_on_not_found = param_2;
      this_ptr = core_motion_cpp_FUN_004fc310((CMotionController *)(param_1 + 0x158));
      iVar4 = core_motion_cpp_FUN_004fba50(this_ptr,state_name,(int)error_on_not_found);
      if (-1 < iVar4) {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
                  ((CMotionController *)(param_1 + 0x158),"STAND",1);
      }
    }
    *(uint *)(param_1 + 0x273c) = 0;
    (**(code **)(*(int *)(param_1 + 0x154) + 0x138))(param_1,0xbf800000);
  }
  else {
    *(uint *)(param_1 + 0x273c) = 1;
    iVar4 = core_actor_cpp_FUN_0040c790(param_2,"CCharacter");
    if (iVar4 == 0) {
      fVar1 = *(float *)(param_1 + 0x20) - *(float *)&param_2->field_0x20;
      fVar3 = *(float *)(param_1 + 0x24) - *(float *)&param_2->field_0x24;
      fVar2 = *(float *)(param_1 + 0x28) - *(float *)&param_2->field_0x28;
      local_10 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) * (float)_DAT_005b84ae;
      if (_DAT_005b84b6 <= local_10) {
        if (_DAT_005b84ba < local_10) {
          local_10 = 60.0;
        }
      }
      else {
        local_10 = 5.0;
      }
      (**(code **)(*(int *)(param_1 + 0x154) + 0x138))(param_1,local_10);
    }
    else {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x138))(param_1,0xbf800000);
    }
  }
  *(CDemonActor **)(param_1 + 0x2704) = param_2;
  *(uint *)(param_1 + 0x2708) = param_3;
  *(uint *)(param_1 + 0x270c) = param_4;
  return;
}
