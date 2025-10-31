// Name: support_newmsg.cpp_decryptMessage_FUN_00544270
// Address: 00544270
// Address Range: [[00544270, 00544356]]
// Convention: __cdecl
// Signature: char * support_newmsg.cpp_decryptMessage_FUN_00544270(SEncryptedMessage * encrypted_msg)
// Cross-references:
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004de9a0 [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 00507540 [UNCONDITIONAL_CALL]
//   core_main.c_showLicenseAgreement_FUN_005070f0 (005070f0) at 00507155 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_support_newmsg_cpp_0063e20d
//   TerminatedCString s_decryptMessage_invalid_i_0063e223
//   TerminatedCString s_support_newmsg_cpp_0063e250
//   TerminatedCString s_decryptMessage_error_dec_0063e266
//   TerminatedCString s_support_newmsg_cpp_0063e28e
//   TerminatedCString s_decryptMessage_premature_0063e2a4
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

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


// Assembly code:
// 00544270: PUSH EBX
//   Label: support_newmsg.cpp_decryptMessage_FUN_00544270
// 00544271: PUSH ESI
// 00544272: PUSH EDI
// 00544273: SUB ESP,0x4
// 00544276: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054427a: CMP byte ptr [EDI + 0x2],0x3e
// 0054427e: JZ 0x005442bd
//   XREF to: 005442bd (CONDITIONAL_JUMP)
// 00544280: XOR EBX,EBX
// 00544282: XOR EAX,EAX
// 00544284: MOV BL,byte ptr [EDI + 0x1]
// 00544287: MOV AL,byte ptr [EDI]
// 00544289: SHL EBX,0x8
// 0054428c: ADD EAX,EBX
// 0054428e: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x10] (DATA)
// 00544291: XOR EAX,EAX
// 00544293: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 00544296: MOV AL,byte ptr [EDI + 0x2]
// 00544299: XOR EAX,EDX
// 0054429b: AND EAX,0xff
// 005442a0: CMP EAX,0x3e
// 005442a3: JNZ 0x005442c7
//   XREF to: 005442c7 (CONDITIONAL_JUMP)
// 005442a5: MOV ESI,0x2
//   Label: LAB_005442a5
//   XREF to: register:00000018 (WRITE)
// 005442aa: LEA EBX,[EDI + ESI*0x1]
// 005442ad: MOV AL,byte ptr [ESP]
//   Label: LAB_005442ad
//   XREF to: Stack[-0x10] (DATA)
// 005442b0: MOV DL,byte ptr [EBX]
// 005442b2: XOR DL,AL
// 005442b4: MOV byte ptr [EBX],DL
// 005442b6: JNZ 0x005442ec
//   XREF to: 005442ec (CONDITIONAL_JUMP)
// 005442b8: CMP ESI,0x17
// 005442bb: JL 0x0054432a
//   XREF to: 0054432a (CONDITIONAL_JUMP)
// 005442bd: LEA EAX,[EDI + 0x17]
//   Label: LAB_005442bd
// 005442c0: ADD ESP,0x4
// 005442c3: POP EDI
// 005442c4: POP ESI
// 005442c5: POP EBX
// 005442c6: RET
// 005442c7: MOV ECX,0x63e20d
//   Label: LAB_005442c7
//   XREF to: 0063e20d (DATA)
// 005442cc: MOV EBX,0xcc
// 005442d1: PUSH 0x63e223
//   XREF to: 0063e223 (DATA)
// 005442d6: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005442dc: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005442e2: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005442e7: ADD ESP,0x4
// 005442ea: JMP 0x005442a5
//   XREF to: 005442a5 (UNCONDITIONAL_JUMP)
// 005442ec: IMUL EAX,dword ptr [ESP],0x2ff0bd
//   Label: LAB_005442ec
//   XREF to: Stack[-0x10] (DATA)
// 005442f3: INC EAX
// 005442f4: INC EBX
//   XREF to: register:0000000c (WRITE)
// 005442f5: AND EAX,0xffff
// 005442fa: INC ESI
// 005442fb: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x10] (DATA)
// 005442fe: CMP ESI,0x186a0
// 00544304: JLE 0x005442ad
//   XREF to: 005442ad (CONDITIONAL_JUMP)
// 00544306: MOV EAX,0x63e250
//   XREF to: 0063e250 (DATA)
// 0054430b: MOV EDX,0xd7
// 00544310: PUSH 0x63e266
//   XREF to: 0063e266 (DATA)
// 00544315: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0054431a: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00544320: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00544325: ADD ESP,0x4
// 00544328: JMP 0x005442ad
//   XREF to: 005442ad (UNCONDITIONAL_JUMP)
// 0054432a: MOV ECX,0x63e28e
//   Label: LAB_0054432a
//   XREF to: 0063e28e (DATA)
// 0054432f: MOV EBX,0xea
// 00544334: PUSH 0x63e2a4
//   XREF to: 0063e2a4 (DATA)
// 00544339: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0054433f: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00544345: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054434a: ADD ESP,0x4
// 0054434d: LEA EAX,[EDI + 0x17]
// 00544350: ADD ESP,0x4
// 00544353: POP EDI
// 00544354: POP ESI
// 00544355: POP EBX
// 00544356: RET
