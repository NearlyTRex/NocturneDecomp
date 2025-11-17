// Name: sound_sndmain.cpp_FUN_005a9ff0
// Address: 005a9ff0
// Address Range: [[005a9ff0, 005aa015]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_FUN_005a9ff0(void)
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da7fe [UNCONDITIONAL_CALL]
// Globals:
//   CSfxSlot[64] g_SfxSlots
//   undefined4 g_SfxSlots[0].field7_0x74
//   undefined4 DAT_03f5db1c
//   undefined4 DAT_03f5dc40
//   undefined4 DAT_03f5dc44
//   int g_SfxLastSlot

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_FUN_005a9ff0(void)

{
  CSfxSlot *pCVar1;
  int iVar2;
  
  pCVar1 = g_SfxSlots;
  iVar2 = 0;
  do {
    if ((pCVar1->sample != (CSfxSample *)0x0) && (pCVar1->playback_state != 0)) {
      iVar2 = iVar2 + 1;
    }
    pCVar1 = pCVar1 + 1;
  } while (pCVar1 != (CSfxSlot *)&g_SfxLastSlot);
  return iVar2;
}


// Assembly code:
// 005a9ff0: MOV EAX,0x3f5daa4
//   Label: sound_sndmain.cpp_FUN_005a9ff0
//   XREF to: 03f5daa4 (DATA)
// 005a9ff5: XOR EDX,EDX
// 005a9ff7: LEA ECX,[EAX + 0x4a00]
//   XREF to: 03f624a4 (DATA)
// 005a9ffd: CMP dword ptr [EAX + 0x78],0x0
//   Label: LAB_005a9ffd
//   XREF to: 03f5db1c (READ)
//   XREF to: 03f5dc44 (READ)
// 005aa001: JZ 0x005aa00a
//   XREF to: 005aa00a (CONDITIONAL_JUMP)
// 005aa003: CMP dword ptr [EAX + 0x74],0x0
//   XREF to: 03f5db18 (READ)
//   XREF to: 03f5dc40 (READ)
// 005aa007: JZ 0x005aa00a
//   XREF to: 005aa00a (CONDITIONAL_JUMP)
// 005aa009: INC EDX
// 005aa00a: ADD EAX,0x128
//   Label: LAB_005aa00a
// 005aa00f: CMP EAX,ECX
// 005aa011: JNZ 0x005a9ffd
//   XREF to: 005a9ffd (CONDITIONAL_JUMP)
// 005aa013: MOV EAX,EDX
// 005aa015: RET
