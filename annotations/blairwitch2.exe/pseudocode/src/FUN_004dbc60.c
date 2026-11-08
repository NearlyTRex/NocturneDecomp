// Name: FUN_004dbc60
// Address: 004dbc60
// Address Range: [[004dbc60, 004dbd72]]
// Convention: unknown
// Signature: void FUN_004dbc60(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dbc60(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_004dd270(param_1,1);
  iVar5 = *(int *)(param_1 + 0x468) * 4 + param_1;
  if (*(int *)(iVar5 + 0x610) != 0) {
    iVar4 = 0;
    iVar1 = param_1;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        if (*(int *)(iVar5 + 0x610) == *(int *)(iVar1 + 0x14)) break;
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar4 < *(int *)(param_1 + 0x10));
    }
    iVar5 = 0;
    do {
      iVar4 = iVar4 + param_2;
      if (iVar4 < *(int *)(param_1 + 0x10)) {
        if (iVar4 < 0) {
          iVar4 = *(int *)(param_1 + 0x10) + -1;
        }
      }
      else {
        iVar4 = 0;
      }
      iVar1 = FUN_0040c8f0(*(uint *)(param_1 + 0x14 + iVar4 * 4),_DAT_02661f38);
      if (iVar1 != 0) {
        uVar2 = FUN_00408a50(*(uint *)(param_1 + 0x610 + *(int *)(param_1 + 0x468) * 4));
        uVar2 = FUN_00408a50(iVar1,uVar2);
        iVar3 = FUN_005b8c30(uVar2);
        if (iVar3 == 0) {
          iVar5 = *(int *)(*(int *)(param_1 + 0x468) * 4 + param_1 + 0x610);
          if (iVar1 == iVar5) {
            return;
          }
          if (iVar5 != 0) {
            (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x14))(iVar5,0x3dcccccd);
          }
          *(int *)(param_1 + 0x610 + *(int *)(param_1 + 0x468) * 4) = iVar1;
          FUN_004dd020(param_1,999);
          return;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 100);
  }
  return;
}
