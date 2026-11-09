// Name: core_fldnotes.cpp_FUN_004bf1c0
// Address: 004bf1c0
// Address Range: [[004bf1c0, 004bf65e]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004bf1c0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004bf1c0(uint param_1,uint param_2)

{
  byte uVar1;
  SNotesMap *pSVar2;
  int iVar3;
  int iVar4;
  byte *puVar5;
  int iVar6;
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
  iVar4 = 0;
  FUN_005c03c0(param_2,"\"%s\"\n",param_1);
  local_3c = 0;
  if (0 < _DAT_01cc4470) {
    local_2c = 0;
    do {
      iVar3 = 0;
      iVar6 = local_2c;
      if (0 < *(int *)(&SNotesSection_ARRAY_01cc4474[0].field_0x150 + local_2c)) {
        do {
          switch(*(uint *)
                  (*(int *)(&SNotesSection_ARRAY_01cc4474[0].field_0x154 + iVar6) + 0x140)) {
          case 0:
          case 2:
          case 5:
            break;
          case 1:
          case 3:
          case 4:
          case 6:
            iVar4 = iVar4 + 1;
            break;
          default:
            _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
            _DAT_01d1d404 = 0xc20;
            core_main_c_FUN_005030e0("Invalid entry item type");
          }
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar3 < *(int *)(&SNotesSection_ARRAY_01cc4474[0].field_0x150 + local_2c));
      }
      local_2c = local_2c + 0x2e4;
      local_3c = local_3c + 1;
    } while (local_3c < _DAT_01cc4470);
  }
  FUN_005c03c0(param_2,"// entry count, list(\"name\", type)\n");
  FUN_005c03c0(param_2,&DAT_005e0593,iVar4);
  local_30 = 0;
  if (0 < _DAT_01cc4470) {
    do {
      iVar6 = local_30 * 0x2e4;
      iVar3 = 0;
      if (0 < *(int *)&SNotesSection_ARRAY_01cc4474[local_30].field_0x150) {
        do {
          switch(*(uint *)
                  (*(int *)(&SNotesSection_ARRAY_01cc4474[0].field_0x154 + iVar6) + 0x140)) {
          case 0:
          case 2:
          case 5:
            break;
          case 1:
          case 3:
          case 4:
          case 6:
            iVar4 = iVar4 + -1;
            FUN_005c03c0
                      (param_2,"\"%s\", %d\n",
                       *(int *)(&SNotesSection_ARRAY_01cc4474[0].field_0x154 + iVar6),
                       *(uint *)
                        (*(int *)(&SNotesSection_ARRAY_01cc4474[0].field_0x154 + iVar6) + 0x140));
            break;
          default:
            _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
            _DAT_01d1d404 = 0xc38;
            core_main_c_FUN_005030e0("Invalid entry item type");
          }
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar3 < *(int *)&SNotesSection_ARRAY_01cc4474[local_30].field_0x150);
      }
      local_30 = local_30 + 1;
    } while (local_30 < _DAT_01cc4470);
  }
  if (iVar4 != 0) {
    _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
    _DAT_01d1d404 = 0xc3c;
    core_main_c_FUN_005030e0("Hell froze");
  }
  iVar4 = 0;
  local_28 = 0;
  if (0 < _DAT_01cc55cc) {
    do {
      if (*(int *)(*(int *)(&SNotesMap_ARRAY_01cc55d0[0].field_0x0 + iVar4) + 0x140) == 6) {
        local_28 = local_28 + 1;
      }
      iVar4 = iVar4 + 0x970;
    } while (iVar4 < _DAT_01cc55cc * 0x970);
  }
  FUN_005c03c0(param_2,"// map coverage count\n");
  FUN_005c03c0(param_2,&DAT_005e0605,local_28);
  local_38 = 0;
  if (0 < _DAT_01cc55cc) {
    local_34 = SNotesMap_ARRAY_01cc55d0;
    do {
      iVar4 = *(int *)local_34;
      if (*(int *)(iVar4 + 0x140) == 6) {
        if (local_28 < 1) {
          _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
          _DAT_01d1d404 = 0xc4f;
          core_main_c_FUN_005030e0("Hell froze");
        }
        local_28 = local_28 + -1;
        FUN_005c03c0(param_2,"// map entry name, xSize, ySize\n");
        FUN_005c03c0
                  (param_2,"%s, %d, %d\n",iVar4,*(uint *)&local_34->field_0x94,
                   *(uint *)&local_34->field_0x98);
        FUN_005c03c0(param_2,"\t// map coverage data\n");
        local_14 = 0;
        if (0 < *(int *)&local_34->field_0x98) {
          do {
            FUN_005c03c0(param_2,&DAT_005e066d);
            puVar5 = (byte *)
                     (local_14 * *(int *)&local_34->field_0x94 + *(int *)&local_34->field_0x8c);
            iVar4 = 0;
            if (0 < *(int *)&local_34->field_0x94) {
              do {
                uVar1 = *puVar5;
                puVar5 = puVar5 + 1;
                iVar4 = iVar4 + 1;
                FUN_005c03c0(param_2,&DAT_005e0670,uVar1);
              } while (iVar4 < *(int *)&local_34->field_0x94);
            }
            FUN_005c03c0(param_2,&DAT_005e0675);
            local_14 = local_14 + 1;
          } while (local_14 < *(int *)&local_34->field_0x98);
        }
        iVar6 = 0;
        iVar4 = 0;
        pSVar2 = local_34;
        if (0 < *(int *)&local_34->field_0x2c0) {
          do {
            if (*(int *)&pSVar2->field_0x394 != 0) {
              iVar4 = iVar4 + 1;
            }
            iVar6 = iVar6 + 1;
            pSVar2 = (SNotesMap *)&pSVar2->field_0xd4;
          } while (iVar6 < *(int *)&local_34->field_0x2c0);
        }
        FUN_005c03c0(param_2,"\t// map annotation count, list\n");
        iVar6 = 0;
        FUN_005c03c0(param_2,&DAT_005e0697,iVar4);
        if (0 < *(int *)&local_34->field_0x2c0) {
          local_18 = local_34;
          do {
            if (*(int *)&local_18->field_0x394 != 0) {
              iVar4 = iVar4 + -1;
              FUN_005c03c0(param_2,"\t\t%s\n",&local_34->field_0x2c4 + iVar6 * 0xd4)
              ;
            }
            iVar6 = iVar6 + 1;
            local_18 = (SNotesMap *)&local_18->field_0xd4;
          } while (iVar6 < *(int *)&local_34->field_0x2c0);
        }
        if (iVar4 != 0) {
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
