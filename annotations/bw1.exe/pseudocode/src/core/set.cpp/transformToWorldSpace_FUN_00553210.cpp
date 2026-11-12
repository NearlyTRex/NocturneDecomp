// Name: core_set.cpp_transformToWorldSpace_FUN_00553210
// Address: 00553210
// Address Range: [[00553210, 005532d9]]
// Convention: __stack_esi
// Signature: CVector3i * __stack_esi core_set_cpp_transformToWorldSpace_FUN_00553210(CVector3i *input,CVector3i *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3i * __stack_esi core_set_cpp_transformToWorldSpace_FUN_00553210(CVector3i *input,CVector3i *output)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  lVar1 = (longlong)_DAT_01d1dd18 * (longlong)input->x;
  lVar2 = (longlong)_DAT_01d1dd24 * (longlong)input->y;
  lVar3 = (longlong)_DAT_01d1dd30 * (longlong)input->z;
  lVar4 = (longlong)_DAT_01d1dd1c * (longlong)input->x;
  lVar5 = (longlong)_DAT_01d1dd28 * (longlong)input->y;
  lVar6 = (longlong)_DAT_01d1dd34 * (longlong)input->z;
  iVar7 = _DAT_01c51d3c +
          ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
          ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
          ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
  lVar4 = (longlong)_DAT_01d1dd20 * (longlong)input->x;
  lVar5 = (longlong)_DAT_01d1dd2c * (longlong)input->y;
  lVar6 = (longlong)_DAT_01d1dd38 * (longlong)input->z;
  iVar8 = _DAT_01c51d40 +
          ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
          ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
          ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
  output->x = _DAT_01c51d38 +
              ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
              ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  output->y = iVar7;
  output->z = iVar8;
  return output;
}
