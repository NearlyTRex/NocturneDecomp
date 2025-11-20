// Name: core_sound.cpp_CSound_FUN_005b3c70
// Address: 005b3c70
// Address Range: [[005b3c70, 005b3c8c]]
// Convention: __cdecl
// Signature: float * core_sound.cpp_CSound_FUN_005b3c70(CSound * this_ptr)
// Cross-references:
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580b45 [UNCONDITIONAL_CALL]
// Globals:
//   float DAT_00652816 = 0.7470588
//   SSoundModeEntry[27] g_SoundModeTable

#include "nocturne.h"

float * __cdecl core_sound_cpp_CSound_FUN_005b3c70(CSound *this_ptr)

{
  int in_stack_00000008;
  
  if ((-1 < in_stack_00000008) && (in_stack_00000008 < 0x1b)) {
    return (float *)g_SoundModeTable[in_stack_00000008].name;
  }
  return &DAT_00652816;
}


// Assembly code:
// 005b3c70: MOV EAX,dword ptr [ESP + 0x8]
//   Label: core_sound.cpp_CSound_FUN_005b3c70
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
