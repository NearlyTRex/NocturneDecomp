// Name: unkafter_superopt.cpp_CChemPuzzle_reset_FUN_004176b0
// Address: 004176b0
// Address Range: [[004176b0, 0041779f]]
// Convention: __cdecl
// Signature: int __cdecl unkafter_superopt_cpp_CChemPuzzle_reset_FUN_004176b0(CChemPuzzle *this_ptr)

#include "nocturne.h"

int __cdecl unkafter_superopt_cpp_CChemPuzzle_reset_FUN_004176b0(CChemPuzzle *this_ptr)

{
  CAlphaBitmap *pCVar1;
  int iVar2;
  CChemPuzzle *pCVar3;
  
  this_ptr->selection_count = 0;
  this_ptr->mouse_button = 0;
  this_ptr->previous_mouse_button = 0;
  this_ptr->click_handled = 0;
  this_ptr->result = -1;
  this_ptr->score = 0;
  this_ptr->selected_button = 0;
  this_ptr->hovering = 0;
  this_ptr->dropper_level = 0;
  pCVar3 = this_ptr;
  do {
    pCVar1 = &pCVar3->background;
    pCVar3->coin_reaction[0] = 0;
    pCVar3 = (CChemPuzzle *)pCVar1;
  } while (pCVar1 != (CAlphaBitmap *)&(this_ptr->background).width);
  pCVar3 = this_ptr;
  do {
    pCVar1 = &pCVar3->background;
    pCVar3->selected_chemicals[0] = -1;
    pCVar3 = (CChemPuzzle *)pCVar1;
  } while (pCVar1 != (CAlphaBitmap *)&(this_ptr->background).act);
  pCVar3 = this_ptr;
  do {
    pCVar1 = &pCVar3->background;
    pCVar3->coin_design[0] = 0;
    pCVar3 = (CChemPuzzle *)pCVar1;
  } while (pCVar1 != (CAlphaBitmap *)&(this_ptr->background).width);
  pCVar3 = this_ptr;
  do {
    pCVar1 = &pCVar3->background;
    pCVar3->chemical_applied[0] = 0;
    pCVar3 = (CChemPuzzle *)pCVar1;
  } while (pCVar1 != (CAlphaBitmap *)&this_ptr->dropper_level);
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
  this_ptr->coin_design[0] = iVar2;
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
  this_ptr->coin_design[1] = iVar2;
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
  this_ptr->coin_design[2] = iVar2;
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
  this_ptr->coin_design[3] = iVar2;
  pCVar3 = this_ptr;
  do {
    pCVar1 = &pCVar3->background;
    pCVar3->chemical_applied[0] = 0;
    pCVar3 = (CChemPuzzle *)pCVar1;
  } while (pCVar1 != (CAlphaBitmap *)&this_ptr->dropper_level);
  return (int)pCVar1;
}
