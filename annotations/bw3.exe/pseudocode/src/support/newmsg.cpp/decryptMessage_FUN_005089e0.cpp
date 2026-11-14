// Name: support_newmsg.cpp_decryptMessage_FUN_005089e0
// Address: 005089e0
// Address Range: [[005089e0, 00508ac6]]
// Convention: __cdecl
// Signature: char * __cdecl support_newmsg_cpp_decryptMessage_FUN_005089e0(char *encrypted_msg)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl support_newmsg_cpp_decryptMessage_FUN_005089e0(char *encrypted_msg)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  
  if (encrypted_msg[2] != '>') {
    bVar2 = *encrypted_msg;
    if ((byte)(encrypted_msg[2] ^ bVar2) != 0x3e) {
      _DAT_01d71de0 = "..\\support\\newmsg.cpp";
      _DAT_01d71de4 = 0xe9;
      core_main_c_FUN_004e4330("decryptMessage - invalid initial mask value!");
    }
    iVar4 = 2;
    pbVar3 = (byte *)(encrypted_msg + 2);
    while (bVar1 = *pbVar3, *pbVar3 = bVar1 ^ bVar2, (bVar1 ^ bVar2) != 0) {
      bVar2 = bVar2 * -0x43 + 1;
      pbVar3 = pbVar3 + 1;
      iVar4 = iVar4 + 1;
      if (100000 < iVar4) {
        _DAT_01d71de0 = "..\\support\\newmsg.cpp";
        _DAT_01d71de4 = 0xf4;
        core_main_c_FUN_004e4330("decryptMessage - error decrypting text!");
      }
    }
    if (iVar4 < 0x17) {
      _DAT_01d71de0 = "..\\support\\newmsg.cpp";
      _DAT_01d71de4 = 0x107;
      core_main_c_FUN_004e4330("decryptMessage - premature null terminator!");
      return encrypted_msg + 0x17;
    }
  }
  return encrypted_msg + 0x17;
}
