// Name: core_zombie.cpp_CZombie_renderTransparent_FUN_0058beb0
// Address: 0058beb0
// Address Range: [[0058beb0, 0058c051]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_renderTransparent_FUN_0058beb0(CZombie *this_ptr)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_renderTransparent_FUN_0058beb0(CZombie *this_ptr)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  float afStackY_10dc [990];
  CVector3f *position;
  CVector3f *pCVar5;
  float fov;
  float falloff;
  CMatrix3x4f CStack_154;
  CMatrix3x4f CStack_124;
  CVector3f CStack_f4;
  float fStack_e8;
  float afStack_e4 [2];
  CVector3f CStack_dc;
  CVector3f CStack_d0;
  CVector3f CStack_c4;
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  CVector3f CStack_a0;
  CVector3f CStack_94;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  float fStack_64;
  float afStack_60 [2];
  CVector3f CStack_58;
  float fStack_4c;
  float afStack_48 [2];
  CVector3f CStack_40;
  float fStack_34;
  float afStack_30 [4];
  float fStack_20;
  CVector3f CStack_1c;
  
  bVar4 = 0;
  if (((this_ptr->base).base.was_rendered_opaque != 0) && (this_ptr->is_miner_zombie != 0)) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_0054d9c0
              (&(this_ptr->base).base.model,this_ptr->bone_indices[0],&CStack_154);
    pCVar2 = &CStack_154;
    pCVar3 = &CStack_124;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar3->m[0].w = pCVar2->m[0].w;
      pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
    }
    CStack_dc.y = 0.5;
    CStack_dc.z = 0.5;
    CStack_dc.x = 0.0;
    core_xform_cpp_transformVector3x4_FUN_00583260(&CStack_dc,&CStack_124,&CStack_c4);
    pCVar5 = &CStack_b8;
    CStack_b8.x = CStack_c4.x;
    *(uint *)((int)&CStack_b8 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_c4 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_b8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_c4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
              ((CDemonActor *)this_ptr,pCVar5,&CStack_58);
    pCVar2 = &CStack_124;
    CStack_a0.x = 0.0;
    CStack_a0.y = 0.0;
    CStack_a0.z = 0.0;
    CStack_f4.x = CStack_58.x;
    *(uint *)((int)&CStack_f4 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_58 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_f4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_58 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_xform_cpp_transformVector3x4_FUN_00583260(&CStack_a0,pCVar2,&CStack_ac);
    pCVar5 = &CStack_7c;
    CStack_7c.x = CStack_ac.x;
    *(uint *)((int)&CStack_7c + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_ac + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_7c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_ac + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
              ((CDemonActor *)this_ptr,pCVar5,&CStack_1c);
    pCVar2 = &CStack_124;
    CStack_d0.z = 1.0;
    CStack_d0.x = 0.0;
    CStack_d0.y = 0.0;
    fStack_34 = CStack_1c.x;
    afStack_30[(uint)bVar4 * -2] = *(float *)((int)&CStack_1c + (uint)bVar4 * -8 + 4);
    afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         *(float *)((int)&CStack_1c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_xform_cpp_transformVector3x4_FUN_00583260(&CStack_d0,pCVar2,&CStack_94);
    pCVar5 = &CStack_40;
    CStack_40.x = CStack_94.x;
    *(uint *)((int)&CStack_40 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_94 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_94 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
              ((CDemonActor *)this_ptr,pCVar5,&CStack_88);
    afStack_30[2] = CStack_88.x;
    afStack_30[(uint)bVar4 * -2 + 3] = *(float *)((int)&CStack_88 + (uint)bVar4 * -8 + 4);
    afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         *(float *)((int)&CStack_88 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    fStack_64 = afStack_30[2] - fStack_34;
    afStack_60[0] = afStack_30[3] - afStack_30[0];
    afStack_60[1] = fStack_20 - afStack_30[1];
    fStack_e8 = afStack_30[2] - fStack_34;
    afStack_e4[(uint)bVar4 * -2] = afStack_60[(uint)bVar4 * -2];
    afStack_e4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_60[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&fStack_e8);
    falloff = 6.0;
    pCVar5 = &CStack_70;
    fov = 56.0;
    position = &CStack_f4;
    CStack_70.x = fStack_4c;
    *(float *)((int)&CStack_70 + (uint)bVar4 * -8 + 4) = afStack_48[(uint)bVar4 * -2];
    *(float *)((int)&CStack_70 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_dlight_cpp_renderConeLightGeometry_FUN_0045f5a0(position,pCVar5,fov,falloff);
  }
  iVar1 = core_charactr_cpp_CCharacter_renderTransparent_FUN_0042f510((CCharacter *)this_ptr);
  return iVar1;
}
