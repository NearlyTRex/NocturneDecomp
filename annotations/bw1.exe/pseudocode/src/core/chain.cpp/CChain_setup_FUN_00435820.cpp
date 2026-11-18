// Name: core_chain.cpp_CChain_setup_FUN_00435820
// Address: 00435820
// Address Range: [[00435820, 004359dc]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_CChain_setup_FUN_00435820(CChain *this_ptr)

#include "nocturne.h"

void __cdecl core_chain_cpp_CChain_setup_FUN_00435820(CChain *this_ptr)

{
  float fVar1;
  int iVar2;
  CVector3f *pCVar3;
  SChainVertex *pSVar4;
  float *pfVar5;
  CVector3f *pCVar6;
  byte bVar7;
  float afStackY_1040 [1017];
  CVector3f CStack_58;
  float fStack_4c;
  float afStack_48 [4];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  bVar7 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408850(&this_ptr->base);
  if (this_ptr->target != (CCharacter *)0x0) {
    core_chain_cpp_CChain_getTargetBoneWorldPosition_FUN_004357a0(this_ptr,&CStack_58);
    afStack_48[2] = CStack_58.x;
    afStack_48[(uint)bVar7 * -2 + 3] = *(float *)((int)&CStack_58 + (uint)bVar7 * -8 + 4);
    afStack_48[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         *(float *)((int)&CStack_58 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    fStack_28 = afStack_48[2] - (this_ptr->base).location.position.x;
    fStack_24 = afStack_48[3] - (this_ptr->base).location.position.y;
    fStack_20 = fStack_38 - (this_ptr->base).location.position.z;
    fStack_4c = fStack_28;
    afStack_48[(uint)bVar7 * -2] = afStack_48[(uint)bVar7 * -2 + 9];
    afStack_48[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_48[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
    pfVar5 = (float *)((int)this_ptr + (uint)bVar7 * -8 + 0x24);
    fStack_34 = (this_ptr->base).location.position.x;
    afStack_48[(uint)bVar7 * -2 + 6] = *pfVar5;
    afStack_48[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] = pfVar5[(uint)bVar7 * -2 + 1];
    fVar1 = 1.0 / (float)(this_ptr->vertex_count + -1);
    iVar2 = 0;
    if (0 < this_ptr->vertex_count) {
      pCVar6 = &this_ptr->vertices[0].prev_position;
      pCVar3 = &this_ptr->vertices[0].velocity;
      do {
        pSVar4 = this_ptr->vertices + iVar2;
        if (pSVar4 != (SChainVertex *)(afStack_48 + 5)) {
          (pSVar4->position).x = fStack_34;
          (pSVar4->position).y = fStack_30;
          (pSVar4->position).z = fStack_2c;
        }
        fStack_34 = fStack_34 + fStack_4c * fVar1;
        fStack_30 = fStack_30 + afStack_48[0] * fVar1;
        fStack_2c = fStack_2c + afStack_48[1] * fVar1;
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
