// Name: FUN_10007ce0
// Address: 10007ce0
// Address Range: [[10007ce0, 10007eaf]]
// Convention: unknown
// Signature: void FUN_10007ce0(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

#include "nocturne.h"

void FUN_10007ce0(byte *param_1,uint *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (uint *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    pbVar4 = param_1 + 1;
    bVar1 = *pbVar4;
    while ((bVar1 != 0x22 && (*pbVar4 != 0))) {
      if (((*(byte *)((int)&DAT_10016dd8 + *pbVar4 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        *param_3 = bVar1;
        param_3 = param_3 + 1;
      }
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
      }
      pbVar4 = pbVar4 + 1;
      bVar1 = *pbVar4;
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar4 == 0x22) {
      pbVar4 = pbVar4 + 1;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar1 = *param_1;
      pbVar4 = param_1 + 1;
      if ((*(byte *)((int)&DAT_10016dd8 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10007d50;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10007d50:
      pbVar4 = pbVar4 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar3 = false;
  while (*pbVar4 != 0) {
    for (; (*pbVar4 == 0x20 || (*pbVar4 == 9)); pbVar4 = pbVar4 + 1) {
    }
    if (*pbVar4 == 0) break;
    if (param_2 != (uint *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar2 = true;
      uVar5 = 0;
      bVar1 = *pbVar4;
      while (bVar1 == 0x5c) {
        pbVar4 = pbVar4 + 1;
        uVar5 = uVar5 + 1;
        bVar1 = *pbVar4;
      }
      if (*pbVar4 == 0x22) {
        pbVar6 = pbVar4;
        if ((uVar5 & 1) == 0) {
          if ((!bVar3) || (pbVar6 = pbVar4 + 1, *pbVar6 != 0x22)) {
            bVar2 = false;
            pbVar6 = pbVar4;
          }
          bVar3 = !bVar3;
        }
        uVar5 = uVar5 >> 1;
        pbVar4 = pbVar6;
      }
      while (uVar5 != 0) {
        uVar5 = uVar5 - 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      bVar1 = *pbVar4;
      if ((bVar1 == 0) || ((!bVar3 && ((bVar1 == 0x20 || (bVar1 == 9)))))) break;
      if (bVar2) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_10016dd8 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_5 = *param_5 + 1;
          goto LAB_10007e7f;
        }
        pbVar6 = param_3;
        if ((*(byte *)((int)&DAT_10016dd8 + bVar1 + 1) & 4) != 0) {
          *param_3 = bVar1;
          pbVar4 = pbVar4 + 1;
          pbVar6 = param_3 + 1;
          *param_5 = *param_5 + 1;
        }
        bVar1 = *pbVar4;
        param_3 = pbVar6 + 1;
        pbVar4 = pbVar4 + 1;
        *pbVar6 = bVar1;
        *param_5 = *param_5 + 1;
      }
      else {
LAB_10007e7f:
        pbVar4 = pbVar4 + 1;
      }
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}
