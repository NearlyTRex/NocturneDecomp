// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_hitTestButtons_FUN_00412bc0
// Address: 00412bc0
// Address Range: [[00412bc0, 00412c21]]
// Convention: __cdecl
// Signature: int __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_hitTestButtons_FUN_00412bc0(CAudioRecPuzzle *this_ptr,int x,int y)

#include "nocturne.h"

int __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_hitTestButtons_FUN_00412bc0(CAudioRecPuzzle *this_ptr,int x,int y)

{
  int iVar1;
  int iVar2;
  CAudioRecPuzzle *pCVar3;
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
      if ((((iVar1 <= x) && (x <= pCVar3->buttons[0].width + iVar1)) && (iVar2 <= y)) &&
         (y <= pCVar3->buttons[0].height + iVar2)) {
        this_ptr->selected_button = iVar4;
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
    pCVar3 = (CAudioRecPuzzle *)&pCVar3->click_handled;
  } while( true );
}
