// Name: FUN_00571460
// Address: 00571460
// Address Range: [[00571460, 005714f7]]
// Convention: unknown
// Signature: void FUN_00571460(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00571460(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = FUN_005030c0(param_1 + 0x2b4,&param_2);
    if (uVar2 < 100) {
      FUN_0042aa00(param_1,uVar2);
    }
    else {
      if (uVar2 < 0x65) {
        FUN_00571500(param_1,_DAT_0264bf7c);
        iVar1 = *(int *)(param_1 + 0x25644);
      }
      else {
        if (uVar2 != 0x65) {
          FUN_0042aa00(param_1,uVar2);
          goto LAB_005714ae;
        }
        FUN_00571500(param_1,_DAT_0264bf80);
        iVar1 = *(int *)(param_1 + 0x25644);
      }
      *(uint *)(param_1 + 0x25644) = (uint)(iVar1 == 0);
    }
LAB_005714ae:
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
