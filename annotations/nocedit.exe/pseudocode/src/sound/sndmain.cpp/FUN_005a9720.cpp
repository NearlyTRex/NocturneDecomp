// Name: sound_sndmain.cpp_FUN_005a9720
// Address: 005a9720
// Address Range: [[005a9720, 005a97d8]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a9720()
// Cross-references:
//   core_event.cpp_CEventList_FUN_004b0db0 (004b0db0) at 004b0df3 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053eb40 (0053eb40) at 0053ebc9 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_CTommyGun_process_FUN_005de360 (005de360) at 005de43f [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_process_FUN_005e2430 (005e2430) at 005e28bb [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005ad3b0 (005ad3b0) at 005ad560 [UNCONDITIONAL_CALL]
// Globals:
//   CSound* g_CSoundPtr
// Function calls:
//   sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
//   sound_sndmain.cpp_CSfxSlot_FUN_005a80e0
//   sound_sndmain.cpp_SoundLockKillAndUnlock_FUN_005a5d00
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

undefined8 sound_sndmain_cpp_FUN_005a9720(void)

{
  CSfxSlot *this_ptr;
  int iVar1;
  double dVar2;
  uint in_stack_00000008;
  uint in_stack_ffffffe0;
  undefined4 local_18;
  undefined4 uStack_14;
  
  this_ptr = (CSfxSlot *)sound_sndmain_cpp_SoundLockKillAndUnlock_FUN_005a5d00();
  if (this_ptr != (CSfxSlot *)0x0) {
    if (((this_ptr->dsound_buffer != (void *)0x0) && (g_CSoundPtr != (CSound *)0x0)) &&
       (iVar1 = sound_sndmain_cpp_CSfxSlot_FUN_005a80e0(this_ptr), iVar1 == 0)) {
      sound_sndmain_cpp_unlockSound_FUN_005abdc0();
      return 0xbff0000000000000;
    }
    dVar2 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
                      (*(CSampleInfo **)((this_ptr->options).field5_0x14 + 0x4c),
                       *(double *)((this_ptr->options).field5_0x14 + 0x50),in_stack_00000008,
                       in_stack_ffffffe0);
    local_18 = (undefined4)((ulonglong)dVar2 >> 0x20);
    sound_sndmain_cpp_unlockSound_FUN_005abdc0();
    uStack_14 = SUB84(dVar2,0);
  }
  return CONCAT44(uStack_14,local_18);
}


// Assembly code:
// 005a9720: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005a9720
// 005a9721: PUSH ESI
// 005a9722: PUSH EDI
// 005a9723: PUSH EBP
// 005a9724: MOV EBP,ESP
// 005a9726: SUB ESP,0x18
// 005a9729: AND ESP,0xfffffff8
// 005a972c: PUSH 0x1
// 005a972e: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a9731: PUSH EDX
// 005a9732: CALL sound_sndmain.cpp_SoundLockKillAndUnlock_FUN_005a5d00
//   XREF to: 005a5d00 (UNCONDITIONAL_CALL)
// 005a9737: ADD ESP,0x8
// 005a973a: MOV EBX,EAX
// 005a973c: TEST EAX,EAX
// 005a973e: JZ 0x005a97aa
//   XREF to: 005a97aa (CONDITIONAL_JUMP)
// 005a9740: CMP dword ptr [EAX + 0x70],0x0
// 005a9744: JZ 0x005a975c
//   XREF to: 005a975c (CONDITIONAL_JUMP)
// 005a9746: CMP dword ptr [0x03f69268],0x0
//   XREF to: 03f69268 (READ)
// 005a974d: JZ 0x005a975c
//   XREF to: 005a975c (CONDITIONAL_JUMP)
// 005a974f: PUSH EAX
// 005a9750: CALL sound_sndmain.cpp_CSfxSlot_FUN_005a80e0
//   XREF to: 005a80e0 (UNCONDITIONAL_CALL)
// 005a9755: ADD ESP,0x4
// 005a9758: TEST EAX,EAX
// 005a975a: JZ 0x005a97b8
//   XREF to: 005a97b8 (CONDITIONAL_JUMP)
// 005a975c: MOV EDX,dword ptr [EBP + 0x18]
//   Label: LAB_005a975c
//   XREF to: Stack[0x8] (READ)
// 005a975f: PUSH EDX
// 005a9760: MOV ECX,dword ptr [EBX + 0x68]
// 005a9763: PUSH ECX
// 005a9764: MOV ESI,dword ptr [EBX + 0x64]
// 005a9767: PUSH ESI
// 005a9768: MOV EDI,dword ptr [EBX + 0x60]
// 005a976b: PUSH EDI
// 005a976c: MOV EAX,dword ptr [EBX + 0x78]
// 005a976f: PUSH EAX
// 005a9770: CALL sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
//   XREF to: 005a8580 (UNCONDITIONAL_CALL)
// 005a9775: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005a9779: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005a977d: FLD double ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ)
// 005a9781: ADD ESP,0x14
// 005a9784: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 005a9788: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a978d: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 005a9791: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x28] (DATA)
// 005a9794: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 005a9798: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005a979c: MOV EAX,dword ptr [ESP]
//   Label: LAB_005a979c
//   XREF to: Stack[-0x28] (DATA)
// 005a979f: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 005a97a3: MOV ESP,EBP
// 005a97a5: POP EBP
// 005a97a6: POP EDI
// 005a97a7: POP ESI
// 005a97a8: POP EBX
// 005a97a9: RET
// 005a97aa: MOV ECX,0xbff00000
//   Label: LAB_005a97aa
// 005a97af: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x28] (DATA)
// 005a97b2: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 005a97b6: JMP 0x005a979c
//   XREF to: 005a979c (UNCONDITIONAL_JUMP)
// 005a97b8: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   Label: LAB_005a97b8
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a97bd: XOR EDI,EDI
// 005a97bf: MOV EAX,0xbff00000
// 005a97c4: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x28] (DATA)
// 005a97c7: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005a97cb: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 005a97ce: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 005a97d2: MOV ESP,EBP
// 005a97d4: POP EBP
// 005a97d5: POP EDI
// 005a97d6: POP ESI
// 005a97d7: POP EBX
// 005a97d8: RET
