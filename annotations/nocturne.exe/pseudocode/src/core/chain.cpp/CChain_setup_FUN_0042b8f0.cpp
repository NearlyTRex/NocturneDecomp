// Name: core_chain.cpp_CChain_setup_FUN_0042b8f0
// Address: 0042b8f0
// Address Range: [[0042b8f0, 0042ba95]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_CChain_setup_FUN_0042b8f0(CChain *this_ptr)

#include "nocturne.h"

void __cdecl core_chain_cpp_CChain_setup_FUN_0042b8f0(CChain *this_ptr)

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
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  if (this_ptr->target != (CDemonActor *)0x0) {
    pCVar9 = core_chain_cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890(this_ptr,&CStack_3c);
    pCVar1 = &(this_ptr->base).location;
    fVar2 = pCVar9->x;
    fVar3 = (pCVar1->position).x;
    fVar4 = pCVar9->y;
    fVar5 = (this_ptr->base).location.position.y;
    fVar6 = pCVar9->z;
    fVar7 = (this_ptr->base).location.position.z;
    local_30 = (pCVar1->position).x;
    local_2c = (this_ptr->base).location.position.y;
    local_28 = (this_ptr->base).location.position.z;
    fVar8 = 1.0 / (float)(this_ptr->vertex_count + -1);
    iVar10 = 0;
    if (0 < this_ptr->vertex_count) {
      pCVar9 = &this_ptr->vertices[0].prev_position;
      pCVar11 = &this_ptr->vertices[0].velocity;
      do {
        pSVar12 = this_ptr->vertices + iVar10;
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
        pSVar12 = this_ptr->vertices + iVar10;
        pCVar11->x = pCVar11->y;
        if ((SChainVertex *)pCVar9 != pSVar12) {
          pCVar11[1].x = (pSVar12->position).x;
          pCVar11[1].y = (pSVar12->position).y;
          pCVar11[1].z = (pSVar12->position).z;
        }
        pCVar9 = pCVar9 + 3;
        iVar10 = iVar10 + 1;
        pCVar11 = pCVar11 + 3;
      } while (iVar10 < this_ptr->vertex_count);
    }
  }
  this_ptr->pull_wav_handle = 0;
  this_ptr->move_wav_handle = 0;
  this_ptr->sound_cooldown = 0.0;
  this_ptr->cached_distance = -9999.9;
  this_ptr->is_visible = 0;
  this_ptr->segment_length = this_ptr->chain_length / (float)(this_ptr->vertex_count + -1);
  return;
}
