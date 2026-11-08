// Name: FUN_00528c20
// Address: 00528c20
// Address Range: [[00528c20, 00528cde]]
// Convention: unknown
// Signature: undefined4 FUN_00528c20(int param_1,int param_2,undefined4 *param_3)

#include "nocturne.h"

uint FUN_00528c20(int param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  byte local_74 [100];
  int local_10;
  
  puVar1 = param_3;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 != param_3 + 0x3c);
  uVar2 = FUN_0054ea40(param_1 + 0x158);
  while( true ) {
    local_10 = -1;
    FUN_005a5b9c(param_2," %[^ \t),]%n",local_74,&local_10);
    if (local_10 < 1) {
      return 1;
    }
    param_2 = param_2 + local_10;
    iVar3 = FUN_0054a310(uVar2,local_74,0);
    if (iVar3 < 0) break;
    param_3[iVar3] = 1;
  }
  uVar2 = FUN_00531090(uVar2,local_74);
  FUN_005a28c0(&DAT_01ed6810,"Character %s model %s does not have a part '%s'",param_1,uVar2);
  return 0;
}
