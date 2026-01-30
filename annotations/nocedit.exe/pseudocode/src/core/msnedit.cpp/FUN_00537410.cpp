// Name: core_msnedit.cpp_FUN_00537410
// Address: 00537410
// Address Range: [[00537410, 005374ae]]
// Convention: __cdecl
// Signature: int __cdecl core_msnedit_cpp_FUN_00537410(char *param_1)

#include "nocturne.h"

int __cdecl core_msnedit_cpp_FUN_00537410(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char local_2c [32];
  
  pcVar5 = local_2c;
  pcVar4 = local_2c;
  pcVar3 = param_1;
  if (g_ConfirmNewActorNames == 0) {
    return 1;
  }
  do {
    cVar1 = *pcVar3;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  do {
    iVar2 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,"Confirm new actor name",local_2c,0x1e,1);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = core_msnedit_cpp_CDemonMission_FUN_0053d220(g_CDemonMissionPtr);
  } while (iVar2 == 0);
  do {
    cVar1 = *pcVar4;
    *param_1 = cVar1;
    if (cVar1 == '\0') {
      return 1;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    param_1[1] = cVar1;
    param_1 = param_1 + 2;
  } while (cVar1 != '\0');
  return 1;
}
