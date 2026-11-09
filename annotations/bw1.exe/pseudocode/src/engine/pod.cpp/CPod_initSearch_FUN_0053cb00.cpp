// Name: engine_pod.cpp_CPod_initSearch_FUN_0053cb00
// Address: 0053cb00
// Address Range: [[0053cb00, 0053cb4e]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_initSearch_FUN_0053cb00(CPod *this_ptr,char *search_pattern,CPodSearchContext *search_context)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_initSearch_FUN_0053cb00(CPod *this_ptr,char *search_pattern,CPodSearchContext *search_context)

{
  CPodSearchContext CVar1;
  CPodSearchContext *pCVar2;
  
  pCVar2 = search_context + 0x214;
  do {
    CVar1 = (CPodSearchContext)*search_pattern;
    *pCVar2 = CVar1;
    if (CVar1 == (CPodSearchContext)0x0) break;
    CVar1 = *(CPodSearchContext *)(search_pattern + 1);
    search_pattern = search_pattern + 2;
    pCVar2[1] = CVar1;
    pCVar2 = pCVar2 + 2;
  } while (CVar1 != (CPodSearchContext)0x0);
  *(uint *)(search_context + 0x314) = 0;
  *(uint *)(search_context + 0x318) = 0;
  engine_pod_cpp_CPod_getNextSearchResult_FUN_0053cb50(this_ptr,search_context);
  return;
}
