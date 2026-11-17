// Name: core_boxactor.cpp_CBoxActor_process_FUN_0041c090
// Address: 0041c090
// Address Range: [[0041c090, 0041c57c]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_0041c090(CBoxActor *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_0041c090(CBoxActor *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CLocation *actor_position;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  CKeyFramedModel *pCVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  uint *puVar11;
  CDemonActor **ppCVar12;
  byte bVar13;
  double dVar14;
  float afStackY_10cc [987];
  CBox *this_ptr_00;
  CBoundingBox3D *in_stack_fffffeb4;
  CVector3f *pCVar15;
  float fStack_144;
  SDamageInfo SStack_140;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  uint auStack_ec [2];
  float fStack_e4;
  float afStack_e0 [5];
  float fStack_cc;
  CVector3f CStack_c8;
  float fStack_b8;
  float fStack_b4;
  CVector3f CStack_b0;
  float fStack_9c;
  float afStack_98 [6];
  float fStack_80;
  float afStack_7c [4];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  CVector3f CStack_5c;
  float fStack_50;
  float afStack_4c [4];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  ulonglong uStack_2c;
  float afStack_24 [5];
  
  bVar13 = 0;
  pCVar7 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->model);
  iVar6 = pCVar7->frame_count;
  fVar2 = this_ptr->fps + this_ptr->anim_frame;
  this_ptr->anim_frame = fVar2;
  uStack_2c = floor((double)fVar2);
  dVar14 = round(uStack_2c);
  iVar8 = (int)ROUND(dVar14);
  fVar2 = this_ptr->anim_frame - (float)iVar8;
  uStack_2c = __BITCAST_DOUBLE(CONCAT44(fVar2,(uint)uStack_2c));
  if (iVar8 < 0) {
    afStack_24[0] = (float)(iVar6 - -iVar8 % iVar6);
  }
  else {
    afStack_24[0] = (float)(iVar8 % iVar6);
  }
  afStack_24[1] = afStack_24[0];
  afStack_24[2] = (float)iVar6;
  this_ptr->anim_frame = (float)(int)afStack_24[0] + fVar2;
  if ((float)iVar6 <= this_ptr->anim_frame) {
    this_ptr->anim_frame = 0.0;
  }
  fStack_cc = (this_ptr->rpm).x * delta_time;
  CStack_c8.x = (this_ptr->rpm).y * delta_time;
  CStack_c8.y = (this_ptr->rpm).z * delta_time;
  fStack_9c = fStack_cc;
  afStack_98[(uint)bVar13 * -2] = *(float *)((int)&CStack_c8 + (uint)bVar13 * -8);
  afStack_98[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
       *(float *)((int)&CStack_c8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 4);
  pUVar1 = &(this_ptr->base).orient;
  fStack_e4 = fStack_9c * 0.1047198f;
  afStack_e0[0] = afStack_98[0] * 0.1047198f;
  afStack_e0[1] = afStack_98[1] * 0.1047198f;
  fStack_b4 = fStack_9c * 0.1047198f;
  *(float *)((int)&CStack_b0 + (uint)bVar13 * -8) = afStack_e0[(uint)bVar13 * -2];
  *(float *)((int)&CStack_b0 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 4) =
       afStack_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
  fVar2 = (this_ptr->base).orient.vec.y;
  fVar3 = (this_ptr->base).orient.vec.z;
  (pUVar1->vec).x = (pUVar1->vec).x + fStack_b4;
  (this_ptr->base).orient.vec.y = fVar2 + CStack_b0.x;
  (this_ptr->base).orient.vec.z = fVar3 + CStack_b0.y;
  afStack_24[2] = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0((this_ptr->base).orient.vec.x);
  fVar2 = (this_ptr->base).orient.vec.z;
  (this_ptr->base).orient.vec.x = afStack_24[2];
  afStack_24[2] = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(fVar2);
  fVar2 = (this_ptr->base).orient.vec.y;
  (this_ptr->base).orient.vec.z = afStack_24[2];
  afStack_24[2] = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(fVar2);
  cVar5 = this_ptr->loop_wav_name[0];
  (this_ptr->base).orient.vec.y = afStack_24[2];
  if (cVar5 != '\0') {
    iVar8 = core_sound_cpp_CSound_isSoundPlaying_FUN_0055af70
                      (g_CSound_PTR_0061c068,this_ptr->sfx_handle);
    if (iVar8 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
      iVar8 = 2;
      afStack_24[2] = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005503e0((double)afStack_24[2],iVar8);
      uVar9 = (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->loop_wav_name);
      this_ptr->sfx_handle = uVar9;
      sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
    }
  }
  if ((this_ptr->carrier_actor == (CDemonActor *)0x0) && (0.0 < this_ptr->weight_in_pounds)) {
    this_ptr_00 = &this_ptr->physics_box;
    pfVar10 = (float *)((int)this_ptr + (uint)bVar13 * -8 + 0x24);
    fStack_b8 = (this_ptr->base).location.position.x;
    (&fStack_b4)[(uint)bVar13 * -2] = *pfVar10;
    *(float *)((int)&CStack_b0 + (uint)bVar13 * -8 + (uint)bVar13 * -8) =
         pfVar10[(uint)bVar13 * -2 + 1];
    core_box_cpp_CBox_process_FUN_005b2290(this_ptr_00,delta_time);
    pUVar1 = &(this_ptr->base).orient;
    pCVar15 = &(this_ptr->physics_box).orientation;
    if ((CVector3f *)pUVar1 != pCVar15) {
      (pUVar1->vec).x = pCVar15->x;
      (this_ptr->base).orient.vec.y = (this_ptr->physics_box).orientation.y;
      (this_ptr->base).orient.vec.z = (this_ptr->physics_box).orientation.z;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_fffffeb4);
    puVar11 = auStack_ec;
    ppCVar12 = &SStack_140.attacker;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *ppCVar12 = (CDemonActor *)*puVar11;
      puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
      ppCVar12 = ppCVar12 + (uint)bVar13 * -2 + 1;
    }
    afStack_4c[2] = fStack_104 + fStack_f8;
    afStack_4c[3] = fStack_100 + fStack_f4;
    fStack_3c = fStack_fc + fStack_f0;
    fStack_50 = fStack_104 + fStack_f8;
    afStack_4c[(uint)bVar13 * -2] = afStack_4c[(uint)bVar13 * -2 + 3];
    afStack_4c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_4c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
    pCVar15 = &CStack_c8;
    fStack_68 = fStack_50 * 0.5f;
    fStack_64 = afStack_4c[0] * 0.5f;
    fStack_60 = afStack_4c[1] * 0.5f;
    fStack_38 = fStack_50 * 0.5f;
    afStack_4c[(uint)bVar13 * -2 + 6] = afStack_7c[(uint)bVar13 * -2 + 6];
    afStack_4c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
         afStack_7c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
    uStack_2c = __BITCAST_DOUBLE(CONCAT44(-fStack_34,-fStack_38));
    afStack_24[0] = -fStack_30;
    CStack_c8.x = -fStack_38;
    *(uint *)((int)&CStack_c8 + (uint)bVar13 * -8 + 4) =
         *(uint *)((int)&uStack_2c + (uint)bVar13 * -8 + 4);
    *(float *)((int)&CStack_c8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
         afStack_24[(uint)bVar13 * -2 + (uint)bVar13 * -2];
    core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0(&this_ptr->base,pCVar15,&CStack_5c);
    afStack_98[0] = CStack_5c.x;
    afStack_98[(uint)bVar13 * -2 + 1] = *(float *)((int)&CStack_5c + (uint)bVar13 * -8 + 4);
    afStack_98[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 2] =
         *(float *)((int)&CStack_5c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    fStack_80 = (this_ptr->physics_box).position.x + afStack_98[0];
    afStack_7c[0] = (this_ptr->physics_box).position.y + afStack_98[1];
    afStack_7c[1] = (this_ptr->physics_box).position.z + afStack_98[2];
    afStack_7c[2] = fStack_80;
    afStack_7c[(uint)bVar13 * -2 + 3] = afStack_7c[(uint)bVar13 * -2];
    afStack_7c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
         afStack_7c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    actor_position = &(this_ptr->base).location;
    (actor_position->position).x = afStack_7c[2];
    (this_ptr->base).location.position.y = afStack_7c[3];
    (this_ptr->base).location.position.z = fStack_6c;
    fVar2 = (this_ptr->physics_box).linear_velocity.y;
    fVar3 = (this_ptr->physics_box).linear_velocity.x;
    fVar4 = (this_ptr->physics_box).linear_velocity.z;
    fStack_144 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    if ((float)3 < fStack_144) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_140);
      SStack_140.damage_amount = fStack_144 * this_ptr->weight_in_pounds * 0.2f;
      SStack_140.attacker = &this_ptr->base;
      SStack_140.wielder = &this_ptr->base;
      core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_00537f30
                (g_CDemonSetPtr,&CStack_b0,&actor_position->position,&SStack_140);
      return;
    }
  }
  return;
}
