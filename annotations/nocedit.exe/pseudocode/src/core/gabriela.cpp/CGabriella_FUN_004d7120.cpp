// Name: core_gabriela.cpp_CGabriella_FUN_004d7120
// Address: 004d7120
// Address Range: [[004d7120, 004d7589]]
// Convention: __cdecl
// Signature: void core_gabriela.cpp_CGabriella_FUN_004d7120(CGabriella * this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_FUN_004d7120(CGabriella *this_ptr)

{
  CDemonActor *actor_ptr;
  CDemonActor *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  uint *unaff_ESI;
  float *pfVar4;
  uint *puVar5;
  CMatrix3x4f *pCVar6;
  uint *puVar7;
  byte bVar8;
  float in_stack_00000008;
  CMatrix3x4f *matrix;
  CBoundingBox3D *out_box;
  byte auStack_158 [20];
  float local_144;
  float local_134;
  uint auStack_130 [3];
  float fStack_124;
  float afStack_104 [12];
  byte auStack_d4 [4];
  CMatrix3x4f CStack_d0;
  float local_a0;
  CBoundingBox3D CStack_9c;
  float fStack_84;
  float fStack_80;
  uint local_78;
  uint local_74;
  uint local_70;
  CVector3f local_64;
  float local_58;
  byte local_54 [8];
  byte auStack_4c [32];
  CVector3f local_2c;
  float fStack_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  bVar8 = 0;
  actor_ptr = (this_ptr->base_hero).base_character.carry_hands[(int)in_stack_00000008].carry_actor;
  local_10 = *(float *)(this_ptr->base_hero).base_character.carry_hands[(int)in_stack_00000008].
                       field0_0x0;
  local_54._4_4_ = 0.0;
  local_54._0_4_ = 0.0;
  local_58 = 0.0;
  local_14 = 0.0;
  local_18 = 0.0;
  local_1c = 0.0;
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CLightActorClassInfo.name_hash);
  if (pCVar1 == (CDemonActor *)0x0) goto LAB_004d719a;
  out_box = &CStack_9c;
  (*actor_ptr->vtable->getBoundingBox)(actor_ptr,out_box);
  local_2c.y = local_a0 + CStack_9c.min.z;
  CStack_9c.max.z = local_2c.y * 0.5f;
  local_2c.z = CStack_9c.min.x + CStack_9c.max.x;
  fStack_20 = CStack_9c.min.y + CStack_9c.max.y;
  fStack_84 = local_2c.z * 0.5f;
  fStack_80 = fStack_20 * 0.5f;
  if (&local_1c != &CStack_9c.max.z) {
    local_1c = CStack_9c.max.z;
    local_18 = fStack_84;
    local_14 = fStack_80;
  }
  iVar3 = pCVar1[4].scale.y;
  if (iVar3 == 2) {
    local_18 = CStack_9c.max.x;
    goto LAB_004d719a;
  }
  if (iVar3 != 1) {
    if (iVar3 == 3) {
      local_18 = CStack_9c.max.x;
    }
    else {
      g_CurrentFilename = "..\\core\\gabriela.cpp";
      g_CurrentLineNumber = 0x945;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Don't know how to carry light %s");
    }
    goto LAB_004d719a;
  }
  if (in_stack_00000008 == 0.0) {
    matrix = (CMatrix3x4f *)0xbfc90fdb;
    core_xform_cpp_buildRotationY_FUN_005f6cc0((CMatrix3x4f *)0xbfc90fdb,(float)out_box);
    pfVar4 = (float *)&stack0xfffffe6c;
LAB_004d73e5:
    pCVar6 = &CStack_d0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar6->m[0].w = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
    }
  }
  else {
    if (in_stack_00000008 == 1.4013e-45) {
      matrix = (CMatrix3x4f *)0x3fc90fdb;
      core_xform_cpp_buildRotationY_FUN_005f6cc0((CMatrix3x4f *)0x3fc90fdb,(float)out_box);
      pfVar4 = afStack_104;
      goto LAB_004d73e5;
    }
    matrix = &CStack_d0;
    core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(matrix);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)auStack_d4,
             (CMatrix3x4f *)
             (this_ptr->base_hero).base_character.model.bone_transform.bone_world_matrices
             [(int)local_14].m,matrix);
  puVar5 = auStack_130;
  puVar7 = (uint *)auStack_d4;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                     ((CVector3f *)&CStack_d0,(CMatrix3x3f *)auStack_4c);
  if ((CVector3f *)local_54 != pCVar2) {
    local_54._0_4_ = pCVar2->x;
    local_54._4_4_ = pCVar2->y;
    auStack_4c._0_4_ = pCVar2->z;
  }
  local_10 = CStack_9c.max.z * (float)0.29999999999999999 + CStack_9c.min.z * (float)0.69999999999999996;
LAB_004d719a:
  if (in_stack_00000008 == 0.0) {
    local_64.y = -0.4;
    local_58 = in_stack_00000008;
    if ((float *)(auStack_4c + 0x1c) != &local_64.y) {
      local_2c.x = in_stack_00000008;
      local_2c.y = in_stack_00000008;
      auStack_4c._28_4_ = -0.4;
    }
  }
  else if (in_stack_00000008 == 1.4013e-45) {
    local_74 = 0;
    local_70 = 0;
    local_78 = 0x3ecccccd;
    if ((uint *)(auStack_4c + 0x1c) != &local_78) {
      auStack_4c._28_4_ = 0.4;
      local_2c.x = 0.0;
      local_2c.y = 0.0;
    }
  }
  else {
    local_2c.x = 0.0;
    auStack_4c._28_4_ = 0.0;
    local_2c.y = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20
            ((CVector3f *)(auStack_4c + 0x1c),
             (CMatrix3x4f *)
             (this_ptr->base_hero).base_character.model.bone_transform.bone_world_matrices
             [unaff_EBP].m);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)auStack_158,&local_2c,(CVector3f *)(local_54 + 4));
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_64,(CVector3f *)&local_10,(CMatrix3x4f *)(auStack_158 + 4));
  auStack_4c._28_4_ = local_2c.z - pCVar2->x;
  local_2c.x = fStack_20 - pCVar2->y;
  local_2c.y = local_1c - pCVar2->z;
  local_144 = local_144 + (float)auStack_4c._28_4_;
  local_134 = local_134 + local_2c.x;
  fStack_124 = fStack_124 + local_2c.y;
  puVar5 = (uint *)(auStack_158 + 4);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_ESI = *puVar5;
    puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar8 * -2 + 1;
  }
  return;
}
