// Name: core_conveyor.cpp_CConstruct_processDamage_FUN_00437de0
// Address: 00437de0
// Address Range: [[00437de0, 00437ed4]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_CConstruct_processDamage_FUN_00437de0(CConstruct *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_conveyor_cpp_CConstruct_processDamage_FUN_00437de0(CConstruct *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int force_immediate;
  
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&this_ptr->field_0x10ba0);
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&this_ptr->field_0x10b98);
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&this_ptr->field_0x10b5c);
  fVar1 = *(float *)&this_ptr->field_0x25a8 - *(float *)(damage_info + 4);
  *(float *)&this_ptr->field_0x25a8 = fVar1;
  if (0.0 < fVar1) {
    force_immediate = 1;
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&this_ptr->field_0x2b4,iVar2 + 7,force_immediate);
    iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&this_ptr->field_0x10b9c);
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))
                        (this_ptr,"batman-hurt?.wav");
      *(uint *)&this_ptr->field_0x10b9c = uVar3;
    }
  }
  else {
    *(uint *)&this_ptr->field_0x25a8 = 0x3f800000;
    core_construc_cpp_FUN_00438060(this_ptr);
    iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&this_ptr->field_0x10b9c);
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))
                        (this_ptr,"batman-die.wav");
      *(uint *)&this_ptr->field_0x10b9c = uVar3;
    }
  }
  *(uint *)(damage_info + 8) = 0;
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890((CEnemy *)this_ptr,damage_info);
  return;
}
