// Name: core_curtain.cpp_CCurtain_updateWorldPositions_FUN_00446b50
// Address: 00446b50
// Address Range: [[00446b50, 00446c51]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_updateWorldPositions_FUN_00446b50(CCurtain *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_curtain_cpp_CCurtain_updateWorldPositions_FUN_00446b50(CCurtain *this_ptr)

{
  CVector3f *pCVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1038 [1016];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CMatrix3x3f *pCStack_20;
  CLocation *pCStack_1c;
  SCurtainVertex *pSStack_18;
  SCurtainVertex *pSStack_14;
  
  bVar3 = 0;
  iVar2 = 0;
  if (0 < this_ptr->vertex_count) {
    pSStack_14 = this_ptr->vertices;
    pCStack_20 = &(this_ptr->base).orient_matrix;
    pCStack_1c = &(this_ptr->base).location;
    pCVar1 = &this_ptr->vertices[0].world_position;
    do {
      pSStack_18 = pSStack_14 + iVar2;
      core_dirmat_cpp_FUN_0045b800(pCStack_20,pSStack_18);
      fStack_44 = fStack_38;
      *(uint *)((int)&stack0xffffffc0 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffcc + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      fStack_50 = fStack_44 + (pCStack_1c->position).x;
      fStack_4c = fStack_40 + (pCStack_1c->position).y;
      fStack_48 = fStack_3c + (pCStack_1c->position).z;
      fStack_2c = fStack_50;
      (&stack0xffffffd8)[(uint)bVar3 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffffb4 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (pCVar1 != (CVector3f *)&stack0xffffffd4) {
        pCVar1->x = fStack_2c;
        pCVar1->y = fStack_28;
        pCVar1->z = fStack_24;
      }
      if (&pSStack_18->last_world_position != &pSStack_18->world_position) {
        (pSStack_18->last_world_position).x = (pSStack_18->world_position).x;
        (pSStack_18->last_world_position).y = (pSStack_18->world_position).y;
        (pSStack_18->last_world_position).z = (pSStack_18->world_position).z;
      }
      iVar2 = iVar2 + 1;
      pCVar1 = (CVector3f *)((int)(pCVar1 + 9) + 8);
    } while (iVar2 < this_ptr->vertex_count);
  }
  return;
}
