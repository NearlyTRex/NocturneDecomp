// Name: FUN_00513610
// Address: 00513610
// Address Range: [[00513610, 0051366e]]
// Convention: unknown
// Signature: void FUN_00513610(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00513610(uint *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00456a60(&DAT_00590c08,param_2,&DAT_00590c05);
  if (iVar1 == 0) {
    FUN_00513720(param_1);
    FUN_00513670(param_1,param_2);
    return;
  }
  FUN_005636d0(&DAT_020875f8,0x3000,*param_1,iVar1);
  FUN_00563380(iVar1);
  return;
}
