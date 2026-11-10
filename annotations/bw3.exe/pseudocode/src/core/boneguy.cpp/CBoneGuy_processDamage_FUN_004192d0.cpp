// Name: core_boneguy.cpp_CBoneGuy_processDamage_FUN_004192d0
// Address: 004192d0
// Address Range: [[004192d0, 004193b7]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_processDamage_FUN_004192d0(CBoneGuy *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_processDamage_FUN_004192d0(CBoneGuy *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0xd078);
  if (*(int *)(damage_info + 0x30) == 0x70) {
    return;
  }
  fVar1 = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
  (this_ptr->base).base.hit_points = fVar1;
  if (0.0 < fVar1) {
    iVar3 = unkafter_enemy_cpp_FUN_0048a1b0(this_ptr,*(uint *)(damage_info + 4));
    if (iVar3 == 0) goto LAB_0041934a;
    iVar3 = 3;
  }
  else {
    if ((*(int *)&this_ptr->field_0xd0ec < 1) &&
       (((*(uint *)&(this_ptr->base).base.field_0x3254 & 0x7fffffff) == 0 ||
        (*(int *)&(this_ptr->base).base.field_0x3258 != 0)))) {
      (this_ptr->base).base.hit_points = 1.0;
      core_boneguy_cpp_CBoneGuy_explode_FUN_00419550(this_ptr);
      *(int *)&this_ptr->field_0xd0ec = *(int *)&this_ptr->field_0xd0ec + 1;
      core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
      return;
    }
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       (&(this_ptr->base).base.model.base);
    if ((*(int *)(pSVar2 + 0x24) == 5) || (*(int *)(pSVar2 + 0x24) == 4)) goto LAB_0041934a;
    iVar3 = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            (&(this_ptr->base).base.model.base,iVar3,1);
LAB_0041934a:
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
  return;
}
