// Name: FUN_0054d3a0
// Address: 0054d3a0
// Address Range: [[0054d3a0, 0054d45d]]
// Convention: unknown
// Signature: int FUN_0054d3a0(uint param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0054d3a0(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1 >> 6;
  if (((uVar3 != 0) && (uVar3 < 0xffffff)) && ((param_1 & 0x3f) < 0x40)) {
    iVar1 = (param_1 & 0x3f) * 0x11c;
    iVar2 = iVar1 + 0x263cf1c;
    if (uVar3 == *(uint *)(&DAT_0263cf80 + iVar1)) {
      if (param_2 != 0) {
        FUN_005532f0();
        if ((uVar3 != *(uint *)(&DAT_0263cf80 + iVar1)) || (*(int *)(&DAT_0263cf84 + iVar1) == 0)) {
          FUN_00551440();
          return 0;
        }
        if (*(int *)(&DAT_0263cf7c + iVar1) != 0) {
          if (_DAT_02648e80 == (int *)0x0) {
            FUN_0054f700(iVar2);
            FUN_00551440();
            return 0;
          }
          if ((*(byte *)(iVar1 + 0x263d037) & 0x40) != 0) {
            return iVar2;
          }
          iVar1 = (**(code **)(*_DAT_02648e80 + 0x54))(_DAT_02648e80,iVar2);
          if (iVar1 == 0) {
            FUN_0054f700(iVar2);
            FUN_00551440();
            return 0;
          }
        }
      }
      return iVar2;
    }
  }
  return 0;
}
