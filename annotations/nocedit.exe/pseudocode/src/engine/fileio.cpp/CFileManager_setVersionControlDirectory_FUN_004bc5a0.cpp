// Name: engine_fileio.cpp_CFileManager_setVersionControlDirectory_FUN_004bc5a0
// Address: 004bc5a0
// Address Range: [[004bc5a0, 004bc5c7]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_setVersionControlDirectory_FUN_004bc5a0(CFileManager * this_ptr, char * directory)
// Globals:
//   char[264] g_VersionControlDirectory
//   undefined4 CHAR_ARRAY_02d12ac9
//   undefined4 CHAR_ARRAY_02d12aca
//   undefined4 CHAR_ARRAY_02d12acb

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_setVersionControlDirectory_FUN_004bc5a0
          (CFileManager *this_ptr,char *directory)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = g_VersionControlDirectory;
  do {
    cVar1 = *directory;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = directory[1];
    directory = directory + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 004bc5a0: PUSH ESI
//   Label: engine_fileio.cpp_CFileManager_setVersionControlDirectory_FUN_004bc5a0
// 004bc5a1: PUSH EDI
// 004bc5a2: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004bc5a6: MOV EDI,0x2d12ac8
//   XREF to: 02d12ac8 (DATA)
// 004bc5ab: PUSH EDI
//   XREF to: 02d12ac8 (DATA)
// 004bc5ac: MOV AL,byte ptr [ESI]
//   Label: LAB_004bc5ac
// 004bc5ae: MOV byte ptr [EDI],AL
//   XREF to: 02d12ac8 (WRITE)
//   XREF to: 02d12aca (WRITE)
// 004bc5b0: CMP AL,0x0
// 004bc5b2: JZ 0x004bc5c4
//   XREF to: 004bc5c4 (CONDITIONAL_JUMP)
// 004bc5b4: MOV AL,byte ptr [ESI + 0x1]
// 004bc5b7: ADD ESI,0x2
// 004bc5ba: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02d12ac9 (WRITE)
//   XREF to: 02d12acb (WRITE)
// 004bc5bd: ADD EDI,0x2
// 004bc5c0: CMP AL,0x0
// 004bc5c2: JNZ 0x004bc5ac
//   XREF to: 004bc5ac (CONDITIONAL_JUMP)
// 004bc5c4: POP EDI
//   Label: LAB_004bc5c4
// 004bc5c5: POP EDI
// 004bc5c6: POP ESI
// 004bc5c7: RET
