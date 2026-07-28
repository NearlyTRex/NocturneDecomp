// Name: core_boxactor.cpp_CBoxActor_process_FUN_0041e5e0
// Address: 0041e5e0
// Address Range: [[0041e5e0, 0041e9fd]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_0041e5e0(CBoxActor *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_0041e5e0(CBoxActor *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CLocation *actor_position;
  CVector3f *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  CKeyFramedModel *pCVar7;
  int iVar8;
  uint uVar9;
  CBoundingBox3D *pCVar10;
  float *pfVar11;
  double dVar12;
  byte auStack_d0 [56];
  CBoxActor *pCStack_98;
  float fStack_8c;
  float local_88;
  float local_84;
  float local_70;
  float local_6c;
  float local_68;
  CVector3f CStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  float local_30;
  ulonglong local_28;
  int local_20;
  int local_1c;
  float local_18;
  
  pCVar7 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
  iVar8 = pCVar7->frame_count;
  fVar3 = this_ptr->fps + this_ptr->anim_frame;
  this_ptr->anim_frame = fVar3;
  local_28 = (double)floor((double)fVar3);
  dVar12 = round(local_28);
  local_20 = (int)ROUND(dVar12);
  local_28._4_4_ = this_ptr->anim_frame - (float)local_20;
  if (local_20 < 0) {
    local_20 = iVar8 - -local_20 % iVar8;
  }
  else {
    local_20 = local_20 % iVar8;
  }
  local_1c = local_20;
  this_ptr->anim_frame = (float)local_20 + local_28._4_4_;
  if ((float)iVar8 <= this_ptr->anim_frame) {
    this_ptr->anim_frame = 0.0;
  }
  fStack_38 = (this_ptr->rpm).x * delta_time;
  local_34 = (this_ptr->rpm).y * delta_time;
  fStack_8c = fStack_38 * 0.1047198f;
  local_30 = (this_ptr->rpm).z * delta_time;
  local_88 = local_34 * 0.1047198f;
  local_84 = local_30 * 0.1047198f;
  pUVar1 = &(this_ptr->base).orient;
  fVar3 = (this_ptr->base).orient.vec.y;
  (pUVar1->vec).x = (pUVar1->vec).x + fStack_8c;
  fVar4 = (this_ptr->base).orient.vec.z;
  (this_ptr->base).orient.vec.y = fVar3 + local_88;
  (this_ptr->base).orient.vec.z = fVar4 + local_84;
  local_18 = (float)iVar8;
  local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00((this_ptr->base).orient.vec.x);
  fVar3 = (this_ptr->base).orient.vec.z;
  (this_ptr->base).orient.vec.x = local_18;
  local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(fVar3);
  fVar3 = (this_ptr->base).orient.vec.y;
  (this_ptr->base).orient.vec.z = local_18;
  local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(fVar3);
  cVar6 = this_ptr->loop_wav_name[0];
  (this_ptr->base).orient.vec.y = local_18;
  if (cVar6 != '\0') {
    iVar8 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0(0x02DC9450,this_ptr->sfx_handle);
    if (iVar8 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      iVar8 = 2;
      local_18 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x3f800000);
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005262d0((double)local_18,iVar8);
      uVar9 = (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->loop_wav_name);
      this_ptr->sfx_handle = uVar9;
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    }
  }
  if ((this_ptr->carrier_actor == (CDemonActor *)0x0) && (0.0 < this_ptr->weight_in_pounds)) {
    local_6c = (this_ptr->base).location.position.x;
    local_68 = (this_ptr->base).location.position.y;
    CStack_64.x = (this_ptr->base).location.position.z;
    core_box_cpp_CBox_process_FUN_0041acb0(&this_ptr->physics_box,delta_time);
    pUVar1 = &(this_ptr->base).orient;
    pCVar2 = &(this_ptr->physics_box).orientation;
    if ((CVector3f *)pUVar1 != pCVar2) {
      (pUVar1->vec).x = pCVar2->x;
      (this_ptr->base).orient.vec.y = (this_ptr->physics_box).orientation.y;
      (this_ptr->base).orient.vec.z = (this_ptr->physics_box).orientation.z;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(&this_ptr->base);
    pCVar10 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                        (&this_ptr->base,(CBoundingBox3D *)(auStack_d0 + 0x34));
    fStack_40 = (pCVar10->min).x + (pCVar10->max).x;
    fStack_3c = (pCVar10->min).y + (pCVar10->max).y;
    fStack_58 = fStack_40 * 0.5f;
    fStack_38 = (pCVar10->min).z + (pCVar10->max).z;
    fStack_54 = fStack_3c * 0.5f;
    fStack_50 = fStack_38 * 0.5f;
    local_70 = -fStack_58;
    local_6c = -fStack_54;
    local_68 = -fStack_50;
    pfVar11 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                 (this_ptr,&local_34,&local_70);
    fStack_4c = (this_ptr->physics_box).position.x + *pfVar11;
    fStack_48 = (this_ptr->physics_box).position.y + pfVar11[1];
    actor_position = &(this_ptr->base).location;
    fStack_44 = (this_ptr->physics_box).position.z + pfVar11[2];
    (actor_position->position).x = fStack_4c;
    (this_ptr->base).location.position.y = fStack_48;
    (this_ptr->base).location.position.z = fStack_44;
    fVar3 = (this_ptr->physics_box).linear_velocity.y;
    fVar4 = (this_ptr->physics_box).linear_velocity.x;
    fVar5 = (this_ptr->physics_box).linear_velocity.z;
    fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    if ((float)3 < fVar3) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)auStack_d0);
      auStack_d0._4_4_ = fVar3 * this_ptr->weight_in_pounds * 0.2f;
      auStack_d0._52_4_ = this_ptr;
      pCStack_98 = this_ptr;
      core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_00511880
                (0x01E57284,&CStack_64,&actor_position->position,(SDamageInfo *)auStack_d0);
      return;
    }
  }
  return;
}
