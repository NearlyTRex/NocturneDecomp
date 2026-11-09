// Name: core_fldnotes.cpp_FUN_004acf00
// Address: 004acf00
// Address Range: [[004acf00, 004ad3af]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004acf00(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004acf00(uint param_1,uint param_2)

{
  byte uVar1;
  SNotesMap *pSVar2;
  int iVar3;
  byte *puVar4;
  int iVar5;
  int iVar6;
  int local_3c;
  int local_38;
  SNotesMap *local_34;
  int local_30;
  int local_2c;
  int local_28;
  SNotesMap *local_18;
  int local_14;
  
  FUN_005a3140(param_2,"//-- BEGIN FIELD NOTES ------------------------------\n");
  FUN_005a3140(param_2,"// field notes file version\n");
  FUN_005a3140(param_2,&DAT_005c1a1a,2);
  FUN_005a3140(param_2,"// filename\n");
  iVar5 = 0;
  FUN_005a3140(param_2,"\"%s\"\n",param_1);
  local_3c = 0;
  if (0 < _DAT_01d0d210) {
    local_2c = 0;
    do {
      iVar3 = 0;
      iVar6 = local_2c;
      if (0 < *(int *)(&SNotesSection_ARRAY_01d0d214[0].field_0x150 + local_2c)) {
        do {
          switch(*(uint *)
                  (*(int *)(&SNotesSection_ARRAY_01d0d214[0].field_0x154 + iVar6) + 0x140)) {
          case 0:
          case 2:
          case 5:
            break;
          case 1:
          case 3:
          case 4:
          case 6:
            iVar5 = iVar5 + 1;
            break;
          default:
            _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
            _DAT_01d71de4 = 0xc38;
            core_main_c_FUN_004e4330("Invalid entry item type");
          }
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar3 < *(int *)(&SNotesSection_ARRAY_01d0d214[0].field_0x150 + local_2c));
      }
      local_2c = local_2c + 0x2e4;
      local_3c = local_3c + 1;
    } while (local_3c < _DAT_01d0d210);
  }
  FUN_005a3140(param_2,"// entry count, list(\"name\", type)\n");
  FUN_005a3140(param_2,&DAT_005c1a82,iVar5);
  local_30 = 0;
  if (0 < _DAT_01d0d210) {
    do {
      iVar6 = local_30 * 0x2e4;
      iVar3 = 0;
      if (0 < *(int *)&SNotesSection_ARRAY_01d0d214[local_30].field_0x150) {
        do {
          switch(*(uint *)
                  (*(int *)(&SNotesSection_ARRAY_01d0d214[0].field_0x154 + iVar6) + 0x140)) {
          case 0:
          case 2:
          case 5:
            break;
          case 1:
          case 3:
          case 4:
          case 6:
            iVar5 = iVar5 + -1;
            FUN_005a3140
                      (param_2,"\"%s\", %d\n",
                       *(int *)(&SNotesSection_ARRAY_01d0d214[0].field_0x154 + iVar6),
                       *(uint *)
                        (*(int *)(&SNotesSection_ARRAY_01d0d214[0].field_0x154 + iVar6) + 0x140));
            break;
          default:
            _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
            _DAT_01d71de4 = 0xc50;
            core_main_c_FUN_004e4330("Invalid entry item type");
          }
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar3 < *(int *)&SNotesSection_ARRAY_01d0d214[local_30].field_0x150);
      }
      local_30 = local_30 + 1;
    } while (local_30 < _DAT_01d0d210);
  }
  if (iVar5 != 0) {
    _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
    _DAT_01d71de4 = 0xc54;
    core_main_c_FUN_004e4330("Hell froze");
  }
  iVar5 = 0;
  local_28 = 0;
  if (0 < _DAT_01d0e36c) {
    do {
      if (*(int *)(*(int *)(&SNotesMap_ARRAY_01d0e370[0].field_0x0 + iVar5) + 0x140) == 6) {
        local_28 = local_28 + 1;
      }
      iVar5 = iVar5 + 0x126c;
    } while (iVar5 < _DAT_01d0e36c * 0x126c);
  }
  FUN_005a3140(param_2,"// map coverage count\n");
  FUN_005a3140(param_2,&DAT_005c1af4,local_28);
  local_38 = 0;
  if (0 < _DAT_01d0e36c) {
    local_34 = SNotesMap_ARRAY_01d0e370;
    do {
      iVar5 = *(int *)local_34;
      if (*(int *)(iVar5 + 0x140) == 6) {
        if (local_28 < 1) {
          _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
          _DAT_01d71de4 = 0xc67;
          core_main_c_FUN_004e4330("Hell froze");
        }
        local_28 = local_28 + -1;
        FUN_005a3140(param_2,"// map entry name, xSize, ySize\n");
        FUN_005a3140
                  (param_2,"%s, %d, %d\n",iVar5,*(uint *)&local_34->field_0x94,
                   *(uint *)&local_34->field_0x98);
        FUN_005a3140(param_2,"\t// map coverage data\n");
        local_14 = 0;
        if (0 < *(int *)&local_34->field_0x98) {
          do {
            FUN_005a3140(param_2,&DAT_005c1b5c);
            puVar4 = (byte *)
                     (*(int *)&local_34->field_0x8c + local_14 * *(int *)&local_34->field_0x94);
            iVar5 = 0;
            if (0 < *(int *)&local_34->field_0x94) {
              do {
                uVar1 = *puVar4;
                puVar4 = puVar4 + 1;
                iVar5 = iVar5 + 1;
                FUN_005a3140(param_2,&DAT_005c1b5f,uVar1);
              } while (iVar5 < *(int *)&local_34->field_0x94);
            }
            FUN_005a3140(param_2,&DAT_005c1b64);
            local_14 = local_14 + 1;
          } while (local_14 < *(int *)&local_34->field_0x98);
        }
        iVar5 = 0;
        iVar6 = 0;
        pSVar2 = local_34;
        if (0 < *(int *)&local_34->field_0x5f0) {
          do {
            if (*(int *)&pSVar2->field_0x6c4 != 0) {
              iVar6 = iVar6 + 1;
            }
            iVar5 = iVar5 + 1;
            pSVar2 = (SNotesMap *)&pSVar2->field_0xd4;
          } while (iVar5 < *(int *)&local_34->field_0x5f0);
        }
        FUN_005a3140(param_2,"\t// map annotation count, list\n");
        iVar5 = 0;
        FUN_005a3140(param_2,&DAT_005c1b86,iVar6);
        if (0 < *(int *)&local_34->field_0x5f0) {
          local_18 = local_34;
          do {
            if (*(int *)&local_18->field_0x6c4 != 0) {
              iVar6 = iVar6 + -1;
              FUN_005a3140(param_2,"\t\t%s\n",&local_34->field_0x5f4 + iVar5 * 0xd4)
              ;
            }
            iVar5 = iVar5 + 1;
            local_18 = (SNotesMap *)&local_18->field_0xd4;
          } while (iVar5 < *(int *)&local_34->field_0x5f0);
        }
        if (iVar6 != 0) {
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
  FUN_005a3140(param_2,"//-- END FIELD NOTES --------------------------------\n");
  return;
}
