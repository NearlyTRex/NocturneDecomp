// Name: core_chain.cpp_CChain_setup_FUN_0042b8f0
// Address: 0042b8f0
// Address Range: [[0042b8f0, 0042ba95]]
// Convention: unknown
// Signature: void core_chain_cpp_CChain_setup_FUN_0042b8f0(CChain *param_1)

#include "nocturne.h"

void core_chain_cpp_CChain_setup_FUN_0042b8f0(CChain *param_1)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CVector3f *pCVar9;
  int iVar10;
  CVector3f *pCVar11;
  SChainVertex *pSVar12;
  CVector3f CStack_3c;
  float local_30;
  float local_2c;
  float local_28;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&param_1->base);
  if (param_1->target != (CDemonActor *)0x0) {
    pCVar9 = core_chain_cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890(param_1,&CStack_3c);
    pCVar1 = &(param_1->base).location;
    fVar2 = pCVar9->x;
    fVar3 = (pCVar1->position).x;
    fVar4 = pCVar9->y;
    fVar5 = (param_1->base).location.position.y;
    fVar6 = pCVar9->z;
    fVar7 = (param_1->base).location.position.z;
    local_30 = (pCVar1->position).x;
    local_2c = (param_1->base).location.position.y;
    local_28 = (param_1->base).location.position.z;
    fVar8 = 1.0 / (float)(param_1->vertex_count + -1);
    iVar10 = 0;
    if (0 < param_1->vertex_count) {
      pCVar9 = &param_1->vertices[0].prev_position;
      pCVar11 = &param_1->vertices[0].velocity;
      do {
        pSVar12 = param_1->vertices + iVar10;
        if (pSVar12 != (SChainVertex *)&local_30) {
          (pSVar12->position).x = local_30;
          (pSVar12->position).y = local_2c;
          (pSVar12->position).z = local_28;
        }
        local_30 = local_30 + (fVar2 - fVar3) * fVar8;
        local_2c = local_2c + (fVar4 - fVar5) * fVar8;
        local_28 = local_28 + (fVar6 - fVar7) * fVar8;
        pCVar11->z = 0.0;
        pCVar11->y = pCVar11->z;
        pSVar12 = param_1->vertices + iVar10;
        pCVar11->x = pCVar11->y;
        if ((SChainVertex *)pCVar9 != pSVar12) {
          pCVar11[1].x = (pSVar12->position).x;
          pCVar11[1].y = (pSVar12->position).y;
          pCVar11[1].z = (pSVar12->position).z;
        }
        pCVar9 = pCVar9 + 3;
        iVar10 = iVar10 + 1;
        pCVar11 = pCVar11 + 3;
      } while (iVar10 < param_1->vertex_count);
    }
  }
  param_1->pull_wav_handle = 0;
  param_1->move_wav_handle = 0;
  param_1->sound_cooldown = 0.0;
  param_1->cached_distance = -9999.9;
  param_1->is_visible = 0;
  param_1->segment_length = param_1->chain_length / (float)(param_1->vertex_count + -1);
  return;
}
