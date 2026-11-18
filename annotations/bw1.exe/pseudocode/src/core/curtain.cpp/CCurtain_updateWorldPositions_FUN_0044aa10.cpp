// Name: core_curtain.cpp_CCurtain_updateWorldPositions_FUN_0044aa10
// Address: 0044aa10
// Address Range: [[0044aa10, 0044ab11]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_updateWorldPositions_FUN_0044aa10(CCurtain *this_ptr)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_updateWorldPositions_FUN_0044aa10(CCurtain *this_ptr)

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
  CVector3f CStack_38;
  float fStack_2c;
  float afStack_28 [2];
  CMatrix3x3f *pCStack_20;
  CLocation *pCStack_1c;
  CVector3f *pCStack_18;
  SCurtainVertex *pSStack_14;
  
  bVar3 = 0;
  iVar2 = 0;
  if (0 < this_ptr->vertex_count) {
    pSStack_14 = this_ptr->vertices;
    pCStack_20 = &(this_ptr->base).orient_matrix;
    pCStack_1c = &(this_ptr->base).location;
    pCVar1 = &this_ptr->vertices[0].world_position;
    do {
      pCStack_18 = &pSStack_14[iVar2].local_position;
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690(pCStack_20,pCStack_18,&CStack_38);
      fStack_44 = CStack_38.x;
      *(uint *)((int)&stack0xffffffc0 + (uint)bVar3 * -8) =
           *(uint *)((int)&CStack_38 + (uint)bVar3 * -8 + 4);
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&CStack_38 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      fStack_50 = fStack_44 + (pCStack_1c->position).x;
      fStack_4c = fStack_40 + (pCStack_1c->position).y;
      fStack_48 = fStack_3c + (pCStack_1c->position).z;
      fStack_2c = fStack_50;
      afStack_28[(uint)bVar3 * -2] = *(float *)((int)&stack0xffffffb4 + (uint)bVar3 * -8);
      afStack_28[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
           *(float *)((int)&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (pCVar1 != (CVector3f *)&fStack_2c) {
        pCVar1->x = fStack_2c;
        pCVar1->y = afStack_28[0];
        pCVar1->z = afStack_28[1];
      }
      if (&pCStack_18[4].z != &pCStack_18[2].z) {
        pCStack_18[4].z = pCStack_18[2].z;
        pCStack_18[5].x = pCStack_18[3].x;
        pCStack_18[5].y = pCStack_18[3].y;
      }
      iVar2 = iVar2 + 1;
      pCVar1 = (CVector3f *)((int)(pCVar1 + 9) + 8);
    } while (iVar2 < this_ptr->vertex_count);
  }
  return;
}
