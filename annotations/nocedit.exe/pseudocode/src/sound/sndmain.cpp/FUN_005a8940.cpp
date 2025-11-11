// Name: sound_sndmain.cpp_FUN_005a8940
// Address: 005a8940
// Address Range: [[005a8940, 005a8963]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a8940()
// Cross-references:
//   core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20 (004d1f20) at 004d1f52 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450 (00506450) at 0050661c [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0 (0050aba0) at 0050acf7 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40 (0050ad40) at 0050adad [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b1fd0 (005b1fd0) at 005b21cb [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_FUN_005e8b50 (005e8b50) at 005e8b5f [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a95e0 (005a95e0) at 005a95f5 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_SfxLastSlot
//   undefined4 g_SfxLastSlot.field_20[12]
//   undefined4 g_SfxLastSlot.field_20[16]

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005a8940(void)

{
  CSfxOptions *pCVar1;
  int iVar2;
  undefined4 in_stack_00000004;
  
  iVar2 = g_SfxLastSlot;
  pCVar1 = g_SfxOptions + g_SfxLastSlot;
  pCVar1->field5_0x14[0xc] = '\x01';
  pCVar1->field5_0x14[0xd] = '\0';
  pCVar1->field5_0x14[0xe] = '\0';
  pCVar1->field5_0x14[0xf] = '\0';
  *(undefined4 *)(g_SfxOptions[iVar2].field5_0x14 + 8) = in_stack_00000004;
  return;
}


// Assembly code:
// 005a8940: MOV EAX,[0x03f624a4]
//   Label: sound_sndmain.cpp_FUN_005a8940
//   XREF to: 03f624a4 (READ)
// 005a8945: SHL EAX,0x4
// 005a8948: MOV EDX,EAX
// 005a894a: SHL EAX,0x3
// 005a894d: SUB EAX,EDX
// 005a894f: MOV dword ptr [EAX + 0x3f624c8],0x1
//   XREF to: 03f624c8 (DATA)
// 005a8959: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005a895d: MOV dword ptr [EAX + 0x3f624c4],EDX
//   XREF to: 03f624c4 (DATA)
// 005a8963: RET
