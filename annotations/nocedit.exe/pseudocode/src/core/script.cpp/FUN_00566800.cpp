// Name: core_script.cpp_FUN_00566800
// Address: 00566800
// Address Range: [[00566800, 0056687c]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00566800()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00566800(uint param_1, uint param_2) */

void core_script_cpp_FUN_00566800(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  
  bVar6 = 0;
  if (-1 < in_stack_00000008) {
    iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004 + 0x38));
    if (in_stack_00000008 < iVar2) {
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                         ((CStrList *)(in_stack_00000004 + 0x38),in_stack_00000008);
      uVar4 = 0xffffffff;
      pcVar5 = pcVar3;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
      } while (cVar1 != '\0');
      iVar2 = ~uVar4 - 1;
      if (in_stack_00000008 != DAT_0310fd48) {
        pcVar5 = pcVar3 + iVar2;
        while ((0 < iVar2 && ((g_CharacterClassificationTable[(byte)(pcVar5[-1] + 1)] & 2U) != 0)))
        {
          iVar2 = iVar2 + -1;
          pcVar5 = pcVar5 + -1;
        }
        pcVar3[iVar2] = '\0';
      }
      if (CEdScrollBar_0310fd0c.current_value < iVar2) {
        CEdScrollBar_0310fd0c.current_value = iVar2;
        return;
      }
    }
  }
  return;
}
