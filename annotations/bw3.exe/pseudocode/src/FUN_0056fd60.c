// Name: FUN_0056fd60
// Address: 0056fd60
// Address Range: [[0056fd60, 0056fd94]]
// Convention: unknown
// Signature: bool FUN_0056fd60(undefined4 *param_1,int param_2)

#include "nocturne.h"

bool FUN_0056fd60(uint *param_1,int param_2)

{
  int iVar1;
  uint local_4;
  
  local_4 = (uint)(param_2 == 0);
  iVar1 = Ordinal_12(*param_1,0x8004667e,&local_4);
  return iVar1 == 0;
}
