// Name: core_scat.cpp_FUN_004fdd00
// Address: 004fdd00
// Address Range: [[004fdd00, 004fde21]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_FUN_004fdd00(CScat *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_scat_cpp_FUN_004fdd00(CScat *this_ptr)

{
  CWeapon *this_ptr_00;
  CDemonActor_vtable *pCVar1;
  CVector3f *new_orientation;
  CVector3f *new_position;
  int iVar2;
  uint *puVar3;
  float *pfVar4;
  uint *puVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  CMatrix3x4f local_160;
  CMatrix3x4f local_130;
  float local_100 [12];
  uint local_d0 [12];
  CMatrix3x4f local_a0;
  uint local_70 [12];
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  bVar7 = 0;
  if ((this_ptr->weapon_actor != (CWeapon *)0x0) && (this_ptr->weapon_actor->weapon_type != 8)) {
    local_40.x = 0.0;
    local_40.z = 1.5707964;
    local_40.y = 1.5707964;
    local_28.x = 0.390807;
    local_28.y = -0.103151;
    local_28.z = 0.109206;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (&local_130,&local_28,&local_40);
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
              (&local_130,
               (this_ptr->base).base.model.bone_transform.bone_world_matrices + _DAT_01e533c0);
    puVar3 = local_d0;
    puVar5 = local_70;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (&local_160,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_70,&local_160);
    pfVar4 = local_100;
    pCVar6 = &local_a0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar6->m[0].w = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
    }
    this_ptr_00 = this_ptr->weapon_actor;
    pCVar1 = (this_ptr_00->base).vtable._ub;
    new_orientation = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_a0,&local_34);
    new_position = core_xform_cpp_getTranslation_FUN_0055bc00(&local_a0,&local_1c);
    (*pCVar1->setPositionAndOrientation)(&this_ptr_00->base,new_position,new_orientation);
    return;
  }
  return;
}
