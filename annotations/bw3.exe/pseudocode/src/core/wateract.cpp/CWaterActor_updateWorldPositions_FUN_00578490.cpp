// Name: core_wateract.cpp_CWaterActor_updateWorldPositions_FUN_00578490
// Address: 00578490
// Address Range: [[00578490, 0057856c]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_updateWorldPositions_FUN_00578490(CWaterActor *this_ptr)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_updateWorldPositions_FUN_00578490(CWaterActor *this_ptr)

{
  CVector3f *pCVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1034 [1016];
  CVector3f CStack_4c;
  float fStack_40;
  float afStack_3c [4];
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
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800
                (pCStack_1c,&pSStack_14[iVar2].local_position,&CStack_4c);
      fStack_28 = CStack_4c.x;
      afStack_3c[(uint)bVar3 * -2 + 6] = *(float *)((int)&CStack_4c + (uint)bVar3 * -8 + 4);
      afStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
           *(float *)((int)&CStack_4c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      afStack_3c[2] = fStack_28 + (pCStack_18->position).x;
      afStack_3c[3] = fStack_24 + (pCStack_18->position).y;
      fStack_2c = fStack_20 + (pCStack_18->position).z;
      fStack_40 = afStack_3c[2];
      afStack_3c[(uint)bVar3 * -2] = afStack_3c[(uint)bVar3 * -2 + 3];
      afStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
           afStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
      if (pCVar1 != (CVector3f *)&fStack_40) {
        pCVar1->x = fStack_40;
        pCVar1->y = afStack_3c[0];
        pCVar1->z = afStack_3c[1];
      }
      iVar2 = iVar2 + 1;
      pCVar1 = (CVector3f *)((int)(pCVar1 + 2) + 8);
    } while (iVar2 < this_ptr->vertex_count);
  }
  return;
}
