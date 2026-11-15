// Name: core_scat.cpp_FUN_00520df0
// Address: 00520df0
// Address Range: [[00520df0, 00520f3a]]
// Convention: unknown
// Signature: void core_scat_cpp_FUN_00520df0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_scat_cpp_FUN_00520df0(int param_1)

{
  int iVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  float afStackY_1044 [940];
  CVector3f *in_stack_fffffe78;
  CMatrix3x4f local_158;
  CMatrix3x4f local_128;
  CMatrix3x4f local_f8;
  CMatrix3x4f local_c8;
  CMatrix3x4f local_98;
  CVector3f local_68;
  float local_5c;
  uint auStack_58 [6];
  float afStack_40 [5];
  CVector3f local_2c;
  CVector3f local_20;
  int local_14;
  
  bVar6 = 0;
  if ((*(int *)(param_1 + 0x25654) != 0) && (*(int *)(*(int *)(param_1 + 0x25654) + 0x43c) != 9)) {
    auStack_58[2] = 0;
    auStack_58[4] = 0x3fc90fdb;
    auStack_58[3] = 0x3fc90fdb;
    local_20.x = 0.390807;
    local_68.x = 0.0;
    local_68.y = 1.5707964;
    local_68.z = 1.5707964;
    local_20.y = -0.103151;
    local_20.z = 0.109206;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
              (&local_158,&local_20,&local_68);
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
              (&local_158,(CMatrix3x4f *)(_DAT_01e620a0 * 0x30 + param_1 + 0x1134),&local_f8);
    pCVar3 = &local_f8;
    pCVar5 = &local_98;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar5->m[0].w = pCVar3->m[0].w;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
              (&local_128,(CVector3f *)(param_1 + 0x20),(CVector3f *)(param_1 + 0x30));
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
              (&local_98,&local_128,(CMatrix3x4f *)&stack0xfffffe78);
    pfVar4 = (float *)&stack0xfffffe78;
    pCVar3 = &local_c8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar3->m[0].w = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    }
    iVar2 = *(int *)(param_1 + 0x25654);
    local_14 = *(int *)(iVar2 + 0x2b0);
    core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&local_c8,in_stack_fffffe78);
    auStack_58[5] = afStack_40[2];
    afStack_40[(uint)bVar6 * -2] = afStack_40[(uint)bVar6 * -2 + 3];
    afStack_40[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_40[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    core_xform_cpp_getTranslation_FUN_00592720(&local_c8,&local_2c);
    iVar1 = local_14;
    pfVar4 = &local_5c;
    local_5c = local_2c.x;
    auStack_58[(uint)bVar6 * -2] = *(uint *)((int)&local_2c + (uint)bVar6 * -8 + 4);
    auStack_58[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         *(uint *)((int)&local_2c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    (**(code **)(iVar1 + 0x70))(iVar2,pfVar4);
    return;
  }
  return;
}
