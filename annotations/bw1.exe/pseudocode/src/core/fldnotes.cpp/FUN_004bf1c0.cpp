// Name: core_fldnotes.cpp_FUN_004bf1c0
// Address: 004bf1c0
// Address Range: [[004bf1c0, 004bf65e]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004bf1c0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004bf1c0(uint param_1,uint param_2)

{
  char cVar1;
  SNotesEntry *pSVar2;
  int iVar3;
  SNotesMap *pSVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int local_3c;
  int local_38;
  SNotesMap *local_34;
  int local_30;
  int local_2c;
  int local_28;
  SNotesMap *local_18;
  int local_14;
  
  FUN_005c03c0(param_2,"//-- BEGIN FIELD NOTES ------------------------------\n");
  FUN_005c03c0(param_2,"// field notes file version\n");
  FUN_005c03c0(param_2,&DAT_005e052b,2);
  FUN_005c03c0(param_2,"// filename\n");
  iVar6 = 0;
  FUN_005c03c0(param_2,"\"%s\"\n",param_1);
  local_3c = 0;
  if (0 < _DAT_01cc4470) {
    local_2c = 0;
    do {
      iVar5 = 0;
      iVar8 = local_2c;
      if (0 < *(int *)((int)SNotesSection_ARRAY_01cc4474[0].entries + local_2c + -4)) {
        do {
          switch(*(uint *)
                  (*(int *)((int)SNotesSection_ARRAY_01cc4474[0].entries + iVar8) + 0x140)) {
          case 0:
          case 2:
          case 5:
            break;
          case 1:
          case 3:
          case 4:
          case 6:
            iVar6 = iVar6 + 1;
            break;
          default:
            _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
            _DAT_01d1d404 = 0xc20;
            core_main_c_FUN_005030e0("Invalid entry item type");
          }
          iVar5 = iVar5 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar5 < *(int *)((int)SNotesSection_ARRAY_01cc4474[0].entries + local_2c + -4));
      }
      local_2c = local_2c + 0x2e4;
      local_3c = local_3c + 1;
    } while (local_3c < _DAT_01cc4470);
  }
  FUN_005c03c0(param_2,"// entry count, list(\"name\", type)\n");
  FUN_005c03c0(param_2,&DAT_005e0593,iVar6);
  local_30 = 0;
  if (0 < _DAT_01cc4470) {
    do {
      iVar8 = local_30 * 0x2e4;
      iVar5 = 0;
      if (0 < SNotesSection_ARRAY_01cc4474[local_30].entry_count) {
        do {
          switch(*(uint *)
                  (*(int *)((int)SNotesSection_ARRAY_01cc4474[0].entries + iVar8) + 0x140)) {
          case 0:
          case 2:
          case 5:
            break;
          case 1:
          case 3:
          case 4:
          case 6:
            iVar3 = *(int *)((int)SNotesSection_ARRAY_01cc4474[0].entries + iVar8);
            iVar6 = iVar6 + -1;
            FUN_005c03c0(param_2,"\"%s\", %d\n",iVar3,*(uint *)(iVar3 + 0x140));
            break;
          default:
            _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
            _DAT_01d1d404 = 0xc38;
            core_main_c_FUN_005030e0("Invalid entry item type");
          }
          iVar5 = iVar5 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar5 < SNotesSection_ARRAY_01cc4474[local_30].entry_count);
      }
      local_30 = local_30 + 1;
    } while (local_30 < _DAT_01cc4470);
  }
  if (iVar6 != 0) {
    _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
    _DAT_01d1d404 = 0xc3c;
    core_main_c_FUN_005030e0("Hell froze");
  }
  iVar6 = 0;
  local_28 = 0;
  if (0 < _DAT_01cc55cc) {
    do {
      if (*(int *)(*(int *)(SNotesMap_ARRAY_01cc55d0[0].image_name + iVar6 + -4) + 0x140) == 6) {
        local_28 = local_28 + 1;
      }
      iVar6 = iVar6 + 0x970;
    } while (iVar6 < _DAT_01cc55cc * 0x970);
  }
  FUN_005c03c0(param_2,"// map coverage count\n");
  FUN_005c03c0(param_2,&DAT_005e0605,local_28);
  local_38 = 0;
  if (0 < _DAT_01cc55cc) {
    local_34 = SNotesMap_ARRAY_01cc55d0;
    do {
      pSVar2 = local_34->entry;
      if (pSVar2->kind == 6) {
        if (local_28 < 1) {
          _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
          _DAT_01d1d404 = 0xc4f;
          core_main_c_FUN_005030e0("Hell froze");
        }
        local_28 = local_28 + -1;
        FUN_005c03c0(param_2,"// map entry name, xSize, ySize\n");
        FUN_005c03c0
                  (param_2,"%s, %d, %d\n",pSVar2,(local_34->reveal_mask).width,
                   (local_34->reveal_mask).height);
        FUN_005c03c0(param_2,"\t// map coverage data\n");
        local_14 = 0;
        if (0 < (local_34->reveal_mask).height) {
          do {
            FUN_005c03c0(param_2,&DAT_005e066d);
            pcVar7 = (local_34->reveal_mask).opa + local_14 * (local_34->reveal_mask).width;
            iVar6 = 0;
            if (0 < (local_34->reveal_mask).width) {
              do {
                cVar1 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                iVar6 = iVar6 + 1;
                FUN_005c03c0(param_2,&DAT_005e0670,cVar1);
              } while (iVar6 < (local_34->reveal_mask).width);
            }
            FUN_005c03c0(param_2,&DAT_005e0675);
            local_14 = local_14 + 1;
          } while (local_14 < (local_34->reveal_mask).height);
        }
        iVar8 = 0;
        iVar6 = 0;
        pSVar4 = local_34;
        if (0 < local_34->annotation_count) {
          do {
            if (pSVar4->annotations[0].visible != 0) {
              iVar6 = iVar6 + 1;
            }
            iVar8 = iVar8 + 1;
            pSVar4 = (SNotesMap *)(pSVar4->sets[0].level_name + 0x34);
          } while (iVar8 < local_34->annotation_count);
        }
        FUN_005c03c0(param_2,"\t// map annotation count, list\n");
        iVar8 = 0;
        FUN_005c03c0(param_2,&DAT_005e0697,iVar6);
        if (0 < local_34->annotation_count) {
          local_18 = local_34;
          do {
            if (local_18->annotations[0].visible != 0) {
              iVar6 = iVar6 + -1;
              FUN_005c03c0(param_2,"\t\t%s\n",local_34->annotations + iVar8);
            }
            iVar8 = iVar8 + 1;
            local_18 = (SNotesMap *)(local_18->sets[0].level_name + 0x34);
          } while (iVar8 < local_34->annotation_count);
        }
        if (iVar6 != 0) {
          _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
          _DAT_01d1d404 = 0xc6d;
          core_main_c_FUN_005030e0("Hell froze.");
        }
      }
      local_34 = local_34 + 1;
      local_38 = local_38 + 1;
    } while (local_38 < _DAT_01cc55cc);
  }
  if (local_28 != 0) {
    _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
    _DAT_01d1d404 = 0xc71;
    core_main_c_FUN_005030e0("Hell froze");
  }
  FUN_005c03c0(param_2,"//-- END FIELD NOTES --------------------------------\n");
  return;
}
