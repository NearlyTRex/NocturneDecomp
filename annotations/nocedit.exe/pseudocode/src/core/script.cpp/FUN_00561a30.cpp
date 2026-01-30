// Name: core_script.cpp_FUN_00561a30
// Address: 00561a30
// Address Range: [[00561a30, 00561c69]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_FUN_00561a30 (char *param_1,char *param_2,char *param_3,char *param_4,uint param_5,void *param_6, int param_7)

#include "nocturne.h"

int __cdecl
core_script_cpp_FUN_00561a30
          (char *param_1,char *param_2,char *param_3,char *param_4,uint param_5,void *param_6,
          int param_7)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  byte bVar8;
  uint in_stack_ffffffd0;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar8 = 0;
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)&stack0xffffffd0);
  local_20 = param_5;
  local_1c = core_script_cpp_CScript_FUN_00567310
                       (g_CScriptPtr,(int)param_1,(CBitFont *)&stack0xffffffd0,(int *)&local_20);
  local_14 = local_1c;
  memset(param_6,0,0x328);
  if (local_14 < 0) {
    uVar4 = 0xffffffff;
    pcVar3 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar4 - 1 < param_5) {
      uVar4 = 0xffffffff;
      pcVar3 = param_1;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + (uint)bVar8 * -2 + 1;
      } while (cVar1 != '\0');
      param_5 = ~uVar4 - 1;
    }
    pcVar3 = param_1;
    pcVar7 = param_2;
    for (uVar4 = param_5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(uint *)pcVar7 = *(uint *)pcVar3;
      pcVar3 = pcVar3 + (uint)bVar8 * -8 + 4;
      pcVar7 = pcVar7 + (uint)bVar8 * -8 + 4;
    }
    for (uVar4 = param_5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar8 * -2 + 1;
      pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
    }
    param_2[param_5] = '\0';
    pcVar3 = param_1 + param_5;
    *param_3 = '\0';
    do {
      cVar1 = *pcVar3;
      *param_4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      param_4[1] = cVar1;
      param_4 = param_4 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&stack0xffffffd0,0,in_stack_ffffffd0);
    return 0x20;
  }
  pcVar3 = param_1;
  pcVar7 = param_2;
  for (uVar4 = local_20 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(uint *)pcVar7 = *(uint *)pcVar3;
    pcVar3 = pcVar3 + (uint)bVar8 * -8 + 4;
    pcVar7 = pcVar7 + (uint)bVar8 * -8 + 4;
  }
  for (uVar4 = local_20 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar8 * -2 + 1;
    pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
  }
  param_2[local_20] = '\0';
  local_18 = -1;
  pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                     ((CStrList *)&stack0xffffffd0,local_14);
  do {
    pcVar7 = pcVar3;
    if (*pcVar3 == '(') goto LAB_00561ae9;
    if (*pcVar3 == '\0') break;
    pcVar7 = pcVar3 + 1;
    if (*pcVar7 == '(') goto LAB_00561ae9;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_00561ae9:
  if (pcVar7 != (char *)0x0) {
    shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xffffffd0,local_14);
    local_18 = core_script_cpp_FUN_00561690();
  }
  if (local_18 < 0) {
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       ((CStrList *)&stack0xffffffd0,local_1c);
    do {
      cVar1 = *pcVar3;
      *param_3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      param_3[1] = cVar1;
      param_3 = param_3 + 2;
    } while (cVar1 != '\0');
    local_18 = 0x20;
    *param_4 = '\0';
  }
  uVar4 = local_20;
  pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                     ((CStrList *)&stack0xffffffd0,local_1c);
  iVar2 = local_18;
  uVar5 = 0xffffffff;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar8 * -2 + 1;
  } while (cVar1 != '\0');
  pcVar3 = param_1 + (~uVar5 - 1) + uVar4;
  iVar6 = -1;
  do {
    pcVar7 = param_4;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar7 = param_4 + (uint)bVar8 * -2 + 1;
    cVar1 = *param_4;
    param_4 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar3;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&stack0xffffffd0,0,in_stack_ffffffd0);
  return iVar2;
}
