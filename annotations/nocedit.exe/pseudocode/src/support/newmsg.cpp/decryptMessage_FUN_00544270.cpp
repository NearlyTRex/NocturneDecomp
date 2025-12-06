// Name: support_newmsg.cpp_decryptMessage_FUN_00544270
// Address: 00544270
// Address Range: [[00544270, 00544356]]
// Convention: __cdecl
// Signature: char * support_newmsg.cpp_decryptMessage_FUN_00544270(SEncryptedMessage * encrypted_msg)

#include "nocturne.h"

char * __cdecl support_newmsg_cpp_decryptMessage_FUN_00544270(SEncryptedMessage *encrypted_msg)

{
  uchar *puVar2;
  int iVar3;
  byte unaff_DI;
  byte bVar1;
  
  if (encrypted_msg->encrypted_data[0] != '>') {
    if ((byte)(encrypted_msg->encrypted_data[0] ^ (byte)encrypted_msg->key) != 0x3e) {
      g_CurrentFilename = "..\\support\\newmsg.cpp";
      g_CurrentLineNumber = 0xcc;
      core_main_c_displayErrorAndQuit_FUN_00506f10("decryptMessage - invalid initial mask value!");
    }
    iVar3 = 2;
    puVar2 = encrypted_msg->encrypted_data;
    while( true ) {
      bVar1 = *puVar2;
      *puVar2 = bVar1 ^ unaff_DI;
      if ((bVar1 ^ unaff_DI) == 0) break;
      unaff_DI = unaff_DI * -0x43 + 1;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + 1;
      if (100000 < iVar3) {
        g_CurrentFilename = "..\\support\\newmsg.cpp";
        g_CurrentLineNumber = 0xd7;
        core_main_c_displayErrorAndQuit_FUN_00506f10("decryptMessage - error decrypting text!");
      }
    }
    if (iVar3 < 0x17) {
      g_CurrentFilename = "..\\support\\newmsg.cpp";
      g_CurrentLineNumber = 0xea;
      core_main_c_displayErrorAndQuit_FUN_00506f10("decryptMessage - premature null terminator!");
      return encrypted_msg->message;
    }
  }
  return encrypted_msg->message;
}
