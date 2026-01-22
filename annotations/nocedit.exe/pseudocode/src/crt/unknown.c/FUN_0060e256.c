// Name: crt_unknown.c_FUN_0060e256
// Address: 0060e256
// Address Range: [[0060e256, 0060e28d]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060e256()

#include "nocturne.h"

ulonglong crt_unknown_c_FUN_0060e256(uint param_1,uint param_2,uint unaff_EBX,uint param_4)

{
  int iVar1;
  bool bVar2;
  
  if ((param_2 & 0x7ff00000) == 0) {
    param_2 = 0;
  }
  if ((param_4 & 0x7ff00000) == 0) {
    param_4 = 0;
  }
  iVar1 = 0;
  if (-1 < (int)(param_4 ^ param_2)) {
    bVar2 = param_2 < param_4;
    if (param_2 == param_4) {
      bVar2 = param_1 < unaff_EBX;
    }
    if (param_2 == param_4 && param_1 == unaff_EBX) goto LAB_0060e28a;
    param_2 = param_2 ^ (param_4 >> 1 | (uint)bVar2 << 0x1f);
  }
  bVar2 = CARRY4(param_2,param_2);
  param_2 = param_2 * 2;
  iVar1 = (uint)bVar2 * -2 + 1;
LAB_0060e28a:
  return CONCAT44(param_2,iVar1);
}
