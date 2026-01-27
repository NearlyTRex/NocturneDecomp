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
  int unaff_EDI;
  float *pfVar5;
  byte bVar6;
  float in_stack_00000008;
  CMatrix3x4f CStack_188;
  CMatrix3x4f CStack_158;
  CMatrix3x4f CStack_128;
  CMatrix3x4f CStack_f8;
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
  CVector3f local_74;
  CVector3f CStack_68;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f CStack_44;
  float local_38;
  float local_34;
  float local_30;
  CVector3f local_2c;
  float fStack_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  bVar6 = 0;
  actor_ptr = (this_ptr->base).base.carry_hands[(int)in_stack_00000008].carry_actor;
  local_10 = *(float *)(this_ptr->base).base.carry_hands[(int)in_stack_00000008].unk1;
  local_50.x = 0.0;
  local_5c.z = 0.0;
  local_5c.y = 0.0;
  local_14 = 0.0;
  local_18 = 0.0;
  local_1c = 0.0;
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CLightActorClassInfo.name_hash);
  if (pCVar1 == (CDemonActor *)0x0) goto LAB_004d719a;
  (*((actor_ptr->vtable)._ub)->getBoundingBox)(actor_ptr,(CBoundingBox3D *)(auStack_c8 + 0x28));
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
    core_xform_cpp_buildRotationY_FUN_005f6cc0(-1.5707964,&CStack_188);
    pCVar4 = &CStack_188;
LAB_004d73e5:
    pfVar5 = (float *)auStack_c8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = pCVar4->m[0].w;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
      pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  else {
    if (in_stack_00000008 == 1.4013e-45) {
      core_xform_cpp_buildRotationY_FUN_005f6cc0(1.5707964,&CStack_f8);
      pCVar4 = &CStack_f8;
      goto LAB_004d73e5;
    }
    core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100((CMatrix3x4f *)auStack_c8);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)auStack_c8,
             (CMatrix3x4f *)
             (this_ptr->base).base.model.bone_transform.bone_world_matrices[unaff_EDI].m,&CStack_128
            );
  pCVar4 = &CStack_128;
  pfVar5 = (float *)auStack_c8;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
  }
  pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)auStack_c8,&CStack_44);
  if (&local_50 != pCVar2) {
    local_50.x = pCVar2->x;
    local_50.y = pCVar2->y;
    local_50.z = pCVar2->z;
  }
LAB_004d719a:
  if (in_stack_00000008 == 0.0) {
    local_5c.y = in_stack_00000008;
    local_5c.x = -0.4;
    local_5c.z = in_stack_00000008;
    if (&local_2c != &local_5c) {
      local_2c.y = in_stack_00000008;
      local_2c.z = in_stack_00000008;
      local_2c.x = -0.4;
    }
  }
  else if (in_stack_00000008 == 1.4013e-45) {
    local_74.y = 0.0;
    local_74.z = 0.0;
    local_74.x = 0.4;
    if (&local_2c != &local_74) {
      local_2c.x = 0.4;
      local_2c.y = 0.0;
      local_2c.z = 0.0;
    }
  }
  else {
    local_2c.y = 0.0;
    local_2c.x = 0.0;
    local_2c.z = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20
            (&local_2c,
             (CMatrix3x4f *)
             (this_ptr->base).base.model.bone_transform.bone_world_matrices[unaff_EDI].m);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(&CStack_158,&local_2c,&local_50)
  ;
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&CStack_68,(CVector3f *)&local_14,&CStack_158);
  local_38 = local_2c.x - pCVar2->x;
  local_34 = local_2c.y - pCVar2->y;
  local_30 = local_2c.z - pCVar2->z;
  CStack_158.m[0].z = CStack_158.m[0].z + local_38;
  CStack_158.m[1].z = CStack_158.m[1].z + local_34;
  CStack_158.m[2].z = CStack_158.m[2].z + local_30;
  pCVar4 = &CStack_158;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_ESI = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    unaff_ESI = unaff_ESI + (uint)bVar6 * -2 + 1;
  }
  return;
}
