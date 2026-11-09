// Name: core_fldnotes.cpp_FUN_004a61b0
// Address: 004a61b0
// Address Range: [[004a61b0, 004a6437]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004a61b0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004a61b0(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  SNotesSection *pSVar6;
  byte bVar7;
  uint local_220 [64];
  char local_120 [256];
  int local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  
  bVar7 = 0;
  core_fldnotes_cpp_FUN_004a50b0(param_1);
  local_20 = 0;
  _fscanf(param_2,"%*[^\n]\n");
  _fscanf(param_2,"%*[^\n]\n");
  _fscanf(param_2,&DAT_005d6470,&local_20);
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
  _fscanf(param_2,"%*[^\n]\n");
  _fscanf(param_2," \"%[^\"]",local_120);
  _fscanf(param_2,&DAT_005d64df);
  if (local_120[0] != '\0') {
    core_fldnotes_cpp_FUN_004a41b0(param_1,local_120,0);
    local_1c = 0;
    _fscanf(param_2,"%*[^\n]\n");
    _fscanf(param_2,&DAT_005d64ea,&local_1c);
    iVar2 = 0;
    if (0 < local_1c) {
      do {
        pcVar5 = "(parse error)";
        puVar4 = local_220;
        for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *(uint *)pcVar5;
          pcVar5 = pcVar5 + ((uint)bVar7 * -2 + 1) * 4;
          puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        }
        iVar3 = 0;
        _fscanf(param_2,"\"%[^\"]\", %d\n",local_220,&local_18);
        local_14 = (int *)0x0;
        if (0 < _DAT_01cab9f0) {
          pSVar6 = SNotesSection_ARRAY_01cab9f4;
          do {
            iVar1 = core_fldnotes_cpp_FUN_004a35e0(pSVar6,local_220);
            if (iVar1 != 0) {
              if (local_14 != (int *)0x0) {
                *local_14 = iVar3;
              }
              if (iVar1 != 0) {
                *(uint *)(iVar1 + 0x140) = local_18;
                goto LAB_004a63af;
              }
              break;
            }
            iVar3 = iVar3 + 1;
            pSVar6 = pSVar6 + 1;
          } while (iVar3 < _DAT_01cab9f0);
        }
        shape_edittool_cpp_FUN_0047bdf0
                  (g_CEditorToolsPtr,"Ignoring saved game reference to field notes entry %s which doesn't exist in %s",local_220,param_1);
LAB_004a63af:
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_1c);
    }
    iVar2 = 0;
    if (0 < _DAT_01cacb4c) {
      iVar3 = 0;
      do {
        if (*(int *)(*(int *)(&SNotesMap_ARRAY_01cacb50[0].field_0x0 + iVar3) + 0x140) == 6) {
          engine_alphabit_cpp_FUN_0040dd20(iVar3 + 0x1cacbd8,0xff);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x970;
      } while (iVar2 < _DAT_01cacb4c);
    }
  }
  _fscanf(param_2,"%*[^\n]\n");
  return;
}
