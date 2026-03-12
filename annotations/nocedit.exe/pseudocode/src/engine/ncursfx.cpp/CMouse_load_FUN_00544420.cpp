// Name: engine_ncursfx.cpp_CMouse_load_FUN_00544420
// Address: 00544420
// Address Range: [[00544420, 005444ff]]
// Convention: __cdecl
// Signature: void __cdecl engine_ncursfx_cpp_CMouse_load_FUN_00544420(CMouse *this_ptr)

#include "nocturne.h"

void __cdecl engine_ncursfx_cpp_CMouse_load_FUN_00544420(CMouse *this_ptr)

{
  int iVar1;
  int iVar2;
  CAlphaBitmap *pCVar2;
  CMouse *this_ptr_00;
  CAlphaBitmap *pCVar3;
  char local_3c [16];
  char local_2c [16];
  char local_1c [16];
  
  iVar1 = 0;
  this_ptr_00 = this_ptr;
  do {
    iVar1 = iVar1 + 1;
    _sprintf(local_1c,"crsr%d",iVar1);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(this_ptr_00->cursors,local_1c,0x36,0x37);
    this_ptr_00 = (CMouse *)(this_ptr_00->cursors + 1);
  } while (iVar1 < 8);
  pCVar3 = this_ptr->flames;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    _sprintf(local_3c,"flame%d",iVar2);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(pCVar3,local_3c,0x36,0x37);
    pCVar3 = pCVar3 + 1;
  } while (iVar2 < 7);
  pCVar3 = this_ptr->skulls;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    _sprintf(local_2c,"crsrskll%d",iVar2);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(pCVar3,local_2c,0x36,0x37);
    pCVar3 = pCVar3 + 1;
  } while (iVar2 < 7);
  pCVar2 = this_ptr->skulls + 7;
  do {
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(pCVar2,"crsrskll7",0x36,0x37);
    pCVar2 = pCVar2 + 1;
  } while (pCVar2 != (CAlphaBitmap *)&this_ptr->anim_timer);
  return;
}
