// Name: unkafter_superopt.cpp_CChemPuzzle_process_FUN_00413e30
// Address: 00413e30
// Address Range: [[00413e30, 00414325]]
// Convention: __cdecl
// Signature: void __cdecl unkafter_superopt_cpp_CChemPuzzle_process_FUN_00413e30(CChemPuzzle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl unkafter_superopt_cpp_CChemPuzzle_process_FUN_00413e30(CChemPuzzle *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  CEventList *this_ptr_00;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  CAlphaBitmap *pCVar9;
  CChemPuzzle *pCVar10;
  int *piVar11;
  int iVar13;
  int iVar14;
  int *piVar12;
  
  uVar7 = _DAT_01c5fae0;
  uVar6 = _DAT_01c5fadc;
  this_ptr_00 = 0x01C6E360;
  if (this_ptr->result == 1) {
    this_ptr->result = -1;
    core_event_cpp_CEventList_executeCommands_FUN_0048c150
              (this_ptr_00,"SolvedChemistryPuzzle");
    (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x200);
    _DAT_01c5fae4 = 0;
    unkafter_alphabit_cpp_FUN_004119a0(this_ptr,0);
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
      iVar14 = (**(code **)((int)this_ptr->vtable + 0x2c))(this_ptr,uVar6,uVar7);
      if (iVar14 == 0) {
        return;
      }
      if (this_ptr->selected_button == 0x2b) {
        if (this_ptr->result == 2) {
          core_event_cpp_CEventList_executeCommands_FUN_0048c150
                    (0x01C6E360,"FailedChemistryPuzzle");
        }
        (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x200);
        _DAT_01c5fae4 = 0;
        unkafter_alphabit_cpp_FUN_004119a0(this_ptr,0);
        this_ptr->result = -1;
        return;
      }
      if (this_ptr->selected_button == 0x2c) {
        (**(code **)((int)this_ptr->vtable + 8))(this_ptr);
        (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x200);
        this_ptr->result = -1;
        return;
      }
    }
    if (this_ptr->buttons[this_ptr->selected_button].enabled == 1) {
      iVar14 = 0;
      if (this_ptr->selection_count < 3) {
        uVar8 = 0x25;
LAB_00413e88:
        if (this_ptr->result != 2) {
          if (uVar8 != this_ptr->selected_button) goto LAB_00414269;
          bVar5 = true;
          uVar8 = uVar8 ^ this_ptr->selected_button;
          pCVar10 = this_ptr;
          if (0 < this_ptr->selection_count) {
            do {
              if (iVar14 == pCVar10->selected_chemicals[0]) {
                bVar5 = false;
              }
              uVar8 = uVar8 + 1;
              pCVar10 = (CChemPuzzle *)&pCVar10->background;
            } while ((int)uVar8 < this_ptr->selection_count);
          }
          if (bVar5) {
            iVar13 = this_ptr->selection_count;
            this_ptr->selection_count = iVar13 + 1;
            this_ptr->selected_chemicals[iVar13] = iVar14;
          }
        }
      }
LAB_00413e95:
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
        iVar14 = 0;
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
                iVar13 = this_ptr->score;
                this_ptr->chemical_applied[1] = 1;
                this_ptr->score = iVar13 + -1;
              }
            }
            if (pCVar10->selected_chemicals[0] == 2) {
              this_ptr->coin_reaction[3] = 1;
              this_ptr->coin_reaction[2] = 1;
              if (this_ptr->chemical_applied[2] != 1) {
                iVar13 = this_ptr->score;
                this_ptr->chemical_applied[2] = 1;
                this_ptr->score = iVar13 + -1;
              }
            }
            if ((pCVar10->selected_chemicals[0] == 3) &&
               (this_ptr->coin_reaction[3] = 1, this_ptr->chemical_applied[3] != 1)) {
              iVar13 = this_ptr->score;
              this_ptr->chemical_applied[3] = 1;
              this_ptr->score = iVar13 + 1;
            }
            if ((pCVar10->selected_chemicals[0] == 4) &&
               (iVar13 = this_ptr->chemical_applied[4], this_ptr->coin_reaction[2] = 1, iVar13 != 1)
               ) {
              iVar13 = this_ptr->score;
              this_ptr->chemical_applied[4] = 1;
              this_ptr->score = iVar13 + -1;
            }
            if ((pCVar10->selected_chemicals[0] == 5) &&
               (iVar13 = this_ptr->chemical_applied[5], this_ptr->coin_reaction[1] = 1, iVar13 != 1)
               ) {
              iVar13 = this_ptr->score;
              this_ptr->chemical_applied[5] = 1;
              this_ptr->score = iVar13 + 1;
            }
            iVar14 = iVar14 + 1;
            pCVar10 = (CChemPuzzle *)&pCVar10->background;
          } while (iVar14 < this_ptr->selection_count);
        }
        iVar14 = 0;
        pCVar10 = this_ptr;
        if (0 < this_ptr->selection_count) {
          do {
            if (pCVar10->selected_chemicals[0] == 3) {
              this_ptr->coin_reaction[0] = 2;
            }
            if (pCVar10->selected_chemicals[0] == 4) {
              this_ptr->coin_reaction[1] = 2;
            }
            if (pCVar10->selected_chemicals[0] == 5) {
              this_ptr->coin_reaction[3] = 2;
            }
            iVar14 = iVar14 + 1;
            pCVar10 = (CChemPuzzle *)&pCVar10->background;
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
  pCVar10 = this_ptr;
  for (iVar14 = 0; iVar14 < this_ptr->button_count + 1; iVar14 = iVar14 + 1) {
    if ((pCVar10->buttons[0].visible == 1) &&
       (iVar13 = (**(code **)((int)this_ptr->vtable + 0x30))(this_ptr,iVar14), iVar13 != 0)) {
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
  iVar14 = this_ptr->coin_design[1];
  iVar13 = this_ptr->coin_design[2];
  iVar1 = this_ptr->coin_design[3];
  iVar2 = this_ptr->coin_reaction[1];
  iVar3 = this_ptr->coin_reaction[3];
  iVar4 = this_ptr->coin_reaction[2];
  this_ptr->buttons[this_ptr->coin_reaction[0] + this_ptr->coin_design[0] * 3 + 1].visible = 1;
  this_ptr->buttons[iVar2 + iVar14 * 3 + 10].visible = 1;
  this_ptr->buttons[iVar4 + iVar13 * 3 + 0x13].visible = 1;
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
  uVar8 = uVar8 + 1;
  iVar14 = iVar14 + 1;
  if ((0x2a < (int)uVar8) || (2 < this_ptr->selection_count)) goto LAB_00413e95;
  goto LAB_00413e88;
}
