// Name: core_scat.cpp_CScat_updateWeaponAttachment_FUN_00542f20
// Address: 00542f20
// Address Range: [[00542f20, 0054306a]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_updateWeaponAttachment_FUN_00542f20(CScat *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_scat_cpp_CScat_updateWeaponAttachment_FUN_00542f20(CScat *this_ptr)

{
  CDemonActor_vtable *pCVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  float afStackY_1044 [940];
  CWeapon *this_ptr_00;
  CVector3f *new_position;
  CVector3f *new_orientation;
  CVector3f *in_stack_fffffe78;
  CMatrix3x4f local_158;
  CMatrix3x4f local_128;
  CMatrix3x4f local_f8;
  CMatrix3x4f local_c8;
  CMatrix3x4f local_98;
  CVector3f local_68;
  CVector3f local_5c;
  uint local_50;
  uint local_4c;
  uint local_48;
  CVector3f local_44;
  float local_38;
  float afStack_34 [2];
  CVector3f local_2c;
  CVector3f local_20;
  CDemonActor_vtable *local_14;
  
  bVar6 = 0;
  if ((this_ptr->weapon_actor != (CWeapon *)0x0) &&
     (this_ptr->weapon_actor->weapon_type != WEAPON_TYPE_BARON)) {
    local_50 = 0;
    local_48 = 0x3fc90fdb;
    local_4c = 0x3fc90fdb;
    local_20.x = 0.390807;
    local_68.x = 0.0;
    local_68.y = 1.5707964;
    local_68.z = 1.5707964;
    local_20.y = -0.103151;
    local_20.z = 0.109206;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005b5760
              (&local_158,&local_20,&local_68);
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
              (&local_158,
               (CMatrix3x4f *)
               (this_ptr->base).base.model.bone_transform.bone_model_matrices[_DAT_01e7e04c].m,
               &local_f8);
    pCVar3 = &local_f8;
    pCVar5 = &local_98;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar5->m[0].w = pCVar3->m[0].w;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005b5760
              (&local_128,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
              (&local_98,&local_128,(CMatrix3x4f *)&stack0xfffffe78);
    pfVar4 = (float *)&stack0xfffffe78;
    pCVar3 = &local_c8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar3->m[0].w = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    }
    this_ptr_00 = this_ptr->weapon_actor;
    local_14 = (this_ptr_00->base).vtable._ub;
    core_xform_cpp_matrixToEulerAngles_FUN_005b5930(&local_c8,in_stack_fffffe78);
    new_orientation = &local_44;
    local_44.x = local_38;
    *(float *)((int)&local_44 + (uint)bVar6 * -8 + 4) = afStack_34[(uint)bVar6 * -2];
    *(float *)((int)&local_44 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         afStack_34[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    core_xform_cpp_getTranslation_FUN_005b6270(&local_c8,&local_2c);
    pCVar1 = local_14;
    new_position = &local_5c;
    local_5c.x = local_2c.x;
    *(uint *)((int)&local_5c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_2c + (uint)bVar6 * -8 + 4);
    *(uint *)((int)&local_5c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         *(uint *)((int)&local_2c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    (*pCVar1->setPositionAndOrientation)(&this_ptr_00->base,new_position,new_orientation);
    return;
  }
  return;
}
