// Name: core_chain.cpp_CChain_process_FUN_0042bca0
// Address: 0042bca0
// Address Range: [[0042bca0, 0042c4bd]]
// Convention: unknown
// Signature: void core_chain_cpp_CChain_process_FUN_0042bca0(CChain *param_1,float param_2)

#include "nocturne.h"

void core_chain_cpp_CChain_process_FUN_0042bca0(CChain *param_1,float param_2)

{
  CLocation *pCVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  SChainVertex *pSVar4;
  uint uVar5;
  int iVar6;
  SChainVertex *pSVar7;
  float local_f0;
  float local_ec;
  CVector3f local_e8;
  uint local_dc;
  float local_d8;
  uint local_d4;
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
  CVector3f local_70;
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
  SChainVertex *local_2c;
  CVector3f *local_28;
  SChainVertex *local_24;
  SChainVertex *local_20;
  int local_1c;
  float fStack_18;
  
  if (param_1->cached_distance < -9900.0f) {
    fStack_18 = (*((param_1->base).vtable._ub)->cylinderGroundCheck)
                          (&param_1->base,0.1,(CVector3f *)0x0);
    param_1->cached_distance = fStack_18;
  }
  if (param_1->is_visible != 0) {
    pSVar4 = param_1->vertices;
    local_ec = 0.0;
    for (iVar6 = 0; pSVar4 = pSVar4 + 1, iVar6 < param_1->vertex_count + -1; iVar6 = iVar6 + 1) {
      local_7c = pSVar4[-1].position.x - (pSVar4->position).x;
      local_78 = pSVar4[-1].position.y - (pSVar4->position).y;
      local_74 = pSVar4[-1].position.z - (pSVar4->position).z;
      local_ec = SQRT(local_74 * local_74 + local_7c * local_7c + local_78 * local_78) + local_ec;
    }
  }
  pSVar4 = param_1->vertices + param_1->vertex_count + -1;
  param_1->inv_delta_time = 1.0 / param_2;
  local_64 = (pSVar4->position).x;
  local_60 = (pSVar4->position).y;
  local_5c = (pSVar4->position).z;
  pCVar2 = core_chain_cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890(param_1,&local_ac);
  pCVar3 = &param_1->vertices[param_1->vertex_count + -1].position;
  if (pCVar3 != pCVar2) {
    pCVar3->x = pCVar2->x;
    pCVar3->y = pCVar2->y;
    pCVar3->z = pCVar2->z;
  }
  iVar6 = param_1->vertex_count;
  param_1->vertices[iVar6 + -1].velocity.z = 0.0;
  param_1->vertices[iVar6 + -1].velocity.y = param_1->vertices[iVar6 + -1].velocity.z;
  param_1->vertices[iVar6 + -1].velocity.x = param_1->vertices[iVar6 + -1].velocity.y;
  pCVar1 = &(param_1->base).location;
  if (param_1->vertices != (SChainVertex *)pCVar1) {
    param_1->vertices[0].position.x = (pCVar1->position).x;
    param_1->vertices[0].position.y = (param_1->base).location.position.y;
    param_1->vertices[0].position.z = (param_1->base).location.position.z;
  }
  param_1->vertices[0].velocity.z = 0.0;
  param_1->vertices[0].velocity.y = param_1->vertices[0].velocity.z;
  param_1->vertices[0].velocity.x = param_1->vertices[0].velocity.y;
  local_58 = param_1->vertices;
  local_40 = &param_1->dampen;
  local_34 = param_1->vertices + 2;
  pCVar2 = &param_1->vertices[1].velocity;
  local_38 = local_58;
  for (local_30 = 1; local_30 < param_1->vertex_count + -1; local_30 = local_30 + 1) {
    pCVar2->x = *local_40 * pCVar2->x;
    pCVar2->y = *local_40 * pCVar2->y;
    pCVar2->z = *local_40 * pCVar2->z;
    local_d4 = 0;
    local_dc = 0;
    local_44 = param_1->weight * (float)0.03125;
    local_b8 = (1.0 / local_44) * 0.0;
    local_d8 = 0.0 - param_1->weight;
    local_b4 = local_d8 * (1.0 / local_44);
    pSVar4 = local_58 + local_30;
    if (&local_d0 != &local_b8) {
      local_d0 = local_b8;
      local_cc = local_b4;
      local_c8 = local_b8;
    }
    local_88 = local_d0 * param_2;
    local_84 = local_cc * param_2;
    local_80 = local_c8 * param_2;
    local_94 = (pSVar4->velocity).x + local_88;
    (pSVar4->velocity).x = local_94;
    local_94 = local_94 * param_2;
    (pSVar4->velocity).y = (pSVar4->velocity).y + local_84;
    (pSVar4->velocity).z = (pSVar4->velocity).z + local_80;
    local_90 = (pSVar4->velocity).y * param_2;
    local_8c = param_2 * (pSVar4->velocity).z;
    (pSVar4->position).x = (pSVar4->position).x + local_94;
    (pSVar4->position).y = (pSVar4->position).y + local_90;
    (pSVar4->position).z = (pSVar4->position).z + local_8c;
    local_b0 = local_b8;
    core_chain_cpp_CChain_constrainSegmentDistance_FUN_0042baa0(param_1,pSVar4,local_38);
    core_chain_cpp_CChain_constrainSegmentDistance_FUN_0042baa0(param_1,pSVar4,local_34);
    pCVar2 = pCVar2 + 3;
    local_34 = local_34 + 1;
    local_38 = local_38 + 1;
  }
  local_28 = &param_1->vertices[0].velocity;
  local_24 = param_1->vertices;
  local_2c = (SChainVertex *)&(param_1->base).location;
  local_4c = param_1->vertices + 2;
  local_48 = param_1->vertices + 1;
  local_3c = 0;
  do {
    pSVar4 = (SChainVertex *)
             core_chain_cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890(param_1,&local_70);
    pSVar7 = local_24 + param_1->vertex_count + -1;
    if (pSVar7 != pSVar4) {
      (pSVar7->position).x = (pSVar4->position).x;
      (pSVar7->position).y = (pSVar4->position).y;
      (pSVar7->position).z = (pSVar4->position).z;
    }
    iVar6 = param_1->vertex_count + -1;
    local_24[iVar6].velocity.z = 0.0;
    local_24[iVar6].velocity.y = local_24[iVar6].velocity.z;
    local_24[iVar6].velocity.x = local_24[iVar6].velocity.y;
    if (local_24 != local_2c) {
      (local_24->position).x = (local_2c->position).x;
      (local_24->position).y = (local_2c->position).y;
      (local_24->position).z = (local_2c->position).z;
    }
    local_28->z = 0.0;
    local_1c = 1;
    local_28->y = local_28->z;
    local_28->x = local_28->y;
    local_20 = local_24;
    pSVar4 = local_48;
    pSVar7 = local_4c;
    for (; local_1c < param_1->vertex_count + -1; local_1c = local_1c + 1) {
      core_chain_cpp_CChain_constrainSegmentDistance_FUN_0042baa0(param_1,pSVar4,local_20);
      core_chain_cpp_CChain_constrainSegmentDistance_FUN_0042baa0(param_1,pSVar4,pSVar7);
      pSVar4 = pSVar4 + 1;
      local_20 = local_20 + 1;
      pSVar7 = pSVar7 + 1;
    }
    pSVar4 = (SChainVertex *)
             core_chain_cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890(param_1,&local_e8);
    pSVar7 = local_24 + param_1->vertex_count + -1;
    if (pSVar7 != pSVar4) {
      (pSVar7->position).x = (pSVar4->position).x;
      (pSVar7->position).y = (pSVar4->position).y;
      (pSVar7->position).z = (pSVar4->position).z;
    }
    iVar6 = param_1->vertex_count + -1;
    local_24[iVar6].velocity.z = 0.0;
    local_24[iVar6].velocity.y = local_24[iVar6].velocity.z;
    local_24[iVar6].velocity.x = local_24[iVar6].velocity.y;
    if (local_24 != local_2c) {
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
  if (0 < param_1->vertex_count) {
    pCVar2 = &param_1->vertices[0].prev_position;
    do {
      pSVar4 = param_1->vertices + iVar6;
      if ((SChainVertex *)pCVar2 != pSVar4) {
        pCVar2->x = (pSVar4->position).x;
        pCVar2->y = (pSVar4->position).y;
        pCVar2->z = (pSVar4->position).z;
      }
      iVar6 = iVar6 + 1;
      pCVar2 = pCVar2 + 3;
    } while (iVar6 < param_1->vertex_count);
  }
  local_54 = 0;
  local_50 = 0;
  if (param_1->is_visible != 0) {
    if (local_ec < param_1->chain_length * (float)0.90000000000000002) {
      pSVar4 = param_1->vertices;
      local_f0 = 0.0;
      for (iVar6 = 0; pSVar4 = pSVar4 + 1, iVar6 < param_1->vertex_count + -1; iVar6 = iVar6 + 1) {
        local_c4 = pSVar4[-1].position.x - (pSVar4->position).x;
        local_c0 = pSVar4[-1].position.y - (pSVar4->position).y;
        local_bc = pSVar4[-1].position.z - (pSVar4->position).z;
        local_f0 = SQRT(local_bc * local_bc + local_c4 * local_c4 + local_c0 * local_c0) + local_f0;
      }
      if (param_1->chain_length * (float)0.90000000000000002 < local_f0) {
        local_50 = 1;
      }
    }
    iVar6 = param_1->vertex_count;
    local_a0 = local_64 - param_1->vertices[iVar6 + -1].position.x;
    local_9c = local_60 - param_1->vertices[iVar6 + -1].position.y;
    local_98 = local_5c - param_1->vertices[iVar6 + -1].position.z;
    if (param_2 * (float)0.10000000000000001 <
        SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c)) {
      local_54 = 1;
    }
  }
  if ((local_50 != 0) && (param_1->pull_wav_name[0] != '\0')) {
    sound_sndmain_cpp_killSfx_FUN_00527230(param_1->move_wav_handle);
    iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->pull_wav_handle);
    if (iVar6 == 0) {
      uVar5 = core_sound_cpp_CSound_playTrackedActorSound_FUN_0052ea90
                        (g_CSound_PTR_005bed68,&param_1->base,param_1->pull_wav_name,
                         &param_1->vertices[param_1->vertex_count + -1].position);
      param_1->move_wav_handle = uVar5;
    }
  }
  param_1->sound_cooldown = param_1->sound_cooldown - param_2;
  if (local_54 == 0) {
    if (0.0 <= param_1->sound_cooldown) {
      return;
    }
    param_1->sound_cooldown = 0.0;
    sound_sndmain_cpp_killSfx_FUN_00527230(param_1->move_wav_handle);
    return;
  }
  iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->pull_wav_handle);
  if (iVar6 == 0) {
    iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->move_wav_handle);
    if (iVar6 == 0) {
      uVar5 = core_sound_cpp_CSound_playTrackedActorSound_FUN_0052ea90
                        (g_CSound_PTR_005bed68,&param_1->base,param_1->move_wav_name,
                         &param_1->vertices[param_1->vertex_count + -1].position);
      param_1->move_wav_handle = uVar5;
    }
  }
  param_1->sound_cooldown = 0.5;
  return;
}
