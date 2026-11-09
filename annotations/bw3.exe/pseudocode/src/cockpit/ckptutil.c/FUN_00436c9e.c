// Name: cockpit_ckptutil.c_FUN_00436c9e
// Address: 00436c9e
// Address Range: [[00436c9e, 00436dd7]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_FUN_00436c9e(int param_1,short *param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_ckptutil_c_FUN_00436c9e(int param_1,short *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte auStack_114 [256];
  uint uStack_14;
  
  if (param_1 != 0) {
    iVar3 = 0;
    uStack_14 = 0xfb;
    if (0 < param_3) {
      iVar2 = param_4 * param_5 + -1;
      do {
        iVar1 = (int)*param_2 + param_2[1] * param_4;
        if ((iVar1 < 0) || (iVar2 < iVar1)) {
          FUN_005a28c0(auStack_114,"Edge out of range: edge %d",iVar3);
          _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
          _DAT_01d71de4 = 0x54a;
          core_main_c_FUN_004e4330(auStack_114);
        }
        *(byte *)(iVar1 + param_1) = (byte)uStack_14;
        iVar1 = (int)param_2[2] + param_4 * ((short)(param_2[3] * 2) >> 1);
        if ((iVar1 < 0) || (iVar2 < iVar1)) {
          FUN_005a28c0(auStack_114,"Edge out of range: edge %d",iVar3);
          _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
          _DAT_01d71de4 = 0x553;
          core_main_c_FUN_004e4330(auStack_114);
        }
        param_2 = param_2 + 4;
        iVar3 = iVar3 + 1;
        *(byte *)(iVar1 + param_1) = (byte)uStack_14;
      } while (iVar3 < param_3);
    }
  }
  return;
}
