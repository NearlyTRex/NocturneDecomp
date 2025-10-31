// Name: engine_fileio.cpp_buildCheckoutFilePath_FUN_004b1e60
// Address: 004b1e60
// Address Range: [[004b1e60, 004b1f01]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_buildCheckoutFilePath_FUN_004b1e60(char * dest_buffer)
// Globals:
//   TerminatedCString s_engine_fileio_cpp_00626060
//   TerminatedCString s_versionControlDirectory__00626075
//   TerminatedCString s_checkout_txt_00626096
//   undefined4 s_heckout.txt_00626097
//   undefined4 s_eckout.txt_00626098
//   undefined4 s_ckout.txt_00626099
//   char[264] g_VersionControlDirectory
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   engine_dosio.c_makePath_FUN_00481f50

#include "nocturne.h"

void __cdecl engine_fileio_cpp_buildCheckoutFilePath_FUN_004b1e60(char *dest_buffer)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  char acStack_104 [252];
  
  bVar5 = 0;
  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xdd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80
            (g_VersionControlDirectory,&stack0xfffffff8,&stack0xfffffef8);
  engine_dosio_c_makePath_FUN_00481f50
            (dest_buffer,&stack0xfffffffc,acStack_104,(char *)0x0,(char *)0x0);
  pcVar3 = "checkout.txt";
  iVar2 = -1;
  do {
    pcVar4 = dest_buffer;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = dest_buffer + (uint)bVar5 * -2 + 1;
    cVar1 = *dest_buffer;
    dest_buffer = pcVar4;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + -1;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 004b1e60: PUSH ESI
//   Label: engine_fileio.cpp_buildCheckoutFilePath_FUN_004b1e60
// 004b1e61: PUSH EDI
// 004b1e62: SUB ESP,0x104
// 004b1e68: MOV EDI,dword ptr [ESP + 0x110]
//   XREF to: Stack[0x4] (READ)
// 004b1e6f: CMP byte ptr [0x02d12ac8],0x0
//   XREF to: 02d12ac8 (READ)
// 004b1e76: JZ 0x004b1eda
//   XREF to: 004b1eda (CONDITIONAL_JUMP)
// 004b1e78: MOV EAX,ESP
//   Label: LAB_004b1e78
// 004b1e7a: PUSH EAX
// 004b1e7b: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0xc] (DATA)
// 004b1e82: PUSH EAX
// 004b1e83: PUSH 0x2d12ac8
//   XREF to: 02d12ac8 (DATA)
// 004b1e88: CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   XREF to: 00481f80 (UNCONDITIONAL_CALL)
// 004b1e8d: ADD ESP,0xc
// 004b1e90: PUSH 0x0
// 004b1e92: PUSH 0x0
// 004b1e94: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x10c] (DATA)
// 004b1e98: PUSH EAX
// 004b1e99: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0xc] (DATA)
// 004b1ea0: PUSH EAX
// 004b1ea1: PUSH EDI
// 004b1ea2: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004b1ea7: ADD ESP,0x14
// 004b1eaa: MOV ESI,0x626096
//   XREF to: 00626096 (DATA)
// 004b1eaf: PUSH EDI
// 004b1eb0: SUB ECX,ECX
// 004b1eb2: DEC ECX
// 004b1eb3: MOV AL,0x0
// 004b1eb5: SCASB.REPNE ES:EDI
// 004b1eb7: DEC EDI
// 004b1eb8: MOV AL,byte ptr [ESI]
//   Label: LAB_004b1eb8
//   XREF to: 00626096 (READ)
//   XREF to: 00626098 (READ)
// 004b1eba: MOV byte ptr [EDI],AL
// 004b1ebc: CMP AL,0x0
// 004b1ebe: JZ 0x004b1ed0
//   XREF to: 004b1ed0 (CONDITIONAL_JUMP)
// 004b1ec0: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00626097 (READ)
//   XREF to: 00626099 (READ)
// 004b1ec3: ADD ESI,0x2
// 004b1ec6: MOV byte ptr [EDI + 0x1],AL
// 004b1ec9: ADD EDI,0x2
// 004b1ecc: CMP AL,0x0
// 004b1ece: JNZ 0x004b1eb8
//   XREF to: 004b1eb8 (CONDITIONAL_JUMP)
// 004b1ed0: POP EDI
//   Label: LAB_004b1ed0
// 004b1ed1: ADD ESP,0x104
// 004b1ed7: POP EDI
// 004b1ed8: POP ESI
// 004b1ed9: RET
// 004b1eda: MOV EDX,0x626060
//   Label: LAB_004b1eda
//   XREF to: 00626060 (DATA)
// 004b1edf: MOV ECX,0xdd
// 004b1ee4: PUSH 0x626075
//   XREF to: 00626075 (DATA)
// 004b1ee9: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004b1eef: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004b1ef5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b1efa: ADD ESP,0x4
// 004b1efd: JMP 0x004b1e78
//   XREF to: 004b1e78 (UNCONDITIONAL_JUMP)
