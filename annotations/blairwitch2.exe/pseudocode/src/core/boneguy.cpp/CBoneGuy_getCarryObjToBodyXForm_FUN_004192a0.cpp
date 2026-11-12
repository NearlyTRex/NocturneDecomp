// Name: core_boneguy.cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_004192a0
// Address: 004192a0
// Address Range: [[004192a0, 00419511]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_boneguy_cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_004192a0(CBoneGuy *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMatrix3x4f * __stack2_esi core_boneguy_cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_004192a0(CBoneGuy *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  CDemonActor *this_ptr_00;
  int iVar1;
  uint *puVar2;
  float *pfVar3;
  float *pfVar4;
  uint *puVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  float afStackY_10ac [967];
  CBoundingBox3D *in_stack_fffffe7c;
  CVector3f *this_ptr_01;
  float fStack_148;
  float fStack_138;
  float fStack_128;
  CMatrix3x4f CStack_124;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float afStack_dc [6];
  float fStack_c4;
  float afStack_c0 [4];
  float fStack_b0;
  float fStack_ac;
  float afStack_a8 [4];
  uint uStack_98;
  float fStack_94;
  float fStack_8c;
  float fStack_88;
  uint uStack_84;
  uint uStack_80;
  float fStack_7c;
  float afStack_78 [5];
  CVector3f CStack_64;
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  CVector3f CStack_1c;
  int iStack_10;
  
  bVar7 = 0;
  this_ptr_00 = (this_ptr->base).base.carry_hands[hand_index].carry_actor;
  iStack_10 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  afStack_78[3] = -2.536;
  afStack_78[2] = -0.771;
  afStack_78[4] = 2.536;
  core_xform_cpp_FUN_00591c10(&CStack_124,&DAT_0265370c,afStack_78 + 2);
  (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,in_stack_fffffe7c);
  pfVar3 = afStack_dc;
  pfVar4 = &fStack_f4;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
    pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
  }
  core_actor_cpp_CVector3f_ctor_FUN_0040d340(&CStack_64);
  this_ptr_01 = &CStack_1c;
  CStack_64.x = fStack_f4 + fStack_e8;
  CStack_64.y = fStack_f0 + fStack_e4;
  CStack_64.z = fStack_ec + fStack_e0;
  fStack_40 = fStack_f4 + fStack_e8;
  afStack_54[(uint)bVar7 * -2 + 6] = *(float *)((int)&CStack_64 + (uint)bVar7 * -8 + 4);
  afStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       *(float *)((int)&CStack_64 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4 + 8);
  core_actor_cpp_CVector3f_ctor_FUN_0040d340(this_ptr_01);
  CStack_1c.x = fStack_40 * _DAT_005cc1f2;
  CStack_1c.y = fStack_3c * _DAT_005cc1f2;
  CStack_1c.z = fStack_38 * _DAT_005cc1f2;
  fStack_94 = fStack_40 * _DAT_005cc1f2;
  afStack_a8[(uint)bVar7 * -2 + 6] = *(float *)((int)&CStack_1c + (uint)bVar7 * -8 + 4);
  afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       *(float *)((int)&CStack_1c + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4 + 8);
  fStack_8c = fStack_ec + (float)_DAT_005cc1fa;
  afStack_a8[2] = fStack_94;
  afStack_a8[(uint)bVar7 * -2 + 3] = afStack_a8[(uint)bVar7 * -2 + 6];
  afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  if (afStack_a8 + 8 != afStack_a8 + 2) {
    fStack_88 = afStack_a8[2];
    uStack_84 = afStack_a8[3];
    uStack_80 = uStack_98;
  }
  uStack_24 = 0x3e560419;
  uStack_20 = 0xbda7ef9e;
  uStack_28 = 0x3d03126f;
  core_xform_cpp_FUN_00591530();
  fStack_58 = fStack_7c;
  afStack_54[(uint)bVar7 * -2] = afStack_78[(uint)bVar7 * -2];
  afStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_78[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  if (afStack_c0 + 2 != &fStack_58) {
    afStack_c0[2] = fStack_58;
    afStack_c0[3] = afStack_54[0];
    fStack_b0 = afStack_54[1];
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
            (&CStack_124,
             (CMatrix3x4f *)
             (this_ptr->base).base.model.bone_transform.bone_model_matrices[iStack_10].m,
             (CMatrix3x4f *)&stack0xfffffe7c);
  puVar2 = (uint *)&stack0xfffffe7c;
  puVar5 = (uint *)&stack0xfffffeac;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + (uint)bVar7 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_FUN_00591530();
  afStack_54[2] = fStack_c4;
  afStack_54[(uint)bVar7 * -2 + 3] = afStack_c0[(uint)bVar7 * -2];
  afStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_ac = afStack_c0[2] - afStack_54[2];
  afStack_a8[0] = afStack_c0[3] - afStack_54[3];
  afStack_a8[1] = fStack_b0 - fStack_44;
  fStack_34 = afStack_c0[2] - afStack_54[2];
  afStack_54[(uint)bVar7 * -2 + 9] = afStack_a8[(uint)bVar7 * -2];
  afStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
       afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_148 = fStack_148 + fStack_34;
  fStack_138 = fStack_138 + fStack_30;
  fStack_128 = fStack_128 + fStack_2c;
  pfVar3 = (float *)&stack0xfffffeac;
  pCVar6 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar6->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  return out_matrix;
}
