// Name: engine_fileio.cpp_copyFileWithProgress_FUN_004b2030
// Address: 004b2030
// Address Range: [[004b2030, 004b21f6]]
// Convention: __cdecl
// Signature: char * engine_fileio.cpp_copyFileWithProgress_FUN_004b2030(FILE * source_file, FILE * dest_file, char * source_filename, char * dest_filename, int file_size_bytes)
// Cross-references:
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b486c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb93f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b9cb7 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 (004b3220) at 004b3482 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_006260e7
//   TerminatedCString s_Copying_s_s_d_bytes_006260eb
//   TerminatedCString s_Error_reading_s_00626107
//   string s_Error_writing_%s_00626118
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char[1024] g_FileTransferErrorMessage
//   undefined4 DAT_02d0a591
//   undefined4 DAT_02d0a592
//   undefined4 DAT_02d0a593
//   char[32768] g_FileTransferBuffer
// Function calls:
//   crt_errno.c_errno_FUN_00601450
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_fwrite_FUN_005fdc00
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_strerror_FUN_00601470
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530

#include "nocturne.h"

char * __cdecl
engine_fileio_cpp_copyFileWithProgress_FUN_004b2030
          (FILE *source_file,FILE *dest_file,char *source_filename,char *dest_filename,
          int file_size_bytes)

{
  bool bVar1;
  SIZE_T SVar2;
  int *piVar3;
  char *pcVar4;
  SIZE_T count;
  BADSPACEBASE *in_ESP;
  int iVar5;
  char *buffer;
  
  g_FileTransferErrorMessage[0] = '\0';
  bVar1 = 0xc800 < file_size_bytes;
  if (bVar1) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xfffffdf8,"Copying %s -> %s (%d bytes)",source_filename,dest_filename,
               file_size_bytes);
    shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
              (g_CEditorToolsPtr,&stack0xfffffdfc);
  }
  iVar5 = 0;
  if (0 < file_size_bytes) {
    do {
      count = file_size_bytes - iVar5;
      if (0x8000 < (int)count) {
        count = 0x8000;
      }
      SVar2 = crt_stdio_c_fread_FUN_005fd990(g_FileTransferBuffer,1,count,(FILE *)source_filename);
      if (SVar2 != count) {
        crt_stdio_c_sprintf_FUN_005fdbd0((char *)0x4b20a9,"Error reading %s");
        piVar3 = (int *)crt_errno_c_errno_FUN_00601450();
        iVar5 = *piVar3;
LAB_004b20b4:
        pcVar4 = crt_string_c_strerror_FUN_00601470(iVar5);
        if (pcVar4 != (char *)0x0) {
          pcVar4 = g_FileTransferErrorMessage;
          goto LAB_004b20cd;
        }
        break;
      }
      SVar2 = crt_stdio_c_fwrite_FUN_005fdc00(g_FileTransferBuffer,1,count,dest_file);
      if (SVar2 != count) {
        crt_stdio_c_sprintf_FUN_005fdbd0(g_FileTransferErrorMessage,"Error writing %s");
        piVar3 = (int *)crt_errno_c_errno_FUN_00601450();
        iVar5 = *piVar3;
        goto LAB_004b20b4;
      }
      iVar5 = iVar5 + count;
      if (bVar1) {
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)iVar5,(float)file_size_bytes);
      }
    } while (iVar5 < file_size_bytes);
  }
  goto LAB_004b20ee;
  while( true ) {
    buffer = pcVar4 + 1;
    if (*buffer == '\0') goto LAB_004b20e5;
    pcVar4 = pcVar4 + 2;
    if (*buffer == '\0') break;
LAB_004b20cd:
    buffer = pcVar4;
    if (*pcVar4 == '\0') goto LAB_004b20e5;
    if (*pcVar4 == '\0') break;
  }
  buffer = (char *)0x0;
LAB_004b20e5:
  crt_stdio_c_sprintf_FUN_005fdbd0(buffer,"\n%s");
LAB_004b20ee:
  if (bVar1) {
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  }
  if (g_FileTransferErrorMessage[0] != '\0') {
    return g_FileTransferErrorMessage;
  }
  return (char *)0x0;
}


