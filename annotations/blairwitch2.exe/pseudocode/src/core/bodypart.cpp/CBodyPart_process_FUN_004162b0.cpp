// Name: core_bodypart.cpp_CBodyPart_process_FUN_004162b0
// Address: 004162b0
// Address Range: [[004162b0, 004164aa]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_process_FUN_004162b0(CBodyPart *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_CBodyPart_process_FUN_004162b0(CBodyPart *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CVector3f *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  byte bVar8;
  float afStackY_100c [999];
  SDamageInfo SStack_60;
  float fStack_24;
  float afStack_20 [4];
  
  bVar8 = 0;
  if ((this_ptr->vertex_count < 3) || (this_ptr->tri_count < 1)) {
    (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
    core_bodypart_cpp_CBodyPart_setCounts_FUN_00415890(this_ptr,0,0);
    pCVar2 = &(this_ptr->bounding_box).max;
    if (pCVar2 != (CVector3f *)&DAT_0265370c) {
      pCVar2->x = _DAT_0265370c;
      (this_ptr->bounding_box).max.y = _DAT_02653710;
      (this_ptr->bounding_box).max.z = _DAT_02653714;
    }
    if (&this_ptr->bounding_box != (CBoundingBox3D *)pCVar2) {
      (this_ptr->bounding_box).min.x = pCVar2->x;
      (this_ptr->bounding_box).min.y = (this_ptr->bounding_box).max.y;
      (this_ptr->bounding_box).min.z = (this_ptr->bounding_box).max.z;
      return;
    }
  }
  else {
    if ((this_ptr->render_in_background == 0) || ((this_ptr->physics_box).is_valid != 0)) {
      if ((this_ptr->carried_by_actor != (CDemonActor *)0x0) ||
         ((this_ptr->physics_box).is_valid != 0)) {
        core_bodypart_cpp_CBodyPart_spawnGore_FUN_00417a70(this_ptr);
      }
      if (this_ptr->carried_by_actor == (CDemonActor *)0x0) {
        fVar3 = this_ptr->physics_timer - delta_time;
        this_ptr->physics_timer = fVar3;
        if (0.0 <= fVar3) {
          pfVar7 = (float *)((int)this_ptr + (uint)bVar8 * -8 + 0x24);
          fStack_24 = (this_ptr->base).location.position.x;
          afStack_20[(uint)bVar8 * -2] = *pfVar7;
          afStack_20[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] = pfVar7[(uint)bVar8 * -2 + 1];
          core_box_cpp_CBox_process_FUN_005b2290(&this_ptr->physics_box,delta_time);
          (this_ptr->base).location.position.x = (this_ptr->physics_box).position.x;
          (this_ptr->base).location.position.y = (this_ptr->physics_box).position.y;
          pUVar1 = &(this_ptr->base).orient;
          (this_ptr->base).location.position.z = (this_ptr->physics_box).position.z;
          pCVar2 = &(this_ptr->physics_box).orientation;
          if ((CVector3f *)pUVar1 != pCVar2) {
            (pUVar1->vec).x = pCVar2->x;
            (this_ptr->base).orient.vec.y = (this_ptr->physics_box).orientation.y;
            (this_ptr->base).orient.vec.z = (this_ptr->physics_box).orientation.z;
          }
          core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(&this_ptr->base);
          fVar3 = (this_ptr->physics_box).linear_velocity.y;
          fVar4 = (this_ptr->physics_box).linear_velocity.x;
          fVar5 = (this_ptr->physics_box).linear_velocity.z;
          if ((float)_DAT_005cbf32 < SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3)) {
            iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                              (0x01C38BC0,"disableBodyPartDamage");
            if (iVar6 == 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_60);
              SStack_60.damage_amount =
                   core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,15.0);
              SStack_60.attacker = &this_ptr->base;
              SStack_60.wielder = &this_ptr->base;
              afStack_20[2] = SStack_60.damage_amount;
              core_setcolid_cpp_FUN_00537f30
                        (g_CDemonSetPtr,&fStack_24,&(this_ptr->base).location,&SStack_60);
              core_bodypart_cpp_CBodyPart_processFires_FUN_004164b0(this_ptr,delta_time);
              return;
            }
          }
        }
        else {
          (this_ptr->physics_box).is_valid = 0;
          this_ptr->physics_timer = 0.0;
        }
      }
    }
    core_bodypart_cpp_CBodyPart_processFires_FUN_004164b0(this_ptr,delta_time);
  }
  return;
}
