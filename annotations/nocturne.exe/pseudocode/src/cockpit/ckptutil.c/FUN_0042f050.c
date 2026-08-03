// Name: cockpit_ckptutil.c_FUN_0042f050
// Address: 0042f050
// Address Range: [[0042f050, 0042f187]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_FUN_0042f050(int param_1,short *param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

void cockpit_ckptutil_c_FUN_0042f050(int param_1,short *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_114 [256];
  uint local_14;
  
  if (param_1 != 0) {
    iVar3 = 0;
    local_14 = 0xfb;
    if (0 < param_3) {
      iVar2 = param_4 * param_5 + -1;
      do {
        iVar1 = (int)*param_2 + param_2[1] * param_4;
        if ((iVar1 < 0) || (iVar2 < iVar1)) {
          _sprintf(local_114,"Edge out of range: edge %d");
          g_CHAR_PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
          g_INT_01cc4804 = 0x54b;
          core_main_c_FUN_004c8440(local_114);
        }
        *(byte *)(iVar1 + param_1) = (byte)local_14;
        iVar1 = (int)param_2[2] + param_4 * ((short)(param_2[3] * 2) >> 1);
        if ((iVar1 < 0) || (iVar2 < iVar1)) {
          _sprintf(local_114,"Edge out of range: edge %d");
          g_CHAR_PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
          g_INT_01cc4804 = 0x554;
          core_main_c_FUN_004c8440(local_114);
        }
        param_2 = param_2 + 4;
        iVar3 = iVar3 + 1;
        *(byte *)(iVar1 + param_1) = (byte)local_14;
      } while (iVar3 < param_3);
    }
  }
  return;
}
