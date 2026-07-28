// Name: core_turret.cpp_CTurret_updatePatrol_FUN_0054a920
// Address: 0054a920
// Address Range: [[0054a920, 0054aaaa]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_updatePatrol_FUN_0054a920(CTurret *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_updatePatrol_FUN_0054a920(CTurret *this_ptr,float delta_time)

{
  CVector3f *input_local_point;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  CVector3f *pCVar8;
  int *in_stack_ffffffac;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_38;
  CVector3f CStack_28;
  float fStack_1c;
  
  if (this_ptr->fire_sound_timer <= 0.0) {
    if (this_ptr->guard_zone_box_trigger != (CDemonActor *)0x0) {
      input_local_point = &this_ptr->patrol_target;
      iVar7 = core_turret_cpp_CTurret_aimAtTarget_FUN_0054a640
                        (this_ptr,input_local_point,delta_time * (float)0.33333333333333298);
      if (iVar7 != 0) {
        (*((this_ptr->guard_zone_box_trigger->vtable)._ub)->getBoundingBox)
                  (this_ptr->guard_zone_box_trigger,(CBoundingBox3D *)&stack0xffffffac);
        fVar1 = input_local_point->x;
        fVar2 = (this_ptr->patrol_target).y;
        iVar7 = 0;
        fVar3 = (this_ptr->patrol_target).z;
        while( true ) {
          fStack_1c = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
          (this_ptr->patrol_target).x = fStack_4c * fStack_1c + (1.0 - fStack_1c) * fStack_40;
          fStack_1c = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
          (this_ptr->patrol_target).z = fStack_44 * fStack_1c + (1.0 - fStack_1c) * fStack_38;
          (this_ptr->patrol_target).y = fStack_48;
          pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                             (this_ptr->guard_zone_box_trigger,&CStack_28,input_local_point);
          if (input_local_point != pCVar8) {
            input_local_point->x = pCVar8->x;
            (this_ptr->patrol_target).y = pCVar8->y;
            (this_ptr->patrol_target).z = pCVar8->z;
          }
          fVar4 = input_local_point->x - fVar1;
          fVar6 = (this_ptr->patrol_target).y - fVar2;
          fVar5 = (this_ptr->patrol_target).z - fVar3;
          if (25.0f < fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) break;
          iVar7 = iVar7 + 1;
          if (4 < iVar7) {
            return;
          }
        }
      }
    }
  }
  else if ((this_ptr->base).fire_cooldown_timer <= 0.0) {
    (*((this_ptr->base).base.vtable._ub)->showEditorHelp)((CDemonActor *)this_ptr,in_stack_ffffffac)
    ;
  }
  return;
}
