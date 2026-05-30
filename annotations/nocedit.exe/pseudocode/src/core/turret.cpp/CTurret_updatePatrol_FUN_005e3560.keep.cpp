// Name: core_turret.cpp_CTurret_updatePatrol_FUN_005e3560
// Address: 005e3560
// MANUAL RECONSTRUCTION
// Address Range: [[005e3560, 005e36ea]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_updatePatrol_FUN_005e3560(CTurret *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_updatePatrol_FUN_005e3560(CTurret *this_ptr,float delta_time)

{
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar4;
  float fVar7;
  CVector3f *pCVar5;
  int iVar8;
  CBoundingBox3D CStack_54;
  CVector3f CStack_30;
  float fVar2;
  CVector3f *target_pos;
  float fVar3;
  float fVar1;
  
  if (this_ptr->fire_sound_timer <= 0.0) {
    if (this_ptr->guard_zone_box_trigger != (CDemonActor *)0x0) {
      target_pos = &this_ptr->patrol_target;
      iVar4 = core_turret_cpp_CTurret_aimAtTarget_FUN_005e3280
                        (this_ptr,target_pos,delta_time * (float)0.33333333333333298);
      if (iVar4 != 0) {
        (*((this_ptr->guard_zone_box_trigger->vtable)._ub)->getBoundingBox)
                  (this_ptr->guard_zone_box_trigger,&CStack_54);
        fVar4 = target_pos->x;
        fVar5 = (this_ptr->patrol_target).y;
        iVar8 = 0;
        fVar6 = (this_ptr->patrol_target).z;
        while( true ) {
          fVar7 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.1,0.9);
          (this_ptr->patrol_target).x = CStack_54.min.x * fVar7 + (1.0 - fVar7) * CStack_54.max.x;
          fVar7 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.1,0.9);
          (this_ptr->patrol_target).z = CStack_54.min.z * fVar7 + (1.0 - fVar7) * CStack_54.max.z;
          (this_ptr->patrol_target).y = CStack_54.min.y;
          pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (this_ptr->guard_zone_box_trigger,&CStack_30,target_pos);
          if (target_pos != pCVar5) {
            *target_pos = *pCVar5;
          }
          fVar1 = target_pos->x - fVar4;
          fVar3 = (this_ptr->patrol_target).y - fVar5;
          fVar2 = (this_ptr->patrol_target).z - fVar6;
          if (25.0f < fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) break;
          iVar8 = iVar8 + 1;
          if (4 < iVar8) {
            return;
          }
        }
      }
    }
  }
  else if ((this_ptr->base).fire_cooldown_timer <= 0.0) {
    (*(((this_ptr->base).base.vtable._uw)->_uw).fire)(&this_ptr->base);
  }
  return;
}
