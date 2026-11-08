// Name: FUN_00540be0
// Address: 00540be0
// Address Range: [[00540be0, 00540c3e]]
// Convention: unknown
// Signature: void FUN_00540be0(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00540be0(uint *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_004659c0(&DAT_005d0cc1,param_2,&DAT_005d0cbe);
  if (iVar1 == 0) {
    FUN_00540cf0(param_1);
    FUN_00540c40(param_1,param_2);
    return;
  }
  FUN_005a3890(&DAT_0212551c,0x3000,*param_1,iVar1);
  FUN_005a3a90(iVar1);
  return;
}
