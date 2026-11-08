// Name: FUN_00521500
// Address: 00521500
// Address Range: [[00521500, 005215bb]]
// Convention: unknown
// Signature: undefined4 FUN_00521500(int param_1,int param_2,undefined4 *param_3)

#include "nocturne.h"

uint FUN_00521500(int param_1,int param_2,uint *param_3)

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
  } while (puVar1 != param_3 + 0x1e);
  uVar2 = FUN_00547810(param_1 + 0x2b4);
  while( true ) {
    local_10 = -1;
    FUN_005ba8cc(param_2," %[^ \t),]%n",local_74,&local_10);
    if (local_10 < 1) {
      return 1;
    }
    param_2 = param_2 + local_10;
    iVar3 = FUN_00543100(uVar2,local_74,0);
    if (iVar3 < 0) break;
    param_3[iVar3] = 1;
  }
  uVar2 = FUN_0052a690(uVar2,local_74);
  FUN_005b7790(&DAT_01e65100,"Character %s model %s does not have a part '%s'",param_1,uVar2);
  return 0;
}
