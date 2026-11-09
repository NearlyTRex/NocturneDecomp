// Name: core_fldnotes.cpp_FUN_004ac900
// Address: 004ac900
// Address Range: [[004ac900, 004aceb8]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004ac900(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004ac900(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  uint *puVar4;
  SNotesSection *pSVar5;
  char *pcVar6;
  byte bVar7;
  byte auStack_44c [256];
  char local_34c [256];
  uint local_24c [64];
  uint local_14c [64];
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  byte local_30 [4];
  int *local_2c;
  int *local_28;
  int local_24;
  int local_20;
  uint *local_1c;
  uint *local_18;
  int local_14;
  
  bVar7 = 0;
  core_fldnotes_cpp_FUN_004ab7a0(param_1);
  local_4c = 0;
  _fscanf(param_2,"%*[^\n]\n");
  _fscanf(param_2,"%*[^\n]\n");
  _fscanf(param_2,&DAT_005c17c9,&local_4c);
  if ((local_4c < 1) || (2 < local_4c)) {
    _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
    _DAT_01d71de4 = 0xbae;
    core_main_c_FUN_004e4330("Invalid field notes file version: %d, latest this .exe supports is %d",local_4c,2);
  }
  puVar4 = &DAT_005fe4b8;
  pcVar6 = local_34c;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pcVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    pcVar6 = pcVar6 + ((uint)bVar7 * -2 + 1) * 4;
  }
  _fscanf(param_2,"%*[^\n]\n");
  _fscanf(param_2," \"%[^\"]",local_34c);
  _fscanf(param_2,&DAT_005c1838);
  if (local_34c[0] != '\0') {
    core_fldnotes_cpp_FUN_004aa810(param_1,local_34c,0);
    local_48 = 0;
    _fscanf(param_2,"%*[^\n]\n");
    _fscanf(param_2,&DAT_005c1843,&local_48);
    local_20 = 0;
    if (0 < local_48) {
      do {
        iVar2 = 0;
        pcVar6 = "(parse error)";
        puVar4 = local_24c;
        for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *(uint *)pcVar6;
          pcVar6 = pcVar6 + ((uint)bVar7 * -2 + 1) * 4;
          puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        }
        _fscanf(param_2,"\"%[^\"]\", %d\n",local_24c,&local_44);
        local_1c = local_24c;
        local_2c = (int *)0x0;
        if (0 < _DAT_01d0d210) {
          pSVar5 = SNotesSection_ARRAY_01d0d214;
          do {
            iVar1 = core_fldnotes_cpp_FUN_004a9c30(pSVar5,local_1c);
            if (iVar1 != 0) {
              if (local_2c != (int *)0x0) {
                *local_2c = iVar2;
              }
              if (iVar1 != 0) {
                *(uint *)(iVar1 + 0x140) = local_44;
                goto LAB_004acb0b;
              }
              break;
            }
            iVar2 = iVar2 + 1;
            pSVar5 = pSVar5 + 1;
          } while (iVar2 < _DAT_01d0d210);
        }
        shape_edittool_cpp_FUN_0047cee0
                  (g_CEditorToolsPtr,"Ignoring saved game reference to field notes entry %s which doesn't exist in %s",local_24c,param_1);
LAB_004acb0b:
        local_20 = local_20 + 1;
      } while (local_20 < local_48);
    }
    if (local_4c < 2) {
      iVar1 = 0;
      if (0 < _DAT_01d0e36c) {
        iVar2 = 0;
        do {
          if (*(int *)(*(int *)(&SNotesMap_ARRAY_01d0e370[0].field_0x0 + iVar2) + 0x140) == 6) {
            engine_alphabit_cpp_FUN_0040dbb0(iVar2 + 0x1d0e3f8,0xff);
          }
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 + 0x126c;
        } while (iVar1 < _DAT_01d0e36c);
      }
    }
    else {
      local_40 = 0;
      _fscanf(param_2,"%*[^\n]\n");
      _fscanf(param_2,&DAT_005c18ac,&local_40);
      local_24 = 0;
      if (0 < local_40) {
        do {
          pcVar6 = "(corrupt save game file)";
          puVar4 = local_14c;
          for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar4 = *(uint *)pcVar6;
            pcVar6 = pcVar6 + ((uint)bVar7 * -2 + 1) * 4;
            puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
          }
          _fscanf(param_2,"%*[^\n]\n");
          iVar1 = 0;
          _fscanf(param_2," %[^,], %d, %d\n",local_14c,&local_3c,&local_38);
          local_18 = local_14c;
          local_28 = (int *)0x0;
          if (0 < _DAT_01d0d210) {
            pSVar5 = SNotesSection_ARRAY_01d0d214;
            do {
              iVar2 = core_fldnotes_cpp_FUN_004a9c30(pSVar5,local_18);
              if (iVar2 != 0) {
                if (local_28 != (int *)0x0) {
                  *local_28 = iVar1;
                }
                goto LAB_004acc7a;
              }
              iVar1 = iVar1 + 1;
              pSVar5 = pSVar5 + 1;
            } while (iVar1 < _DAT_01d0d210);
          }
          iVar2 = 0;
LAB_004acc7a:
          if (iVar2 == 0) {
            _DAT_01d71de4 = 0xbe4;
            _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
            core_main_c_FUN_004e4330("CFieldNotes::loadState - No such map '%s'",local_14c);
          }
          if ((*(int *)(iVar2 + 0x140) != 6) || (*(int *)(iVar2 + 0x158) < 0)) {
            _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
            _DAT_01d71de4 = 0xbe7;
            core_main_c_FUN_004e4330("CFieldNotes::loadState - Entry '%s' is not an enabled map",local_14c);
          }
          iVar1 = *(int *)(iVar2 + 0x158);
          if ((local_3c != *(int *)&SNotesMap_ARRAY_01d0e370[iVar1].field_0x94) ||
             (local_38 != *(int *)&SNotesMap_ARRAY_01d0e370[iVar1].field_0x98)) {
            _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
            _DAT_01d71de4 = 0xbec;
            core_main_c_FUN_004e4330("CFieldNotes::loadState - Map '%s' has changed size",local_14c);
          }
          _fscanf(param_2,"%*[^\n]\n");
          local_14 = 0;
          if (0 < *(int *)&SNotesMap_ARRAY_01d0e370[iVar1].field_0x98) {
            do {
              _fscanf(param_2,&DAT_005c19a6);
              iVar2 = 0;
              puVar3 = (byte *)
                       (local_14 * *(int *)&SNotesMap_ARRAY_01d0e370[iVar1].field_0x94 +
                       *(int *)&SNotesMap_ARRAY_01d0e370[iVar1].field_0x8c);
              if (0 < *(int *)&SNotesMap_ARRAY_01d0e370[iVar1].field_0x94) {
                do {
                  _fscanf(param_2,&DAT_005c19a8,local_30);
                  *puVar3 = local_30[0];
                  iVar2 = iVar2 + 1;
                  puVar3 = puVar3 + 1;
                } while (iVar2 < *(int *)&SNotesMap_ARRAY_01d0e370[iVar1].field_0x94);
              }
              _fscanf(param_2,&DAT_005c19ac);
              local_14 = local_14 + 1;
            } while (local_14 < *(int *)&SNotesMap_ARRAY_01d0e370[iVar1].field_0x98);
          }
          iVar2 = 0;
          local_34 = 0;
          _fscanf(param_2,"%*[^\n]\n");
          _fscanf(param_2,&DAT_005c19b6,&local_34);
          if (0 < local_34) {
            do {
              _fscanf(param_2,&DAT_005c19ba,auStack_44c);
              core_fldnotes_cpp_FUN_004aa1a0(SNotesMap_ARRAY_01d0e370 + iVar1,auStack_44c);
              iVar2 = iVar2 + 1;
            } while (iVar2 < local_34);
          }
          local_24 = local_24 + 1;
        } while (local_24 < local_40);
      }
    }
  }
  _fscanf(param_2,"%*[^\n]\n");
  return;
}
