// Name: core_imp.cpp_FUN_004d7e70
// Address: 004d7e70
// Address Range: [[004d7e70, 004d7fac]]
// Convention: unknown
// Signature: void core_imp_cpp_FUN_004d7e70(CImp *param_1,SDamageInfo *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_imp_cpp_FUN_004d7e70(CImp *param_1,SDamageInfo *param_2)

{
  byte *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint auStackY_1010 [1009];
  char *pcVar6;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar5 = 0;
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1->field_0xd054);
  if (*(int *)(param_2 + 0x28) == 8) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005c56a0;
    core_actor_cpp_FUN_00408b80(param_1,param_2 + 0x1c);
    iVar4 = 0;
    CStack_1c._0_4_ = CStack_28._0_4_;
    *(uint *)((int)&CStack_1c + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&CStack_28 + (uint)bVar5 * -8 + 4);
    *(uint *)((int)&CStack_1c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)((int)&CStack_28 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                (0x01C73654,&CStack_1c,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  core_imp_cpp_FUN_004d7bd0(param_1,param_2);
  fVar1 = *(float *)&param_1->field_0x2538 - *(float *)(param_2 + 4);
  this_ptr = &param_1->field_0x158;
  *(float *)&param_1->field_0x2538 = fVar1;
  if (0.0 < fVar1) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)this_ptr,5,1);
    iVar4 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1->field_0xd058);
    if (iVar4 != 0) goto LAB_004d7f72;
    pcVar6 = "imp-hurt?.wav";
  }
  else {
    *(uint *)&param_1->field_0x2538 = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)this_ptr);
    if ((*(int *)(pSVar2 + 0x24) == 6) || (*(int *)(pSVar2 + 0x24) == 7)) goto LAB_004d7f72;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)this_ptr,6,1);
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1->field_0xd058);
    pcVar6 = "@imp-die?.wav" + 1;
  }
  uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,pcVar6);
  *(uint *)&param_1->field_0xd058 = uVar3;
LAB_004d7f72:
  core_enemy_cpp_FUN_00489b80(param_1,param_2);
  return;
}
