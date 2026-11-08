// Name: FUN_004a8ed0
// Address: 004a8ed0
// Address Range: [[004a8ed0, 004a8f27]]
// Convention: unknown
// Signature: undefined4 FUN_004a8ed0(undefined4 param_1,char *param_2)

#include "nocturne.h"

uint FUN_004a8ed0(uint param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = *param_2;
  iVar3 = 0;
  while( true ) {
    if (cVar1 == '\0') {
      return 1;
    }
    iVar2 = FUN_004a8f30(param_1,param_2);
    if (iVar2 < 0) break;
    if (iVar2 < 1) {
      iVar3 = iVar3 + 1;
      if (1 < iVar3) {
        FUN_004a8ed0(param_1,"ERROR: item won't fit<br>");
        return 1;
      }
    }
    else {
      param_2 = param_2 + iVar2;
    }
    cVar1 = *param_2;
  }
  return 0;
}
