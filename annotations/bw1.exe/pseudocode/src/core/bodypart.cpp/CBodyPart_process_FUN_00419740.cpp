// Name: core_bodypart.cpp_CBodyPart_process_FUN_00419740
// Address: 00419740
// Address Range: [[00419740, 0041993a]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_process_FUN_00419740(CBodyPart *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_process_FUN_00419740(CBodyPart *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CVector3f *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  uint auStackY_100c [999];
  SDamageInfo SStack_60;
  CVector3f CStack_24;
  float fStack_18;
  
  bVar8 = 0;
  if ((this_ptr->vertex_count < 3) || (this_ptr->tri_count < 1)) {
    (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
    core_bodypart_cpp_CBodyPart_setCounts_FUN_00418d00(this_ptr,0,0);
    pCVar2 = &(this_ptr->bounding_box).max;
    if (pCVar2 != &g_CVector3f_02c8af28) {
      pCVar2->x = g_CVector3f_02c8af28.x;
      (this_ptr->bounding_box).max.y = g_CVector3f_02c8af28.y;
      (this_ptr->bounding_box).max.z = g_CVector3f_02c8af28.z;
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
        core_bodypart_cpp_CBodyPart_spawnGore_FUN_0041aef0(this_ptr);
      }
      if (this_ptr->carried_by_actor == (CDemonActor *)0x0) {
        fVar3 = this_ptr->physics_timer - delta_time;
        this_ptr->physics_timer = fVar3;
        if (0.0 <= fVar3) {
          puVar7 = (uint *)((int)this_ptr + (uint)bVar8 * -8 + 0x24);
          CStack_24.x = (this_ptr->base).location.position.x;
          *(uint *)((int)&CStack_24 + (uint)bVar8 * -8 + 4) = *puVar7;
          *(uint *)((int)&CStack_24 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
               puVar7[(uint)bVar8 * -2 + 1];
          core_box_cpp_CBox_process_FUN_0041e0d0(&this_ptr->physics_box,delta_time);
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
          core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(&this_ptr->base);
          fVar3 = (this_ptr->physics_box).linear_velocity.y;
          fVar4 = (this_ptr->physics_box).linear_velocity.x;
          fVar5 = (this_ptr->physics_box).linear_velocity.z;
          if ((float)3 < SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3)) {
            iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                              (g_CEventList_PTR_0061b4d0,"disableBodyPartDamage");
            if (iVar6 == 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_60);
              SStack_60.damage_amount =
                   core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,15.0);
              SStack_60.attacker = &this_ptr->base;
              SStack_60.wielder = &this_ptr->base;
              fStack_18 = SStack_60.damage_amount;
              core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_00559350
                        (g_CDemonSetPtr,&CStack_24,&(this_ptr->base).location.position,&SStack_60);
              core_bodypart_cpp_CBodyPart_processFires_FUN_00419940(this_ptr,delta_time);
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
    core_bodypart_cpp_CBodyPart_processFires_FUN_00419940(this_ptr,delta_time);
  }
  return;
}
