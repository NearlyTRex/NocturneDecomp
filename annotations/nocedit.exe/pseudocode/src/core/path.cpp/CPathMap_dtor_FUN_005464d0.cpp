// Name: core_path.cpp_CPathMap_dtor_FUN_005464d0
// Address: 005464d0
// Address Range: [[005464d0, 00546551]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_path_cpp_CPathMap_dtor_FUN_005464d0(CPathMap *this_ptr)

#include "nocturne.h"

CPathMap * __cdecl core_path_cpp_CPathMap_dtor_FUN_005464d0(CPathMap *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_PathMapCount) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      if (this_ptr == *(CPathMap **)((int)g_PathMapList + iVar2)) {
        g_PathMapCount = g_PathMapCount + -1;
        crt_string_c_memmove_FUN_005fe5e0
                  ((void *)((int)g_PathMapList + iVar2),(void *)((int)g_PathMapList + iVar2 + 4),
                   (g_PathMapCount - iVar3) * 4);
        g_PathMapList[g_PathMapCount] = (CPathMap *)0x0;
        return this_ptr;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar1;
    } while (iVar1 < g_PathMapCount * 4);
  }
  return this_ptr;
}
