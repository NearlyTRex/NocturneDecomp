// Name: core_chain.cpp_CChain_getBoundingBox_FUN_00436be0
// Address: 00436be0
// Address Range: [[00436be0, 00436d48]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_chain_cpp_CChain_getBoundingBox_FUN_00436be0(CChain *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CBoundingBox3D * __cdecl core_chain_cpp_CChain_getBoundingBox_FUN_00436be0(CChain *this_ptr,CBoundingBox3D *out_box)

{
  CBoundingBox3D *unaff_ESI;
  SChainVertex *pSVar1;
  float *pfVar2;
  int iVar3;
  CBoundingBox3D *pCVar4;
  byte bVar5;
  float afStackY_103c [1010];
  float fStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar5 = 0;
  fStack_2c = 9999.0;
  fStack_28 = 9999.0;
  fStack_3c = -9999.0;
  fStack_38 = -9999.0;
  fStack_34 = -9999.0;
  fStack_30 = 9999.0;
  iVar3 = 0;
  if (0 < this_ptr->vertex_count) {
    pSVar1 = this_ptr->vertices;
    do {
      if ((pSVar1->position).x < fStack_30) {
        fStack_30 = (pSVar1->position).x;
      }
      if ((pSVar1->position).y < fStack_2c) {
        fStack_2c = (pSVar1->position).y;
      }
      if ((pSVar1->position).z < fStack_28) {
        fStack_28 = (pSVar1->position).z;
      }
      if (fStack_3c < (pSVar1->position).x) {
        fStack_3c = (pSVar1->position).x;
      }
      if (fStack_38 < (pSVar1->position).y) {
        fStack_38 = (pSVar1->position).y;
      }
      if (fStack_34 < (pSVar1->position).z) {
        fStack_34 = (pSVar1->position).z;
      }
      iVar3 = iVar3 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar3 < this_ptr->vertex_count);
  }
  core_actor_cpp_FUN_00408bb0(this_ptr,&stack0xffffffd0);
  fStack_18 = fStack_24;
  (&stack0xffffffec)[(uint)bVar5 * 0xfffffffe] =
       *(uint *)((int)&stack0xffffffe0 + (uint)bVar5 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if (&stack0xffffff94 != &stack0xffffffe8) {
    fStack_6c = fStack_18;
    uStack_68 = uStack_14;
    uStack_64 = uStack_10;
  }
  core_actor_cpp_FUN_00408bb0(this_ptr,&stack0xffffffc4);
  uStack_54 = uStack_48;
  (&stack0xffffffb0)[(uint)bVar5 * 0xfffffffe] =
       *(uint *)(&stack0xffffffbc + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if (&stack0xffffffa0 == &stack0xffffffac) {
    pfVar2 = &stack0xffffff94;
    pCVar4 = unaff_ESI;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      (pCVar4->min).x = *pfVar2;
      pfVar2 = pfVar2 + (uint)bVar5 * -2 + 1;
      pCVar4 = (CBoundingBox3D *)((int)pCVar4 + (uint)bVar5 * -8 + 4);
    }
    return unaff_ESI;
  }
  uStack_60 = uStack_54;
  uStack_5c = uStack_50;
  uStack_58 = uStack_4c;
  pfVar2 = &stack0xffffff94;
  pCVar4 = unaff_ESI;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    (pCVar4->min).x = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar5 * -2 + 1;
    pCVar4 = (CBoundingBox3D *)((int)pCVar4 + (uint)bVar5 * -8 + 4);
  }
  return unaff_ESI;
}
