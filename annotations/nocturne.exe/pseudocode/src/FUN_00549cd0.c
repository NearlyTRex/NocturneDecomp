// Name: FUN_00549cd0
// Address: 00549cd0
// Address Range: [[00549cd0, 00549ed2]]
// Convention: unknown
// Signature: undefined4 * FUN_00549cd0(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * FUN_00549cd0(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float10 fVar5;
  uint uVar6;
  uint auStack_104 [11];
  byte auStack_d8 [4];
  uint auStack_d4 [12];
  uint auStack_a4 [12];
  byte auStack_74 [44];
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  byte local_30 [12];
  byte auStack_24 [16];
  int iStack_14;
  float local_10;
  float local_c;
  
  bVar4 = 0;
  auStack_104[0] = 0;
  local_c = (float)core_turret_cpp_CTurret_getCurFrame_FUN_00549ef0(param_1);
  auStack_104[0] = 0x549d0a;
  fVar5 = (float10)round((float10)local_c);
  local_10 = (float)(int)ROUND(fVar5);
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0x150);
  puVar2 = (uint *)((int)local_10 * 0x18 + *(int *)(iVar1 + 0x350));
  *param_2 = *puVar2;
  param_2[1] = puVar2[1];
  param_2[2] = puVar2[2];
  param_2[3] = puVar2[3];
  param_2[4] = puVar2[4];
  param_2[5] = puVar2[5];
  iStack_14 = param_1 + 0x57c;
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(iStack_14);
  if (*(int *)(iVar1 + 0x110) < 1) {
    return param_2;
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            (auStack_74,&DAT_02dd1184,param_1 + 0x570);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
            (auStack_104,&DAT_02dd1184,param_1 + 0x30);
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(auStack_74,auStack_104);
  puVar2 = auStack_a4;
  puVar3 = auStack_d4;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  local_10 = (float)core_turret_cpp_CTurret_getCurFrame_FUN_00549ef0(param_1,1);
  iVar1 = iStack_14;
  uVar6 = 0x549e12;
  fVar5 = (float10)round((float10)local_10);
  iStack_14 = (int)ROUND(fVar5);
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(iVar1,uVar6);
  puVar2 = (uint *)(*(int *)(iVar1 + 0x350) + iStack_14 * 0x18);
  uStack_48 = *puVar2;
  uStack_44 = puVar2[1];
  local_40 = puVar2[2];
  local_3c = puVar2[3];
  local_38 = puVar2[4];
  local_34 = puVar2[5];
  iVar1 = 0;
  do {
    uVar6 = core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70
                      (&uStack_48,auStack_24,iVar1,auStack_d8);
    uVar6 = core_xform_cpp_transformVector3x4_FUN_0055a8b0(local_30,uVar6);
    iVar1 = iVar1 + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(param_2,uVar6);
  } while (iVar1 < 8);
  return param_2;
}
