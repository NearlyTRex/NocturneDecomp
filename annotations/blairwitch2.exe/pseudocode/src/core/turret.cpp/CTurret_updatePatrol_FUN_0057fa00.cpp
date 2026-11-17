// Name: core_turret.cpp_CTurret_updatePatrol_FUN_0057fa00
// Address: 0057fa00
// Address Range: [[0057fa00, 0057fbb9]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_updatePatrol_FUN_0057fa00(CTurret *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_updatePatrol_FUN_0057fa00(CTurret *this_ptr,float delta_time)

{
  CVector3f *target_pos;
  CDemonActor *this_ptr_00;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint *puVar5;
  float *pfVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_1030 [1001];
  CDemonActor *in_stack_ffffff80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_64;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  float fStack_30;
  float afStack_2c [6];
  CVector3f *pCStack_14;
  
  bVar8 = 0;
  if (this_ptr->fire_sound_timer <= 0.0) {
    if (this_ptr->guard_zone_box_trigger != (CDemonActor *)0x0) {
      target_pos = &this_ptr->patrol_target;
      iVar4 = core_turret_cpp_CTurret_aimAtTarget_FUN_0057f700
                        (this_ptr,target_pos,delta_time * (float)0.33333333333333298);
      if (iVar4 != 0) {
        (*((this_ptr->guard_zone_box_trigger->vtable)._ub)->getBoundingBox)
                  (this_ptr->guard_zone_box_trigger,(CBoundingBox3D *)in_stack_ffffff80);
        puVar5 = (uint *)&stack0xffffffa0;
        puVar7 = (uint *)&stack0xffffff80;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
        iVar4 = 0;
        pfVar6 = (float *)((int)this_ptr + (uint)bVar8 * -8 + 0x9ac);
        fStack_30 = (this_ptr->patrol_target).x;
        pCStack_14 = target_pos;
        afStack_2c[(uint)bVar8 * -2] = *pfVar6;
        afStack_2c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] = pfVar6[(uint)bVar8 * -2 + 1];
        while( true ) {
          afStack_2c[2] = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.1,0.9);
          (this_ptr->patrol_target).x =
               fStack_78 * afStack_2c[2] + (1.0 - afStack_2c[2]) * fStack_6c;
          afStack_2c[2] = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.1,0.9);
          this_ptr_00 = this_ptr->guard_zone_box_trigger;
          (this_ptr->patrol_target).y = fStack_74;
          (this_ptr->patrol_target).z =
               fStack_70 * afStack_2c[2] + (1.0 - afStack_2c[2]) * fStack_64;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                    (this_ptr_00,target_pos,&CStack_3c);
          CStack_48.x = CStack_3c.x;
          *(uint *)((int)&CStack_48 + (uint)bVar8 * -8 + 4) =
               *(uint *)((int)&CStack_3c + (uint)bVar8 * -8 + 4);
          *(uint *)((int)&CStack_48 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
               *(uint *)((int)&CStack_3c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          if (target_pos != &CStack_48) {
            target_pos->x = CStack_48.x;
            (this_ptr->patrol_target).y = CStack_48.y;
            (this_ptr->patrol_target).z = CStack_48.z;
          }
          fVar1 = pCStack_14->x - fStack_30;
          fVar3 = pCStack_14->y - afStack_2c[0];
          fVar2 = pCStack_14->z - afStack_2c[1];
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
    (*(((this_ptr->base).base.vtable._uc)->_uc).isGrabbable)
              ((CCharacter *)this_ptr,in_stack_ffffff80);
  }
  return;
}
