// Name: core_msnedit.cpp_NotGoingtoAddToList_CantAdd_FUN_00538d60
// Address: 00538d60
// Address Range: [[00538d60, 00538de6]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_NotGoingtoAddToList_CantAdd_FUN_00538d60()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_NotGoingtoAddToList_CantAdd(uint param_1, uint
   param_2) */

void core_msnedit_cpp_NotGoingtoAddToList_CantAdd_FUN_00538d60(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  iVar2 = core_msnedit_cpp_FUN_00538f40();
  if (-1 < iVar2) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"I'm not going to add %s into the set list because it's already there!",in_stack_00000008);
    return;
  }
  if (3 < *(int *)(in_stack_00000004 + 0x144)) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't add %s to set list - too many sets (%d)!",in_stack_00000008,4);
    return;
  }
  pcVar3 = (char *)(*(int *)(in_stack_00000004 + 0x144) * 0x100 + in_stack_00000004 + 0x148);
  do {
    cVar1 = *in_stack_00000008;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  *(int *)(in_stack_00000004 + 0x144) = *(int *)(in_stack_00000004 + 0x144) + 1;
  return;
}
