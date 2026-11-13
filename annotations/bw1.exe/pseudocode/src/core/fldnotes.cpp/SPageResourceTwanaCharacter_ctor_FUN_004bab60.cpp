// Name: core_fldnotes.cpp_SPageResourceTwanaCharacter_ctor_FUN_004bab60
// Address: 004bab60
// Address Range: [[004bab60, 004babed]]
// Convention: __cdecl
// Signature: SPageResourceTwanaCharacter * __cdecl core_fldnotes_cpp_SPageResourceTwanaCharacter_ctor_FUN_004bab60(SPageResourceTwanaCharacter *this_ptr,char *character)

#include "nocturne.h"

SPageResourceTwanaCharacter * __cdecl core_fldnotes_cpp_SPageResourceTwanaCharacter_ctor_FUN_004bab60(SPageResourceTwanaCharacter *this_ptr,char *character)

{
  char cVar1;
  int height;
  SPageResourceTwanaCharacter *pSVar2;
  char *pcVar3;
  char local_10c [256];
  
  pSVar2 = (SPageResourceTwanaCharacter *)
           core_fldnotes_cpp_SPageResourceBitmap_ctor_FUN_004baa10(&this_ptr->base);
  pcVar3 = pSVar2->character;
  (pSVar2->base).base.vtable = &g_SPageResourceTwanaCharacterVTable;
  do {
    cVar1 = *character;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = character[1];
    character = character + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  _sprintf(local_10c,&DAT_005df8ad);
  (pSVar2->base).base.height = 0x4b;
  height = (pSVar2->base).base.height;
  (pSVar2->base).base.width = 0x38;
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&(pSVar2->base).bitmap,local_10c,(pSVar2->base).base.width,height);
  return pSVar2;
}
