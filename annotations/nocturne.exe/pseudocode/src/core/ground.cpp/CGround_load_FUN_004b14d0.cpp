// Name: core_ground.cpp_CGround_load_FUN_004b14d0
// Address: 004b14d0
// Address Range: [[004b14d0, 004b17f0]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_ground_cpp_CGround_load_FUN_004b14d0(int *param_1,char *param_2)

#include "nocturne.h"

uint __cdecl core_ground_cpp_CGround_load_FUN_004b14d0(int *param_1,char *param_2)

{
  char cVar1;
  byte *pbVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  char local_cc [80];
  char local_7c [80];
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  pcVar9 = local_cc;
  pcVar8 = local_cc;
  pcVar7 = param_2;
  do {
    cVar1 = *pcVar7;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  local_24 = "data";
  local_20 = "rb";
  do {
    pcVar7 = pcVar8;
    if (*pcVar8 == '.') goto LAB_004b153d;
    if (*pcVar8 == '\0') break;
    pcVar7 = pcVar8 + 1;
    if (*pcVar7 == '.') goto LAB_004b153d;
    pcVar8 = pcVar8 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_004b153d:
  if (pcVar7 == (char *)0x0) {
    PTR_01cc4800 = "..\\core\\ground.cpp";
    INT_01cc4804 = 0x40;
    core_main_c_FUN_004c8440("eopen - ext not found!");
  }
  pcVar9 = local_20;
  pcVar7 = pcVar7 + 1;
  pcVar8 = "raw";
  do {
    cVar1 = *pcVar8;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  piVar4 = (int *)engine_dosio_cpp_getFile_FUN_00456a60(local_24,local_cc,pcVar9);
  if (piVar4 == (int *)0x0) {
    PTR_01cc4800 = "..\\core\\ground.cpp";
    INT_01cc4804 = 0x44;
    core_main_c_FUN_004c8440("eopen - Cannot open file");
  }
  local_18 = 0;
  if (0 < param_1[1]) {
    do {
      iVar10 = 0;
      if (0 < *param_1) {
        do {
          if ((piVar4[1] < 1) || (*(byte *)*piVar4 - 0xd < 0xfe)) {
            uVar3 = _fgetc(piVar4);
          }
          else {
            piVar4[1] = piVar4[1] + -1;
            pbVar2 = (byte *)*piVar4;
            *piVar4 = (int)(pbVar2 + 1);
            uVar3 = (ushort)*pbVar2;
          }
          *(ushort *)(param_1[9] + (local_18 * *param_1 + iVar10) * 4) = uVar3 << 7;
          iVar10 = iVar10 + 1;
        } while (iVar10 < *param_1);
      }
      local_18 = local_18 + 1;
    } while (local_18 < param_1[1]);
  }
  pcVar7 = local_7c;
  _fclose(piVar4);
  local_28 = "data";
  local_2c = "rb";
  pcVar9 = param_2;
  do {
    cVar1 = *pcVar9;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  pcVar7 = local_7c;
  do {
    pcVar9 = pcVar7;
    if (*pcVar7 == '.') goto LAB_004b1687;
    if (*pcVar7 == '\0') break;
    pcVar9 = pcVar7 + 1;
    if (*pcVar9 == '.') goto LAB_004b1687;
    pcVar7 = pcVar7 + 2;
  } while (*pcVar9 != '\0');
  pcVar9 = (char *)0x0;
LAB_004b1687:
  if (pcVar9 == (char *)0x0) {
    PTR_01cc4800 = "..\\core\\ground.cpp";
    INT_01cc4804 = 0x40;
    core_main_c_FUN_004c8440("eopen - ext not found!");
  }
  pcVar9 = pcVar9 + 1;
  pcVar7 = "clr";
  do {
    cVar1 = *pcVar7;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  local_1c = engine_dosio_cpp_getFile_FUN_00456a60(local_28,local_7c,local_2c);
  if (local_1c == 0) {
    PTR_01cc4800 = "..\\core\\ground.cpp";
    INT_01cc4804 = 0x44;
    core_main_c_FUN_004c8440("eopen - Cannot open file");
  }
  local_14 = 0;
  if (0 < param_1[1]) {
    do {
      iVar10 = 0;
      if (0 < *param_1) {
        do {
          iVar5 = local_14 * *param_1 + iVar10;
          iVar10 = iVar10 + 1;
          _fread(iVar5 * 4 + param_1[9] + 2,1,2,local_1c);
        } while (iVar10 < *param_1);
      }
      local_14 = local_14 + 1;
    } while (local_14 < param_1[1]);
  }
  _fclose(local_1c);
  uVar6 = core_texlist_cpp_CTextureList_load_FUN_00544950(param_1[10],param_2);
  return uVar6;
}
