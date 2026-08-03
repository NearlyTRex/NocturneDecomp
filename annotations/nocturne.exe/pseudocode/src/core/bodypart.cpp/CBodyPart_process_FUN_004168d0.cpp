// Name: core_bodypart.cpp_CBodyPart_process_FUN_004168d0
// Address: 004168d0
// Address Range: [[004168d0, 00416af1]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_process_FUN_004168d0(CBodyPart *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_CBodyPart_process_FUN_004168d0(CBodyPart *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  UOrientationVector *pUVar2;
  CVector3f *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  SDamageInfo local_54;
  CVector3f local_18;
  float local_c;
  
  if ((this_ptr->vertex_count < 3) || (this_ptr->tri_count < 1)) {
    (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
    core_bodypart_cpp_CBodyPart_setCounts_FUN_00415ee0(this_ptr,0,0);
    pCVar3 = &(this_ptr->bounding_box).max;
    if (pCVar3 != (CVector3f *)&DAT_02dd1184) {
      pCVar3->x = _DAT_02dd1184;
      (this_ptr->bounding_box).max.y = _DAT_02dd1188;
      (this_ptr->bounding_box).max.z = _DAT_02dd118c;
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
      core_bodypart_cpp_CBodyPart_processFires_FUN_00416b00(this_ptr,delta_time);
      return;
    }
    if ((this_ptr->carried_by_actor != (CDemonActor *)0x0) ||
       ((this_ptr->physics_box).is_valid != 0)) {
      core_bodypart_cpp_CBodyPart_spawnGore_FUN_00417eb0(this_ptr);
    }
    if (this_ptr->carried_by_actor == (CDemonActor *)0x0) {
      fVar4 = this_ptr->physics_timer - delta_time;
      this_ptr->physics_timer = fVar4;
      if (0.0 <= fVar4) {
        pCVar1 = &(this_ptr->base).location;
        local_18.x = (pCVar1->position).x;
        local_18.y = (this_ptr->base).location.position.y;
        local_18.z = (this_ptr->base).location.position.z;
        core_box_cpp_CBox_process_FUN_0041acb0(&this_ptr->physics_box,delta_time);
        (pCVar1->position).x = (this_ptr->physics_box).position.x;
        (this_ptr->base).location.position.y = (this_ptr->physics_box).position.y;
        (this_ptr->base).location.position.z = (this_ptr->physics_box).position.z;
        pUVar2 = &(this_ptr->base).orient;
        pCVar3 = &(this_ptr->physics_box).orientation;
        if ((CVector3f *)pUVar2 != pCVar3) {
          (pUVar2->vec).x = pCVar3->x;
          (this_ptr->base).orient.vec.y = (this_ptr->physics_box).orientation.y;
          (this_ptr->base).orient.vec.z = (this_ptr->physics_box).orientation.z;
        }
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(&this_ptr->base);
        fVar4 = (this_ptr->physics_box).linear_velocity.y;
        fVar5 = (this_ptr->physics_box).linear_velocity.x;
        fVar6 = (this_ptr->physics_box).linear_velocity.z;
        if (((float)3 < SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4)) &&
           (iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                              (0x01C03A10,"disableBodyPartDamage"), iVar7 == 0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_54);
          local_54.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(10.0,15.0);
          local_54.attacker = &this_ptr->base;
          local_54.wielder = &this_ptr->base;
          local_c = local_54.damage_amount;
          core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_00511880
                    (g_CDemonSet_PTR_005be368,&local_18,&(this_ptr->base).location.position,
                     &local_54);
          core_bodypart_cpp_CBodyPart_processFires_FUN_00416b00(this_ptr,delta_time);
          return;
        }
      }
      else {
        (this_ptr->physics_box).is_valid = 0;
        this_ptr->physics_timer = 0.0;
      }
    }
    core_bodypart_cpp_CBodyPart_processFires_FUN_00416b00(this_ptr,delta_time);
  }
  return;
}
