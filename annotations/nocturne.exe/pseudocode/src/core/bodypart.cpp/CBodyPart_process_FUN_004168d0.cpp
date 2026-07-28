// Name: core_bodypart.cpp_CBodyPart_process_FUN_004168d0
// Address: 004168d0
// Address Range: [[004168d0, 00416af1]]
// Convention: unknown
// Signature: void core_bodypart_cpp_CBodyPart_process_FUN_004168d0(CBodyPart *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bodypart_cpp_CBodyPart_process_FUN_004168d0(CBodyPart *param_1,float param_2)

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
  
  if ((param_1->vertex_count < 3) || (param_1->tri_count < 1)) {
    (param_1->base).lifecycle_state = ACTOR_DESTROYED;
    core_bodypart_cpp_CBodyPart_setCounts_FUN_00415ee0(param_1,0,0);
    pCVar3 = &(param_1->bounding_box).max;
    if (pCVar3 != (CVector3f *)&DAT_02dd1184) {
      pCVar3->x = _DAT_02dd1184;
      (param_1->bounding_box).max.y = _DAT_02dd1188;
      (param_1->bounding_box).max.z = _DAT_02dd118c;
    }
    if (&param_1->bounding_box != (CBoundingBox3D *)pCVar3) {
      (param_1->bounding_box).min.x = pCVar3->x;
      (param_1->bounding_box).min.y = (param_1->bounding_box).max.y;
      (param_1->bounding_box).min.z = (param_1->bounding_box).max.z;
      return;
    }
  }
  else {
    if ((param_1->render_in_background != 0) && ((param_1->physics_box).is_valid == 0)) {
      core_bodypart_cpp_CBodyPart_processFires_FUN_00416b00(param_1,param_2);
      return;
    }
    if ((param_1->carried_by_actor != (CDemonActor *)0x0) || ((param_1->physics_box).is_valid != 0))
    {
      core_bodypart_cpp_CBodyPart_spawnGore_FUN_00417eb0(param_1);
    }
    if (param_1->carried_by_actor == (CDemonActor *)0x0) {
      fVar4 = param_1->physics_timer - param_2;
      param_1->physics_timer = fVar4;
      if (0.0 <= fVar4) {
        pCVar1 = &(param_1->base).location;
        local_18.x = (pCVar1->position).x;
        local_18.y = (param_1->base).location.position.y;
        local_18.z = (param_1->base).location.position.z;
        core_box_cpp_CBox_process_FUN_0041acb0(&param_1->physics_box,param_2);
        (pCVar1->position).x = (param_1->physics_box).position.x;
        (param_1->base).location.position.y = (param_1->physics_box).position.y;
        (param_1->base).location.position.z = (param_1->physics_box).position.z;
        pUVar2 = &(param_1->base).orient;
        pCVar3 = &(param_1->physics_box).orientation;
        if ((CVector3f *)pUVar2 != pCVar3) {
          (pUVar2->vec).x = pCVar3->x;
          (param_1->base).orient.vec.y = (param_1->physics_box).orientation.y;
          (param_1->base).orient.vec.z = (param_1->physics_box).orientation.z;
        }
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(&param_1->base);
        fVar4 = (param_1->physics_box).linear_velocity.y;
        fVar5 = (param_1->physics_box).linear_velocity.x;
        fVar6 = (param_1->physics_box).linear_velocity.z;
        if (((float)3 < SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4)) &&
           (iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                              (0x01C03A10,"disableBodyPartDamage"), iVar7 == 0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_54);
          local_54.damage_amount =
               (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41200000,0x41700000);
          local_54.attacker = &param_1->base;
          local_54.wielder = &param_1->base;
          local_c = local_54.damage_amount;
          core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_00511880
                    (0x01E57284,&local_18,&(param_1->base).location.position,&local_54);
          core_bodypart_cpp_CBodyPart_processFires_FUN_00416b00(param_1,param_2);
          return;
        }
      }
      else {
        (param_1->physics_box).is_valid = 0;
        param_1->physics_timer = 0.0;
      }
    }
    core_bodypart_cpp_CBodyPart_processFires_FUN_00416b00(param_1,param_2);
  }
  return;
}
