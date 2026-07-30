// Name: core_weapon.cpp_CWeapon_onDropped_FUN_00554310
// Address: 00554310
// Address Range: [[00554310, 005543a0]]
// Convention: unknown
// Signature: void core_weapon_cpp_CWeapon_onDropped_FUN_00554310(CCharacter *param_1,CVector3f *param_2)

#include "nocturne.h"

void core_weapon_cpp_CWeapon_onDropped_FUN_00554310(CCharacter *param_1,CVector3f *param_2)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CVector3f *in_stack_ffffffec;
  float in_stack_fffffff0;
  
  (param_1->model).transformed_vertices[0x1c].y = 0.0;
  core_weapon_cpp_CWeapon_setupPhysicsBox_FUN_00554660((CWeapon *)param_1);
  if (param_2 != (CVector3f *)0x0) {
    pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                       ((CMatrix3x3f *)&(param_1->model).transformed_vertices[0x1e].z,
                        (CVector3f *)&stack0xffffffec,param_2);
    pCVar1 = (param_1->model).transformed_vertices + 0x23;
    if (pCVar1 != pCVar2) {
      pCVar1->x = pCVar2->x;
      (param_1->model).transformed_vertices[0x23].y = pCVar2->y;
      (param_1->model).transformed_vertices[0x23].z = pCVar2->z;
    }
    pCVar1 = (param_1->model).transformed_vertices + 0x22;
    if (pCVar1 != param_2) {
      pCVar1->x = param_2->x;
      (param_1->model).transformed_vertices[0x22].y = param_2->y;
      (param_1->model).transformed_vertices[0x22].z = param_2->z;
    }
  }
  (*(((param_1->base).vtable._uc)->_uc).kill)(param_1,0,in_stack_ffffffec,in_stack_fffffff0);
  (param_1->model).transformed_vertices[0x50].x = 5.0;
  return;
}
