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
  float *unaff_ESI;
  CMatrix3x4f *pCVar4;
  uint *puVar5;
  int unaff_EDI;
  uint *puVar6;
  byte bVar7;
  float in_stack_00000008;
  CMatrix3x4f *in_stack_fffffe78;
  CMatrix3x4f CStack_158;
  uint auStack_128 [12];
  uint auStack_f8 [12];
  byte auStack_c8 [48];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float local_7c;
  float local_78;
  uint local_74;
  uint local_70;
  uint uStack_6c;
  CVector3f CStack_68;
  uint local_5c;
  float local_58;
  float local_54;
  CVector3f local_50;
  CMatrix3x3f CStack_44;
  float fStack_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  bVar7 = 0;
  actor_ptr = (this_ptr->base_hero).base_character.carry_hands[(int)in_stack_00000008].carry_actor;
  local_10 = *(float *)(this_ptr->base_hero).base_character.carry_hands[(int)in_stack_00000008].
                       field0_0x0;
  local_50.x = 0.0;
  local_54 = 0.0;
  local_58 = 0.0;
  local_14 = 0.0;
  local_18 = 0.0;
  local_1c = 0.0;
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CLightActorClassInfo.name_hash);
  if (pCVar1 == (CDemonActor *)0x0) goto LAB_004d719a;
  (*actor_ptr->vtable->getBoundingBox)(actor_ptr,(CBoundingBox3D *)(auStack_c8 + 0x28));
  fStack_20 = fStack_98 + fStack_8c;
  fStack_80 = fStack_20 * 0.5f;
  local_1c = fStack_94 + fStack_88;
  local_18 = fStack_90 + fStack_84;
  local_7c = local_1c * 0.5f;
  local_78 = local_18 * 0.5f;
  if (&local_14 != &fStack_80) {
    local_14 = fStack_80;
    local_10 = local_7c;
  }
  iVar3 = pCVar1[4].scale.y;
  if (iVar3 == 2) {
    local_10 = fStack_88;
    goto LAB_004d719a;
  }
  if (iVar3 != 1) {
    if (iVar3 == 3) {
      local_10 = fStack_88;
    }
    else {
      g_CurrentFilename = "..\\core\\gabriela.cpp";
      g_CurrentLineNumber = 0x945;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Don't know how to carry light %s",pCVar1);
    }
    goto LAB_004d719a;
  }
  if (in_stack_00000008 == 0.0) {
    core_xform_cpp_buildRotationY_FUN_005f6cc0((CMatrix3x4f *)0xbfc90fdb,(float)in_stack_fffffe78);
    puVar5 = (uint *)&stack0xfffffe78;
LAB_004d73e5:
    puVar6 = (uint *)auStack_c8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
  }
  else {
    if (in_stack_00000008 == 1.4013e-45) {
      core_xform_cpp_buildRotationY_FUN_005f6cc0((CMatrix3x4f *)0x3fc90fdb,(float)in_stack_fffffe78)
      ;
      puVar5 = auStack_f8;
      goto LAB_004d73e5;
    }
    core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100((CMatrix3x4f *)auStack_c8);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)auStack_c8,
             (CMatrix3x4f *)
             (this_ptr->base_hero).base_character.model.bone_transform.bone_world_matrices
             [unaff_EDI].m,in_stack_fffffe78);
  puVar5 = auStack_128;
  puVar6 = (uint *)auStack_c8;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CVector3f *)auStack_c8,&CStack_44);
  if (&local_50 != pCVar2) {
    local_50.x = pCVar2->x;
    local_50.y = pCVar2->y;
    local_50.z = pCVar2->z;
  }
LAB_004d719a:
  if (in_stack_00000008 == 0.0) {
    local_58 = in_stack_00000008;
    local_5c = 0xbecccccd;
    local_54 = in_stack_00000008;
    if (CStack_44.m + 2 != (CVector3f *)&local_5c) {
      CStack_44.m[2].y = in_stack_00000008;
      CStack_44.m[2].z = in_stack_00000008;
      CStack_44.m[2].x = -0.4;
    }
  }
  else if (in_stack_00000008 == 1.4013e-45) {
    local_70 = 0;
    uStack_6c = 0;
    local_74 = 0x3ecccccd;
    if (CStack_44.m + 2 != (CVector3f *)&local_74) {
      CStack_44.m[2].x = 0.4;
      CStack_44.m[2].y = 0.0;
      CStack_44.m[2].z = 0.0;
    }
  }
  else {
    CStack_44.m[2].y = 0.0;
    CStack_44.m[2].x = 0.0;
    CStack_44.m[2].z = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20
            (CStack_44.m + 2,
             (CMatrix3x4f *)
             (this_ptr->base_hero).base_character.model.bone_transform.bone_world_matrices
             [unaff_EDI].m);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&CStack_158,CStack_44.m + 2,&local_50);
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&CStack_68,(CVector3f *)&local_14,&CStack_158);
  CStack_44.m[1].x = CStack_44.m[2].x - pCVar2->x;
  CStack_44.m[1].y = CStack_44.m[2].y - pCVar2->y;
  CStack_44.m[1].z = CStack_44.m[2].z - pCVar2->z;
  CStack_158.m[0].z = CStack_158.m[0].z + CStack_44.m[1].x;
  CStack_158.m[1].z = CStack_158.m[1].z + CStack_44.m[1].y;
  CStack_158.m[2].z = CStack_158.m[2].z + CStack_44.m[1].z;
  pCVar4 = &CStack_158;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_ESI = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
    unaff_ESI = unaff_ESI + (uint)bVar7 * -2 + 1;
  }
  return;
}
