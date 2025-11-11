// Name: sound_sndmain.cpp_FUN_005a8a80
// Address: 005a8a80
// Address Range: [[005a8a80, 005a8a99]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a8a80()
// Cross-references:
//   core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450 (00506450) at 00506634 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b1fd0 (005b1fd0) at 005b21fc [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005ad3b0 (005ad3b0) at 005ad474 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_SfxLastSlot
//   undefined4 g_SfxLastSlot.field_20[56]

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005a8a80(void)

{
  undefined4 in_stack_00000004;
  
  *(undefined4 *)(g_SfxOptions[g_SfxLastSlot].field5_0x14 + 0x34) = in_stack_00000004;
  return;
}


// Assembly code:
// 005a8a80: MOV EAX,[0x03f624a4]
//   Label: sound_sndmain.cpp_FUN_005a8a80
//   XREF to: 03f624a4 (READ)
// 005a8a85: SHL EAX,0x4
// 005a8a88: MOV EDX,EAX
// 005a8a8a: SHL EAX,0x3
// 005a8a8d: SUB EAX,EDX
// 005a8a8f: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005a8a93: MOV dword ptr [EAX + 0x3f624f0],EDX
//   XREF to: 03f624f0 (DATA)
// 005a8a99: RET
