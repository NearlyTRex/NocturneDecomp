// Name: FUN_0056fa10
// Address: 0056fa10
// Address Range: [[0056fa10, 0056facd]]
// Convention: unknown
// Signature: int FUN_0056fa10(uint param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0056fa10(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1 >> 6;
  if (((uVar3 != 0) && (uVar3 < 0xffffff)) && ((param_1 & 0x3f) < 0x40)) {
    iVar1 = (param_1 & 0x3f) * 0x11c;
    iVar2 = iVar1 + 0x2c745ec;
    if (uVar3 == *(uint *)(&DAT_02c74650 + iVar1)) {
      if (param_2 != 0) {
        FUN_00575d20();
        if ((uVar3 != *(uint *)(&DAT_02c74650 + iVar1)) || (*(int *)(&DAT_02c74654 + iVar1) == 0)) {
          FUN_00573e70();
          return 0;
        }
        if (*(int *)(&DAT_02c7464c + iVar1) != 0) {
          if (_DAT_02c80650 == (int *)0x0) {
            FUN_00571d70(iVar2);
            FUN_00573e70();
            return 0;
          }
          if ((*(byte *)(iVar1 + 0x2c74707) & 0x40) != 0) {
            return iVar2;
          }
          iVar1 = (**(code **)(*_DAT_02c80650 + 0x54))(_DAT_02c80650,iVar2);
          if (iVar1 == 0) {
            FUN_00571d70(iVar2);
            FUN_00573e70();
            return 0;
          }
        }
      }
      return iVar2;
    }
  }
  return 0;
}
