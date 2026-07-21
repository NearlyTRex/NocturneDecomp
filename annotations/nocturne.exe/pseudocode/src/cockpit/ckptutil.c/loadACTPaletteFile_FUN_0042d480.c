// Name: cockpit_ckptutil.c_loadACTPaletteFile_FUN_0042d480
// Address: 0042d480
// Address Range: [[0042d480, 0042d5b5]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_loadACTPaletteFile_FUN_0042d480(char *param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_loadACTPaletteFile_FUN_0042d480(char *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint *puVar6;
  char *pcVar7;
  byte bVar8;
  char acStack_ac [80];
  byte auStack_5c [80];
  
  bVar8 = 0;
  pcVar7 = acStack_ac;
  pcVar5 = acStack_ac;
  do {
    cVar1 = *param_1;
    *pcVar7 = cVar1;
    pcVar4 = acStack_ac;
    if (cVar1 == '\0') break;
    cVar1 = param_1[1];
    param_1 = param_1 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
    pcVar4 = acStack_ac;
  } while (cVar1 != '\0');
  do {
    pcVar7 = pcVar4;
    if (*pcVar4 == '.') goto LAB_0042d4cf;
    if (*pcVar4 == '\0') break;
    pcVar7 = pcVar4 + 1;
    if (*pcVar7 == '.') goto LAB_0042d4cf;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_0042d4cf:
  if (pcVar7 == (char *)0x0) {
    do {
      pcVar7 = pcVar5;
      if (*pcVar5 == '\0') goto LAB_0042d4f3;
      if (*pcVar5 == '\0') break;
      pcVar7 = pcVar5 + 1;
      if (*pcVar7 == '\0') goto LAB_0042d4f3;
      pcVar5 = pcVar5 + 2;
    } while (*pcVar7 != '\0');
    pcVar7 = (char *)0x0;
  }
LAB_0042d4f3:
  pcVar5 = (char *)0x57a6e2;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  iVar2 = engine_dosio_cpp_getFile_FUN_00456a60(0x57a6ea,acStack_ac,0x57a6e7);
  if (iVar2 == 0) {
    puVar6 = (uint *)0x1c00948;
    for (iVar2 = 0xc0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      param_2 = param_2 + (uint)bVar8 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)param_2 = *(byte *)puVar6;
      puVar6 = (uint *)((int)puVar6 + (uint)bVar8 * -2 + 1);
      param_2 = (uint *)((int)param_2 + (uint)bVar8 * -2 + 1);
    }
    return;
  }
  iVar3 = _fread(param_2,0x100,3,iVar2);
  if (iVar3 != 3) {
    _sprintf(auStack_5c,"Error reading %s.",acStack_ac);
    _DAT_01cc4800 = "..\\cockpit\\ckptutil.c";
    _DAT_01cc4804 = 0x135;
    FUN_004c8440(auStack_5c);
  }
  _fclose(iVar2);
  return;
}
