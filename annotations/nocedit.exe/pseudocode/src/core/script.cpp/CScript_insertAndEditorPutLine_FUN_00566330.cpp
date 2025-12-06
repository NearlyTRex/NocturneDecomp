// Name: core_script.cpp_CScript_insertAndEditorPutLine_FUN_00566330
// Address: 00566330
// Address Range: [[00566330, 0056638d]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_insertAndEditorPutLine_FUN_00566330()

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_insertAndEditorPutLine(CScript* param_1, uint
   param_2, uint param_3) */

void core_script_cpp_CScript_insertAndEditorPutLine_FUN_00566330(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  byte bVar4;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  bVar4 = 0;
  core_script_cpp_FUN_00566230();
  uVar2 = 0xffffffff;
  pcVar3 = &DAT_031101c0;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  if ((int)(~uVar2 - 1) < in_stack_00000008) {
    in_stack_00000008 = ~uVar2 - 1;
  }
  shape_edittool_cpp_CStrList_insert_FUN_004a2bc0
            ((CStrList *)(in_stack_00000004 + 0x38),in_stack_0000000c + 1,
             &DAT_031101c0 + in_stack_00000008);
  (&DAT_031101c0)[in_stack_00000008] = 0;
  core_script_cpp_CScript_editorPutLine_FUN_005662a0();
  return;
}
