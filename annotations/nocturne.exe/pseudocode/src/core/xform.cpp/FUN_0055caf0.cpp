// Name: core_xform.cpp_FUN_0055caf0
// Address: 0055caf0
// Address Range: [[0055caf0, 0055cc2c]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_0055caf0(float *param_1,float param_2)

#include "nocturne.h"

void core_xform_cpp_FUN_0055caf0(float *param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  uint *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint local_1a4 [12];
  uint local_174 [12];
  uint local_144 [12];
  uint local_114 [12];
  uint local_e4 [12];
  uint local_b4 [12];
  byte local_84 [48];
  uint local_54 [12];
  float local_24;
  float local_20;
  float local_1c;
  byte local_18 [12];
  float local_c;
  
  bVar6 = 0;
  local_c = param_2 / (param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
  local_24 = *param_1 * local_c;
  local_20 = param_1[1] * local_c;
  local_1c = param_1[2] * local_c;
  uVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_18,param_1);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80(local_84,&local_24,uVar1);
  core_xform_cpp_inverse_FUN_0055bd00(local_84);
  puVar4 = local_b4;
  puVar3 = local_54;
  puVar5 = local_b4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  core_xform_cpp_buildZFlipMatrix_FUN_0055ca90(0,local_1a4);
  puVar3 = local_1a4;
  puVar5 = local_114;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_84,local_114,puVar4);
  puVar4 = local_174;
  puVar3 = local_e4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_e4);
  puVar4 = local_144;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar6 * -2 + 1;
  }
  return;
}
