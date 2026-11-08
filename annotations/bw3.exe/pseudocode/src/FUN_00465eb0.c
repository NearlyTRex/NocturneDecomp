// Name: FUN_00465eb0
// Address: 00465eb0
// Address Range: [[00465eb0, 00465f68]]
// Convention: unknown
// Signature: void FUN_00465eb0(undefined4 param_1,undefined4 param_2,char *param_3)

#include "nocturne.h"

void FUN_00465eb0(uint param_1,uint param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  byte auStack_308 [256];
  byte auStack_208 [256];
  byte auStack_108 [256];
  
  bVar6 = 0;
  FUN_00465e50(param_1,param_2,auStack_208,auStack_108,auStack_308);
  FUN_00465e80(param_3,0,auStack_208,auStack_108,auStack_308);
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    uVar2 = 0xffffffff;
    pcVar4 = param_3;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
    } while (cVar1 != '\0');
    if ((param_3[~uVar2 - 2] != '\\') && (param_3[~uVar2 - 2] != '/')) {
      pcVar4 = (char *)0x5bc042;
      iVar3 = -1;
      do {
        pcVar5 = param_3;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar5 = param_3 + (uint)bVar6 * -2 + 1;
        cVar1 = *param_3;
        param_3 = pcVar5;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') {
          return;
        }
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      return;
    }
  }
  return;
}
