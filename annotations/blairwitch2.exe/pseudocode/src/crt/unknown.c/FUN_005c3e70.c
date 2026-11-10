// Name: crt_unknown.c_FUN_005c3e70
// Address: 005c3e70
// Address Range: [[005c3e70, 005c3eb4]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c3e70(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_005c3e70(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  while( true ) {
    iVar1 = FUN_005c4260(param_1);
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = FUN_005c0dc0(param_1);
    iVar1 = FUN_005c5810(param_2,uVar2);
    if (iVar1 != 0) break;
    param_1 = FUN_005c0e00(param_1);
  }
  return param_1;
}
