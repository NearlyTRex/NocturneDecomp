// Name: core_fldnotes.cpp_SPageResourceTwanaCharacter_ctor_FUN_004a2290
// Address: 004a2290
// Address Range: [[004a2290, 004a231d]]
// Convention: __cdecl
// Signature: SPageResourceBitmap * __cdecl core_fldnotes_cpp_SPageResourceTwanaCharacter_ctor_FUN_004a2290(SPageResourceTwanaCharacter *this_ptr,char *param_2)

#include "nocturne.h"

SPageResourceBitmap * __cdecl core_fldnotes_cpp_SPageResourceTwanaCharacter_ctor_FUN_004a2290(SPageResourceTwanaCharacter *this_ptr,char *param_2)

{
  char cVar1;
  SPageResourceBitmap *pSVar2;
  SPageResourceBitmap *pSVar3;
  char local_10c [256];
  
  pSVar2 = core_fldnotes_cpp_SPageResourceBitmap_ctor_FUN_004a2140(&this_ptr->base);
  pSVar3 = pSVar2 + 1;
  (pSVar2->base).vtable = &g_SPageResourceTwanaCharacterVTable;
  do {
    cVar1 = *param_2;
    *(char *)&(pSVar3->base).x = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    *(char *)((int)&(pSVar3->base).x + 1) = cVar1;
    pSVar3 = (SPageResourceBitmap *)((int)&(pSVar3->base).x + 2);
  } while (cVar1 != '\0');
  _sprintf(local_10c,&DAT_005d5a62);
  (pSVar2->base).height = 0x4b;
  (pSVar2->base).width = 0x38;
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&pSVar2->bitmap,local_10c,(pSVar2->base).width,(pSVar2->base).height);
  return pSVar2;
}
