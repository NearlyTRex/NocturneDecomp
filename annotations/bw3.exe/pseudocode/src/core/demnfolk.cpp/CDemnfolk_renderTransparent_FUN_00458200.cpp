// Name: core_demnfolk.cpp_CDemnfolk_renderTransparent_FUN_00458200
// Address: 00458200
// Address Range: [[00458200, 004583be]]
// Convention: __cdecl
// Signature: int __cdecl core_demnfolk_cpp_CDemnfolk_renderTransparent_FUN_00458200(CDemnfolk *this_ptr)

#include "nocturne.h"

int __cdecl core_demnfolk_cpp_CDemnfolk_renderTransparent_FUN_00458200(CDemnfolk *this_ptr)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_10dc [990];
  CVector3f *position;
  CVector3f *rotation;
  float fov;
  uint *puVar5;
  byte *puVar6;
  float falloff;
  CMatrix3x4f CStack_124;
  uint uStack_f4;
  float afStack_f0 [2];
  CVector3f CStack_e8;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  float fStack_d0;
  float afStack_cc [6];
  float afStack_b4 [5];
  uint uStack_a0;
  float afStack_94 [4];
  float afStack_84 [5];
  float afStack_70 [3];
  CVector3f CStack_64;
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  float fStack_40;
  float afStack_34 [3];
  float fStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar4 = 0;
  if (((this_ptr->base).base.was_rendered_opaque != 0) && (this_ptr->is_miner_zombie != 0)) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_0054d9c0
              (&(this_ptr->base).base.model,this_ptr->bone_indices[0],&CStack_124);
    pCVar2 = &CStack_124;
    pfVar3 = (float *)&stack0xfffffeac;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = pCVar2->m[0].w;
      pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
      pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
    }
    uStack_d8 = 0x3f000000;
    uStack_d4 = 0x3f000000;
    uStack_dc = 0;
    core_xform_cpp_FUN_00583260(&uStack_dc,&stack0xfffffeac);
    puVar5 = &uStack_f4;
    uStack_f4 = afStack_cc[5];
    afStack_f0[(uint)bVar4 * -2] = afStack_b4[(uint)bVar4 * -2];
    afStack_f0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_actor_cpp_FUN_00408b80(this_ptr,puVar5);
    puVar6 = &stack0xfffffeac;
    afStack_94[0] = 0.0;
    afStack_94[1] = 0.0;
    afStack_94[2] = 0.0;
    CStack_e8.x = afStack_b4[2];
    *(float *)((int)&CStack_e8 + (uint)bVar4 * -8 + 4) = afStack_b4[(uint)bVar4 * -2 + 3];
    *(float *)((int)&CStack_e8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    core_xform_cpp_FUN_00583260(afStack_b4 + 8,puVar6);
    pfVar3 = afStack_84 + 5;
    afStack_70[0] = (float)uStack_a0;
    afStack_84[(uint)bVar4 * -2 + 6] = afStack_b4[(uint)bVar4 * -2 + 6];
    afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
         afStack_b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    core_actor_cpp_FUN_00408b00(this_ptr,pfVar3);
    puVar6 = &stack0xfffffeac;
    afStack_cc[4] = 1.0;
    afStack_cc[2] = 0.0;
    afStack_cc[3] = 0.0;
    fStack_d0 = fStack_28;
    afStack_cc[(uint)bVar4 * -2] = afStack_54[(uint)bVar4 * -2 + 0xc];
    afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
    core_xform_cpp_FUN_00583260(afStack_cc + 2,puVar6);
    pfVar3 = afStack_54 + 8;
    afStack_34[0] = afStack_94[3];
    afStack_54[(uint)bVar4 * -2 + 9] = afStack_84[(uint)bVar4 * -2];
    afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
         afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_actor_cpp_FUN_00408b00(this_ptr,pfVar3);
    fStack_1c = afStack_84[2];
    afStack_54[(uint)bVar4 * -2 + 0xf] = afStack_84[(uint)bVar4 * -2 + 3];
    afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
         afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    afStack_54[2] = fStack_1c - fStack_d0;
    afStack_54[3] = fStack_18 - afStack_cc[0];
    fStack_44 = fStack_14 - afStack_cc[1];
    fStack_58 = fStack_1c - fStack_d0;
    afStack_54[(uint)bVar4 * -2] = afStack_54[(uint)bVar4 * -2 + 3];
    afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&fStack_58);
    falloff = 6.0;
    rotation = &CStack_64;
    fov = 56.0;
    position = &CStack_e8;
    CStack_64.x = fStack_40;
    *(float *)((int)&CStack_64 + (uint)bVar4 * -8 + 4) = afStack_54[(uint)bVar4 * -2 + 6];
    *(float *)((int)&CStack_64 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    core_dlight_cpp_renderConeLightGeometry_FUN_0045f5a0(position,rotation,fov,falloff);
  }
  if ((this_ptr->base).base.was_rendered_opaque == 0) {
    return (this_ptr->base).base.was_rendered_opaque;
  }
  core_charactr_cpp_CCharacter_renderTransparent_FUN_0042f510((CCharacter *)this_ptr);
  return (this_ptr->base).base.was_rendered_opaque;
}
