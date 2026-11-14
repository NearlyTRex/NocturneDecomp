// Name: core_chain.cpp_CChain_setup_FUN_004294a0
// Address: 004294a0
// Address Range: [[004294a0, 0042965c]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_CChain_setup_FUN_004294a0(CChain *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_chain_cpp_CChain_setup_FUN_004294a0(CChain *this_ptr)

{
  float fVar1;
  int iVar2;
  CVector3f *pCVar3;
  SChainVertex *pSVar4;
  uint *puVar5;
  CVector3f *pCVar6;
  byte bVar7;
  float afStackY_1040 [1017];
  float fStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  bVar7 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  if (this_ptr->target != (CCharacter *)0x0) {
    core_chain_cpp_FUN_00429420(this_ptr);
    fStack_40 = fStack_58;
    *(uint *)((int)&stack0xffffffc4 + (uint)bVar7 * -8) =
         *(uint *)(&stack0xffffffac + (uint)bVar7 * -8);
    *(uint *)((int)&stack0xffffffc8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)(&stack0xffffffb0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    fStack_28 = fStack_40 - (this_ptr->base).location.position.x;
    fStack_24 = fStack_3c - (this_ptr->base).location.position.y;
    fStack_20 = fStack_38 - (this_ptr->base).location.position.z;
    fStack_4c = fStack_28;
    *(uint *)((int)&stack0xffffffb8 + (uint)bVar7 * -8) =
         *(uint *)((int)&stack0xffffffdc + (uint)bVar7 * -8);
    *(uint *)((int)&stack0xffffffbc + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)((int)&stack0xffffffe0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    puVar5 = (uint *)((int)this_ptr + (uint)bVar7 * -8 + 0x24);
    fStack_34 = (this_ptr->base).location.position.x;
    (&stack0xffffffd0)[(uint)bVar7 * 0xfffffffe] = (float)*puVar5;
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         puVar5[(uint)bVar7 * -2 + 1];
    fVar1 = 1.0 / (float)(this_ptr->vertex_count + -1);
    iVar2 = 0;
    if (0 < this_ptr->vertex_count) {
      pCVar6 = &this_ptr->vertices[0].prev_position;
      pCVar3 = &this_ptr->vertices[0].velocity;
      do {
        pSVar4 = this_ptr->vertices + iVar2;
        if (pSVar4 != (SChainVertex *)&stack0xffffffcc) {
          (pSVar4->position).x = fStack_34;
          (pSVar4->position).y = fStack_30;
          (pSVar4->position).z = fStack_2c;
        }
        fStack_34 = fStack_34 + fStack_4c * fVar1;
        fStack_30 = fStack_30 + fStack_48 * fVar1;
        fStack_2c = fStack_2c + fStack_44 * fVar1;
        pCVar3->z = 0.0;
        pCVar3->y = pCVar3->z;
        pSVar4 = this_ptr->vertices + iVar2;
        pCVar3->x = pCVar3->y;
        if ((SChainVertex *)pCVar6 != pSVar4) {
          pCVar3[1].x = (pSVar4->position).x;
          pCVar3[1].y = (pSVar4->position).y;
          pCVar3[1].z = (pSVar4->position).z;
        }
        pCVar6 = pCVar6 + 3;
        iVar2 = iVar2 + 1;
        pCVar3 = pCVar3 + 3;
      } while (iVar2 < this_ptr->vertex_count);
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
