// Name: core_path.cpp_CPathMap_dtor_FUN_004efdd0
// Address: 004efdd0
// Address Range: [[004efdd0, 004efe51]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_path_cpp_CPathMap_dtor_FUN_004efdd0(CPathMap *this_ptr,uint flags)

#include "nocturne.h"

CPathMap * __cdecl core_path_cpp_CPathMap_dtor_FUN_004efdd0(CPathMap *this_ptr,uint flags)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_INT_01e312f8) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      if (this_ptr == *(CPathMap **)((int)g_CPathMap_PTR_ARRAY_01e312fc + iVar2)) {
        g_INT_01e312f8 = g_INT_01e312f8 + -1;
        memmove
                  ((void *)((int)g_CPathMap_PTR_ARRAY_01e312fc + iVar2),
                   (void *)((int)g_CPathMap_PTR_ARRAY_01e312fc + iVar2 + 4),
                   (g_INT_01e312f8 - iVar3) * 4);
        g_CPathMap_PTR_ARRAY_01e312fc[g_INT_01e312f8] = (CPathMap *)0x0;
        return this_ptr;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar1;
    } while (iVar1 < g_INT_01e312f8 * 4);
  }
  return this_ptr;
}
