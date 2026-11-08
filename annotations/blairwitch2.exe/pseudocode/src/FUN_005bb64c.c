// Name: FUN_005bb64c
// Address: 005bb64c
// Address Range: [[005bb64c, 005bb678]]
// Convention: unknown
// Signature: void FUN_005bb64c(char *param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void FUN_005bb64c(char *param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  for (iVar2 = 0; (cVar1 = *param_1, param_1 = param_1 + 1, cVar1 != '\0' && (iVar2 != param_3));
      iVar2 = iVar2 + 1) {
  }
  return;
}
