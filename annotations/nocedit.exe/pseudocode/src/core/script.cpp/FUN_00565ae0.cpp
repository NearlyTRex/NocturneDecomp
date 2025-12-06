// Name: core_script.cpp_FUN_00565ae0
// Address: 00565ae0
// Address Range: [[00565ae0, 00565c6c]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00565ae0()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00565ae0(uint param_1, uint param_2,
   uint param_3) */

void core_script_cpp_FUN_00565ae0(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  int in_stack_00000004;
  int in_stack_0000000c;
  char acStack_5d4 [500];
  char acStack_3e0 [500];
  char acStack_1ec [480];
  
  bVar6 = 0;
  if (-1 < in_stack_0000000c) {
    iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004 + 0x38));
    if (in_stack_0000000c < iVar2) {
      core_script_cpp_CScript_editorX2Index_FUN_00566a90();
      shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                ((CStrList *)(in_stack_00000004 + 0x38),in_stack_0000000c);
      iVar2 = core_script_cpp_FUN_00561c70();
      if (0 < iVar2) {
        iVar2 = core_script_cpp_FUN_00562920();
        if (iVar2 != 0) {
          pcVar3 = acStack_1ec;
          pcVar4 = &DAT_031101c0;
          do {
            cVar1 = *pcVar3;
            *pcVar4 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar3[1];
            pcVar3 = pcVar3 + 2;
            pcVar4[1] = cVar1;
            pcVar4 = pcVar4 + 2;
          } while (cVar1 != '\0');
          pcVar3 = acStack_3e0;
          iVar2 = -1;
          pcVar4 = &DAT_031101c0;
          do {
            pcVar5 = pcVar4;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar5 = pcVar4 + (uint)bVar6 * -2 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar5;
          } while (cVar1 != '\0');
          pcVar5 = pcVar5 + -1;
          do {
            cVar1 = *pcVar3;
            *pcVar5 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar3[1];
            pcVar3 = pcVar3 + 2;
            pcVar5[1] = cVar1;
            pcVar5 = pcVar5 + 2;
          } while (cVar1 != '\0');
          pcVar3 = acStack_5d4;
          iVar2 = -1;
          pcVar4 = &DAT_031101c0;
          do {
            pcVar5 = pcVar4;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar5 = pcVar4 + (uint)bVar6 * -2 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar5;
          } while (cVar1 != '\0');
          pcVar5 = pcVar5 + -1;
          do {
            cVar1 = *pcVar3;
            *pcVar5 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar3[1];
            pcVar3 = pcVar3 + 2;
            pcVar5[1] = cVar1;
            pcVar5 = pcVar5 + 2;
          } while (cVar1 != '\0');
          core_script_cpp_CScript_editorPutLine_FUN_005662a0();
          DAT_0310fd48 = in_stack_0000000c;
          iVar2 = -1;
          pcVar3 = acStack_1ec + 4;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
          } while (cVar1 != '\0');
          iVar2 = -1;
          pcVar3 = acStack_3e0 + 4;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
          } while (cVar1 != '\0');
          DAT_0310fd44 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30();
          core_script_cpp_FUN_005644e0();
          core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910();
          core_script_cpp_CScript_Unk18_FUN_005669a0();
          return;
        }
      }
    }
  }
  return;
}
