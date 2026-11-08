// Name: FUN_005433c0
// Address: 005433c0
// Address Range: [[005433c0, 0054353d]]
// Convention: unknown
// Signature: int FUN_005433c0(char *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005433c0(char *param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  _DAT_01e818bc = 0;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    pcVar5 = "Must specify actor name";
    pcVar6 = &DAT_01e810b0;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') {
        return 0;
      }
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    return 0;
  }
  if (*param_1 == '@') {
    iVar2 = FUN_00543100(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    _DAT_01e818bc = 1;
    iVar2 = FUN_004aa1d0(0x01C51D80,param_1);
    if (iVar2 == 0) {
      FUN_005bfb40(&DAT_01e810b0,"Actor variable %s not defined, or doesn't reference an existing actor",param_1);
      return 0;
    }
  }
  else {
    iVar2 = FUN_005c04e0(param_1,&DAT_005ee033);
    if (iVar2 == 0) {
      if (*0x01D51C20 != 0) {
        FUN_005bfb40(&DAT_01e810b0,"Can't use '$' actor specifier in multi-player");
        return 0;
      }
      iVar2 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      if (iVar2 == 0) {
        _DAT_01e818bc = 1;
        FUN_005bfb40(&DAT_01e810b0,"Hero doesn't exist!!?!");
        return 0;
      }
    }
    else {
      iVar2 = FUN_0051b6c0(0x01D2C900,param_1);
      if (iVar2 == 0) {
        FUN_005bfb40(&DAT_01e810b0,"Actor \"%s\" does not exist.",param_1);
        return 0;
      }
    }
  }
  iVar3 = FUN_0040c5d0(iVar2,param_2);
  if (iVar3 == 0) {
    uVar4 = FUN_00408830(iVar2,param_3);
    FUN_005bfb40(&DAT_01e810b0,"Actor \"%s\" is of type %s, this command requires an actor of type %s.",param_1,uVar4);
    return 0;
  }
  return iVar2;
}
