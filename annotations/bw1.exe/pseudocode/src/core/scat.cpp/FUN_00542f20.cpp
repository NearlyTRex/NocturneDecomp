// Name: core_scat.cpp_FUN_00542f20
// Address: 00542f20
// Address Range: [[00542f20, 0054306a]]
// Convention: unknown
// Signature: void core_scat_cpp_FUN_00542f20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_scat_cpp_FUN_00542f20(int param_1)

{
  int iVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  float *pfVar5;
  byte bVar6;
  float afStackY_1044 [940];
  uint *puVar7;
  CMatrix3x4f local_188;
  CMatrix3x4f local_158;
  CMatrix3x4f local_128;
  CMatrix3x4f local_f8;
  float local_c8 [12];
  CMatrix3x4f local_98;
  CVector3f local_68;
  uint local_5c;
  float afStack_58 [6];
  float afStack_40 [5];
  uint local_2c;
  CVector3f local_20;
  int local_14;
  
  bVar6 = 0;
  if ((*(int *)(param_1 + 0x1ffc0) != 0) && (*(int *)(*(int *)(param_1 + 0x1ffc0) + 0x2e0) != 8)) {
    afStack_58[2] = 0.0;
    afStack_58[4] = 1.5707964;
    afStack_58[3] = 1.5707964;
    local_20.x = 0.390807;
    local_68.x = 0.0;
    local_68.y = 1.5707964;
    local_68.z = 1.5707964;
    local_20.y = -0.103151;
    local_20.z = 0.109206;
    core_xform_cpp_FUN_005b5760(&local_158,&local_20,&local_68);
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
              (&local_158,(CMatrix3x4f *)(_DAT_01e7e04c * 0x30 + param_1 + 0xfd8),&local_f8);
    pCVar3 = &local_f8;
    pCVar4 = &local_98;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar4->m[0].w = pCVar3->m[0].w;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    }
    core_xform_cpp_FUN_005b5760
              (&local_128,(CVector3f *)(param_1 + 0x20),(CVector3f *)(param_1 + 0x30));
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_98,&local_128,&local_188);
    pCVar3 = &local_188;
    pfVar5 = local_c8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar5 = pCVar3->m[0].w;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
      pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
    }
    iVar2 = *(int *)(param_1 + 0x1ffc0);
    local_14 = *(int *)(iVar2 + 0x154);
    core_xform_cpp_matrixToEulerAngles_FUN_005b5930(local_c8);
    pfVar5 = afStack_58 + 5;
    afStack_58[5] = afStack_40[2];
    afStack_40[(uint)bVar6 * -2] = afStack_40[(uint)bVar6 * -2 + 3];
    afStack_40[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_40[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    core_xform_cpp_FUN_005b6270(local_c8,pfVar5);
    iVar1 = local_14;
    puVar7 = &local_5c;
    local_5c = local_2c;
    afStack_58[(uint)bVar6 * -2] = afStack_40[(uint)bVar6 * -2 + 6];
    afStack_58[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_40[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    (**(code **)(iVar1 + 0x68))(iVar2,puVar7);
    return;
  }
  return;
}