// Assembly code:
// 004b2030: PUSH EBX
//   Label: engine_fileio.cpp_copyFileWithProgress_FUN_004b2030
// 004b2031: PUSH ESI
// 004b2032: PUSH EDI
// 004b2033: PUSH EBP
// 004b2034: SUB ESP,0x1f8
// 004b203a: MOV EDI,dword ptr [ESP + 0x21c]
//   XREF to: Stack[0x14] (READ)
// 004b2041: XOR AH,AH
// 004b2043: XOR EBP,EBP
// 004b2045: MOV byte ptr [0x02d0a590],AH
//   XREF to: 02d0a590 (WRITE)
// 004b204b: CMP EDI,0xc800
// 004b2051: JG 0x004b211b
//   XREF to: 004b211b (CONDITIONAL_JUMP)
// 004b2057: XOR ESI,ESI
//   Label: LAB_004b2057
// 004b2059: TEST EDI,EDI
// 004b205b: JLE 0x004b20ee
//   XREF to: 004b20ee (CONDITIONAL_JUMP)
// 004b2061: MOV EBX,EDI
//   Label: LAB_004b2061
// 004b2063: SUB EBX,ESI
// 004b2065: CMP EBX,0x8000
// 004b206b: JLE 0x004b2072
//   XREF to: 004b2072 (CONDITIONAL_JUMP)
// 004b206d: MOV EBX,0x8000
// 004b2072: MOV EAX,dword ptr [ESP + 0x20c]
//   Label: LAB_004b2072
//   XREF to: Stack[0x4] (READ)
// 004b2079: PUSH EAX
// 004b207a: PUSH EBX
// 004b207b: PUSH 0x1
// 004b207d: PUSH 0x2d0a990
//   XREF to: 02d0a990 (DATA)
// 004b2082: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 004b2087: ADD ESP,0x10
// 004b208a: CMP EAX,EBX
// 004b208c: JZ 0x004b215a
//   XREF to: 004b215a (CONDITIONAL_JUMP)
// 004b2092: MOV EDI,dword ptr [ESP + 0x214]
//   XREF to: Stack[0xc] (READ)
// 004b2099: PUSH EDI
// 004b209a: PUSH 0x626107
//   XREF to: 00626107 (DATA)
// 004b209f: PUSH 0x2d0a590
//   XREF to: 02d0a590 (DATA)
// 004b20a4: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b20a9: ADD ESP,0xc
// 004b20ac: CALL crt_errno.c_errno_FUN_00601450
//   XREF to: 00601450 (UNCONDITIONAL_CALL)
// 004b20b1: MOV EDX,dword ptr [EAX]
// 004b20b3: PUSH EDX
// 004b20b4: CALL crt_string.c_strerror_FUN_00601470
//   Label: LAB_004b20b4
//   XREF to: 00601470 (UNCONDITIONAL_CALL)
// 004b20b9: ADD ESP,0x4
// 004b20bc: TEST EAX,EAX
// 004b20be: JZ 0x004b20ee
//   XREF to: 004b20ee (CONDITIONAL_JUMP)
// 004b20c0: PUSH EAX
// 004b20c1: PUSH 0x6260e7
//   XREF to: 006260e7 (DATA)
// 004b20c6: MOV ESI,0x2d0a590
//   XREF to: 02d0a590 (DATA)
// 004b20cb: XOR DL,DL
// 004b20cd: MOV AL,byte ptr [ESI]
//   Label: LAB_004b20cd
//   XREF to: 02d0a590 (READ)
//   XREF to: 02d0a592 (READ)
// 004b20cf: CMP AL,DL
// 004b20d1: JZ 0x004b20e5
//   XREF to: 004b20e5 (CONDITIONAL_JUMP)
// 004b20d3: CMP AL,0x0
// 004b20d5: JZ 0x004b20e3
//   XREF to: 004b20e3 (CONDITIONAL_JUMP)
// 004b20d7: INC ESI
// 004b20d8: MOV AL,byte ptr [ESI]
//   XREF to: 02d0a591 (READ)
//   XREF to: 02d0a593 (READ)
// 004b20da: CMP AL,DL
// 004b20dc: JZ 0x004b20e5
//   XREF to: 004b20e5 (CONDITIONAL_JUMP)
// 004b20de: INC ESI
// 004b20df: CMP AL,0x0
// 004b20e1: JNZ 0x004b20cd
//   XREF to: 004b20cd (CONDITIONAL_JUMP)
// 004b20e3: SUB ESI,ESI
//   Label: LAB_004b20e3
// 004b20e5: PUSH ESI
//   Label: LAB_004b20e5
//   XREF to: 02d0a590 (DATA)
//   XREF to: 02d0a591 (DATA)
//   XREF to: 02d0a593 (DATA)
// 004b20e6: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b20eb: ADD ESP,0xc
// 004b20ee: TEST EBP,EBP
//   Label: LAB_004b20ee
// 004b20f0: JZ 0x004b2101
//   XREF to: 004b2101 (CONDITIONAL_JUMP)
// 004b20f2: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b20f8: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004b20f9: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 004b20fe: ADD ESP,0x4
// 004b2101: CMP byte ptr [0x02d0a590],0x0
//   Label: LAB_004b2101
//   XREF to: 02d0a590 (READ)
// 004b2108: JNZ 0x004b21e7
//   XREF to: 004b21e7 (CONDITIONAL_JUMP)
// 004b210e: XOR EAX,EAX
// 004b2110: ADD ESP,0x1f8
// 004b2116: POP EBP
// 004b2117: POP EDI
// 004b2118: POP ESI
// 004b2119: POP EBX
// 004b211a: RET
// 004b211b: PUSH EDI
//   Label: LAB_004b211b
// 004b211c: MOV EDX,dword ptr [ESP + 0x21c]
//   XREF to: Stack[0x10] (READ)
// 004b2123: PUSH EDX
// 004b2124: MOV ECX,dword ptr [ESP + 0x21c]
//   XREF to: Stack[0xc] (READ)
// 004b212b: PUSH ECX
// 004b212c: PUSH 0x6260eb
//   XREF to: 006260eb (DATA)
// 004b2131: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x208] (DATA)
// 004b2135: PUSH EAX
// 004b2136: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b213b: ADD ESP,0x14
// 004b213e: MOV EAX,ESP
// 004b2140: PUSH EAX
// 004b2141: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b2147: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004b2148: MOV EBP,0x1
// 004b214d: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 004b2152: ADD ESP,0x8
// 004b2155: JMP 0x004b2057
//   XREF to: 004b2057 (UNCONDITIONAL_JUMP)
// 004b215a: MOV EDX,dword ptr [ESP + 0x210]
//   Label: LAB_004b215a
//   XREF to: Stack[0x8] (READ)
// 004b2161: PUSH EDX
// 004b2162: PUSH EBX
// 004b2163: PUSH 0x1
// 004b2165: PUSH 0x2d0a990
//   XREF to: 02d0a990 (DATA)
// 004b216a: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 004b216f: ADD ESP,0x10
// 004b2172: CMP EAX,EBX
// 004b2174: JNZ 0x004b21c0
//   XREF to: 004b21c0 (CONDITIONAL_JUMP)
// 004b2176: ADD ESI,EBX
// 004b2178: TEST EBP,EBP
// 004b217a: JZ 0x004b21b3
//   XREF to: 004b21b3 (CONDITIONAL_JUMP)
// 004b217c: MOV dword ptr [ESP + 0x1f4],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 004b2183: FILD dword ptr [ESP + 0x1f4]
//   XREF to: Stack[-0x14] (READ)
// 004b218a: SUB ESP,0x4
// 004b218d: MOV dword ptr [ESP + 0x1f8],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 004b2194: FSTP float ptr [ESP]
//   XREF to: Stack[-0x20c] (DATA)
// 004b2197: FILD dword ptr [ESP + 0x1f8]
//   XREF to: Stack[-0x14] (READ)
// 004b219e: SUB ESP,0x4
// 004b21a1: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b21a7: FSTP float ptr [ESP]
//   XREF to: Stack[-0x210] (DATA)
// 004b21aa: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004b21ab: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 004b21b0: ADD ESP,0xc
// 004b21b3: CMP ESI,EDI
//   Label: LAB_004b21b3
// 004b21b5: JL 0x004b2061
//   XREF to: 004b2061 (CONDITIONAL_JUMP)
// 004b21bb: JMP 0x004b20ee
//   XREF to: 004b20ee (UNCONDITIONAL_JUMP)
// 004b21c0: MOV EBX,dword ptr [ESP + 0x218]
//   Label: LAB_004b21c0
//   XREF to: Stack[0x10] (READ)
// 004b21c7: PUSH EBX
// 004b21c8: PUSH 0x626118
//   XREF to: 00626118 (DATA)
// 004b21cd: PUSH 0x2d0a590
//   XREF to: 02d0a590 (DATA)
// 004b21d2: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b21d7: ADD ESP,0xc
// 004b21da: CALL crt_errno.c_errno_FUN_00601450
//   XREF to: 00601450 (UNCONDITIONAL_CALL)
// 004b21df: MOV ESI,dword ptr [EAX]
// 004b21e1: PUSH ESI
// 004b21e2: JMP 0x004b20b4
//   XREF to: 004b20b4 (UNCONDITIONAL_JUMP)
// 004b21e7: MOV EAX,0x2d0a590
//   Label: LAB_004b21e7
//   XREF to: 02d0a590 (DATA)
// 004b21ec: ADD ESP,0x1f8
// 004b21f2: POP EBP
// 004b21f3: POP EDI
// 004b21f4: POP ESI
// 004b21f5: POP EBX
// 004b21f6: RET
