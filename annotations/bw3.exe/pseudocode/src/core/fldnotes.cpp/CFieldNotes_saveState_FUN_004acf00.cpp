// Name: core_fldnotes.cpp_CFieldNotes_saveState_FUN_004acf00
// Address: 004acf00
// Address Range: [[004acf00, 004ad3af]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_saveState_FUN_004acf00(CFieldNotes *this_ptr,_FILE *file)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_CFieldNotes_saveState_FUN_004acf00(CFieldNotes *this_ptr,_FILE *file)

{
  char cVar1;
  SNotesEntry *pSVar2;
  int iVar3;
  SNotesMap *pSVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int local_3c;
  int local_38;
  SNotesMap *local_34;
  int local_30;
  int local_2c;
  int local_28;
  SNotesMap *local_18;
  int local_14;
  
  FUN_005a3140(file,"//-- BEGIN FIELD NOTES ------------------------------\n");
  FUN_005a3140(file,"// field notes file version\n");
  FUN_005a3140(file,&DAT_005c1a1a,2);
  FUN_005a3140(file,"// filename\n");
  iVar7 = 0;
  FUN_005a3140(file,"\"%s\"\n",this_ptr);
  local_3c = 0;
  if (0 < _DAT_01d0d210) {
    local_2c = 0;
    do {
      iVar5 = 0;
      iVar8 = local_2c;
      if (0 < *(int *)((int)SNotesSection_ARRAY_01d0d214[0].entries + local_2c + -4)) {
        do {
          switch(*(uint *)
                  (*(int *)((int)SNotesSection_ARRAY_01d0d214[0].entries + iVar8) + 0x140)) {
          case 0:
          case 2:
          case 5:
            break;
          case 1:
          case 3:
          case 4:
          case 6:
            iVar7 = iVar7 + 1;
            break;
          default:
            _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
            _DAT_01d71de4 = 0xc38;
            core_main_c_FUN_004e4330("Invalid entry item type");
          }
          iVar5 = iVar5 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar5 < *(int *)((int)SNotesSection_ARRAY_01d0d214[0].entries + local_2c + -4));
      }
      local_2c = local_2c + 0x2e4;
      local_3c = local_3c + 1;
    } while (local_3c < _DAT_01d0d210);
  }
  FUN_005a3140(file,"// entry count, list(\"name\", type)\n");
  FUN_005a3140(file,&DAT_005c1a82,iVar7);
  local_30 = 0;
  if (0 < _DAT_01d0d210) {
    do {
      iVar8 = local_30 * 0x2e4;
      iVar5 = 0;
      if (0 < SNotesSection_ARRAY_01d0d214[local_30].entry_count) {
        do {
          switch(*(uint *)
                  (*(int *)((int)SNotesSection_ARRAY_01d0d214[0].entries + iVar8) + 0x140)) {
          case 0:
          case 2:
          case 5:
            break;
          case 1:
          case 3:
          case 4:
          case 6:
            iVar3 = *(int *)((int)SNotesSection_ARRAY_01d0d214[0].entries + iVar8);
            iVar7 = iVar7 + -1;
            FUN_005a3140(file,"\"%s\", %d\n",iVar3,*(uint *)(iVar3 + 0x140));
            break;
          default:
            _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
            _DAT_01d71de4 = 0xc50;
            core_main_c_FUN_004e4330("Invalid entry item type");
          }
          iVar5 = iVar5 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar5 < SNotesSection_ARRAY_01d0d214[local_30].entry_count);
      }
      local_30 = local_30 + 1;
    } while (local_30 < _DAT_01d0d210);
  }
  if (iVar7 != 0) {
    _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
    _DAT_01d71de4 = 0xc54;
    core_main_c_FUN_004e4330("Hell froze");
  }
  iVar7 = 0;
  local_28 = 0;
  if (0 < _DAT_01d0e36c) {
    do {
      if (*(int *)(*(int *)(SNotesMap_ARRAY_01d0e370[0].image_name + iVar7 + -4) + 0x140) == 6) {
        local_28 = local_28 + 1;
      }
      iVar7 = iVar7 + 0x126c;
    } while (iVar7 < _DAT_01d0e36c * 0x126c);
  }
  FUN_005a3140(file,"// map coverage count\n");
  FUN_005a3140(file,&DAT_005c1af4,local_28);
  local_38 = 0;
  if (0 < _DAT_01d0e36c) {
    local_34 = SNotesMap_ARRAY_01d0e370;
    do {
      pSVar2 = local_34->entry;
      if (pSVar2->kind == 6) {
        if (local_28 < 1) {
          _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
          _DAT_01d71de4 = 0xc67;
          core_main_c_FUN_004e4330("Hell froze");
        }
        local_28 = local_28 + -1;
        FUN_005a3140(file,"// map entry name, xSize, ySize\n");
        FUN_005a3140
                  (file,"%s, %d, %d\n",pSVar2,(local_34->reveal_mask).width,
                   (local_34->reveal_mask).height);
        FUN_005a3140(file,"\t// map coverage data\n");
        local_14 = 0;
        if (0 < (local_34->reveal_mask).height) {
          do {
            FUN_005a3140(file,&DAT_005c1b5c);
            pcVar6 = (local_34->reveal_mask).opa + local_14 * (local_34->reveal_mask).width;
            iVar7 = 0;
            if (0 < (local_34->reveal_mask).width) {
              do {
                cVar1 = *pcVar6;
                pcVar6 = pcVar6 + 1;
                iVar7 = iVar7 + 1;
                FUN_005a3140(file,&DAT_005c1b5f,cVar1);
              } while (iVar7 < (local_34->reveal_mask).width);
            }
            FUN_005a3140(file,&DAT_005c1b64);
            local_14 = local_14 + 1;
          } while (local_14 < (local_34->reveal_mask).height);
        }
        iVar7 = 0;
        iVar8 = 0;
        pSVar4 = local_34;
        if (0 < local_34->annotation_count) {
          do {
            if (pSVar4->annotations[0].visible != 0) {
              iVar8 = iVar8 + 1;
            }
            iVar7 = iVar7 + 1;
            pSVar4 = (SNotesMap *)(pSVar4->sets[0].level_name + 0x34);
          } while (iVar7 < local_34->annotation_count);
        }
        FUN_005a3140(file,"\t// map annotation count, list\n");
        iVar7 = 0;
        FUN_005a3140(file,&DAT_005c1b86,iVar8);
        if (0 < local_34->annotation_count) {
          local_18 = local_34;
          do {
            if (local_18->annotations[0].visible != 0) {
              iVar8 = iVar8 + -1;
              FUN_005a3140(file,"\t\t%s\n",local_34->annotations + iVar7);
            }
            iVar7 = iVar7 + 1;
            local_18 = (SNotesMap *)(local_18->sets[0].level_name + 0x34);
          } while (iVar7 < local_34->annotation_count);
        }
        if (iVar8 != 0) {
          _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
          _DAT_01d71de4 = 0xc85;
          core_main_c_FUN_004e4330("Hell froze.");
        }
      }
      local_34 = local_34 + 1;
      local_38 = local_38 + 1;
    } while (local_38 < _DAT_01d0e36c);
  }
  if (local_28 != 0) {
    _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
    _DAT_01d71de4 = 0xc89;
    core_main_c_FUN_004e4330("Hell froze");
  }
  FUN_005a3140(file,"//-- END FIELD NOTES --------------------------------\n");
  return;
}
