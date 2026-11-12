// Name: core_bmppuzzl.cpp_CChemPuzzle_process_FUN_00418220
// Address: 00418220
// Address Range: [[00418220, 0041871e]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CChemPuzzle_process_FUN_00418220(CChemPuzzle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bmppuzzl_cpp_CChemPuzzle_process_FUN_00418220(CChemPuzzle *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  CEventList *this_ptr_00;
  uint uVar6;
  uint uVar7;
  int iVar8;
  CAlphaBitmap *pCVar9;
  CChemPuzzle *pCVar10;
  int *piVar11;
  int iVar13;
  int *piVar12;
  
  core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,"ChemPuzzleActive");
  uVar7 = _DAT_01c43540;
  uVar6 = _DAT_01c4353c;
  this_ptr_00 = 0x01C51D80;
  if (this_ptr->result == 1) {
    this_ptr->result = -1;
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70
              (this_ptr_00,"SolvedChemistryPuzzle");
    (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x200);
    _DAT_01c43544 = 0;
    engine_alphabit_cpp_FUN_00415be0(this_ptr,0);
    return;
  }
  if (this_ptr->mouse_button == 0) {
    if (this_ptr->previous_mouse_button != 0) {
      this_ptr->selected_button = -1;
    }
  }
  else {
    if (this_ptr->click_handled == 0) {
      this_ptr->click_handled = 1;
      iVar13 = (**(code **)((int)this_ptr->vtable + 0x2c))(this_ptr,uVar6,uVar7);
      if (iVar13 == 0) {
        return;
      }
      if (this_ptr->selected_button == 0x2b) {
        if (this_ptr->result == 2) {
          core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                    (0x01C51D80,"FailedChemistryPuzzle");
        }
        (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x200);
        _DAT_01c43544 = 0;
        engine_alphabit_cpp_FUN_00415be0(this_ptr,0);
        this_ptr->result = -1;
        return;
      }
      if (this_ptr->selected_button == 0x2c) {
        (**(code **)((int)this_ptr->vtable + 8))(this_ptr);
        (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x200);
        this_ptr->result = -1;
        return;
      }
    }
    if (this_ptr->buttons[this_ptr->selected_button].enabled == 1) {
      iVar13 = 0;
      if (this_ptr->selection_count < 3) {
        iVar8 = 0x25;
LAB_0041828e:
        if (this_ptr->result != 2) {
          if (iVar8 != this_ptr->selected_button) goto LAB_00418664;
          bVar5 = true;
          iVar8 = 0;
          pCVar10 = this_ptr;
          if (0 < this_ptr->selection_count) {
            do {
              if (iVar13 == pCVar10->selected_chemicals[0]) {
                bVar5 = false;
              }
              iVar8 = iVar8 + 1;
              pCVar10 = (CChemPuzzle *)&pCVar10->background;
            } while (iVar8 < this_ptr->selection_count);
          }
          if (bVar5) {
            iVar8 = this_ptr->selection_count;
            this_ptr->selection_count = iVar8 + 1;
            this_ptr->selected_chemicals[iVar8] = iVar13;
          }
        }
      }
LAB_0041829b:
      if (this_ptr->selection_count < 1) {
        return;
      }
      if (this_ptr->selected_button < 0x25) {
        pCVar10 = this_ptr;
        do {
          pCVar9 = &pCVar10->background;
          pCVar10->coin_reaction[0] = 2;
          pCVar10 = (CChemPuzzle *)pCVar9;
        } while (pCVar9 != (CAlphaBitmap *)&(this_ptr->background).width);
        iVar13 = 0;
        pCVar10 = this_ptr;
        if (0 < this_ptr->selection_count) {
          do {
            if (pCVar10->selected_chemicals[0] == 0) {
              this_ptr->coin_reaction[1] = 1;
              this_ptr->coin_reaction[0] = 1;
              if (this_ptr->chemical_applied[0] != 1) {
                this_ptr->chemical_applied[0] = 1;
                this_ptr->score = this_ptr->score + 1;
              }
            }
            if (pCVar10->selected_chemicals[0] == 1) {
              this_ptr->coin_reaction[2] = 1;
              this_ptr->coin_reaction[1] = 1;
              if (this_ptr->chemical_applied[1] != 1) {
                iVar8 = this_ptr->score;
                this_ptr->chemical_applied[1] = 1;
                this_ptr->score = iVar8 + -1;
              }
            }
            if (pCVar10->selected_chemicals[0] == 2) {
              this_ptr->coin_reaction[3] = 1;
              this_ptr->coin_reaction[2] = 1;
              if (this_ptr->chemical_applied[2] != 1) {
                iVar8 = this_ptr->score;
                this_ptr->chemical_applied[2] = 1;
                this_ptr->score = iVar8 + -1;
              }
            }
            if (pCVar10->selected_chemicals[0] == 3) {
              this_ptr->coin_reaction[0] = 1;
              iVar8 = this_ptr->chemical_applied[3];
              this_ptr->coin_reaction[2] = 1;
              if (iVar8 != 1) {
                iVar8 = this_ptr->score;
                this_ptr->chemical_applied[3] = 1;
                this_ptr->score = iVar8 + 1;
              }
            }
            if ((pCVar10->selected_chemicals[0] == 4) &&
               (iVar8 = this_ptr->chemical_applied[4], this_ptr->coin_reaction[3] = 1, iVar8 != 1))
            {
              iVar8 = this_ptr->score;
              this_ptr->chemical_applied[4] = 1;
              this_ptr->score = iVar8 + -1;
            }
            if ((pCVar10->selected_chemicals[0] == 5) &&
               (iVar8 = this_ptr->chemical_applied[5], this_ptr->coin_reaction[1] = 1, iVar8 != 1))
            {
              iVar8 = this_ptr->score;
              this_ptr->chemical_applied[5] = 1;
              this_ptr->score = iVar8 + 1;
            }
            iVar13 = iVar13 + 1;
            pCVar10 = (CChemPuzzle *)&pCVar10->background;
          } while (iVar13 < this_ptr->selection_count);
        }
        iVar13 = 0;
        pCVar10 = this_ptr;
        if (0 < this_ptr->selection_count) {
          do {
            if (pCVar10->selected_chemicals[0] == 4) {
              this_ptr->coin_reaction[0] = 2;
            }
            if (pCVar10->selected_chemicals[0] == 5) {
              this_ptr->coin_reaction[2] = 2;
            }
            iVar13 = iVar13 + 1;
            pCVar10 = (CChemPuzzle *)&pCVar10->background;
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
  pCVar10 = this_ptr;
  for (iVar13 = 0; iVar13 < this_ptr->button_count + 1; iVar13 = iVar13 + 1) {
    if ((pCVar10->buttons[0].visible == 1) &&
       (iVar8 = (**(code **)((int)this_ptr->vtable + 0x30))(this_ptr,iVar13), iVar8 != 0)) {
      this_ptr->hovering = 1;
    }
    pCVar10 = (CChemPuzzle *)&pCVar10->previous_mouse_button;
  }
  pCVar10 = this_ptr;
  do {
    piVar11 = &pCVar10->previous_mouse_button;
    pCVar10->buttons[0].visible = 0;
    pCVar10 = (CChemPuzzle *)piVar11;
  } while (piVar11 != &this_ptr->buttons[0x22].enabled);
  piVar11 = &this_ptr->buttons[0x22].enabled;
  do {
    piVar12 = piVar11 + 0xb;
    piVar11[0x26] = 1;
    piVar11 = piVar12;
  } while (piVar12 != &this_ptr->buttons[0x28].enabled);
  iVar13 = this_ptr->coin_design[1];
  iVar8 = this_ptr->coin_design[2];
  iVar1 = this_ptr->coin_design[3];
  iVar2 = this_ptr->coin_reaction[2];
  iVar3 = this_ptr->coin_reaction[1];
  iVar4 = this_ptr->coin_reaction[3];
  this_ptr->buttons[this_ptr->coin_reaction[0] + this_ptr->coin_design[0] * 3 + 1].visible = 1;
  this_ptr->buttons[iVar3 + iVar13 * 3 + 10].visible = 1;
  this_ptr->buttons[iVar2 + iVar8 * 3 + 0x13].visible = 1;
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
  iVar8 = iVar8 + 1;
  iVar13 = iVar13 + 1;
  if ((0x2a < iVar8) || (2 < this_ptr->selection_count)) goto LAB_0041829b;
  goto LAB_0041828e;
}
