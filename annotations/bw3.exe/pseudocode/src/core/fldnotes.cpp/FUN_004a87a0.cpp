// Name: core_fldnotes.cpp_FUN_004a87a0
// Address: 004a87a0
// Address Range: [[004a87a0, 004a882d]]
// Convention: unknown
// Signature: SPageResourceBitmap * core_fldnotes_cpp_FUN_004a87a0(SPageResourceBitmap *param_1,char *param_2)

#include "nocturne.h"

SPageResourceBitmap * core_fldnotes_cpp_FUN_004a87a0(SPageResourceBitmap *param_1,char *param_2)

{
  char cVar1;
  SPageResourceBitmap *pSVar2;
  SPageResourceBitmap *pSVar3;
  char local_10c [256];
  
  pSVar2 = core_fldnotes_cpp_PageResource_Bitmap_ctor_FUN_004a8650(param_1);
  pSVar3 = pSVar2 + 1;
  *(byte ***)&pSVar2->field_0x14 =
       &PTR_core_fldnotes_cpp_PageResource_TwanaCharacter_dtor_FUN_004a8830_005e02b4;
  do {
    cVar1 = *param_2;
    *(char *)pSVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pSVar3->field_0x1 = cVar1;
    pSVar3 = (SPageResourceBitmap *)&pSVar3->field_0x2;
  } while (cVar1 != '\0');
  _sprintf(local_10c,&DAT_005c0d9a);
  *(uint *)&pSVar2->field_0xc = 0x4b;
  *(uint *)&pSVar2->field_0x8 = 0x38;
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            ((CAlphaBitmap *)&pSVar2->field_0x18,local_10c,*(int *)&pSVar2->field_0x8,
             *(int *)&pSVar2->field_0xc);
  return pSVar2;
}
