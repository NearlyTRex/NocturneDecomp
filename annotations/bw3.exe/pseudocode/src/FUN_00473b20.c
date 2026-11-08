// Name: FUN_00473b20
// Address: 00473b20
// Address Range: [[00473b20, 00473b5d]]
// Convention: unknown
// Signature: undefined4 FUN_00473b20(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00473b20(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_004659c0(&DAT_005bca04,param_2,&DAT_005bca01);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00473940(param_1,iVar1);
  FUN_005a3a90(iVar1);
  return 1;
}
