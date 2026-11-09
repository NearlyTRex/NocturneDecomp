// Name: core_mobster.cpp_FUN_0051f040
// Address: 0051f040
// Address Range: [[0051f040, 0051f1c5]]
// Convention: unknown
// Signature: void core_mobster_cpp_FUN_0051f040(CMobster *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_mobster_cpp_FUN_0051f040(CMobster *param_1,SDamageInfo *param_2)

{
  byte *this_ptr;
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  
  sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1->field_0xc308);
  sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1->field_0xc300);
  core_mobster_cpp_FUN_0051ec80(param_1,param_2);
  if ((*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc310 * 4) == 0) &&
     (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc318 * 4) == 0)) {
    *(uint *)(param_2 + 4) = 0x461c3f9a;
  }
  fVar1 = *(float *)&param_1->field_0x2538 - *(float *)(param_2 + 4);
  this_ptr = &param_1->field_0x158;
  *(float *)&param_1->field_0x2538 = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)&param_1->field_0x2538 = 0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)this_ptr);
    if ((*(int *)(pSVar3 + 0x24) != 5) && (*(int *)(pSVar3 + 0x24) != 4)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)this_ptr,4,1);
      (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,1,0);
      if (*(int *)&param_1->field_0xc304 == 0) {
        sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1->field_0xc2fc);
        uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                          (param_1,"@mobster-die-?.wav" + 1);
        *(uint *)&param_1->field_0xc304 = 1;
        *(uint *)&param_1->field_0xc2fc = uVar4;
        core_enemy_cpp_FUN_004a0f00(param_1,param_2);
        return;
      }
    }
    goto LAB_0051f105;
  }
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600
                    (*(uint *)(param_2 + 0x34),g_CTommyGunClassInfo.name_hash);
  if (iVar2 == 0) {
LAB_0051f0e1:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)this_ptr,3,1);
  }
  else {
    iVar2 = core_actor_cpp_FUN_0040cd00(0.5);
    if (iVar2 != 0) goto LAB_0051f0e1;
  }
  iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1->field_0xc2fc);
  if (iVar2 == 0) {
    uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"mobster-hit-?.wav");
    *(uint *)&param_1->field_0xc2fc = uVar4;
    core_enemy_cpp_FUN_004a0f00(param_1,param_2);
    return;
  }
LAB_0051f105:
  core_enemy_cpp_FUN_004a0f00(param_1,param_2);
  return;
}
