// Name: FUN_0059cd70
// Address: 0059cd70
// Address Range: [[0059cd70, 0059cda4]]
// Convention: unknown
// Signature: bool FUN_0059cd70(undefined4 *param_1,int param_2)

#include "nocturne.h"

bool FUN_0059cd70(uint *param_1,int param_2)

{
  int iVar1;
  uint local_4;
  
  local_4 = (uint)(param_2 == 0);
  iVar1 = Ordinal_12(*param_1,0x8004667e,&local_4);
  return iVar1 == 0;
}
