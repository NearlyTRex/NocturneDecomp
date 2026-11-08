// Name: FUN_00504c10
// Address: 00504c10
// Address Range: [[00504c10, 00504c6c]]
// Convention: unknown
// Signature: void FUN_00504c10(int param_1)

#include "nocturne.h"

void FUN_00504c10(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0056f960(param_1 + 0x180);
  uVar1 = DAT_0060728c;
  if (iVar2 == 0) {
    return;
  }
  DAT_0060728c = 0;
  do {
    FUN_0057a8a0();
    iVar2 = 0;
    do {
      iVar3 = FUN_0056fb10(param_1 + 0x180,&DAT_01dd4488,0x405,0);
      if (iVar3 < 1) {
        DAT_0060728c = uVar1;
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x14);
  } while( true );
}
