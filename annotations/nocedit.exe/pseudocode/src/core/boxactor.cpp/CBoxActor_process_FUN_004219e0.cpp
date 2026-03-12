// Name: core_boxactor.cpp_CBoxActor_process_FUN_004219e0
// Address: 004219e0
// Address Range: [[004219e0, 00421c06] [00421c4a, 00421dfd]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_004219e0(CBoxActor *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_004219e0(CBoxActor *this_ptr,float delta_time)

{
  UOrientationVector *pUVar2;
  CLocation *actor_position_00;
  CVector3f *pCVar3;
  float fVar5;
  float fVar6;
  CKeyFramedModel *pCVar6;
  int iVar7;
  uint uVar8;
  CBoundingBox3D *pCVar9;
  CVector3f *pCVar10;
  int iVar8;
  byte auStack_cc [56];
  CBoxActor *pCStack_94;
  float local_88;
  float local_84;
  float local_80;
  CVector3f local_6c;
  byte auStack_60 [52];
  CDemonActor *local_2c;
  double local_28;
  float local_20;
  int local_1c;
  int local_18;
  float local_14;
  UOrientationVector *pUVar1;
  CLocation *actor_position;
  float fVar4;
  char cVar5;
  float fVar2;
  float fVar3;
  
  pCVar6 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  fVar6 = (float)pCVar6->frame_count;
  fVar5 = this_ptr->fps + this_ptr->anim_frame;
  this_ptr->anim_frame = fVar5;
  local_28 = floor((double)fVar5);
  iVar8 = (int)ROUND(ROUND(local_28));
  local_20 = this_ptr->anim_frame - (float)iVar8;
  if (iVar8 < 0) {
    local_1c = (int)fVar6 - -iVar8 % (int)fVar6;
  }
  else {
    local_1c = iVar8 % (int)fVar6;
  }
  local_18 = local_1c;
  this_ptr->anim_frame = (float)local_1c + local_20;
  if ((float)(int)fVar6 <= this_ptr->anim_frame) {
    this_ptr->anim_frame = 0.0;
  }
  auStack_60._44_4_ = (this_ptr->rpm).x * delta_time;
  auStack_60._48_4_ = (this_ptr->rpm).y * delta_time;
  local_88 = (float)auStack_60._44_4_ * 0.1047198f;
  local_2c = (CDemonActor *)((this_ptr->rpm).z * delta_time);
  local_84 = (float)auStack_60._48_4_ * 0.1047198f;
  local_80 = (float)local_2c * 0.1047198f;
  pUVar1 = &(this_ptr->base).orient;
  fVar2 = (this_ptr->base).orient.vec.y;
  (pUVar1->vec).x = (pUVar1->vec).x + local_88;
  fVar3 = (this_ptr->base).orient.vec.z;
  (this_ptr->base).orient.vec.y = fVar2 + local_84;
  (this_ptr->base).orient.vec.z = fVar3 + local_80;
  local_14 = fVar6;
  local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((this_ptr->base).orient.vec.x);
  fVar6 = (this_ptr->base).orient.vec.z;
  (this_ptr->base).orient.vec.x = local_14;
  local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fVar6);
  fVar6 = (this_ptr->base).orient.vec.y;
  (this_ptr->base).orient.vec.z = local_14;
  local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fVar6);
  cVar5 = this_ptr->loop_wav_name[0];
  (this_ptr->base).orient.vec.y = local_14;
  if (cVar5 != '\0') {
    iVar7 = core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80(g_CSoundPtr,this_ptr->sfx_handle);
    if (iVar7 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      iVar8 = 2;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0((double)local_14,iVar8);
      uVar8 = (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->loop_wav_name);
      this_ptr->sfx_handle = uVar8;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
  }
  if ((this_ptr->carrier_actor == (CDemonActor *)0x0) && (0.0 < this_ptr->weight_in_pounds)) {
    local_6c.y = (this_ptr->base).location.position.x;
    local_6c.z = (this_ptr->base).location.position.y;
    auStack_60._0_4_ = (this_ptr->base).location.position.z;
    core_box_cpp_CBox_process_FUN_0041e2f0(&this_ptr->physics_box,delta_time);
    pUVar2 = &(this_ptr->base).orient;
    pCVar3 = &(this_ptr->physics_box).orientation;
    if ((CVector3f *)pUVar2 != pCVar3) {
      (pUVar2->vec).x = pCVar3->x;
      (this_ptr->base).orient.vec.y = (this_ptr->physics_box).orientation.y;
      (this_ptr->base).orient.vec.z = (this_ptr->physics_box).orientation.z;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
    pCVar9 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                       (&this_ptr->base,(CBoundingBox3D *)(auStack_cc + 0x34));
    auStack_60._36_4_ = (pCVar9->min).x + (pCVar9->max).x;
    auStack_60._40_4_ = (pCVar9->min).y + (pCVar9->max).y;
    auStack_60._12_4_ = (float)auStack_60._36_4_ * 0.5f;
    auStack_60._44_4_ = (pCVar9->min).z + (pCVar9->max).z;
    auStack_60._16_4_ = (float)auStack_60._40_4_ * 0.5f;
    auStack_60._20_4_ = (float)auStack_60._44_4_ * 0.5f;
    local_6c.x = -(float)auStack_60._12_4_;
    local_6c.y = -(float)auStack_60._16_4_;
    local_6c.z = -(float)auStack_60._20_4_;
    pCVar10 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        (&this_ptr->base,(CVector3f *)(auStack_60 + 0x30),&local_6c);
    auStack_60._24_4_ = (this_ptr->physics_box).position.x + pCVar10->x;
    auStack_60._28_4_ = (this_ptr->physics_box).position.y + pCVar10->y;
    actor_position_00 = &(this_ptr->base).location;
    auStack_60._32_4_ = (this_ptr->physics_box).position.z + pCVar10->z;
    (actor_position_00->position).x = (float)auStack_60._24_4_;
    (this_ptr->base).location.position.y = (float)auStack_60._28_4_;
    (this_ptr->base).location.position.z = (float)auStack_60._32_4_;
    fVar6 = (this_ptr->physics_box).linear_velocity.y;
    fVar5 = (this_ptr->physics_box).linear_velocity.x;
    fVar4 = (this_ptr->physics_box).linear_velocity.z;
    fVar6 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6);
    if ((float)3 < fVar6) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_cc);
      auStack_cc._4_4_ = fVar6 * this_ptr->weight_in_pounds * 0.2f;
      auStack_cc._52_4_ = this_ptr;
      pCStack_94 = this_ptr;
      core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
                (g_CDemonSetPtr,(SDamageInfo *)auStack_60,&actor_position_00->position,auStack_cc);
      return;
    }
  }
  return;
}
