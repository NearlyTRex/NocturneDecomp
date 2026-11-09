// Name: core_path.cpp_CPathMap_dtor_FUN_0050ad40
// Address: 0050ad40
// Address Range: [[0050ad40, 0050adc1]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_path_cpp_CPathMap_dtor_FUN_0050ad40(CPathMap *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CPathMap * __cdecl core_path_cpp_CPathMap_dtor_FUN_0050ad40(CPathMap *this_ptr,uint flags)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01ec1518) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      if (this_ptr == *(CPathMap **)(iVar2 + 0x1ec151c)) {
        _DAT_01ec1518 = _DAT_01ec1518 + -1;
        memmove
                  ((void *)(iVar2 + 0x1ec151c),(void *)(iVar2 + 0x1ec1520),
                   (_DAT_01ec1518 - iVar3) * 4);
        *(uint *)(_DAT_01ec1518 * 4 + 0x1ec151c) = 0;
        return this_ptr;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar1;
    } while (iVar1 < _DAT_01ec1518 * 4);
  }
  return this_ptr;
}
