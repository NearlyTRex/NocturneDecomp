// Name: engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0
// Address: 00550ef0
// Address Range: [[00550ef0, 00550ff5]]
// Convention: __cdecl
// Signature: int engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0(CPod * this_ptr, CPodSearchContext * search_context)
// Cross-references:
//   engine_fileio.cpp_CFileManager_searchMountedPods_FUN_004bcb70 (004bcb70) at 004bcc59 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_initSearch_FUN_00550ea0 (00550ea0) at 00550ee4 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 (004a35b0) at 004a36cf [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 (004a37b0) at 004a38bf [UNCONDITIONAL_CALL]
// Function calls:
//   engine_pod.cpp_CPodFile_populateFileInfo_FUN_005501b0
//   shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20

#include "nocturne.h"

int __cdecl
engine_pod_cpp_CPod_getNextSearchResult_FUN_00550ef0
          (CPod *this_ptr,CPodSearchContext *search_context)

{
  char cVar1;
  CPodFile *this_ptr_00;
  int iVar2;
  CPodDirectoryEntry *pCVar3;
  int iVar4;
  char *pcVar5;
  CPodSearchContext *pCVar6;
  
  if (search_context->current_pod_index < this_ptr->pod_file_count) {
    do {
      if (search_context->current_pod_index < 0) {
        search_context->current_pod_index = 0;
      }
      this_ptr_00 = this_ptr->pod_files[search_context->current_pod_index];
      while( true ) {
        if (search_context->current_file_index < 0) {
          search_context->current_file_index = 0;
        }
        iVar2 = search_context->current_file_index;
        if (this_ptr_00->file_count <= iVar2) break;
        pCVar3 = this_ptr_00->directory_entries;
        iVar4 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                          (search_context->search_pattern,(char *)pCVar3[iVar2].name_or_offset,0);
        if (iVar4 != 0) {
          pcVar5 = (char *)pCVar3[iVar2].name_or_offset;
          pCVar6 = search_context;
          goto LAB_00550fb4;
        }
        search_context->current_file_index = search_context->current_file_index + 1;
      }
      search_context->current_file_index = 0;
      search_context->current_pod_index = search_context->current_pod_index + 1;
    } while (search_context->current_pod_index < this_ptr->pod_file_count);
  }
  (search_context->current_file_info).found_path[0] = '\0';
  return 0;
  while( true ) {
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    (pCVar6->current_file_info).found_path[1] = cVar1;
    pCVar6 = (CPodSearchContext *)((pCVar6->current_file_info).found_path + 2);
    if (cVar1 == '\0') break;
LAB_00550fb4:
    cVar1 = *pcVar5;
    (pCVar6->current_file_info).found_path[0] = cVar1;
    if (cVar1 == '\0') break;
  }
  engine_pod_cpp_CPodFile_populateFileInfo_FUN_005501b0
            (this_ptr_00,search_context->current_file_index,&search_context->current_file_info);
  search_context->current_file_index = search_context->current_file_index + 1;
  return 1;
}


