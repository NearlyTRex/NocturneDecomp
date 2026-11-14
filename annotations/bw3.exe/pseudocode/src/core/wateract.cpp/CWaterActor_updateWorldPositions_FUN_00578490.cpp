// Name: core_wateract.cpp_CWaterActor_updateWorldPositions_FUN_00578490
// Address: 00578490
// Address Range: [[00578490, 0057856c]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_updateWorldPositions_FUN_00578490(CWaterActor *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_wateract_cpp_CWaterActor_updateWorldPositions_FUN_00578490(CWaterActor *this_ptr)

{
  CVector3f *pCVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1034 [1016];
  float fStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CMatrix3x3f *pCStack_1c;
  CLocation *pCStack_18;
  SWaterVertex *pSStack_14;
  
  bVar3 = 0;
  iVar2 = 0;
  if (0 < this_ptr->vertex_count) {
    pSStack_14 = this_ptr->vertices;
    pCStack_1c = &(this_ptr->base).orient_matrix;
    pCStack_18 = &(this_ptr->base).location;
    pCVar1 = &this_ptr->vertices[0].world_position;
    do {
      core_dirmat_cpp_FUN_0045b800(pCStack_1c,pSStack_14 + iVar2);
      fStack_28 = fStack_4c;
      *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffb8 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffbc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      fStack_34 = fStack_28 + (pCStack_18->position).x;
      fStack_30 = fStack_24 + (pCStack_18->position).y;
      fStack_2c = fStack_20 + (pCStack_18->position).z;
      fStack_40 = fStack_34;
      (&stack0xffffffc4)[(uint)bVar3 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (pCVar1 != (CVector3f *)&stack0xffffffc0) {
        pCVar1->x = fStack_40;
        pCVar1->y = fStack_3c;
        pCVar1->z = fStack_38;
      }
      iVar2 = iVar2 + 1;
      pCVar1 = (CVector3f *)((int)(pCVar1 + 2) + 8);
    } while (iVar2 < this_ptr->vertex_count);
  }
  return;
}
