// Name: engine_dosio.c_getRelativeFilePath_FUN_004816c0
// Address: 004816c0
// Address Range: [[004816c0, 00481706]]
// Convention: __cdecl
// Signature: void engine_dosio.c_getRelativeFilePath_FUN_004816c0(char * dest_path, char * directory, char * filename)
// Cross-references:
//   engine_dosio.c_getFileSize_FUN_00481880 (00481880) at 0048189b [UNCONDITIONAL_CALL]
//   engine_dosio.c_getFileTimestamp_FUN_004818d0 (004818d0) at 004818eb [UNCONDITIONAL_CALL]
//   engine_dosio.c_getFileTimestamp_FUN_00481960 (00481960) at 0048197c [UNCONDITIONAL_CALL]
//   engine_dosio.c_getFile_FUN_00481a50 (00481a50) at 00481a77 [UNCONDITIONAL_CALL]
//   engine_dosio.c_reopenFileStream_FUN_00481b50 (00481b50) at 00481b90 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 (0054f650) at 0054f682 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_locateFile_FUN_005512f0 (005512f0) at 00551318 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_s_00621571
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

void __cdecl
engine_dosio_c_getRelativeFilePath_FUN_004816c0(char *dest_path,char *directory,char *filename)

{
  char cVar1;
  
  if ((directory != (char *)0x0) && (*directory != '\0')) {
    crt_stdio_c_sprintf_FUN_005fdbd0(dest_path,"%s\\%s",directory,filename);
    return;
  }
  do {
    cVar1 = *filename;
    *dest_path = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = filename[1];
    filename = filename + 2;
    dest_path[1] = cVar1;
    dest_path = dest_path + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 004816c0: PUSH ESI
//   Label: engine_dosio.c_getRelativeFilePath_FUN_004816c0
// 004816c1: PUSH EDI
// 004816c2: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004816c6: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004816ca: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 004816ce: TEST EAX,EAX
// 004816d0: JZ 0x004816ea
//   XREF to: 004816ea (CONDITIONAL_JUMP)
// 004816d2: CMP byte ptr [EAX],0x0
// 004816d5: JZ 0x004816ea
//   XREF to: 004816ea (CONDITIONAL_JUMP)
// 004816d7: PUSH ESI
// 004816d8: PUSH EAX
// 004816d9: PUSH 0x621571
//   XREF to: 00621571 (DATA)
// 004816de: PUSH EDI
// 004816df: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004816e4: ADD ESP,0x10
// 004816e7: POP EDI
// 004816e8: POP ESI
// 004816e9: RET
// 004816ea: PUSH EDI
//   Label: LAB_004816ea
// 004816eb: MOV AL,byte ptr [ESI]
//   Label: LAB_004816eb
// 004816ed: MOV byte ptr [EDI],AL
// 004816ef: CMP AL,0x0
// 004816f1: JZ 0x00481703
//   XREF to: 00481703 (CONDITIONAL_JUMP)
// 004816f3: MOV AL,byte ptr [ESI + 0x1]
// 004816f6: ADD ESI,0x2
// 004816f9: MOV byte ptr [EDI + 0x1],AL
// 004816fc: ADD EDI,0x2
// 004816ff: CMP AL,0x0
// 00481701: JNZ 0x004816eb
//   XREF to: 004816eb (CONDITIONAL_JUMP)
// 00481703: POP EDI
//   Label: LAB_00481703
// 00481704: POP EDI
// 00481705: POP ESI
// 00481706: RET
