// Name: core_fldnotes.cpp_CFieldNotes_loadState_FUN_004bebc0
// Address: 004bebc0
// Address Range: [[004bebc0, 004bf178]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_loadState_FUN_004bebc0(CFieldNotes *this_ptr,_FILE *file)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_CFieldNotes_loadState_FUN_004bebc0(CFieldNotes *this_ptr,_FILE *file)

{
  SNotesEntry *pSVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint *puVar5;
  SNotesSection *pSVar6;
  int iVar7;
  char *pcVar8;
  byte bVar9;
  char acStack_44c [256];
  char local_34c [256];
  char local_24c [256];
  char local_14c [256];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  char local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  int local_20;
  char *local_1c;
  char *local_18;
  int local_14;
  
  bVar9 = 0;
  core_fldnotes_cpp_CFieldNotes_clear_FUN_004bdaa0(this_ptr);
  local_4c = 0;
  _fscanf(file,"%*[^\n]\n");
  _fscanf(file,"%*[^\n]\n");
  _fscanf(file,&DAT_005e02da);
  if ((local_4c < 1) || (2 < local_4c)) {
    _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
    _DAT_01d1d404 = 0xb96;
    core_main_c_FUN_005030e0("Invalid field notes file version: %d, latest this .exe supports is %d",local_4c,2);
  }
  puVar5 = &DAT_0061d420;
  pcVar4 = local_34c;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar4 = *puVar5;
    puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
    pcVar4 = pcVar4 + ((uint)bVar9 * -2 + 1) * 4;
  }
  _fscanf(file,"%*[^\n]\n");
  _fscanf(file," \"%[^\"]");
  _fscanf(file,&DAT_005e0349);
  if (local_34c[0] != '\0') {
    core_fldnotes_cpp_CFieldNotes_loadFile_FUN_004bcba0(this_ptr,local_34c,(char *)0x0);
    local_48 = 0;
    _fscanf(file,"%*[^\n]\n");
    _fscanf(file,&DAT_005e0354);
    local_20 = 0;
    if (0 < local_48) {
      do {
        iVar3 = 0;
        pcVar4 = "(parse error)";
        pcVar8 = local_24c;
        for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(uint *)pcVar8 = *(uint *)pcVar4;
          pcVar4 = pcVar4 + ((uint)bVar9 * -2 + 1) * 4;
          pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
        }
        _fscanf(file,"\"%[^\"]\", %d\n");
        local_1c = local_24c;
        local_2c = (int *)0x0;
        if (0 < _DAT_01cc4470) {
          pSVar6 = SNotesSection_ARRAY_01cc4474;
          do {
            pSVar1 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004bbfd0(pSVar6,local_1c);
            if (pSVar1 != (SNotesEntry *)0x0) {
              if (local_2c != (int *)0x0) {
                *local_2c = iVar3;
              }
              if (pSVar1 != (SNotesEntry *)0x0) {
                pSVar1->kind = local_44;
                goto LAB_004bedcb;
              }
              break;
            }
            iVar3 = iVar3 + 1;
            pSVar6 = pSVar6 + 1;
          } while (iVar3 < _DAT_01cc4470);
        }
        shape_edittool_cpp_FUN_00494340
                  (g_CEditorToolsPtr,"Ignoring saved game reference to field notes entry %s which doesn't exist in %s",local_24c,this_ptr);
LAB_004bedcb:
        local_20 = local_20 + 1;
      } while (local_20 < local_48);
    }
    if (local_4c < 2) {
      iVar2 = 0;
      if (0 < _DAT_01cc55cc) {
        iVar3 = 0;
        do {
          if (*(int *)(*(int *)(SNotesMap_ARRAY_01cc55d0[0].image_name + iVar3 + -4) + 0x140) == 6)
          {
            engine_alphabit_cpp_FUN_0040d970(iVar3 + 0x1cc5658,0xff);
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x970;
        } while (iVar2 < _DAT_01cc55cc);
      }
    }
    else {
      local_40 = 0;
      _fscanf(file,"%*[^\n]\n");
      _fscanf(file,&DAT_005e03bd);
      local_24 = 0;
      if (0 < local_40) {
        do {
          pcVar4 = "(corrupt save game file)";
          pcVar8 = local_14c;
          for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(uint *)pcVar8 = *(uint *)pcVar4;
            pcVar4 = pcVar4 + ((uint)bVar9 * -2 + 1) * 4;
            pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
          }
          _fscanf(file,"%*[^\n]\n");
          iVar2 = 0;
          _fscanf(file," %[^,], %d, %d\n");
          local_18 = local_14c;
          local_28 = (int *)0x0;
          if (0 < _DAT_01cc4470) {
            pSVar6 = SNotesSection_ARRAY_01cc4474;
            do {
              pSVar1 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004bbfd0(pSVar6,local_18);
              if (pSVar1 != (SNotesEntry *)0x0) {
                if (local_28 != (int *)0x0) {
                  *local_28 = iVar2;
                }
                goto LAB_004bef3a;
              }
              iVar2 = iVar2 + 1;
              pSVar6 = pSVar6 + 1;
            } while (iVar2 < _DAT_01cc4470);
          }
          pSVar1 = (SNotesEntry *)0x0;
LAB_004bef3a:
          if (pSVar1 == (SNotesEntry *)0x0) {
            _DAT_01d1d404 = 0xbcc;
            _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
            core_main_c_FUN_005030e0("CFieldNotes::loadState - No such map '%s'",local_14c);
          }
          if ((pSVar1->kind != 6) || (pSVar1->map_index < 0)) {
            _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
            _DAT_01d1d404 = 0xbcf;
            core_main_c_FUN_005030e0("CFieldNotes::loadState - Entry '%s' is not an enabled map",local_14c);
          }
          iVar2 = pSVar1->map_index;
          if ((local_3c != SNotesMap_ARRAY_01cc55d0[iVar2].reveal_mask.width) ||
             (local_38 != SNotesMap_ARRAY_01cc55d0[iVar2].reveal_mask.height)) {
            _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
            _DAT_01d1d404 = 0xbd4;
            core_main_c_FUN_005030e0("CFieldNotes::loadState - Map '%s' has changed size",local_14c);
          }
          _fscanf(file,"%*[^\n]\n");
          local_14 = 0;
          if (0 < SNotesMap_ARRAY_01cc55d0[iVar2].reveal_mask.height) {
            do {
              _fscanf(file,&DAT_005e04b7);
              iVar3 = SNotesMap_ARRAY_01cc55d0[iVar2].reveal_mask.width;
              iVar7 = 0;
              pcVar4 = SNotesMap_ARRAY_01cc55d0[iVar2].reveal_mask.opa + local_14 * iVar3;
              if (0 < iVar3) {
                do {
                  _fscanf(file,&DAT_005e04b9);
                  *pcVar4 = local_30;
                  iVar7 = iVar7 + 1;
                  pcVar4 = pcVar4 + 1;
                } while (iVar7 < SNotesMap_ARRAY_01cc55d0[iVar2].reveal_mask.width);
              }
              _fscanf(file,&DAT_005e04bd);
              local_14 = local_14 + 1;
            } while (local_14 < SNotesMap_ARRAY_01cc55d0[iVar2].reveal_mask.height);
          }
          iVar3 = 0;
          local_34 = 0;
          _fscanf(file,"%*[^\n]\n");
          _fscanf(file,&DAT_005e04c7);
          if (0 < local_34) {
            do {
              _fscanf(file,&DAT_005e04cb);
              core_fldnotes_cpp_SNotesMap_showAnnotation_FUN_004bc540
                        (SNotesMap_ARRAY_01cc55d0 + iVar2,acStack_44c);
              iVar3 = iVar3 + 1;
            } while (iVar3 < local_34);
          }
          local_24 = local_24 + 1;
        } while (local_24 < local_40);
      }
    }
  }
  _fscanf(file,"%*[^\n]\n");
  return;
}
