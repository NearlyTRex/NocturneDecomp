// Name: FUN_0058fd70
// Address: 0058fd70
// Address Range: [[0058fd70, 0058fe6b]]
// Convention: unknown
// Signature: int FUN_0058fd70(undefined4 param_1)

#include "nocturne.h"

int FUN_0058fd70(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00488fd0(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005e7204;
  *(uint *)(iVar1 + 0x326c) = 0x3f000000;
  *(uint *)(iVar1 + 0x3270) = 0x3f800000;
  *(uint *)(iVar1 + 0xd054) = 0;
  *(uint *)(iVar1 + 0xd050) = 0;
  *(uint *)(iVar1 + 0x252c) = 0x3fc90fdb;
  *(uint *)(iVar1 + 0xfc) = 1;
  *(uint *)(iVar1 + 0xf8) = 0;
  *(uint *)(iVar1 + 0xd068) = 1;
  *(uint *)(iVar1 + 0xd06c) = 0x40000000;
  *(uint *)(iVar1 + 0xd070) = 0x4b;
  *(uint *)(iVar1 + 0xd08c) = 1;
  *(uint *)(iVar1 + 0xd078) = 0;
  *(uint *)(iVar1 + 0xd07c) = 0;
  *(uint *)(iVar1 + 0xd084) = 0;
  *(uint *)(iVar1 + 0xd088) = 0;
  *(uint *)(iVar1 + 0xd090) = 0;
  *(uint *)(iVar1 + 0xd080) = 0;
  *(uint *)(iVar1 + 0xd064) = *(uint *)(iVar1 + 0xd06c);
  *(uint *)(iVar1 + 0xd060) = 0x10000;
  *(uint *)(iVar1 + 0xd094) = 0;
  iVar3 = iVar1;
  do {
    iVar2 = iVar3 + 4;
    *(uint *)(iVar3 + 0xd0a4) = 0;
    iVar3 = iVar2;
  } while (iVar2 != iVar1 + 0x34);
  return iVar1;
}
