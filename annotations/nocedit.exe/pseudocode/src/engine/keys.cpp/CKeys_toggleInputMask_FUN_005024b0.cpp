// Name: engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0
// Address: 005024b0
// Address Range: [[005024b0, 005024ce]]
// Convention: __cdecl
// Signature: void engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0(CKeys * this, int enableExtended)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db52c [UNCONDITIONAL_CALL]
//   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 (005138e0) at 00514b1a [UNCONDITIONAL_CALL]
// Globals:
//   int g_InputKeyMask = 0x7f

#include "nocturne.h"

void __cdecl engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0(CKeys *this,int enableExtended)

{
  if (enableExtended != 0) {
    g_InputKeyMask = 0x1ff;
    return;
  }
  g_InputKeyMask = 0x7f;
  return;
}


// Assembly code:
// 005024b0: CMP dword ptr [ESP + 0x8],0x0
//   Label: engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0
//   XREF to: Stack[0x8] (READ)
// 005024b5: JZ 0x005024c3
//   XREF to: 005024c3 (CONDITIONAL_JUMP)
// 005024b7: MOV EDX,0x1ff
// 005024bc: MOV dword ptr [0x006793a8],EDX
//   XREF to: 006793a8 (WRITE)
// 005024c2: RET
// 005024c3: MOV EDX,0x7f
//   Label: LAB_005024c3
// 005024c8: MOV dword ptr [0x006793a8],EDX
//   XREF to: 006793a8 (WRITE)
// 005024ce: RET
