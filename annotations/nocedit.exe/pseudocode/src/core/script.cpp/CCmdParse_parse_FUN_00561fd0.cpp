// Name: core_script.cpp_CCmdParse_parse_FUN_00561fd0
// Address: 00561fd0
// Address Range: [[00561fd0, 005624eb]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CCmdParse_parse_FUN_00561fd0(CCmdParse *this_ptr,int param_2,char *param_3)

#include "nocturne.h"

int __cdecl
core_script_cpp_CCmdParse_parse_FUN_00561fd0(CCmdParse *this_ptr,int param_2,char *param_3)

{
  byte *puVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  CCmdParse *pCVar13;
  char *pcVar14;
  CCmdParse *pCVar15;
  byte bVar16;
  char local_154 [300];
  int local_28;
  int local_24;
  CCmdParse *local_20;
  CCmdParse *local_1c;
  int local_18;
  int local_14;
  
  bVar16 = 0;
  pcVar12 = local_154;
  pcVar14 = local_154;
  pcVar11 = local_154;
  local_28 = 0;
  *(byte *)&this_ptr[0x818].unk = 0;
  this_ptr->unk = (int)param_3;
  this_ptr[0x33].unk = 0;
  iVar7 = 0;
  while ((g_CharacterClassificationTable[(byte)(*(char *)(local_28 + param_2) + 1)] & 2U) != 0) {
    puVar1 = (byte *)(local_28 + param_2);
    local_28 = local_28 + 1;
    *(byte *)((int)&this_ptr[1].unk + iVar7) = *puVar1;
    iVar7 = iVar7 + 1;
  }
  *(byte *)((int)&this_ptr[1].unk + iVar7) = 0;
  local_14 = local_28;
  pcVar5 = (char *)(local_28 + param_2);
  cVar2 = *pcVar5;
  for (; (cVar2 != '\0' && ((*pcVar5 != '/' || (pcVar5[1] != '/')))); pcVar5 = pcVar5 + 1) {
    cVar2 = pcVar5[1];
    local_14 = local_14 + 1;
  }
  local_24 = 0;
  while( true ) {
    *(byte *)((int)&this_ptr[0x1a].unk + local_24) = 0;
    pbVar10 = (byte *)(param_3 + local_24);
    bVar3 = *pbVar10;
    if ((((bVar3 == 0x28) || (bVar3 == 0x3c)) ||
        ((g_CharacterClassificationTable[(byte)(bVar3 + 1)] & 2U) != 0)) || (*pbVar10 == 0)) break;
    if (local_14 <= local_28) {
      pcVar11 = (char *)(local_28 + param_2);
      iVar7 = -1;
      pCVar15 = this_ptr + 0x818;
      goto code_r0x005621ce;
    }
    iVar6 = toupper((uint)*pbVar10);
    iVar8 = toupper((uint)*(byte *)(local_28 + param_2));
    iVar7 = local_24;
    if (iVar6 != iVar8) {
      return 0;
    }
    puVar1 = (byte *)(local_28 + param_2);
    local_28 = local_28 + 1;
    local_24 = local_24 + 1;
    *(byte *)((int)&this_ptr[0x1a].unk + iVar7) = *puVar1;
  }
  local_20 = this_ptr + 0x34;
  local_1c = this_ptr + 0x818;
  iVar7 = 0;
LAB_005620a2:
  while( true ) {
    while( true ) {
      while ((iVar6 = local_28, local_28 < local_14 &&
             ((g_CharacterClassificationTable[(byte)(*(char *)(local_28 + param_2) + 1)] & 2U) != 0)
             )) {
        local_28 = local_28 + 1;
        local_154[iVar7] = *(char *)(iVar6 + param_2);
        iVar7 = iVar7 + 1;
      }
      if ((g_CharacterClassificationTable[(byte)(param_3[local_24] + 1)] & 2U) == 0) break;
      local_24 = local_24 + 1;
    }
    if (param_3[local_24] != '<') break;
    if (9 < this_ptr[0x33].unk) {
      g_CurrentFilename = "..\\core\\script.cpp";
      g_CurrentLineNumber = 0x1302;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SCmdParse::parse - too many parms!");
    }
    iVar6 = core_script_cpp_CCmdParm_setTemplateText_FUN_00560de0
                      ((CCmdParm *)(local_20 + this_ptr[0x33].unk * 0xca),param_3,&local_24);
    if (iVar6 == 0) {
      return 2;
    }
    local_154[iVar7] = '\0';
    pCVar15 = local_20 + this_ptr[0x33].unk * 0xca;
    pcVar5 = local_154;
    do {
      cVar2 = *pcVar5;
      *(char *)&pCVar15->unk = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      *(char *)((int)&pCVar15->unk + 1) = cVar2;
      pCVar15 = (CCmdParse *)((int)&pCVar15->unk + 2);
    } while (cVar2 != '\0');
    local_18 = local_28;
    iVar7 = core_script_cpp_FUN_00561cb0();
    if (iVar7 == 0) {
      pCVar15 = this_ptr + 0x818;
      goto LAB_0056233e;
    }
    this_ptr[0x33].unk = this_ptr[0x33].unk + 1;
    iVar7 = 0;
  }
  if (local_14 <= local_28) {
    local_154[iVar7] = '\0';
    pCVar15 = local_1c;
    goto LAB_00562475;
  }
  iVar8 = toupper((uint)*(byte *)(local_28 + param_2));
  iVar9 = toupper((uint)(byte)param_3[local_24]);
  iVar6 = local_28;
  pCVar15 = local_1c;
  if (iVar8 == iVar9) {
    local_28 = local_28 + 1;
    local_24 = local_24 + 1;
    local_154[iVar7] = *(char *)(iVar6 + param_2);
    iVar7 = iVar7 + 1;
    goto LAB_005620a2;
  }
  do {
    cVar2 = *pcVar14;
    *(char *)&pCVar15->unk = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar14[1];
    pcVar14 = pcVar14 + 2;
    *(char *)((int)&pCVar15->unk + 1) = cVar2;
    pCVar15 = (CCmdParse *)((int)&pCVar15->unk + 2);
  } while (cVar2 != '\0');
  pcVar11 = (char *)(local_28 + param_2);
  iVar7 = -1;
  do {
    pCVar15 = local_1c;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pCVar15 = (CCmdParse *)((int)local_1c + (uint)bVar16 * -2 + 1);
    piVar4 = &local_1c->unk;
    local_1c = pCVar15;
  } while ((char)*piVar4 != '\0');
  pcVar14 = (char *)((int)&pCVar15[-1].unk + 3);
  do {
    cVar2 = *pcVar11;
    *pcVar14 = cVar2;
    if (cVar2 == '\0') {
      return 2;
    }
    cVar2 = pcVar11[1];
    pcVar11 = pcVar11 + 2;
    pcVar14[1] = cVar2;
    pcVar14 = pcVar14 + 2;
  } while (cVar2 != '\0');
  return 2;
  while( true ) {
    cVar2 = pcVar12[1];
    pcVar12 = pcVar12 + 2;
    *(char *)((int)&pCVar15->unk + 1) = cVar2;
    pCVar15 = (CCmdParse *)((int)&pCVar15->unk + 2);
    if (cVar2 == '\0') break;
LAB_00562475:
    cVar2 = *pcVar12;
    *(char *)&pCVar15->unk = cVar2;
    if (cVar2 == '\0') break;
  }
  pcVar11 = (char *)(local_14 + param_2);
  iVar7 = -1;
  do {
    pCVar15 = local_1c;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pCVar15 = (CCmdParse *)((int)local_1c + (uint)bVar16 * -2 + 1);
    piVar4 = &local_1c->unk;
    local_1c = pCVar15;
  } while ((char)*piVar4 != '\0');
  pcVar14 = (char *)((int)&pCVar15[-1].unk + 3);
  do {
    cVar2 = *pcVar11;
    *pcVar14 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar11[1];
    pcVar11 = pcVar11 + 2;
    pcVar14[1] = cVar2;
    pcVar14 = pcVar14 + 2;
  } while (cVar2 != '\0');
  if (param_3[local_24] == '\0') {
    return 3;
  }
  return 2;
  while( true ) {
    cVar2 = pcVar11[1];
    pcVar11 = pcVar11 + 2;
    *(char *)((int)&pCVar15->unk + 1) = cVar2;
    pCVar15 = (CCmdParse *)((int)&pCVar15->unk + 2);
    if (cVar2 == '\0') break;
LAB_0056233e:
    cVar2 = *pcVar11;
    *(char *)&pCVar15->unk = cVar2;
    if (cVar2 == '\0') break;
  }
  pcVar11 = (char *)(local_18 + param_2);
  iVar7 = -1;
  pCVar15 = this_ptr + 0x818;
  do {
    pCVar13 = pCVar15;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pCVar13 = (CCmdParse *)((int)pCVar15 + (uint)bVar16 * -2 + 1);
    piVar4 = &pCVar15->unk;
    pCVar15 = pCVar13;
  } while ((char)*piVar4 != '\0');
  pcVar14 = (char *)((int)&pCVar13[-1].unk + 3);
  do {
    cVar2 = *pcVar11;
    *pcVar14 = cVar2;
    if (cVar2 == '\0') {
      return 2;
    }
    cVar2 = pcVar11[1];
    pcVar11 = pcVar11 + 2;
    pcVar14[1] = cVar2;
    pcVar14 = pcVar14 + 2;
  } while (cVar2 != '\0');
  return 2;
  while( true ) {
    iVar7 = iVar7 + -1;
    pCVar13 = (CCmdParse *)((int)pCVar15 + (uint)bVar16 * -2 + 1);
    piVar4 = &pCVar15->unk;
    pCVar15 = pCVar13;
    if ((char)*piVar4 == '\0') break;
code_r0x005621ce:
    pCVar13 = pCVar15;
    if (iVar7 == 0) break;
  }
  pcVar14 = (char *)((int)&pCVar13[-1].unk + 3);
  do {
    cVar2 = *pcVar11;
    *pcVar14 = cVar2;
    if (cVar2 == '\0') {
      return 1;
    }
    cVar2 = pcVar11[1];
    pcVar11 = pcVar11 + 2;
    pcVar14[1] = cVar2;
    pcVar14 = pcVar14 + 2;
  } while (cVar2 != '\0');
  return 1;
}
