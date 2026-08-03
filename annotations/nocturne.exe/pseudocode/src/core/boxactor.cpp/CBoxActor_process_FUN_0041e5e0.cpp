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
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  CKeyFramedModel *pCVar6;
  int iVar7;
  uint uVar8;
  CBoundingBox3D *pCVar9;
  CVector3f *pCVar10;
  double dVar11;
  byte auStack_d0 [56];
  CBoxActor *pCStack_98;
  float fStack_8c;
  float local_88;
  float local_84;
  CVector3f local_70;
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
  CVector3f local_34;
  ulonglong local_28;
  int local_20;
  int local_1c;
  float local_18;
  
  pCVar6 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
  iVar7 = pCVar6->frame_count;
  fVar2 = this_ptr->fps + this_ptr->anim_frame;
  this_ptr->anim_frame = fVar2;
  local_28 = floor((double)fVar2);
  dVar11 = round(local_28);
  local_20 = (int)ROUND(dVar11);
  fVar2 = this_ptr->anim_frame - (float)local_20;
  local_28 = __BITCAST_DOUBLE(CONCAT44(fVar2,(uint)local_28));
  if (local_20 < 0) {
    local_20 = iVar7 - -local_20 % iVar7;
  }
  else {
    local_20 = local_20 % iVar7;
  }
  local_1c = local_20;
  this_ptr->anim_frame = (float)local_20 + fVar2;
  if ((float)iVar7 <= this_ptr->anim_frame) {
    this_ptr->anim_frame = 0.0;
  }
  fStack_38 = (this_ptr->rpm).x * delta_time;
  local_34.x = (this_ptr->rpm).y * delta_time;
  fStack_8c = fStack_38 * 0.1047198f;
  local_34.y = (this_ptr->rpm).z * delta_time;
  local_88 = local_34.x * 0.1047198f;
  local_84 = local_34.y * 0.1047198f;
  pUVar1 = &(this_ptr->base).orient;
  fVar2 = (this_ptr->base).orient.vec.y;
  (pUVar1->vec).x = (pUVar1->vec).x + fStack_8c;
  fVar3 = (this_ptr->base).orient.vec.z;
  (this_ptr->base).orient.vec.y = fVar2 + local_88;
  (this_ptr->base).orient.vec.z = fVar3 + local_84;
  local_18 = (float)iVar7;
  local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00((this_ptr->base).orient.vec.x);
  fVar2 = (this_ptr->base).orient.vec.z;
  (this_ptr->base).orient.vec.x = local_18;
  local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00(fVar2);
  fVar2 = (this_ptr->base).orient.vec.y;
  (this_ptr->base).orient.vec.z = local_18;
  local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00(fVar2);
  cVar5 = this_ptr->loop_wav_name[0];
  (this_ptr->base).orient.vec.y = local_18;
  if (cVar5 != '\0') {
    iVar7 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                      (g_CSound_PTR_005bed68,this_ptr->sfx_handle);
    if (iVar7 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      iVar7 = 2;
      local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,1.0);
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005262d0((double)local_18,iVar7);
      uVar8 = (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->loop_wav_name);
      this_ptr->sfx_handle = uVar8;
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    }
  }
  if ((this_ptr->carrier_actor == (CDemonActor *)0x0) && (0.0 < this_ptr->weight_in_pounds)) {
    local_70.y = (this_ptr->base).location.position.x;
    local_70.z = (this_ptr->base).location.position.y;
    CStack_64.x = (this_ptr->base).location.position.z;
    core_box_cpp_CBox_process_FUN_0041acb0(&this_ptr->physics_box,delta_time);
    pUVar1 = &(this_ptr->base).orient;
    pCVar10 = &(this_ptr->physics_box).orientation;
    if ((CVector3f *)pUVar1 != pCVar10) {
      (pUVar1->vec).x = pCVar10->x;
      (this_ptr->base).orient.vec.y = (this_ptr->physics_box).orientation.y;
      (this_ptr->base).orient.vec.z = (this_ptr->physics_box).orientation.z;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(&this_ptr->base);
    pCVar9 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                       (&this_ptr->base,(CBoundingBox3D *)(auStack_d0 + 0x34));
    fStack_40 = (pCVar9->min).x + (pCVar9->max).x;
    fStack_3c = (pCVar9->min).y + (pCVar9->max).y;
    fStack_58 = fStack_40 * 0.5f;
    fStack_38 = (pCVar9->min).z + (pCVar9->max).z;
    fStack_54 = fStack_3c * 0.5f;
    fStack_50 = fStack_38 * 0.5f;
    local_70.x = -fStack_58;
    local_70.y = -fStack_54;
    local_70.z = -fStack_50;
    pCVar10 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                        (&this_ptr->base,&local_34,&local_70);
    fStack_4c = (this_ptr->physics_box).position.x + pCVar10->x;
    fStack_48 = (this_ptr->physics_box).position.y + pCVar10->y;
    actor_position = &(this_ptr->base).location;
    fStack_44 = (this_ptr->physics_box).position.z + pCVar10->z;
    (actor_position->position).x = fStack_4c;
    (this_ptr->base).location.position.y = fStack_48;
    (this_ptr->base).location.position.z = fStack_44;
    fVar2 = (this_ptr->physics_box).linear_velocity.y;
    fVar3 = (this_ptr->physics_box).linear_velocity.x;
    fVar4 = (this_ptr->physics_box).linear_velocity.z;
    fVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    if ((float)3 < fVar2) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)auStack_d0);
      auStack_d0._4_4_ = fVar2 * this_ptr->weight_in_pounds * 0.2f;
      auStack_d0._52_4_ = this_ptr;
      pCStack_98 = this_ptr;
      core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_00511880
                (g_CDemonSet_PTR_005be368,&CStack_64,&actor_position->position,
                 (SDamageInfo *)auStack_d0);
      return;
    }
  }
  return;
}
