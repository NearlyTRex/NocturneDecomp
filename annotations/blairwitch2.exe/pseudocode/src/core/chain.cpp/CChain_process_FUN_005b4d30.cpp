// Name: core_chain.cpp_CChain_process_FUN_005b4d30
// Address: 005b4d30
// Address Range: [[005b4d30, 005b56b3]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_CChain_process_FUN_005b4d30(CChain *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_chain_cpp_CChain_process_FUN_005b4d30(CChain *this_ptr,float delta_time)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  CVector3f *pCVar4;
  float *pfVar5;
  SChainVertex *pSVar6;
  byte bVar7;
  float afStackY_1148 [1012];
  float fVar8;
  SChainVertex *in_stack_fffffe9c;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  uint uStack_10c;
  float fStack_108;
  uint uStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  byte auStack_c4 [28];
  float afStack_a8 [4];
  float fStack_98;
  float fStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  SChainVertex *pSStack_64;
  SChainVertex *pSStack_60;
  SChainVertex *pSStack_5c;
  float fStack_58;
  int iStack_54;
  SChainVertex *pSStack_50;
  SChainVertex *pSStack_4c;
  float *pfStack_48;
  SChainVertex *pSStack_44;
  int iStack_40;
  CVector3f *pCStack_3c;
  SChainVertex *pSStack_38;
  SChainVertex *pSStack_34;
  CVector3f *pCStack_30;
  SChainVertex *pSStack_2c;
  SChainVertex *pSStack_28;
  SChainVertex *pSStack_24;
  SChainVertex *pSStack_1c;
  float fStack_18;
  
  bVar7 = 0;
  if (this_ptr->cached_distance < _DAT_005f1434) {
    fStack_18 = (float)(*this_ptr->vtable->playAmbientSoundWithDelay)
                                 ((CDemonActor *)this_ptr,(char *)0x3dcccccd,0.0);
    this_ptr->cached_distance = fStack_18;
  }
  if (this_ptr->is_visible != 0) {
    pSVar6 = this_ptr->vertices;
    in_stack_fffffe9c = (SChainVertex *)0x0;
    for (iVar3 = 0; pSVar6 = pSVar6 + 1, iVar3 < this_ptr->vertex_count + -1; iVar3 = iVar3 + 1) {
      fStack_70 = pSVar6[-1].position.x - (pSVar6->position).x;
      fStack_6c = pSVar6[-1].position.y - (pSVar6->position).y;
      fStack_68 = pSVar6[-1].position.z - (pSVar6->position).z;
      fStack_13c = fStack_70;
      *(float *)((int)&stack0xfffffec8 + (uint)bVar7 * -8) = afStack_a8[(uint)bVar7 * -2 + 0xf];
      *(float *)((int)&stack0xfffffecc + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
      in_stack_fffffe9c =
           (SChainVertex *)
           (SQRT(fStack_134 * fStack_134 + fStack_13c * fStack_13c + fStack_138 * fStack_138) +
           (float)in_stack_fffffe9c);
    }
  }
  this_ptr->inv_delta_time = 1.0 / delta_time;
  pfVar5 = (float *)((int)(this_ptr->vertices + this_ptr->vertex_count + -1) + (uint)bVar7 * -8 + 4)
  ;
  fStack_88 = this_ptr->vertices[this_ptr->vertex_count + -1].position.x;
  afStack_a8[(uint)bVar7 * -2 + 9] = *pfVar5;
  afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] = pfVar5[(uint)bVar7 * -2 + 1];
  core_chain_cpp_FUN_005b4860(this_ptr);
  fStack_124 = fStack_94;
  (&stack0xfffffee0)[(uint)bVar7 * 0xfffffffe] = afStack_a8[(uint)bVar7 * -2 + 6];
  *(float *)((int)&stack0xfffffee4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  pSVar6 = this_ptr->vertices + this_ptr->vertex_count + -1;
  if (pSVar6 != (SChainVertex *)&stack0xfffffedc) {
    (pSVar6->position).x = fStack_124;
    (pSVar6->position).y = fStack_120;
    (pSVar6->position).z = fStack_11c;
  }
  iVar3 = this_ptr->vertex_count;
  this_ptr->vertices[iVar3 + -1].velocity.z = 0.0;
  this_ptr->vertices[iVar3 + -1].velocity.y = this_ptr->vertices[iVar3 + -1].velocity.z;
  this_ptr->vertices[iVar3 + -1].velocity.x = this_ptr->vertices[iVar3 + -1].velocity.y;
  if (this_ptr->vertices != (SChainVertex *)&this_ptr->field_0x20) {
    this_ptr->vertices[0].position.x = *(float *)&this_ptr->field_0x20;
    this_ptr->vertices[0].position.y = *(float *)&this_ptr->field_0x24;
    this_ptr->vertices[0].position.z = *(float *)&this_ptr->field_0x28;
  }
  this_ptr->vertices[0].velocity.z = 0.0;
  this_ptr->vertices[0].velocity.y = this_ptr->vertices[0].velocity.z;
  this_ptr->vertices[0].velocity.x = this_ptr->vertices[0].velocity.y;
  pSStack_5c = this_ptr->vertices;
  pfStack_48 = &this_ptr->dampen;
  pCStack_3c = &this_ptr->vertices[1].velocity;
  pSStack_50 = this_ptr->vertices + 2;
  iStack_40 = 1;
  pSStack_4c = this_ptr->vertices;
  while( true ) {
    if (this_ptr->vertex_count + -1 <= iStack_40) break;
    pCStack_3c->x = *pfStack_48 * pCStack_3c->x;
    pCStack_3c->y = *pfStack_48 * pCStack_3c->y;
    pCStack_3c->z = *pfStack_48 * pCStack_3c->z;
    fStack_58 = this_ptr->weight * (float)_DAT_005f1438;
    fStack_108 = 0.0 - this_ptr->weight;
    fVar8 = 1.0 / fStack_58;
    fStack_dc = fVar8 * 0.0;
    uStack_104 = 0;
    uStack_10c = 0;
    pSStack_34 = pSStack_5c + iStack_40;
    fStack_d8 = fStack_108 * fVar8;
    fStack_d4 = fStack_dc;
    fStack_148 = fStack_dc;
    (&stack0xfffffebc)[(uint)bVar7 * 0xfffffffe] =
         (float)*(uint *)(auStack_c4 + (uint)bVar7 * -8 + -0x14);
    pSVar6 = pSStack_34;
    *(uint *)((int)&stack0xfffffec0 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)(auStack_c4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -0x10);
    if (&stack0xfffffeac != &stack0xfffffeb8) {
      fStack_154 = fStack_148;
      fStack_150 = fStack_144;
      fStack_14c = fStack_140;
    }
    fStack_15c = fStack_150 * delta_time;
    fStack_158 = fStack_14c * delta_time;
    afStack_a8[2] = fStack_154 * delta_time;
    afStack_a8[(uint)bVar7 * -2 + 3] = *(float *)((int)&stack0xfffffea4 + (uint)bVar7 * -8);
    afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         *(float *)((int)&stack0xfffffea8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    fStack_100 = (pSVar6->velocity).x + afStack_a8[2];
    (pSVar6->velocity).x = fStack_100;
    fStack_100 = fStack_100 * delta_time;
    fVar1 = (pSVar6->velocity).y + afStack_a8[3];
    fVar8 = (pSVar6->velocity).z + fStack_98;
    (pSVar6->velocity).y = fVar1;
    (pSVar6->velocity).z = fVar8;
    fStack_fc = fVar1 * delta_time;
    fStack_f8 = fVar8 * delta_time;
    fStack_130 = fStack_100;
    *(float *)((int)&stack0xfffffed4 + (uint)bVar7 * -8) =
         (&stack0xffffff04)[(uint)bVar7 * 0xfffffffe];
    *(uint *)((int)&stack0xfffffed8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)((int)&stack0xffffff08 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    (pSVar6->position).x = (pSVar6->position).x + fStack_130;
    (pSVar6->position).y = (pSVar6->position).y + fStack_12c;
    (pSVar6->position).z = (pSVar6->position).z + fStack_128;
    core_chain_cpp_CChain_constrainSegmentDistance_FUN_005b4aa0(this_ptr,pSStack_34,pSStack_4c);
    in_stack_fffffe9c = pSStack_28;
    core_chain_cpp_CChain_constrainSegmentDistance_FUN_005b4aa0(this_ptr,pSStack_28,pSStack_44);
    pSStack_34 = pSStack_34 + 1;
    pSStack_24 = pSStack_24 + 1;
    pSStack_38 = (SChainVertex *)((int)pSStack_38 + 0x24);
    pSStack_28 = (SChainVertex *)((int)&(pSStack_28->position).x + 1);
  }
  pSStack_44 = (SChainVertex *)0x0;
  pCStack_30 = &this_ptr->vertices[0].velocity;
  pSStack_2c = this_ptr->vertices;
  pSStack_38 = (SChainVertex *)&this_ptr->field_0x20;
  pSStack_64 = this_ptr->vertices + 2;
  pSStack_60 = this_ptr->vertices + 1;
  do {
    core_chain_cpp_FUN_005b4860(this_ptr);
    auStack_c4._0_4_ = fStack_118;
    *(uint *)(auStack_c4 + (uint)bVar7 * -8 + 4) =
         *(uint *)(&stack0xfffffeec + (uint)bVar7 * -8);
    *(uint *)(auStack_c4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)(&stack0xfffffef0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    pSVar6 = pSStack_2c + this_ptr->vertex_count + -1;
    if (pSVar6 != (SChainVertex *)auStack_c4) {
      (pSVar6->position).x = (float)auStack_c4._0_4_;
      (pSVar6->position).y = (float)auStack_c4._4_4_;
      (pSVar6->position).z = (float)auStack_c4._8_4_;
    }
    iVar3 = this_ptr->vertex_count + -1;
    pSStack_2c[iVar3].velocity.z = 0.0;
    pSStack_2c[iVar3].velocity.y = pSStack_2c[iVar3].velocity.z;
    pSStack_2c[iVar3].velocity.x = pSStack_2c[iVar3].velocity.y;
    if (pSStack_2c != pSStack_38) {
      (pSStack_2c->position).x = (pSStack_38->position).x;
      (pSStack_2c->position).y = (pSStack_38->position).y;
      (pSStack_2c->position).z = (pSStack_38->position).z;
    }
    pCStack_30->z = 0.0;
    pCStack_30->y = pCStack_30->z;
    pCStack_30->x = pCStack_30->y;
    pSStack_28 = pSStack_64;
    pSStack_24 = pSStack_2c;
    pSVar6 = pSStack_60;
    for (iVar3 = 1; iVar3 < this_ptr->vertex_count + -1; iVar3 = iVar3 + 1) {
      core_chain_cpp_CChain_constrainSegmentDistance_FUN_005b4aa0(this_ptr,pSVar6,pSStack_24);
      in_stack_fffffe9c = pSVar6;
      core_chain_cpp_CChain_constrainSegmentDistance_FUN_005b4aa0(this_ptr,pSVar6,pSStack_1c);
      pSVar6 = pSVar6 + 1;
    }
    core_chain_cpp_FUN_005b4860(this_ptr);
    auStack_c4._24_4_ = fStack_e8;
    afStack_a8[(uint)bVar7 * -2] = *(float *)(auStack_c4 + (uint)bVar7 * -8 + -0x20);
    afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         *(float *)(auStack_c4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -0x1c);
    pSVar6 = pSStack_2c + this_ptr->vertex_count + -1;
    if (pSVar6 != (SChainVertex *)(auStack_c4 + 0x18)) {
      (pSVar6->position).x = (float)auStack_c4._24_4_;
      (pSVar6->position).y = afStack_a8[0];
      (pSVar6->position).z = afStack_a8[1];
    }
    iVar3 = this_ptr->vertex_count + -1;
    pSStack_2c[iVar3].velocity.z = 0.0;
    pSStack_2c[iVar3].velocity.y = pSStack_2c[iVar3].velocity.z;
    pSStack_2c[iVar3].velocity.x = pSStack_2c[iVar3].velocity.y;
    if (pSStack_2c != pSStack_38) {
      (pSStack_2c->position).x = (pSStack_38->position).x;
      (pSStack_2c->position).y = (pSStack_38->position).y;
      (pSStack_2c->position).z = (pSStack_38->position).z;
    }
    pCStack_30->z = 0.0;
    pSStack_44 = (SChainVertex *)((int)pSStack_44 + 1);
    pCStack_30->y = pCStack_30->z;
    pCStack_30->x = pCStack_30->z;
  } while ((int)pSStack_44 < 3);
  iVar3 = 0;
  if (0 < this_ptr->vertex_count) {
    pCVar4 = &this_ptr->vertices[0].prev_position;
    do {
      pSVar6 = this_ptr->vertices + iVar3;
      if ((SChainVertex *)pCVar4 != pSVar6) {
        pCVar4->x = (pSVar6->position).x;
        pCVar4->y = (pSVar6->position).y;
        pCVar4->z = (pSVar6->position).z;
      }
      iVar3 = iVar3 + 1;
      pCVar4 = pCVar4 + 3;
    } while (iVar3 < this_ptr->vertex_count);
  }
  iStack_54 = 0;
  pSStack_1c = (SChainVertex *)0x0;
  if (this_ptr->is_visible != 0) {
    if ((float)in_stack_fffffe9c < this_ptr->chain_length * (float)_DAT_005f1440) {
      pSVar6 = this_ptr->vertices;
      fVar8 = 0.0;
      for (iVar3 = 0; pSVar6 = pSVar6 + 1, iVar3 < this_ptr->vertex_count + -1; iVar3 = iVar3 + 1) {
        fStack_f4 = pSVar6[-1].position.x - (pSVar6->position).x;
        fStack_f0 = pSVar6[-1].position.y - (pSVar6->position).y;
        fStack_ec = pSVar6[-1].position.z - (pSVar6->position).z;
        fStack_7c = fStack_f4;
        afStack_a8[(uint)bVar7 * -2 + 0xc] = *(float *)((int)&stack0xffffff10 + (uint)bVar7 * -8);
        afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
             *(float *)((int)&stack0xffffff14 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        fVar8 = SQRT(fStack_74 * fStack_74 + fStack_7c * fStack_7c + fStack_78 * fStack_78) + fVar8;
      }
      if (this_ptr->chain_length * (float)_DAT_005f1440 < fVar8) {
        pSStack_1c = (SChainVertex *)0x1;
      }
    }
    iVar3 = this_ptr->vertex_count;
    auStack_c4._12_4_ = fStack_88 - this_ptr->vertices[iVar3 + -1].position.x;
    auStack_c4._16_4_ = fStack_84 - this_ptr->vertices[iVar3 + -1].position.y;
    auStack_c4._20_4_ = fStack_80 - this_ptr->vertices[iVar3 + -1].position.z;
    fStack_d0 = (float)auStack_c4._12_4_;
    *(uint *)(auStack_c4 + (uint)bVar7 * -8 + -8) =
         *(uint *)(auStack_c4 + (uint)bVar7 * -8 + 0x10);
    afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -8] =
         *(float *)(auStack_c4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 0x14);
    if (delta_time * (float)_DAT_005f1448 <
        SQRT(fStack_c8 * fStack_c8 + fStack_d0 * fStack_d0 + fStack_cc * fStack_cc)) {
      iStack_54 = 1;
    }
  }
  if ((pSStack_1c != (SChainVertex *)0x0) && (this_ptr->pull_wav_name[0] != '\0')) {
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->move_wav_handle);
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->pull_wav_handle);
    if (iVar3 == 0) {
      uVar2 = core_sound_cpp_CSound_playTrackedActorSound_FUN_0055ae80
                        (0x0264B290,(CDemonActor *)this_ptr,this_ptr->pull_wav_name,
                         &this_ptr->vertices[this_ptr->vertex_count + -1].position);
      this_ptr->move_wav_handle = uVar2;
    }
  }
  this_ptr->sound_cooldown = this_ptr->sound_cooldown - delta_time;
  if (iStack_54 == 0) {
    if (0.0 <= this_ptr->sound_cooldown) {
      return;
    }
    this_ptr->sound_cooldown = 0.0;
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->move_wav_handle);
    return;
  }
  iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->pull_wav_handle);
  if (iVar3 == 0) {
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->move_wav_handle);
    if (iVar3 == 0) {
      uVar2 = core_sound_cpp_CSound_playTrackedActorSound_FUN_0055ae80
                        (0x0264B290,(CDemonActor *)this_ptr,this_ptr->move_wav_name,
                         &this_ptr->vertices[this_ptr->vertex_count + -1].position);
      this_ptr->move_wav_handle = uVar2;
    }
  }
  this_ptr->sound_cooldown = 0.5;
  return;
}
