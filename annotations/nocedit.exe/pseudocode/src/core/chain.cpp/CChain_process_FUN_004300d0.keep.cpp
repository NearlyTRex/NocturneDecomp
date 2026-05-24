// Name: core_chain.cpp_CChain_process_FUN_004300d0
// Address: 004300d0
// MANUAL RECONSTRUCTION
// Address Range: [[004300d0, 004308ed]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_CChain_process_FUN_004300d0(CChain *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_chain_cpp_CChain_process_FUN_004300d0(CChain *this_ptr,float delta_time)

{
  CLocation *pCVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  SChainVertex *pSVar4;
  int iVar14;
  CVector3f *pCVar15;
  uint uVar16;
  uint uVar5;
  SChainVertex *pSVar17;
  SChainVertex *pSVar18;
  CVector3f *pCVar19;
  CVector3f *pCVar20;
  int iVar6;
  SChainVertex *pSVar7;
  float local_f0;
  float local_ec;
  CVector3f local_e8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  CVector3f local_ac;
  CVector3f local_70;
  int local_3c;
  SChainVertex *local_38;
  SChainVertex *local_34;
  int local_30;
  SChainVertex *local_20;
  int local_1c;
  CLocation *pCVar1;
  
  if (this_ptr->cached_distance < -9900.0f) {
    fVar13 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                       (&this_ptr->base,0.1,(CVector3f *)0x0);
    this_ptr->cached_distance = fVar13;
  }
  if (this_ptr->is_visible != 0) {
    local_ec = 0.0;
    for (iVar6 = 0; iVar6 < this_ptr->vertex_count + -1; iVar6 = iVar6 + 1) {
      fVar13 = this_ptr->vertices[iVar6].position.x - this_ptr->vertices[iVar6 + 1].position.x;
      fVar8 = this_ptr->vertices[iVar6].position.y - this_ptr->vertices[iVar6 + 1].position.y;
      fVar9 = this_ptr->vertices[iVar6].position.z - this_ptr->vertices[iVar6 + 1].position.z;
      local_ec = SQRT(fVar9 * fVar9 + fVar13 * fVar13 + fVar8 * fVar8) + local_ec;
    }
  }
  pSVar18 = this_ptr->vertices + this_ptr->vertex_count + -1;
  this_ptr->inv_delta_time = 1.0 / delta_time;
  fVar13 = (pSVar18->position).x;
  fVar8 = (pSVar18->position).y;
  fVar9 = (pSVar18->position).z;
  pCVar2 = core_chain_cpp_CChain_getTargetBoneWorldPosition_FUN_0042fcc0(this_ptr,&local_ac);
  pCVar3 = &this_ptr->vertices[this_ptr->vertex_count + -1].position;
  if (pCVar3 != pCVar2) {
    *pCVar3 = *pCVar2;
  }
  iVar14 = this_ptr->vertex_count;
  this_ptr->vertices[iVar14 + -1].velocity.z = 0.0;
  this_ptr->vertices[iVar14 + -1].velocity.y = 0.0;
  this_ptr->vertices[iVar14 + -1].velocity.x = 0.0;
  pCVar1 = &(this_ptr->base).location;
  if (this_ptr->vertices != (SChainVertex *)pCVar1) {
    this_ptr->vertices[0].position = pCVar1->position;
  }
  this_ptr->vertices[0].velocity.z = 0.0;
  this_ptr->vertices[0].velocity.y = 0.0;
  this_ptr->vertices[0].velocity.x = 0.0;
  pfVar5 = &this_ptr->dampen;
  local_34 = this_ptr->vertices + 2;
  pCVar20 = &this_ptr->vertices[1].velocity;
  local_38 = this_ptr->vertices;
  for (local_30 = 1; local_30 < this_ptr->vertex_count + -1; local_30 = local_30 + 1) {
    pCVar20->x = *pfVar5 * pCVar20->x;
    pCVar20->y = *pfVar5 * pCVar20->y;
    pCVar20->z = *pfVar5 * pCVar20->z;
    fVar6 = 1.0 / (this_ptr->weight * (float)0.03125);
    local_b8 = fVar6 * 0.0;
    local_b4 = (0.0 - this_ptr->weight) * fVar6;
    pSVar18 = this_ptr->vertices + local_30;
    local_d0 = local_b8;
    local_cc = local_b4;
    local_c8 = local_b8;
    fVar10 = (pSVar18->velocity).x + local_d0 * delta_time;
    (pSVar18->velocity).x = fVar10;
    (pSVar18->velocity).y = (pSVar18->velocity).y + local_cc * delta_time;
    (pSVar18->velocity).z = (pSVar18->velocity).z + local_c8 * delta_time;
    fVar6 = (pSVar18->velocity).y;
    fVar7 = (pSVar18->velocity).z;
    (pSVar18->position).x = (pSVar18->position).x + fVar10 * delta_time;
    (pSVar18->position).y = (pSVar18->position).y + fVar6 * delta_time;
    (pSVar18->position).z = (pSVar18->position).z + delta_time * fVar7;
    local_b0 = local_b8;
    core_chain_cpp_CChain_constrainSegmentDistance_FUN_0042fed0(this_ptr,pSVar18,local_38);
    core_chain_cpp_CChain_constrainSegmentDistance_FUN_0042fed0(this_ptr,pSVar18,local_34);
    pCVar20 = pCVar20 + 3;
    local_34 = local_34 + 1;
    local_38 = local_38 + 1;
  }
  pCVar20 = &this_ptr->vertices[0].velocity;
  pSVar18 = this_ptr->vertices;
  pCVar4 = &(this_ptr->base).location;
  local_3c = 0;
  do {
    pSVar4 = (SChainVertex *)
             core_chain_cpp_CChain_getTargetBoneWorldPosition_FUN_0042fcc0(this_ptr,&local_70);
    pSVar17 = pSVar18 + this_ptr->vertex_count + -1;
    if (pSVar17 != pSVar4) {
      pSVar17->position = pSVar4->position;
    }
    iVar14 = this_ptr->vertex_count + -1;
    pSVar18[iVar14].velocity.z = 0.0;
    pSVar18[iVar14].velocity.y = 0.0;
    pSVar18[iVar14].velocity.x = 0.0;
    if (pSVar18 != (SChainVertex *)pCVar4) {
      pSVar18->position = pCVar4->position;
    }
    this_ptr->vertices[0].velocity.z = 0.0;
    local_1c = 1;
    this_ptr->vertices[0].velocity.y = 0.0;
    pCVar20->x = 0.0;
    pSVar7 = this_ptr->vertices + 2;
    local_20 = pSVar18;
    pSVar17 = this_ptr->vertices;
    for (; pSVar17 = pSVar17 + 1, local_1c < this_ptr->vertex_count + -1; local_1c = local_1c + 1) {
      core_chain_cpp_CChain_constrainSegmentDistance_FUN_0042fed0(this_ptr,pSVar17,local_20);
      core_chain_cpp_CChain_constrainSegmentDistance_FUN_0042fed0(this_ptr,pSVar17,pSVar7);
      local_20 = local_20 + 1;
      pSVar7 = pSVar7 + 1;
    }
    pCVar15 = core_chain_cpp_CChain_getTargetBoneWorldPosition_FUN_0042fcc0(this_ptr,&local_e8);
    pCVar19 = &pSVar18[this_ptr->vertex_count + -1].position;
    if (pCVar19 != pCVar15) {
      *pCVar19 = *pCVar15;
    }
    iVar14 = this_ptr->vertex_count + -1;
    pSVar18[iVar14].velocity.z = 0.0;
    pSVar18[iVar14].velocity.y = 0.0;
    pSVar18[iVar14].velocity.x = 0.0;
    if (pSVar18 != (SChainVertex *)pCVar4) {
      pSVar18->position = pCVar4->position;
    }
    this_ptr->vertices[0].velocity.z = 0.0;
    this_ptr->vertices[0].velocity.y = 0.0;
    pCVar20->x = 0.0;
    local_3c = local_3c + 1;
  } while (local_3c < 3);
  iVar14 = 0;
  if (0 < this_ptr->vertex_count) {
    pCVar20 = &this_ptr->vertices[0].prev_position;
    do {
      pSVar18 = this_ptr->vertices + iVar14;
      if ((SChainVertex *)pCVar20 != pSVar18) {
        *pCVar20 = pSVar18->position;
      }
      iVar14 = iVar14 + 1;
      pCVar20 = pCVar20 + 3;
    } while (iVar14 < this_ptr->vertex_count);
  }
  bVar12 = false;
  bVar11 = false;
  if (this_ptr->is_visible != 0) {
    if (local_ec < this_ptr->chain_length * (float)0.90000000000000002) {
      local_f0 = 0.0;
      for (iVar14 = 0; iVar14 < this_ptr->vertex_count + -1; iVar14 = iVar14 + 1) {
        local_c4 = this_ptr->vertices[iVar14].position.x - this_ptr->vertices[iVar14 + 1].position.x;
        local_c0 = this_ptr->vertices[iVar14].position.y - this_ptr->vertices[iVar14 + 1].position.y;
        local_bc = this_ptr->vertices[iVar14].position.z - this_ptr->vertices[iVar14 + 1].position.z;
        local_f0 = SQRT(local_bc * local_bc + local_c4 * local_c4 + local_c0 * local_c0) + local_f0;
      }
      if (this_ptr->chain_length * (float)0.90000000000000002 < local_f0) {
        bVar11 = true;
      }
    }
    iVar14 = this_ptr->vertex_count;
    fVar13 = fVar13 - this_ptr->vertices[iVar14 + -1].position.x;
    fVar8 = fVar8 - this_ptr->vertices[iVar14 + -1].position.y;
    fVar9 = fVar9 - this_ptr->vertices[iVar14 + -1].position.z;
    if (delta_time * (float)0.10000000000000001 < SQRT(fVar9 * fVar9 + fVar13 * fVar13 + fVar8 * fVar8))
    {
      bVar12 = true;
    }
  }
  if ((bVar11) && (this_ptr->pull_wav_name[0] != '\0')) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->move_wav_handle);
    iVar14 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->pull_wav_handle);
    if (iVar14 == 0) {
      uVar16 = core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                         (g_CSoundPtr,&this_ptr->base,this_ptr->pull_wav_name,
                          &this_ptr->vertices[this_ptr->vertex_count + -1].position);
      this_ptr->move_wav_handle = uVar16;
    }
  }
  this_ptr->sound_cooldown = this_ptr->sound_cooldown - delta_time;
  if (!bVar12) {
    if (0.0 <= this_ptr->sound_cooldown) {
      return;
    }
    this_ptr->sound_cooldown = 0.0;
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->move_wav_handle);
    return;
  }
  iVar14 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->pull_wav_handle);
  if (iVar14 == 0) {
    iVar14 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->move_wav_handle);
    if (iVar14 == 0) {
      uVar5 = core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                        (g_CSoundPtr,&this_ptr->base,this_ptr->move_wav_name,
                         &this_ptr->vertices[this_ptr->vertex_count + -1].position);
      this_ptr->move_wav_handle = uVar5;
    }
  }
  this_ptr->sound_cooldown = 0.5;
  return;
}
