// Name: core_scat.cpp_CScat_FUN_00558fd0
// Address: 00558fd0
// Address Range: [[00558fd0, 005590f1]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_FUN_00558fd0(CScat *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_scat_cpp_CScat_FUN_00558fd0(CScat *this_ptr)

{
  CDemonActor *this_ptr_00;
  CDemonActor_vtable *pCVar1;
  CVector3f *new_orientation;
  CVector3f *new_position;
  int iVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  CMatrix3x4f local_160;
  CMatrix3x4f local_130;
  CMatrix3x4f local_100;
  CMatrix3x4f local_d0;
  CMatrix3x4f local_a0;
  CMatrix3x4f local_70;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  bVar5 = 0;
  if ((this_ptr->weapon_actor != (CDemonActor *)0x0) &&
     (this_ptr->weapon_actor[2].orient.vec.x != 1.12104e-44)) {
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
               (this_ptr->base).base.model.bone_transform.bone_world_matrices + INT_03106194,
               &local_d0);
    pCVar3 = &local_d0;
    pCVar4 = &local_70;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar4->m[0].w = pCVar3->m[0].w;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_160,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_70,&local_160,&local_100);
    pCVar3 = &local_100;
    pCVar4 = &local_a0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar4->m[0].w = pCVar3->m[0].w;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    this_ptr_00 = this_ptr->weapon_actor;
    pCVar1 = (this_ptr_00->vtable)._ub;
    new_orientation =
         core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_a0,&local_34);
    new_position = core_xform_cpp_getTranslation_FUN_005f6110(&local_a0,&local_1c);
    (*pCVar1->setPositionAndOrientation)(this_ptr_00,new_position,new_orientation);
    return;
  }
  return;
}
