// Name: core_fldnotes.cpp_FUN_004a8f30
// Address: 004a8f30
// Address Range: [[004a8f30, 004a914a]]
// Convention: unknown
// Signature: int core_fldnotes_cpp_FUN_004a8f30(int param_1,char *param_2)

#include "nocturne.h"

int core_fldnotes_cpp_FUN_004a8f30(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  char local_314 [512];
  char local_114 [256];
  int local_14;
  
  local_14 = *(int *)(param_1 + 0x10);
  pcVar5 = param_2;
  do {
    do {
      pcVar4 = pcVar5;
      pcVar5 = pcVar4 + 1;
    } while (((&DAT_006074b8)[(byte)(*pcVar4 + 1)] & 2) != 0);
    cVar1 = *pcVar4;
    pcVar6 = pcVar4;
    if (cVar1 == '\0') break;
    if (cVar1 == '<') {
      core_fldnotes_cpp_FUN_004a91b0(param_1);
      uVar3 = 0;
      cVar1 = *pcVar5;
      while (cVar1 != '>') {
        if (*pcVar5 == '\0') {
          FUN_005a28c0(&DAT_01d0d010,"Incomplete markup tag beginning with '%s'",param_2);
          return -1;
        }
        if (0xfe < uVar3) {
          FUN_005a28c0(&DAT_01d0d010,"Markup tag beginning with '%s' - tag text too long",param_2);
          return -1;
        }
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        local_114[uVar3] = cVar1;
        uVar3 = uVar3 + 1;
        cVar1 = *pcVar5;
      }
      local_114[uVar3] = '\0';
      unkaddr_004a76f0_cpp_FUN_004a7890(local_114);
      iVar2 = core_fldnotes_cpp_FUN_004a9330(param_1,local_114);
      if (iVar2 < 0) {
        return -1;
      }
      pcVar6 = pcVar5 + 1;
      if (iVar2 == 0) {
        core_fldnotes_cpp_FUN_004a9300(param_1);
        pcVar6 = pcVar4;
      }
    }
    else {
      if (cVar1 == '>') {
        FUN_005a28c0(&DAT_01d0d010,"Unexpected '>' found near '%s'",param_2);
        return -1;
      }
      bVar7 = *(char *)(param_1 + 0x48) != '\0';
      if (bVar7) {
        local_314[0] = ' ';
      }
      uVar3 = (uint)bVar7;
      for (; (((((&DAT_006074b8)[(byte)(*pcVar6 + 1)] & 2) == 0 && (cVar1 = *pcVar6, cVar1 != '\0'))
              && (cVar1 != '<')) && (cVar1 != '>')); pcVar6 = pcVar6 + 1) {
        local_314[uVar3] = cVar1;
        uVar3 = uVar3 + 1;
      }
      local_314[uVar3] = '\0';
      iVar2 = core_fldnotes_cpp_FUN_004a9770(param_1,local_314);
      if (iVar2 == 0) {
        core_fldnotes_cpp_FUN_004a9270(param_1);
        pcVar6 = pcVar4;
      }
      else {
        core_fldnotes_cpp_FUN_004a97d0(param_1,local_314);
      }
    }
    pcVar5 = pcVar6;
  } while (local_14 == *(int *)(param_1 + 0x10));
  return (int)pcVar6 - (int)param_2;
}
