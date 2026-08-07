// Name: crt_unknown.c_FUN_00567928
// Address: 00567928
// Address Range: [[00567928, 00567963]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_00567928(int param_1)

#include "nocturne.h"

int FUN_00567928(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    uVar1 = FUN_00567540(param_1);
    if ((g_CharacterClassificationTable[(byte)((char)uVar1 + 1)] & 2) == 0) break;
    iVar2 = iVar2 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
    FUN_0056754c(uVar1,param_1);
  }
  return iVar2;
}
