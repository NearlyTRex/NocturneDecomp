// Name: support_newmsg.cpp_decryptMessage_FUN_0050ff00
// Address: 0050ff00
// Address Range: [[0050ff00, 0050ffe6]]
// Convention: __cdecl
// Signature: char * __cdecl support_newmsg_cpp_decryptMessage_FUN_0050ff00(char *encrypted_msg)

#include "nocturne.h"

char * __cdecl support_newmsg_cpp_decryptMessage_FUN_0050ff00(char *encrypted_msg)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  
  if (encrypted_msg[2] != '>') {
    bVar2 = *encrypted_msg;
    if ((byte)(encrypted_msg[2] ^ bVar2) != 0x3e) {
      g_CurrentFilename = "..\\support\\newmsg.cpp";
      g_CurrentLineNumber = 226;
      core_main_c_displayErrorAndQuit_FUN_004e4500("decryptMessage - invalid initial mask value!");
    }
    iVar4 = 2;
    pbVar3 = (byte *)(encrypted_msg + 2);
    while (bVar1 = *pbVar3, *pbVar3 = bVar1 ^ bVar2, (bVar1 ^ bVar2) != 0) {
      bVar2 = bVar2 * -0x43 + 1;
      pbVar3 = pbVar3 + 1;
      iVar4 = iVar4 + 1;
      if (100000 < iVar4) {
        g_CurrentFilename = "..\\support\\newmsg.cpp";
        g_CurrentLineNumber = 237;
        core_main_c_displayErrorAndQuit_FUN_004e4500("decryptMessage - error decrypting text!");
      }
    }
    if (iVar4 < 0x17) {
      g_CurrentFilename = "..\\support\\newmsg.cpp";
      g_CurrentLineNumber = 256;
      core_main_c_displayErrorAndQuit_FUN_004e4500("decryptMessage - premature null terminator!");
      return encrypted_msg + 0x17;
    }
  }
  return encrypted_msg + 0x17;
}
