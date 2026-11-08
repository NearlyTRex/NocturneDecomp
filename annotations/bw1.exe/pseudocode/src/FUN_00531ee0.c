// Name: FUN_00531ee0
// Address: 00531ee0
// Address Range: [[00531ee0, 005320a7]]
// Convention: unknown
// Signature: undefined4 FUN_00531ee0(int *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00531ee0(int *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  float10 fVar6;
  
  if (99 < *param_1) {
    return 0;
  }
  piVar5 = param_1 + *param_1 * 0x40 + 0xc9;
  do {
    cVar1 = *param_2;
    *(char *)piVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    *(char *)((int)piVar5 + 1) = cVar1;
    piVar5 = (int *)((int)piVar5 + 2);
  } while (cVar1 != '\0');
  fVar2 = _DAT_01d22544;
  fVar6 = (float10)param_3 * (float10)_DAT_01d22544;
  iVar3 = FUN_005c03a0();
  *(int *)((int)param_1 + iVar3 + 4) = (int)ROUND(fVar6);
  fVar6 = (float10)param_4 * (float10)fVar2;
  iVar3 = FUN_005c03a0();
  *(int *)((int)param_1 + iVar3 + 0x194) = (int)ROUND(fVar6);
  if (param_5 < 0) {
    uVar4 = FUN_004c2690();
    iVar3 = *param_1;
  }
  else {
    param_5 = param_5 * 3;
    if (DAT_0061b4a0 != 0x10) {
      if (DAT_0061b4a0 == 0x20) {
        param_1[*param_1 + 0x19c9] =
             (uint)(byte)(&DAT_01c4e9fa)[param_5] << (DAT_01c4e9ec & 0x1f) |
             (uint)(byte)(&DAT_01c4e9f8)[param_5] << (DAT_01c4e9d4 & 0x1f) |
             (uint)(byte)(&DAT_01c4e9f9)[param_5] << (DAT_01c4e9e0 & 0x1f);
      }
      else {
        param_1[*param_1 + 0x19c9] =
             (uint)(byte)(&DAT_01c4e9f9)[param_5] << 8 |
             (uint)(byte)(&DAT_01c4e9f8)[param_5] << 0x10 | (uint)(byte)(&DAT_01c4e9fa)[param_5];
      }
      goto LAB_00532022;
    }
    iVar3 = *param_1;
    uVar4 = ((byte)(&DAT_01c4e9fa)[param_5] / _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f) |
            (byte)(&DAT_01c4e9f8)[param_5] / _DAT_01c4e9d8 << (DAT_01c4e9d4 & 0x1f) |
            (byte)(&DAT_01c4e9f9)[param_5] / _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f)) & 0xffff;
  }
  param_1[iVar3 + 0x19c9] = uVar4;
LAB_00532022:
  param_1[*param_1 + 0x1a2d] = param_6;
  *param_1 = *param_1 + 1;
  return 0;
}
