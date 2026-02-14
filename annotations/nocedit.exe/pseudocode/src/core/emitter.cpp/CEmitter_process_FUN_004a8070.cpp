// Name: core_emitter.cpp_CEmitter_process_FUN_004a8070
// Address: 004a8070
// Address Range: [[004a8070, 004a8858]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_process_FUN_004a8070(CEmitter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_emitter_cpp_CEmitter_process_FUN_004a8070(CEmitter *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CHero *this_ptr_00;
  CDemonSet *pCVar2;
  int iVar3;
  float *pfVar4;
  CVector3f *pCVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  byte auStack_e8 [24];
  CVector3f local_d0;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_ac;
  float local_a8;
  float local_a4;
  CVector3f local_a0;
  float local_94;
  float local_90;
  float local_8c;
  CVector3f CStack_88;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  CVector3f local_70;
  CVector3f CStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CColor3f local_4c [2];
  float local_2c;
  float local_28;
  float local_14;
  
  iVar7 = *(int *)(this_ptr->unk6 + 0x44);
  iVar3 = strcmp(this_ptr->event_on,"none");
  if ((iVar3 != 0) &&
     (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,this_ptr->event_on), pCVar2 = g_CDemonSetPtr, iVar3 != 0))
  {
    iVar7 = 1;
    this_ptr->emitter_state = 1;
    *(float *)this_ptr->unk6 = this_ptr->max_emit_time;
    core_set_cpp_CDemonSet_FUN_0056ade0(pCVar2);
  }
  iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,this_ptr->event_off);
  if (iVar3 != 0) {
    this_ptr->emitter_state = 0;
  }
  if (this_ptr->emitter_type == 10) {
    iVar7 = 0;
    iVar3 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                      ((double)(this_ptr->base).location.position.x,
                       (double)(this_ptr->base).location.position.y,
                       (double)(this_ptr->base).location.position.z,50.0);
    if (((iVar3 == 0) || (iVar7 = 1, g_CGamePtr->foul_language_flag != 0)) ||
       (iVar3 = strnicmp(this_ptr->wav_name,"mob",3), iVar3 != 0)
       ) {
      if (iVar7 != 0) goto LAB_004a811d;
    }
    else {
      iVar7 = 0;
    }
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
  }
