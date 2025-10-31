// Name: engine_pod.cpp_CPod_findFile_FUN_00551380
// Address: 00551380
// Address Range: [[00551380, 005513cf]]
// Convention: __cdecl
// Signature: int engine_pod.cpp_CPod_findFile_FUN_00551380(CPod * this_ptr, SFoundFileInfo * found_file_info)
// Function calls:
//   engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140
//   engine_pod.cpp_CPodFile_populateFileInfo_FUN_005501b0

#include "nocturne.h"

int __cdecl
engine_pod_cpp_CPod_findFile_FUN_00551380(CPod *this_ptr,SFoundFileInfo *found_file_info)

{
  int file_index;
  CPod *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->pod_file_count) {
    do {
      file_index = engine_pod_cpp_CPodFile_findFileIndex_FUN_00550140
                             (pCVar1->pod_files[0],found_file_info->found_path);
      if (-1 < file_index) {
        engine_pod_cpp_CPodFile_populateFileInfo_FUN_005501b0
                  (pCVar1->pod_files[0],file_index,found_file_info);
        return 1;
      }
      iVar2 = iVar2 + 1;
      pCVar1 = (CPod *)pCVar1->pod_files;
    } while (iVar2 < this_ptr->pod_file_count);
  }
  return 0;
}


// Assembly code:
// 00551380: PUSH EBX
//   Label: engine_pod.cpp_CPod_findFile_FUN_00551380
// 00551381: PUSH ESI
// 00551382: PUSH EDI
// 00551383: PUSH EBP
// 00551384: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00551388: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0055138c: MOV EDX,dword ptr [EDI]
// 0055138e: XOR ESI,ESI
// 00551390: TEST EDX,EDX
// 00551392: JLE 0x005513b1
//   XREF to: 005513b1 (CONDITIONAL_JUMP)
// 00551394: MOV EBX,EDI
// 00551396: PUSH EBP
//   Label: LAB_00551396
// 00551397: MOV EAX,dword ptr [EBX + 0x4]
// 0055139a: PUSH EAX
// 0055139b: CALL engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140
//   XREF to: 00550140 (UNCONDITIONAL_CALL)
// 005513a0: ADD ESP,0x8
// 005513a3: TEST EAX,EAX
// 005513a5: JGE 0x005513b8
//   XREF to: 005513b8 (CONDITIONAL_JUMP)
// 005513a7: INC ESI
// 005513a8: MOV ECX,dword ptr [EDI]
// 005513aa: ADD EBX,0x4
// 005513ad: CMP ESI,ECX
// 005513af: JL 0x00551396
//   XREF to: 00551396 (CONDITIONAL_JUMP)
// 005513b1: XOR EAX,EAX
//   Label: LAB_005513b1
// 005513b3: POP EBP
// 005513b4: POP EDI
// 005513b5: POP ESI
// 005513b6: POP EBX
// 005513b7: RET
// 005513b8: PUSH EBP
//   Label: LAB_005513b8
// 005513b9: PUSH EAX
// 005513ba: MOV EDX,dword ptr [EBX + 0x4]
// 005513bd: PUSH EDX
// 005513be: CALL engine_pod.cpp_CPodFile_populateFileInfo_FUN_005501b0
//   XREF to: 005501b0 (UNCONDITIONAL_CALL)
// 005513c3: MOV EAX,0x1
// 005513c8: ADD ESP,0xc
// 005513cb: POP EBP
// 005513cc: POP EDI
// 005513cd: POP ESI
// 005513ce: POP EBX
// 005513cf: RET
