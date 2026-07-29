// Name: core_xform.cpp_buildMirrorTransform_FUN_0055caf0
// Address: 0055caf0
// Address Range: [[0055caf0, 0055cc2c]]
// Convention: unknown
// Signature: void core_xform_cpp_buildMirrorTransform_FUN_0055caf0(CVector3f *param_1,float param_2)

#include "nocturne.h"

void core_xform_cpp_buildMirrorTransform_FUN_0055caf0(CVector3f *param_1,float param_2)

{
  CVector3f *euler_angles;
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint local_1a4 [12];
  uint local_174 [12];
  uint local_144 [12];
  uint local_114 [12];
  uint local_e4 [12];
  uint local_b4 [12];
  CMatrix3x4f local_84;
  uint local_54 [12];
  CVector3f local_24;
  CVector3f local_18;
  float local_c;
  
  bVar5 = 0;
  local_c = param_2 / (param_1->z * param_1->z + param_1->x * param_1->x + param_1->y * param_1->y);
  local_24.x = param_1->x * local_c;
  local_24.y = param_1->y * local_c;
  local_24.z = param_1->z * local_c;
  euler_angles = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_18,param_1)
  ;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80(&local_84,&local_24,euler_angles);
  core_xform_cpp_inverse_FUN_0055bd00(&local_84);
  puVar3 = local_b4;
  puVar2 = local_54;
  puVar4 = local_b4;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_buildZFlipMatrix_FUN_0055ca90(0,local_1a4);
  puVar2 = local_1a4;
  puVar4 = local_114;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_84,local_114,puVar3);
  puVar3 = local_174;
  puVar2 = local_e4;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_e4);
  puVar3 = local_144;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  }
  return;
}
