// Name: core_fldnotes.cpp_CFieldNotes_saveState_FUN_004acf00
// Address: 004acf00
// Address Range: [[004acf00, 004ad3af]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_saveState_FUN_004acf00(CFieldNotes *this_ptr,_FILE *file)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_CFieldNotes_saveState_FUN_004acf00(CFieldNotes *this_ptr,_FILE *file)

{
  SNotesMap *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_3c;
  int local_38;
  SNotesMap *local_34;
  int local_30;
  int local_2c;
  int local_28;
  SNotesMap *local_18;
  int local_14;
  
  _fprintf(file,"//-- BEGIN FIELD NOTES ------------------------------\n");
  _fprintf(file,"// field notes file version\n");
  _fprintf(file,&DAT_005c1a1a);
  _fprintf(file,"// filename\n");
  iVar3 = 0;
  _fprintf(file,"\"%s\"\n");
  local_3c = 0;
  if (0 < _DAT_01d0d210) {
    local_2c = 0;
    do {
      iVar2 = 0;
      iVar4 = local_2c;
      if (0 < *(int *)((int)SNotesSection_ARRAY_01d0d214[0].entries + local_2c + -4)) {
        do {
          switch(*(uint *)
                  (*(int *)((int)SNotesSection_ARRAY_01d0d214[0].entries + iVar4) + 0x140)) {
          case 0:
          case 2:
          case 5:
            break;
          case 1:
          case 3:
          case 4:
          case 6:
            iVar3 = iVar3 + 1;
            break;
          default:
            _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
            _DAT_01d71de4 = 0xc38;
            core_main_c_displayErrorAndQuit_FUN_004e4330("Invalid entry item type");
          }
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar2 < *(int *)((int)SNotesSection_ARRAY_01d0d214[0].entries + local_2c + -4));
      }
      local_2c = local_2c + 0x2e4;
      local_3c = local_3c + 1;
    } while (local_3c < _DAT_01d0d210);
  }
  _fprintf(file,"// entry count, list(\"name\", type)\n");
  _fprintf(file,&DAT_005c1a82);
  local_30 = 0;
  if (0 < _DAT_01d0d210) {
    do {
      iVar4 = local_30 * 0x2e4;
      iVar2 = 0;
      if (0 < SNotesSection_ARRAY_01d0d214[local_30].entry_count) {
        do {
          switch(*(uint *)
                  (*(int *)((int)SNotesSection_ARRAY_01d0d214[0].entries + iVar4) + 0x140)) {
          case 0:
          case 2:
          case 5:
            break;
          case 1:
          case 3:
          case 4:
          case 6:
            iVar3 = iVar3 + -1;
            _fprintf(file,"\"%s\", %d\n");
            break;
          default:
            _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
            _DAT_01d71de4 = 0xc50;
            core_main_c_displayErrorAndQuit_FUN_004e4330("Invalid entry item type");
          }
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar2 < SNotesSection_ARRAY_01d0d214[local_30].entry_count);
      }
      local_30 = local_30 + 1;
    } while (local_30 < _DAT_01d0d210);
  }
  if (iVar3 != 0) {
    _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
    _DAT_01d71de4 = 0xc54;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Hell froze");
  }
  iVar3 = 0;
  local_28 = 0;
  if (0 < _DAT_01d0e36c) {
    do {
      if (*(int *)(*(int *)(SNotesMap_ARRAY_01d0e370[0].image_name + iVar3 + -4) + 0x140) == 6) {
        local_28 = local_28 + 1;
      }
      iVar3 = iVar3 + 0x126c;
    } while (iVar3 < _DAT_01d0e36c * 0x126c);
  }
  _fprintf(file,"// map coverage count\n");
  _fprintf(file,&DAT_005c1af4);
  local_38 = 0;
  if (0 < _DAT_01d0e36c) {
    local_34 = SNotesMap_ARRAY_01d0e370;
    do {
      if (local_34->entry->kind == 6) {
        if (local_28 < 1) {
          _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
          _DAT_01d71de4 = 0xc67;
          core_main_c_displayErrorAndQuit_FUN_004e4330("Hell froze");
        }
        local_28 = local_28 + -1;
        _fprintf(file,"// map entry name, xSize, ySize\n");
        _fprintf(file,"%s, %d, %d\n");
        _fprintf(file,"\t// map coverage data\n");
        local_14 = 0;
        if (0 < (local_34->reveal_mask).height) {
          do {
            _fprintf(file,&DAT_005c1b5c);
            iVar3 = 0;
            if (0 < (local_34->reveal_mask).width) {
              do {
                iVar3 = iVar3 + 1;
                _fprintf(file,&DAT_005c1b5f);
              } while (iVar3 < (local_34->reveal_mask).width);
            }
            _fprintf(file,&DAT_005c1b64);
            local_14 = local_14 + 1;
          } while (local_14 < (local_34->reveal_mask).height);
        }
        iVar3 = 0;
        iVar4 = 0;
        pSVar1 = local_34;
        if (0 < local_34->annotation_count) {
          do {
            if (pSVar1->annotations[0].visible != 0) {
              iVar4 = iVar4 + 1;
            }
            iVar3 = iVar3 + 1;
            pSVar1 = (SNotesMap *)(pSVar1->sets[0].level_name + 0x34);
          } while (iVar3 < local_34->annotation_count);
        }
        _fprintf(file,"\t// map annotation count, list\n");
        iVar3 = 0;
        _fprintf(file,&DAT_005c1b86);
        if (0 < local_34->annotation_count) {
          local_18 = local_34;
          do {
            if (local_18->annotations[0].visible != 0) {
              iVar4 = iVar4 + -1;
              _fprintf(file,"\t\t%s\n");
            }
            iVar3 = iVar3 + 1;
            local_18 = (SNotesMap *)(local_18->sets[0].level_name + 0x34);
          } while (iVar3 < local_34->annotation_count);
        }
        if (iVar4 != 0) {
          _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
          _DAT_01d71de4 = 0xc85;
          core_main_c_displayErrorAndQuit_FUN_004e4330("Hell froze.");
        }
      }
      local_34 = local_34 + 1;
      local_38 = local_38 + 1;
    } while (local_38 < _DAT_01d0e36c);
  }
  if (local_28 != 0) {
    _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
    _DAT_01d71de4 = 0xc89;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Hell froze");
  }
  _fprintf(file,"//-- END FIELD NOTES --------------------------------\n");
  return;
}
