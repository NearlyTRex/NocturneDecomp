// Name: core_path.cpp_CPathMap_dtor_FUN_0050ad40
// Address: 0050ad40
// Address Range: [[0050ad40, 0050adc1]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_path_cpp_CPathMap_dtor_FUN_0050ad40(CPathMap *this_ptr,uint flags)

#include "nocturne.h"

CPathMap * __cdecl core_path_cpp_CPathMap_dtor_FUN_0050ad40(CPathMap *this_ptr,uint flags)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_INT_01ec1518) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      if (this_ptr == *(CPathMap **)((int)g_CPathMap_PTR_ARRAY_01ec151c + iVar2)) {
        g_INT_01ec1518 = g_INT_01ec1518 + -1;
        memmove
                  ((void *)((int)g_CPathMap_PTR_ARRAY_01ec151c + iVar2),
                   (void *)((int)g_CPathMap_PTR_ARRAY_01ec151c + iVar2 + 4),
                   (g_INT_01ec1518 - iVar3) * 4);
        g_CPathMap_PTR_ARRAY_01ec151c[g_INT_01ec1518] = (CPathMap *)0x0;
        return this_ptr;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar1;
    } while (iVar1 < g_INT_01ec1518 * 4);
  }
  return this_ptr;
}
