// Name: FUN_0050c130
// Address: 0050c130
// Address Range: [[0050c130, 0050c18c]]
// Convention: unknown
// Signature: void FUN_0050c130(int param_1)

#include "nocturne.h"

void FUN_0050c130(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00579090(param_1 + 0x180);
  uVar1 = DAT_0061e990;
  if (iVar2 == 0) {
    return;
  }
  DAT_0061e990 = 0;
  do {
    FUN_00589560();
    iVar2 = 0;
    do {
      iVar3 = FUN_00579240(param_1 + 0x180,&DAT_01d62e48,0x405,0);
      if (iVar3 < 1) {
        DAT_0061e990 = uVar1;
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x14);
  } while( true );
}
