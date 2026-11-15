// Name: core_curtain.cpp_CCurtain_updateLocalPositions_FUN_0044ab20
// Address: 0044ab20
// Address Range: [[0044ab20, 0044ac0f]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_updateLocalPositions_FUN_0044ab20(CCurtain *this_ptr)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_updateLocalPositions_FUN_0044ab20(CCurtain *this_ptr)

{
  CMatrix3x3f *this_ptr_00;
  CVector3f *pCVar1;
  SCurtainVertex *pSVar2;
  byte bVar3;
  float afStackY_1038 [1016];
  CVector3f *input;
  CVector3f CStack_50;
  float fStack_44;
  float afStack_40 [2];
  CVector3f CStack_38;
  float fStack_2c;
  float afStack_28 [2];
  SCurtainVertex *pSStack_20;
  CLocation *pCStack_1c;
  CMatrix3x3f *pCStack_18;
  int iStack_14;
  
  bVar3 = 0;
  iStack_14 = 0;
  if (0 < this_ptr->vertex_count) {
    pSStack_20 = this_ptr->vertices;
    pCStack_1c = &(this_ptr->base).location;
    pCVar1 = &this_ptr->vertices[0].world_position;
    pCStack_18 = &(this_ptr->base).orient_matrix;
    do {
      this_ptr_00 = pCStack_18;
      pSVar2 = pSStack_20 + iStack_14;
      fStack_2c = pCVar1->x - (pCStack_1c->position).x;
      afStack_28[0] = pCVar1->y - (pCStack_1c->position).y;
      input = &CStack_38;
      afStack_28[1] = pCVar1->z - (pCStack_1c->position).z;
      CStack_38.x = fStack_2c;
      *(float *)((int)&CStack_38 + (uint)bVar3 * -8 + 4) = afStack_28[(uint)bVar3 * -2];
      *(float *)((int)&CStack_38 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           afStack_28[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
                (this_ptr_00,input,&CStack_50);
      fStack_44 = CStack_50.x;
      afStack_40[(uint)bVar3 * -2] = *(float *)((int)&CStack_50 + (uint)bVar3 * -8 + 4);
      afStack_40[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
           *(float *)((int)&CStack_50 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      if (pSVar2 != (SCurtainVertex *)&fStack_44) {
        (pSVar2->local_position).x = fStack_44;
        (pSVar2->local_position).y = afStack_40[0];
        (pSVar2->local_position).z = afStack_40[1];
      }
      iStack_14 = iStack_14 + 1;
      pCVar1 = (CVector3f *)((int)(pCVar1 + 9) + 8);
    } while (iStack_14 < this_ptr->vertex_count);
  }
  return;
}
