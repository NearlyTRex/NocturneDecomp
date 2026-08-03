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
  CPodDirectoryEntry *pCVar4;
  int iVar5;
  char *pcVar6;
  CPodSearchContext *pCVar7;
  
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
        iVar3 = search_context->current_file_index;
        if (pCVar2->file_count <= iVar3) break;
        pCVar4 = pCVar2->directory_entries;
        iVar5 = shape_edittool_cpp_wildcardStringMatch_FUN_004775b0
                          (search_context->search_pattern,pCVar4[iVar3].name,0);
        if (iVar5 != 0) {
          pcVar6 = pCVar4[iVar3].name;
          pCVar7 = search_context;
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
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    (pCVar7->current_file_info).found_path[1] = cVar1;
    pCVar7 = (CPodSearchContext *)((pCVar7->current_file_info).found_path + 2);
    if (cVar1 == '\0') break;
LAB_004f8e64:
    cVar1 = *pcVar6;
    (pCVar7->current_file_info).found_path[0] = cVar1;
    if (cVar1 == '\0') break;
  }
  engine_pod_cpp_CPodFile_populateFileInfo_FUN_004f81c0
            (pCVar2,search_context->current_file_index,search_context);
  search_context->current_file_index = search_context->current_file_index + 1;
  return 1;
}
