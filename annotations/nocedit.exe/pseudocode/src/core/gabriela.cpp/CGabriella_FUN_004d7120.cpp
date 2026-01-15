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
  float *pfVar5;
  byte bVar6;
  float in_stack_00000008;
  CMatrix3x4f *in_stack_fffffe70;
  CMatrix3x4f local_160;
  float afStack_130 [12];
  float afStack_100 [12];
  CMatrix3x4f CStack_d0;
  CBoundingBox3D local_a0;
  CVector3f CStack_88;
  uint local_7c;
  uint local_78;
  uint local_74;
  CVector3f local_70;
  uint local_64 [3];
  CVector3f local_58;
  CMatrix3x3f CStack_4c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CVector3f local_1c;
  int local_10;
  
  bVar6 = 0;
  actor_ptr = (this_ptr->base_hero).base_character.carry_hands[(int)in_stack_00000008].carry_actor;
  local_10 = *(int *)(this_ptr->base_hero).base_character.carry_hands[(int)in_stack_00000008].
                     field0_0x0;
  local_58.z = 0.0;
  local_58.y = 0.0;
  local_58.x = 0.0;
  local_1c.z = 0.0;
  local_1c.y = 0.0;
  local_1c.x = 0.0;
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CLightActorClassInfo.name_hash);
  if (pCVar1 == (CDemonActor *)0x0) goto LAB_004d719a;
  (*actor_ptr->vtable->getBoundingBox)(actor_ptr,&local_a0);
  fStack_28 = local_a0.min.x + local_a0.max.x;
  CStack_88.x = fStack_28 * 0.5f;
  fStack_24 = local_a0.min.y + local_a0.max.y;
  fStack_20 = local_a0.min.z + local_a0.max.z;
  CStack_88.y = fStack_24 * 0.5f;
  CStack_88.z = fStack_20 * 0.5f;
  if (&local_1c != &CStack_88) {
    local_1c.x = CStack_88.x;
    local_1c.y = CStack_88.y;
    local_1c.z = CStack_88.z;
  }
  iVar3 = pCVar1[4].scale.y;
  if (iVar3 == 2) {
    local_1c.y = local_a0.max.y;
    goto LAB_004d719a;
  }
  if (iVar3 != 1) {
    if (iVar3 == 3) {
      local_1c.y = local_a0.max.y;
    }
    else {
      g_CurrentFilename = "..\\core\\gabriela.cpp";
      g_CurrentLineNumber = 0x945;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Don't know how to carry light %s",pCVar1);
    }
    goto LAB_004d719a;
  }
  if (in_stack_00000008 == 0.0) {
    core_xform_cpp_buildRotationY_FUN_005f6cc0((CMatrix3x4f *)0xbfc90fdb,(float)in_stack_fffffe70);
    pfVar5 = (float *)&stack0xfffffe70;
LAB_004d73e5:
    pCVar4 = &CStack_d0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar4->m[0].w = *pfVar5;
      pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    }
  }
  else {
    if (in_stack_00000008 == 1.4013e-45) {
      core_xform_cpp_buildRotationY_FUN_005f6cc0((CMatrix3x4f *)0x3fc90fdb,(float)in_stack_fffffe70)
      ;
      pfVar5 = afStack_100;
      goto LAB_004d73e5;
    }
    core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(&CStack_d0);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&CStack_d0,
             (CMatrix3x4f *)
             (this_ptr->base_hero).base_character.model.bone_transform.bone_world_matrices[local_10]
             .m,in_stack_fffffe70);
  pfVar5 = afStack_130;
  pCVar4 = &CStack_d0;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar4->m[0].w = *pfVar5;
    pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
  }
  pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CVector3f *)&CStack_d0,&CStack_4c);
  if (&local_58 != pCVar2) {
    local_58.x = pCVar2->x;
    local_58.y = pCVar2->y;
    local_58.z = pCVar2->z;
  }
  local_1c.z = local_a0.max.z * (float)0.29999999999999999 + local_a0.min.z * (float)0.69999999999999996;
LAB_004d719a:
  if (in_stack_00000008 == 0.0) {
    local_64[0] = 0xbecccccd;
    if (CStack_4c.m + 2 != (CVector3f *)local_64) {
      CStack_4c.m[2].y = in_stack_00000008;
      CStack_4c.m[2].z = in_stack_00000008;
      CStack_4c.m[2].x = -0.4;
    }
  }
  else if (in_stack_00000008 == 1.4013e-45) {
    local_78 = 0;
    local_74 = 0;
    local_7c = 0x3ecccccd;
    if (CStack_4c.m + 2 != (CVector3f *)&local_7c) {
      CStack_4c.m[2].x = 0.4;
      CStack_4c.m[2].y = 0.0;
      CStack_4c.m[2].z = 0.0;
    }
  }
  else {
    CStack_4c.m[2].y = 0.0;
    CStack_4c.m[2].x = 0.0;
    CStack_4c.m[2].z = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20
            (CStack_4c.m + 2,
             (CMatrix3x4f *)
             (this_ptr->base_hero).base_character.model.bone_transform.bone_world_matrices[local_10]
             .m);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_160,CStack_4c.m + 2,&local_58);
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_70,&local_1c,&local_160);
  CStack_4c.m[1].x = CStack_4c.m[2].x - pCVar2->x;
  CStack_4c.m[1].y = CStack_4c.m[2].y - pCVar2->y;
  CStack_4c.m[1].z = CStack_4c.m[2].z - pCVar2->z;
  local_160.m[0].z = local_160.m[0].z + CStack_4c.m[1].x;
  local_160.m[1].z = local_160.m[1].z + CStack_4c.m[1].y;
  local_160.m[2].z = local_160.m[2].z + CStack_4c.m[1].z;
  pCVar4 = &local_160;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_ESI = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    unaff_ESI = unaff_ESI + (uint)bVar6 * -2 + 1;
  }
  return;
}
