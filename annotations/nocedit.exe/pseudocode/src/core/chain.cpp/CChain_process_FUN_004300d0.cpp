// Name: core_chain.cpp_CChain_process_FUN_004300d0
// Address: 004300d0
// Address Range: [[004300d0, 004308ed]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_CChain_process_FUN_004300d0(CChain *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_chain_cpp_CChain_process_FUN_004300d0(CChain *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CVector3f *pCVar2;
  uint uVar3;
  CVector3f *pCVar4;
  SChainVertex *pSVar5;
  int iVar6;
  float local_f0;
  float local_ec;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_64;
  float local_60;
  float local_5c;
  SChainVertex *local_58;
  int local_54;
  int local_50;
  SChainVertex *local_4c;
  SChainVertex *local_48;
  float local_44;
  float *local_40;
  int local_3c;
  SChainVertex *local_38;
  SChainVertex *local_34;
  int local_30;
  CLocation *local_2c;
  CVector3f *local_28;
  SChainVertex *local_24;
  SChainVertex *local_20;
  int local_1c;
  float fStack_18;
  
  if (this_ptr->cached_distance < -9900.0f) {
    fStack_18 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                          (&this_ptr->base,0.1,(CVector3f *)0x0);
    this_ptr->cached_distance = fStack_18;
  }
  if (this_ptr->is_visible != 0) {
    pSVar5 = this_ptr->vertices;
    local_ec = 0.0;
    for (iVar6 = 0; pSVar5 = pSVar5 + 1, iVar6 < this_ptr->vertex_count + -1; iVar6 = iVar6 + 1) {
      local_7c = pSVar5[-1].position.x - (pSVar5->position).x;
      local_78 = pSVar5[-1].position.y - (pSVar5->position).y;
      local_74 = pSVar5[-1].position.z - (pSVar5->position).z;
      local_ec = SQRT(local_74 * local_74 + local_7c * local_7c + local_78 * local_78) + local_ec;
    }
  }
  pSVar5 = this_ptr->vertices + this_ptr->vertex_count + -1;
  this_ptr->inv_delta_time = 1.0 / delta_time;
  local_64 = (pSVar5->position).x;
  local_60 = (pSVar5->position).y;
  local_5c = (pSVar5->position).z;
  pCVar2 = core_chain_cpp_CChain_FUN_0042fcc0(this_ptr);
  pCVar4 = &this_ptr->vertices[this_ptr->vertex_count + -1].position;
  if (pCVar4 != pCVar2) {
    pCVar4->x = pCVar2->x;
    pCVar4->y = pCVar2->y;
    pCVar4->z = pCVar2->z;
  }
  iVar6 = this_ptr->vertex_count;
  this_ptr->vertices[iVar6 + -1].velocity.z = 0.0;
  this_ptr->vertices[iVar6 + -1].velocity.y = this_ptr->vertices[iVar6 + -1].velocity.z;
  this_ptr->vertices[iVar6 + -1].velocity.x = this_ptr->vertices[iVar6 + -1].velocity.y;
  pCVar1 = &(this_ptr->base).location;
  if (this_ptr->vertices != (SChainVertex *)pCVar1) {
    this_ptr->vertices[0].position.x = (pCVar1->position).x;
    this_ptr->vertices[0].position.y = (this_ptr->base).location.position.y;
    this_ptr->vertices[0].position.z = (this_ptr->base).location.position.z;
  }
  this_ptr->vertices[0].velocity.z = 0.0;
  this_ptr->vertices[0].velocity.y = this_ptr->vertices[0].velocity.z;
  this_ptr->vertices[0].velocity.x = this_ptr->vertices[0].velocity.y;
  local_58 = this_ptr->vertices;
  local_40 = &this_ptr->dampen;
  local_34 = this_ptr->vertices + 2;
  pCVar2 = &this_ptr->vertices[1].velocity;
  local_38 = local_58;
  for (local_30 = 1; local_30 < this_ptr->vertex_count + -1; local_30 = local_30 + 1) {
    pCVar2->x = *local_40 * pCVar2->x;
    pCVar2->y = *local_40 * pCVar2->y;
    pCVar2->z = *local_40 * pCVar2->z;
    local_44 = this_ptr->weight * (float)0.03125;
    local_b8 = (1.0 / local_44) * 0.0;
    local_b4 = (0.0 - this_ptr->weight) * (1.0 / local_44);
    pSVar5 = local_58 + local_30;
    if (&local_d0 != &local_b8) {
      local_d0 = local_b8;
      local_cc = local_b4;
      local_c8 = local_b8;
    }
    local_88 = local_d0 * delta_time;
    local_84 = local_cc * delta_time;
    local_80 = local_c8 * delta_time;
    local_94 = (pSVar5->velocity).x + local_88;
    (pSVar5->velocity).x = local_94;
    local_94 = local_94 * delta_time;
    (pSVar5->velocity).y = (pSVar5->velocity).y + local_84;
    (pSVar5->velocity).z = (pSVar5->velocity).z + local_80;
    local_90 = (pSVar5->velocity).y * delta_time;
    local_8c = delta_time * (pSVar5->velocity).z;
    (pSVar5->position).x = (pSVar5->position).x + local_94;
    (pSVar5->position).y = (pSVar5->position).y + local_90;
    (pSVar5->position).z = (pSVar5->position).z + local_8c;
    local_b0 = local_b8;
    core_chain_cpp_CChain_FUN_0042fed0(this_ptr);
    core_chain_cpp_CChain_FUN_0042fed0(this_ptr);
    pCVar2 = pCVar2 + 3;
    local_34 = local_34 + 1;
    local_38 = local_38 + 1;
  }
  local_28 = &this_ptr->vertices[0].velocity;
  local_24 = this_ptr->vertices;
  local_2c = &(this_ptr->base).location;
  local_4c = this_ptr->vertices + 2;
  local_48 = this_ptr->vertices + 1;
  local_3c = 0;
  do {
    pCVar2 = core_chain_cpp_CChain_FUN_0042fcc0(this_ptr);
    pCVar4 = &local_24[this_ptr->vertex_count + -1].position;
    if (pCVar4 != pCVar2) {
      pCVar4->x = pCVar2->x;
      pCVar4->y = pCVar2->y;
      pCVar4->z = pCVar2->z;
    }
    iVar6 = this_ptr->vertex_count + -1;
    local_24[iVar6].velocity.z = 0.0;
    local_24[iVar6].velocity.y = local_24[iVar6].velocity.z;
    local_24[iVar6].velocity.x = local_24[iVar6].velocity.y;
    if (local_24 != (SChainVertex *)local_2c) {
      (local_24->position).x = (local_2c->position).x;
      (local_24->position).y = (local_2c->position).y;
      (local_24->position).z = (local_2c->position).z;
    }
    local_28->z = 0.0;
    local_1c = 1;
    local_28->y = local_28->z;
    local_28->x = local_28->y;
    local_20 = local_24;
    for (; local_1c < this_ptr->vertex_count + -1; local_1c = local_1c + 1) {
      core_chain_cpp_CChain_FUN_0042fed0(this_ptr);
      core_chain_cpp_CChain_FUN_0042fed0(this_ptr);
      local_20 = local_20 + 1;
    }
    pCVar2 = core_chain_cpp_CChain_FUN_0042fcc0(this_ptr);
    pCVar4 = &local_24[this_ptr->vertex_count + -1].position;
    if (pCVar4 != pCVar2) {
      pCVar4->x = pCVar2->x;
      pCVar4->y = pCVar2->y;
      pCVar4->z = pCVar2->z;
    }
    iVar6 = this_ptr->vertex_count + -1;
    local_24[iVar6].velocity.z = 0.0;
    local_24[iVar6].velocity.y = local_24[iVar6].velocity.z;
    local_24[iVar6].velocity.x = local_24[iVar6].velocity.y;
    if (local_24 != (SChainVertex *)local_2c) {
      (local_24->position).x = (local_2c->position).x;
      (local_24->position).y = (local_2c->position).y;
      (local_24->position).z = (local_2c->position).z;
    }
    local_28->z = 0.0;
    local_28->y = local_28->z;
    local_28->x = local_28->y;
    local_3c = local_3c + 1;
  } while (local_3c < 3);
  iVar6 = 0;
  if (0 < this_ptr->vertex_count) {
    pCVar2 = &this_ptr->vertices[0].prev_position;
    do {
      pSVar5 = this_ptr->vertices + iVar6;
      if ((SChainVertex *)pCVar2 != pSVar5) {
        pCVar2->x = (pSVar5->position).x;
        pCVar2->y = (pSVar5->position).y;
        pCVar2->z = (pSVar5->position).z;
      }
      iVar6 = iVar6 + 1;
      pCVar2 = pCVar2 + 3;
    } while (iVar6 < this_ptr->vertex_count);
  }
  local_54 = 0;
  local_50 = 0;
  if (this_ptr->is_visible != 0) {
    if (local_ec < this_ptr->chain_length * (float)0.90000000000000002) {
      pSVar5 = this_ptr->vertices;
      local_f0 = 0.0;
      for (iVar6 = 0; pSVar5 = pSVar5 + 1, iVar6 < this_ptr->vertex_count + -1; iVar6 = iVar6 + 1) {
        local_c4 = pSVar5[-1].position.x - (pSVar5->position).x;
        local_c0 = pSVar5[-1].position.y - (pSVar5->position).y;
        local_bc = pSVar5[-1].position.z - (pSVar5->position).z;
        local_f0 = SQRT(local_bc * local_bc + local_c4 * local_c4 + local_c0 * local_c0) + local_f0;
      }
      if (this_ptr->chain_length * (float)0.90000000000000002 < local_f0) {
        local_50 = 1;
      }
    }
    iVar6 = this_ptr->vertex_count;
    local_a0 = local_64 - this_ptr->vertices[iVar6 + -1].position.x;
    local_9c = local_60 - this_ptr->vertices[iVar6 + -1].position.y;
    local_98 = local_5c - this_ptr->vertices[iVar6 + -1].position.z;
    if (delta_time * (float)0.10000000000000001 <
        SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c)) {
      local_54 = 1;
    }
  }
  if ((local_50 != 0) && (this_ptr->pull_wav_name[0] != '\0')) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->move_wav_handle);
    iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->pull_wav_handle);
    if (iVar6 == 0) {
      uVar3 = core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                        (g_CSoundPtr,&this_ptr->base,this_ptr->pull_wav_name,
                         &this_ptr->vertices[this_ptr->vertex_count + -1].position);
      this_ptr->move_wav_handle = uVar3;
    }
  }
  this_ptr->sound_cooldown = this_ptr->sound_cooldown - delta_time;
  if (local_54 == 0) {
    if (0.0 <= this_ptr->sound_cooldown) {
      return;
    }
    this_ptr->sound_cooldown = 0.0;
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->move_wav_handle);
    return;
  }
  iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->pull_wav_handle);
  if (iVar6 == 0) {
    iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->move_wav_handle);
    if (iVar6 == 0) {
      uVar3 = core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                        (g_CSoundPtr,&this_ptr->base,this_ptr->move_wav_name,
                         &this_ptr->vertices[this_ptr->vertex_count + -1].position);
      this_ptr->move_wav_handle = uVar3;
    }
  }
  this_ptr->sound_cooldown = 0.5;
  return;
}
