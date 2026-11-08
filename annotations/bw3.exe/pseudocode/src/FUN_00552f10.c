// Name: FUN_00552f10
// Address: 00552f10
// Address Range: [[00552f10, 00552fcd]]
// Convention: unknown
// Signature: int FUN_00552f10(uint param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00552f10(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1 >> 6;
  if (((uVar3 != 0) && (uVar3 < 0xffffff)) && ((param_1 & 0x3f) < 0x40)) {
    iVar1 = (param_1 & 0x3f) * 0x11c;
    iVar2 = iVar1 + 0x2ce721c;
    if (uVar3 == *(uint *)(&DAT_02ce7280 + iVar1)) {
      if (param_2 != 0) {
        FUN_00558e90();
        if ((uVar3 != *(uint *)(&DAT_02ce7280 + iVar1)) || (*(int *)(&DAT_02ce7284 + iVar1) == 0)) {
          FUN_00556fd0();
          return 0;
        }
        if (*(int *)(&DAT_02ce727c + iVar1) != 0) {
          if (_DAT_02cf3280 == (int *)0x0) {
            FUN_00555270(iVar2);
            FUN_00556fd0();
            return 0;
          }
          if ((*(byte *)(iVar1 + 0x2ce7337) & 0x40) != 0) {
            return iVar2;
          }
          iVar1 = (**(code **)(*_DAT_02cf3280 + 0x54))(_DAT_02cf3280,iVar2);
          if (iVar1 == 0) {
            FUN_00555270(iVar2);
            FUN_00556fd0();
            return 0;
          }
        }
      }
      return iVar2;
    }
  }
  return 0;
}
