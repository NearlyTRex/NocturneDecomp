// Name: core_chain.cpp_CChain_setup_FUN_0042fd20
// Address: 0042fd20
// Address Range: [[0042fd20, 0042fd30]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_CChain_setup_FUN_0042fd20(CChain *this_ptr)

#include "nocturne.h"

void __cdecl core_chain_cpp_CChain_setup_FUN_0042fd20(CChain *this_ptr)

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
  char *pcVar11;
  SChainVertex *pSVar12;
  char *pcVar13;
  float local_30;
  float local_2c;
  float local_28;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  if (*(int *)(this_ptr->unk1 + 4) != 0) {
    pCVar9 = core_chain_cpp_FUN_0042fcc0();
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
      pcVar13 = this_ptr->unk3[0].unk + 0x18;
      pcVar11 = this_ptr->unk3[0].unk + 0xc;
      do {
        pSVar12 = this_ptr->unk3 + iVar10;
        if (pSVar12 != (SChainVertex *)&local_30) {
          *(float *)pSVar12->unk = local_30;
          *(float *)(pSVar12->unk + 4) = local_2c;
          *(float *)(pSVar12->unk + 8) = local_28;
        }
        local_30 = local_30 + (fVar2 - fVar3) * fVar8;
        local_2c = local_2c + (fVar4 - fVar5) * fVar8;
        local_28 = local_28 + (fVar6 - fVar7) * fVar8;
        pcVar11[8] = '\0';
        pcVar11[9] = '\0';
        pcVar11[10] = '\0';
        pcVar11[0xb] = '\0';
        *(uint *)(pcVar11 + 4) = *(uint *)(pcVar11 + 8);
        pSVar12 = this_ptr->unk3 + iVar10;
        *(uint *)pcVar11 = *(uint *)(pcVar11 + 4);
        if ((SChainVertex *)pcVar13 != pSVar12) {
          *(uint *)(pcVar11 + 0xc) = *(uint *)pSVar12->unk;
          *(uint *)(pcVar11 + 0x10) = *(uint *)(pSVar12->unk + 4);
          *(uint *)(pcVar11 + 0x14) = *(uint *)(pSVar12->unk + 8);
        }
        pcVar13 = pcVar13 + 0x24;
        iVar10 = iVar10 + 1;
        pcVar11 = pcVar11 + 0x24;
      } while (iVar10 < this_ptr->vertex_count);
    }
  }
  iVar10 = this_ptr->vertex_count;
  fVar2 = this_ptr->chain_length;
  this_ptr->unk2[0xac] = '\0';
  this_ptr->unk2[0xad] = '\0';
  this_ptr->unk2[0xae] = '\0';
  this_ptr->unk2[0xaf] = '\0';
  this_ptr->unk2[0x114] = '\0';
  this_ptr->unk2[0x115] = '\0';
  this_ptr->unk2[0x116] = '\0';
  this_ptr->unk2[0x117] = '\0';
  this_ptr->unk2[0x118] = '\0';
  this_ptr->unk2[0x119] = '\0';
  this_ptr->unk2[0x11a] = '\0';
  this_ptr->unk2[0x11b] = '\0';
  this_ptr->unk4[0] = -0x66;
  this_ptr->unk4[1] = '?';
  this_ptr->unk4[2] = '\x1c';
  this_ptr->unk4[3] = -0x3a;
  this_ptr->unk4[8] = '\0';
  this_ptr->unk4[9] = '\0';
  this_ptr->unk4[10] = '\0';
  this_ptr->unk4[0xb] = '\0';
  *(float *)this_ptr->unk1 = fVar2 / (float)(iVar10 + -1);
  return;
}
