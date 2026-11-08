// Name: FUN_00543610
// Address: 00543610
// Address Range: [[00543610, 005436ce]]
// Convention: unknown
// Signature: undefined4 FUN_00543610(int param_1,int param_2,undefined4 *param_3)

#include "nocturne.h"

uint FUN_00543610(int param_1,int param_2,uint *param_3)

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
  uVar2 = FUN_00569eb0(param_1 + 0x158);
  while( true ) {
    local_10 = -1;
    FUN_005c2cac(param_2," %[^ \t),]%n",local_74,&local_10);
    if (local_10 < 1) {
      return 1;
    }
    param_2 = param_2 + local_10;
    iVar3 = FUN_00565780(uVar2,local_74,0);
    if (iVar3 < 0) break;
    param_3[iVar3] = 1;
  }
  uVar2 = FUN_0054b9a0(uVar2,local_74);
  FUN_005bfb40(&DAT_01e810b0,"Character %s model %s does not have a part '%s'",param_1,uVar2);
  return 0;
}
