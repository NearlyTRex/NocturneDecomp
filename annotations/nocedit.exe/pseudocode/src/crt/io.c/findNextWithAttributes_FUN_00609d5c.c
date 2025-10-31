// Name: crt_io.c_findNextWithAttributes_FUN_00609d5c
// Address: 00609d5c
// Address Range: [[00609d5c, 00609d93]]
// Convention: __cdecl
// Signature: int crt_io.c_findNextWithAttributes_FUN_00609d5c(HANDLE hFindFile, DWORD dwAttributeMask, LPWIN32_FIND_DATAA lpFindFileData)
// Cross-references:
//   crt_io.c_findFirstFileWrapper_FUN_006021f0 (006021f0) at 0060221d [UNCONDITIONAL_CALL]
//   crt_io.c_findNextFileWrapper_FUN_00602300 (00602300) at 00602336 [UNCONDITIONAL_CALL]
// Globals:
//   FindNextFileA* PTR_FindNextFileA_00611550 = 00211d96

#include "nocturne.h"

int __cdecl
crt_io_c_findNextWithAttributes_FUN_00609d5c
          (HANDLE hFindFile,DWORD dwAttributeMask,LPWIN32_FIND_DATAA lpFindFileData)

{
  BOOL BVar1;
  
  while( true ) {
    if (lpFindFileData->dwFileAttributes == 0) {
      lpFindFileData->dwFileAttributes = 0x80;
    }
    if ((lpFindFileData->dwFileAttributes & dwAttributeMask) != 0) break;
    BVar1 = (*PTR_FindNextFileA_00611550)(hFindFile,lpFindFileData);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


// Assembly code:
// 00609d5c: PUSH EBX
//   Label: crt_io.c_findNextWithAttributes_FUN_00609d5c
// 00609d5d: PUSH ESI
// 00609d5e: PUSH EDI
// 00609d5f: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00609d63: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00609d67: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00609d6b: CMP dword ptr [EBX],0x0
//   Label: LAB_00609d6b
// 00609d6e: JNZ 0x00609d76
//   XREF to: 00609d76 (CONDITIONAL_JUMP)
// 00609d70: MOV dword ptr [EBX],0x80
// 00609d76: TEST dword ptr [EBX],ESI
//   Label: LAB_00609d76
// 00609d78: JZ 0x00609d83
//   XREF to: 00609d83 (CONDITIONAL_JUMP)
// 00609d7a: MOV EAX,0x1
// 00609d7f: POP EDI
// 00609d80: POP ESI
// 00609d81: POP EBX
// 00609d82: RET
// 00609d83: PUSH EBX
//   Label: LAB_00609d83
// 00609d84: PUSH EDI
// 00609d85: CALL dword ptr CS:[0x611550]
//   XREF to: 00611550 (READ)
// 00609d8c: TEST EAX,EAX
// 00609d8e: JNZ 0x00609d6b
//   XREF to: 00609d6b (CONDITIONAL_JUMP)
// 00609d90: POP EDI
// 00609d91: POP ESI
// 00609d92: POP EBX
// 00609d93: RET
