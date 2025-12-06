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
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  uint *unaff_ESI;
  uint *puVar4;
  float unaff_EDI;
  uint *puVar5;
  byte bVar6;
  float in_stack_00000008;
  float in_stack_0000000c;
  CMatrix3x4f *matrix;
  float in_stack_fffffe88;
  byte auStack_140 [20];
  float fStack_12c;
  float fStack_11c;
  uint auStack_118 [3];
  float fStack_10c;
  uint auStack_ec [12];
  byte auStack_bc [4];
  byte auStack_b8 [48];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float fStack_6c;
  CGabriella *pCStack_68;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  CVector3f CStack_4c;
  float local_40;
  byte local_3c [8];
  byte local_34 [32];
  float local_14;
  float local_10;
  
  bVar6 = 0;
  actor_ptr = (this_ptr->base_hero).base_character.carry_hands[(int)in_stack_00000008].carry_actor;
  local_10 = *(float *)(this_ptr->base_hero).base_character.carry_hands[(int)in_stack_00000008].
                       field0_0x0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_14 = 0.0;
  local_34._28_4_ = 0.0;
  local_34._24_4_ = 0.0;
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CLightActorClassInfo.name_hash);
  if (pCVar1 == (CDemonActor *)0x0) goto LAB_004d719a;
  (*actor_ptr->vtable->getBoundingBox)(actor_ptr,(CBoundingBox3D *)(auStack_b8 + 0x1c));
  local_10 = fStack_88 + local_7c;
  local_70 = local_10 * 0.5f;
  unaff_EBP = fStack_84 + local_78;
  unaff_EDI = fStack_80 + local_74;
  fStack_6c = unaff_EBP * 0.5f;
  pCStack_68 = (CGabriella *)(unaff_EDI * 0.5f);
  if ((float *)&stack0xfffffffc != &local_70) {
    this_ptr = pCStack_68;
    unaff_EBX = local_70;
  }
  iVar3 = pCVar1[4].scale.y;
  if (iVar3 == 2) goto LAB_004d719a;
  if (iVar3 != 1) {
    if (iVar3 != 3) {
      g_CurrentFilename = "..\\core\\gabriela.cpp";
      g_CurrentLineNumber = 0x945;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Don't know how to carry light %s");
    }
    goto LAB_004d719a;
  }
  if (in_stack_00000008 == 0.0) {
    matrix = (CMatrix3x4f *)0xbfc90fdb;
    core_xform_cpp_buildRotationY_FUN_005f6cc0((CMatrix3x4f *)0xbfc90fdb,in_stack_fffffe88);
    puVar4 = (uint *)&stack0xfffffe84;
LAB_004d73e5:
    puVar5 = (uint *)auStack_b8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  else {
    if (in_stack_00000008 == 1.4013e-45) {
      matrix = (CMatrix3x4f *)0x3fc90fdb;
      core_xform_cpp_buildRotationY_FUN_005f6cc0((CMatrix3x4f *)0x3fc90fdb,in_stack_fffffe88);
      puVar4 = auStack_ec;
      goto LAB_004d73e5;
    }
    matrix = (CMatrix3x4f *)auStack_b8;
    core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(matrix);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)auStack_bc,(CMatrix3x4f *)((int)this_ptr * 0x31 + 0xfd8),matrix);
  puVar4 = auStack_118;
  puVar5 = (uint *)auStack_bc;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                     ((CVector3f *)auStack_b8,(CMatrix3x3f *)local_34);
  if ((CVector3f *)local_3c != pCVar2) {
    local_3c._0_4_ = pCVar2->x;
    local_3c._4_4_ = pCVar2->y;
    local_34._0_4_ = pCVar2->z;
  }
  in_stack_00000008 = local_70 * (float)0.29999999999999999 + local_7c * (float)0.69999999999999996;
LAB_004d719a:
  if (in_stack_00000008 == 0.0) {
    CStack_4c.z = in_stack_00000008;
    CStack_4c.y = -0.4;
    local_40 = in_stack_00000008;
    if ((float *)(local_34 + 0x1c) != &CStack_4c.y) {
      local_14 = in_stack_00000008;
      local_10 = in_stack_00000008;
      local_34._28_4_ = -0.4;
    }
  }
  else if (in_stack_00000008 == 1.4013e-45) {
    local_5c = 0;
    local_58 = 0;
    local_60 = 0x3ecccccd;
    if ((uint *)(local_34 + 0x1c) != &local_60) {
      local_34._28_4_ = 0.4;
      local_14 = 0.0;
      local_10 = 0.0;
    }
  }
  else {
    local_14 = 0.0;
    local_34._28_4_ = 0.0;
    local_10 = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20
            ((CVector3f *)(local_34 + 0x1c),
             (CMatrix3x4f *)
             (this_ptr->base_hero).base_character.model.bone_transform.bone_world_matrices
             [(int)in_stack_0000000c].m);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)auStack_140,(CVector3f *)&local_14,(CVector3f *)(local_3c + 4));
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&CStack_4c,(CVector3f *)&stack0x00000008,(CMatrix3x4f *)(auStack_140 + 4));
  local_34._28_4_ = unaff_EBP - pCVar2->x;
  local_14 = unaff_EDI - pCVar2->y;
  local_10 = unaff_EBX - pCVar2->z;
  fStack_12c = fStack_12c + (float)local_34._28_4_;
  fStack_11c = fStack_11c + local_14;
  fStack_10c = fStack_10c + local_10;
  puVar4 = (uint *)(auStack_140 + 4);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_ESI = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar6 * -2 + 1;
  }
  return;
}
