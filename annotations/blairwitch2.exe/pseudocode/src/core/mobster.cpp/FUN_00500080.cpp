// Name: core_mobster.cpp_FUN_00500080
// Address: 00500080
// Address Range: [[00500080, 00500205]]
// Convention: unknown
// Signature: void core_mobster_cpp_FUN_00500080(CMobster *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_mobster_cpp_FUN_00500080(CMobster *param_1,SDamageInfo *param_2)

{
  byte *this_ptr;
  float fVar1;
  int iVar2;
  uint uVar3;
  
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1->field_0x10b98);
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1->field_0x10b90);
  core_mobster_cpp_CMobster_processDismemberment_FUN_004ffcc0(param_1,param_2);
  if ((*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10ba0 * 4) == 0) &&
     (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10ba8 * 4) == 0)) {
    *(uint *)(param_2 + 4) = 0x461c3f9a;
  }
  fVar1 = *(float *)&param_1->field_0x25a8 - *(float *)(param_2 + 4);
  this_ptr = &param_1->field_0x2b4;
  *(float *)&param_1->field_0x25a8 = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)&param_1->field_0x25a8 = 0;
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr);
    if ((*(int *)(iVar2 + 0x24) != 5) && (*(int *)(iVar2 + 0x24) != 4)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr,4,1);
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x130))(param_1,1,0);
      if (*(int *)&param_1->field_0x10b94 == 0) {
        sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1->field_0x10b8c);
        uVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                          (param_1,"@mobster-die-?.wav" + 1);
        *(uint *)&param_1->field_0x10b94 = 1;
        *(uint *)&param_1->field_0x10b8c = uVar3;
        core_enemy_cpp_FUN_00488890(param_1,param_2);
        return;
      }
    }
    goto LAB_00500145;
  }
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (*(uint *)(param_2 + 0x34),g_CTommyGunClassInfo.name_hash);
  if (iVar2 == 0) {
LAB_00500121:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr,3,1);
  }
  else {
    iVar2 = core_actor_cpp_FUN_0040d060(0.5);
    if (iVar2 != 0) goto LAB_00500121;
  }
  iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1->field_0x10b8c);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"mobster-hit-?.wav");
    *(uint *)&param_1->field_0x10b8c = uVar3;
    core_enemy_cpp_FUN_00488890(param_1,param_2);
    return;
  }
LAB_00500145:
  core_enemy_cpp_FUN_00488890(param_1,param_2);
  return;
}