// Assembly code:
// 00550ef0: PUSH EBX
//   Label: engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0
// 00550ef1: PUSH ESI
// 00550ef2: PUSH EDI
// 00550ef3: PUSH EBP
// 00550ef4: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00550ef8: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00550efc: MOV EAX,dword ptr [EBX + 0x314]
// 00550f02: CMP EAX,dword ptr [ESI]
// 00550f04: JGE 0x00550f65
//   XREF to: 00550f65 (CONDITIONAL_JUMP)
// 00550f06: LEA EDI,[EBX + 0x214]
// 00550f0c: CMP dword ptr [EBX + 0x314],0x0
//   Label: LAB_00550f0c
// 00550f13: JL 0x00550f6f
//   XREF to: 00550f6f (CONDITIONAL_JUMP)
// 00550f15: MOV EAX,dword ptr [EBX + 0x314]
//   Label: LAB_00550f15
// 00550f1b: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00550f1f: SHL EAX,0x2
// 00550f22: ADD EAX,EDX
// 00550f24: MOV EBP,dword ptr [EAX + 0x4]
// 00550f27: CMP dword ptr [EBX + 0x318],0x0
//   Label: LAB_00550f27
// 00550f2e: JL 0x00550f7b
//   XREF to: 00550f7b (CONDITIONAL_JUMP)
// 00550f30: MOV ESI,dword ptr [EBP + 0x410]
//   Label: LAB_00550f30
// 00550f36: MOV EAX,dword ptr [EBX + 0x318]
// 00550f3c: CMP EAX,ESI
// 00550f3e: JL 0x00550f87
//   XREF to: 00550f87 (CONDITIONAL_JUMP)
// 00550f40: MOV ECX,dword ptr [EBX + 0x314]
// 00550f46: MOV dword ptr [EBX + 0x318],0x0
// 00550f50: INC ECX
// 00550f51: MOV dword ptr [EBX + 0x314],ECX
// 00550f57: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00550f5b: MOV EAX,dword ptr [EBX + 0x314]
// 00550f61: CMP EAX,dword ptr [ESI]
// 00550f63: JL 0x00550f0c
//   XREF to: 00550f0c (CONDITIONAL_JUMP)
// 00550f65: MOV byte ptr [EBX],0x0
//   Label: LAB_00550f65
// 00550f68: XOR EAX,EAX
// 00550f6a: POP EBP
// 00550f6b: POP EDI
// 00550f6c: POP ESI
// 00550f6d: POP EBX
// 00550f6e: RET
// 00550f6f: MOV dword ptr [EBX + 0x314],0x0
//   Label: LAB_00550f6f
// 00550f79: JMP 0x00550f15
//   XREF to: 00550f15 (UNCONDITIONAL_JUMP)
// 00550f7b: MOV dword ptr [EBX + 0x318],0x0
//   Label: LAB_00550f7b
// 00550f85: JMP 0x00550f30
//   XREF to: 00550f30 (UNCONDITIONAL_JUMP)
// 00550f87: IMUL EAX,EAX,0x14
//   Label: LAB_00550f87
// 00550f8a: MOV ESI,dword ptr [EBP + 0x414]
// 00550f90: ADD ESI,EAX
// 00550f92: PUSH 0x0
// 00550f94: MOV ECX,dword ptr [ESI]
// 00550f96: PUSH ECX
// 00550f97: PUSH EDI
// 00550f98: CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
//   XREF to: 004a6e20 (UNCONDITIONAL_CALL)
// 00550f9d: ADD ESP,0xc
// 00550fa0: TEST EAX,EAX
// 00550fa2: JNZ 0x00550faf
//   XREF to: 00550faf (CONDITIONAL_JUMP)
// 00550fa4: INC dword ptr [EBX + 0x318]
// 00550faa: JMP 0x00550f27
//   XREF to: 00550f27 (UNCONDITIONAL_JUMP)
// 00550faf: MOV EDI,EBX
//   Label: LAB_00550faf
// 00550fb1: MOV ESI,dword ptr [ESI]
// 00550fb3: PUSH EDI
// 00550fb4: MOV AL,byte ptr [ESI]
//   Label: LAB_00550fb4
// 00550fb6: MOV byte ptr [EDI],AL
// 00550fb8: CMP AL,0x0
// 00550fba: JZ 0x00550fcc
//   XREF to: 00550fcc (CONDITIONAL_JUMP)
// 00550fbc: MOV AL,byte ptr [ESI + 0x1]
// 00550fbf: ADD ESI,0x2
// 00550fc2: MOV byte ptr [EDI + 0x1],AL
// 00550fc5: ADD EDI,0x2
// 00550fc8: CMP AL,0x0
// 00550fca: JNZ 0x00550fb4
//   XREF to: 00550fb4 (CONDITIONAL_JUMP)
// 00550fcc: POP EDI
//   Label: LAB_00550fcc
// 00550fcd: PUSH EBX
// 00550fce: MOV EDI,dword ptr [EBX + 0x318]
// 00550fd4: PUSH EDI
// 00550fd5: PUSH EBP
// 00550fd6: CALL engine_pod.cpp_CPodFile_populateFileInfo_FUN_005501b0
//   XREF to: 005501b0 (UNCONDITIONAL_CALL)
// 00550fdb: MOV EAX,0x1
// 00550fe0: MOV EBP,dword ptr [EBX + 0x318]
// 00550fe6: ADD EBP,EAX
// 00550fe8: ADD ESP,0xc
// 00550feb: MOV dword ptr [EBX + 0x318],EBP
// 00550ff1: POP EBP
// 00550ff2: POP EDI
// 00550ff3: POP ESI
// 00550ff4: POP EBX
// 00550ff5: RET
