// Name: FUN_00594780
// Address: 00594780
// Address Range: [[00594780, 005947ad]]
// Convention: unknown
// Signature: int FUN_00594780(undefined4 param_1)

#include "nocturne.h"

int FUN_00594780(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00531670(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_006065c4;
  FUN_00569f50(iVar1 + 0x158,"bassplayer.dfm");
  return iVar1;
}
