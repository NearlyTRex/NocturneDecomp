// Name: core_path.cpp_CPathMap_dtor_FUN_005464d0
// Address: 005464d0
// MANUAL RECONSTRUCTION
// Address Range: [[005464d0, 00546551]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_path_cpp_CPathMap_dtor_FUN_005464d0(CPathMap *this_ptr,uint flags)

#include "nocturne.h"

CPathMap * __cdecl core_path_cpp_CPathMap_dtor_FUN_005464d0(CPathMap *this_ptr,uint flags)

{
  int iVar3;

  iVar3 = 0;
  if (0 < g_PathMapCount) {
    do {
      if (this_ptr == g_PathMapList[iVar3]) {
        g_PathMapCount = g_PathMapCount + -1;
        memmove(g_PathMapList + iVar3,g_PathMapList + iVar3 + 1,
                (g_PathMapCount - iVar3) * sizeof(*g_PathMapList));
        g_PathMapList[g_PathMapCount] = (CPathMap *)0x0;
        return this_ptr;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < g_PathMapCount);
  }
  return this_ptr;
}
