// Name: crt_unknown.c_FUN_005cd438
// Address: 005cd438
// Address Range: [[005cd438, 005cd47b]]
// Convention: unknown
// Signature: undefined2 crt_unknown_c_FUN_005cd438(void)

#include "nocturne.h"

ushort FUN_005cd438(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort in_DS;
  byte bVar4;
  
  bVar4 = 0;
  iVar2 = 8;
  do {
    iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005c50cc_006265fc)();
    iVar3 = iVar2 + 8;
    *(uint *)(iVar1 + iVar2 + 0x58) = *(uint *)(&DAT_00626ae4 + iVar2);
    *(uint *)(iVar1 + iVar2 + 0x5c + (uint)bVar4 * -8) =
         *(uint *)(iVar2 + 0x626ae8 + (uint)bVar4 * -8);
    iVar2 = iVar3;
  } while (iVar3 != 0x68);
  DAT_00626a4c = &UNK_005cd18c;
  DAT_00626a50 = processSignal;
  return in_DS;
}
