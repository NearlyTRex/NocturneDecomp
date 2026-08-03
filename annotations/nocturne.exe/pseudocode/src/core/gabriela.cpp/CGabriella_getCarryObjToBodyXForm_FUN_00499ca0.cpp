// Name: core_gabriela.cpp_CGabriella_getCarryObjToBodyXForm_FUN_00499ca0
// Address: 00499ca0
// Address Range: [[00499ca0, 0049a109]]
// Convention: unknown
// Signature: void core_gabriela_cpp_CGabriella_getCarryObjToBodyXForm_FUN_00499ca0(int param_1,float param_2)

#include "nocturne.h"

void core_gabriela_cpp_CGabriella_getCarryObjToBodyXForm_FUN_00499ca0(int param_1,float param_2)

{
  CDemonActor *actor_ptr;
  int iVar1;
  CDemonActor *pCVar2;
  CVector3f *pCVar3;
  float *unaff_ESI;
  CMatrix3x4f *pCVar4;
  float *pfVar5;
  byte bVar6;
  float afStack_190 [12];
  CMatrix3x4f local_160;
  float afStack_130 [12];
  float afStack_100 [12];
  CMatrix3x4f CStack_d0;
  CBoundingBox3D local_a0;
  CVector3f CStack_88;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f CStack_4c;
  float local_40;
  float local_3c;
  float local_38;
  CVector3f local_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CVector3f local_1c;
  int local_10;
  
  bVar6 = 0;
  iVar1 = (int)param_2 * 0x44 + param_1;
  actor_ptr = *(CDemonActor **)(iVar1 + 0x24ac);
  local_10 = *(int *)(iVar1 + 0x24a4);
  local_58.z = 0.0;
  local_58.y = 0.0;
  local_58.x = 0.0;
  local_1c.z = 0.0;
  local_1c.y = 0.0;
  local_1c.x = 0.0;
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                     (actor_ptr,g_CLightActorActorType_00764a9c.name_hash);
  if (pCVar2 == (CDemonActor *)0x0) goto LAB_00499d1a;
  (*((actor_ptr->vtable)._ub)->getBoundingBox)(actor_ptr,&local_a0);
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
  iVar1 = pCVar2[4].dead2;
  if (iVar1 == 2) {
    local_1c.y = local_a0.max.y;
    goto LAB_00499d1a;
  }
  if (iVar1 != 1) {
    if (iVar1 == 3) {
      local_1c.y = local_a0.max.y;
    }
    else {
      g_CHAR_PTR_01cc4800 = "..\\core\\gabriela.cpp";
      g_INT_01cc4804 = 0x945;
      core_main_c_FUN_004c8440("Don't know how to carry light %s",pCVar2);
    }
    goto LAB_00499d1a;
  }
  if (param_2 == 0.0) {
    core_xform_cpp_buildRotationY_FUN_0055c7b0(0xbfc90fdb);
    pfVar5 = afStack_190;
LAB_00499f65:
    pCVar4 = &CStack_d0;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar4->m[0].w = *pfVar5;
      pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    }
  }
  else {
    if (param_2 == 1.4013e-45) {
      core_xform_cpp_buildRotationY_FUN_0055c7b0(0x3fc90fdb);
      pfVar5 = afStack_100;
      goto LAB_00499f65;
    }
    core_xform_cpp_setIdentityMatrix3x4_FUN_0055abf0(&CStack_d0);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&CStack_d0,local_10 * 0x30 + param_1 + 0xfd0);
  pfVar5 = afStack_130;
  pCVar4 = &CStack_d0;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar4->m[0].w = *pfVar5;
    pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
  }
  pCVar3 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&CStack_d0,&CStack_4c);
  if (&local_58 != pCVar3) {
    local_58.x = pCVar3->x;
    local_58.y = pCVar3->y;
    local_58.z = pCVar3->z;
  }
  local_1c.z = local_a0.max.z * (float)0.29999999999999999 + local_a0.min.z * (float)0.69999999999999996;
LAB_00499d1a:
  if (param_2 == 0.0) {
    local_64.y = param_2;
    local_64.x = -0.4;
    local_64.z = param_2;
    if (&local_34 != &local_64) {
      local_34.y = param_2;
      local_34.z = param_2;
      local_34.x = -0.4;
    }
  }
  else if (param_2 == 1.4013e-45) {
    local_7c.y = 0.0;
    local_7c.z = 0.0;
    local_7c.x = 0.4;
    if (&local_34 != &local_7c) {
      local_34.x = 0.4;
      local_34.y = 0.0;
      local_34.z = 0.0;
    }
  }
  else {
    local_34.y = 0.0;
    local_34.x = 0.0;
    local_34.z = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_0055a910
            (&local_34,(CMatrix3x4f *)(local_10 * 0x30 + param_1 + 0xfd0));
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(&local_160,&local_34,&local_58);
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_0055a8b0(&local_70,&local_1c,&local_160);
  local_40 = local_34.x - pCVar3->x;
  local_3c = local_34.y - pCVar3->y;
  local_38 = local_34.z - pCVar3->z;
  local_160.m[0].z = local_160.m[0].z + local_40;
  local_160.m[1].z = local_160.m[1].z + local_3c;
  local_160.m[2].z = local_160.m[2].z + local_38;
  pCVar4 = &local_160;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    unaff_ESI = unaff_ESI + (uint)bVar6 * -2 + 1;
  }
  return;
}
