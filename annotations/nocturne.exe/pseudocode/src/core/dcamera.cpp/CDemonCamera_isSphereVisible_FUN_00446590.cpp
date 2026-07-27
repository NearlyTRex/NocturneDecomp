// Name: core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00446590
// Address: 00446590
// Address Range: [[00446590, 0044673a]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_dcamera_cpp_CDemonCamera_isSphereVisible_FUN_00446590(int param_1,float *param_2,float param_3)

#include "nocturne.h"

uint __cdecl core_dcamera_cpp_CDemonCamera_isSphereVisible_FUN_00446590(int param_1,float *param_2,float param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  iVar1 = (int)ROUND(256.0f * param_3);
  iVar2 = (int)ROUND(256.0f * param_3);
  uVar10 = (int)ROUND(*param_2 * 256.0f) - *(int *)(param_1 + 0x16c);
  uVar6 = (int)ROUND(param_2[1] * 256.0f) - *(int *)(param_1 + 0x170);
  uVar11 = (int)ROUND(param_2[2] * 256.0f) - *(int *)(param_1 + 0x174);
  if (((iVar1 <= (int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f))) ||
      (iVar1 <= (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)))) ||
     (iVar1 <= (int)((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f)))) {
    lVar3 = (longlong)(int)uVar10 * (longlong)*(int *)(param_1 + 0x178);
    lVar4 = (longlong)(int)uVar6 * (longlong)*(int *)(param_1 + 0x184);
    lVar5 = (longlong)(int)uVar11 * (longlong)*(int *)(param_1 + 400);
    iVar7 = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
            ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
            ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
    lVar3 = (longlong)(int)uVar10 * (longlong)*(int *)(param_1 + 0x17c);
    lVar4 = (longlong)(int)uVar6 * (longlong)*(int *)(param_1 + 0x188);
    lVar5 = (longlong)(int)uVar11 * (longlong)*(int *)(param_1 + 0x194);
    iVar8 = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
            ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
            ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
    lVar3 = (longlong)(int)uVar10 * (longlong)*(int *)(param_1 + 0x180);
    lVar4 = (longlong)(int)uVar6 * (longlong)*(int *)(param_1 + 0x18c);
    lVar5 = (longlong)(int)uVar11 * (longlong)*(int *)(param_1 + 0x198);
    iVar9 = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
            ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
            ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
    if (((iVar9 < iVar7 - iVar1) || (iVar7 + iVar1 < -iVar9)) ||
       ((iVar9 < iVar8 - iVar2 || (iVar8 + iVar2 < -iVar9)))) {
      return 0;
    }
  }
  return 1;
}
