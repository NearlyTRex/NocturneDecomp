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
  float fStack_e4;
  float fStack_e0;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  float fStack_a4;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float local_58;
  float local_54;
  float local_50;
  SChainVertex *local_4c;
  int local_48;
  int local_44;
  SChainVertex *local_40;
  SChainVertex *local_3c;
  float local_38;
  float *local_34;
  int local_30;
  SChainVertex *local_2c;
  SChainVertex *local_28;
  int local_24;
  CLocation *local_20;
  char *local_1c;
  SChainVertex *pSStack_18;
  SChainVertex *pSStack_14;
  
  if (*(float *)this_ptr->unk4 < -9900.0f) {
    fVar2 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                      (&this_ptr->base,0.1,(CVector3f *)0x0);
    *(float *)this_ptr->unk4 = fVar2;
  }
  if (*(int *)(this_ptr->unk4 + 8) != 0) {
    pSVar6 = this_ptr->unk3;
    fStack_e0 = 0.0;
    for (iVar8 = 0; pSVar6 = pSVar6 + 1, iVar8 < this_ptr->vertex_count + -1; iVar8 = iVar8 + 1) {
      local_70 = *(float *)pSVar6[-1].unk - *(float *)pSVar6->unk;
      fStack_6c = *(float *)(pSVar6[-1].unk + 4) - *(float *)(pSVar6->unk + 4);
      fStack_68 = *(float *)(pSVar6[-1].unk + 8) - *(float *)(pSVar6->unk + 8);
      fStack_e0 = SQRT(fStack_68 * fStack_68 + local_70 * local_70 + fStack_6c * fStack_6c) +
                  fStack_e0;
    }
  }
  pSVar6 = this_ptr->unk3 + this_ptr->vertex_count + -1;
  *(float *)(this_ptr->unk4 + 4) = 1.0 / delta_time;
  local_58 = *(float *)pSVar6->unk;
  local_54 = *(float *)(pSVar6->unk + 4);
  local_50 = *(float *)(pSVar6->unk + 8);
  pCVar3 = core_chain_cpp_FUN_0042fcc0();
  pCVar5 = (CVector3f *)(this_ptr->unk3 + this_ptr->vertex_count + -1);
  if (pCVar5 != pCVar3) {
    pCVar5->x = pCVar3->x;
    pCVar5->y = pCVar3->y;
    pCVar5->z = pCVar3->z;
  }
  iVar8 = this_ptr->vertex_count;
  pSVar6 = this_ptr->unk3 + iVar8 + -1;
  pSVar6->unk[0x14] = '\0';
  pSVar6->unk[0x15] = '\0';
  pSVar6->unk[0x16] = '\0';
  pSVar6->unk[0x17] = '\0';
  *(uint *)(this_ptr->unk3[iVar8 + -1].unk + 0x10) =
       *(uint *)(this_ptr->unk3[iVar8 + -1].unk + 0x14);
  *(uint *)(this_ptr->unk3[iVar8 + -1].unk + 0xc) =
       *(uint *)(this_ptr->unk3[iVar8 + -1].unk + 0x10);
  pCVar1 = &(this_ptr->base).location;
  if ((CLocation *)this_ptr->unk3 != pCVar1) {
    *(float *)this_ptr->unk3[0].unk = (pCVar1->position).x;
    *(float *)(this_ptr->unk3[0].unk + 4) = (this_ptr->base).location.position.y;
    *(float *)(this_ptr->unk3[0].unk + 8) = (this_ptr->base).location.position.z;
  }
  this_ptr->unk3[0].unk[0x14] = '\0';
  this_ptr->unk3[0].unk[0x15] = '\0';
  this_ptr->unk3[0].unk[0x16] = '\0';
  this_ptr->unk3[0].unk[0x17] = '\0';
  *(uint *)(this_ptr->unk3[0].unk + 0x10) = *(uint *)(this_ptr->unk3[0].unk + 0x14);
  *(uint *)(this_ptr->unk3[0].unk + 0xc) = *(uint *)(this_ptr->unk3[0].unk + 0x10);
  local_4c = this_ptr->unk3;
  local_34 = &this_ptr->dampen;
  local_28 = this_ptr->unk3 + 2;
  pcVar7 = this_ptr->unk3[1].unk + 0xc;
  local_2c = local_4c;
  for (local_24 = 1; local_24 < this_ptr->vertex_count + -1; local_24 = local_24 + 1) {
    *(float *)pcVar7 = *local_34 * *(float *)pcVar7;
    *(float *)(pcVar7 + 4) = *local_34 * *(float *)(pcVar7 + 4);
    *(float *)(pcVar7 + 8) = *local_34 * *(float *)(pcVar7 + 8);
    local_38 = this_ptr->weight * (float)0.03125;
    local_ac = (1.0 / local_38) * 0.0;
    fStack_a8 = (0.0 - this_ptr->weight) * (1.0 / local_38);
    pSVar6 = local_4c + local_24;
    if (&local_c4 != &local_ac) {
      local_c4 = local_ac;
      local_c0 = fStack_a8;
      local_bc = local_ac;
    }
    local_7c = local_c4 * delta_time;
    local_78 = local_c0 * delta_time;
    local_74 = local_bc * delta_time;
    local_88 = *(float *)(pSVar6->unk + 0xc) + local_7c;
    *(float *)(pSVar6->unk + 0xc) = local_88;
    local_88 = local_88 * delta_time;
    *(float *)(pSVar6->unk + 0x10) = *(float *)(pSVar6->unk + 0x10) + local_78;
    *(float *)(pSVar6->unk + 0x14) = *(float *)(pSVar6->unk + 0x14) + local_74;
    local_84 = *(float *)(pSVar6->unk + 0x10) * delta_time;
    local_80 = delta_time * *(float *)(pSVar6->unk + 0x14);
    fVar2 = *(float *)(pSVar6->unk + 4);
    *(float *)pSVar6->unk = *(float *)pSVar6->unk + local_88;
    *(float *)(pSVar6->unk + 4) = fVar2 + local_84;
    *(float *)(pSVar6->unk + 8) = *(float *)(pSVar6->unk + 8) + local_80;
    fStack_a4 = local_ac;
    core_chain_cpp_FUN_0042fed0();
    core_chain_cpp_FUN_0042fed0();
    pcVar7 = pcVar7 + 0x24;
    local_28 = local_28 + 1;
    local_2c = local_2c + 1;
  }
  local_1c = this_ptr->unk3[0].unk + 0xc;
  pSStack_18 = this_ptr->unk3;
  local_20 = &(this_ptr->base).location;
  local_40 = this_ptr->unk3 + 2;
  local_3c = this_ptr->unk3 + 1;
  local_30 = 0;
  do {
    pCVar3 = core_chain_cpp_FUN_0042fcc0();
    pCVar5 = (CVector3f *)(pSStack_18 + this_ptr->vertex_count + -1);
    if (pCVar5 != pCVar3) {
      pCVar5->x = pCVar3->x;
      pCVar5->y = pCVar3->y;
      pCVar5->z = pCVar3->z;
    }
    iVar8 = this_ptr->vertex_count + -1;
    pSVar6 = pSStack_18 + iVar8;
    pSVar6->unk[0x14] = '\0';
    pSVar6->unk[0x15] = '\0';
    pSVar6->unk[0x16] = '\0';
    pSVar6->unk[0x17] = '\0';
    *(uint *)(pSStack_18[iVar8].unk + 0x10) = *(uint *)(pSStack_18[iVar8].unk + 0x14);
    *(uint *)(pSStack_18[iVar8].unk + 0xc) = *(uint *)(pSStack_18[iVar8].unk + 0x10);
    if ((CLocation *)pSStack_18 != local_20) {
      *(float *)pSStack_18->unk = (local_20->position).x;
      *(float *)(pSStack_18->unk + 4) = (local_20->position).y;
      *(float *)(pSStack_18->unk + 8) = (local_20->position).z;
    }
    local_1c[8] = '\0';
    local_1c[9] = '\0';
    local_1c[10] = '\0';
    local_1c[0xb] = '\0';
    *(uint *)(local_1c + 4) = *(uint *)(local_1c + 8);
    *(uint *)local_1c = *(uint *)(local_1c + 4);
    pSStack_14 = pSStack_18;
    for (iVar8 = 1; iVar8 < this_ptr->vertex_count + -1; iVar8 = iVar8 + 1) {
      core_chain_cpp_FUN_0042fed0();
      core_chain_cpp_FUN_0042fed0();
      pSStack_14 = pSStack_14 + 1;
    }
    pCVar3 = core_chain_cpp_FUN_0042fcc0();
    pCVar5 = (CVector3f *)(pSStack_18 + this_ptr->vertex_count + -1);
    if (pCVar5 != pCVar3) {
      pCVar5->x = pCVar3->x;
      pCVar5->y = pCVar3->y;
      pCVar5->z = pCVar3->z;
    }
    iVar8 = this_ptr->vertex_count + -1;
    pSVar6 = pSStack_18 + iVar8;
    pSVar6->unk[0x14] = '\0';
    pSVar6->unk[0x15] = '\0';
    pSVar6->unk[0x16] = '\0';
    pSVar6->unk[0x17] = '\0';
    *(uint *)(pSStack_18[iVar8].unk + 0x10) = *(uint *)(pSStack_18[iVar8].unk + 0x14);
    *(uint *)(pSStack_18[iVar8].unk + 0xc) = *(uint *)(pSStack_18[iVar8].unk + 0x10);
    if ((CLocation *)pSStack_18 != local_20) {
      *(float *)pSStack_18->unk = (local_20->position).x;
      *(float *)(pSStack_18->unk + 4) = (local_20->position).y;
      *(float *)(pSStack_18->unk + 8) = (local_20->position).z;
    }
    local_1c[8] = '\0';
    local_1c[9] = '\0';
    local_1c[10] = '\0';
    local_1c[0xb] = '\0';
    *(uint *)(local_1c + 4) = *(uint *)(local_1c + 8);
    *(uint *)local_1c = *(uint *)(local_1c + 4);
    local_30 = local_30 + 1;
  } while (local_30 < 3);
  iVar8 = 0;
  if (0 < this_ptr->vertex_count) {
    pcVar7 = this_ptr->unk3[0].unk + 0x18;
    do {
      pSVar6 = this_ptr->unk3 + iVar8;
      if ((SChainVertex *)pcVar7 != pSVar6) {
        *(uint *)pcVar7 = *(uint *)pSVar6->unk;
        *(uint *)(pcVar7 + 4) = *(uint *)(pSVar6->unk + 4);
        *(uint *)(pcVar7 + 8) = *(uint *)(pSVar6->unk + 8);
      }
      iVar8 = iVar8 + 1;
      pcVar7 = pcVar7 + 0x24;
    } while (iVar8 < this_ptr->vertex_count);
  }
  local_48 = 0;
  local_44 = 0;
  if (*(int *)(this_ptr->unk4 + 8) != 0) {
    if (fStack_e0 < this_ptr->chain_length * (float)0.90000000000000002) {
      pSVar6 = this_ptr->unk3;
      fStack_e4 = 0.0;
      for (iVar8 = 0; pSVar6 = pSVar6 + 1, iVar8 < this_ptr->vertex_count + -1; iVar8 = iVar8 + 1) {
        local_b8 = *(float *)pSVar6[-1].unk - *(float *)pSVar6->unk;
        local_b4 = *(float *)(pSVar6[-1].unk + 4) - *(float *)(pSVar6->unk + 4);
        local_b0 = *(float *)(pSVar6[-1].unk + 8) - *(float *)(pSVar6->unk + 8);
        fStack_e4 = SQRT(local_b0 * local_b0 + local_b8 * local_b8 + local_b4 * local_b4) +
                    fStack_e4;
      }
      if (this_ptr->chain_length * (float)0.90000000000000002 < fStack_e4) {
        local_44 = 1;
      }
    }
    iVar8 = this_ptr->vertex_count;
    local_94 = local_58 - *(float *)this_ptr->unk3[iVar8 + -1].unk;
    local_90 = local_54 - *(float *)(this_ptr->unk3[iVar8 + -1].unk + 4);
    local_8c = local_50 - *(float *)(this_ptr->unk3[iVar8 + -1].unk + 8);
    if (delta_time * (float)0.10000000000000001 <
        SQRT(local_8c * local_8c + local_94 * local_94 + local_90 * local_90)) {
      local_48 = 1;
    }
  }
  if ((local_44 != 0) && (this_ptr->unk2[0x48] != '\0')) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk2 + 0x114));
    iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk2 + 0xac));
    if (iVar8 == 0) {
      uVar4 = core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                        (g_CSoundPtr,&this_ptr->base,this_ptr->unk2 + 0x48,
                         (CVector3f *)(this_ptr->unk3 + this_ptr->vertex_count + -1));
      *(uint *)(this_ptr->unk2 + 0x114) = uVar4;
    }
  }
  *(float *)(this_ptr->unk2 + 0x118) = *(float *)(this_ptr->unk2 + 0x118) - delta_time;
  if (local_48 == 0) {
    if (0.0 <= *(float *)(this_ptr->unk2 + 0x118)) {
      return;
    }
    uVar4 = *(uint *)(this_ptr->unk2 + 0x114);
    this_ptr->unk2[0x118] = '\0';
    this_ptr->unk2[0x119] = '\0';
    this_ptr->unk2[0x11a] = '\0';
    this_ptr->unk2[0x11b] = '\0';
    sound_sndmain_cpp_killSfx_FUN_005a9c40(uVar4);
    return;
  }
  iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk2 + 0xac));
  if (iVar8 == 0) {
    iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk2 + 0x114));
    if (iVar8 == 0) {
      uVar4 = core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                        (g_CSoundPtr,&this_ptr->base,this_ptr->unk2 + 0xb0,
                         (CVector3f *)(this_ptr->unk3 + this_ptr->vertex_count + -1));
      *(uint *)(this_ptr->unk2 + 0x114) = uVar4;
    }
  }
  this_ptr->unk2[0x118] = '\0';
  this_ptr->unk2[0x119] = '\0';
  this_ptr->unk2[0x11a] = '\0';
  this_ptr->unk2[0x11b] = '?';
  return;
}
