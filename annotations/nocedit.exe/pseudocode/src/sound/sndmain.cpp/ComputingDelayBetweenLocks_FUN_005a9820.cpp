// Name: sound_sndmain.cpp_ComputingDelayBetweenLocks_FUN_005a9820
// Address: 005a9820
// Address Range: [[005a9820, 005a98ab]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_ComputingDelayBetweenLocks_FUN_005a9820()
// Cross-references:
//   core_manpuz.cpp_FUN_0050a4f0 (0050a4f0) at 0050a57b [UNCONDITIONAL_CALL]
// Globals:
//   CSound* g_CSoundInstance
// Function calls:
//   sound_sndmain.cpp_ComputingDelay_FUN_005a7100
//   sound_sndmain.cpp_SoundLockKillAndUnlock_FUN_005a5d00
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

/* Signature: undefined1 sound_sndmain.cpp_ComputingDelayBetweenLocks(undefined4 param_1, undefined4
   param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6,
   undefined4 param_7) */

undefined4 sound_sndmain_cpp_ComputingDelayBetweenLocks_FUN_005a9820(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  iVar1 = sound_sndmain_cpp_SoundLockKillAndUnlock_FUN_005a5d00();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 4) = in_stack_00000008;
  *(undefined4 *)(iVar1 + 8) = in_stack_0000000c;
  *(undefined4 *)(iVar1 + 0xc) = in_stack_00000010;
  *(undefined4 *)(iVar1 + 0x10) = in_stack_00000014;
  *(undefined4 *)(iVar1 + 0x14) = in_stack_00000018;
  uVar2 = 1;
  *(undefined4 *)(iVar1 + 0x18) = in_stack_0000001c;
  sound_sndmain_cpp_ComputingDelay_FUN_005a7100();
  if ((*(int *)(iVar1 + 0x70) != 0) && (g_CSoundInstance != (CSound *)0x0)) {
    uVar2 = (*(code *)g_CSoundInstance->vtable[1].func2)();
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return uVar2;
}


// Assembly code:
// 005a9820: PUSH EBX
//   Label: sound_sndmain.cpp_ComputingDelayBetweenLocks_FUN_005a9820
// 005a9821: PUSH 0x1
// 005a9823: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a9827: PUSH EDX
// 005a9828: CALL sound_sndmain.cpp_SoundLockKillAndUnlock_FUN_005a5d00
//   XREF to: 005a5d00 (UNCONDITIONAL_CALL)
// 005a982d: MOV EBX,EAX
// 005a982f: ADD ESP,0x8
// 005a9832: TEST EAX,EAX
// 005a9834: JNZ 0x005a9838
//   XREF to: 005a9838 (CONDITIONAL_JUMP)
// 005a9836: POP EBX
// 005a9837: RET
// 005a9838: PUSH EDI
//   Label: LAB_005a9838
// 005a9839: PUSH ESI
// 005a983a: MOV dword ptr [EBX + 0x1c],0x0
// 005a9841: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005a9845: MOV dword ptr [EBX + 0x20],0x0
// 005a984c: MOV dword ptr [EBX + 0x4],EAX
// 005a984f: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005a9853: MOV dword ptr [EBX + 0x8],EAX
// 005a9856: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 005a985a: MOV dword ptr [EBX + 0xc],EAX
// 005a985d: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 005a9861: PUSH 0x0
// 005a9863: MOV dword ptr [EBX + 0x10],EAX
// 005a9866: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 005a986a: PUSH EBX
// 005a986b: MOV dword ptr [EBX + 0x14],EAX
// 005a986e: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x1c] (READ)
// 005a9872: MOV ESI,0x1
// 005a9877: MOV dword ptr [EBX + 0x18],EAX
// 005a987a: CALL sound_sndmain.cpp_ComputingDelay_FUN_005a7100
//   XREF to: 005a7100 (UNCONDITIONAL_CALL)
// 005a987f: MOV ECX,dword ptr [EBX + 0x70]
// 005a9882: ADD ESP,0x8
// 005a9885: TEST ECX,ECX
// 005a9887: JZ 0x005a98a1
//   XREF to: 005a98a1 (CONDITIONAL_JUMP)
// 005a9889: MOV EDI,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a988f: TEST EDI,EDI
// 005a9891: JZ 0x005a98a1
//   XREF to: 005a98a1 (CONDITIONAL_JUMP)
// 005a9893: PUSH 0x2
// 005a9895: PUSH EBX
// 005a9896: MOV ESI,dword ptr [EDI]
// 005a9898: PUSH EDI
// 005a9899: CALL dword ptr [ESI + 0x40]
// 005a989c: ADD ESP,0xc
// 005a989f: MOV ESI,EAX
// 005a98a1: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   Label: LAB_005a98a1
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a98a6: MOV EAX,ESI
// 005a98a8: POP ESI
// 005a98a9: POP EDI
// 005a98aa: POP EBX
// 005a98ab: RET
