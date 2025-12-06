// Name: core_msnedit.cpp_NotGoingtoAddToList_CantAdd_FUN_00538d60
// Address: 00538d60
// Address Range: [[00538d60, 00538de6]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_NotGoingtoAddToList_CantAdd_FUN_00538d60()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_NotGoingtoAddToList_CantAdd(uint param_1, uint
   param_2) */

void core_msnedit_cpp_NotGoingtoAddToList_CantAdd_FUN_00538d60
               (uint param_1,uint param_2,uint unaff_EBX,uint param_4,
               int param_5,char *param_6)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = core_msnedit_cpp_FUN_00538f40();
  if (-1 < iVar2) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"I'm not going to add %s into the set list because it's already there!",param_6,unaff_EBX);
    return;
  }
  if (3 < *(int *)(param_5 + 0x144)) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't add %s to set list - too many sets (%d)!",param_6,4);
    return;
  }
  pcVar3 = (char *)(*(int *)(param_5 + 0x144) * 0x100 + param_5 + 0x148);
  do {
    cVar1 = *param_6;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_6[1];
    param_6 = param_6 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  *(int *)(param_5 + 0x144) = *(int *)(param_5 + 0x144) + 1;
  return;
}
