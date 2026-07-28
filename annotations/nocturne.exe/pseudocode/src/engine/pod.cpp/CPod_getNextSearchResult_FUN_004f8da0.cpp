// Name: engine_pod.cpp_CPod_getNextSearchResult_FUN_004f8da0
// Address: 004f8da0
// Address Range: [[004f8da0, 004f8ea5]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPod_getNextSearchResult_FUN_004f8da0(CPod *this_ptr,CPodSearchContext *search_context)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPod_getNextSearchResult_FUN_004f8da0(CPod *this_ptr,CPodSearchContext *search_context)

{
  char cVar1;
  CPodFile *pCVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  CPodSearchContext *pCVar6;
  
  if (search_context->current_pod_index < this_ptr->pod_file_count) {
    do {
      if (search_context->current_pod_index < 0) {
        search_context->current_pod_index = 0;
      }
      pCVar2 = this_ptr->pod_files[search_context->current_pod_index];
      while( true ) {
        if (search_context->current_file_index < 0) {
          search_context->current_file_index = 0;
        }
        if (*(int *)pCVar2->author_info <= search_context->current_file_index) break;
        puVar4 = (uint *)
                 (*(int *)(pCVar2->author_info + 4) + search_context->current_file_index * 0x14);
        iVar3 = shape_edittool_cpp_wildcardStringMatch_FUN_004775b0
                          (search_context->search_pattern,(char *)*puVar4,0);
        if (iVar3 != 0) {
          pcVar5 = (char *)*puVar4;
          pCVar6 = search_context;
          goto LAB_004f8e64;
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
LAB_004f8e64:
    cVar1 = *pcVar5;
    (pCVar6->current_file_info).found_path[0] = cVar1;
    if (cVar1 == '\0') break;
  }
  engine_pod_cpp_CPodFile_populateFileInfo_FUN_004f81c0
            (pCVar2,search_context->current_file_index,search_context);
  search_context->current_file_index = search_context->current_file_index + 1;
  return 1;
}
