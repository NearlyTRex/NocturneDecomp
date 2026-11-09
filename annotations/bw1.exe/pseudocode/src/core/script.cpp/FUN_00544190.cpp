// Name: core_script.cpp_FUN_00544190
// Address: 00544190
// Address Range: [[00544190, 0054430a]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_00544190(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_FUN_00544190(CScript *this_ptr)

{
  char cVar1;
  uint uVar2;
  CGame *pCVar3;
  byte *path;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  char local_70 [100];
  
  bVar8 = 0;
  *(uint *)&this_ptr->field_0x44 = 0;
  this_ptr->field_0x50 = 0;
  *(uint *)&this_ptr->field_0x48 = 0xbf800000;
  *(uint *)&this_ptr->field_0x4c = 0xbf800000;
  *(uint *)this_ptr = 0;
  iVar4 = _DAT_01d06ab4;
  *(uint *)&this_ptr->field_0x4 = 0;
  uVar2 = *(uint *)(iVar4 * 4 + 0x1d06aa4);
  *(uint *)&this_ptr->field_0x18 = 0;
  *(uint *)&this_ptr->field_0xc = uVar2;
  pCVar3 = g_CGamePtr;
  *(uint *)&this_ptr->field_0x10 = 1;
  *(uint *)&pCVar3->field_0x248 = 1;
  *(uint *)&pCVar3->field_0x24c = 1;
  *(uint *)&pCVar3->field_0x244 = 0;
  _DAT_01e818b0 = 0;
  *(uint *)&this_ptr->field_0x450 = 0xbf800000;
  *(uint *)&this_ptr->field_0x454 = 0xffffffff;
  path = &g_CDemonSetPtr->field_0x14d0f0;
  *(uint *)&this_ptr->field_0x458 = 0;
  _DAT_01e818b8 = 0;
  *(uint *)&this_ptr->field_0x14 = 0;
  splitpath(path,(char *)0x0,(char *)0x0,local_70,(char *)0x0);
  pcVar5 = &DAT_005ee2a1;
  iVar4 = -1;
  pcVar7 = local_70;
  do {
    pcVar6 = pcVar7;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar6 = pcVar7 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar6;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -1;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  iVar4 = _stricmp(local_70,"smill.wav");
  if (iVar4 == 0) {
    pcVar5 = &DAT_005ee2b0;
    iVar4 = -1;
    pcVar7 = local_70;
    do {
      pcVar6 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar7 + (uint)bVar8 * -2 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
  }
  iVar4 = _stricmp(local_70,"town.wav");
  if (iVar4 == 0) {
    pcVar5 = &DAT_005ee2bf;
    iVar4 = -1;
    pcVar7 = local_70;
    do {
      pcVar6 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar7 + (uint)bVar8 * -2 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
  }
  core_sound_cpp_CSound_playAmbientSound_FUN_0057d810(0x02C82A60,local_70);
  *(uint *)&this_ptr->field_0x1c = 0;
  return;
}
