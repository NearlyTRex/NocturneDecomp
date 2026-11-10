// Name: core_boneguy.cpp_CBaalSkel_processDamage_FUN_0041a810
// Address: 0041a810
// Address Range: [[0041a810, 0041a890]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBaalSkel_processDamage_FUN_0041a810(CBaalSkel *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBaalSkel_processDamage_FUN_0041a810(CBaalSkel *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  int iVar2;
  
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0xd078);
  if (*(int *)(damage_info + 0x30) != 0x70) {
    fVar1 = *(float *)&this_ptr->field_0x2538 - *(float *)(damage_info + 4);
    *(float *)&this_ptr->field_0x2538 = fVar1;
    if (fVar1 <= 0.0) {
      core_enemy_cpp_FUN_00489c90(this_ptr);
      *(uint *)&this_ptr->field_0x2538 = 0x3f800000;
      core_boneguy_cpp_CBoneGuy_explode_FUN_00419550((CBoneGuy *)this_ptr);
      return;
    }
    iVar2 = unkafter_enemy_cpp_FUN_0048a1b0(this_ptr,*(uint *)(damage_info + 4));
    if (iVar2 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&this_ptr->field_0x158,3,1);
      return;
    }
  }
  return;
}
