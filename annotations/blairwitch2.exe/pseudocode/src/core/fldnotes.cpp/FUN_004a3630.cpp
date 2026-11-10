// Name: core_fldnotes.cpp_FUN_004a3630
// Address: 004a3630
// Address Range: [[004a3630, 004a3735]]
// Convention: unknown
// Signature: char * core_fldnotes_cpp_FUN_004a3630(int param_1,char *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * core_fldnotes_cpp_FUN_004a3630(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (99 < *(int *)(param_1 + 0x150)) {
    _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
    _DAT_01d046a4 = 0x6c6;
    core_main_c_FUN_004e4500("Too many field note entries in section %s, adding entry %s",param_1,param_2);
  }
  iVar2 = debugAllocTracked1(0x15c);
  pcVar3 = (char *)0x0;
  if (iVar2 != 0) {
    pcVar3 = (char *)core_fldnotes_cpp_FUN_004a3280(iVar2);
  }
  if (pcVar3 == (char *)0x0) {
    _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
    _DAT_01d046a4 = 0x6cc;
    core_main_c_FUN_004e4500("Out of memory!");
  }
  uVar4 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  pcVar5 = pcVar3;
  if (0x3f < ~uVar4 - 1) {
    _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
    _DAT_01d046a4 = 0x6d1;
    core_main_c_FUN_004e4500("Entry name '%s' is too long",param_2);
  }
  do {
    cVar1 = *param_2;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)(pcVar3 + 0x140) = param_3;
  *(char **)(param_1 + 0x154 + *(int *)(param_1 + 0x150) * 4) = pcVar3;
  *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
  return pcVar3;
}
