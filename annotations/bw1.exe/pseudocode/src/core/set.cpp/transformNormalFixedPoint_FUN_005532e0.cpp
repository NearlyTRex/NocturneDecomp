// Name: core_set.cpp_transformNormalFixedPoint_FUN_005532e0
// Address: 005532e0
// Address Range: [[005532e0, 00553430]]
// Convention: __stack_esi
// Signature: CVector3i * __stack_esi core_set_cpp_transformNormalFixedPoint_FUN_005532e0(CVector3i *input,CVector3i *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3i * __stack_esi core_set_cpp_transformNormalFixedPoint_FUN_005532e0(CVector3i *input,CVector3i *output)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  lVar4 = (longlong)_DAT_01c51d5c * (longlong)input->x;
  lVar5 = (longlong)_DAT_01c51d68 * (longlong)input->y;
  lVar6 = (longlong)_DAT_01c51d74 * (longlong)input->z;
  iVar7 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
          ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
          ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
  lVar4 = (longlong)_DAT_01c51d60 * (longlong)input->x;
  lVar5 = (longlong)_DAT_01c51d6c * (longlong)input->y;
  lVar6 = (longlong)_DAT_01c51d78 * (longlong)input->z;
  iVar8 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
          ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
          ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
  lVar4 = (longlong)_DAT_01c51d64 * (longlong)input->x;
  lVar5 = (longlong)_DAT_01c51d70 * (longlong)input->y;
  lVar6 = (longlong)_DAT_01c51d7c * (longlong)input->z;
  iVar9 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
          ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
          ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
  lVar4 = (longlong)_DAT_01d1dd1c;
  lVar5 = (longlong)_DAT_01d1dd28;
  lVar6 = (longlong)_DAT_01d1dd34;
  lVar1 = (longlong)_DAT_01d1dd20;
  lVar2 = (longlong)_DAT_01d1dd2c;
  lVar3 = (longlong)_DAT_01d1dd38;
  output->x = ((uint)((longlong)_DAT_01d1dd18 * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01d1dd18 * (longlong)iVar7) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_01d1dd24 * (longlong)iVar8) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01d1dd24 * (longlong)iVar8) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_01d1dd30 * (longlong)iVar9) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01d1dd30 * (longlong)iVar9) >> 0x20) << 0x10);
  output->y = ((uint)(lVar4 * iVar7) >> 0x10 | (int)((ulonglong)(lVar4 * iVar7) >> 0x20) << 0x10) +
              ((uint)(lVar5 * iVar8) >> 0x10 | (int)((ulonglong)(lVar5 * iVar8) >> 0x20) << 0x10) +
              ((uint)(lVar6 * iVar9) >> 0x10 | (int)((ulonglong)(lVar6 * iVar9) >> 0x20) << 0x10);
  output->z = ((uint)(lVar1 * iVar7) >> 0x10 | (int)((ulonglong)(lVar1 * iVar7) >> 0x20) << 0x10) +
              ((uint)(lVar2 * iVar8) >> 0x10 | (int)((ulonglong)(lVar2 * iVar8) >> 0x20) << 0x10) +
              ((uint)(lVar3 * iVar9) >> 0x10 | (int)((ulonglong)(lVar3 * iVar9) >> 0x20) << 0x10);
  return output;
}
