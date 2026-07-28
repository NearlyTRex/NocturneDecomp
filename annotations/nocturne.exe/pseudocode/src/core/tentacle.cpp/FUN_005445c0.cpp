// Name: core_tentacle.cpp_FUN_005445c0
// Address: 005445c0
// Address Range: [[005445c0, 00544719]]
// Convention: unknown
// Signature: undefined4 core_tentacle_cpp_FUN_005445c0(int param_1,int param_2)

#include "nocturne.h"

uint core_tentacle_cpp_FUN_005445c0(int param_1,int param_2)

{
  CVector3f *pCVar1;
  UOrientationVector *orientation;
  int iVar2;
  uint *puVar3;
  float *pfVar4;
  uint *puVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  uint local_1cc [12];
  uint local_19c [12];
  uint local_16c [12];
  byte local_13c [48];
  CMatrix3x4f local_10c;
  uint local_dc [12];
  float local_ac [12];
  uint local_7c [12];
  uint local_4c [12];
  CVector3f local_1c;
  CVector3f local_10;
  
  bVar7 = 0;
  if (param_2 != *(int *)(param_1 + 0xbca4)) {
    return 0;
  }
  core_xform_cpp_lerpMatrix3x4_FUN_0055cc30
            (param_1 + 0xbd34,param_1 + 0xbd64,*(uint *)(param_1 + 0xbd30));
  puVar3 = local_1cc;
  puVar5 = local_16c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            (local_13c,param_1 + 0x20,param_1 + 0x30);
  core_tentacle_cpp_CTentacle_computeGripBoneMatrix_FUN_00544760(param_1,local_13c);
  puVar3 = local_4c;
  puVar5 = local_dc;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_16c,local_dc);
  puVar3 = local_7c;
  puVar5 = local_19c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_19c);
  pfVar4 = local_ac;
  pCVar6 = &local_10c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar6->m[0].w = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  pCVar1 = core_xform_cpp_getTranslation_FUN_0055bc00(&local_10c,&local_10);
  iVar2 = *(int *)(param_1 + 0xbca4);
  *(float *)(iVar2 + 0x20) = pCVar1->x;
  *(float *)(iVar2 + 0x24) = pCVar1->y;
  *(float *)(iVar2 + 0x28) = pCVar1->z;
  orientation = (UOrientationVector *)
                core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_10c,&local_1c);
  core_charactr_cpp_CCharacter_setOrientation_FUN_0042a060
            (*(CCharacter **)(param_1 + 0xbca4),orientation);
  return 1;
}
