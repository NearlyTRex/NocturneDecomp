// Name: core_set.cpp_transformNormalFixedPoint_FUN_00532030
// Address: 00532030
// Address Range: [[00532030, 00532180]]
// Convention: __stack_esi
// Signature: CVector3i * __stack_esi core_set_cpp_transformNormalFixedPoint_FUN_00532030(CVector3i *input,CVector3i *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3i * __stack_esi core_set_cpp_transformNormalFixedPoint_FUN_00532030(CVector3i *input,CVector3i *output)

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
  
  lVar4 = (longlong)_DAT_01c38b9c * (longlong)input->x;
  lVar5 = (longlong)_DAT_01c38ba8 * (longlong)input->y;
  lVar6 = (longlong)_DAT_01c38bb4 * (longlong)input->z;
  iVar7 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
          ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
          ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
  lVar4 = (longlong)_DAT_01c38ba0 * (longlong)input->x;
  lVar5 = (longlong)_DAT_01c38bac * (longlong)input->y;
  lVar6 = (longlong)_DAT_01c38bb8 * (longlong)input->z;
  iVar8 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
          ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
          ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
  lVar4 = (longlong)_DAT_01c38ba4 * (longlong)input->x;
  lVar5 = (longlong)_DAT_01c38bb0 * (longlong)input->y;
  lVar6 = (longlong)_DAT_01c38bbc * (longlong)input->z;
  iVar9 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
          ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
          ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
  lVar4 = (longlong)_DAT_01d04fbc;
  lVar5 = (longlong)_DAT_01d04fc8;
  lVar6 = (longlong)_DAT_01d04fd4;
  lVar1 = (longlong)_DAT_01d04fc0;
  lVar2 = (longlong)_DAT_01d04fcc;
  lVar3 = (longlong)_DAT_01d04fd8;
  output->x = ((uint)((longlong)_DAT_01d04fb8 * (longlong)iVar7) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01d04fb8 * (longlong)iVar7) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_01d04fc4 * (longlong)iVar8) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01d04fc4 * (longlong)iVar8) >> 0x20) << 0x10) +
              ((uint)((longlong)_DAT_01d04fd0 * (longlong)iVar9) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_01d04fd0 * (longlong)iVar9) >> 0x20) << 0x10);
  output->y = ((uint)(lVar4 * iVar7) >> 0x10 | (int)((ulonglong)(lVar4 * iVar7) >> 0x20) << 0x10) +
              ((uint)(lVar5 * iVar8) >> 0x10 | (int)((ulonglong)(lVar5 * iVar8) >> 0x20) << 0x10) +
              ((uint)(lVar6 * iVar9) >> 0x10 | (int)((ulonglong)(lVar6 * iVar9) >> 0x20) << 0x10);
  output->z = ((uint)(lVar1 * iVar7) >> 0x10 | (int)((ulonglong)(lVar1 * iVar7) >> 0x20) << 0x10) +
              ((uint)(lVar2 * iVar8) >> 0x10 | (int)((ulonglong)(lVar2 * iVar8) >> 0x20) << 0x10) +
              ((uint)(lVar3 * iVar9) >> 0x10 | (int)((ulonglong)(lVar3 * iVar9) >> 0x20) << 0x10);
  return output;
}
