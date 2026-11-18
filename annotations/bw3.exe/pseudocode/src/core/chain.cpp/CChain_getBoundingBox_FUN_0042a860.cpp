// Name: core_chain.cpp_CChain_getBoundingBox_FUN_0042a860
// Address: 0042a860
// Address Range: [[0042a860, 0042a9c8]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_chain_cpp_CChain_getBoundingBox_FUN_0042a860(CChain *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CBoundingBox3D * __cdecl core_chain_cpp_CChain_getBoundingBox_FUN_0042a860(CChain *this_ptr,CBoundingBox3D *out_box)

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
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  float fStack_54;
  float fStack_50;
  uint uStack_4c;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  float fStack_18;
  uint auStack_14 [2];
  
  bVar5 = 0;
  CStack_30.y = 9999.0;
  CStack_30.z = 9999.0;
  CStack_3c.x = -9999.0;
  CStack_3c.y = -9999.0;
  CStack_3c.z = -9999.0;
  CStack_30.x = 9999.0;
  iVar3 = 0;
  if (0 < this_ptr->vertex_count) {
    pSVar1 = this_ptr->vertices;
    do {
      if ((pSVar1->position).x < CStack_30.x) {
        CStack_30.x = (pSVar1->position).x;
      }
      if ((pSVar1->position).y < CStack_30.y) {
        CStack_30.y = (pSVar1->position).y;
      }
      if ((pSVar1->position).z < CStack_30.z) {
        CStack_30.z = (pSVar1->position).z;
      }
      if (CStack_3c.x < (pSVar1->position).x) {
        CStack_3c.x = (pSVar1->position).x;
      }
      if (CStack_3c.y < (pSVar1->position).y) {
        CStack_3c.y = (pSVar1->position).y;
      }
      if (CStack_3c.z < (pSVar1->position).z) {
        CStack_3c.z = (pSVar1->position).z;
      }
      iVar3 = iVar3 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar3 < this_ptr->vertex_count);
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0(&this_ptr->base,&CStack_30,&CStack_24);
  fStack_18 = CStack_24.x;
  auStack_14[(uint)bVar5 * -2] = *(uint *)((int)&CStack_24 + (uint)bVar5 * -8 + 4);
  auStack_14[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       *(uint *)((int)&CStack_24 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  if (&stack0xffffff94 != &fStack_18) {
    fStack_6c = fStack_18;
    uStack_68 = auStack_14[0];
    uStack_64 = auStack_14[1];
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0(&this_ptr->base,&CStack_3c,&CStack_48);
  fStack_54 = CStack_48.x;
  (&stack0xffffffb0)[(uint)bVar5 * 0xfffffffe] =
       (float)*(uint *)((int)&CStack_48 + (uint)bVar5 * -8 + 4);
  *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&CStack_48 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
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
  fStack_60 = fStack_54;
  fStack_5c = fStack_50;
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
