// Name: sound_sndmain.cpp_CSfxSlot_kill_FUN_005acdb0
// Address: 005acdb0
// Address Range: [[005acdb0, 005ace81]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_CSfxSlot_kill_FUN_005acdb0(CSfxSlot * this_ptr)
// Cross-references:
//   sound_snddx.cpp_CDirectSoundDevice_poll_FUN_005aed50 (005aed50) at 005aed74 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_0065104e
//   TerminatedCString s_SfxSlot_kill_must_be_loc_00651063
//   undefined4 DAT_00651087
//   double DOUBLE_0065108f = 0.25
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CSfxSlot[64] g_SfxSlots
//   undefined4 g_SfxSlots[1].status
//   undefined4 g_SfxLastSlot
//   int g_SoundLockCount
//   undefined4 DAT_03f69410
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_005a7fe0
//   sound_sndmain.cpp_FUN_005a5530
//   sound_sndmain.cpp_FUN_005ab5a0
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_005acdb0(CSfxSlot *this_ptr)

{
  int iVar1;
  CSfxSlot *this_ptr_00;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x1718;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
  }
  sound_sndmain_cpp_FUN_005a5530();
  DAT_03f69410 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  sound_sndmain_cpp_FUN_005ab5a0();
  this_ptr_00 = g_SfxSlots;
  do {
    iVar1 = sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr_00);
    if (iVar1 != 0) {
      sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_005a7fe0(this_ptr_00);
    }
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CSfxSlot *)&g_SfxLastSlot);
  return;
}


// Assembly code:
// 005acdb0: PUSH EBX
//   Label: sound_sndmain.cpp_CSfxSlot_kill_FUN_005acdb0
// 005acdb1: PUSH ESI
// 005acdb2: PUSH EBP
// 005acdb3: MOV EBP,ESP
// 005acdb5: SUB ESP,0x8
// 005acdb8: AND ESP,0xfffffff8
// 005acdbb: CMP dword ptr [0x03f6940c],0x0
//   XREF to: 03f6940c (READ)
// 005acdc2: JLE 0x005ace1b
//   XREF to: 005ace1b (CONDITIONAL_JUMP)
// 005acdc4: CALL sound_sndmain.cpp_FUN_005a5530
//   Label: LAB_005acdc4
//   XREF to: 005a5530 (UNCONDITIONAL_CALL)
// 005acdc9: MOV EBX,dword ptr [0x03f69410]
//   XREF to: 03f69410 (READ)
// 005acdcf: XOR ESI,ESI
// 005acdd1: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 005acdd6: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x18] (DATA)
// 005acdd9: MOV [0x03f69410],EAX
//   XREF to: 03f69410 (WRITE)
// 005acdde: CALL sound_sndmain.cpp_FUN_005ab5a0
//   XREF to: 005ab5a0 (UNCONDITIONAL_CALL)
// 005acde3: TEST EAX,EAX
// 005acde5: JNZ 0x005ace40
//   XREF to: 005ace40 (CONDITIONAL_JUMP)
// 005acde7: MOV EBX,0x3f5daa4
//   Label: LAB_005acde7
//   XREF to: 03f5daa4 (PARAM)
// 005acdec: LEA ESI,[EBX + 0x4a00]
//   XREF to: 03f624a4 (DATA)
// 005acdf2: PUSH dword ptr [ESP]
//   Label: LAB_005acdf2
//   XREF to: Stack[-0x18] (DATA)
// 005acdf5: PUSH EBX
//   XREF to: 03f5daa4 (DATA)
//   XREF to: 03f5dbcc (DATA)
// 005acdf6: CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   XREF to: 005a7100 (UNCONDITIONAL_CALL)
// 005acdfb: ADD ESP,0x8
// 005acdfe: TEST EAX,EAX
// 005ace00: JZ 0x005ace0b
//   XREF to: 005ace0b (CONDITIONAL_JUMP)
// 005ace02: PUSH EBX
//   XREF to: 03f5daa4 (DATA)
// 005ace03: CALL sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_005a7fe0
//   XREF to: 005a7fe0 (UNCONDITIONAL_CALL)
// 005ace08: ADD ESP,0x4
// 005ace0b: ADD EBX,0x128
//   Label: LAB_005ace0b
//   XREF to: 03f5dbcc (PARAM)
// 005ace11: CMP EBX,ESI
// 005ace13: JNZ 0x005acdf2
//   XREF to: 005acdf2 (CONDITIONAL_JUMP)
// 005ace15: MOV ESP,EBP
// 005ace17: POP EBP
// 005ace18: POP ESI
// 005ace19: POP EBX
// 005ace1a: RET
// 005ace1b: MOV ECX,0x65104e
//   Label: LAB_005ace1b
//   XREF to: 0065104e (PARAM)
// 005ace20: MOV EBX,0x1718
// 005ace25: PUSH 0x651063
//   XREF to: 00651063 (DATA)
// 005ace2a: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005ace30: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005ace36: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ace3b: ADD ESP,0x4
// 005ace3e: JMP 0x005acdc4
//   XREF to: 005acdc4 (UNCONDITIONAL_JUMP)
// 005ace40: MOV EAX,[0x03f69410]
//   Label: LAB_005ace40
//   XREF to: 03f69410 (READ)
// 005ace45: SUB EAX,EBX
// 005ace47: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005ace4b: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 005ace4f: FMUL double ptr [0x00651087]
//   XREF to: 00651087 (READ)
// 005ace55: FST float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005ace58: FLDZ
// 005ace5a: FCOMPP
// 005ace5c: FNSTSW AX
// 005ace5e: SAHF
// 005ace5f: JBE 0x005ace64
//   XREF to: 005ace64 (CONDITIONAL_JUMP)
// 005ace61: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x18] (DATA)
// 005ace64: FLD float ptr [ESP]
//   Label: LAB_005ace64
//   XREF to: Stack[-0x18] (DATA)
// 005ace67: FCOMP double ptr [0x0065108f]
//   XREF to: 0065108f (READ)
// 005ace6d: FNSTSW AX
// 005ace6f: SAHF
// 005ace70: JBE 0x005acde7
//   XREF to: 005acde7 (CONDITIONAL_JUMP)
// 005ace76: MOV dword ptr [ESP],0x3e800000
//   XREF to: Stack[-0x18] (DATA)
// 005ace7d: JMP 0x005acde7
//   XREF to: 005acde7 (UNCONDITIONAL_JUMP)
