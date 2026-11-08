// Name: FUN_00436b00
// Address: 00436b00
// Address Range: [[00436b00, 00436bda]]
// Convention: unknown
// Signature: int FUN_00436b00(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00436b00(uint param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = FUN_00487db0(param_1);
  iVar4 = FUN_005b7f5f(iVar4 + 0x10c18,0x18,0x5f39a0);
  pcVar5 = (char *)0x5cdc55;
  *(uint *)(iVar4 + -0x10968) = 0x5f46b4;
  FUN_005478b0(iVar4 + -0x10964,"construct1.dfm");
  uVar2 = _DAT_005f46a0;
  pcVar6 = (char *)(iVar4 + -0x120);
  *(uint *)(iVar4 + -0xd7e8) = 0x3f19999a;
  uVar3 = _DAT_005f46a4;
  *(uint *)(iVar4 + -0xd7e4) = 0x40000000;
  *(uint *)(iVar4 + -0xd7e0) = uVar2;
  *(uint *)(iVar4 + -0xd7dc) = uVar3;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar5 = (char *)0x5cdc5a;
  pcVar6 = (char *)(iVar4 + -0x70);
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar4 + 0x6c0) = 0;
  *(uint *)(iVar4 + -0xc) = 0x41000000;
  return iVar4 + -0x10c18;
}
