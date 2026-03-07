// Name: core_turret.cpp_CTurret_updatePatrol_FUN_005e3560
// Address: 005e3560
// Address Range: [[005e3560, 005e3610]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_updatePatrol_FUN_005e3560(CTurret *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_updatePatrol_FUN_005e3560(CTurret *this_ptr,float delta_time)

{
  CVector3f *target_pos;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  CVector3f *pCVar5;
  CBoundingBox3D CStack_54;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  CVector3f CStack_30;
  float fStack_24;
  float fStack_14;
  
  if (this_ptr->fire_sound_timer <= 0.0) {
    if (this_ptr->guard_zone_box_trigger != (CDemonActor *)0x0) {
      target_pos = &this_ptr->patrol_target;
      iVar4 = core_turret_cpp_CTurret_aimAtTarget_FUN_005e3280
                        (this_ptr,target_pos,delta_time * (float)0.33333333333333298);
      if (iVar4 != 0) {
        (*((this_ptr->guard_zone_box_trigger->vtable)._ub)->getBoundingBox)
                  (this_ptr->guard_zone_box_trigger,&CStack_54);
        fStack_3c = target_pos->x;
        fStack_38 = (this_ptr->patrol_target).y;
        iVar4 = 0;
        fStack_34 = (this_ptr->patrol_target).z;
        while( true ) {
          fStack_24 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.1,0.9);
          (this_ptr->patrol_target).x =
               CStack_54.min.x * fStack_24 + (1.0 - fStack_24) * CStack_54.max.x;
          fStack_14 = fStack_24;
          fStack_24 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.1,0.9);
          (this_ptr->patrol_target).z =
               CStack_54.min.z * fStack_24 + (1.0 - fStack_24) * CStack_54.max.z;
          (this_ptr->patrol_target).y = CStack_54.min.y;
          fStack_14 = fStack_24;
          pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (this_ptr->guard_zone_box_trigger,&CStack_30,target_pos);
          if (target_pos != pCVar5) {
            target_pos->x = pCVar5->x;
            (this_ptr->patrol_target).y = pCVar5->y;
            (this_ptr->patrol_target).z = pCVar5->z;
          }
          fVar1 = target_pos->x - fStack_3c;
          fVar3 = (this_ptr->patrol_target).y - fStack_38;
          fVar2 = (this_ptr->patrol_target).z - fStack_34;
          if (25.0f < fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) break;
          iVar4 = iVar4 + 1;
          if (4 < iVar4) {
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
