// Name: FUN_00539be0
// Address: 00539be0
// Address Range: [[00539be0, 00539c22]]
// Convention: unknown
// Signature: void FUN_00539be0(void)

#include "nocturne.h"

void FUN_00539be0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0x2093e24;
  do {
    iVar1 = iVar3 * 0xf0 + 0x2093d34;
    do {
      FUN_005386a0(iVar1);
      iVar1 = iVar1 + 0x28;
    } while (iVar1 != iVar2);
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0xf0;
  } while (iVar3 < 0xfa);
  return;
}
