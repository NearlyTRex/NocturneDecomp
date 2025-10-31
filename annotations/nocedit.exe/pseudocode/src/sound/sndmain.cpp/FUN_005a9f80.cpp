// Name: sound_sndmain.cpp_FUN_005a9f80
// Address: 005a9f80
// Address Range: [[005a9f80, 005a9fec]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a9f80()
// Globals:
//   TerminatedCString s_sfx_slot_d_s_pos_7_1f_7__00650b33
//   SfxSlot[64] g_SfxSlots
//   undefined4 DAT_03f5db1c
//   undefined4 g_SfxSlots[1].status
//   undefined4 g_SfxSlots[1].field_20[76]
//   undefined4 g_SfxSlots[1].field_20[80]
//   undefined4 DAT_03f5dc40
//   undefined4 DAT_03f5dc44
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   sound_sndmain.cpp_lockSound_FUN_005abd30
//   sound_sndmain.cpp_PollHWPlaybackPosAndSet_FUN_005a80e0
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005a9f80(void)

{
  int iVar1;
  SfxSlot *pSVar2;
  int iVar3;
  char *in_stack_00000008;
  
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  pSVar2 = g_SfxSlots;
  iVar3 = 0;
  do {
    if ((pSVar2->sample != (SfxSample *)0x0) && (pSVar2->field_116 != 0)) {
      sound_sndmain_cpp_PollHWPlaybackPosAndSet_FUN_005a80e0();
      iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0
                        (in_stack_00000008,"sfx slot %d: %s, pos %7.1f/%7.1f\n",iVar3,pSVar2->sample,
                         *(undefined4 *)(pSVar2->field_20 + 0x4c),
                         *(undefined4 *)(pSVar2->field_20 + 0x50),
                         (double)*(int *)(pSVar2->sample->field1_0x4 + 0x10c));
      in_stack_00000008 = in_stack_00000008 + iVar1;
    }
    iVar3 = iVar3 + 1;
    pSVar2 = pSVar2 + 1;
  } while (iVar3 < 0x40);
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  *in_stack_00000008 = '\0';
  return;
}


// Assembly code:
// 005a9f80: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005a9f80
// 005a9f81: PUSH ESI
// 005a9f82: PUSH EDI
// 005a9f83: PUSH EBP
// 005a9f84: CALL sound_sndmain.cpp_lockSound_FUN_005abd30
//   XREF to: 005abd30 (UNCONDITIONAL_CALL)
// 005a9f89: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a9f8d: MOV EBX,0x3f5daa4
//   XREF to: 03f5daa4 (DATA)
// 005a9f92: XOR ESI,ESI
// 005a9f94: CMP dword ptr [EBX + 0x78],0x0
//   Label: LAB_005a9f94
//   XREF to: 03f5db1c (READ)
//   XREF to: 03f5dc44 (READ)
// 005a9f98: JNZ 0x005a9fb3
//   XREF to: 005a9fb3 (CONDITIONAL_JUMP)
// 005a9f9a: INC ESI
//   Label: LAB_005a9f9a
// 005a9f9b: ADD EBX,0x128
//   XREF to: 03f5dbcc (PARAM)
// 005a9fa1: CMP ESI,0x40
// 005a9fa4: JL 0x005a9f94
//   XREF to: 005a9f94 (CONDITIONAL_JUMP)
// 005a9fa6: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a9fab: MOV byte ptr [EDI],0x0
// 005a9fae: POP EBP
// 005a9faf: POP EDI
// 005a9fb0: POP ESI
// 005a9fb1: POP EBX
// 005a9fb2: RET
// 005a9fb3: CMP dword ptr [EBX + 0x74],0x0
//   Label: LAB_005a9fb3
//   XREF to: 03f5dc40 (READ)
// 005a9fb7: JZ 0x005a9f9a
//   XREF to: 005a9f9a (CONDITIONAL_JUMP)
// 005a9fb9: PUSH EBX
//   XREF to: 03f5dbcc (DATA)
// 005a9fba: CALL sound_sndmain.cpp_PollHWPlaybackPosAndSet_FUN_005a80e0
//   XREF to: 005a80e0 (UNCONDITIONAL_CALL)
// 005a9fbf: ADD ESP,0x4
// 005a9fc2: MOV EAX,dword ptr [EBX + 0x78]
//   XREF to: 03f5dc44 (READ)
// 005a9fc5: SUB ESP,0x8
// 005a9fc8: FILD dword ptr [EAX + 0x110]
// 005a9fce: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005a9fd1: MOV EBP,dword ptr [EBX + 0x64]
//   XREF to: 03f5dc30 (READ)
// 005a9fd4: PUSH EBP
// 005a9fd5: MOV EDX,dword ptr [EBX + 0x60]
//   XREF to: 03f5dc2c (READ)
// 005a9fd8: PUSH EDX
// 005a9fd9: PUSH EAX
// 005a9fda: PUSH ESI
// 005a9fdb: PUSH 0x650b33
//   XREF to: 00650b33 (DATA)
// 005a9fe0: PUSH EDI
// 005a9fe1: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005a9fe6: ADD ESP,0x20
// 005a9fe9: ADD EDI,EAX
// 005a9feb: JMP 0x005a9f9a
//   XREF to: 005a9f9a (UNCONDITIONAL_JUMP)
