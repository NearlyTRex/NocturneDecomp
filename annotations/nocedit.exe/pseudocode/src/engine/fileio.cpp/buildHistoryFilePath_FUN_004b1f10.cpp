// Name: engine_fileio.cpp_buildHistoryFilePath_FUN_004b1f10
// Address: 004b1f10
// Address Range: [[004b1f10, 004b1fde]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_buildHistoryFilePath_FUN_004b1f10(char * filename, char * extension, char * dest_buffer)
// Globals:
//   TerminatedCString s_engine_fileio_cpp_006260a3
//   TerminatedCString s_versionControlDirectory__006260b8
//   TerminatedCString s_history_s_s_006260d9
//   char[264] g_VersionControlDirectory
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   engine_dosio.c_makePath_FUN_00481f50

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_buildHistoryFilePath_FUN_004b1f10
          (char *filename,char *extension,char *dest_buffer)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  char acStack_204 [252];
  char acStack_108 [4];
  char acStack_104 [248];
  
  bVar5 = 0;
  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffdf0,"history\\%s.%s",extension,dest_buffer);
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80
            (g_VersionControlDirectory,&stack0xfffffff8,acStack_108);
  engine_dosio_c_makePath_FUN_00481f50
            (dest_buffer,&stack0xfffffffc,acStack_104,(char *)0x0,(char *)0x0);
  pcVar3 = acStack_204;
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
// 004b1f10: PUSH EBX
//   Label: engine_fileio.cpp_buildHistoryFilePath_FUN_004b1f10
// 004b1f11: PUSH ESI
// 004b1f12: PUSH EDI
// 004b1f13: SUB ESP,0x208
// 004b1f19: MOV EDI,dword ptr [ESP + 0x220]
//   XREF to: Stack[0xc] (READ)
// 004b1f20: CMP byte ptr [0x02d12ac8],0x0
//   XREF to: 02d12ac8 (READ)
// 004b1f27: JZ 0x004b1fb7
//   XREF to: 004b1fb7 (CONDITIONAL_JUMP)
// 004b1f2d: MOV EBX,dword ptr [ESP + 0x21c]
//   Label: LAB_004b1f2d
//   XREF to: Stack[0x8] (READ)
// 004b1f34: PUSH EBX
// 004b1f35: MOV ESI,dword ptr [ESP + 0x21c]
//   XREF to: Stack[0x4] (READ)
// 004b1f3c: PUSH ESI
// 004b1f3d: PUSH 0x6260d9
//   XREF to: 006260d9 (DATA)
// 004b1f42: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x214] (DATA)
// 004b1f46: PUSH ESI
// 004b1f47: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b1f4c: ADD ESP,0x10
// 004b1f4f: LEA ESI,[ESP + 0x104]
//   XREF to: Stack[-0x110] (DATA)
// 004b1f56: PUSH ESI
// 004b1f57: LEA ESI,[ESP + 0x208]
//   XREF to: Stack[-0x10] (DATA)
// 004b1f5e: PUSH ESI
// 004b1f5f: PUSH 0x2d12ac8
//   XREF to: 02d12ac8 (DATA)
// 004b1f64: CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   XREF to: 00481f80 (UNCONDITIONAL_CALL)
// 004b1f69: ADD ESP,0xc
// 004b1f6c: PUSH 0x0
// 004b1f6e: PUSH 0x0
// 004b1f70: LEA ESI,[ESP + 0x10c]
//   XREF to: Stack[-0x110] (DATA)
// 004b1f77: PUSH ESI
// 004b1f78: LEA ESI,[ESP + 0x210]
//   XREF to: Stack[-0x10] (DATA)
// 004b1f7f: PUSH ESI
// 004b1f80: PUSH EDI
// 004b1f81: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004b1f86: ADD ESP,0x14
// 004b1f89: MOV ESI,ESP
// 004b1f8b: PUSH EDI
// 004b1f8c: SUB ECX,ECX
// 004b1f8e: DEC ECX
// 004b1f8f: MOV AL,0x0
// 004b1f91: SCASB.REPNE ES:EDI
// 004b1f93: DEC EDI
// 004b1f94: MOV AL,byte ptr [ESI]
//   Label: LAB_004b1f94
//   XREF to: Stack[-0x214] (DATA)
// 004b1f96: MOV byte ptr [EDI],AL
// 004b1f98: CMP AL,0x0
// 004b1f9a: JZ 0x004b1fac
//   XREF to: 004b1fac (CONDITIONAL_JUMP)
// 004b1f9c: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x213] (READ)
// 004b1f9f: ADD ESI,0x2
// 004b1fa2: MOV byte ptr [EDI + 0x1],AL
// 004b1fa5: ADD EDI,0x2
// 004b1fa8: CMP AL,0x0
// 004b1faa: JNZ 0x004b1f94
//   XREF to: 004b1f94 (CONDITIONAL_JUMP)
// 004b1fac: POP EDI
//   Label: LAB_004b1fac
// 004b1fad: ADD ESP,0x208
// 004b1fb3: POP EDI
// 004b1fb4: POP ESI
// 004b1fb5: POP EBX
// 004b1fb6: RET
// 004b1fb7: MOV EDX,0x6260a3
//   Label: LAB_004b1fb7
//   XREF to: 006260a3 (DATA)
// 004b1fbc: MOV ECX,0xe7
// 004b1fc1: PUSH 0x6260b8
//   XREF to: 006260b8 (DATA)
// 004b1fc6: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004b1fcc: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004b1fd2: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b1fd7: ADD ESP,0x4
// 004b1fda: JMP 0x004b1f2d
//   XREF to: 004b1f2d (UNCONDITIONAL_JUMP)
