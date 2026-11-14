// Name: crt_unknown.c_FUN_005b01c8
// Address: 005b01c8
// Address Range: [[005b01c8, 005b020b]]
// Convention: unknown
// Signature: undefined2 crt_unknown_c_FUN_005b01c8(void)

#include "nocturne.h"

ushort FUN_005b01c8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort in_DS;
  byte bVar4;
  
  bVar4 = 0;
  iVar2 = 8;
  do {
    iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005a7f3c_006079a0)();
    iVar3 = iVar2 + 8;
    *(uint *)(iVar1 + iVar2 + 0x58) = *(uint *)(&DAT_00607e88 + iVar2);
    *(uint *)(iVar1 + iVar2 + 0x5c + (uint)bVar4 * -8) =
         *(uint *)(iVar2 + 0x607e8c + (uint)bVar4 * -8);
    iVar2 = iVar3;
  } while (iVar3 != 0x68);
  DAT_00607df0 = &UNK_005aff1c;
  DAT_00607df4 = processSignal;
  return in_DS;
}
