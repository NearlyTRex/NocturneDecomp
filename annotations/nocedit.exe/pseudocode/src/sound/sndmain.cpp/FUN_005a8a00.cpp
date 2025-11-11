// Name: sound_sndmain.cpp_FUN_005a8a00
// Address: 005a8a00
// Address Range: [[005a8a00, 005a8a23]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a8a00()
// Cross-references:
//   core_sound.cpp_CSound_FUN_005b2fd0 (005b2fd0) at 005b3724 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b2770 (005b2770) at 005b2b8a [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_FUN_005e8b50 (005e8b50) at 005e8b6e [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_SfxLastSlot
//   undefined4 g_SfxLastSlot.field_20[44]
//   undefined4 g_SfxLastSlot.field_20[48]

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005a8a00(void)

{
  CSfxOptions *pCVar1;
  int iVar2;
  undefined4 in_stack_00000004;
  
  iVar2 = g_SfxLastSlot;
  pCVar1 = g_SfxOptions + g_SfxLastSlot;
  pCVar1->field5_0x14[0x2c] = '\x01';
  pCVar1->field5_0x14[0x2d] = '\0';
  pCVar1->field5_0x14[0x2e] = '\0';
  pCVar1->field5_0x14[0x2f] = '\0';
  *(undefined4 *)(g_SfxOptions[iVar2].field5_0x14 + 0x28) = in_stack_00000004;
  return;
}


// Assembly code:
// 005a8a00: MOV EAX,[0x03f624a4]
//   Label: sound_sndmain.cpp_FUN_005a8a00
//   XREF to: 03f624a4 (READ)
// 005a8a05: SHL EAX,0x4
// 005a8a08: MOV EDX,EAX
// 005a8a0a: SHL EAX,0x3
// 005a8a0d: SUB EAX,EDX
// 005a8a0f: MOV dword ptr [EAX + 0x3f624e8],0x1
//   XREF to: 03f624e8 (DATA)
// 005a8a19: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005a8a1d: MOV dword ptr [EAX + 0x3f624e4],EDX
//   XREF to: 03f624e4 (DATA)
// 005a8a23: RET
