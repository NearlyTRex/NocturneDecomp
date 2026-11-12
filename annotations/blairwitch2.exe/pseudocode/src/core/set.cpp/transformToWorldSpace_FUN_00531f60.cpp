// Name: core_set.cpp_transformToWorldSpace_FUN_00531f60
// Address: 00531f60
// Address Range: [[00531f60, 00532029]]
// Convention: __stack_esi
// Signature: CVector3i * __stack_esi core_set_cpp_transformToWorldSpace_FUN_00531f60(CVector3i *input,CVector3i *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3i * __stack_esi core_set_cpp_transformToWorldSpace_FUN_00531f60(CVector3i *input,CVector3i *output)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  lVar1 = (longlong)_DAT_01d04fb8 * (longlong)input->x;
  lVar2 = (longlong)_DAT_01d04fc4 * (longlong)input->y;
  lVar3 = (longlong)_DAT_01d04fd0 * (longlong)input->z;
  lVar4 = (longlong)_DAT_01d04fbc * (longlong)input->x;
  lVar5 = (longlong)_DAT_01d04fc8 * (longlong)input->y;
  lVar6 = (longlong)_DAT_01d04fd4 * (longlong)input->z;
  iVar7 = _DAT_01c38b7c +
          ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
          ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
          ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
  lVar4 = (longlong)_DAT_01d04fc0 * (longlong)input->x;
  lVar5 = (longlong)_DAT_01d04fcc * (longlong)input->y;
  lVar6 = (longlong)_DAT_01d04fd8 * (longlong)input->z;
  iVar8 = _DAT_01c38b80 +
          ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
          ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
          ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
  output->x = _DAT_01c38b78 +
              ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
              ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  output->y = iVar7;
  output->z = iVar8;
  return output;
}
