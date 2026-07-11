// Name: FUN_004ee3f0
// Address: 004ee3f0
// Address Range: [[004ee3f0, 004ee4d6]]
// Convention: unknown
// Signature: byte * FUN_004ee3f0(byte *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_004ee3f0(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  
  if (param_1[2] != 0x3e) {
    bVar2 = *param_1;
    if ((param_1[2] ^ bVar2) != 0x3e) {
      _DAT_01cc4800 = "..\\support\\newmsg.cpp";
      _DAT_01cc4804 = 0xca;
      FUN_004c8440("decryptMessage - invalid initial mask value!");
    }
    iVar4 = 2;
    pbVar3 = param_1 + 2;
    while (bVar1 = *pbVar3, *pbVar3 = bVar1 ^ bVar2, (bVar1 ^ bVar2) != 0) {
      bVar2 = bVar2 * -0x43 + 1;
      pbVar3 = pbVar3 + 1;
      iVar4 = iVar4 + 1;
      if (1000 < iVar4) {
        _DAT_01cc4800 = "..\\support\\newmsg.cpp";
        _DAT_01cc4804 = 0xd5;
        FUN_004c8440("decryptMessage - error decrypting text!");
      }
    }
    if (iVar4 < 0x17) {
      _DAT_01cc4800 = "..\\support\\newmsg.cpp";
      _DAT_01cc4804 = 0xe8;
      FUN_004c8440("decryptMessage - premature null terminator!");
      return param_1 + 0x17;
    }
  }
  return param_1 + 0x17;
}
