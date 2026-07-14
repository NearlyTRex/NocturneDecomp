// Name: FUN_1000e2d0
// Address: 1000e2d0
// Address Range: [[1000e2d0, 1000e307]]
// Convention: unknown
// Signature: uint FUN_1000e2d0(char *param_1,char *param_2,int param_3)

#include "nocturne.h"

uint FUN_1000e2d0(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  uVar4 = 0;
  iVar3 = param_3;
  pcVar5 = param_1;
  if (param_3 != 0) {
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    param_3 = param_3 - iVar3;
    do {
      pcVar5 = param_2;
      pcVar6 = param_1;
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      pcVar6 = param_1 + 1;
      pcVar5 = param_2 + 1;
      cVar2 = *param_1;
      cVar1 = *param_2;
      param_2 = pcVar5;
      param_1 = pcVar6;
    } while (cVar1 == cVar2);
    uVar4 = 0;
    if ((byte)pcVar5[-1] <= (byte)pcVar6[-1]) {
      if (pcVar5[-1] == pcVar6[-1]) {
        return 0;
      }
      uVar4 = 0xfffffffe;
    }
    uVar4 = ~uVar4;
  }
  return uVar4;
}
