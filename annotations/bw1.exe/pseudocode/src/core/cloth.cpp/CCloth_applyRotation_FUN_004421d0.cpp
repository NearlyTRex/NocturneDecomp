// Name: core_cloth.cpp_CCloth_applyRotation_FUN_004421d0
// Address: 004421d0
// Address Range: [[004421d0, 00442320]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_applyRotation_FUN_004421d0(CCloth *this_ptr,CVector3f *euler)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_applyRotation_FUN_004421d0(CCloth *this_ptr,CVector3f *euler)

{
  CVector3f *pCVar1;
  CVector3f *input;
  byte bVar2;
  float afStackY_1048 [1006];
  CMatrix3x3f CStack_88;
  CVector3f CStack_60;
  float fStack_54;
  float afStack_50 [2];
  CVector3f CStack_48;
  CVector3f CStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CVector3f CStack_24;
  SClothVertex *pSStack_18;
  int iStack_14;
  
  bVar2 = 0;
  pCVar1 = &this_ptr->last_euler;
  CStack_48.x = euler->x - pCVar1->x;
  CStack_48.y = euler->y - (this_ptr->last_euler).y;
  CStack_48.z = euler->z - (this_ptr->last_euler).z;
  if (pCVar1 != euler) {
    pCVar1->x = euler->x;
    (this_ptr->last_euler).y = euler->y;
    (this_ptr->last_euler).z = euler->z;
  }
  fStack_30 = CStack_48.x;
  fStack_2c = CStack_48.y;
  fStack_28 = CStack_48.z;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(&CStack_88,&CStack_48);
  iStack_14 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    pSStack_18 = this_ptr->vertices;
    pCVar1 = &this_ptr->vertices[0].secondary_velocity;
    do {
      input = &pSStack_18[iStack_14].position;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700(&CStack_88,input,&CStack_24)
      ;
      CStack_3c.x = CStack_24.x;
      *(uint *)((int)&CStack_3c + (uint)bVar2 * -8 + 4) =
           *(uint *)((int)&CStack_24 + (uint)bVar2 * -8 + 4);
      *(uint *)((int)&CStack_3c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           *(uint *)((int)&CStack_24 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      if (input != &CStack_3c) {
        input->x = CStack_3c.x;
        input->y = CStack_3c.y;
        input->z = CStack_3c.z;
      }
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
                (&CStack_88,&pSStack_18[iStack_14].position,&CStack_60);
      fStack_54 = CStack_60.x;
      afStack_50[(uint)bVar2 * -2] = *(float *)((int)&CStack_60 + (uint)bVar2 * -8 + 4);
      afStack_50[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
           *(float *)((int)&CStack_60 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      if (pCVar1 != (CVector3f *)&fStack_54) {
        pCVar1->x = fStack_54;
        pCVar1->y = afStack_50[0];
        pCVar1->z = afStack_50[1];
      }
      iStack_14 = iStack_14 + 1;
      pCVar1 = (CVector3f *)((int)(pCVar1 + 0x17) + 8);
    } while (iStack_14 < (this_ptr->model).vertex_count);
  }
  return;
}
