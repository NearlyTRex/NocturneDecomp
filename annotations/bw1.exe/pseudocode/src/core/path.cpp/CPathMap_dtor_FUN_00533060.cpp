// Name: core_path.cpp_CPathMap_dtor_FUN_00533060
// Address: 00533060
// Address Range: [[00533060, 005330e1]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_path_cpp_CPathMap_dtor_FUN_00533060(CPathMap *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CPathMap * __cdecl core_path_cpp_CPathMap_dtor_FUN_00533060(CPathMap *this_ptr,uint flags)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01e6be48) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      if (this_ptr == *(CPathMap **)(iVar2 + 0x1e6be4c)) {
        _DAT_01e6be48 = _DAT_01e6be48 + -1;
        memmove
                  ((void *)(iVar2 + 0x1e6be4c),(void *)(iVar2 + 0x1e6be50),
                   (_DAT_01e6be48 - iVar3) * 4);
        *(uint *)(_DAT_01e6be48 * 4 + 0x1e6be4c) = 0;
        return this_ptr;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar1;
    } while (iVar1 < _DAT_01e6be48 * 4);
  }
  return this_ptr;
}
