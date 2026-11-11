// Name: core_boxactor.cpp_CBoxActor_process_FUN_0041f360
// Address: 0041f360
// Address Range: [[0041f360, 0041f8dd]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_0041f360(CBoxActor *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_0041f360(CBoxActor *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CLocation *pCVar2;
  CVector3f *pCVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  CKeyFramedModel *pCVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  uint *puVar12;
  uint *puVar13;
  byte bVar14;
  float10 fVar15;
  float afStackY_10b8 [983];
  CBox *this_ptr_00;
  float fVar16;
  CBoundingBox3D *in_stack_fffffeb8;
  float fStack_140;
  SDamageInfo SStack_13c;
  uint auStack_100 [4];
  uint auStack_f0 [2];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float afStack_cc [4];
  float fStack_bc;
  float fStack_ac;
  float afStack_a8 [5];
  float fStack_94;
  float afStack_90 [4];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_58;
  float afStack_54 [5];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  ulonglong uStack_2c;
  float afStack_24 [2];
  int iStack_1c;
  float fStack_18;
  
  bVar14 = 0;
  if (this_ptr->fade_event[0] != '\0') {
    iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,this_ptr->fade_event);
    if (iVar9 != 0) {
      (this_ptr->base).is_transparent = 1;
      (this_ptr->base).is_renderable = 0;
      this_ptr->fade_timer = this_ptr->fade_time;
    }
  }
  pCVar8 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(&this_ptr->model);
  iVar7 = pCVar8->frame_count;
  fVar16 = this_ptr->fps + this_ptr->anim_frame;
  this_ptr->anim_frame = fVar16;
  uStack_2c = floor((double)fVar16);
  fVar15 = (float10)uStack_2c;
  round();
  iVar9 = (int)ROUND(fVar15);
  afStack_24[0] = this_ptr->anim_frame - (float)iVar9;
  if (iVar9 < 0) {
    afStack_24[1] = (float)(iVar7 - -iVar9 % iVar7);
  }
  else {
    afStack_24[1] = (float)(iVar9 % iVar7);
  }
  iStack_1c = (int)afStack_24[1];
  fStack_18 = (float)iVar7;
  this_ptr->anim_frame = (float)(int)afStack_24[1] + afStack_24[0];
  if ((float)iVar7 <= this_ptr->anim_frame) {
    this_ptr->anim_frame = 0.0;
  }
  afStack_cc[1] = (this_ptr->rpm).x * delta_time;
  afStack_cc[2] = (this_ptr->rpm).y * delta_time;
  afStack_cc[3] = (this_ptr->rpm).z * delta_time;
  afStack_90[1] = afStack_cc[1];
  afStack_90[(uint)bVar14 * -2 + 2] = afStack_cc[(uint)bVar14 * -2 + 2];
  afStack_90[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 3] =
       afStack_cc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 3];
  pUVar1 = &(this_ptr->base).orient;
  fStack_74 = afStack_90[1] * _DAT_005b74f1;
  fStack_70 = afStack_90[2] * _DAT_005b74f1;
  fStack_6c = afStack_90[3] * _DAT_005b74f1;
  fStack_80 = afStack_90[1] * _DAT_005b74f1;
  afStack_90[(uint)bVar14 * -2 + 5] = afStack_90[(uint)bVar14 * -2 + 8];
  afStack_90[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 6] =
       afStack_90[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 9];
  fVar16 = (this_ptr->base).orient.vec.y;
  fVar4 = (this_ptr->base).orient.vec.z;
  (pUVar1->vec).x = (pUVar1->vec).x + fStack_80;
  (this_ptr->base).orient.vec.y = fVar16 + fStack_7c;
  (this_ptr->base).orient.vec.z = fVar4 + fStack_78;
  fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0((this_ptr->base).orient.vec.x);
  fVar16 = (this_ptr->base).orient.vec.z;
  (this_ptr->base).orient.vec.x = fStack_18;
  fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(fVar16);
  fVar16 = (this_ptr->base).orient.vec.y;
  (this_ptr->base).orient.vec.z = fStack_18;
  fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(fVar16);
  cVar6 = this_ptr->loop_wav_name[0];
  (this_ptr->base).orient.vec.y = fStack_18;
  if (cVar6 != '\0') {
    iVar9 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0(0x02CF5680,this_ptr->sfx_handle);
    if (iVar9 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
      iVar9 = 2;
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_00555f60((double)fStack_18,iVar9);
      uVar10 = (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->loop_wav_name);
      this_ptr->sfx_handle = uVar10;
      sound_sndmain_cpp_popSfxOptions_FUN_00556050();
    }
  }
  if ((this_ptr->carrier_actor == (CDemonActor *)0x0) && (0.0 < this_ptr->weight_in_pounds)) {
    this_ptr_00 = &this_ptr->physics_box;
    pfVar11 = (float *)((int)this_ptr + (uint)bVar14 * -8 + 0x24);
    afStack_a8[0] = (this_ptr->base).location.position.x;
    afStack_a8[(uint)bVar14 * -2 + 1] = *pfVar11;
    fVar16 = delta_time;
    afStack_a8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 2] = pfVar11[(uint)bVar14 * -2 + 1];
    core_box_cpp_CBox_process_FUN_0041b410(this_ptr_00,fVar16);
    pUVar1 = &(this_ptr->base).orient;
    pCVar3 = &(this_ptr->physics_box).orientation;
    if ((CVector3f *)pUVar1 != pCVar3) {
      (pUVar1->vec).x = pCVar3->x;
      (this_ptr->base).orient.vec.y = (this_ptr->physics_box).orientation.y;
      (this_ptr->base).orient.vec.z = (this_ptr->physics_box).orientation.z;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_fffffeb8);
    puVar12 = auStack_100;
    puVar13 = auStack_f0;
    for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
      puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
    }
    uStack_2c._4_4_ = fStack_e8 + fStack_dc;
    afStack_24[0] = fStack_e4 + fStack_d8;
    afStack_24[1] = fStack_e0 + fStack_d4;
    fStack_ac = fStack_e8 + fStack_dc;
    afStack_a8[(uint)bVar14 * -2] = afStack_24[(uint)bVar14 * -2];
    afStack_a8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         afStack_24[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    pfVar11 = &fStack_94;
    fStack_58 = fStack_ac * _DAT_005b74f5;
    afStack_54[0] = afStack_a8[0] * _DAT_005b74f5;
    afStack_54[1] = afStack_a8[1] * _DAT_005b74f5;
    fStack_40 = fStack_ac * _DAT_005b74f5;
    afStack_54[(uint)bVar14 * -2 + 6] = afStack_54[(uint)bVar14 * -2];
    afStack_54[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
         afStack_54[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    afStack_90[2] = -fStack_40;
    afStack_90[3] = -fStack_3c;
    fStack_80 = -fStack_38;
    fStack_94 = -fStack_40;
    afStack_90[(uint)bVar14 * -2] = afStack_90[(uint)bVar14 * -2 + 3];
    afStack_90[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         afStack_90[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
    core_actor_cpp_FUN_00408b00(this_ptr,pfVar11);
    fStack_d0 = afStack_54[2];
    afStack_cc[(uint)bVar14 * -2] = afStack_54[(uint)bVar14 * -2 + 3];
    afStack_cc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         afStack_54[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
    fStack_34 = (this_ptr->physics_box).position.x + fStack_d0;
    fStack_30 = (this_ptr->physics_box).position.y + afStack_cc[0];
    uStack_2c = __BITCAST_DOUBLE(CONCAT44(uStack_2c._4_4_,(this_ptr->physics_box).position.z + afStack_cc[1]))
    ;
    afStack_cc[2] = fStack_34;
    afStack_cc[(uint)bVar14 * -2 + 3] = afStack_54[(uint)bVar14 * -2 + 9];
    afStack_cc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
         *(float *)(&uStack_2c + (-(uint)bVar14 - (uint)bVar14));
    pCVar2 = &(this_ptr->base).location;
    (pCVar2->position).x = afStack_cc[2];
    (this_ptr->base).location.position.y = afStack_cc[3];
    (this_ptr->base).location.position.z = fStack_bc;
    fVar16 = (this_ptr->physics_box).linear_velocity.y;
    fVar4 = (this_ptr->physics_box).linear_velocity.x;
    fVar5 = (this_ptr->physics_box).linear_velocity.z;
    fStack_140 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar16 * fVar16);
    if ((float)_DAT_005b74f9 < fStack_140) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_13c);
      SStack_13c.damage_amount = fStack_140 * this_ptr->weight_in_pounds * _DAT_005b7501;
      SStack_13c.attacker = &this_ptr->base;
      SStack_13c.wielder = &this_ptr->base;
      core_setcolid_cpp_FUN_0053ed10(g_CDemonSetPtr,afStack_a8 + 2,pCVar2,&SStack_13c);
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
