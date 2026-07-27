// Name: core_event.cpp_CEventList_setSfxHandle_FUN_00480c30
// Address: 00480c30
// Address Range: [[00480c30, 00480d0d]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_setSfxHandle_FUN_00480c30(int param_1,char *param_2,undefined4 param_3)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_setSfxHandle_FUN_00480c30(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  core_event_cpp_CEventList_updateSfxEntries_FUN_00480d60(param_1);
  iVar2 = core_event_cpp_CEventList_findSfxEntry_FUN_00480d10(param_1,param_2);
  if (iVar2 < 0) {
    if (0x13 < *(int *)(param_1 + 0x3ac8)) {
      PTR_01cc4800 = "..\\core\\event.cpp";
      INT_01cc4804 = 0xba6;
      core_main_c_FUN_004c8440("CEventList::setSfxHandle - too many sfx!");
    }
    iVar2 = *(int *)(param_1 + 0x3ac8);
    *(int *)(param_1 + 0x3ac8) = iVar2 + 1;
  }
  puVar4 = (uint *)(param_1 + 0x3acc + iVar2 * 0x120);
  uVar3 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  if (0x13 < ~uVar3 - 1) {
    PTR_01cc4800 = "..\\core\\event.cpp";
    INT_01cc4804 = 0xbae;
    core_main_c_FUN_004c8440("CEventList::setSfxHandle - sfx handle name %s is too long - max %d characters",param_2,0x13);
  }
  pcVar5 = (char *)(puVar4 + 1);
  do {
    cVar1 = *param_2;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *puVar4 = param_3;
  core_event_cpp_CEventList_updateSfxEntries_FUN_00480d60(param_1);
  return;
}
