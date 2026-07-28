// Name: engine_pod.cpp_CPod_initSearch_FUN_004f8d50
// Address: 004f8d50
// Address Range: [[004f8d50, 004f8d9e]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_initSearch_FUN_004f8d50(CPod *this_ptr,char *search_pattern,CPodSearchContext *search_context)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_initSearch_FUN_004f8d50(CPod *this_ptr,char *search_pattern,CPodSearchContext *search_context)

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
  engine_pod_cpp_CPod_getNextSearchResult_FUN_004f8da0(this_ptr,search_context);
  return;
}
