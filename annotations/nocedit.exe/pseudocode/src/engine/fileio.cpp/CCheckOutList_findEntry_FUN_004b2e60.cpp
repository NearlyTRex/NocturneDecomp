// Name: engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
// Address: 004b2e60
// Address Range: [[004b2e60, 004b2ea6]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60(CCheckOutList * this_ptr, char * filename)
// Cross-references:
//   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 (004b3920) at 004b3986 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 (004b5030) at 004b5227 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4b8a [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 (004b35a0) at 004b37c4 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50 (004b3f50) at 004b3fbc [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60 (004b2a60) at 004b2c33 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bbcf1 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004ba835 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b8b92 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60(CCheckOutList *this_ptr,char *filename)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < this_ptr->count) {
    iVar3 = 0;
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(this_ptr->items->name + iVar3,filename);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x168;
    } while (iVar2 < this_ptr->count);
  }
  return -1;
}


// Assembly code:
// 004b2e60: PUSH EBX
//   Label: engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
// 004b2e61: PUSH ESI
// 004b2e62: PUSH EDI
// 004b2e63: PUSH EBP
// 004b2e64: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004b2e68: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004b2e6c: MOV EDX,dword ptr [EDI]
// 004b2e6e: XOR EBX,EBX
// 004b2e70: TEST EDX,EDX
// 004b2e72: JLE 0x004b2e96
//   XREF to: 004b2e96 (CONDITIONAL_JUMP)
// 004b2e74: XOR ESI,ESI
// 004b2e76: MOV EAX,dword ptr [EDI + 0x4]
//   Label: LAB_004b2e76
// 004b2e79: PUSH EBP
// 004b2e7a: ADD EAX,ESI
// 004b2e7c: PUSH EAX
// 004b2e7d: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b2e82: ADD ESP,0x8
// 004b2e85: TEST EAX,EAX
// 004b2e87: JZ 0x004b2ea0
//   XREF to: 004b2ea0 (CONDITIONAL_JUMP)
// 004b2e89: INC EBX
// 004b2e8a: MOV ECX,dword ptr [EDI]
// 004b2e8c: ADD ESI,0x168
// 004b2e92: CMP EBX,ECX
// 004b2e94: JL 0x004b2e76
//   XREF to: 004b2e76 (CONDITIONAL_JUMP)
// 004b2e96: MOV EAX,0xffffffff
//   Label: LAB_004b2e96
// 004b2e9b: POP EBP
// 004b2e9c: POP EDI
// 004b2e9d: POP ESI
// 004b2e9e: POP EBX
// 004b2e9f: RET
// 004b2ea0: MOV EAX,EBX
//   Label: LAB_004b2ea0
// 004b2ea2: POP EBP
// 004b2ea3: POP EDI
// 004b2ea4: POP ESI
// 004b2ea5: POP EBX
// 004b2ea6: RET
