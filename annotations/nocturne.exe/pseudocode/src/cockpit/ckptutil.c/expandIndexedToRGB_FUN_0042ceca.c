// Name: cockpit_ckptutil.c_expandIndexedToRGB_FUN_0042ceca
// Address: 0042ceca
// Address Range: [[0042ceca, 0042cef7]]
// Convention: unknown
// Signature: undefined4 cockpit_ckptutil_c_expandIndexedToRGB_FUN_0042ceca(undefined4 *param_1,byte *param_2,int param_3)

#include "nocturne.h"

uint cockpit_ckptutil_c_expandIndexedToRGB_FUN_0042ceca(uint *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  uint in_EAX;
  int iVar3;
  
  do {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = *(uint *)(&DAT_01c00024 + (uint)bVar1 * 4);
    param_1 = param_1 + 1;
    iVar3 = param_3 + -1;
    bVar2 = 0 < param_3;
    param_3 = iVar3;
  } while (iVar3 != 0 && bVar2);
  return in_EAX;
}
