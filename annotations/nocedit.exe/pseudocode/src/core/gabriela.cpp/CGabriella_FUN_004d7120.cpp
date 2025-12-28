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
  uint *unaff_ESI;
  float *pfVar4;
  uint *puVar5;
  CMatrix3x4f *pCVar6;
  uint *puVar7;
  byte bVar8;
  float in_stack_00000008;
  CMatrix3x4f *matrix_b;
  float in_stack_fffffe70;
  byte auStack_15c [20];
  float fStack_148;
  float fStack_138;
  uint local_134 [3];
  float fStack_128;
  float afStack_108 [12];
  byte auStack_d8 [8];
  CMatrix3x4f CStack_d0;
  CBoundingBox3D local_a0;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  CVector3f CStack_68;
  byte local_58 [8];
  byte local_50 [32];
  CVector3f local_30;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  bVar8 = 0;
  actor_ptr = (this_ptr->base_hero).base_character.carry_hands[(int)in_stack_00000008].carry_actor;
  local_10 = *(float *)(this_ptr->base_hero).base_character.carry_hands[(int)in_stack_00000008].
                       field0_0x0;
  local_50._0_4_ = 0.0;
  local_58._4_4_ = 0.0;
  local_58._0_4_ = 0.0;
  local_14 = 0.0;
  local_18 = 0.0;
  local_1c = 0.0;
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CLightActorClassInfo.name_hash);
  if (pCVar1 == (CDemonActor *)0x0) goto LAB_004d719a;
  (*actor_ptr->vtable->getBoundingBox)(actor_ptr,&local_a0);
  local_30.z = local_a0.min.x + local_a0.max.x;
  fStack_88 = local_30.z * 0.5f;
  fStack_24 = local_a0.min.y + local_a0.max.y;
  fStack_20 = local_a0.min.z + local_a0.max.z;
  fStack_84 = fStack_24 * 0.5f;
  fStack_80 = fStack_20 * 0.5f;
  if (&local_1c != &fStack_88) {
    local_1c = fStack_88;
    local_18 = fStack_84;
    local_14 = fStack_80;
  }
  iVar3 = pCVar1[4].scale.y;
  if (iVar3 == 2) {
    local_18 = local_a0.max.y;
    goto LAB_004d719a;
  }
  if (iVar3 != 1) {
    if (iVar3 == 3) {
      local_18 = local_a0.max.y;
    }
    else {
      g_CurrentFilename = "..\\core\\gabriela.cpp";
      g_CurrentLineNumber = 0x945;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Don't know how to carry light %s");
    }
    goto LAB_004d719a;
  }
  if (in_stack_00000008 == 0.0) {
    matrix_b = (CMatrix3x4f *)0x4d73dc;
    core_xform_cpp_buildRotationY_FUN_005f6cc0((CMatrix3x4f *)0xbfc90fdb,in_stack_fffffe70);
    pfVar4 = (float *)&stack0xfffffe68;
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
      matrix_b = (CMatrix3x4f *)0x4d74b5;
      core_xform_cpp_buildRotationY_FUN_005f6cc0((CMatrix3x4f *)0x3fc90fdb,in_stack_fffffe70);
      pfVar4 = afStack_108;
      goto LAB_004d73e5;
    }
    matrix_b = (CMatrix3x4f *)0x4d74d3;
    core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(&CStack_d0);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)auStack_d8,
             (CMatrix3x4f *)
             (this_ptr->base_hero).base_character.model.bone_transform.bone_world_matrices
             [(int)local_18].m,matrix_b);
  puVar5 = local_134;
  puVar7 = (uint *)auStack_d8;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                     ((CVector3f *)(auStack_d8 + 4),(CMatrix3x3f *)local_50);
  if ((CVector3f *)local_58 != pCVar2) {
    local_58._0_4_ = pCVar2->x;
    local_58._4_4_ = pCVar2->y;
    local_50._0_4_ = pCVar2->z;
  }
  local_14 = local_a0.max.z * (float)0.29999999999999999 + local_a0.min.z * (float)0.69999999999999996;
LAB_004d719a:
  if (in_stack_00000008 == 0.0) {
    CStack_68.y = -0.4;
    if ((float *)(local_50 + 0x1c) != &CStack_68.y) {
      local_30.x = in_stack_00000008;
      local_30.y = in_stack_00000008;
      local_50._28_4_ = -0.4;
    }
  }
  else if (in_stack_00000008 == 1.4013e-45) {
    local_78 = 0;
    local_74 = 0;
    local_7c = 0x3ecccccd;
    if ((uint *)(local_50 + 0x1c) != &local_7c) {
      local_50._28_4_ = 0.4;
      local_30.x = 0.0;
      local_30.y = 0.0;
    }
  }
  else {
    local_30.x = 0.0;
    local_50._28_4_ = 0.0;
    local_30.y = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20
            ((CVector3f *)(local_50 + 0x1c),
             (CMatrix3x4f *)
             (this_ptr->base_hero).base_character.model.bone_transform.bone_world_matrices
             [(int)local_10].m);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)auStack_15c,&local_30,(CVector3f *)(local_58 + 4));
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&CStack_68,(CVector3f *)&local_14,(CMatrix3x4f *)(auStack_15c + 4));
  local_50._28_4_ = local_30.z - pCVar2->x;
  local_30.x = fStack_24 - pCVar2->y;
  local_30.y = fStack_20 - pCVar2->z;
  fStack_148 = fStack_148 + (float)local_50._28_4_;
  fStack_138 = fStack_138 + local_30.x;
  fStack_128 = fStack_128 + local_30.y;
  puVar5 = (uint *)(auStack_15c + 4);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_ESI = *puVar5;
    puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar8 * -2 + 1;
  }
  return;
}
