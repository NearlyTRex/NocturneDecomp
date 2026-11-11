// Name: core_boxactor.cpp_CBoxActor_process_FUN_0041c090
// Address: 0041c090
// Address Range: [[0041c090, 0041c57c]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_0041c090(CBoxActor *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_0041c090(CBoxActor *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CLocation *pCVar2;
  CVector3f *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  CKeyFramedModel *pCVar9;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  uint *puVar13;
  CDemonActor **ppCVar14;
  byte bVar15;
  float10 fVar16;
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
  float fStack_ac;
  float fStack_a8;
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
  
  bVar15 = 0;
  pCVar9 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->model);
  iVar8 = pCVar9->frame_count;
  fVar4 = this_ptr->fps + this_ptr->anim_frame;
  this_ptr->anim_frame = fVar4;
  uStack_2c = floor((double)fVar4);
  fVar16 = (float10)uStack_2c;
  round();
  iVar10 = (int)ROUND(fVar16);
  afStack_24[0] = this_ptr->anim_frame - (float)iVar10;
  if (iVar10 < 0) {
    afStack_24[1] = (float)(iVar8 - -iVar10 % iVar8);
  }
  else {
    afStack_24[1] = (float)(iVar10 % iVar8);
  }
  iStack_1c = (int)afStack_24[1];
  fStack_18 = (float)iVar8;
  this_ptr->anim_frame = (float)(int)afStack_24[1] + afStack_24[0];
  if ((float)iVar8 <= this_ptr->anim_frame) {
    this_ptr->anim_frame = 0.0;
  }
  fStack_c8 = (this_ptr->rpm).x * delta_time;
  afStack_c4[0] = (this_ptr->rpm).y * delta_time;
  afStack_c4[1] = (this_ptr->rpm).z * delta_time;
  fStack_98 = fStack_c8;
  afStack_94[(uint)bVar15 * -2] = afStack_c4[(uint)bVar15 * -2];
  afStack_94[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
       afStack_c4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
  pUVar1 = &(this_ptr->base).orient;
  fStack_e0 = fStack_98 * _DAT_005cc519;
  afStack_dc[0] = afStack_94[0] * _DAT_005cc519;
  afStack_dc[1] = afStack_94[1] * _DAT_005cc519;
  fStack_b0 = fStack_98 * _DAT_005cc519;
  afStack_c4[(uint)bVar15 * -2 + 6] = afStack_dc[(uint)bVar15 * -2];
  afStack_c4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
       afStack_dc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
  fVar4 = (this_ptr->base).orient.vec.y;
  fVar5 = (this_ptr->base).orient.vec.z;
  (pUVar1->vec).x = (pUVar1->vec).x + fStack_b0;
  (this_ptr->base).orient.vec.y = fVar4 + fStack_ac;
  (this_ptr->base).orient.vec.z = fVar5 + fStack_a8;
  fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0((this_ptr->base).orient.vec.x);
  fVar4 = (this_ptr->base).orient.vec.z;
  (this_ptr->base).orient.vec.x = fStack_18;
  fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(fVar4);
  fVar4 = (this_ptr->base).orient.vec.y;
  (this_ptr->base).orient.vec.z = fStack_18;
  fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(fVar4);
  cVar7 = this_ptr->loop_wav_name[0];
  (this_ptr->base).orient.vec.y = fStack_18;
  if (cVar7 != '\0') {
    iVar10 = core_sound_cpp_CSound_isSoundPlaying_FUN_0055af70(0x0264B290,this_ptr->sfx_handle);
    if (iVar10 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
      iVar10 = 2;
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005503e0((double)fStack_18,iVar10);
      uVar11 = (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->loop_wav_name);
      this_ptr->sfx_handle = uVar11;
      sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
    }
  }
  if ((this_ptr->carrier_actor == (CDemonActor *)0x0) && (0.0 < this_ptr->weight_in_pounds)) {
    this_ptr_00 = &this_ptr->physics_box;
    pfVar12 = (float *)((int)this_ptr + (uint)bVar15 * -8 + 0x24);
    fStack_b4 = (this_ptr->base).location.position.x;
    afStack_c4[(uint)bVar15 * -2 + 5] = *pfVar12;
    afStack_c4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 6] = pfVar12[(uint)bVar15 * -2 + 1];
    core_box_cpp_CBox_process_FUN_005b2290(this_ptr_00,delta_time);
    pUVar1 = &(this_ptr->base).orient;
    pCVar3 = &(this_ptr->physics_box).orientation;
    if ((CVector3f *)pUVar1 != pCVar3) {
      (pUVar1->vec).x = pCVar3->x;
      (this_ptr->base).orient.vec.y = (this_ptr->physics_box).orientation.y;
      (this_ptr->base).orient.vec.z = (this_ptr->physics_box).orientation.z;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_fffffeb8);
    puVar13 = auStack_e8;
    ppCVar14 = &SStack_13c.attacker;
    for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
      *ppCVar14 = (CDemonActor *)*puVar13;
      puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
      ppCVar14 = ppCVar14 + (uint)bVar15 * -2 + 1;
    }
    fStack_40 = fStack_100 + fStack_f4;
    fStack_3c = fStack_fc + fStack_f0;
    fStack_38 = fStack_f8 + fStack_ec;
    fStack_4c = fStack_100 + fStack_f4;
    afStack_78[(uint)bVar15 * -2 + 0xc] = afStack_78[(uint)bVar15 * -2 + 0xf];
    afStack_78[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
         afStack_78[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
    pfVar12 = afStack_c4;
    fStack_64 = fStack_4c * _DAT_005cc51d;
    fStack_60 = fStack_48 * _DAT_005cc51d;
    fStack_5c = fStack_44 * _DAT_005cc51d;
    fStack_34 = fStack_4c * _DAT_005cc51d;
    afStack_78[(uint)bVar15 * -2 + 0x12] = afStack_78[(uint)bVar15 * -2 + 6];
    *(float *)(&uStack_2c + (-(uint)bVar15 - (uint)bVar15)) =
         afStack_78[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
    uStack_2c = __BITCAST_DOUBLE(CONCAT44(-fStack_34,(float)uStack_2c));
    afStack_24[0] = -fStack_30;
    afStack_24[1] = -(float)uStack_2c;
    afStack_c4[0] = -fStack_34;
    afStack_c4[(uint)bVar15 * -2 + 1] = afStack_24[(uint)bVar15 * -2];
    afStack_c4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 2] =
         afStack_24[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    core_actor_cpp_FUN_00408cf0(this_ptr,pfVar12);
    afStack_94[0] = fStack_58;
    afStack_94[(uint)bVar15 * -2 + 1] = afStack_78[(uint)bVar15 * -2 + 9];
    afStack_94[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 2] =
         afStack_78[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
    fStack_7c = (this_ptr->physics_box).position.x + afStack_94[0];
    afStack_78[0] = (this_ptr->physics_box).position.y + afStack_94[1];
    afStack_78[1] = (this_ptr->physics_box).position.z + afStack_94[2];
    afStack_78[2] = fStack_7c;
    afStack_78[(uint)bVar15 * -2 + 3] = afStack_78[(uint)bVar15 * -2];
    afStack_78[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
         afStack_78[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    pCVar2 = &(this_ptr->base).location;
    (pCVar2->position).x = afStack_78[2];
    (this_ptr->base).location.position.y = afStack_78[3];
    (this_ptr->base).location.position.z = fStack_68;
    fVar4 = (this_ptr->physics_box).linear_velocity.y;
    fVar5 = (this_ptr->physics_box).linear_velocity.x;
    fVar6 = (this_ptr->physics_box).linear_velocity.z;
    fStack_140 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
    if ((float)_DAT_005cc521 < fStack_140) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_13c);
      SStack_13c.damage_amount = fStack_140 * this_ptr->weight_in_pounds * _DAT_005cc529;
      SStack_13c.attacker = &this_ptr->base;
      SStack_13c.wielder = &this_ptr->base;
      core_setcolid_cpp_FUN_00537f30(g_CDemonSetPtr,afStack_c4 + 6,pCVar2,&SStack_13c);
      return;
    }
  }
  return;
}
