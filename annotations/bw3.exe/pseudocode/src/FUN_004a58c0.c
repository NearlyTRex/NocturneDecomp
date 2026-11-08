// Name: FUN_004a58c0
// Address: 004a58c0
// Address Range: [[004a58c0, 004a5924]]
// Convention: unknown
// Signature: int FUN_004a58c0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004a58c0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005dfe30);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  iVar1 = FUN_004a5930(param_1 + 0x614,0);
  iVar1 = FUN_0057aed0(iVar1 + -0x614,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005a30c4(iVar1);
  return iVar1;
}
