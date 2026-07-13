// Name: FUN_00549240
// Address: 00549240
// Address Range: [[00549240, 00549274]]
// Convention: unknown
// Signature: bool FUN_00549240(undefined4 *param_1,int param_2)

#include "nocturne.h"

bool FUN_00549240(uint *param_1,int param_2)

{
  int iVar1;
  uint uStack_4;
  
  uStack_4 = (uint)(param_2 == 0);
  iVar1 = Ordinal_12(*param_1,0x8004667e,&uStack_4);
  return iVar1 == 0;
}
