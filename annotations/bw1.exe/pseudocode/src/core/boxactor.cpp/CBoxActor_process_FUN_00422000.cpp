// Name: core_boxactor.cpp_CBoxActor_process_FUN_00422000
// Address: 00422000
// Address Range: [[00422000, 004224ec]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_00422000(CBoxActor *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_00422000(CBoxActor *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CLocation *actor_position;
  CVector3f *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  CKeyFramedModel *pCVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  uint *puVar12;
  CDemonActor **ppCVar13;
  byte bVar14;
  float10 fVar15;
  float afStackY_10c8 [987];
  CBox *this_ptr_00;
  CBoundingBox3D *in_stack_fffffeb8;
  float fStack_140;
  SDamageInfo SStack_13c;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint auStack_e8 [2];
  float fStack_e0;
  float afStack_dc [5];
  float fStack_c8;
  float afStack_c4 [4];
  float fStack_b4;
  float fStack_b0;
  CVector3f CStack_ac;
  float fStack_98;
  float afStack_94 [6];
  float fStack_7c;
  float afStack_78 [4];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
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
  pCVar8 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&this_ptr->model);
  iVar7 = pCVar8->frame_count;
  fVar3 = this_ptr->fps + this_ptr->anim_frame;
  this_ptr->anim_frame = fVar3;
  uStack_2c = floor((double)fVar3);
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
  fStack_c8 = (this_ptr->rpm).x * delta_time;
  afStack_c4[0] = (this_ptr->rpm).y * delta_time;
  afStack_c4[1] = (this_ptr->rpm).z * delta_time;
  fStack_98 = fStack_c8;
  afStack_94[(uint)bVar14 * -2] = afStack_c4[(uint)bVar14 * -2];
  afStack_94[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
       afStack_c4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
  pUVar1 = &(this_ptr->base).orient;
  fStack_e0 = fStack_98 * _DAT_005d4c08;
  afStack_dc[0] = afStack_94[0] * _DAT_005d4c08;
  afStack_dc[1] = afStack_94[1] * _DAT_005d4c08;
  fStack_b0 = fStack_98 * _DAT_005d4c08;
  *(float *)((int)&CStack_ac + (uint)bVar14 * -8) = afStack_dc[(uint)bVar14 * -2];
  *(float *)((int)&CStack_ac + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 4) =
       afStack_dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
  fVar3 = (this_ptr->base).orient.vec.y;
  fVar4 = (this_ptr->base).orient.vec.z;
  (pUVar1->vec).x = (pUVar1->vec).x + fStack_b0;
  (this_ptr->base).orient.vec.y = fVar3 + CStack_ac.x;
  (this_ptr->base).orient.vec.z = fVar4 + CStack_ac.y;
  fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60((this_ptr->base).orient.vec.x);
  fVar3 = (this_ptr->base).orient.vec.z;
  (this_ptr->base).orient.vec.x = fStack_18;
  fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fVar3);
  fVar3 = (this_ptr->base).orient.vec.y;
  (this_ptr->base).orient.vec.z = fStack_18;
  fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fVar3);
  cVar6 = this_ptr->loop_wav_name[0];
  (this_ptr->base).orient.vec.y = fStack_18;
  if (cVar6 != '\0') {
    iVar9 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0(0x02C82A60,this_ptr->sfx_handle);
    if (iVar9 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
      iVar9 = 2;
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,1.0);
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_00572a50((double)fStack_18,iVar9);
      uVar10 = (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->loop_wav_name);
      this_ptr->sfx_handle = uVar10;
      sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
    }
  }
  if ((this_ptr->carrier_actor == (CDemonActor *)0x0) && (0.0 < this_ptr->weight_in_pounds)) {
    this_ptr_00 = &this_ptr->physics_box;
    pfVar11 = (float *)((int)this_ptr + (uint)bVar14 * -8 + 0x24);
    fStack_b4 = (this_ptr->base).location.position.x;
    afStack_c4[(uint)bVar14 * -2 + 5] = *pfVar11;
    *(float *)((int)&CStack_ac + (uint)bVar14 * -8 + (uint)bVar14 * -8) =
         pfVar11[(uint)bVar14 * -2 + 1];
    core_box_cpp_CBox_process_FUN_0041e0d0(this_ptr_00,delta_time);
    pUVar1 = &(this_ptr->base).orient;
    pCVar2 = &(this_ptr->physics_box).orientation;
    if ((CVector3f *)pUVar1 != pCVar2) {
      (pUVar1->vec).x = pCVar2->x;
      (this_ptr->base).orient.vec.y = (this_ptr->physics_box).orientation.y;
      (this_ptr->base).orient.vec.z = (this_ptr->physics_box).orientation.z;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_fffffeb8);
    puVar12 = auStack_e8;
    ppCVar13 = &SStack_13c.attacker;
    for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
      *ppCVar13 = (CDemonActor *)*puVar12;
      puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
      ppCVar13 = ppCVar13 + (uint)bVar14 * -2 + 1;
    }
    fStack_40 = fStack_100 + fStack_f4;
    fStack_3c = fStack_fc + fStack_f0;
    fStack_38 = fStack_f8 + fStack_ec;
    fStack_4c = fStack_100 + fStack_f4;
    afStack_78[(uint)bVar14 * -2 + 0xc] = afStack_78[(uint)bVar14 * -2 + 0xf];
    afStack_78[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd] =
         afStack_78[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10];
    pfVar11 = afStack_c4;
    fStack_64 = fStack_4c * _DAT_005d4c0c;
    fStack_60 = fStack_48 * _DAT_005d4c0c;
    fStack_5c = fStack_44 * _DAT_005d4c0c;
    fStack_34 = fStack_4c * _DAT_005d4c0c;
    afStack_78[(uint)bVar14 * -2 + 0x12] = afStack_78[(uint)bVar14 * -2 + 6];
    *(float *)(&uStack_2c + (-(uint)bVar14 - (uint)bVar14)) =
         afStack_78[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
    uStack_2c = __BITCAST_DOUBLE(CONCAT44(-fStack_34,(float)uStack_2c));
    afStack_24[0] = -fStack_30;
    afStack_24[1] = -(float)uStack_2c;
    afStack_c4[0] = -fStack_34;
    afStack_c4[(uint)bVar14 * -2 + 1] = afStack_24[(uint)bVar14 * -2];
    afStack_c4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 2] =
         afStack_24[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    core_actor_cpp_FUN_00408ac0(this_ptr,pfVar11);
    afStack_94[0] = fStack_58;
    afStack_94[(uint)bVar14 * -2 + 1] = afStack_78[(uint)bVar14 * -2 + 9];
    afStack_94[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 2] =
         afStack_78[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
    fStack_7c = (this_ptr->physics_box).position.x + afStack_94[0];
    afStack_78[0] = (this_ptr->physics_box).position.y + afStack_94[1];
    afStack_78[1] = (this_ptr->physics_box).position.z + afStack_94[2];
    afStack_78[2] = fStack_7c;
    afStack_78[(uint)bVar14 * -2 + 3] = afStack_78[(uint)bVar14 * -2];
    afStack_78[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
         afStack_78[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    actor_position = &(this_ptr->base).location;
    (actor_position->position).x = afStack_78[2];
    (this_ptr->base).location.position.y = afStack_78[3];
    (this_ptr->base).location.position.z = fStack_68;
    fVar3 = (this_ptr->physics_box).linear_velocity.y;
    fVar4 = (this_ptr->physics_box).linear_velocity.x;
    fVar5 = (this_ptr->physics_box).linear_velocity.z;
    fStack_140 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    if ((float)_DAT_005d4c10 < fStack_140) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_13c);
      SStack_13c.damage_amount = fStack_140 * this_ptr->weight_in_pounds * _DAT_005d4c18;
      SStack_13c.attacker = &this_ptr->base;
      SStack_13c.wielder = &this_ptr->base;
      core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_00559350
                (g_CDemonSetPtr,&CStack_ac,&actor_position->position,&SStack_13c);
      return;
    }
  }
  return;
}
