// Name: core_bmppuzzl.cpp_CChemPuzzle_process_FUN_00418220
// Address: 00418220
// Address Range: [[00418220, 0041871e]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CChemPuzzle_process_FUN_00418220(CChemPuzzle *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bmppuzzl_cpp_CChemPuzzle_process_FUN_00418220(CChemPuzzle *this_ptr,float delta_time)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  bool bVar6;
  CEventList *this_ptr_00;
  uint uVar7;
  uint uVar8;
  int iVar9;
  CAlphaBitmap *pCVar10;
  CChemPuzzle *pCVar11;
  int *piVar12;
  int iVar14;
  int *piVar13;
  
  core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,"ChemPuzzleActive");
  uVar8 = _DAT_01c43540;
  uVar7 = _DAT_01c4353c;
  this_ptr_00 = 0x01C51D80;
  if (this_ptr->result == 1) {
    this_ptr->result = -1;
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70
              (this_ptr_00,"SolvedChemistryPuzzle");
    (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x200);
    _DAT_01c43544 = 0;
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
      iVar14 = (**(code **)((int)pvVar5 + 0x2c))(this_ptr,uVar7,uVar8);
      if (iVar14 == 0) {
        return;
      }
      if (this_ptr->selected_button == 0x2b) {
        if (this_ptr->result == 2) {
          core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                    (0x01C51D80,"FailedChemistryPuzzle");
        }
        (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x200);
        _DAT_01c43544 = 0;
        core_bmppuzzl_cpp_activatePuzzle_FUN_00415be0(&this_ptr->base,0);
        this_ptr->result = -1;
        return;
      }
      if (this_ptr->selected_button == 0x2c) {
        (**(code **)((int)(this_ptr->base).vtable + 8))(this_ptr);
        (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x200);
        this_ptr->result = -1;
        return;
      }
    }
    if (this_ptr->buttons[this_ptr->selected_button].enabled == 1) {
      iVar14 = 0;
      if (this_ptr->selection_count < 3) {
        iVar9 = 0x25;
LAB_0041828e:
        if (this_ptr->result != 2) {
          if (iVar9 != this_ptr->selected_button) goto LAB_00418664;
          bVar6 = true;
          iVar9 = 0;
          pCVar11 = this_ptr;
          if (0 < this_ptr->selection_count) {
            do {
              if (iVar14 == pCVar11->selected_chemicals[0]) {
                bVar6 = false;
              }
              iVar9 = iVar9 + 1;
              pCVar11 = (CChemPuzzle *)&pCVar11->background;
            } while (iVar9 < this_ptr->selection_count);
          }
          if (bVar6) {
            iVar9 = this_ptr->selection_count;
            this_ptr->selection_count = iVar9 + 1;
            this_ptr->selected_chemicals[iVar9] = iVar14;
          }
        }
      }
LAB_0041829b:
      if (this_ptr->selection_count < 1) {
        return;
      }
      if (this_ptr->selected_button < 0x25) {
        pCVar11 = this_ptr;
        do {
          pCVar10 = &pCVar11->background;
          pCVar11->coin_reaction[0] = 2;
          pCVar11 = (CChemPuzzle *)pCVar10;
        } while (pCVar10 != (CAlphaBitmap *)&(this_ptr->background).width);
        iVar14 = 0;
        pCVar11 = this_ptr;
        if (0 < this_ptr->selection_count) {
          do {
            if (pCVar11->selected_chemicals[0] == 0) {
              this_ptr->coin_reaction[1] = 1;
              this_ptr->coin_reaction[0] = 1;
              if (this_ptr->chemical_applied[0] != 1) {
                this_ptr->chemical_applied[0] = 1;
                this_ptr->score = this_ptr->score + 1;
              }
            }
            if (pCVar11->selected_chemicals[0] == 1) {
              this_ptr->coin_reaction[2] = 1;
              this_ptr->coin_reaction[1] = 1;
              if (this_ptr->chemical_applied[1] != 1) {
                iVar9 = this_ptr->score;
                this_ptr->chemical_applied[1] = 1;
                this_ptr->score = iVar9 + -1;
              }
            }
            if (pCVar11->selected_chemicals[0] == 2) {
              this_ptr->coin_reaction[3] = 1;
              this_ptr->coin_reaction[2] = 1;
              if (this_ptr->chemical_applied[2] != 1) {
                iVar9 = this_ptr->score;
                this_ptr->chemical_applied[2] = 1;
                this_ptr->score = iVar9 + -1;
              }
            }
            if (pCVar11->selected_chemicals[0] == 3) {
              this_ptr->coin_reaction[0] = 1;
              iVar9 = this_ptr->chemical_applied[3];
              this_ptr->coin_reaction[2] = 1;
              if (iVar9 != 1) {
                iVar9 = this_ptr->score;
                this_ptr->chemical_applied[3] = 1;
                this_ptr->score = iVar9 + 1;
              }
            }
            if ((pCVar11->selected_chemicals[0] == 4) &&
               (iVar9 = this_ptr->chemical_applied[4], this_ptr->coin_reaction[3] = 1, iVar9 != 1))
            {
              iVar9 = this_ptr->score;
              this_ptr->chemical_applied[4] = 1;
              this_ptr->score = iVar9 + -1;
            }
            if ((pCVar11->selected_chemicals[0] == 5) &&
               (iVar9 = this_ptr->chemical_applied[5], this_ptr->coin_reaction[1] = 1, iVar9 != 1))
            {
              iVar9 = this_ptr->score;
              this_ptr->chemical_applied[5] = 1;
              this_ptr->score = iVar9 + 1;
            }
            iVar14 = iVar14 + 1;
            pCVar11 = (CChemPuzzle *)&pCVar11->background;
          } while (iVar14 < this_ptr->selection_count);
        }
        iVar14 = 0;
        pCVar11 = this_ptr;
        if (0 < this_ptr->selection_count) {
          do {
            if (pCVar11->selected_chemicals[0] == 4) {
              this_ptr->coin_reaction[0] = 2;
            }
            if (pCVar11->selected_chemicals[0] == 5) {
              this_ptr->coin_reaction[2] = 2;
            }
            iVar14 = iVar14 + 1;
            pCVar11 = (CChemPuzzle *)&pCVar11->background;
          } while (iVar14 < this_ptr->selection_count);
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
  pCVar11 = this_ptr;
  for (iVar14 = 0; iVar14 < this_ptr->button_count + 1; iVar14 = iVar14 + 1) {
    if ((pCVar11->buttons[0].visible == 1) &&
       (iVar9 = (**(code **)((int)(this_ptr->base).vtable + 0x30))(this_ptr,iVar14), iVar9 != 0)) {
      this_ptr->hovering = 1;
    }
    pCVar11 = (CChemPuzzle *)&pCVar11->previous_mouse_button;
  }
  pCVar11 = this_ptr;
  do {
    piVar12 = &pCVar11->previous_mouse_button;
    pCVar11->buttons[0].visible = 0;
    pCVar11 = (CChemPuzzle *)piVar12;
  } while (piVar12 != &this_ptr->buttons[0x22].enabled);
  piVar12 = &this_ptr->buttons[0x22].enabled;
  do {
    piVar13 = piVar12 + 0xb;
    piVar12[0x26] = 1;
    piVar12 = piVar13;
  } while (piVar13 != &this_ptr->buttons[0x28].enabled);
  iVar14 = this_ptr->coin_design[1];
  iVar9 = this_ptr->coin_design[2];
  iVar1 = this_ptr->coin_design[3];
  iVar2 = this_ptr->coin_reaction[2];
  iVar3 = this_ptr->coin_reaction[1];
  iVar4 = this_ptr->coin_reaction[3];
  this_ptr->buttons[this_ptr->coin_reaction[0] + this_ptr->coin_design[0] * 3 + 1].visible = 1;
  this_ptr->buttons[iVar3 + iVar14 * 3 + 10].visible = 1;
  this_ptr->buttons[iVar2 + iVar9 * 3 + 0x13].visible = 1;
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
  iVar9 = iVar9 + 1;
  iVar14 = iVar14 + 1;
  if ((0x2a < iVar9) || (2 < this_ptr->selection_count)) goto LAB_0041829b;
  goto LAB_0041828e;
}
