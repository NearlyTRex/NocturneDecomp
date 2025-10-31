// Name: wincore_winrun.cpp_clearKeypresses_FUN_005f2e70
// Address: 005f2e70
// Address Range: [[005f2e70, 005f2e86]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_clearKeypresses_FUN_005f2e70(void)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047d815 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 005653c1 [UNCONDITIONAL_CALL]
//   engine_2d.c_clearInputAndWait_FUN_00403260 (00403260) at 00403260 [UNCONDITIONAL_CALL]
//   engine_keys.cpp_clearKeypresses_FUN_00502450 (00502450) at 00502450 [UNCONDITIONAL_JUMP]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f320 [UNCONDITIONAL_CALL]
//   shape_design.c_showPointEditor_FUN_0045c6c0 (0045c6c0) at 0045c6f9 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0 (0049d6c0) at 0049d82d [UNCONDITIONAL_CALL]
// Globals:
//   int g_InputReadIndex
//   int g_InputWriteIndex
//   int g_InputCountMaybe

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_clearKeypresses_FUN_005f2e70(void)

{
  g_InputWriteIndex = 0;
  g_InputReadIndex = 0;
  g_InputCountMaybe = 0;
  return;
}


// Assembly code:
// 005f2e70: XOR EDX,EDX
//   Label: wincore_winrun.cpp_clearKeypresses_FUN_005f2e70
// 005f2e72: XOR EAX,EAX
// 005f2e74: MOV dword ptr [0x03f96c1c],EDX
//   XREF to: 03f96c1c (WRITE)
// 005f2e7a: MOV dword ptr [0x03f96c18],EDX
//   XREF to: 03f96c18 (WRITE)
// 005f2e80: MOV dword ptr [0x03f96c20],EDX
//   XREF to: 03f96c20 (WRITE)
// 005f2e86: RET
