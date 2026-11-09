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
  uint *puVar3;
  CPodSearchContext *pCVar4;
  CPodSearchContext *pCVar5;
  
  if (*(int *)(search_context + 0x314) < *(int *)this_ptr) {
    do {
      if (*(int *)(search_context + 0x314) < 0) {
        *(uint *)(search_context + 0x314) = 0;
      }
      this_ptr_00 = *(CPodFile **)(&this_ptr->field_0x4 + *(int *)(search_context + 0x314) * 4);
      while( true ) {
        if (*(int *)(search_context + 0x318) < 0) {
          *(uint *)(search_context + 0x318) = 0;
        }
        if (*(int *)&this_ptr_00->field_0x410 <= *(int *)(search_context + 0x318)) break;
        puVar3 = (uint *)
                 (*(int *)&this_ptr_00->field_0x414 + *(int *)(search_context + 0x318) * 0x14);
        iVar2 = shape_edittool_cpp_wildcardStringMatch_FUN_00486a40
                          ((char *)(search_context + 0x214),(char *)*puVar3,0);
        if (iVar2 != 0) {
          pCVar4 = (CPodSearchContext *)*puVar3;
          pCVar5 = search_context;
          goto LAB_00514974;
        }
        *(int *)(search_context + 0x318) = *(int *)(search_context + 0x318) + 1;
      }
      *(uint *)(search_context + 0x318) = 0;
      *(int *)(search_context + 0x314) = *(int *)(search_context + 0x314) + 1;
    } while (*(int *)(search_context + 0x314) < *(int *)this_ptr);
  }
  *search_context = (CPodSearchContext)0x0;
  return 0;
  while( true ) {
    CVar1 = pCVar4[1];
    pCVar4 = pCVar4 + 2;
    pCVar5[1] = CVar1;
    pCVar5 = pCVar5 + 2;
    if (CVar1 == (CPodSearchContext)0x0) break;
LAB_00514974:
    CVar1 = *pCVar4;
    *pCVar5 = CVar1;
    if (CVar1 == (CPodSearchContext)0x0) break;
  }
  engine_pod_cpp_CPodFile_populateFileInfo_FUN_00513ca0
            (this_ptr_00,*(int *)(search_context + 0x318),(SFoundFileInfo *)search_context);
  *(int *)(search_context + 0x318) = *(int *)(search_context + 0x318) + 1;
  return 1;
}
