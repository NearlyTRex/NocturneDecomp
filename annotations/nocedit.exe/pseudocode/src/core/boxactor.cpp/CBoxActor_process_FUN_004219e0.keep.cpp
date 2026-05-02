// Name: core_boxactor.cpp_CBoxActor_process_FUN_004219e0
// Address: 004219e0
// MANUAL RECONSTRUCTION
// Address Range: [[004219e0, 00421dfd]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_004219e0(CBoxActor *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_004219e0(CBoxActor *this_ptr,float delta_time)

{
  UOrientationVector *pUVar2;
  CLocation *actor_position_00;
  CVector3f *pCVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CKeyFramedModel *pCVar6;
  int iVar7;
  uint uVar8;
  CBoundingBox3D *pCVar9;
  CVector3f *pCVar10;
  int iVar9;
  SDamageInfo local_cc;
  CBoundingBox3D local_cc_bbox;
  CVector3f local_6c;
  CVector3f local_60;
  float local_30;
  float local_2c;
  double local_28;
  CVector3f local_30_vec;
  float local_20;
  int local_1c;
  float local_14;
  UOrientationVector *pUVar1;
  float fVar4;
  char cVar5;
  float fVar2;
  float fVar3;
  int local_18;
  
  pCVar6 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  fVar8 = (float)pCVar6->frame_count;
  fVar5 = this_ptr->fps + this_ptr->anim_frame;
  this_ptr->anim_frame = fVar5;
  local_28 = floor((double)fVar5);
  iVar9 = (int)ROUND(ROUND(local_28));
  local_20 = this_ptr->anim_frame - (float)iVar9;
  if (iVar9 < 0) {
    local_1c = (int)fVar8 - -iVar9 % (int)fVar8;
  }
  else {
    local_1c = iVar9 % (int)fVar8;
  }
  local_18 = local_1c;
  this_ptr->anim_frame = (float)local_1c + local_20;
  if ((float)(int)fVar8 <= this_ptr->anim_frame) {
    this_ptr->anim_frame = 0.0;
  }
  local_30 = (this_ptr->rpm).y * delta_time;
  local_2c = (this_ptr->rpm).z * delta_time;
  fVar6 = local_30 * 0.1047198f;
  fVar5 = local_2c * 0.1047198f;
  pUVar1 = &(this_ptr->base).orient;
  fVar2 = (this_ptr->base).orient.vec.y;
  (pUVar1->vec).x = (pUVar1->vec).x + (this_ptr->rpm).x * delta_time * 0.1047198f;
  fVar3 = (this_ptr->base).orient.vec.z;
  (this_ptr->base).orient.vec.y = fVar2 + fVar6;
  (this_ptr->base).orient.vec.z = fVar3 + fVar5;
  local_14 = fVar8;
  local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((this_ptr->base).orient.vec.x);
  fVar8 = (this_ptr->base).orient.vec.z;
  (this_ptr->base).orient.vec.x = local_14;
  local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fVar8);
  fVar8 = (this_ptr->base).orient.vec.y;
  (this_ptr->base).orient.vec.z = local_14;
  local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fVar8);
  cVar5 = this_ptr->loop_wav_name[0];
  (this_ptr->base).orient.vec.y = local_14;
  if (cVar5 != '\0') {
    iVar7 = core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80(g_CSoundPtr,this_ptr->sfx_handle);
    if (iVar7 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      iVar9 = 2;
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,1.0);
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0((double)local_14,iVar9);
      uVar8 = (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->loop_wav_name);
      this_ptr->sfx_handle = uVar8;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
  }
  if ((this_ptr->carrier_actor == (CDemonActor *)0x0) && (0.0 < this_ptr->weight_in_pounds)) {
    local_6c.y = (this_ptr->base).location.position.x;
    local_6c.z = (this_ptr->base).location.position.y;
    local_60.x = (this_ptr->base).location.position.z;
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
                       (&this_ptr->base,&local_cc_bbox);
    local_6c.x = -(((pCVar9->min).x + (pCVar9->max).x) * 0.5f);
    local_6c.y = -(((pCVar9->min).y + (pCVar9->max).y) * 0.5f);
    local_6c.z = -(((pCVar9->min).z + (pCVar9->max).z) * 0.5f);
    pCVar10 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        (&this_ptr->base,&local_30_vec,&local_6c);
    fVar8 = (this_ptr->physics_box).position.y;
    fVar5 = pCVar10->y;
    actor_position_00 = &(this_ptr->base).location;
    fVar6 = (this_ptr->physics_box).position.z;
    fVar7 = pCVar10->z;
    (actor_position_00->position).x = (this_ptr->physics_box).position.x + pCVar10->x;
    (this_ptr->base).location.position.y = fVar8 + fVar5;
    (this_ptr->base).location.position.z = fVar6 + fVar7;
    fVar8 = (this_ptr->physics_box).linear_velocity.y;
    fVar5 = (this_ptr->physics_box).linear_velocity.x;
    fVar4 = (this_ptr->physics_box).linear_velocity.z;
    fVar8 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar8 * fVar8);
    if ((float)3 < fVar8) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_cc);
      local_cc.damage_amount = fVar8 * this_ptr->weight_in_pounds * 0.2f;
      local_cc.attacker = &this_ptr->base;
      local_cc.wielder = &this_ptr->base;
      core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
                (g_CDemonSetPtr,&local_60,&actor_position_00->position,&local_cc);
      return;
    }
  }
  return;
}
