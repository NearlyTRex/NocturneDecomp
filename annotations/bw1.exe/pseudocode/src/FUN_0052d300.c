// Name: FUN_0052d300
// Address: 0052d300
// Address Range: [[0052d300, 0052d35c]]
// Convention: unknown
// Signature: void FUN_0052d300(int param_1)

#include "nocturne.h"

void FUN_0052d300(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0059c970(param_1 + 0x178);
  uVar1 = DAT_006260e8;
  if (iVar2 == 0) {
    return;
  }
  DAT_006260e8 = 0;
  do {
    FUN_005acff0();
    iVar2 = 0;
    do {
      iVar3 = FUN_0059cb20(param_1 + 0x178,&DAT_01d7edb0,0x405,0);
      if (iVar3 < 1) {
        DAT_006260e8 = uVar1;
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x14);
  } while( true );
}
