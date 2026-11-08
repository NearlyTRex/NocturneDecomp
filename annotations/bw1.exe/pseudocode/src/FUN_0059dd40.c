// Name: FUN_0059dd40
// Address: 0059dd40
// Address Range: [[0059dd40, 0059dd90]]
// Convention: unknown
// Signature: undefined1 * FUN_0059dd40(int param_1)

#include "nocturne.h"

byte * FUN_0059dd40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005c0357(param_1 + 0x38c,0xc,&DAT_00607310);
  FUN_005bfb70(iVar1 + -0x288,0,0x2b8);
  *(uint *)(iVar1 + 0x30) = 0;
  *(uint *)(iVar1 + 0x34) = 0;
  *(byte *)(iVar1 + -0x38c) = 0;
  return (byte *)(iVar1 + -0x38c);
}
