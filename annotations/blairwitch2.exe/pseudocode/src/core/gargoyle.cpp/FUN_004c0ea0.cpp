// Name: core_gargoyle.cpp_FUN_004c0ea0
// Address: 004c0ea0
// Address Range: [[004c0ea0, 004c0ffd]]
// Convention: unknown
// Signature: void core_gargoyle_cpp_FUN_004c0ea0(CGargoyle *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_gargoyle_cpp_FUN_004c0ea0(CGargoyle *param_1,SDamageInfo *param_2)

{
  byte *this_ptr;
  float fVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint auStackY_1010 [1011];
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar4 = 0;
  core_actor_cpp_FUN_00408d70(param_1,param_2 + 0x1c);
  iVar3 = 0;
  CStack_28._0_4_ = CStack_1c._0_4_;
  *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_1c + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_1c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  do {
    iVar3 = iVar3 + 1;
    core_fire_cpp_FUN_0049d090(0x01C3DEB4,&CStack_28,(CVector3f *)0x0,0x10000,0x8000,0,0xffff);
  } while (iVar3 < 3);
  this_ptr = &param_1->field_0x2b4;
  iVar3 = core_motion_cpp_FUN_005035c0(this_ptr);
  if (*(int *)(iVar3 + 0x24) != 5) {
    core_gargoyle_cpp_FUN_004c0c00(param_1,param_2);
    fVar1 = *(float *)&param_1->field_0x25a8 - *(float *)(param_2 + 4);
    *(float *)&param_1->field_0x25a8 = fVar1;
    if (0.0 < fVar1) {
      iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1->field_0x10b38);
      if (iVar3 == 0) {
        uVar2 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                          (param_1,"gargoyle-hurt?.wav");
        *(uint *)&param_1->field_0x10b38 = uVar2;
      }
    }
    else {
      sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1->field_0x10b38);
      *(uint *)&param_1->field_0x25a8 = 0;
      iVar3 = core_motion_cpp_FUN_005035c0(this_ptr);
      if (*(int *)(iVar3 + 0x24) != 8) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr,8,1);
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                  (param_1,"@gargoyle-shatter.wav" + 1);
        core_charactr_cpp_CCharacter_dismember_FUN_00427360
                  ((CCharacter *)param_1,(CVector3f *)0x0,-1.0,1);
      }
    }
    core_enemy_cpp_FUN_00488890(param_1,param_2);
    return;
  }
  *(uint *)(param_2 + 4) = 0;
  core_enemy_cpp_FUN_00488890(param_1,param_2);
  return;
}
