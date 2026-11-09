// Name: engine_ncursfx.cpp_CMouse_load_FUN_00508b90
// Address: 00508b90
// Address Range: [[00508b90, 00508c6f]]
// Convention: __cdecl
// Signature: void __cdecl engine_ncursfx_cpp_CMouse_load_FUN_00508b90(CMouse *this_ptr)

#include "nocturne.h"

void __cdecl engine_ncursfx_cpp_CMouse_load_FUN_00508b90(CMouse *this_ptr)

{
  int iVar1;
  CAlphaBitmap *pCVar2;
  CMouse *this_ptr_00;
  char local_3c [16];
  char local_2c [16];
  char local_1c [16];
  
  iVar1 = 0;
  this_ptr_00 = this_ptr;
  do {
    iVar1 = iVar1 + 1;
    FUN_005a28c0(local_1c,"crsr%d",iVar1);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
              ((CAlphaBitmap *)this_ptr_00,local_1c,0x36,0x37);
    this_ptr_00 = (CMouse *)&this_ptr_00->field_0x14;
  } while (iVar1 < 8);
  pCVar2 = (CAlphaBitmap *)&this_ptr->field_0xa0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    FUN_005a28c0(local_3c,"flame%d",iVar1);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(pCVar2,local_3c,0x36,0x37);
    pCVar2 = pCVar2 + 1;
  } while (iVar1 < 7);
  pCVar2 = (CAlphaBitmap *)&this_ptr->field_0x12c;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    FUN_005a28c0(local_2c,"crsrskll%d",iVar1);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(pCVar2,local_2c,0x36,0x37);
    pCVar2 = pCVar2 + 1;
  } while (iVar1 < 7);
  pCVar2 = (CAlphaBitmap *)&this_ptr->field_0x1b8;
  do {
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(pCVar2,"crsrskll7",0x36,0x37);
    pCVar2 = pCVar2 + 1;
  } while (pCVar2 != (CAlphaBitmap *)&this_ptr->field_0x258);
  return;
}
