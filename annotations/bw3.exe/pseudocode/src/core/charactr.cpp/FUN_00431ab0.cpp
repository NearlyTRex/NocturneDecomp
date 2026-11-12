// Name: core_charactr.cpp_FUN_00431ab0
// Address: 00431ab0
// Address Range: [[00431ab0, 00431c32]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00431ab0(int param_1,int param_2,float param_3,int *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_00431ab0(int param_1,int param_2,float param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  CMatrix3x4f *pCVar3;
  int *piVar4;
  CMatrix3x4f *pCVar5;
  float *pfVar6;
  int *piVar7;
  byte bVar8;
  float local_160 [12];
  CMatrix3x4f local_130;
  CMatrix3x4f local_100;
  CMatrix3x4f local_d0;
  CMatrix3x4f local_a0;
  CMatrix3x4f local_70;
  int local_40 [12];
  
  bVar8 = 0;
  piVar2 = (int *)(param_2 * 0x78 + param_1 + 0x25a8);
  if (*piVar2 < 0) {
    _DAT_01d71de0 = "..\\core\\charactr.cpp";
    _DAT_01d71de4 = 0xf21;
    core_main_c_FUN_004e4330("CCharacter::computePickup - invalid hand!  Character is %s, hand is %d",param_1,param_2);
  }
  core_xform_cpp_FUN_00583800
            (&local_d0,(CVector3f *)(piVar2[2] + 0x20),(CVector3f *)(piVar2[2] + 0x30));
  core_xform_cpp_FUN_00583940(&local_a0,param_1 + 0x20,param_1 + 0x30);
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_a0,&local_d0,&local_100);
  pCVar3 = &local_100;
  pCVar5 = &local_130;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar5->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar8 * -2 + 1) * 4);
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar8 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
            ((CMatrix3x4f *)(*piVar2 * 0x30 + param_1 + 0xfd8),&local_130,&local_70);
  pCVar3 = &local_70;
  pfVar6 = local_160;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar6 = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar8 * -2 + 1) * 4);
    pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
  }
  core_xform_cpp_inverse_FUN_00584560(local_160);
  piVar4 = local_40;
  piVar7 = piVar2 + 3;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar7 = *piVar4;
    piVar4 = piVar4 + (uint)bVar8 * -2 + 1;
    piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
  }
  if (param_3 <= 0.0) {
    piVar2[0x10] = 0x3f800000;
    piVar2[0xf] = 0;
  }
  else {
    piVar2[0x10] = 0;
    piVar2[0xf] = (int)(1.0 / param_3);
  }
  if (param_4 == (int *)0x0) {
    piVar2[0x11] = 0;
    return;
  }
  piVar2[0x11] = 1;
  piVar2 = piVar2 + 0x12;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = *param_4;
    param_4 = param_4 + (uint)bVar8 * -2 + 1;
    piVar2 = piVar2 + (uint)bVar8 * -2 + 1;
  }
  return;
}
