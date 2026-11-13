// Name: core_bmppuzzl.cpp_CChemPuzzle_load_FUN_004133c0
// Address: 004133c0
// Address Range: [[004133c0, 00413cc6]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CChemPuzzle_load_FUN_004133c0(CChemPuzzle *this_ptr,int activate)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_CChemPuzzle_load_FUN_004133c0(CChemPuzzle *this_ptr,int activate)

{
  int *piVar1;
  CChemPuzzle *pCVar2;
  int iVar3;
  CAlphaBitmap *pCVar4;
  
  piVar1 = &(this_ptr->background).width;
  if (activate == 0) {
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&this_ptr->background);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap_ARRAY_007e0010);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap_ARRAY_007e0010 + 1);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap_ARRAY_007e0010 + 2);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap_ARRAY_007e0010 + 3);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap_ARRAY_007e0010 + 4);
    pCVar2 = this_ptr;
    do {
      pCVar4 = &pCVar2->background;
      pCVar2->coin_reaction[0] = 0;
      pCVar2 = (CChemPuzzle *)pCVar4;
    } while (pCVar4 != (CAlphaBitmap *)piVar1);
    pCVar2 = this_ptr;
    do {
      pCVar4 = &pCVar2->background;
      pCVar2->selected_chemicals[0] = -1;
      pCVar2 = (CChemPuzzle *)pCVar4;
    } while (pCVar4 != (CAlphaBitmap *)&(this_ptr->background).act);
    pCVar2 = this_ptr;
    do {
      pCVar4 = &pCVar2->background;
      pCVar2->coin_design[0] = 0;
      pCVar2 = (CChemPuzzle *)pCVar4;
    } while (pCVar4 != (CAlphaBitmap *)&(this_ptr->background).act);
    iVar3 = 0;
    if (0 < this_ptr->button_count) {
      pCVar4 = &this_ptr->buttons[0].bitmap;
      do {
        engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(pCVar4);
        iVar3 = iVar3 + 1;
        pCVar4 = (CAlphaBitmap *)&pCVar4[2].opa;
      } while (iVar3 < this_ptr->button_count);
    }
    pCVar2 = this_ptr;
    do {
      pCVar4 = &pCVar2->background;
      pCVar2->chemical_applied[0] = 0;
      pCVar2 = (CChemPuzzle *)pCVar4;
    } while (pCVar4 != (CAlphaBitmap *)&this_ptr->dropper_level);
    this_ptr->selection_count = 0;
    this_ptr->button_count = 0;
    this_ptr->mouse_button = 0;
    this_ptr->previous_mouse_button = 0;
    this_ptr->click_handled = 0;
    this_ptr->score = 0;
    this_ptr->selected_button = 0;
    this_ptr->hovering = 0;
    this_ptr->dropper_level = 0;
    DAT_007dffb8 = 0xffffffff;
    this_ptr->result = -1;
    return;
  }
  this_ptr->cursor_offset_y[0] = 0x1d;
  this_ptr->cursor_offset_x[1] = 0x1e;
  this_ptr->cursor_offset_y[1] = 0x1d;
  this_ptr->cursor_offset_x[2] = 0x1e;
  this_ptr->cursor_offset_y[2] = 0x1d;
  this_ptr->cursor_offset_x[3] = 0x1e;
  this_ptr->cursor_offset_y[3] = 0x1d;
  this_ptr->cursor_offset_x[4] = 0x1e;
  this_ptr->cursor_offset_y[4] = 0x1d;
  this_ptr->dropper_level = 0;
  this_ptr->selection_count = 0;
  this_ptr->button_count = 0;
  this_ptr->mouse_button = 0;
  this_ptr->previous_mouse_button = 0;
  this_ptr->click_handled = 0;
  this_ptr->score = 0;
  this_ptr->selected_button = 0;
  this_ptr->hovering = 0;
  this_ptr->cursor_offset_x[0] = 0x1e;
  DAT_007dffb8 = 0xffffffff;
  this_ptr->result = -1;
  pCVar2 = this_ptr;
  do {
    pCVar4 = &pCVar2->background;
    pCVar2->coin_reaction[0] = 0;
    pCVar2 = (CChemPuzzle *)pCVar4;
  } while (pCVar4 != (CAlphaBitmap *)piVar1);
  pCVar2 = this_ptr;
  do {
    pCVar4 = &pCVar2->background;
    pCVar2->selected_chemicals[0] = -1;
    pCVar2 = (CChemPuzzle *)pCVar4;
  } while (pCVar4 != (CAlphaBitmap *)&(this_ptr->background).act);
  pCVar2 = this_ptr;
  do {
    pCVar4 = &pCVar2->background;
    pCVar2->coin_design[0] = 0;
    pCVar2 = (CChemPuzzle *)pCVar4;
  } while (pCVar4 != (CAlphaBitmap *)&(this_ptr->background).act);
  pCVar2 = this_ptr;
  do {
    pCVar4 = &pCVar2->background;
    pCVar2->chemical_applied[0] = 0;
    pCVar2 = (CChemPuzzle *)pCVar4;
  } while (pCVar4 != (CAlphaBitmap *)&this_ptr->dropper_level);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (&this_ptr->background,"chembackground",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_007e0010,"dropperempty",0x20,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_007e0010 + 1,"dropper_25",0x20,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_007e0010 + 2,"dropper_75",0x20,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_007e0010 + 3,"dropperfull",0x20,0x20);
  iVar3 = 0;
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_007e0010 + 4,"dropperhighlight",0x20,0x20);
  if (0 < this_ptr->button_count) {
    pCVar4 = &this_ptr->buttons[0].bitmap;
    do {
      engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(pCVar4);
      iVar3 = iVar3 + 1;
      pCVar4 = (CAlphaBitmap *)&pCVar4[2].opa;
    } while (iVar3 < this_ptr->button_count);
  }
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,1,"bullet1",0x7a,0x72,1,0x9d,0x157,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,2,"bullet1cor",0x7a,0x72,1,0x9d,0x157,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,3,"bullet1wet",0x7a,0x72,1,0x9d,0x157,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,4,"bullet2",0x7a,0x72,1,0x9d,0x157,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,5,"bullet2cor",0x7a,0x72,1,0x9d,0x157,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,6,"bullet2wet",0x7a,0x72,1,0x9d,0x157,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,7,"bullet3",0x7a,0x72,1,0x9d,0x157,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,8,"bullet3cor",0x7a,0x72,1,0x9d,0x157,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,9,"bullet3wet",0x7a,0x72,1,0x9d,0x157,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,10,"dollar1",0x75,0x6c,1,0x165,0xde,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0xb,"dollar1cor",0x75,0x6c,1,0x165,0xde,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0xc,"dollar1wet",0x75,0x6c,1,0x165,0xde,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0xd,"dollar2",0x75,0x6c,1,0x165,0xde,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0xe,"dollar2cor",0x75,0x6c,1,0x165,0xde,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0xf,"dollar2wet",0x75,0x6c,1,0x165,0xde,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x10,"dollar3",0x75,0x6c,1,0x165,0xde,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x11,"dollar3cor",0x75,0x6c,1,0x165,0xde,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x12,"dollar3wet",0x75,0x6c,1,0x165,0xde,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x13,"nickel1",0x7e,0x78,1,0x1cd,0x14b,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x14,"nickel1cor",0x7e,0x78,1,0x1cd,0x14b,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x15,"nickel1wet",0x7e,0x78,1,0x1cd,0x14b,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x16,"nickel2",0x7e,0x78,1,0x1cd,0x14b,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x17,"nickel2cor",0x7e,0x78,1,0x1cd,0x14b,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x18,"nickel2wet",0x7e,0x78,1,0x1cd,0x14b,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x19,"nickel3",0x7e,0x78,1,0x1cd,0x14b,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x1a,"nickel3cor",0x7e,0x78,1,0x1cd,0x14b,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x1b,"nickel3wet",0x7e,0x78,1,0x1cd,0x14b,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x1c,0x5b695e,0x80,0x76,1,0x144,0x164,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x1d,"penny1cor",0x80,0x76,1,0x144,0x164,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x1e,0x5b696f,0x80,0x76,1,0x144,0x164,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x1f,0x5b6979,0x80,0x76,1,0x144,0x164,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x20,"penny2cor",0x80,0x76,1,0x144,0x164,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x21,0x5b698a,0x80,0x76,1,0x144,0x164,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x22,0x5b6994,0x80,0x76,1,0x144,0x164,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x23,"penny3cor",0x80,0x76,1,0x144,0x164,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x24,0x5b69a5,0x80,0x76,1,0x144,0x164,0);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))(this_ptr,0x25,0x5b69af,0x30,0x19,1,8,0xa0,1);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))(this_ptr,0x26,0x5b69b6,0x30,0x19,1,0x4f,0x82,1)
  ;
  (**(code **)((int)(this_ptr->base).vtable + 0x28))(this_ptr,0x27,0x5b69bd,0x30,0x19,1,0x95,99,1);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))(this_ptr,0x28,0x5b69c4,0x30,0x19,1,0xd7,0x44,1)
  ;
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x29,0x5b69cb,0x30,0x19,1,0x117,0x27,1);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))(this_ptr,0x2a,0x5b69d2,0x30,0x19,1,0x156,0xd,1)
  ;
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x2b,"chem_exit",0x1e,0x20,1,0x262,0x1b8,1);
  (**(code **)((int)(this_ptr->base).vtable + 0x28))
            (this_ptr,0x2c,"chem_reset",0x1e,0x20,1,0x262,10,1);
  iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
  this_ptr->coin_design[0] = iVar3;
  iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
  this_ptr->coin_design[1] = iVar3;
  iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
  this_ptr->coin_design[2] = iVar3;
  iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
  this_ptr->coin_design[3] = iVar3;
  pCVar2 = this_ptr;
  do {
    pCVar4 = &pCVar2->background;
    pCVar2->chemical_applied[0] = 0;
    pCVar2 = (CChemPuzzle *)pCVar4;
  } while (pCVar4 != (CAlphaBitmap *)&this_ptr->dropper_level);
  return;
}
