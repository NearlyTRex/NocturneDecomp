// Name: core_chain.cpp_CChain_process_FUN_004300d0
// Address: 004300d0
// Address Range: [[004300d0, 004308ed]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_CChain_process_FUN_004300d0(CChain *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_chain_cpp_CChain_process_FUN_004300d0(CChain *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  float fVar2;
  CVector3f *pCVar3;
  uint uVar4;
  CVector3f *pCVar5;
  SChainVertex *pSVar6;
  char *pcVar7;
  int iVar8;
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
  char *local_28;
  SChainVertex *local_24;
  SChainVertex *local_20;
  int local_1c;
  float fStack_18;
  
  if (*(float *)this_ptr->unk7 < -9900.0f) {
    fStack_18 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                          (&this_ptr->base,0.1,(CVector3f *)0x0);
    *(float *)this_ptr->unk7 = fStack_18;
  }
  if (*(int *)(this_ptr->unk7 + 8) != 0) {
    pSVar6 = this_ptr->unk6;
    local_ec = 0.0;
    for (iVar8 = 0; pSVar6 = pSVar6 + 1, iVar8 < this_ptr->vertex_count + -1; iVar8 = iVar8 + 1) {
      local_7c = *(float *)pSVar6[-1].unk - *(float *)pSVar6->unk;
      local_78 = *(float *)(pSVar6[-1].unk + 4) - *(float *)(pSVar6->unk + 4);
      local_74 = *(float *)(pSVar6[-1].unk + 8) - *(float *)(pSVar6->unk + 8);
      local_ec = SQRT(local_74 * local_74 + local_7c * local_7c + local_78 * local_78) + local_ec;
    }
  }
  pSVar6 = this_ptr->unk6 + this_ptr->vertex_count + -1;
  *(float *)(this_ptr->unk7 + 4) = 1.0 / delta_time;
  local_64 = *(float *)pSVar6->unk;
  local_60 = *(float *)(pSVar6->unk + 4);
  local_5c = *(float *)(pSVar6->unk + 8);
  pCVar3 = core_chain_cpp_CChain_FUN_0042fcc0(this_ptr);
  pCVar5 = (CVector3f *)(this_ptr->unk6 + this_ptr->vertex_count + -1);
  if (pCVar5 != pCVar3) {
    pCVar5->x = pCVar3->x;
    pCVar5->y = pCVar3->y;
    pCVar5->z = pCVar3->z;
  }
  iVar8 = this_ptr->vertex_count;
  pSVar6 = this_ptr->unk6 + iVar8 + -1;
  pSVar6->unk[0x14] = '\0';
  pSVar6->unk[0x15] = '\0';
  pSVar6->unk[0x16] = '\0';
  pSVar6->unk[0x17] = '\0';
  *(uint *)(this_ptr->unk6[iVar8 + -1].unk + 0x10) =
       *(uint *)(this_ptr->unk6[iVar8 + -1].unk + 0x14);
  *(uint *)(this_ptr->unk6[iVar8 + -1].unk + 0xc) =
       *(uint *)(this_ptr->unk6[iVar8 + -1].unk + 0x10);
  pCVar1 = &(this_ptr->base).location;
  if ((CLocation *)this_ptr->unk6 != pCVar1) {
    *(float *)this_ptr->unk6[0].unk = (pCVar1->position).x;
    *(float *)(this_ptr->unk6[0].unk + 4) = (this_ptr->base).location.position.y;
    *(float *)(this_ptr->unk6[0].unk + 8) = (this_ptr->base).location.position.z;
  }
  this_ptr->unk6[0].unk[0x14] = '\0';
  this_ptr->unk6[0].unk[0x15] = '\0';
  this_ptr->unk6[0].unk[0x16] = '\0';
  this_ptr->unk6[0].unk[0x17] = '\0';
  *(uint *)(this_ptr->unk6[0].unk + 0x10) = *(uint *)(this_ptr->unk6[0].unk + 0x14);
  *(uint *)(this_ptr->unk6[0].unk + 0xc) = *(uint *)(this_ptr->unk6[0].unk + 0x10);
  local_58 = this_ptr->unk6;
  local_40 = &this_ptr->dampen;
  local_34 = this_ptr->unk6 + 2;
  pcVar7 = this_ptr->unk6[1].unk + 0xc;
  local_38 = local_58;
  for (local_30 = 1; local_30 < this_ptr->vertex_count + -1; local_30 = local_30 + 1) {
    *(float *)pcVar7 = *local_40 * *(float *)pcVar7;
    *(float *)(pcVar7 + 4) = *local_40 * *(float *)(pcVar7 + 4);
    *(float *)(pcVar7 + 8) = *local_40 * *(float *)(pcVar7 + 8);
    local_44 = this_ptr->weight * (float)0.03125;
    local_b8 = (1.0 / local_44) * 0.0;
    local_b4 = (0.0 - this_ptr->weight) * (1.0 / local_44);
    pSVar6 = local_58 + local_30;
    if (&local_d0 != &local_b8) {
      local_d0 = local_b8;
      local_cc = local_b4;
      local_c8 = local_b8;
    }
    local_88 = local_d0 * delta_time;
    local_84 = local_cc * delta_time;
    local_80 = local_c8 * delta_time;
    local_94 = *(float *)(pSVar6->unk + 0xc) + local_88;
    *(float *)(pSVar6->unk + 0xc) = local_94;
    local_94 = local_94 * delta_time;
    *(float *)(pSVar6->unk + 0x10) = *(float *)(pSVar6->unk + 0x10) + local_84;
    *(float *)(pSVar6->unk + 0x14) = *(float *)(pSVar6->unk + 0x14) + local_80;
    local_90 = *(float *)(pSVar6->unk + 0x10) * delta_time;
    local_8c = delta_time * *(float *)(pSVar6->unk + 0x14);
    fVar2 = *(float *)(pSVar6->unk + 4);
    *(float *)pSVar6->unk = *(float *)pSVar6->unk + local_94;
    *(float *)(pSVar6->unk + 4) = fVar2 + local_90;
    *(float *)(pSVar6->unk + 8) = *(float *)(pSVar6->unk + 8) + local_8c;
    local_b0 = local_b8;
    core_chain_cpp_CChain_FUN_0042fed0(this_ptr);
    core_chain_cpp_CChain_FUN_0042fed0(this_ptr);
    pcVar7 = pcVar7 + 0x24;
    local_34 = local_34 + 1;
    local_38 = local_38 + 1;
  }
  local_28 = this_ptr->unk6[0].unk + 0xc;
  local_24 = this_ptr->unk6;
  local_2c = &(this_ptr->base).location;
  local_4c = this_ptr->unk6 + 2;
  local_48 = this_ptr->unk6 + 1;
  local_3c = 0;
  do {
    pCVar3 = core_chain_cpp_CChain_FUN_0042fcc0(this_ptr);
    pCVar5 = (CVector3f *)(local_24 + this_ptr->vertex_count + -1);
    if (pCVar5 != pCVar3) {
      pCVar5->x = pCVar3->x;
      pCVar5->y = pCVar3->y;
      pCVar5->z = pCVar3->z;
    }
    iVar8 = this_ptr->vertex_count + -1;
    pSVar6 = local_24 + iVar8;
    pSVar6->unk[0x14] = '\0';
    pSVar6->unk[0x15] = '\0';
    pSVar6->unk[0x16] = '\0';
    pSVar6->unk[0x17] = '\0';
    *(uint *)(local_24[iVar8].unk + 0x10) = *(uint *)(local_24[iVar8].unk + 0x14);
    *(uint *)(local_24[iVar8].unk + 0xc) = *(uint *)(local_24[iVar8].unk + 0x10);
    if ((CLocation *)local_24 != local_2c) {
      *(float *)local_24->unk = (local_2c->position).x;
      *(float *)(local_24->unk + 4) = (local_2c->position).y;
      *(float *)(local_24->unk + 8) = (local_2c->position).z;
    }
    local_28[8] = '\0';
    local_28[9] = '\0';
    local_28[10] = '\0';
    local_28[0xb] = '\0';
    local_1c = 1;
    *(uint *)(local_28 + 4) = *(uint *)(local_28 + 8);
    *(uint *)local_28 = *(uint *)(local_28 + 4);
    local_20 = local_24;
    for (; local_1c < this_ptr->vertex_count + -1; local_1c = local_1c + 1) {
      core_chain_cpp_CChain_FUN_0042fed0(this_ptr);
      core_chain_cpp_CChain_FUN_0042fed0(this_ptr);
      local_20 = local_20 + 1;
    }
    pCVar3 = core_chain_cpp_CChain_FUN_0042fcc0(this_ptr);
    pCVar5 = (CVector3f *)(local_24 + this_ptr->vertex_count + -1);
    if (pCVar5 != pCVar3) {
      pCVar5->x = pCVar3->x;
      pCVar5->y = pCVar3->y;
      pCVar5->z = pCVar3->z;
    }
    iVar8 = this_ptr->vertex_count + -1;
    pSVar6 = local_24 + iVar8;
    pSVar6->unk[0x14] = '\0';
    pSVar6->unk[0x15] = '\0';
    pSVar6->unk[0x16] = '\0';
    pSVar6->unk[0x17] = '\0';
    *(uint *)(local_24[iVar8].unk + 0x10) = *(uint *)(local_24[iVar8].unk + 0x14);
    *(uint *)(local_24[iVar8].unk + 0xc) = *(uint *)(local_24[iVar8].unk + 0x10);
    if ((CLocation *)local_24 != local_2c) {
      *(float *)local_24->unk = (local_2c->position).x;
      *(float *)(local_24->unk + 4) = (local_2c->position).y;
      *(float *)(local_24->unk + 8) = (local_2c->position).z;
    }
    local_28[8] = '\0';
    local_28[9] = '\0';
    local_28[10] = '\0';
    local_28[0xb] = '\0';
    *(uint *)(local_28 + 4) = *(uint *)(local_28 + 8);
    *(uint *)local_28 = *(uint *)(local_28 + 4);
    local_3c = local_3c + 1;
  } while (local_3c < 3);
  iVar8 = 0;
  if (0 < this_ptr->vertex_count) {
    pcVar7 = this_ptr->unk6[0].unk + 0x18;
    do {
      pSVar6 = this_ptr->unk6 + iVar8;
      if ((SChainVertex *)pcVar7 != pSVar6) {
        *(uint *)pcVar7 = *(uint *)pSVar6->unk;
        *(uint *)(pcVar7 + 4) = *(uint *)(pSVar6->unk + 4);
        *(uint *)(pcVar7 + 8) = *(uint *)(pSVar6->unk + 8);
      }
      iVar8 = iVar8 + 1;
      pcVar7 = pcVar7 + 0x24;
    } while (iVar8 < this_ptr->vertex_count);
  }
  local_54 = 0;
  local_50 = 0;
  if (*(int *)(this_ptr->unk7 + 8) != 0) {
    if (local_ec < this_ptr->chain_length * (float)0.90000000000000002) {
      pSVar6 = this_ptr->unk6;
      local_f0 = 0.0;
      for (iVar8 = 0; pSVar6 = pSVar6 + 1, iVar8 < this_ptr->vertex_count + -1; iVar8 = iVar8 + 1) {
        local_c4 = *(float *)pSVar6[-1].unk - *(float *)pSVar6->unk;
        local_c0 = *(float *)(pSVar6[-1].unk + 4) - *(float *)(pSVar6->unk + 4);
        local_bc = *(float *)(pSVar6[-1].unk + 8) - *(float *)(pSVar6->unk + 8);
        local_f0 = SQRT(local_bc * local_bc + local_c4 * local_c4 + local_c0 * local_c0) + local_f0;
      }
      if (this_ptr->chain_length * (float)0.90000000000000002 < local_f0) {
        local_50 = 1;
      }
    }
    iVar8 = this_ptr->vertex_count;
    local_a0 = local_64 - *(float *)this_ptr->unk6[iVar8 + -1].unk;
    local_9c = local_60 - *(float *)(this_ptr->unk6[iVar8 + -1].unk + 4);
    local_98 = local_5c - *(float *)(this_ptr->unk6[iVar8 + -1].unk + 8);
    if (delta_time * (float)0.10000000000000001 <
        SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c)) {
      local_54 = 1;
    }
  }
  if ((local_50 != 0) && (this_ptr->pull_wav_name[0] != '\0')) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->move_wav_handle);
    iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->pull_wav_handle);
    if (iVar8 == 0) {
      uVar4 = core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                        (g_CSoundPtr,&this_ptr->base,this_ptr->pull_wav_name,
                         (CVector3f *)(this_ptr->unk6 + this_ptr->vertex_count + -1));
      this_ptr->move_wav_handle = uVar4;
    }
  }
  this_ptr->unk5 = this_ptr->unk5 - delta_time;
  if (local_54 == 0) {
    if (0.0 <= this_ptr->unk5) {
      return;
    }
    this_ptr->unk5 = 0.0;
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->move_wav_handle);
    return;
  }
  iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->pull_wav_handle);
  if (iVar8 == 0) {
    iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->move_wav_handle);
    if (iVar8 == 0) {
      uVar4 = core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                        (g_CSoundPtr,&this_ptr->base,this_ptr->move_wav_name,
                         (CVector3f *)(this_ptr->unk6 + this_ptr->vertex_count + -1));
      this_ptr->move_wav_handle = uVar4;
    }
  }
  this_ptr->unk5 = 0.5;
  return;
}
