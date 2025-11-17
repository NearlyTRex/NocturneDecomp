// Name: sound_sndmain.cpp_FUN_005a96e0
// Address: 005a96e0
// Address Range: [[005a96e0, 005a9710]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_FUN_005a96e0(void)
// Cross-references:
//   core_event.cpp_CEventList_FUN_004b0db0 (004b0db0) at 004b0e8e [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da951 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_CTommyGun_process_FUN_005de360 (005de360) at 005de4d8 [UNCONDITIONAL_CALL]
// Function calls:
//   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_FUN_005a96e0(void)

{
  CSfxSlot *pCVar1;
  int iVar2;
  CSfxSample *pCVar3;
  byte bVar4;
  uint in_stack_00000004;
  undefined4 *in_stack_0000000c;
  
  bVar4 = 0;
  pCVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(in_stack_00000004,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  pCVar3 = pCVar1->sample;
  for (iVar2 = 0x54; iVar2 != 0; iVar2 = iVar2 + -1) {
    *in_stack_0000000c = *(undefined4 *)(pCVar3->sample_info).name;
    pCVar3 = (CSfxSample *)((int)pCVar3 + (uint)bVar4 * -8 + 4);
    in_stack_0000000c = in_stack_0000000c + (uint)bVar4 * -2 + 1;
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 1;
}


// Assembly code:
// 005a96e0: PUSH 0x1
//   Label: sound_sndmain.cpp_FUN_005a96e0
// 005a96e2: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a96e6: PUSH EDX
// 005a96e7: CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
//   XREF to: 005a5d00 (UNCONDITIONAL_CALL)
// 005a96ec: ADD ESP,0x8
// 005a96ef: TEST EAX,EAX
// 005a96f1: JNZ 0x005a96f4
//   XREF to: 005a96f4 (CONDITIONAL_JUMP)
// 005a96f3: RET
// 005a96f4: PUSH EDI
//   Label: LAB_005a96f4
// 005a96f5: PUSH ESI
// 005a96f6: MOV ECX,0x54
// 005a96fb: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005a96ff: MOV ESI,dword ptr [EAX + 0x78]
// 005a9702: MOVSD.REP ES:EDI,ESI
// 005a9704: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a9709: MOV EAX,0x1
// 005a970e: POP ESI
// 005a970f: POP EDI
// 005a9710: RET
