// Name: FUN_004e80f0
// Address: 004e80f0
// Address Range: [[004e80f0, 004e837f]]
// Convention: unknown
// Signature: void FUN_004e80f0(int *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e80f0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_18;
  
  iVar3 = DAT_005fba18 * 3 >> 0x1f;
  FUN_0047f3e0(0x01C5B0E4,(int)((DAT_005fba18 * 3 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2,
               0x2c,param_2,0);
  iVar3 = *param_1;
  if (iVar3 < 0x4000) {
    *param_1 = 0x4000;
    goto LAB_004e8153;
  }
  if (iVar3 < 0x40001) {
    if (iVar3 < 0x4000) {
      *param_1 = 0x4000;
      goto LAB_004e8153;
    }
    if (iVar3 < 0x40001) goto LAB_004e8153;
  }
  *param_1 = 0x40000;
LAB_004e8153:
  iVar3 = *param_1;
  FUN_004032b0();
  FUN_005809d0((int)(((longlong)(DAT_005fba18 + -1) * (longlong)(iVar3 + -0x4000)) / 0x3c000),
               _DAT_01c5fae0);
  local_18 = 0;
  do {
    FUN_0047fa80();
    if (_DAT_01c5fadc != local_18) {
      iVar3 = (int)(((longlong)_DAT_01c5fadc * 0x3c000) / (longlong)(DAT_005fba18 + -1)) + 0x4000;
      local_18 = _DAT_01c5fadc;
    }
    iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x4b);
    if (iVar1 != 0) {
      iVar3 = iVar3 + -700;
    }
    iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x4d);
    if (iVar1 != 0) {
      iVar3 = iVar3 + 700;
    }
    if (iVar3 < 0x4000) {
      iVar3 = 0x4000;
    }
    else if (0x40000 < iVar3) {
      iVar3 = 0x40000;
    }
    iVar1 = _DAT_01c6b5ac + 1;
    iVar2 = _DAT_01c6b5b4 + -1;
    iVar4 = _DAT_01c6b5b0 + -1;
    iVar5 = _DAT_01c6b5a8 + 1;
    FUN_00403250(iVar5,iVar1,iVar4,iVar2,0,0xff,iVar1,iVar2);
    FUN_004031c0(iVar5,iVar1,
                 (int)(((longlong)(iVar4 - iVar5) * (longlong)(iVar3 + -0x4000)) / 0x3c000) + iVar5,
                 iVar2,4);
    iVar2 = _DAT_01c6b5b4 + _DAT_01c6b5ac;
    iVar1 = FUN_004b30f0(_DAT_01c5b0e0,0x41,0xff,0,"%4.2f",(double)iVar3 * _DAT_005c72a6);
    FUN_004b0ff0(_DAT_01c5b0e0,_DAT_01c6b5a8,_DAT_01c6b5b0,(iVar2 - iVar1) / 2);
    FUN_0057a8a0();
    iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
    if (iVar1 != 0) goto LAB_004e8325;
    iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
  } while ((iVar1 == 0) && (iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar1 == 0));
  *param_1 = iVar3;
LAB_004e8325:
  FUN_0047f970();
  return;
}
