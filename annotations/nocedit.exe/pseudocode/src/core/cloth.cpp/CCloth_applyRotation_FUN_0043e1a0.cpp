// Name: core_cloth.cpp_CCloth_applyRotation_FUN_0043e1a0
// Address: 0043e1a0
// Address Range: [[0043e1a0, 0043e297]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_applyRotation_FUN_0043e1a0(CCloth *this_ptr,CVector3f *euler)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_applyRotation_FUN_0043e1a0(CCloth *this_ptr,CVector3f *euler)

{
  CVector3f *pCVar1;
  CVector3f *pCVar3;
  CVector3f *pCVar2;
  CVector3f *input;
  int iVar3;
  CMatrix3x3f local_5c;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  local_34.x = euler->x - (this_ptr->last_euler).x;
  local_34.y = euler->y - (this_ptr->last_euler).y;
  local_34.z = euler->z - (this_ptr->last_euler).z;
  if (&this_ptr->last_euler != euler) {
    (this_ptr->last_euler).x = euler->x;
    (this_ptr->last_euler).y = euler->y;
    (this_ptr->last_euler).z = euler->z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_5c,&local_34);
  iVar3 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    pCVar2 = &this_ptr->vertices[0].secondary_velocity;
    do {
      input = &this_ptr->vertices[iVar3].position;
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&local_5c,&local_28,input);
      if (input != pCVar1) {
        input->x = pCVar1->x;
        input->y = pCVar1->y;
        input->z = pCVar1->z;
      }
      pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&local_5c,&local_1c,&this_ptr->vertices[iVar3].position);
      if (pCVar2 != pCVar3) {
        pCVar2->x = pCVar3->x;
        pCVar2->y = pCVar3->y;
        pCVar2->z = pCVar3->z;
      }
      iVar3 = iVar3 + 1;
      pCVar2 = (CVector3f *)&pCVar2[0x17].z;
    } while (iVar3 < (this_ptr->model).vertex_count);
  }
  return;
}
