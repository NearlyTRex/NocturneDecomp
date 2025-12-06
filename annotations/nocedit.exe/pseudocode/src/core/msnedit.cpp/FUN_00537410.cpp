// Name: core_msnedit.cpp_FUN_00537410
// Address: 00537410
// Address Range: [[00537410, 005374ae]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_00537410()

#include "nocturne.h"

uint core_msnedit_cpp_FUN_00537410(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  char *in_stack_00000004;
  uint local_2c;
  char *apcStack_28 [7];
  
  pcVar4 = (char *)&local_2c;
  pcVar3 = in_stack_00000004;
  if (g_ConfirmNewActorNames == 0) {
    return 1;
  }
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  do {
    iVar2 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,"Confirm new actor name",(char *)&local_2c,0x1e,1)
    ;
    local_2c = apcStack_28;
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = core_msnedit_cpp_FUN_0053d220(g_CDemonMissionPtr);
    pcVar3 = (char *)&local_2c;
  } while (iVar2 == 0);
  apcStack_28[0] = in_stack_00000004;
  do {
    cVar1 = *pcVar3;
    *in_stack_00000004 = cVar1;
    if (cVar1 == '\0') {
      return 1;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    in_stack_00000004[1] = cVar1;
    in_stack_00000004 = in_stack_00000004 + 2;
  } while (cVar1 != '\0');
  return 1;
}
