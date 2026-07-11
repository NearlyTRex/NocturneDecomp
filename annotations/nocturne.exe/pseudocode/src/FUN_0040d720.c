// Name: FUN_0040d720
// Address: 0040d720
// Address Range: [[0040d720, 0040d7d1]]
// Convention: unknown
// Signature: undefined4 FUN_0040d720(undefined4 param_1,undefined4 *param_2)

#include "nocturne.h"

uint FUN_0040d720(uint param_1,uint *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  while( true ) {
    while( true ) {
      while (((&DAT_005c168c)[(byte)(*(char *)*param_2 + 1)] & 2) != 0) {
        *param_2 = (char *)*param_2 + 1;
      }
      pcVar2 = (char *)*param_2;
      cVar1 = *pcVar2;
      if ((cVar1 == '\0') || (cVar1 == ')')) {
        return uVar4;
      }
      if (cVar1 == '|') break;
      if (cVar1 == '&') {
        *param_2 = pcVar2 + 1;
        if (pcVar2[1] == '&') {
          *param_2 = pcVar2 + 2;
        }
        iVar3 = FUN_0040d600(param_1,param_2);
        if (iVar3 < 0) {
          return 0xffffffff;
        }
        if (iVar3 == 0) {
          uVar4 = 0;
        }
      }
      else {
        iVar3 = FUN_0040d600(param_1,param_2);
        if (iVar3 < 0) {
          return 0xffffffff;
        }
        if (0 < iVar3) {
          uVar4 = 1;
        }
      }
    }
    *param_2 = pcVar2 + 1;
    if (pcVar2[1] == '|') {
      *param_2 = pcVar2 + 2;
    }
    iVar3 = FUN_0040d600(param_1,param_2);
    if (iVar3 < 0) break;
    if (0 < iVar3) {
      uVar4 = 1;
    }
  }
  return 0xffffffff;
}
