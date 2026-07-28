// Name: support_newmsg.cpp_decryptMessage_FUN_004ee3f0
// Address: 004ee3f0
// Address Range: [[004ee3f0, 004ee4d6]]
// Convention: __cdecl
// Signature: char * __cdecl support_newmsg_cpp_decryptMessage_FUN_004ee3f0(char *encrypted_msg)

#include "nocturne.h"

char * __cdecl support_newmsg_cpp_decryptMessage_FUN_004ee3f0(char *encrypted_msg)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  
  if (encrypted_msg[2] != '>') {
    bVar2 = *encrypted_msg;
    if ((byte)(encrypted_msg[2] ^ bVar2) != 0x3e) {
      PTR_01cc4800 = "..\\support\\newmsg.cpp";
      INT_01cc4804 = 0xca;
      core_main_c_FUN_004c8440("decryptMessage - invalid initial mask value!");
    }
    iVar4 = 2;
    pbVar3 = (byte *)(encrypted_msg + 2);
    while (bVar1 = *pbVar3, *pbVar3 = bVar1 ^ bVar2, (bVar1 ^ bVar2) != 0) {
      bVar2 = bVar2 * -0x43 + 1;
      pbVar3 = pbVar3 + 1;
      iVar4 = iVar4 + 1;
      if (1000 < iVar4) {
        PTR_01cc4800 = "..\\support\\newmsg.cpp";
        INT_01cc4804 = 0xd5;
        core_main_c_FUN_004c8440("decryptMessage - error decrypting text!");
      }
    }
    if (iVar4 < 0x17) {
      PTR_01cc4800 = "..\\support\\newmsg.cpp";
      INT_01cc4804 = 0xe8;
      core_main_c_FUN_004c8440("decryptMessage - premature null terminator!");
      return encrypted_msg + 0x17;
    }
  }
  return encrypted_msg + 0x17;
}
