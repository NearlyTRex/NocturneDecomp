// Name: FUN_004aa490
// Address: 004aa490
// Address Range: [[004aa490, 004aa61d]]
// Convention: unknown
// Signature: void FUN_004aa490(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004aa490(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iStack_1c;
  int iStack_18;
  int *piStack_14;
  
  if (param_1[0x49a] != 0) {
    FUN_004aa620(param_1);
  }
  FUN_0040d6f0(param_1 + 0x1c,param_2,param_3,0xffff);
  if (*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) != 0) {
    iVar1 = FUN_00491aa0(0x01C6E360,"?HeroIsLost" + 1);
    if (iVar1 == 0) {
      iVar1 = FUN_004aa350(param_1,*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20,&iStack_1c,
                           &iStack_18);
      if (iVar1 < 0) goto LAB_004aa521;
      iVar1 = (iStack_18 + param_3) - _DAT_005fe3a4;
      iVar2 = (param_2 + iStack_1c) - _DAT_005fe3a0;
      uVar4 = 0x1d19c60;
    }
    else {
      iVar1 = param_1[0x1b] / 2 + param_3;
      iVar2 = param_1[0x1a] / 2 + param_2;
      uVar4 = 0x1d19c74;
    }
    FUN_0040d6f0(uVar4,iVar2,iVar1,0xffff);
  }
LAB_004aa521:
  iVar1 = 0;
  if (0 < param_1[0x17c]) {
    piStack_14 = param_1 + 0x17d;
    piVar3 = param_1;
    do {
      if (piVar3[0x1b1] != 0) {
        FUN_004b0a20(_DAT_01549abc,piStack_14 + iVar1 * 0x35 + 0x19,param_2 + piVar3[0x1af],
                     piVar3[0x1b0] + param_3,1,0xffffffff);
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 0x35;
    } while (iVar1 < param_1[0x17c]);
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_005a4ee0(&DAT_01d19cf0,*param_1 + 0x41,0x40);
  return;
}
