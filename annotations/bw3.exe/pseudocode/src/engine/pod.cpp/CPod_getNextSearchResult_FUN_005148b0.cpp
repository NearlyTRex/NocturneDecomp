// Name: engine_pod.cpp_CPod_getNextSearchResult_FUN_005148b0
// Address: 005148b0
// Address Range: [[005148b0, 005149b5]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPod_getNextSearchResult_FUN_005148b0(CPod *this_ptr,CPodSearchContext *search_context)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPod_getNextSearchResult_FUN_005148b0(CPod *this_ptr,CPodSearchContext *search_context)

{
  CPodSearchContext CVar1;
  CPodFile *this_ptr_00;
  int iVar2;
  CPodDirectoryEntry *pCVar3;
  int iVar4;
  CPodSearchContext *pCVar5;
  CPodSearchContext *pCVar6;
  
  if (*(int *)(search_context + 0x314) < this_ptr->pod_file_count) {
    do {
      if (*(int *)(search_context + 0x314) < 0) {
        *(uint *)(search_context + 0x314) = 0;
      }
      this_ptr_00 = this_ptr->pod_files[*(int *)(search_context + 0x314)];
      while( true ) {
        if (*(int *)(search_context + 0x318) < 0) {
          *(uint *)(search_context + 0x318) = 0;
        }
        iVar2 = *(int *)(search_context + 0x318);
        if (this_ptr_00->file_count <= iVar2) break;
        pCVar3 = this_ptr_00->directory_entries;
        iVar4 = shape_edittool_cpp_wildcardStringMatch_FUN_00486a40
                          ((char *)(search_context + 0x214),*(char **)(pCVar3 + iVar2 * 0x14),0);
        if (iVar4 != 0) {
          pCVar5 = *(CPodSearchContext **)(pCVar3 + iVar2 * 0x14);
          pCVar6 = search_context;
          goto LAB_00514974;
        }
        *(int *)(search_context + 0x318) = *(int *)(search_context + 0x318) + 1;
      }
      *(uint *)(search_context + 0x318) = 0;
      *(int *)(search_context + 0x314) = *(int *)(search_context + 0x314) + 1;
    } while (*(int *)(search_context + 0x314) < this_ptr->pod_file_count);
  }
  *search_context = (CPodSearchContext)0x0;
  return 0;
  while( true ) {
    CVar1 = pCVar5[1];
    pCVar5 = pCVar5 + 2;
    pCVar6[1] = CVar1;
    pCVar6 = pCVar6 + 2;
    if (CVar1 == (CPodSearchContext)0x0) break;
LAB_00514974:
    CVar1 = *pCVar5;
    *pCVar6 = CVar1;
    if (CVar1 == (CPodSearchContext)0x0) break;
  }
  engine_pod_cpp_CPodFile_populateFileInfo_FUN_00513ca0
            (this_ptr_00,*(int *)(search_context + 0x318),(SFoundFileInfo *)search_context);
  *(int *)(search_context + 0x318) = *(int *)(search_context + 0x318) + 1;
  return 1;
}
