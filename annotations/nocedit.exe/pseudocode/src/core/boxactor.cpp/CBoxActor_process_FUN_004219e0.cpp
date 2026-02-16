// Name: core_boxactor.cpp_CBoxActor_process_FUN_004219e0
// Address: 004219e0
// Address Range: [[004219e0, 00421c06] [00421c4a, 00421dfd]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_004219e0(CBoxActor *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_004219e0(CBoxActor *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CLocation *actor_position;
  float fVar2;
  float fVar3;
  char cVar4;
  CKeyFramedModel *pCVar5;
  int iVar6;
  uint uVar7;
  CBoundingBox3D *pCVar8;
  CVector3f *pCVar9;
  double dVar10;
  byte auStack_d0 [56];
  CBoxActor *pCStack_98;
  float fStack_8c;
  float local_88;
  float local_84;
  CVector3f local_70;
  byte auStack_64 [52];
  CDemonActor *local_30;
  ulonglong local_28;
  int local_20;
  int local_1c;
  float local_18;
  
  pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  iVar6 = pCVar5->frame_count;
  fVar2 = this_ptr->fps + (float)this_ptr->unk2;
  this_ptr->unk2 = (int)fVar2;
  local_28 = floor((double)fVar2);
  dVar10 = round(local_28);
  local_20 = (int)ROUND(dVar10);
  fVar2 = (float)this_ptr->unk2 - (float)local_20;
  local_28 = (double)CONCAT44(fVar2,(uint)local_28);
  if (local_20 < 0) {
    local_20 = iVar6 - -local_20 % iVar6;
  }
  else {
    local_20 = local_20 % iVar6;
  }
  local_1c = local_20;
  this_ptr->unk2 = (int)((float)local_20 + fVar2);
  if ((float)iVar6 <= (float)this_ptr->unk2) {
    this_ptr->unk2 = 0;
  }
  auStack_64._44_4_ = (this_ptr->rpm).x * delta_time;
  auStack_64._48_4_ = (this_ptr->rpm).y * delta_time;
  fStack_8c = (float)auStack_64._44_4_ * 0.1047198f;
  local_30 = (CDemonActor *)((this_ptr->rpm).z * delta_time);
  local_88 = (float)auStack_64._48_4_ * 0.1047198f;
  local_84 = (float)local_30 * 0.1047198f;
  pUVar1 = &(this_ptr->base).orient;
  fVar2 = (this_ptr->base).orient.vec.y;
  (pUVar1->vec).x = (pUVar1->vec).x + fStack_8c;
  fVar3 = (this_ptr->base).orient.vec.z;
  (this_ptr->base).orient.vec.y = fVar2 + local_88;
  (this_ptr->base).orient.vec.z = fVar3 + local_84;
  local_18 = (float)iVar6;
  local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((this_ptr->base).orient.vec.x);
  fVar2 = (this_ptr->base).orient.vec.z;
  (this_ptr->base).orient.vec.x = local_18;
  local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fVar2);
  fVar2 = (this_ptr->base).orient.vec.y;
  (this_ptr->base).orient.vec.z = local_18;
  local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fVar2);
  cVar4 = this_ptr->loop_wav_name[0];
  (this_ptr->base).orient.vec.y = local_18;
  if (cVar4 != '\0') {
    iVar6 = core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80(g_CSoundPtr,this_ptr->sfx_handle);
    if (iVar6 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      iVar6 = 2;
      local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0((double)local_18,iVar6);
      uVar7 = (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->loop_wav_name);
      this_ptr->sfx_handle = uVar7;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
  }
  if ((this_ptr->carrier_actor == (CDemonActor *)0x0) && (0.0 < this_ptr->weight_in_pounds)) {
    local_70.y = (this_ptr->base).location.position.x;
    local_70.z = (this_ptr->base).location.position.y;
    auStack_64._0_4_ = (this_ptr->base).location.position.z;
    core_box_cpp_CBox_process_FUN_0041e2f0((CBox *)&this_ptr->sim_box,delta_time);
    pUVar1 = &(this_ptr->base).orient;
    if (pUVar1 != (UOrientationVector *)(this_ptr->unk4 + 8)) {
      (pUVar1->vec).x = *(float *)(this_ptr->unk4 + 8);
      (this_ptr->base).orient.vec.y = *(float *)(this_ptr->unk4 + 0xc);
      (this_ptr->base).orient.vec.z = *(float *)(this_ptr->unk4 + 0x10);
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
    pCVar8 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                       (&this_ptr->base,(CBoundingBox3D *)(auStack_d0 + 0x34));
    auStack_64._36_4_ = (pCVar8->min).x + (pCVar8->max).x;
    auStack_64._40_4_ = (pCVar8->min).y + (pCVar8->max).y;
    auStack_64._12_4_ = (float)auStack_64._36_4_ * 0.5f;
    auStack_64._44_4_ = (pCVar8->min).z + (pCVar8->max).z;
    auStack_64._16_4_ = (float)auStack_64._40_4_ * 0.5f;
    auStack_64._20_4_ = (float)auStack_64._44_4_ * 0.5f;
    local_70.x = -(float)auStack_64._12_4_;
    local_70.y = -(float)auStack_64._16_4_;
    local_70.z = -(float)auStack_64._20_4_;
    pCVar9 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (&this_ptr->base,(CVector3f *)(auStack_64 + 0x30),&local_70);
    auStack_64._24_4_ = (float)this_ptr->sim_box + pCVar9->x;
    auStack_64._28_4_ = *(float *)this_ptr->unk4 + pCVar9->y;
    actor_position = &(this_ptr->base).location;
    auStack_64._32_4_ = *(float *)(this_ptr->unk4 + 4) + pCVar9->z;
    (actor_position->position).x = (float)auStack_64._24_4_;
    (this_ptr->base).location.position.y = (float)auStack_64._28_4_;
    (this_ptr->base).location.position.z = (float)auStack_64._32_4_;
    fVar2 = SQRT(*(float *)(this_ptr->unk4 + 0x44) * *(float *)(this_ptr->unk4 + 0x44) +
                 *(float *)(this_ptr->unk4 + 0x3c) * *(float *)(this_ptr->unk4 + 0x3c) +
                 *(float *)(this_ptr->unk4 + 0x40) * *(float *)(this_ptr->unk4 + 0x40));
    if ((float)3 < fVar2) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_d0);
      auStack_d0._4_4_ = fVar2 * this_ptr->weight_in_pounds * 0.2f;
      auStack_d0._52_4_ = this_ptr;
      pCStack_98 = this_ptr;
      core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
                (g_CDemonSetPtr,(SDamageInfo *)auStack_64,&actor_position->position,auStack_d0);
      return;
    }
  }
  return;
}
