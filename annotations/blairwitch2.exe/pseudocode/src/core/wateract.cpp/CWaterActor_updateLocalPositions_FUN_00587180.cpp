// Name: core_wateract.cpp_CWaterActor_updateLocalPositions_FUN_00587180
// Address: 00587180
// Address Range: [[00587180, 0058726e]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_updateLocalPositions_FUN_00587180(CWaterActor *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_wateract_cpp_CWaterActor_updateLocalPositions_FUN_00587180(CWaterActor *this_ptr)

{
  CMatrix3x3f *this_ptr_00;
  CVector3f *pCVar1;
  SWaterVertex *pSVar2;
  byte bVar3;
  float afStackY_1038 [1016];
  CVector3f *input;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  CVector3f CStack_44;
  CVector3f CStack_38;
  float fStack_2c;
  float afStack_28 [2];
  CMatrix3x3f *pCStack_20;
  SWaterVertex *pSStack_1c;
  int iStack_18;
  CLocation *pCStack_14;
  
  bVar3 = 0;
  iStack_18 = 0;
  if (0 < this_ptr->vertex_count) {
    pSStack_1c = this_ptr->vertices;
    pCStack_14 = &(this_ptr->base).location;
    pCVar1 = &this_ptr->vertices[0].world_position;
    pCStack_20 = &(this_ptr->base).orient_matrix;
    do {
      this_ptr_00 = pCStack_20;
      pSVar2 = pSStack_1c + iStack_18;
      fStack_2c = pCVar1->x - (pCStack_14->position).x;
      afStack_28[0] = pCVar1->y - (pCStack_14->position).y;
      input = &CStack_44;
      afStack_28[1] = pCVar1->z - (pCStack_14->position).z;
      CStack_44.x = fStack_2c;
      *(float *)((int)&CStack_44 + (uint)bVar3 * -8 + 4) = afStack_28[(uint)bVar3 * -2];
      *(float *)((int)&CStack_44 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           afStack_28[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_004495a0
                (this_ptr_00,input,&CStack_38);
      fStack_50 = CStack_38.x;
      (&stack0xffffffb4)[(uint)bVar3 * 0xfffffffe] =
           (float)*(uint *)((int)&CStack_38 + (uint)bVar3 * -8 + 4);
      afStack_28[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -8] =
           *(float *)((int)&CStack_38 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      if (pSVar2 != (SWaterVertex *)&stack0xffffffb0) {
        (pSVar2->local_position).x = fStack_50;
        (pSVar2->local_position).y = fStack_4c;
        (pSVar2->local_position).z = fStack_48;
      }
      iStack_18 = iStack_18 + 1;
      pCVar1 = (CVector3f *)((int)(pCVar1 + 2) + 8);
    } while (iStack_18 < this_ptr->vertex_count);
  }
  return;
}
