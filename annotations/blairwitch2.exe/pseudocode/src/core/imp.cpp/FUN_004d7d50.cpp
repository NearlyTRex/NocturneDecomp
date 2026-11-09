// Name: core_imp.cpp_FUN_004d7d50
// Address: 004d7d50
// Address Range: [[004d7d50, 004d7e8c]]
// Convention: unknown
// Signature: void core_imp_cpp_FUN_004d7d50(CImp *param_1,SDamageInfo *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_imp_cpp_FUN_004d7d50(CImp *param_1,SDamageInfo *param_2)

{
  byte *this_ptr;
  float fVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint auStackY_1010 [1009];
  char *pcVar5;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar4 = 0;
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1->field_0x10af8);
  if (*(int *)(param_2 + 0x28) == 8) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005dab79;
    core_actor_cpp_FUN_00408d70(param_1,param_2 + 0x1c);
    iVar3 = 0;
    CStack_1c._0_4_ = CStack_28._0_4_;
    *(uint *)((int)&CStack_1c + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_1c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    do {
      iVar3 = iVar3 + 1;
      core_fire_cpp_FUN_0049d090(0x01C3DEB4,&CStack_1c,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar3 < 5);
  }
  core_imp_cpp_FUN_004d7ab0(param_1,param_2);
  fVar1 = *(float *)&param_1->field_0x25a8 - *(float *)(param_2 + 4);
  this_ptr = &param_1->field_0x2b4;
  *(float *)&param_1->field_0x25a8 = fVar1;
  if (0.0 < fVar1) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr,5,1);
    iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1->field_0x10afc);
    if (iVar3 != 0) goto LAB_004d7e52;
    pcVar5 = "imp-hurt?.wav";
  }
  else {
    *(uint *)&param_1->field_0x25a8 = 0;
    iVar3 = core_motion_cpp_FUN_005035c0(this_ptr);
    if ((*(int *)(iVar3 + 0x24) == 6) || (*(int *)(iVar3 + 0x24) == 7)) goto LAB_004d7e52;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr,6,1);
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1->field_0x10afc);
    pcVar5 = "@imp-die?.wav" + 1;
  }
  uVar2 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,pcVar5);
  *(uint *)&param_1->field_0x10afc = uVar2;
LAB_004d7e52:
  core_enemy_cpp_FUN_00488890(param_1,param_2);
  return;
}
