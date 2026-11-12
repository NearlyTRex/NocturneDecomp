// Name: core_set.cpp_transformNormalFixedPoint_FUN_00538c70
// Address: 00538c70
// Address Range: [[00538c70, 00538dc0]]
// Convention: __stack_esi
// Signature: CVector3i * __stack_esi core_set_cpp_transformNormalFixedPoint_FUN_00538c70(CVector3i *input,CVector3i *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3i * __stack_esi core_set_cpp_transformNormalFixedPoint_FUN_00538c70(CVector3i *input,CVector3i *output)

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
  
  lVar4 = (longlong)_DAT_01c6e2fc * (longlong)input->x;
  lVar5 = (longlong)_DAT_01c6e308 * (longlong)input->y;
  lVar6 = (longlong)_DAT_01c6e314 * (longlong)input->z;
  iVar7 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
          ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
          ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
  lVar4 = (longlong)_DAT_01c6e300 * (longlong)input->x;
  lVar5 = (longlong)_DAT_01c6e30c * (longlong)input->y;
  lVar6 = (longlong)_DAT_01c6e318 * (longlong)input->z;
  iVar8 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
          ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
          ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
  lVar4 = (longlong)_DAT_01c6e304 * (longlong)input->x;
  lVar5 = (longlong)_DAT_01c6e310 * (longlong)input->y;
  lVar6 = (longlong)_DAT_01c6e31c * (longlong)input->z;
  iVar9 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
          ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
          ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
  lVar4 = (longlong)_DAT_01d72648;
  lVar5 = (longlong)_DAT_01d72654;
  lVar6 = (longlong)_DAT_01d72660;
  lVar1 = (longlong)_DAT_01d7264c;
  lVar2 = (longlong)_DAT_01d72658;
  lVar3 = (longlong)_DAT_01d72664;
  output->x = ((uint)((longlong)_DAT_01d72644 * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01d72644 * (longlong)iVar7) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_01d72650 * (longlong)iVar8) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01d72650 * (longlong)iVar8) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_01d7265c * (longlong)iVar9) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01d7265c * (longlong)iVar9) >> 0x20) << 0x10);
  output->y = ((uint)(lVar4 * iVar7) >> 0x10 | (int)((ulonglong)(lVar4 * iVar7) >> 0x20) << 0x10) +
              ((uint)(lVar5 * iVar8) >> 0x10 | (int)((ulonglong)(lVar5 * iVar8) >> 0x20) << 0x10) +
              ((uint)(lVar6 * iVar9) >> 0x10 | (int)((ulonglong)(lVar6 * iVar9) >> 0x20) << 0x10);
  output->z = ((uint)(lVar1 * iVar7) >> 0x10 | (int)((ulonglong)(lVar1 * iVar7) >> 0x20) << 0x10) +
              ((uint)(lVar2 * iVar8) >> 0x10 | (int)((ulonglong)(lVar2 * iVar8) >> 0x20) << 0x10) +
              ((uint)(lVar3 * iVar9) >> 0x10 | (int)((ulonglong)(lVar3 * iVar9) >> 0x20) << 0x10);
  return output;
}
