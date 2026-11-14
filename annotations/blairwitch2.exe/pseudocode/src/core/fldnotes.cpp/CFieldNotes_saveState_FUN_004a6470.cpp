// Name: core_fldnotes.cpp_CFieldNotes_saveState_FUN_004a6470
// Address: 004a6470
// Address Range: [[004a6470, 004a6689]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_saveState_FUN_004a6470(CFieldNotes *this_ptr,_FILE *file)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_CFieldNotes_saveState_FUN_004a6470(CFieldNotes *this_ptr,_FILE *file)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int local_18;
  int local_14;
  
  FUN_005b8010(file,"//-- BEGIN FIELD NOTES ------------------------------\n");
  FUN_005b8010(file,"// field notes file version\n");
  FUN_005b8010(file,&DAT_005d65a7,1);
  FUN_005b8010(file,"// filename\n");
  iVar3 = 0;
  FUN_005b8010(file,"\"%s\"\n",this_ptr);
  local_1c = 0;
  if (0 < _DAT_01cab9f0) {
    local_14 = 0;
    do {
      iVar2 = 0;
      iVar4 = local_14;
      if (0 < *(int *)((int)SNotesSection_ARRAY_01cab9f4[0].entries + local_14 + -4)) {
        do {
          switch(*(uint *)
                  (*(int *)((int)SNotesSection_ARRAY_01cab9f4[0].entries + iVar4) + 0x140)) {
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
            _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
            _DAT_01d046a4 = 0xb83;
            core_main_c_FUN_004e4500("Invalid entry item type");
          }
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar2 < *(int *)((int)SNotesSection_ARRAY_01cab9f4[0].entries + local_14 + -4));
      }
      local_14 = local_14 + 0x2e4;
      local_1c = local_1c + 1;
    } while (local_1c < _DAT_01cab9f0);
  }
  FUN_005b8010(file,"// entry count, list(\"name\", type)\n");
  FUN_005b8010(file,&DAT_005d660f,iVar3);
  local_18 = 0;
  if (0 < _DAT_01cab9f0) {
    do {
      iVar4 = local_18 * 0x2e4;
      iVar2 = 0;
      if (0 < SNotesSection_ARRAY_01cab9f4[local_18].entry_count) {
        do {
          switch(*(uint *)
                  (*(int *)((int)SNotesSection_ARRAY_01cab9f4[0].entries + iVar4) + 0x140)) {
          case 0:
          case 2:
          case 5:
            break;
          case 1:
          case 3:
          case 4:
          case 6:
            iVar1 = *(int *)((int)SNotesSection_ARRAY_01cab9f4[0].entries + iVar4);
            iVar3 = iVar3 + -1;
            FUN_005b8010(file,"\"%s\", %d\n",iVar1,*(uint *)(iVar1 + 0x140));
            break;
          default:
            _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
            _DAT_01d046a4 = 0xb9b;
            core_main_c_FUN_004e4500("Invalid entry item type");
          }
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar2 < SNotesSection_ARRAY_01cab9f4[local_18].entry_count);
      }
      local_18 = local_18 + 1;
    } while (local_18 < _DAT_01cab9f0);
  }
  if (iVar3 != 0) {
    _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
    _DAT_01d046a4 = 0xb9f;
    core_main_c_FUN_004e4500("Hell froze");
  }
  FUN_005b8010(file,"//-- END FIELD NOTES --------------------------------\n");
  return;
}
