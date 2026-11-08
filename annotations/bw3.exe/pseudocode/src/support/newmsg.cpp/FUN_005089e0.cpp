// Name: FUN_005089e0
// Address: 005089e0
// Address Range: [[005089e0, 00508ac6]]
// Convention: unknown
// Signature: byte * FUN_005089e0(byte *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_005089e0(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  
  if (param_1[2] != 0x3e) {
    bVar2 = *param_1;
    if ((param_1[2] ^ bVar2) != 0x3e) {
      _DAT_01d71de0 = "..\\support\\newmsg.cpp";
      _DAT_01d71de4 = 0xe9;
      FUN_004e4330("decryptMessage - invalid initial mask value!");
    }
    iVar4 = 2;
    pbVar3 = param_1 + 2;
    while (bVar1 = *pbVar3, *pbVar3 = bVar1 ^ bVar2, (bVar1 ^ bVar2) != 0) {
      bVar2 = bVar2 * -0x43 + 1;
      pbVar3 = pbVar3 + 1;
      iVar4 = iVar4 + 1;
      if (100000 < iVar4) {
        _DAT_01d71de0 = "..\\support\\newmsg.cpp";
        _DAT_01d71de4 = 0xf4;
        FUN_004e4330("decryptMessage - error decrypting text!");
      }
    }
    if (iVar4 < 0x17) {
      _DAT_01d71de0 = "..\\support\\newmsg.cpp";
      _DAT_01d71de4 = 0x107;
      FUN_004e4330("decryptMessage - premature null terminator!");
      return param_1 + 0x17;
    }
  }
  return param_1 + 0x17;
}
