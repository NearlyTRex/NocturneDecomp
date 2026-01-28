// Name: core_script.cpp_CScript_SkipCinematic_FUN_005602e0
// Address: 005602e0
// Address Range: [[005602e0, 005603b3]]
// Convention: unknown
// Signature: undefined4 core_script_cpp_CScript_SkipCinematic_FUN_005602e0(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_SkipCinematic(uint param_1) */

uint core_script_cpp_CScript_SkipCinematic_FUN_005602e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_stack_00000004;
  
  if (in_stack_00000004[0x116] < 0) {
    return 0;
  }
  core_script_cpp_FUN_005602b0();
  iVar3 = 0;
  in_stack_00000004[0x12] = in_stack_00000004[0x116];
  while ((g_CGamePtr->letterbox_mode != 0 && (*in_stack_00000004 == 0))) {
    iVar1 = in_stack_00000004[0x12];
    iVar2 = core_script_cpp_CScript_step_FUN_0055a810();
    if (iVar2 < 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Error processing script to skip cinematic.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                 *(uint *)(in_stack_00000004[0xd] + iVar1 * 8),
                 *(uint *)(in_stack_00000004[0xd] + 4 + iVar1 * 8),&DAT_0310eca0);
    }
    iVar3 = iVar3 + 1;
    if (300 < iVar3) {
      g_CurrentLineNumber = 0xea5;
      g_CurrentFilename = "..\\core\\script.cpp";
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Infinite loop detected trying to skip cinematic, at script line %d",
                 *(uint *)(in_stack_00000004[0xd] + in_stack_00000004[0x12] * 8));
    }
  }
  return 1;
}
