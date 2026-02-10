// Name: core_bodypart.cpp_CBodyPart_process_FUN_00419be0
// Address: 00419be0
// Address Range: [[00419be0, 00419db9]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_process_FUN_00419be0(CBodyPart *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_process_FUN_00419be0(CBodyPart *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  UOrientationVector *pUVar2;
  CVector3f *pCVar3;
  float fVar4;
  int iVar5;
  SDamageInfo local_54;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if ((this_ptr->vertex_count < 3) || (this_ptr->tri_count < 1)) {
    (this_ptr->base).was_created = 2;
    core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(this_ptr);
    pCVar3 = (CVector3f *)(this_ptr->unk1 + 0xc);
    if (pCVar3 != &g_ZeroVector) {
      pCVar3->x = g_ZeroVector.x;
      *(float *)(this_ptr->unk1 + 0x10) = g_ZeroVector.y;
      *(float *)(this_ptr->unk1 + 0x14) = g_ZeroVector.z;
    }
    if ((CVector3f *)this_ptr->unk1 != pCVar3) {
      *(float *)this_ptr->unk1 = pCVar3->x;
      *(uint *)(this_ptr->unk1 + 4) = *(uint *)(this_ptr->unk1 + 0x10);
      *(uint *)(this_ptr->unk1 + 8) = *(uint *)(this_ptr->unk1 + 0x14);
      return;
    }
  }
  else {
    if ((this_ptr->render_in_background != 0) && (*(int *)(this_ptr->unk8 + 0x250) == 0)) {
      core_bodypart_cpp_CBodyPart_FUN_00419e10(this_ptr);
      return;
    }
    if ((this_ptr->carried_by_actor != (CDemonActor *)0x0) ||
       (*(int *)(this_ptr->unk8 + 0x250) != 0)) {
      core_bodypart_cpp_CBodyPart_FUN_0041b1b0(this_ptr);
    }
    if (this_ptr->carried_by_actor == (CDemonActor *)0x0) {
      fVar4 = *(float *)this_ptr->unk6 - delta_time;
      *(float *)this_ptr->unk6 = fVar4;
      if (0.0 <= fVar4) {
        pCVar1 = &(this_ptr->base).location;
        local_18 = (pCVar1->position).x;
        local_14 = (this_ptr->base).location.position.y;
        local_10 = (this_ptr->base).location.position.z;
        core_box_cpp_CBox_process_FUN_0041e2f0((CBox *)&this_ptr->sim_box,delta_time);
        (pCVar1->position).x = (float)this_ptr->sim_box;
        (this_ptr->base).location.position.y = *(float *)this_ptr->unk8;
        (this_ptr->base).location.position.z = *(float *)(this_ptr->unk8 + 4);
        pUVar2 = &(this_ptr->base).orient;
        if (pUVar2 != (UOrientationVector *)(this_ptr->unk8 + 8)) {
          (pUVar2->vec).x = *(float *)(this_ptr->unk8 + 8);
          (this_ptr->base).orient.vec.y = *(float *)(this_ptr->unk8 + 0xc);
          (this_ptr->base).orient.vec.z = *(float *)(this_ptr->unk8 + 0x10);
        }
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
        if (((float)3 <
             SQRT(*(float *)(this_ptr->unk8 + 0x44) * *(float *)(this_ptr->unk8 + 0x44) +
                  *(float *)(this_ptr->unk8 + 0x3c) * *(float *)(this_ptr->unk8 + 0x3c) +
                  *(float *)(this_ptr->unk8 + 0x40) * *(float *)(this_ptr->unk8 + 0x40))) &&
           (iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                              (g_CEventListPtr,"disableBodyPartDamage"), iVar5 == 0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_54);
          local_54.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
          local_54.attacker = &this_ptr->base;
          local_54.wielder = &this_ptr->base;
          local_c = local_54.damage_amount;
          core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
                    (g_CDemonSetPtr,(SDamageInfo *)&local_18,&(this_ptr->base).location.position,
                     &local_54);
          core_bodypart_cpp_CBodyPart_FUN_00419e10(this_ptr);
          return;
        }
      }
      else {
        this_ptr->unk8[0x250] = '\0';
        this_ptr->unk8[0x251] = '\0';
        this_ptr->unk8[0x252] = '\0';
        this_ptr->unk8[0x253] = '\0';
        this_ptr->unk6[0] = '\0';
        this_ptr->unk6[1] = '\0';
        this_ptr->unk6[2] = '\0';
        this_ptr->unk6[3] = '\0';
      }
    }
    core_bodypart_cpp_CBodyPart_FUN_00419e10(this_ptr);
  }
  return;
}
