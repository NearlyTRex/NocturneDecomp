// Name: FUN_00411140
// Address: 00411140
// Address Range: [[00411140, 004111a4]]
// Convention: unknown
// Signature: int FUN_00411140(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00411140(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_005fbf90);
    FUN_005c0336(uVar2);
    return param_1;
  }
  iVar1 = FUN_00447d30(param_1 + 0x178,0);
  iVar1 = FUN_00408730(iVar1 + -0x178,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005c0344(iVar1);
  return iVar1;
}
