// Name: core_boxactor.cpp_CBoxActor_process_FUN_0041f360
// Address: 0041f360
// Address Range: [[0041f360, 0041f8dd]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_0041f360(CBoxActor *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_0041f360(CBoxActor *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CLocation *actor_position;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  CKeyFramedModel *pCVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  double dVar13;
  float afStackY_10bc [983];
  CBox *this_ptr_00;
  float fVar14;
  CBoundingBox3D *in_stack_fffffeb4;
  CVector3f *pCVar15;
  float fStack_144;
  SDamageInfo SStack_140;
  uint auStack_104 [4];
  uint auStack_f4 [2];
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float afStack_d0 [4];
  float fStack_c0;
  float fStack_b0;
  float afStack_ac [2];
  CVector3f CStack_a4;
  CVector3f CStack_98;
  float afStack_8c [4];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_5c;
  float afStack_58 [2];
  CVector3f CStack_50;
  float fStack_44;
  float afStack_40 [4];
  float fStack_30;
  ulonglong uStack_2c;
  float afStack_24 [5];
  
  bVar12 = 0;
  if (this_ptr->fade_event[0] != '\0') {
    iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (g_CEventListPtr,this_ptr->fade_event);
    if (iVar7 != 0) {
      (this_ptr->base).is_transparent = 1;
      (this_ptr->base).is_renderable = 0;
      this_ptr->fade_timer = this_ptr->fade_time;
    }
  }
  pCVar6 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(&this_ptr->model);
  iVar5 = pCVar6->frame_count;
  fVar14 = this_ptr->fps + this_ptr->anim_frame;
  this_ptr->anim_frame = fVar14;
  uStack_2c = floor((double)fVar14);
  dVar13 = round(uStack_2c);
  iVar7 = (int)ROUND(dVar13);
  fVar14 = this_ptr->anim_frame - (float)iVar7;
  uStack_2c = __BITCAST_DOUBLE(CONCAT44(fVar14,(uint)uStack_2c));
  if (iVar7 < 0) {
    afStack_24[0] = (float)(iVar5 - -iVar7 % iVar5);
  }
  else {
    afStack_24[0] = (float)(iVar7 % iVar5);
  }
  afStack_24[1] = afStack_24[0];
  afStack_24[2] = (float)iVar5;
  this_ptr->anim_frame = (float)(int)afStack_24[0] + fVar14;
  if ((float)iVar5 <= this_ptr->anim_frame) {
    this_ptr->anim_frame = 0.0;
  }
  afStack_d0[1] = (this_ptr->rpm).x * delta_time;
  afStack_d0[2] = (this_ptr->rpm).y * delta_time;
  afStack_d0[3] = (this_ptr->rpm).z * delta_time;
  CStack_98.z = afStack_d0[1];
  afStack_8c[(uint)bVar12 * -2] = afStack_d0[(uint)bVar12 * -2 + 2];
  afStack_8c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
       afStack_d0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 3];
  pUVar1 = &(this_ptr->base).orient;
  fStack_78 = CStack_98.z * 0.1047198f;
  fStack_74 = afStack_8c[0] * 0.1047198f;
  fStack_70 = afStack_8c[1] * 0.1047198f;
  afStack_8c[2] = CStack_98.z * 0.1047198f;
  afStack_8c[(uint)bVar12 * -2 + 3] = afStack_8c[(uint)bVar12 * -2 + 6];
  afStack_8c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
       afStack_8c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
  fVar14 = (this_ptr->base).orient.vec.y;
  fVar2 = (this_ptr->base).orient.vec.z;
  (pUVar1->vec).x = (pUVar1->vec).x + afStack_8c[2];
  (this_ptr->base).orient.vec.y = fVar14 + afStack_8c[3];
  (this_ptr->base).orient.vec.z = fVar2 + fStack_7c;
  afStack_24[2] = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0((this_ptr->base).orient.vec.x);
  fVar14 = (this_ptr->base).orient.vec.z;
  (this_ptr->base).orient.vec.x = afStack_24[2];
  afStack_24[2] = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(fVar14);
  fVar14 = (this_ptr->base).orient.vec.y;
  (this_ptr->base).orient.vec.z = afStack_24[2];
  afStack_24[2] = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(fVar14);
  cVar4 = this_ptr->loop_wav_name[0];
  (this_ptr->base).orient.vec.y = afStack_24[2];
  if (cVar4 != '\0') {
    iVar7 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                      (g_CSound_PTR_006045f8,this_ptr->sfx_handle);
    if (iVar7 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
      iVar7 = 2;
      afStack_24[2] = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_00555f60((double)afStack_24[2],iVar7);
      uVar8 = (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->loop_wav_name);
      this_ptr->sfx_handle = uVar8;
      sound_sndmain_cpp_popSfxOptions_FUN_00556050();
    }
  }
  if ((this_ptr->carrier_actor == (CDemonActor *)0x0) && (0.0 < this_ptr->weight_in_pounds)) {
    this_ptr_00 = &this_ptr->physics_box;
    pfVar9 = (float *)((int)this_ptr + (uint)bVar12 * -8 + 0x24);
    afStack_ac[0] = (this_ptr->base).location.position.x;
    afStack_ac[(uint)bVar12 * -2 + 1] = *pfVar9;
    fVar14 = delta_time;
    *(float *)((int)&CStack_a4 + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
         pfVar9[(uint)bVar12 * -2 + 1];
    core_box_cpp_CBox_process_FUN_0041b410(this_ptr_00,fVar14);
    pUVar1 = &(this_ptr->base).orient;
    pCVar15 = &(this_ptr->physics_box).orientation;
    if ((CVector3f *)pUVar1 != pCVar15) {
      (pUVar1->vec).x = pCVar15->x;
      (this_ptr->base).orient.vec.y = (this_ptr->physics_box).orientation.y;
      (this_ptr->base).orient.vec.z = (this_ptr->physics_box).orientation.z;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_fffffeb4);
    puVar10 = auStack_104;
    puVar11 = auStack_f4;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
      puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
    }
    uStack_2c = __BITCAST_DOUBLE(CONCAT44(fStack_e8 + fStack_dc,fStack_ec + fStack_e0));
    afStack_24[0] = fStack_e4 + fStack_d8;
    fStack_b0 = fStack_ec + fStack_e0;
    afStack_ac[(uint)bVar12 * -2] = *(float *)((int)&uStack_2c + (uint)bVar12 * -8 + 4);
    afStack_ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         afStack_24[(uint)bVar12 * -2 + (uint)bVar12 * -2];
    pCVar15 = &CStack_98;
    fStack_5c = fStack_b0 * 0.5f;
    afStack_58[0] = afStack_ac[0] * 0.5f;
    afStack_58[1] = afStack_ac[1] * 0.5f;
    fStack_44 = fStack_b0 * 0.5f;
    afStack_40[(uint)bVar12 * -2] = afStack_58[(uint)bVar12 * -2];
    afStack_40[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         afStack_58[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    afStack_8c[0] = -fStack_44;
    afStack_8c[1] = -afStack_40[0];
    afStack_8c[2] = -afStack_40[1];
    CStack_98.x = -fStack_44;
    afStack_8c[(uint)bVar12 * -2 + -2] = afStack_8c[(uint)bVar12 * -2 + 1];
    afStack_8c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + -1] =
         afStack_8c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 2];
    core_actor_cpp_CDemonActor_transformVector_FUN_00408b00(&this_ptr->base,pCVar15,&CStack_50);
    fStack_d4 = CStack_50.x;
    afStack_d0[(uint)bVar12 * -2] = *(float *)((int)&CStack_50 + (uint)bVar12 * -8 + 4);
    afStack_d0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         *(float *)((int)&CStack_50 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    afStack_40[2] = (this_ptr->physics_box).position.x + fStack_d4;
    afStack_40[3] = (this_ptr->physics_box).position.y + afStack_d0[0];
    fStack_30 = (this_ptr->physics_box).position.z + afStack_d0[1];
    afStack_d0[2] = afStack_40[2];
    afStack_d0[(uint)bVar12 * -2 + 3] = afStack_40[(uint)bVar12 * -2 + 3];
    afStack_d0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
         afStack_40[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
    actor_position = &(this_ptr->base).location;
    (actor_position->position).x = afStack_d0[2];
    (this_ptr->base).location.position.y = afStack_d0[3];
    (this_ptr->base).location.position.z = fStack_c0;
    fVar14 = (this_ptr->physics_box).linear_velocity.y;
    fVar2 = (this_ptr->physics_box).linear_velocity.x;
    fVar3 = (this_ptr->physics_box).linear_velocity.z;
    fStack_144 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar14 * fVar14);
    if ((float)3 < fStack_144) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_140);
      SStack_140.damage_amount = fStack_144 * this_ptr->weight_in_pounds * 0.2f;
      SStack_140.attacker = &this_ptr->base;
      SStack_140.wielder = &this_ptr->base;
      core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_0053ed10
                (g_CDemonSetPtr,&CStack_a4,&actor_position->position,&SStack_140);
    }
  }
  if (0.0 < this_ptr->fade_timer) {
    this_ptr->fade_timer = this_ptr->fade_timer - delta_time;
  }
  if (0.0 <= this_ptr->fade_timer) {
    return;
  }
  this_ptr->fade_timer = 0.0;
  return;
}
