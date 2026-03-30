// Name: core_bodypart.cpp_CBodyPart_process_FUN_00419be0
// Address: 00419be0
// Address Range: [[00419be0, 00419db9]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_process_FUN_00419be0(CBodyPart *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_process_FUN_00419be0(CBodyPart *this_ptr,float delta_time)

{
  CVector3f *pCVar2;
  float fVar3;
  int iVar7;
  SDamageInfo local_54;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  CVector3f *pCVar3;
  UOrientationVector *pUVar2;
  float fVar5;
  float fVar4;
  float fVar6;
  CLocation *pCVar1;
  
  if ((this_ptr->vertex_count < 3) || (this_ptr->tri_count < 1)) {
    (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
    core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(this_ptr,0,0);
    pCVar3 = &(this_ptr->bounding_box).max;
    if ((UVector3 *)pCVar3 != &g_ZeroVector) {
      pCVar3->x = g_ZeroVector.f.x;
      (this_ptr->bounding_box).max.y = g_ZeroVector.f.y;
      (this_ptr->bounding_box).max.z = g_ZeroVector.f.z;
    }
    if (&this_ptr->bounding_box != (CBoundingBox3D *)pCVar3) {
      (this_ptr->bounding_box).min.x = pCVar3->x;
      (this_ptr->bounding_box).min.y = (this_ptr->bounding_box).max.y;
      (this_ptr->bounding_box).min.z = (this_ptr->bounding_box).max.z;
      return;
    }
  }
  else {
    if ((this_ptr->render_in_background != 0) && ((this_ptr->physics_box).is_valid == 0)) {
      core_bodypart_cpp_CBodyPart_processFires_FUN_00419e10(this_ptr,delta_time);
      return;
    }
    if ((this_ptr->carried_by_actor != (CDemonActor *)0x0) ||
       ((this_ptr->physics_box).is_valid != 0)) {
      core_bodypart_cpp_CBodyPart_spawnGore_FUN_0041b1b0(this_ptr);
    }
    if (this_ptr->carried_by_actor == (CDemonActor *)0x0) {
      fVar3 = this_ptr->physics_timer - delta_time;
      this_ptr->physics_timer = fVar3;
      if (0.0 <= fVar3) {
        pCVar1 = &(this_ptr->base).location;
        local_18 = (pCVar1->position).x;
        local_14 = (this_ptr->base).location.position.y;
        local_10 = (this_ptr->base).location.position.z;
        core_box_cpp_CBox_process_FUN_0041e2f0(&this_ptr->physics_box,delta_time);
        (pCVar1->position).x = (this_ptr->physics_box).position.x;
        (this_ptr->base).location.position.y = (this_ptr->physics_box).position.y;
        (this_ptr->base).location.position.z = (this_ptr->physics_box).position.z;
        pUVar2 = &(this_ptr->base).orient;
        pCVar2 = &(this_ptr->physics_box).orientation;
        if ((CVector3f *)pUVar2 != pCVar2) {
          (pUVar2->vec).x = pCVar2->x;
          (this_ptr->base).orient.vec.y = (this_ptr->physics_box).orientation.y;
          (this_ptr->base).orient.vec.z = (this_ptr->physics_box).orientation.z;
        }
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
        fVar4 = (this_ptr->physics_box).linear_velocity.y;
        fVar5 = (this_ptr->physics_box).linear_velocity.x;
        fVar6 = (this_ptr->physics_box).linear_velocity.z;
        if (((float)3 < SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4)) &&
           (iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                              (g_CEventListPtr,"disableBodyPartDamage"), iVar7 == 0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_54);
          local_54.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(10.0,15.0);
          local_54.attacker = &this_ptr->base;
          local_54.wielder = &this_ptr->base;
          local_c = local_54.damage_amount;
          core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
                    (g_CDemonSetPtr,(CVector3f *)&local_18,&(this_ptr->base).location.position,
                     &local_54);
          core_bodypart_cpp_CBodyPart_processFires_FUN_00419e10(this_ptr,delta_time);
          return;
        }
      }
      else {
        (this_ptr->physics_box).is_valid = 0;
        this_ptr->physics_timer = 0.0;
      }
    }
    core_bodypart_cpp_CBodyPart_processFires_FUN_00419e10(this_ptr,delta_time);
  }
  return;
}
