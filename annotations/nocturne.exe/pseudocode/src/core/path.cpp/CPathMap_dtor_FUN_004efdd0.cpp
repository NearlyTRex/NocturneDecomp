// Name: core_path.cpp_CPathMap_dtor_FUN_004efdd0
// Address: 004efdd0
// Address Range: [[004efdd0, 004efe51]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_path_cpp_CPathMap_dtor_FUN_004efdd0(CPathMap *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CPathMap * __cdecl core_path_cpp_CPathMap_dtor_FUN_004efdd0(CPathMap *this_ptr,uint flags)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01e312f8) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      if (this_ptr == *(CPathMap **)(iVar2 + 0x1e312fc)) {
        _DAT_01e312f8 = _DAT_01e312f8 + -1;
        memmove
                  ((void *)(iVar2 + 0x1e312fc),(void *)(iVar2 + 0x1e31300),
                   (_DAT_01e312f8 - iVar3) * 4);
        *(uint *)(_DAT_01e312f8 * 4 + 0x1e312fc) = 0;
        return this_ptr;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar1;
    } while (iVar1 < _DAT_01e312f8 * 4);
  }
  return this_ptr;
}
