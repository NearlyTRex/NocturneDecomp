// Name: core_script.cpp_FUN_00565f70
// Address: 00565f70
// Address Range: [[00565f70, 0056607b]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_00565f70(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00565f70(uint param_1, uint param_2) */

void core_script_cpp_FUN_00565f70(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  if (-1 < DAT_0310fd48) {
    iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004 + 0x38));
    if (DAT_0310fd48 < iVar2) {
      core_script_cpp_CScript_editorX2Index_FUN_00566a90();
      shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                ((CStrList *)(in_stack_00000004 + 0x38),DAT_0310fd48);
      iVar2 = core_script_cpp_SCmdParse_bestParse_FUN_00561db0();
      if (iVar2 < 0) {
        core_script_cpp_FUN_00566390();
        return;
      }
      pcVar3 = &DAT_0310cca8 + iVar2 * 0x328;
      do {
        cVar1 = *in_stack_00000008;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = in_stack_00000008[1];
        in_stack_00000008 = in_stack_00000008 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      core_script_cpp_FUN_005624f0();
      core_script_cpp_CScript_editorPutLine_FUN_005662a0();
      core_script_cpp_FUN_00562760();
      DAT_0310fd44 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30();
      core_script_cpp_FUN_005644e0();
      core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910();
      core_script_cpp_CScript_Unk18_FUN_005669a0();
      return;
    }
  }
  return;
}
