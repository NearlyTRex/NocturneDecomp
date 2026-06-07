// Name: core_scat.cpp_CScat_updateWeaponAttachment_FUN_00558fd0
// Address: 00558fd0
// MANUAL RECONSTRUCTION
// Address Range: [[00558fd0, 005590f1] [03fc4fd1, 03fc5095]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_updateWeaponAttachment_FUN_00558fd0(CScat *this_ptr)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_updateWeaponAttachment_FUN_00558fd0(CScat *this_ptr)

{
  CWeapon *this_ptr_01;
  CVector3f *new_orientation;
  CVector3f *new_position;
  CMatrix3x4f local_160;
  CMatrix3x4f local_130;
  CMatrix3x4f local_100;
  CMatrix3x4f local_d0;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  CDemonActor_vtable *pCVar1;
  
  if ((this_ptr->weapon_actor != (CWeapon *)0x0) && (this_ptr->weapon_actor->weapon_type != 8)) {
    local_40.x = 0.0;
    local_40.z = 1.5707964;
    local_40.y = 1.5707964;
    local_28.x = 0.390807;
    local_28.y = -0.103151;
    local_28.z = 0.109206;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_130,&local_28,&local_40);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              (&local_130,
               (this_ptr->base).base.model.bone_transform.bone_world_matrices + g_ScatIndices[0xe],
               &local_d0);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_160,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_d0,&local_160,&local_100);
    this_ptr_01 = this_ptr->weapon_actor;
    pCVar1 = (this_ptr_01->base).vtable._ub;
    new_orientation = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_100,&local_34);
    new_position = core_xform_cpp_getTranslation_FUN_005f6110(&local_100,&local_1c);
    (*pCVar1->setPositionAndOrientation)(&this_ptr_01->base,new_position,new_orientation);
    return;
  }
  return;
}
