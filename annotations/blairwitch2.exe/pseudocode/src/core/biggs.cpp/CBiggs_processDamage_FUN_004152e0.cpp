// Name: core_biggs.cpp_CBiggs_processDamage_FUN_004152e0
// Address: 004152e0
// Address Range: [[004152e0, 00415382]]
// Convention: __cdecl
// Signature: void __cdecl core_biggs_cpp_CBiggs_processDamage_FUN_004152e0(CBiggs *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_biggs_cpp_CBiggs_processDamage_FUN_004152e0(CBiggs *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)&(this_ptr->base).base.field_0x281c != 0) {
    return;
  }
  fVar1 = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    iVar2 = 7;
    (this_ptr->base).base.hit_points = 0.0;
  }
  else {
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&(this_ptr->base).base.model,4,1);
    }
    if (iVar2 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&(this_ptr->base).base.model,5,1);
    }
    if (iVar2 != 2) goto LAB_00415364;
    iVar2 = 6;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&(this_ptr->base).base.model,iVar2,1);
LAB_00415364:
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
