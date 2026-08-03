// Name: core_cloth.cpp_CCloth_applyRotation_FUN_00438780
// Address: 00438780
// Address Range: [[00438780, 00438877]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_applyRotation_FUN_00438780(CCloth *this_ptr,CVector3f *euler)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_applyRotation_FUN_00438780(CCloth *this_ptr,CVector3f *euler)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CVector3f *input;
  int iVar3;
  CMatrix3x3f CStack_5c;
  CVector3f CStack_34;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  CStack_34.x = euler->x - (this_ptr->last_euler).x;
  CStack_34.y = euler->y - (this_ptr->last_euler).y;
  CStack_34.z = euler->z - (this_ptr->last_euler).z;
  if (&this_ptr->last_euler != euler) {
    (this_ptr->last_euler).x = euler->x;
    (this_ptr->last_euler).y = euler->y;
    (this_ptr->last_euler).z = euler->z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&CStack_5c,&CStack_34);
  iVar3 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    pCVar2 = &this_ptr->vertices[0].secondary_velocity;
    do {
      input = &this_ptr->vertices[iVar3].position;
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                         (&CStack_5c,&CStack_28,input);
      if (input != pCVar1) {
        input->x = pCVar1->x;
        input->y = pCVar1->y;
        input->z = pCVar1->z;
      }
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                         (&CStack_5c,&CStack_1c,&this_ptr->vertices[iVar3].position);
      if (pCVar2 != pCVar1) {
        pCVar2->x = pCVar1->x;
        pCVar2->y = pCVar1->y;
        pCVar2->z = pCVar1->z;
      }
      iVar3 = iVar3 + 1;
      pCVar2 = (CVector3f *)&pCVar2[0x17].z;
    } while (iVar3 < (this_ptr->model).vertex_count);
  }
  return;
}
