// Name: FUN_0048b950
// Address: 0048b950
// Address Range: [[0048b950, 0048ba7c]]
// Convention: unknown
// Signature: int FUN_0048b950(char *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0048b950(char *param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    pcVar5 = "Must specify actor name";
    pcVar6 = &DAT_01c734b0;
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
    iVar2 = FUN_00495050(0x01C6E360,param_1);
  }
  else {
    iVar2 = FUN_005a3260(param_1,&DAT_005bdde3);
    if (iVar2 != 0) {
      iVar2 = FUN_004f6e90(0x01D81080,param_1);
      if (iVar2 == 0) {
        FUN_005a28c0(&DAT_01c734b0,"Actor \"%s\" does not exist.",param_1);
        return 0;
      }
      goto LAB_0048b9df;
    }
    if (*0x01DA62F0 != 0) {
      FUN_005a28c0(&DAT_01c734b0,"Can't use '$' actor specifier in multi-player");
      return 0;
    }
    iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  }
  if (iVar2 == 0) {
    return 0x0FFFFFFF;
  }
LAB_0048b9df:
  iVar3 = FUN_0040c810(iVar2,param_2);
  if (iVar3 != 0) {
    return iVar2;
  }
  if (*param_1 == '@') {
    return 0x0FFFFFFF;
  }
  uVar4 = FUN_00408870(iVar2,param_3);
  FUN_005a28c0(&DAT_01c734b0,"Actor \"%s\" is of type %s, this command requires an actor of type %s.",param_1,uVar4);
  return 0;
}
