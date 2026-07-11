// Name: FUN_00409d30
// Address: 00409d30
// Address Range: [[00409d30, 00409e99]]
// Convention: unknown
// Signature: undefined1 * FUN_00409d30(int param_1)

#include "nocturne.h"

byte * FUN_00409d30(int param_1)

{
  byte *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar3 = FUN_00409cf0(param_1 + 0x128);
  puVar1 = (byte *)(iVar3 + -0x128);
  *(byte ***)(iVar3 + 0x24) = &PTR_FUN_005992d4;
  *puVar1 = 0;
  *(uint *)(iVar3 + 0x1c) = 0;
  *(uint *)(iVar3 + 0x20) = 0;
  *(uint *)(iVar3 + -0x100) = 0;
  *(uint *)(iVar3 + -0x104) = *(uint *)(iVar3 + -0x100);
  *(uint *)(iVar3 + -0x108) = *(uint *)(iVar3 + -0x104);
  *(uint *)(iVar3 + -0xfc) = 0;
  pcVar4 = &DAT_0057757d;
  *(uint *)(iVar3 + -0xf0) = 0;
  *(uint *)(iVar3 + -0xf4) = *(uint *)(iVar3 + -0xf0);
  *(uint *)(iVar3 + -0xf8) = *(uint *)(iVar3 + -0xf4);
  FUN_0040a000(puVar1);
  pcVar5 = (char *)(iVar3 + -0xb0);
  *(uint *)(iVar3 + -0xb4) = 0x3f800000;
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  *(uint *)(iVar3 + -0xb8) = 0;
  *(uint *)(iVar3 + -0x4c) = 0;
  *(uint *)(iVar3 + -0x40) = 0;
  *(uint *)(iVar3 + -0x44) = *(uint *)(iVar3 + -0x40);
  *(uint *)(iVar3 + -0x48) = *(uint *)(iVar3 + -0x44);
  *(uint *)(iVar3 + -0x34) = 0;
  *(uint *)(iVar3 + -0x38) = *(uint *)(iVar3 + -0x34);
  *(uint *)(iVar3 + -0x3c) = *(uint *)(iVar3 + -0x38);
  *(uint *)(iVar3 + -0x20) = 0x10000;
  *(uint *)(iVar3 + -0x1c) = 0x10000;
  *(uint *)(iVar3 + -0x18) = 0x10000;
  *(uint *)(iVar3 + -0x30) = 1;
  *(uint *)(iVar3 + -0x2c) = 0;
  *(uint *)(iVar3 + -0x14) = 0;
  *(uint *)(iVar3 + -0x28) = 0;
  *(uint *)(iVar3 + -0x24) = 0;
  pcVar4 = &DAT_00577582;
  *(uint *)(iVar3 + -0xc4) = 100;
  pcVar5 = (char *)(iVar3 + -0xc);
  *(byte **)(iVar3 + -0xc0) = &DAT_0078a123;
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') {
      return puVar1;
    }
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  return puVar1;
}
