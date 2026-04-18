// Name: engine_pod.cpp_CPod_initSearch_FUN_00550ea0
// Address: 00550ea0
// MANUAL RECONSTRUCTION
// Address Range: [[00550ea0, 00550eee]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_initSearch_FUN_00550ea0(CPod *this_ptr,char *search_pattern,CPodSearchContext *search_context)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_initSearch_FUN_00550ea0(CPod *this_ptr,char *search_pattern,CPodSearchContext *search_context)

{
  strcpy(search_context->search_pattern,search_pattern);
  search_context->current_pod_index = 0;
  search_context->current_file_index = 0;
  engine_pod_cpp_CPod_getNextSearchResult_FUN_00550ef0(this_ptr,search_context);
  return;
}
