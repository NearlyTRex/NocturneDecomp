// Name: FUN_00570d30
// Address: 00570d30
// Address Range: [[00570d30, 00570d80]]
// Convention: unknown
// Signature: undefined1 * FUN_00570d30(int param_1)

#include "nocturne.h"

byte * FUN_00570d30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005a30d7(param_1 + 0x38c,0xc,&DAT_005e5a10);
  FUN_005a28f0(iVar1 + -0x288,0,0x2b8);
  *(uint *)(iVar1 + 0x30) = 0;
  *(uint *)(iVar1 + 0x34) = 0;
  *(byte *)(iVar1 + -0x38c) = 0;
  return (byte *)(iVar1 + -0x38c);
}
