// Name: FUN_0050a5e0
// Address: 0050a5e0
// Address Range: [[0050a5e0, 0050a86f]]
// Convention: unknown
// Signature: void FUN_0050a5e0(int *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050a5e0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_18;
  
  iVar3 = DAT_0061b498 * 3 >> 0x1f;
  FUN_00496840(0x01C3EB54,(int)((DAT_0061b498 * 3 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2,
               0x2c,param_2,0);
  iVar3 = *param_1;
  if (iVar3 < 0x4000) {
    *param_1 = 0x4000;
    goto LAB_0050a643;
  }
  if (iVar3 < 0x40001) {
    if (iVar3 < 0x4000) {
      *param_1 = 0x4000;
      goto LAB_0050a643;
    }
    if (iVar3 < 0x40001) goto LAB_0050a643;
  }
  *param_1 = 0x40000;
LAB_0050a643:
  iVar3 = *param_1;
  FUN_004032b0();
  FUN_005b2750((int)(((longlong)(DAT_0061b498 + -1) * (longlong)(iVar3 + -0x4000)) / 0x3c000),
               _DAT_01c43540);
  local_18 = 0;
  do {
    FUN_00496ee0();
    if (_DAT_01c4353c != local_18) {
      iVar3 = (int)(((longlong)_DAT_01c4353c * 0x3c000) / (longlong)(DAT_0061b498 + -1)) + 0x4000;
      local_18 = _DAT_01c4353c;
    }
    iVar1 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x4b);
    if (iVar1 != 0) {
      iVar3 = iVar3 + -700;
    }
    iVar1 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x4d);
    if (iVar1 != 0) {
      iVar3 = iVar3 + 700;
    }
    if (iVar3 < 0x4000) {
      iVar3 = 0x4000;
    }
    else if (0x40000 < iVar3) {
      iVar3 = 0x40000;
    }
    iVar1 = _DAT_01c4f00c + 1;
    iVar2 = _DAT_01c4f014 + -1;
    iVar4 = _DAT_01c4f010 + -1;
    iVar5 = _DAT_01c4f008 + 1;
    FUN_00403250(iVar5,iVar1,iVar4,iVar2,0,0xff,iVar1,iVar2);
    FUN_004031c0(iVar5,iVar1,
                 (int)(((longlong)(iVar4 - iVar5) * (longlong)(iVar3 + -0x4000)) / 0x3c000) + iVar5,
                 iVar2,4);
    iVar2 = _DAT_01c4f014 + _DAT_01c4f00c;
    iVar1 = FUN_004c4510(_DAT_01c3eb50,0x41,0xff,0,"%4.2f",(double)iVar3 * _DAT_005e7b0a);
    FUN_004c23a0(_DAT_01c3eb50,_DAT_01c4f008,_DAT_01c4f010,(iVar2 - iVar1) / 2);
    FUN_005acff0();
    iVar1 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0);
    if (iVar1 != 0) goto LAB_0050a815;
    iVar1 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0);
  } while ((iVar1 == 0) && (iVar1 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0), iVar1 == 0));
  *param_1 = iVar3;
LAB_0050a815:
  FUN_00496dd0();
  return;
}
