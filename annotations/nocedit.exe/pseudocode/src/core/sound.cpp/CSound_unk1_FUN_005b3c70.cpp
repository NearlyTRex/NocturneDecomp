// Name: core_sound.cpp_CSound_unk1_FUN_005b3c70
// Address: 005b3c70
// Address Range: [[005b3c70, 005b3c8c]]
// Convention: unknown
// Signature: undefined core_sound.cpp_CSound_unk1_FUN_005b3c70()
// Cross-references:
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580b45 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00652816
//   void* PTR_s_OFF_00681efc = 00652855

#include "nocturne.h"

/* Signature: undefined1 core_sound.cpp_CSound_unk1(undefined1 param_1, undefined4 param_2) */

undefined * core_sound_cpp_CSound_unk1_FUN_005b3c70(void)

{
  int in_stack_00000008;
  
  if ((-1 < in_stack_00000008) && (in_stack_00000008 < 0x1b)) {
    return (undefined *)(&PTR_s_OFF_00681efc)[in_stack_00000008 * 4];
  }
  return &DAT_00652816;
}


// Assembly code:
// 005b3c70: MOV EAX,dword ptr [ESP + 0x8]
//   Label: core_sound.cpp_CSound_unk1_FUN_005b3c70
//   XREF to: Stack[0x8] (READ)
// 005b3c74: TEST EAX,EAX
// 005b3c76: JL 0x005b3c7d
//   XREF to: 005b3c7d (CONDITIONAL_JUMP)
// 005b3c78: CMP EAX,0x1b
// 005b3c7b: JL 0x005b3c83
//   XREF to: 005b3c83 (CONDITIONAL_JUMP)
// 005b3c7d: MOV EAX,0x652816
//   Label: LAB_005b3c7d
//   XREF to: 00652816 (DATA)
// 005b3c82: RET
// 005b3c83: SHL EAX,0x4
//   Label: LAB_005b3c83
// 005b3c86: MOV EAX,dword ptr [EAX + 0x681efc]
//   XREF to: 00681efc (DATA)
// 005b3c8c: RET
