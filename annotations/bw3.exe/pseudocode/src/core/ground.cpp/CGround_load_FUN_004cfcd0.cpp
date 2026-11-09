// Name: core_ground.cpp_CGround_load_FUN_004cfcd0
// Address: 004cfcd0
// Address Range: [[004cfcd0, 004cfff0]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_load_FUN_004cfcd0(CGround *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ground_cpp_CGround_load_FUN_004cfcd0(CGround *this_ptr,char *filename)

{
  char cVar1;
  byte *pbVar2;
  ushort uVar3;
  _FILE *p_Var4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  char local_cc [80];
  char local_7c [80];
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  _FILE *local_1c;
  int local_18;
  int local_14;
  
  pcVar8 = local_cc;
  pcVar7 = local_cc;
  pcVar6 = filename;
  do {
    cVar1 = *pcVar6;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  local_24 = &DAT_005c49b6;
  local_20 = &DAT_005c49af;
  do {
    pcVar6 = pcVar7;
    if (*pcVar7 == '.') goto LAB_004cfd3d;
    if (*pcVar7 == '\0') break;
    pcVar6 = pcVar7 + 1;
    if (*pcVar6 == '.') goto LAB_004cfd3d;
    pcVar7 = pcVar7 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_004cfd3d:
  if (pcVar6 == (char *)0x0) {
    _DAT_01d71de0 = "..\\core\\ground.cpp";
    _DAT_01d71de4 = 0x40;
    core_main_c_FUN_004e4330("eopen - ext not found!");
  }
  pcVar8 = local_20;
  pcVar6 = pcVar6 + 1;
  pcVar7 = &DAT_005c49b2;
  do {
    cVar1 = *pcVar7;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  p_Var4 = engine_dosio_cpp_FUN_004659c0(local_24,local_cc,pcVar8);
  if (p_Var4 == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\ground.cpp";
    _DAT_01d71de4 = 0x44;
    core_main_c_FUN_004e4330("eopen - Cannot open file");
  }
  local_18 = 0;
  if (0 < *(int *)&this_ptr->field_0x4) {
    do {
      iVar9 = 0;
      if (0 < *(int *)this_ptr) {
        do {
          if ((*(int *)(p_Var4 + 4) < 1) || (**(byte **)p_Var4 - 0xd < 0xfe)) {
            uVar3 = _fgetc(p_Var4);
          }
          else {
            *(int *)(p_Var4 + 4) = *(int *)(p_Var4 + 4) + -1;
            pbVar2 = *(byte **)p_Var4;
            *(byte **)p_Var4 = pbVar2 + 1;
            uVar3 = (ushort)*pbVar2;
          }
          *(ushort *)(*(int *)&this_ptr->field_0x24 + (local_18 * *(int *)this_ptr + iVar9) * 4) =
               uVar3 << 7;
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)this_ptr);
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)&this_ptr->field_0x4);
  }
  pcVar6 = local_7c;
  _fclose(p_Var4);
  local_28 = &DAT_005c49c2;
  local_2c = &DAT_005c49bb;
  pcVar8 = filename;
  do {
    cVar1 = *pcVar8;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar6 = local_7c;
  do {
    pcVar8 = pcVar6;
    if (*pcVar6 == '.') goto LAB_004cfe87;
    if (*pcVar6 == '\0') break;
    pcVar8 = pcVar6 + 1;
    if (*pcVar8 == '.') goto LAB_004cfe87;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_004cfe87:
  if (pcVar8 == (char *)0x0) {
    _DAT_01d71de0 = "..\\core\\ground.cpp";
    _DAT_01d71de4 = 0x40;
    core_main_c_FUN_004e4330("eopen - ext not found!");
  }
  pcVar8 = pcVar8 + 1;
  pcVar6 = &DAT_005c49be;
  do {
    cVar1 = *pcVar6;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  local_1c = engine_dosio_cpp_FUN_004659c0(local_28,local_7c,local_2c);
  if (local_1c == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\ground.cpp";
    _DAT_01d71de4 = 0x44;
    core_main_c_FUN_004e4330("eopen - Cannot open file");
  }
  local_14 = 0;
  if (0 < *(int *)&this_ptr->field_0x4) {
    do {
      iVar9 = 0;
      if (0 < *(int *)this_ptr) {
        do {
          iVar5 = local_14 * *(int *)this_ptr + iVar9;
          iVar9 = iVar9 + 1;
          _fread(iVar5 * 4 + *(int *)&this_ptr->field_0x24 + 2,1,2,local_1c)
          ;
        } while (iVar9 < *(int *)this_ptr);
      }
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)&this_ptr->field_0x4);
  }
  _fclose(local_1c);
  core_texlist_cpp_CTextureList_load_FUN_005690c0(*(CTextureList **)&this_ptr->field_0x28,filename);
  return;
}
