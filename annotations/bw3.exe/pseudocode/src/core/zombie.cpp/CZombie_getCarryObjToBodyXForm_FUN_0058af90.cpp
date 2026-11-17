// Name: core_zombie.cpp_CZombie_getCarryObjToBodyXForm_FUN_0058af90
// Address: 0058af90
// Address Range: [[0058af90, 0058b3e9]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_zombie_cpp_CZombie_getCarryObjToBodyXForm_FUN_0058af90(CZombie *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

CMatrix3x4f * __stack2_esi core_zombie_cpp_CZombie_getCarryObjToBodyXForm_FUN_0058af90(CZombie *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  CDemonActor *this_ptr_00;
  uint uVar1;
  CQuaternion4f *matrix;
  int iVar2;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  CMatrix3x4f *pCVar5;
  float *pfVar6;
  byte bVar7;
  float afStackY_1104 [955];
  CBoundingBox3D *in_stack_fffffdf4;
  CVector3f *this_ptr_01;
  CMatrix3x4f CStack_1dc;
  CMatrix3x4f CStack_1ac;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float afStack_164 [6];
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float afStack_134 [6];
  CVector3f CStack_11c;
  float fStack_110;
  float afStack_10c [2];
  CVector3f CStack_104;
  float fStack_f8;
  float afStack_f4 [2];
  CVector3f CStack_ec;
  CVector3f CStack_e0;
  CVector3f CStack_d4;
  CVector3f CStack_c8;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  CVector3f CStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  float fStack_5c;
  float afStack_58 [4];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CVector3f CStack_20;
  CMatrix3x4f *pCStack_14;
  int iStack_10;
  
  bVar7 = 0;
  this_ptr_00 = (this_ptr->base).base.carry_hands[hand_index].carry_actor;
  iStack_10 = hand_index;
  if ((this_ptr->zombie_variant != 4) && (hand_index != this_ptr->bone_indices[0])) {
    iStack_10 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  }
  pCStack_14 = out_matrix;
  if (hand_index != this_ptr->bone_indices[0]) {
    uVar1 = this_ptr->object_shape_class;
    if ((uVar1 == 0) || ((1 < uVar1 && (uVar1 != 3)))) {
      (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,in_stack_fffffdf4);
      pfVar4 = afStack_134;
      pfVar6 = &fStack_14c;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar6 = *pfVar4;
        pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
        pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
      }
      fStack_f8 = fStack_14c + fStack_140;
      afStack_f4[0] = fStack_148 + fStack_13c;
      afStack_f4[1] = fStack_144 + fStack_138;
      fStack_5c = fStack_14c + fStack_140;
      afStack_58[(uint)bVar7 * -2] = afStack_f4[(uint)bVar7 * -2];
      afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      fStack_110 = fStack_5c * 0.5f;
      afStack_10c[0] = afStack_58[0] * 0.5f;
      afStack_10c[1] = afStack_58[1] * 0.5f;
      CStack_98.x = fStack_5c * 0.5f;
      *(float *)((int)&CStack_98 + (uint)bVar7 * -8 + 4) = afStack_10c[(uint)bVar7 * -2];
      *(float *)((int)&CStack_98 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4 + 4) =
           afStack_10c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      if (&CStack_ec != &CStack_98) {
        CStack_ec.x = CStack_98.x;
        CStack_ec.y = CStack_98.y;
        CStack_ec.z = CStack_98.z;
      }
      pCVar3 = &(this_ptr->base).base.carry_hands[hand_index].initial_carry_transform;
      pfVar4 = (float *)&stack0xfffffdf4;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar4 = pCVar3->m[0].w;
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar7 * -2 + 1) * 4);
        pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
      }
    }
    else {
      iVar2 = _strnicmp
                        ((this_ptr->base).base.model.model_name,"new",3);
      if (iVar2 == 0) {
        CStack_74.z = -0.986001;
        CStack_74.y = 0.950253;
        CStack_74.x = -1.15383;
      }
      else {
        CStack_74.z = 0.0;
        CStack_74.y = 0.904;
        CStack_74.x = 0.155;
      }
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                ((CMatrix3x4f *)&stack0xfffffdf4,&g_CVector3f_02cfd900,&CStack_74);
      (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,in_stack_fffffdf4);
      pfVar4 = afStack_164;
      pfVar6 = &fStack_17c;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar6 = *pfVar4;
        pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
        pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
      }
      core_actor_cpp_CVector3f_ctor_FUN_0040d220(&CStack_d4);
      this_ptr_01 = &CStack_80;
      CStack_d4.x = fStack_17c + fStack_170;
      CStack_d4.y = fStack_178 + fStack_16c;
      CStack_d4.z = fStack_174 + fStack_168;
      fStack_8c = fStack_17c + fStack_170;
      *(uint *)((int)&CStack_98 + ((uint)bVar7 * -2 + 3) * 4 + 4) =
           *(uint *)((int)&CStack_d4 + (uint)bVar7 * -8 + 4);
      *(uint *)((int)&CStack_98 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 4) * 4 + 4) =
           *(uint *)((int)&CStack_d4 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4 + 8);
      core_actor_cpp_CVector3f_ctor_FUN_0040d220(this_ptr_01);
      CStack_80.x = fStack_8c * 0.5f;
      CStack_80.y = fStack_88 * 0.5f;
      CStack_80.z = fStack_84 * 0.5f;
      afStack_58[2] = fStack_8c * 0.5f;
      afStack_58[(uint)bVar7 * -2 + 3] = *(float *)((int)&CStack_80 + (uint)bVar7 * -8 + 4);
      afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           *(float *)((int)&CStack_80 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4 + 8);
      fStack_48 = fStack_174 + (float)0.40000000000000002;
      CStack_c8.x = afStack_58[2];
      *(float *)((int)&CStack_c8 + (uint)bVar7 * -8 + 4) = afStack_58[(uint)bVar7 * -2 + 3];
      *(float *)((int)&CStack_c8 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4 + 4) =
           afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      if (&CStack_ec != &CStack_c8) {
        CStack_ec.x = CStack_c8.x;
        CStack_ec.y = CStack_c8.y;
        CStack_ec.z = CStack_c8.z;
      }
    }
  }
  matrix = (this_ptr->base).base.model.bone_transform.bone_model_matrices[iStack_10].m;
  if (iStack_10 == this_ptr->bone_indices[1]) {
    CStack_e0.x = -0.4;
    CStack_e0.y = 0.0;
    CStack_e0.z = 0.0;
    core_xform_cpp_transformVector3x4_FUN_00583260(&CStack_e0,(CMatrix3x4f *)matrix,&CStack_20);
    fStack_b0 = CStack_20.x;
    *(uint *)((int)&CStack_c8 + ((uint)bVar7 * -2 + 6) * 4 + 4) =
         *(uint *)((int)&CStack_20 + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&CStack_c8 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 7) * 4 + 4) =
         *(uint *)((int)&CStack_20 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    if (&fStack_a4 != &fStack_b0) {
      fStack_a4 = fStack_b0;
      fStack_a0 = fStack_ac;
      fStack_9c = fStack_a8;
    }
  }
  else {
    CStack_104.x = 0.4;
    CStack_104.y = 0.0;
    CStack_104.z = 0.0;
    core_xform_cpp_transformVector3x4_FUN_00583260(&CStack_104,(CMatrix3x4f *)matrix,&CStack_11c);
    fStack_bc = CStack_11c.x;
    *(uint *)((int)&CStack_c8 + ((uint)bVar7 * -2 + 3) * 4 + 4) =
         *(uint *)((int)&CStack_11c + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&CStack_c8 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 4) * 4 + 4) =
         *(uint *)((int)&CStack_11c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    if (&fStack_a4 != &fStack_bc) {
      fStack_a4 = fStack_bc;
      fStack_a0 = fStack_b8;
      fStack_9c = fStack_b4;
    }
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
            ((CMatrix3x4f *)&stack0xfffffdf4,
             (CMatrix3x4f *)
             (this_ptr->base).base.model.bone_transform.bone_model_matrices[iStack_10].m,&CStack_1ac
            );
  pCVar3 = &CStack_1ac;
  pCVar5 = &CStack_1dc;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar5->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar7 * -2 + 1) * 4);
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_transformVector3x4_FUN_00583260(&CStack_ec,&CStack_1dc,&CStack_68);
  fStack_2c = CStack_68.x;
  afStack_58[(uint)bVar7 * -2 + 0xc] = *(float *)((int)&CStack_68 + (uint)bVar7 * -8 + 4);
  afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
       *(float *)((int)&CStack_68 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  fStack_44 = fStack_a4 - fStack_2c;
  fStack_40 = fStack_a0 - fStack_28;
  fStack_3c = fStack_9c - fStack_24;
  fStack_38 = fStack_a4 - fStack_2c;
  afStack_58[(uint)bVar7 * -2 + 9] = afStack_58[(uint)bVar7 * -2 + 6];
  afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
       afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  CStack_1dc.m[0].z = CStack_1dc.m[0].z + fStack_38;
  CStack_1dc.m[1].z = CStack_1dc.m[1].z + fStack_34;
  CStack_1dc.m[2].z = CStack_1dc.m[2].z + fStack_30;
  pCVar3 = &CStack_1dc;
  pCVar5 = pCStack_14;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar5->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar7 * -2 + 1) * 4);
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
  }
  return pCStack_14;
}
