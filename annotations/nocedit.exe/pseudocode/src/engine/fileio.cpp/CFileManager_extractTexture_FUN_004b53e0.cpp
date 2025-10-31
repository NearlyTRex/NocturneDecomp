// Name: engine_fileio.cpp_CFileManager_extractTexture_FUN_004b53e0
// Address: 004b53e0
// Address Range: [[004b53e0, 004b54d0]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_extractTexture_FUN_004b53e0(CFileManager * this_ptr, char * texture_filename)
// Cross-references:
//   engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0 (004b54e0) at 004b5531 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_ART_s_006275b1
//   TerminatedCString s_engine_fileio_cpp_006275b9
//   TerminatedCString s_fileManger_extractTextur_006275ce
//   TerminatedCString s_ACT_006275ff
//   undefined4 s_ACT_00627600
//   undefined4 s_CT_00627601
//   undefined4 s_T_00627602
//   TerminatedCString s_rb_00627604
//   TerminatedCString s_art_00627607
//   TerminatedCString s_engine_fileio_cpp_0062760b
//   TerminatedCString s_ART_s_00627620
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_extractTexture_FUN_004b53e0
          (CFileManager *this_ptr,char *texture_filename)

{
  char cVar1;
  FILE *file_ptr;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  char *pcVar3;
  undefined4 *in_stack_00000014;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(this_ptr->file_ptr,"ART\\%s\n",texture_filename);
  pcVar3 = &stack0xffffffac;
  do {
    cVar1 = *texture_filename;
    *pcVar3 = cVar1;
    pcVar2 = &stack0xffffffac;
    if (cVar1 == '\0') break;
    cVar1 = texture_filename[1];
    texture_filename = texture_filename + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
    pcVar2 = &stack0xffffffac;
  } while (cVar1 != '\0');
  do {
    pcVar3 = pcVar2;
    if (*pcVar2 == '.') goto LAB_004b5436;
    if (*pcVar2 == '\0') break;
    pcVar3 = pcVar2 + 1;
    if (*pcVar3 == '.') goto LAB_004b5436;
    pcVar2 = pcVar2 + 2;
  } while (*pcVar3 != '\0');
  pcVar3 = (char *)0x0;
LAB_004b5436:
  if (pcVar3 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0x6e0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("fileManger::extractTexture - Extension not found");
  }
  pcVar2 = ".ACT";
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  file_ptr = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xffffffb0,"rb");
  if (file_ptr != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\engine\\fileio.cpp",0x6e7);
    crt_stdio_c_fprintf_FUN_005fe6d0((FILE *)*in_stack_00000014,"ART\\%s\n");
    return;
  }
  return;
}


