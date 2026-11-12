// Name: core_bmppuzzl.cpp_CChemPuzzle_hitTestButtons_FUN_00418790
// Address: 00418790
// Address Range: [[00418790, 00418800]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_bmppuzzl_cpp_CChemPuzzle_hitTestButtons_FUN_00418790(CChemPuzzle *this_ptr,int param_2,int param_3)

#include "nocturne.h"

uint __cdecl core_bmppuzzl_cpp_CChemPuzzle_hitTestButtons_FUN_00418790(CChemPuzzle *this_ptr,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  CChemPuzzle *pCVar3;
  int iVar4;
  
  iVar4 = 0;
  pCVar3 = this_ptr;
  do {
    if (this_ptr->button_count + 1 <= iVar4) {
      return 0;
    }
    if (pCVar3->buttons[0].visible == 1) {
      iVar1 = pCVar3->buttons[0].x;
      iVar2 = pCVar3->buttons[0].y;
      if ((((iVar1 <= param_2) && (param_2 <= pCVar3->buttons[0].width + iVar1)) &&
          (iVar2 <= param_3)) && (param_3 <= pCVar3->buttons[0].height + iVar2)) {
        this_ptr->selected_button = iVar4;
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
    pCVar3 = (CChemPuzzle *)&pCVar3->previous_mouse_button;
  } while( true );
}
