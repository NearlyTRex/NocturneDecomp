// Name: FUN_00521290
// Address: 00521290
// Address Range: [[00521290, 0052140d]]
// Convention: unknown
// Signature: int FUN_00521290(char *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00521290(char *param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  _DAT_01e6590c = 0;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    pcVar5 = "Must specify actor name";
    pcVar6 = &DAT_01e65100;
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
    iVar2 = FUN_00520fd0(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    _DAT_01e6590c = 1;
    iVar2 = FUN_00491860(0x01C38BC0,param_1);
    if (iVar2 == 0) {
      FUN_005b7790(&DAT_01e65100,"Actor variable %s not defined, or doesn't reference an existing actor",param_1);
      return 0;
    }
  }
  else {
    iVar2 = FUN_005b8130(param_1,&DAT_005e2d27);
    if (iVar2 == 0) {
      if (*0x01D34CB0 != 0) {
        FUN_005b7790(&DAT_01e65100,"Can't use '$' actor specifier in multi-player");
        return 0;
      }
      iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      if (iVar2 == 0) {
        _DAT_01e6590c = 1;
        FUN_005b7790(&DAT_01e65100,"Hero doesn't exist!!?!");
        return 0;
      }
    }
    else {
      iVar2 = FUN_004fc740(0x01D182F0,param_1);
      if (iVar2 == 0) {
        FUN_005b7790(&DAT_01e65100,"Actor \"%s\" does not exist.",param_1);
        return 0;
      }
    }
  }
  iVar3 = FUN_0040c8c0(iVar2,param_2);
  if (iVar3 == 0) {
    uVar4 = FUN_00408a50(iVar2,param_3);
    FUN_005b7790(&DAT_01e65100,"Actor \"%s\" is of type %s, this command requires an actor of type %s.",param_1,uVar4);
    return 0;
  }
  return iVar2;
}
