// Name: core_demnfolk.cpp_CDemnfolk_renderTransparent_FUN_0045c020
// Address: 0045c020
// Address Range: [[0045c020, 0045c1de]]
// Convention: __cdecl
// Signature: int __cdecl core_demnfolk_cpp_CDemnfolk_renderTransparent_FUN_0045c020(CDemnfolk *this_ptr)

#include "nocturne.h"

int __cdecl core_demnfolk_cpp_CDemnfolk_renderTransparent_FUN_0045c020(CDemnfolk *this_ptr)

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
  CVector3f CStack_e8;
  CVector3f CStack_dc;
  float fStack_d0;
  float afStack_cc [2];
  CVector3f CStack_c4;
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  CVector3f CStack_a0;
  CVector3f CStack_94;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  float fStack_40;
  CVector3f CStack_34;
  CVector3f CStack_28;
  float fStack_1c;
  float afStack_18 [2];
  
  bVar4 = 0;
  if (((this_ptr->base).base.was_rendered_opaque != 0) && (this_ptr->is_miner_zombie != 0)) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_00568e30
              (&(this_ptr->base).base.model,this_ptr->bone_indices[0],&CStack_124);
    pCVar2 = &CStack_124;
    pCVar3 = &CStack_154;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar3->m[0].w = pCVar2->m[0].w;
      pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
    }
    CStack_dc.y = 0.5;
    CStack_dc.z = 0.5;
    CStack_dc.x = 0.0;
    core_xform_cpp_transformVector3x4_FUN_005b5080(&CStack_dc,&CStack_154,&CStack_b8);
    pCVar5 = &CStack_f4;
    CStack_f4.x = CStack_b8.x;
    *(uint *)((int)&CStack_f4 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_b8 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_f4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_b8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
              ((CDemonActor *)this_ptr,pCVar5,&CStack_ac);
    pCVar2 = &CStack_154;
    CStack_94.x = 0.0;
    CStack_94.y = 0.0;
    CStack_94.z = 0.0;
    CStack_e8.x = CStack_ac.x;
    *(uint *)((int)&CStack_e8 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_ac + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_e8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_ac + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_xform_cpp_transformVector3x4_FUN_005b5080(&CStack_94,pCVar2,&CStack_a0);
    pCVar5 = &CStack_70;
    CStack_70.x = CStack_a0.x;
    *(uint *)((int)&CStack_70 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_a0 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_70 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_a0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
              ((CDemonActor *)this_ptr,pCVar5,&CStack_28);
    pCVar2 = &CStack_154;
    CStack_c4.z = 1.0;
    CStack_c4.x = 0.0;
    CStack_c4.y = 0.0;
    fStack_d0 = CStack_28.x;
    afStack_cc[(uint)bVar4 * -2] = *(float *)((int)&CStack_28 + (uint)bVar4 * -8 + 4);
    afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         *(float *)((int)&CStack_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_xform_cpp_transformVector3x4_FUN_005b5080(&CStack_c4,pCVar2,&CStack_88);
    pCVar5 = &CStack_34;
    CStack_34.x = CStack_88.x;
    *(uint *)((int)&CStack_34 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_88 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_34 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_88 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
              ((CDemonActor *)this_ptr,pCVar5,&CStack_7c);
    fStack_1c = CStack_7c.x;
    afStack_18[(uint)bVar4 * -2] = *(float *)((int)&CStack_7c + (uint)bVar4 * -8 + 4);
    afStack_18[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         *(float *)((int)&CStack_7c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    afStack_54[2] = fStack_1c - fStack_d0;
    afStack_54[3] = afStack_18[0] - afStack_cc[0];
    fStack_44 = afStack_18[1] - afStack_cc[1];
    fStack_58 = fStack_1c - fStack_d0;
    afStack_54[(uint)bVar4 * -2] = afStack_54[(uint)bVar4 * -2 + 3];
    afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&fStack_58);
    falloff = 6.0;
    pCVar5 = &CStack_64;
    fov = 56.0;
    position = &CStack_e8;
    CStack_64.x = fStack_40;
    *(float *)((int)&CStack_64 + (uint)bVar4 * -8 + 4) = afStack_54[(uint)bVar4 * -2 + 6];
    *(float *)((int)&CStack_64 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    core_dlight_cpp_renderConeLightGeometry_FUN_00465890(position,pCVar5,fov,falloff);
  }
  if ((this_ptr->base).base.was_rendered_opaque == 0) {
    return (this_ptr->base).base.was_rendered_opaque;
  }
  core_charactr_cpp_CCharacter_renderTransparent_FUN_004301e0((CCharacter *)this_ptr);
  return (this_ptr->base).base.was_rendered_opaque;
}