// Assembly code:
// 004b53e0: PUSH ESI
//   Label: engine_fileio.cpp_CFileManager_extractTexture_FUN_004b53e0
// 004b53e1: PUSH EDI
// 004b53e2: SUB ESP,0x50
// 004b53e5: MOV ESI,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x8] (READ)
// 004b53e9: PUSH ESI
// 004b53ea: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 004b53ee: PUSH 0x6275b1
//   XREF to: 006275b1 (DATA)
// 004b53f3: MOV EDX,dword ptr [EAX]
// 004b53f5: PUSH EDX
// 004b53f6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b53fb: ADD ESP,0xc
// 004b53fe: MOV EDI,ESP
// 004b5400: MOV DL,0x2e
// 004b5402: PUSH EDI
// 004b5403: MOV AL,byte ptr [ESI]
//   Label: LAB_004b5403
// 004b5405: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x58] (DATA)
// 004b5407: CMP AL,0x0
// 004b5409: JZ 0x004b541b
//   XREF to: 004b541b (CONDITIONAL_JUMP)
// 004b540b: MOV AL,byte ptr [ESI + 0x1]
// 004b540e: ADD ESI,0x2
// 004b5411: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x57] (WRITE)
// 004b5414: ADD EDI,0x2
// 004b5417: CMP AL,0x0
// 004b5419: JNZ 0x004b5403
//   XREF to: 004b5403 (CONDITIONAL_JUMP)
// 004b541b: POP EDI
//   Label: LAB_004b541b
// 004b541c: MOV ESI,ESP
// 004b541e: MOV AL,byte ptr [ESI]
//   Label: LAB_004b541e
//   XREF to: Stack[-0x58] (DATA)
// 004b5420: CMP AL,DL
// 004b5422: JZ 0x004b5436
//   XREF to: 004b5436 (CONDITIONAL_JUMP)
// 004b5424: CMP AL,0x0
// 004b5426: JZ 0x004b5434
//   XREF to: 004b5434 (CONDITIONAL_JUMP)
// 004b5428: INC ESI
// 004b5429: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x57] (DATA)
// 004b542b: CMP AL,DL
// 004b542d: JZ 0x004b5436
//   XREF to: 004b5436 (CONDITIONAL_JUMP)
// 004b542f: INC ESI
// 004b5430: CMP AL,0x0
// 004b5432: JNZ 0x004b541e
//   XREF to: 004b541e (CONDITIONAL_JUMP)
// 004b5434: SUB ESI,ESI
//   Label: LAB_004b5434
// 004b5436: MOV EDI,ESI
//   Label: LAB_004b5436
// 004b5438: TEST ESI,ESI
// 004b543a: JNZ 0x004b5461
//   XREF to: 004b5461 (CONDITIONAL_JUMP)
// 004b543c: PUSH EBX
// 004b543d: MOV ECX,0x6275b9
//   XREF to: 006275b9 (DATA)
// 004b5442: MOV EBX,0x6e0
// 004b5447: PUSH 0x6275ce
//   XREF to: 006275ce (DATA)
// 004b544c: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004b5452: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 004b5458: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b545d: ADD ESP,0x4
// 004b5460: POP EBX
// 004b5461: MOV ESI,0x6275ff
//   Label: LAB_004b5461
//   XREF to: 006275ff (DATA)
// 004b5466: PUSH EDI
// 004b5467: MOV AL,byte ptr [ESI]
//   Label: LAB_004b5467
//   XREF to: 006275ff (READ)
//   XREF to: 00627601 (READ)
// 004b5469: MOV byte ptr [EDI],AL
// 004b546b: CMP AL,0x0
// 004b546d: JZ 0x004b547f
//   XREF to: 004b547f (CONDITIONAL_JUMP)
// 004b546f: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00627600 (READ)
//   XREF to: 00627602 (READ)
// 004b5472: ADD ESI,0x2
// 004b5475: MOV byte ptr [EDI + 0x1],AL
// 004b5478: ADD EDI,0x2
// 004b547b: CMP AL,0x0
// 004b547d: JNZ 0x004b5467
//   XREF to: 004b5467 (CONDITIONAL_JUMP)
// 004b547f: POP EDI
//   Label: LAB_004b547f
// 004b5480: PUSH 0x627604
//   XREF to: 00627604 (DATA)
// 004b5485: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x58] (DATA)
// 004b5489: PUSH EAX
// 004b548a: PUSH 0x627607
//   XREF to: 00627607 (DATA)
// 004b548f: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004b5494: ADD ESP,0xc
// 004b5497: TEST EAX,EAX
// 004b5499: JNZ 0x004b54a1
//   XREF to: 004b54a1 (CONDITIONAL_JUMP)
// 004b549b: ADD ESP,0x50
// 004b549e: POP EDI
// 004b549f: POP ESI
// 004b54a0: RET
// 004b54a1: PUSH 0x6e7
//   Label: LAB_004b54a1
// 004b54a6: PUSH 0x62760b
//   XREF to: 0062760b (DATA)
// 004b54ab: PUSH EAX
// 004b54ac: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b54b1: ADD ESP,0xc
// 004b54b4: MOV EAX,ESP
// 004b54b6: PUSH EAX
// 004b54b7: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 004b54bb: PUSH 0x627620
//   XREF to: 00627620 (DATA)
// 004b54c0: MOV ESI,dword ptr [EAX]
// 004b54c2: PUSH ESI
// 004b54c3: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b54c8: ADD ESP,0xc
// 004b54cb: ADD ESP,0x50
// 004b54ce: POP EDI
// 004b54cf: POP ESI
// 004b54d0: RET
