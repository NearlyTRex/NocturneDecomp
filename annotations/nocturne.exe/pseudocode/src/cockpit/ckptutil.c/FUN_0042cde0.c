// Name: cockpit_ckptutil.c_FUN_0042cde0
// Address: 0042cde0
// Address Range: [[0042cde0, 0042cec9]]
// Convention: unknown
// Signature: undefined4 cockpit_ckptutil_c_FUN_0042cde0(undefined4 *param_1,byte *param_2,int param_3)

#include "nocturne.h"

uint cockpit_ckptutil_c_FUN_0042cde0(uint *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint in_EAX;
  
  if (DAT_005b7638 < 6) {
    if (((uint)param_1 & 2) != 0) {
      *(ushort *)param_1 = *(ushort *)((uint)*param_2 * 2 + 0x1c00424);
      param_1 = (uint *)((int)param_1 + 2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    }
    while( true ) {
      if (param_3 < 2) break;
      *param_1 = CONCAT22(*(ushort *)((uint)param_2[1] * 2 + 0x1c00424),
                          *(ushort *)((uint)*param_2 * 2 + 0x1c00424));
      param_2 = param_2 + 2;
      param_1 = param_1 + 1;
      param_3 = param_3 + -2;
    }
    if (param_3 + -2 == -1) {
      *(ushort *)param_1 = *(ushort *)((uint)*param_2 * 2 + 0x1c00424);
    }
    return in_EAX;
  }
  if (((uint)param_1 & 2) != 0) {
    *(ushort *)param_1 = *(ushort *)((uint)*param_2 * 2 + 0x1c00424);
    param_1 = (uint *)((int)param_1 + 2);
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  }
  while (1 < param_3) {
    pbVar1 = param_2 + 1;
    bVar2 = *param_2;
    param_2 = param_2 + 2;
    *param_1 = CONCAT22(*(ushort *)((uint)*pbVar1 * 2 + 0x1c00424),
                        *(ushort *)((uint)bVar2 * 2 + 0x1c00424));
    param_1 = param_1 + 1;
    param_3 = param_3 + -2;
  }
  if (param_3 + -2 == -1) {
    *(ushort *)param_1 = *(ushort *)((uint)*param_2 * 2 + 0x1c00424);
  }
  return in_EAX;
}
