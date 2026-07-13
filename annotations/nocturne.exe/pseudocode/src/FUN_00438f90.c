// Name: FUN_00438f90
// Address: 00438f90
// Address Range: [[00438f90, 00438ff5]]
// Convention: unknown
// Signature: undefined4 FUN_00438f90(undefined4 param_1,int *param_2,int *param_3,undefined4 param_4)

#include "nocturne.h"

uint FUN_00438f90(uint param_1,int *param_2,int *param_3,uint param_4)

{
  uint uVar1;
  byte local_14 [4];
  
  do {
    if (*param_3 < 1) {
LAB_00438fac:
      uVar1 = 0xffffffff;
    }
    else {
      FUN_00564c53(param_2,local_14);
      if (*(int *)((int)param_2 + *(int *)(*param_2 + 4) + 0x10) != 0) goto LAB_00438fac;
      *param_3 = *param_3 + -1;
      uVar1 = (uint)local_14[0];
    }
    if ((int)uVar1 < 0) {
      return 1;
    }
    FUN_00564ce5(param_4,uVar1 & 0xff);
  } while( true );
}
