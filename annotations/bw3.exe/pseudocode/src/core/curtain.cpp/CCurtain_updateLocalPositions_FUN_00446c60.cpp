// Name: core_curtain.cpp_CCurtain_updateLocalPositions_FUN_00446c60
// Address: 00446c60
// Address Range: [[00446c60, 00446d4f]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_updateLocalPositions_FUN_00446c60(CCurtain *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_curtain_cpp_CCurtain_updateLocalPositions_FUN_00446c60(CCurtain *this_ptr)

{
  CMatrix3x3f *pCVar1;
  CVector3f *pCVar2;
  SCurtainVertex *pSVar3;
  byte bVar4;
  float afStackY_1038 [1016];
  float *pfVar5;
  float fStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  SCurtainVertex *pSStack_20;
  CLocation *pCStack_1c;
  CMatrix3x3f *pCStack_18;
  int iStack_14;
  
  bVar4 = 0;
  iStack_14 = 0;
  if (0 < this_ptr->vertex_count) {
    pSStack_20 = this_ptr->vertices;
    pCStack_1c = &(this_ptr->base).location;
    pCVar2 = &this_ptr->vertices[0].world_position;
    pCStack_18 = &(this_ptr->base).orient_matrix;
    do {
      pCVar1 = pCStack_18;
      pSVar3 = pSStack_20 + iStack_14;
      fStack_2c = pCVar2->x - (pCStack_1c->position).x;
      fStack_28 = pCVar2->y - (pCStack_1c->position).y;
      pfVar5 = &stack0xffffffc8;
      fStack_24 = pCVar2->z - (pCStack_1c->position).z;
      fStack_38 = fStack_2c;
      *(uint *)((int)&stack0xffffffcc + (uint)bVar4 * 0xfffffffe * 4) =
           *(uint *)((int)&stack0xffffffd8 + (uint)bVar4 * -8);
      *(uint *)(&stack0xffffffd0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      core_dirmat_cpp_FUN_0045b870(pCVar1,pfVar5);
      fStack_44 = fStack_50;
      (&stack0xffffffc0)[(uint)bVar4 * 0xfffffffe] =
           (float)*(uint *)(&stack0xffffffb4 + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffb8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      if (pSVar3 != (SCurtainVertex *)&stack0xffffffbc) {
        (pSVar3->local_position).x = fStack_44;
        (pSVar3->local_position).y = fStack_40;
        (pSVar3->local_position).z = fStack_3c;
      }
      iStack_14 = iStack_14 + 1;
      pCVar2 = (CVector3f *)((int)(pCVar2 + 9) + 8);
    } while (iStack_14 < this_ptr->vertex_count);
  }
  return;
}
