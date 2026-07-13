// Name: FUN_10001900
// Address: 10001900
// Address Range: [[10001900, 10001990]]
// Convention: unknown
// Signature: undefined4 FUN_10001900(undefined4 param_1)

#include "nocturne.h"

uint FUN_10001900(uint param_1)

{
  int iVar1;
  uint unaff_EDI;
  uint *puVar2;
  byte bVar3;
  uint uStack_304;
  int local_2fc [93];
  uint auStack_188 [98];
  
  bVar3 = 0;
  uStack_304 = 0;
  iVar1 = DirectDrawCreate(param_1);
  if (iVar1 == 0) {
    puVar2 = &uStack_304;
    for (iVar1 = 0x5f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    }
    uStack_304 = 0x17c;
    puVar2 = auStack_188;
    for (iVar1 = 0x5f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    }
    auStack_188[0] = 0x17c;
    iVar1 = (**(code **)(local_2fc[0] + 0x2c))(local_2fc,&uStack_304,auStack_188);
    if ((iVar1 == 0) && ((unaff_EDI & 1) != 0)) {
      return 1;
    }
  }
  if (&stack0x00000000 != (byte *)0x2fc) {
    (**(code **)(local_2fc[0] + 8))(local_2fc);
  }
  return 0;
}
