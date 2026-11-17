// Name: core_bmppuzzl.cpp_CChemPuzzle_process_FUN_00418220
// Address: 00418220
// Address Range: [[00418220, 0041871e]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CChemPuzzle_process_FUN_00418220(CChemPuzzle *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_CChemPuzzle_process_FUN_00418220(CChemPuzzle *this_ptr,float delta_time)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  bool bVar6;
  CEventList *this_ptr_00;
  int iVar7;
  CAlphaBitmap *pCVar8;
  CChemPuzzle *pCVar9;
  int *piVar10;
  int iVar12;
  int *piVar11;
  
  core_event_cpp_CEventList_executeCommands_FUN_004a1b70
            (g_CEventList_PTR_0061b4d0,"ChemPuzzleActive");
  iVar7 = g_INT_01c43540;
  iVar12 = g_INT_01c4353c;
  this_ptr_00 = g_CEventList_PTR_0061b4d0;
  if (this_ptr->result == 1) {
    this_ptr->result = -1;
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70
              (this_ptr_00,"SolvedChemistryPuzzle");
    (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)(g_CKeys_PTR_0061f2a4,DIM_LBUTTON);
    g_BIT_INTEGER32_01c43544.dword = 0;
    core_bmppuzzl_cpp_activatePuzzle_FUN_00415be0(&this_ptr->base,0);
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
      iVar12 = (**(code **)((int)pvVar5 + 0x2c))(this_ptr,iVar12,iVar7);
      if (iVar12 == 0) {
        return;
      }
      if (this_ptr->selected_button == 0x2b) {
        if (this_ptr->result == 2) {
          core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                    (g_CEventList_PTR_0061b4d0,"FailedChemistryPuzzle");
        }
        (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)(g_CKeys_PTR_0061f2a4,DIM_LBUTTON);
        g_BIT_INTEGER32_01c43544.dword = 0;
        core_bmppuzzl_cpp_activatePuzzle_FUN_00415be0(&this_ptr->base,0);
        this_ptr->result = -1;
        return;
      }
      if (this_ptr->selected_button == 0x2c) {
        (**(code **)((int)(this_ptr->base).vtable + 8))(this_ptr);
        (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)(g_CKeys_PTR_0061f2a4,DIM_LBUTTON);
        this_ptr->result = -1;
        return;
      }
    }
    if (this_ptr->buttons[this_ptr->selected_button].enabled == 1) {
      iVar12 = 0;
      if (this_ptr->selection_count < 3) {
        iVar7 = 0x25;
LAB_0041828e:
        if (this_ptr->result != 2) {
          if (iVar7 != this_ptr->selected_button) goto LAB_00418664;
          bVar6 = true;
          iVar7 = 0;
          pCVar9 = this_ptr;
          if (0 < this_ptr->selection_count) {
            do {
              if (iVar12 == pCVar9->selected_chemicals[0]) {
                bVar6 = false;
              }
              iVar7 = iVar7 + 1;
              pCVar9 = (CChemPuzzle *)&pCVar9->background;
            } while (iVar7 < this_ptr->selection_count);
          }
          if (bVar6) {
            iVar7 = this_ptr->selection_count;
            this_ptr->selection_count = iVar7 + 1;
            this_ptr->selected_chemicals[iVar7] = iVar12;
          }
        }
      }
LAB_0041829b:
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
        iVar12 = 0;
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
                iVar7 = this_ptr->score;
                this_ptr->chemical_applied[1] = 1;
                this_ptr->score = iVar7 + -1;
              }
            }
            if (pCVar9->selected_chemicals[0] == 2) {
              this_ptr->coin_reaction[3] = 1;
              this_ptr->coin_reaction[2] = 1;
              if (this_ptr->chemical_applied[2] != 1) {
                iVar7 = this_ptr->score;
                this_ptr->chemical_applied[2] = 1;
                this_ptr->score = iVar7 + -1;
              }
            }
            if (pCVar9->selected_chemicals[0] == 3) {
              this_ptr->coin_reaction[0] = 1;
              iVar7 = this_ptr->chemical_applied[3];
              this_ptr->coin_reaction[2] = 1;
              if (iVar7 != 1) {
                iVar7 = this_ptr->score;
                this_ptr->chemical_applied[3] = 1;
                this_ptr->score = iVar7 + 1;
              }
            }
            if ((pCVar9->selected_chemicals[0] == 4) &&
               (iVar7 = this_ptr->chemical_applied[4], this_ptr->coin_reaction[3] = 1, iVar7 != 1))
            {
              iVar7 = this_ptr->score;
              this_ptr->chemical_applied[4] = 1;
              this_ptr->score = iVar7 + -1;
            }
            if ((pCVar9->selected_chemicals[0] == 5) &&
               (iVar7 = this_ptr->chemical_applied[5], this_ptr->coin_reaction[1] = 1, iVar7 != 1))
            {
              iVar7 = this_ptr->score;
              this_ptr->chemical_applied[5] = 1;
              this_ptr->score = iVar7 + 1;
            }
            iVar12 = iVar12 + 1;
            pCVar9 = (CChemPuzzle *)&pCVar9->background;
          } while (iVar12 < this_ptr->selection_count);
        }
        iVar12 = 0;
        pCVar9 = this_ptr;
        if (0 < this_ptr->selection_count) {
          do {
            if (pCVar9->selected_chemicals[0] == 4) {
              this_ptr->coin_reaction[0] = 2;
            }
            if (pCVar9->selected_chemicals[0] == 5) {
              this_ptr->coin_reaction[2] = 2;
            }
            iVar12 = iVar12 + 1;
            pCVar9 = (CChemPuzzle *)&pCVar9->background;
          } while (iVar12 < this_ptr->selection_count);
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
  for (iVar12 = 0; iVar12 < this_ptr->button_count + 1; iVar12 = iVar12 + 1) {
    if ((pCVar9->buttons[0].visible == 1) &&
       (iVar7 = (**(code **)((int)(this_ptr->base).vtable + 0x30))(this_ptr,iVar12), iVar7 != 0)) {
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
  iVar12 = this_ptr->coin_design[1];
  iVar7 = this_ptr->coin_design[2];
  iVar1 = this_ptr->coin_design[3];
  iVar2 = this_ptr->coin_reaction[2];
  iVar3 = this_ptr->coin_reaction[1];
  iVar4 = this_ptr->coin_reaction[3];
  this_ptr->buttons[this_ptr->coin_reaction[0] + this_ptr->coin_design[0] * 3 + 1].visible = 1;
  this_ptr->buttons[iVar3 + iVar12 * 3 + 10].visible = 1;
  this_ptr->buttons[iVar2 + iVar7 * 3 + 0x13].visible = 1;
  this_ptr->buttons[iVar4 + iVar1 * 3 + 0x1c].visible = 1;
  if ((this_ptr->selection_count < 1) && (this_ptr->result != 2)) {
    this_ptr->buttons[0x2c].visible = 0;
    this_ptr->buttons[0x2b].visible = 1;
    return;
  }
  this_ptr->buttons[0x2c].visible = 1;
  this_ptr->buttons[0x2b].visible = 1;
  return;
LAB_00418664:
  iVar7 = iVar7 + 1;
  iVar12 = iVar12 + 1;
  if ((0x2a < iVar7) || (2 < this_ptr->selection_count)) goto LAB_0041829b;
  goto LAB_0041828e;
}
