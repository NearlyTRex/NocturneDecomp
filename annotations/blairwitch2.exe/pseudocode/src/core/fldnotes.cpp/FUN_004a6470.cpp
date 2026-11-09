// Name: core_fldnotes.cpp_FUN_004a6470
// Address: 004a6470
// Address Range: [[004a6470, 004a6689]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004a6470(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004a6470(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  int local_18;
  int local_14;
  
  FUN_005b8010(param_2,"//-- BEGIN FIELD NOTES ------------------------------\n");
  FUN_005b8010(param_2,"// field notes file version\n");
  FUN_005b8010(param_2,&DAT_005d65a7,1);
  FUN_005b8010(param_2,"// filename\n");
  iVar2 = 0;
  FUN_005b8010(param_2,"\"%s\"\n",param_1);
  local_1c = 0;
  if (0 < _DAT_01cab9f0) {
    local_14 = 0;
    do {
      iVar1 = 0;
      iVar3 = local_14;
      if (0 < *(int *)(&SNotesSection_ARRAY_01cab9f4[0].field_0x150 + local_14)) {
        do {
          switch(*(uint *)
                  (*(int *)(&SNotesSection_ARRAY_01cab9f4[0].field_0x154 + iVar3) + 0x140)) {
          case 0:
          case 2:
          case 5:
            break;
          case 1:
          case 3:
          case 4:
          case 6:
            iVar2 = iVar2 + 1;
            break;
          default:
            _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
            _DAT_01d046a4 = 0xb83;
            core_main_c_FUN_004e4500("Invalid entry item type");
          }
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar1 < *(int *)(&SNotesSection_ARRAY_01cab9f4[0].field_0x150 + local_14));
      }
      local_14 = local_14 + 0x2e4;
      local_1c = local_1c + 1;
    } while (local_1c < _DAT_01cab9f0);
  }
  FUN_005b8010(param_2,"// entry count, list(\"name\", type)\n");
  FUN_005b8010(param_2,&DAT_005d660f,iVar2);
  local_18 = 0;
  if (0 < _DAT_01cab9f0) {
    do {
      iVar3 = local_18 * 0x2e4;
      iVar1 = 0;
      if (0 < *(int *)&SNotesSection_ARRAY_01cab9f4[local_18].field_0x150) {
        do {
          switch(*(uint *)
                  (*(int *)(&SNotesSection_ARRAY_01cab9f4[0].field_0x154 + iVar3) + 0x140)) {
          case 0:
          case 2:
          case 5:
            break;
          case 1:
          case 3:
          case 4:
          case 6:
            iVar2 = iVar2 + -1;
            FUN_005b8010
                      (param_2,"\"%s\", %d\n",
                       *(int *)(&SNotesSection_ARRAY_01cab9f4[0].field_0x154 + iVar3),
                       *(uint *)
                        (*(int *)(&SNotesSection_ARRAY_01cab9f4[0].field_0x154 + iVar3) + 0x140));
            break;
          default:
            _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
            _DAT_01d046a4 = 0xb9b;
            core_main_c_FUN_004e4500("Invalid entry item type");
          }
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar1 < *(int *)&SNotesSection_ARRAY_01cab9f4[local_18].field_0x150);
      }
      local_18 = local_18 + 1;
    } while (local_18 < _DAT_01cab9f0);
  }
  if (iVar2 != 0) {
    _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
    _DAT_01d046a4 = 0xb9f;
    core_main_c_FUN_004e4500("Hell froze");
  }
  FUN_005b8010(param_2,"//-- END FIELD NOTES --------------------------------\n");
  return;
}
