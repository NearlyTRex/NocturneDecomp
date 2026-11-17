// Name: core_bmppuzzl.cpp_CChemPuzzle_process_FUN_00413e30
// Address: 00413e30
// Address Range: [[00413e30, 00414325]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CChemPuzzle_process_FUN_00413e30(CChemPuzzle *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_CChemPuzzle_process_FUN_00413e30(CChemPuzzle *this_ptr,float delta_time)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  bool bVar6;
  CEventList *this_ptr_00;
  uint uVar7;
  CAlphaBitmap *pCVar8;
  CChemPuzzle *pCVar9;
  int *piVar10;
  int iVar12;
  int iVar13;
  int *piVar11;
  
  iVar12 = g_MouseY;
  iVar13 = g_MouseX;
  this_ptr_00 = g_CEventListPtr;
  if (this_ptr->result == 1) {
    this_ptr->result = -1;
    core_event_cpp_CEventList_executeCommands_FUN_0048c150
              (this_ptr_00,"SolvedChemistryPuzzle");
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIM_LBUTTON);
    g_MouseButtonFlags.dword = 0;
    core_bmppuzzl_cpp_activatePuzzle_FUN_004119a0(&this_ptr->base,0);
    return;
  }
  if (this_ptr->mouse_button == 0) {
    if (this_ptr->previous_mouse_button != 0) {
      this_ptr->selected_button = -1;
    }
  }
  else {
    if (this_ptr->click_handled == 0) {
      pvVar5 = (this_ptr->base).vtable;
      this_ptr->click_handled = 1;
      iVar13 = (**(code **)((int)pvVar5 + 0x2c))(this_ptr,iVar13,iVar12);
      if (iVar13 == 0) {
        return;
      }
      if (this_ptr->selected_button == 0x2b) {
        if (this_ptr->result == 2) {
          core_event_cpp_CEventList_executeCommands_FUN_0048c150
                    (g_CEventListPtr,"FailedChemistryPuzzle");
        }
        (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIM_LBUTTON);
        g_MouseButtonFlags.dword = 0;
        core_bmppuzzl_cpp_activatePuzzle_FUN_004119a0(&this_ptr->base,0);
        this_ptr->result = -1;
        return;
      }
      if (this_ptr->selected_button == 0x2c) {
        (**(code **)((int)(this_ptr->base).vtable + 8))(this_ptr);
        (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIM_LBUTTON);
        this_ptr->result = -1;
        return;
      }
    }
    if (this_ptr->buttons[this_ptr->selected_button].enabled == 1) {
      iVar13 = 0;
      if (this_ptr->selection_count < 3) {
        uVar7 = 0x25;
LAB_00413e88:
        if (this_ptr->result != 2) {
          if (uVar7 != this_ptr->selected_button) goto LAB_00414269;
          bVar6 = true;
          uVar7 = uVar7 ^ this_ptr->selected_button;
          pCVar9 = this_ptr;
          if (0 < this_ptr->selection_count) {
            do {
              if (iVar13 == pCVar9->selected_chemicals[0]) {
                bVar6 = false;
              }
              uVar7 = uVar7 + 1;
              pCVar9 = (CChemPuzzle *)&pCVar9->background;
            } while ((int)uVar7 < this_ptr->selection_count);
          }
          if (bVar6) {
            iVar12 = this_ptr->selection_count;
            this_ptr->selection_count = iVar12 + 1;
            this_ptr->selected_chemicals[iVar12] = iVar13;
          }
        }
      }
LAB_00413e95:
      if (this_ptr->selection_count < 1) {
        return;
      }
      if (this_ptr->selected_button < 0x25) {
        pCVar9 = this_ptr;
        do {
          pCVar8 = &pCVar9->background;
          pCVar9->coin_reaction[0] = 2;
          pCVar9 = (CChemPuzzle *)pCVar8;
        } while (pCVar8 != (CAlphaBitmap *)&(this_ptr->background).width);
        iVar13 = 0;
        pCVar9 = this_ptr;
        if (0 < this_ptr->selection_count) {
          do {
            if (pCVar9->selected_chemicals[0] == 0) {
              this_ptr->coin_reaction[1] = 1;
              this_ptr->coin_reaction[0] = 1;
              if (this_ptr->chemical_applied[0] != 1) {
                this_ptr->chemical_applied[0] = 1;
                this_ptr->score = this_ptr->score + 1;
              }
            }
            if (pCVar9->selected_chemicals[0] == 1) {
              this_ptr->coin_reaction[2] = 1;
              this_ptr->coin_reaction[1] = 1;
              if (this_ptr->chemical_applied[1] != 1) {
                iVar12 = this_ptr->score;
                this_ptr->chemical_applied[1] = 1;
                this_ptr->score = iVar12 + -1;
              }
            }
            if (pCVar9->selected_chemicals[0] == 2) {
              this_ptr->coin_reaction[3] = 1;
              this_ptr->coin_reaction[2] = 1;
              if (this_ptr->chemical_applied[2] != 1) {
                iVar12 = this_ptr->score;
                this_ptr->chemical_applied[2] = 1;
                this_ptr->score = iVar12 + -1;
              }
            }
            if ((pCVar9->selected_chemicals[0] == 3) &&
               (this_ptr->coin_reaction[3] = 1, this_ptr->chemical_applied[3] != 1)) {
              iVar12 = this_ptr->score;
              this_ptr->chemical_applied[3] = 1;
              this_ptr->score = iVar12 + 1;
            }
            if ((pCVar9->selected_chemicals[0] == 4) &&
               (iVar12 = this_ptr->chemical_applied[4], this_ptr->coin_reaction[2] = 1, iVar12 != 1)
               ) {
              iVar12 = this_ptr->score;
              this_ptr->chemical_applied[4] = 1;
              this_ptr->score = iVar12 + -1;
            }
            if ((pCVar9->selected_chemicals[0] == 5) &&
               (iVar12 = this_ptr->chemical_applied[5], this_ptr->coin_reaction[1] = 1, iVar12 != 1)
               ) {
              iVar12 = this_ptr->score;
              this_ptr->chemical_applied[5] = 1;
              this_ptr->score = iVar12 + 1;
            }
            iVar13 = iVar13 + 1;
            pCVar9 = (CChemPuzzle *)&pCVar9->background;
          } while (iVar13 < this_ptr->selection_count);
        }
        iVar13 = 0;
        pCVar9 = this_ptr;
        if (0 < this_ptr->selection_count) {
          do {
            if (pCVar9->selected_chemicals[0] == 3) {
              this_ptr->coin_reaction[0] = 2;
            }
            if (pCVar9->selected_chemicals[0] == 4) {
              this_ptr->coin_reaction[1] = 2;
            }
            if (pCVar9->selected_chemicals[0] == 5) {
              this_ptr->coin_reaction[3] = 2;
            }
            iVar13 = iVar13 + 1;
            pCVar9 = (CChemPuzzle *)&pCVar9->background;
          } while (iVar13 < this_ptr->selection_count);
        }
        this_ptr->result = 2;
        if ((this_ptr->selection_count == 3) && (this_ptr->score == 3)) {
          this_ptr->result = 1;
        }
        this_ptr->selection_count = 0;
      }
    }
  }
  this_ptr->hovering = 0;
  this_ptr->dropper_level = this_ptr->selection_count;
  pCVar9 = this_ptr;
  for (iVar13 = 0; iVar13 < this_ptr->button_count + 1; iVar13 = iVar13 + 1) {
    if ((pCVar9->buttons[0].visible == 1) &&
       (iVar12 = (**(code **)((int)(this_ptr->base).vtable + 0x30))(this_ptr,iVar13), iVar12 != 0))
    {
      this_ptr->hovering = 1;
    }
    pCVar9 = (CChemPuzzle *)&pCVar9->previous_mouse_button;
  }
  pCVar9 = this_ptr;
  do {
    piVar10 = &pCVar9->previous_mouse_button;
    pCVar9->buttons[0].visible = 0;
    pCVar9 = (CChemPuzzle *)piVar10;
  } while (piVar10 != &this_ptr->buttons[0x22].enabled);
  piVar10 = &this_ptr->buttons[0x22].enabled;
  do {
    piVar11 = piVar10 + 0xb;
    piVar10[0x26] = 1;
    piVar10 = piVar11;
  } while (piVar11 != &this_ptr->buttons[0x28].enabled);
  iVar13 = this_ptr->coin_design[1];
  iVar12 = this_ptr->coin_design[2];
  iVar1 = this_ptr->coin_design[3];
  iVar2 = this_ptr->coin_reaction[1];
  iVar3 = this_ptr->coin_reaction[3];
  iVar4 = this_ptr->coin_reaction[2];
  this_ptr->buttons[this_ptr->coin_reaction[0] + this_ptr->coin_design[0] * 3 + 1].visible = 1;
  this_ptr->buttons[iVar2 + iVar13 * 3 + 10].visible = 1;
  this_ptr->buttons[iVar4 + iVar12 * 3 + 0x13].visible = 1;
  this_ptr->buttons[iVar3 + iVar1 * 3 + 0x1c].visible = 1;
  if ((this_ptr->selection_count < 1) && (this_ptr->result != 2)) {
    this_ptr->buttons[0x2c].visible = 0;
    this_ptr->buttons[0x2b].visible = 1;
    return;
  }
  this_ptr->buttons[0x2c].visible = 1;
  this_ptr->buttons[0x2b].visible = 1;
  return;
LAB_00414269:
  uVar7 = uVar7 + 1;
  iVar13 = iVar13 + 1;
  if ((0x2a < (int)uVar7) || (2 < this_ptr->selection_count)) goto LAB_00413e95;
  goto LAB_00413e88;
}
