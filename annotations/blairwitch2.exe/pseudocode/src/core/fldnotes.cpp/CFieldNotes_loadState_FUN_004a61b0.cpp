// Name: core_fldnotes.cpp_CFieldNotes_loadState_FUN_004a61b0
// Address: 004a61b0
// Address Range: [[004a61b0, 004a6437]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_loadState_FUN_004a61b0(CFieldNotes *this_ptr,_FILE *file)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_CFieldNotes_loadState_FUN_004a61b0(CFieldNotes *this_ptr,_FILE *file)

{
  SNotesEntry *pSVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  SNotesSection *this_ptr_00;
  char *pcVar6;
  byte bVar7;
  char local_220 [256];
  char local_120 [256];
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  
  bVar7 = 0;
  core_fldnotes_cpp_CFieldNotes_clear_FUN_004a50b0(this_ptr);
  local_20 = 0;
  _fscanf(file,"%*[^\n]\n");
  _fscanf(file,"%*[^\n]\n");
  _fscanf(file,&DAT_005d6470);
  if ((local_20 < 1) || (1 < local_20)) {
    _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
    _DAT_01d046a4 = 0xb30;
    core_main_c_FUN_004e4500("Invalid field notes file version: %d, latest this .exe supports is %d",local_20,1);
  }
  puVar4 = &DAT_00616048;
  pcVar5 = local_120;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    pcVar5 = pcVar5 + ((uint)bVar7 * -2 + 1) * 4;
  }
  _fscanf(file,"%*[^\n]\n");
  _fscanf(file," \"%[^\"]");
  _fscanf(file,&DAT_005d64df);
  if (local_120[0] != '\0') {
    core_fldnotes_cpp_CFieldNotes_loadFile_FUN_004a41b0(this_ptr,local_120,(char *)0x0);
    local_1c = 0;
    _fscanf(file,"%*[^\n]\n");
    _fscanf(file,&DAT_005d64ea);
    iVar2 = 0;
    if (0 < local_1c) {
      do {
        pcVar5 = "(parse error)";
        pcVar6 = local_220;
        for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(uint *)pcVar6 = *(uint *)pcVar5;
          pcVar5 = pcVar5 + ((uint)bVar7 * -2 + 1) * 4;
          pcVar6 = (char *)((int)pcVar6 + ((uint)bVar7 * -2 + 1) * 4);
        }
        iVar3 = 0;
        _fscanf(file,"\"%[^\"]\", %d\n");
        local_14 = (int *)0x0;
        if (0 < _DAT_01cab9f0) {
          this_ptr_00 = SNotesSection_ARRAY_01cab9f4;
          do {
            pSVar1 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004a35e0(this_ptr_00,local_220);
            if (pSVar1 != (SNotesEntry *)0x0) {
              if (local_14 != (int *)0x0) {
                *local_14 = iVar3;
              }
              if (pSVar1 != (SNotesEntry *)0x0) {
                pSVar1->kind = local_18;
                goto LAB_004a63af;
              }
              break;
            }
            iVar3 = iVar3 + 1;
            this_ptr_00 = this_ptr_00 + 1;
          } while (iVar3 < _DAT_01cab9f0);
        }
        shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                  (g_CEditorToolsPtr,"Ignoring saved game reference to field notes entry %s which doesn't exist in %s");
LAB_004a63af:
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_1c);
    }
    iVar2 = 0;
    if (0 < _DAT_01cacb4c) {
      iVar3 = 0;
      do {
        if (*(int *)(*(int *)(SNotesMap_ARRAY_01cacb50[0].image_name + iVar3 + -4) + 0x140) == 6) {
          engine_alphabit_cpp_FUN_0040dd20(iVar3 + 0x1cacbd8,0xff);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x970;
      } while (iVar2 < _DAT_01cacb4c);
    }
  }
  _fscanf(file,"%*[^\n]\n");
  return;
}
