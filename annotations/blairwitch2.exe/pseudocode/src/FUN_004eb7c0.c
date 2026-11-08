// Name: FUN_004eb7c0
// Address: 004eb7c0
// Address Range: [[004eb7c0, 004eba4f]]
// Convention: unknown
// Signature: void FUN_004eb7c0(int *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004eb7c0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_18;
  
  iVar3 = DAT_006141b8 * 3 >> 0x1f;
  FUN_0047e1d0(0x01C25594,(int)((DAT_006141b8 * 3 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2,
               0x2c,param_2,0);
  iVar3 = *param_1;
  if (iVar3 < 0x4000) {
    *param_1 = 0x4000;
    goto LAB_004eb823;
  }
  if (iVar3 < 0x40001) {
    if (iVar3 < 0x4000) {
      *param_1 = 0x4000;
      goto LAB_004eb823;
    }
    if (iVar3 < 0x40001) goto LAB_004eb823;
  }
  *param_1 = 0x40000;
LAB_004eb823:
  iVar3 = *param_1;
  FUN_004032b0();
  FUN_0058ed10((int)(((longlong)(DAT_006141b8 + -1) * (longlong)(iVar3 + -0x4000)) / 0x3c000),
               _DAT_01c2a380);
  local_18 = 0;
  do {
    FUN_0047e870();
    if (_DAT_01c2a37c != local_18) {
      iVar3 = (int)(((longlong)_DAT_01c2a37c * 0x3c000) / (longlong)(DAT_006141b8 + -1)) + 0x4000;
      local_18 = _DAT_01c2a37c;
    }
    iVar1 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x4b);
    if (iVar1 != 0) {
      iVar3 = iVar3 + -700;
    }
    iVar1 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x4d);
    if (iVar1 != 0) {
      iVar3 = iVar3 + 700;
    }
    if (iVar3 < 0x4000) {
      iVar3 = 0x4000;
    }
    else if (0x40000 < iVar3) {
      iVar3 = 0x40000;
    }
    iVar1 = _DAT_01c35e4c + 1;
    iVar2 = _DAT_01c35e54 + -1;
    iVar4 = _DAT_01c35e50 + -1;
    iVar5 = _DAT_01c35e48 + 1;
    FUN_00403250(iVar5,iVar1,iVar4,iVar2,0,0xff,iVar1,iVar2);
    FUN_004031c0(iVar5,iVar1,
                 (int)(((longlong)(iVar4 - iVar5) * (longlong)(iVar3 + -0x4000)) / 0x3c000) + iVar5,
                 iVar2,4);
    iVar2 = _DAT_01c35e54 + _DAT_01c35e4c;
    iVar1 = FUN_004ab560(_DAT_01c25590,0x41,0xff,0,"%4.2f",(double)iVar3 * _DAT_005dcb2d);
    FUN_004a93f0(_DAT_01c25590,_DAT_01c35e48,_DAT_01c35e50,(iVar2 - iVar1) / 2);
    FUN_00589560();
    iVar1 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
    if (iVar1 != 0) goto LAB_004eb9f5;
    iVar1 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
  } while ((iVar1 == 0) && (iVar1 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar1 == 0));
  *param_1 = iVar3;
LAB_004eb9f5:
  FUN_0047e760();
  return;
}
