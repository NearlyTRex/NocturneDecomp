// Name: core_cloth.cpp_CCloth_applyRotation_FUN_004421d0
// Address: 004421d0
// Address Range: [[004421d0, 00442320]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_applyRotation_FUN_004421d0(CCloth *this_ptr,CVector3f *euler)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_applyRotation_FUN_004421d0(CCloth *this_ptr,CVector3f *euler)

{
  CVector3f *pCVar1;
  SClothVertex *pSVar2;
  byte bVar3;
  float afStackY_1048 [15];
  SClothVertex *apSStackY_100c [991];
  CMatrix3x3f CStack_88;
  float fStack_60;
  float afStack_5c [4];
  float fStack_4c;
  CVector3f CStack_48;
  float fStack_3c;
  float afStack_38 [4];
  float fStack_28;
  float fStack_24;
  SClothVertex *apSStack_20 [3];
  int iStack_14;
  
  bVar3 = 0;
  pCVar1 = &this_ptr->last_euler;
  CStack_48.x = euler->x - pCVar1->x;
  CStack_48.y = euler->y - (this_ptr->last_euler).y;
  CStack_48.z = euler->z - (this_ptr->last_euler).z;
  if (pCVar1 != euler) {
    pCVar1->x = euler->x;
    (this_ptr->last_euler).y = euler->y;
    (this_ptr->last_euler).z = euler->z;
  }
  afStack_38[2] = CStack_48.x;
  afStack_38[3] = CStack_48.y;
  fStack_28 = CStack_48.z;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(&CStack_88,&CStack_48);
  iStack_14 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    apSStack_20[2] = this_ptr->vertices;
    pCVar1 = &this_ptr->vertices[0].secondary_velocity;
    do {
      pSVar2 = apSStack_20[2] + iStack_14;
      core_dirmat_cpp_FUN_0045f700(&CStack_88,pSVar2);
      fStack_3c = fStack_24;
      afStack_38[(uint)bVar3 * -2] = (float)apSStack_20[(uint)bVar3 * -2];
      afStack_38[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
           (float)apSStack_20[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      if (pSVar2 != (SClothVertex *)&fStack_3c) {
        (pSVar2->position).x = fStack_3c;
        (pSVar2->position).y = afStack_38[0];
        (pSVar2->position).z = afStack_38[1];
      }
      core_dirmat_cpp_FUN_0045f700(&CStack_88,apSStack_20[2] + iStack_14);
      afStack_5c[2] = fStack_60;
      afStack_5c[(uint)bVar3 * -2 + 3] = afStack_5c[(uint)bVar3 * -2];
      afStack_5c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
           afStack_5c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      if (pCVar1 != (CVector3f *)(afStack_5c + 2)) {
        pCVar1->x = afStack_5c[2];
        pCVar1->y = afStack_5c[3];
        pCVar1->z = fStack_4c;
      }
      iStack_14 = iStack_14 + 1;
      pCVar1 = (CVector3f *)((int)(pCVar1 + 0x17) + 8);
    } while (iStack_14 < (this_ptr->model).vertex_count);
  }
  return;
}
