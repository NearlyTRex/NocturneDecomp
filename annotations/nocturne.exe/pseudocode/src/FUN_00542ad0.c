// Name: FUN_00542ad0
// Address: 00542ad0
// Address Range: [[00542ad0, 00542b67]]
// Convention: unknown
// Signature: void FUN_00542ad0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00542ad0(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = FUN_004e11c0(param_1 + 0x150,&param_2);
    if (uVar2 < 100) {
      FUN_0042add0(param_1,uVar2);
    }
    else {
      if (uVar2 < 0x65) {
        FUN_00542b70(param_1,_DAT_02dca09c);
        iVar1 = *(int *)(param_1 + 0x1fa40);
      }
      else {
        if (uVar2 != 0x65) {
          FUN_0042add0(param_1,uVar2);
          goto LAB_00542b1e;
        }
        FUN_00542b70(param_1,_DAT_02dca0a0);
        iVar1 = *(int *)(param_1 + 0x1fa40);
      }
      *(uint *)(param_1 + 0x1fa40) = (uint)(iVar1 == 0);
    }
LAB_00542b1e:
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
