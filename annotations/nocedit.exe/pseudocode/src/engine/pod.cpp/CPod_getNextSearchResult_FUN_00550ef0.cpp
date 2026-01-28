// Name: engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0
// Address: 00550ef0
// Address Range: [[00550ef0, 00550ff5]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPod_getNextSearchResult_FUN_00550ef0 (CPod *this_ptr,CPodSearchContext *search_context)

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