LAB_004a811d:
  if (this_ptr->emitter_state == 0) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
    goto LAB_004a8221;
  }
  fVar12 = *(float *)this_ptr->unk5 + delta_time;
  *(float *)this_ptr->unk5 = fVar12;
  if ((fVar12 < this_ptr->emit_period) ||
     (*(float *)this_ptr->unk5 = *(float *)this_ptr->unk5 - this_ptr->emit_period, iVar7 == 0))
  goto LAB_004a8221;
  switch(this_ptr->emitter_type) {
  case 0:
    core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310
              ((CDemonGlobe *)(this_ptr->unk6 + 4),(CColor3f *)&(this_ptr->base).location);
    iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,0x7fff);
    *(int *)(this_ptr->unk6 + 0x40) = iVar7;
    iVar7 = (iVar7 + (iVar7 >> 0x1f) * -0x100) - (uint)((iVar7 >> 0x1f) << 7 < 0);
    iVar3 = iVar7 >> 0x1f;
    fVar12 = 10.0;
    this_ptr->unk6[0x20] = (char)((int)(((iVar7 >> 8) + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2);
    goto LAB_004a81e2;
  case 1:
    pCVar1 = &(this_ptr->base).location;
    iVar7 = 0;
    do {
      if ((CLocation *)&local_70 != pCVar1) {
        local_70.x = (pCVar1->position).x;
        local_70.y = (this_ptr->base).location.position.y;
        local_70.z = (this_ptr->base).location.position.z;
      }
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
      local_70.x = local_14 * (this_ptr->emitter_size).x + local_70.x;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
      local_70.z = local_14 * (this_ptr->emitter_size).z + local_70.z;
      local_d0.x = 0.0;
      local_d0.y = (this_ptr->emitter_size).y;
      iVar7 = iVar7 + 1;
      local_d0.z = 0.0;
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                (g_CFireEffectPtr,&local_70,1.0,&local_d0,0xffff);
    } while (iVar7 < 4);
    break;
  case 4:
    local_28 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.7853982,1.5707964);
    local_14 = local_28;
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
    local_2c = this_ptr->rock_speed;
    fVar8 = (float10)fcos((float10)local_28);
    fVar9 = (float10)fcos((float10)local_14);
    fVar10 = (float10)fsin((float10)local_28);
    fVar11 = (float10)fsin((float10)local_14);
    local_90 = (float)((float10)local_2c * fVar10);
    local_94 = (float)((float10)local_2c * fVar9 * fVar8);
    local_8c = (float)(fVar11 * (float10)local_2c * fVar8);
    core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
    core_fire_cpp_CFireEffect_FUN_004c7e60(g_CFireEffectPtr);
    break;
  case 5:
    core_emitter_cpp_CEmitter_FUN_004a8d20(this_ptr);
    core_fire_cpp_CFireEffect_FUN_004c8ef0(g_CFireEffectPtr);
    this_ptr_00 = g_HeroActors[g_LocalHeroIndex];
    pCVar1 = &(this_ptr->base).location;
    local_ac = (this_ptr_00->base).base.location.position.x - (pCVar1->position).x;
    local_a8 = (this_ptr_00->base).base.location.position.y - (this_ptr->base).location.position.y;
    local_a4 = (this_ptr_00->base).base.location.position.z - (this_ptr->base).location.position.z;
    if (SQRT(local_a4 * local_a4 + local_ac * local_ac + local_a8 * local_a8) <
        (float)2.5) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                ((CDemonActor *)this_ptr_00,&local_a0,&pCVar1->position);
      core_charactr_cpp_CCharacter_igniteBone_FUN_0042b5b0
                (&g_HeroActors[g_LocalHeroIndex]->base,&local_a0,0,0.0,0x3f800000,1);
    }
    break;
  case 6:
    core_fire_cpp_CFireEffect_FUN_004c9240(g_CFireEffectPtr);
    core_fire_cpp_CFireEffect_FUN_004c9240(g_CFireEffectPtr);
    core_fire_cpp_CFireEffect_FUN_004c9240(g_CFireEffectPtr);
    core_fire_cpp_CFireEffect_FUN_004c9240(g_CFireEffectPtr);
    break;
  case 7:
    pCVar1 = &(this_ptr->base).location;
    core_fire_cpp_CFireEffect_FUN_004c8f50(g_CFireEffectPtr);
    if ((CLocation *)local_4c != pCVar1) {
      local_4c[0].r = (pCVar1->position).x;
      local_4c[0].g = (this_ptr->base).location.position.y;
      local_4c[0].b = (this_ptr->base).location.position.z;
    }
    local_4c[0].g = (this_ptr->emitter_size).y * (float)0.5 + local_4c[0].g;
    core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310((CDemonGlobe *)(this_ptr->unk6 + 4),local_4c);
    iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,0x7fff);
    *(int *)(this_ptr->unk6 + 0x40) = iVar7;
    iVar7 = (iVar7 + (iVar7 >> 0x1f) * -0x100) - (uint)((iVar7 >> 0x1f) << 7 < 0);
    iVar3 = iVar7 >> 0x1f;
    this_ptr->unk6[0x20] = (char)((int)(((iVar7 >> 8) + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2);
    fVar12 = (this_ptr->emitter_size).y;
LAB_004a81e2:
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
              ((CDemonGlobe *)(this_ptr->unk6 + 4),fVar12);
    pCVar2 = g_CDemonSetPtr;
    this_ptr->unk6[0x24] = '\0';
    this_ptr->unk6[0x25] = '\0';
    this_ptr->unk6[0x26] = '\0';
    this_ptr->unk6[0x27] = '\0';
    core_set_cpp_CDemonSet_FUN_0056d110(pCVar2);
    break;
  case 8:
    core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    break;
  case 9:
    iVar7 = this_ptr->dest_actor;
    if (iVar7 != 0) {
      pfVar4 = (float *)(**(code **)(*(int *)(iVar7 + 0x154) + 0x14))(iVar7,auStack_e8);
      fStack_c4 = *pfVar4 + pfVar4[3];
      fStack_c0 = pfVar4[1] + pfVar4[4];
      CStack_88.x = fStack_c4 * 0.5f;
      fStack_bc = pfVar4[2] + pfVar4[5];
      CStack_88.y = fStack_c0 * 0.5f;
      CStack_88.z = fStack_bc * 0.5f;
      pCVar5 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         ((CDemonActor *)this_ptr->dest_actor,&CStack_64,&CStack_88);
      iVar7 = this_ptr->dest_actor;
      fStack_7c = *(float *)(iVar7 + 0x20) + pCVar5->x;
      fStack_78 = *(float *)(iVar7 + 0x24) + pCVar5->y;
      fStack_74 = *(float *)(iVar7 + 0x28) + pCVar5->z;
      if (&fStack_58 != &fStack_7c) {
        fStack_58 = fStack_7c;
        fStack_54 = fStack_78;
        fStack_50 = fStack_74;
      }
      core_fire_cpp_CFireEffect_FUN_004c8fd0(g_CFireEffectPtr);
    }
  }
  if (((this_ptr->wav_name[0] != '\0') &&
      (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handle), iVar7 == 0)) &&
     ((this_ptr->sfx_type != 1 || (*(int *)(this_ptr->unk6 + 0x48) == 0)))) {
    uVar6 = (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->wav_name);
    this_ptr->sfx_handle = uVar6;
  }
LAB_004a8221:
  *(int *)(this_ptr->unk6 + 0x48) = this_ptr->emitter_state;
  if (this_ptr->periodic_flag == 0) {
    if ((0.0 < this_ptr->max_emit_time) &&
       (fVar12 = *(float *)this_ptr->unk6 - delta_time, *(float *)this_ptr->unk6 = fVar12,
       fVar12 <= 0.0)) {
      this_ptr->unk6[0] = '\0';
      this_ptr->unk6[1] = '\0';
      this_ptr->unk6[2] = '\0';
      this_ptr->unk6[3] = '\0';
      this_ptr->emitter_state = 0;
      return;
    }
  }
  else if (this_ptr->emitter_state == 0) {
    fVar12 = *(float *)this_ptr->unk6 - delta_time;
    *(float *)this_ptr->unk6 = fVar12;
    if (fVar12 <= 0.0) {
      this_ptr->emitter_state = 1;
      *(float *)this_ptr->unk6 = this_ptr->max_emit_time;
      return;
    }
  }
  else {
    fVar12 = *(float *)this_ptr->unk6 - delta_time;
    *(float *)this_ptr->unk6 = fVar12;
    if (fVar12 <= 0.0) {
      this_ptr->emitter_state = 0;
      *(float *)this_ptr->unk6 = this_ptr->max_wait_time;
      return;
    }
  }
  return;
}
