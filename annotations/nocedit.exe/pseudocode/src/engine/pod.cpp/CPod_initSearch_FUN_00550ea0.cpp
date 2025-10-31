// Name: engine_pod.cpp_CPod_initSearch_FUN_00550ea0
// Address: 00550ea0
// Address Range: [[00550ea0, 00550eee]]
// Convention: __cdecl
// Signature: void engine_pod.cpp_CPod_initSearch_FUN_00550ea0(CPod * this_ptr, char * search_pattern, CPodSearchContext * search_context)
// Cross-references:
//   engine_fileio.cpp_CFileManager_searchMountedPods_FUN_004bcb70 (004bcb70) at 004bcbfd [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 (004a35b0) at 004a3611 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 (004a37b0) at 004a3811 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0

#include "nocturne.h"

void __cdecl
engine_pod_cpp_CPod_initSearch_FUN_00550ea0
          (CPod *this_ptr,char *search_pattern,CPodSearchContext *search_context)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = search_context->search_pattern;
  do {
    cVar1 = *search_pattern;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = search_pattern[1];
    search_pattern = search_pattern + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  search_context->current_pod_index = 0;
  search_context->current_file_index = 0;
  engine_pod_cpp_CPod_getNextSearchResult_FUN_00550ef0(this_ptr,search_context);
  return;
}


// Assembly code:
// 00550ea0: PUSH ESI
//   Label: engine_pod.cpp_CPod_initSearch_FUN_00550ea0
// 00550ea1: PUSH EDI
// 00550ea2: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00550ea6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00550eaa: LEA EDI,[EDX + 0x214]
// 00550eb0: PUSH EDI
// 00550eb1: MOV AL,byte ptr [ESI]
//   Label: LAB_00550eb1
// 00550eb3: MOV byte ptr [EDI],AL
// 00550eb5: CMP AL,0x0
// 00550eb7: JZ 0x00550ec9
//   XREF to: 00550ec9 (CONDITIONAL_JUMP)
// 00550eb9: MOV AL,byte ptr [ESI + 0x1]
// 00550ebc: ADD ESI,0x2
// 00550ebf: MOV byte ptr [EDI + 0x1],AL
// 00550ec2: ADD EDI,0x2
// 00550ec5: CMP AL,0x0
// 00550ec7: JNZ 0x00550eb1
//   XREF to: 00550eb1 (CONDITIONAL_JUMP)
// 00550ec9: POP EDI
//   Label: LAB_00550ec9
// 00550eca: MOV dword ptr [EDX + 0x314],0x0
// 00550ed4: PUSH EDX
// 00550ed5: MOV dword ptr [EDX + 0x318],0x0
// 00550edf: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00550ee3: PUSH EDX
// 00550ee4: CALL engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0
//   XREF to: 00550ef0 (UNCONDITIONAL_CALL)
// 00550ee9: ADD ESP,0x8
// 00550eec: POP EDI
// 00550eed: POP ESI
// 00550eee: RET
