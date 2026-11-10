// Name: crt_unknown.c_FUN_005c5138
// Address: 005c5138
// Address Range: [[005c5138, 005c517b]]
// Convention: unknown
// Signature: undefined2 crt_unknown_c_FUN_005c5138(void)

#include "nocturne.h"

ushort FUN_005c5138(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort in_DS;
  byte bVar4;
  
  bVar4 = 0;
  iVar2 = 8;
  do {
    iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005bcdfc_0061f2a4)();
    iVar3 = iVar2 + 8;
    *(uint *)(iVar1 + iVar2 + 0x58) = *(uint *)(&DAT_0061f764 + iVar2);
    *(uint *)(iVar1 + iVar2 + 0x5c + (uint)bVar4 * -8) =
         *(uint *)(iVar2 + 0x61f768 + (uint)bVar4 * -8);
    iVar2 = iVar3;
  } while (iVar3 != 0x68);
  DAT_0061f6cc = &UNK_005c4e8c;
  DAT_0061f6d0 = processSignal;
  return in_DS;
}
