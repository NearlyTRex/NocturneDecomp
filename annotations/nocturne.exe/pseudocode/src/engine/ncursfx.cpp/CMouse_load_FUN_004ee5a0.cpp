// Name: engine_ncursfx.cpp_CMouse_load_FUN_004ee5a0
// Address: 004ee5a0
// Address Range: [[004ee5a0, 004ee67f]]
// Convention: __cdecl
// Signature: void __cdecl engine_ncursfx_cpp_CMouse_load_FUN_004ee5a0(CMouse *this_ptr)

#include "nocturne.h"

void __cdecl engine_ncursfx_cpp_CMouse_load_FUN_004ee5a0(CMouse *this_ptr)

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
    _sprintf(local_1c,"crsr%d",iVar1);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(this_ptr_00->cursors,local_1c,0x36,0x37);
    this_ptr_00 = (CMouse *)(this_ptr_00->cursors + 1);
  } while (iVar1 < 8);
  pCVar2 = this_ptr->flames;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    _sprintf(local_3c,"flame%d",iVar1);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(pCVar2,local_3c,0x36,0x37);
    pCVar2 = pCVar2 + 1;
  } while (iVar1 < 7);
  pCVar2 = this_ptr->skulls;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    _sprintf(local_2c,"crsrskll%d",iVar1);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(pCVar2,local_2c,0x36,0x37);
    pCVar2 = pCVar2 + 1;
  } while (iVar1 < 7);
  pCVar2 = this_ptr->skulls + 7;
  do {
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(pCVar2,"crsrskll7",0x36,0x37);
    pCVar2 = pCVar2 + 1;
  } while (pCVar2 != (CAlphaBitmap *)&this_ptr->anim_timer);
  return;
}
