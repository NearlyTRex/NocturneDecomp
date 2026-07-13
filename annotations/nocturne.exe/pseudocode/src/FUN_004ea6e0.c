// Name: FUN_004ea6e0
// Address: 004ea6e0
// Address Range: [[004ea6e0, 004ea73c]]
// Convention: unknown
// Signature: void FUN_004ea6e0(int param_1)

#include "nocturne.h"

void FUN_004ea6e0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00548f60(param_1 + 0x170);
  uVar1 = DAT_005c1664;
  if (iVar2 == 0) {
    return;
  }
  DAT_005c1664 = 0;
  do {
    FUN_00553910();
    iVar2 = 0;
    do {
      iVar3 = FUN_00549010(param_1 + 0x170,&DAT_01d16408,0x405,0);
      if (iVar3 < 1) {
        DAT_005c1664 = uVar1;
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x14);
  } while( true );
}
