// Name: sound_sndmain.cpp_SfxSlot_kill_FUN_005a7e60
// Address: 005a7e60
// Address Range: [[005a7e60, 005a7fdc]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_SfxSlot_kill_FUN_005a7e60(SfxSlot * slot)
// Cross-references:
//   sound_sndmain.cpp_ComputingDelay_FUN_005a7100 (005a7100) at 005a73d4 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005aa2f0 (005aa2f0) at 005aa333 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40 (005a9c40) at 005a9c55 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_pollHwHandle_FUN_005a7fe0 (005a7fe0) at 005a8045 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_pollStream_FUN_005a6730 (005a6730) at 005a69e7 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SoundLockKillAndUnlock_FUN_005a5d00 (005a5d00) at 005a5d90 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_UnknownPlayOrUseSample_FUN_005a75e0 (005a75e0) at 005a7704 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 (005a9e20) at 005a9e77 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_killAllSoundSlots_FUN_005a9cc0 (005a9cc0) at 005a9cd3 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a9524 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_006503a3
//   TerminatedCString s_SfxSlot_kill_must_be_loc_006503b8
//   TerminatedCString s_NULLsamplePtr_006503d8
//   TerminatedCString s_sound_sndmain_cpp_006503f8
//   TerminatedCString s_SfxSlot_kill_ref_count_o_0065040d
//   TerminatedCString s_sound_sndmain_cpp_00650437
//   TerminatedCString s_refCount_for_streaming_S_0065044c
//   TerminatedCString s_sound_sndmain_cpp_0065046e
//   TerminatedCString s_streaming_sample_sfx_ind_00650483
//   CConsole* g_CConsolePtr = 0083b1a4
//   CConsole g_ConsolePtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   SfxSlot[64] g_SfxSlots
//   CSound* g_CSoundInstance
//   int g_SoundLockCount
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   sound_sndmain.cpp_FUN_005a4450
//   sound_sndmain.cpp_SfxSample_freeMemory_FUN_005a62c0

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_SfxSlot_kill_FUN_005a7e60(SfxSlot *slot)

{
  int *piVar1;
  SfxSample *pSVar2;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xb22;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
  }
  if (slot->is_active != 0) {
    pSVar2 = (SfxSample *)"[NULLsamplePtr]";
    if (slot->sample != (SfxSample *)0x0) {
      pSVar2 = slot->sample;
    }
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"Killing sfx %s\n",pSVar2);
  }
  if (slot->dsound_buffer != (void *)0x0) {
    if (g_CSoundInstance != (CSound *)0x0) {
      (*(code *)g_CSoundInstance->vtable[1].field_16)();
    }
    slot->dsound_buffer = (void *)0x0;
  }
  slot->is_active = 0;
  slot->field_116 = 0;
  if (slot->sample != (SfxSample *)0x0) {
    if (slot->sample->ref_count < 1) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0xb41;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - ref count out of balance!");
    }
    piVar1 = &slot->sample->ref_count;
    *piVar1 = *piVar1 + -1;
    pSVar2 = slot->sample;
    slot->sample = (SfxSample *)0x0;
    if (-1 < pSVar2->streaming_slot_index) {
      if (pSVar2->ref_count != 0) {
        g_CurrentFilename = "..\\sound\\sndmain.cpp";
        g_CurrentLineNumber = 0xb50;
        core_main_c_displayErrorAndQuit_FUN_00506f10("refCount for streaming Sfx %s > 1",pSVar2);
      }
      if ((int)(slot[-0x36cd9].field_20 + 0x30) / 0x128 != pSVar2->streaming_slot_index) {
        g_CurrentFilename = "..\\sound\\sndmain.cpp";
        g_CurrentLineNumber = 0xb51;
        core_main_c_displayErrorAndQuit_FUN_00506f10("streaming sample sfx index mismatch on %s",pSVar2);
      }
      sound_sndmain_cpp_SfxSample_freeMemory_FUN_005a62c0(pSVar2);
    }
    sound_sndmain_cpp_FUN_005a4450();
  }
  return;
}


// Assembly code:
// 005a7e60: PUSH EBX
//   Label: sound_sndmain.cpp_SfxSlot_kill_FUN_005a7e60
// 005a7e61: PUSH ESI
// 005a7e62: PUSH EBP
// 005a7e63: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005a7e67: CMP dword ptr [0x03f6940c],0x0
//   XREF to: 03f6940c (READ)
// 005a7e6e: JLE 0x005a7f8e
//   XREF to: 005a7f8e (CONDITIONAL_JUMP)
// 005a7e74: CMP dword ptr [EBX + 0x118],0x0
//   Label: LAB_005a7e74
// 005a7e7b: JZ 0x005a7e9f
//   XREF to: 005a7e9f (CONDITIONAL_JUMP)
// 005a7e7d: MOV EBP,dword ptr [EBX + 0x78]
// 005a7e80: MOV EDX,0x6503d8
//   XREF to: 006503d8 (PARAM)
// 005a7e85: TEST EBP,EBP
// 005a7e87: JZ 0x005a7e8b
//   XREF to: 005a7e8b (CONDITIONAL_JUMP)
// 005a7e89: MOV EDX,EBP
// 005a7e8b: PUSH EDX
//   Label: LAB_005a7e8b
//   XREF to: 006503d8 (DATA)
// 005a7e8c: PUSH 0x6503e8
//   XREF to: 006503e8 (DATA)
// 005a7e91: MOV EAX,[0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005a7e96: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 005a7e97: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005a7e9c: ADD ESP,0xc
// 005a7e9f: CMP dword ptr [EBX + 0x70],0x0
//   Label: LAB_005a7e9f
// 005a7ea3: JZ 0x005a7ec0
//   XREF to: 005a7ec0 (CONDITIONAL_JUMP)
// 005a7ea5: MOV ECX,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a7eab: TEST ECX,ECX
// 005a7ead: JZ 0x005a7eb9
//   XREF to: 005a7eb9 (CONDITIONAL_JUMP)
// 005a7eaf: PUSH EBX
// 005a7eb0: MOV EAX,dword ptr [ECX]
// 005a7eb2: PUSH ECX
// 005a7eb3: CALL dword ptr [EAX + 0x4c]
// 005a7eb6: ADD ESP,0x8
// 005a7eb9: MOV dword ptr [EBX + 0x70],0x0
//   Label: LAB_005a7eb9
// 005a7ec0: MOV dword ptr [EBX + 0x118],0x0
//   Label: LAB_005a7ec0
// 005a7eca: MOV ESI,dword ptr [EBX + 0x78]
// 005a7ecd: MOV dword ptr [EBX + 0x74],0x0
// 005a7ed4: TEST ESI,ESI
// 005a7ed6: JZ 0x005a7f8a
//   XREF to: 005a7f8a (CONDITIONAL_JUMP)
// 005a7edc: CMP dword ptr [ESI + 0x154],0x1
// 005a7ee3: JL 0x005a7fb6
//   XREF to: 005a7fb6 (CONDITIONAL_JUMP)
// 005a7ee9: MOV EDX,dword ptr [EBX + 0x78]
//   Label: LAB_005a7ee9
// 005a7eec: DEC dword ptr [EDX + 0x154]
// 005a7ef2: MOV ESI,dword ptr [EBX + 0x78]
// 005a7ef5: MOV dword ptr [EBX + 0x78],0x0
// 005a7efc: CMP dword ptr [ESI + 0x15c],0x0
// 005a7f03: JL 0x005a7f80
//   XREF to: 005a7f80 (CONDITIONAL_JUMP)
// 005a7f09: CMP dword ptr [ESI + 0x154],0x0
// 005a7f10: JZ 0x005a7f35
//   XREF to: 005a7f35 (CONDITIONAL_JUMP)
// 005a7f12: PUSH ESI
// 005a7f13: MOV EAX,0x650437
//   XREF to: 00650437 (PARAM)
// 005a7f18: MOV EDX,0xb50
// 005a7f1d: PUSH 0x65044c
//   XREF to: 0065044c (DATA)
// 005a7f22: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005a7f27: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005a7f2d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a7f32: ADD ESP,0x8
// 005a7f35: MOV EDX,EBX
//   Label: LAB_005a7f35
// 005a7f37: SUB EDX,0x3f5daa4
//   XREF to: 03f5daa4 (DATA)
// 005a7f3d: MOV EBX,0x128
// 005a7f42: MOV EAX,EDX
// 005a7f44: SAR EDX,0x1f
// 005a7f47: IDIV EBX
// 005a7f49: CMP EAX,dword ptr [ESI + 0x15c]
// 005a7f4f: JZ 0x005a7f77
//   XREF to: 005a7f77 (CONDITIONAL_JUMP)
// 005a7f51: PUSH EDI
// 005a7f52: PUSH ESI
// 005a7f53: MOV EBX,0x65046e
//   XREF to: 0065046e (PARAM)
// 005a7f58: MOV EDI,0xb51
// 005a7f5d: PUSH 0x650483
//   XREF to: 00650483 (DATA)
// 005a7f62: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 005a7f68: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005a7f6e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a7f73: ADD ESP,0x8
// 005a7f76: POP EDI
// 005a7f77: PUSH ESI
//   Label: LAB_005a7f77
// 005a7f78: CALL sound_sndmain.cpp_SfxSample_freeMemory_FUN_005a62c0
//   XREF to: 005a62c0 (UNCONDITIONAL_CALL)
// 005a7f7d: ADD ESP,0x4
// 005a7f80: PUSH 0x0
//   Label: LAB_005a7f80
// 005a7f82: CALL sound_sndmain.cpp_FUN_005a4450
//   XREF to: 005a4450 (UNCONDITIONAL_CALL)
// 005a7f87: ADD ESP,0x4
// 005a7f8a: POP EBP
//   Label: LAB_005a7f8a
// 005a7f8b: POP ESI
// 005a7f8c: POP EBX
// 005a7f8d: RET
// 005a7f8e: MOV ECX,0x6503a3
//   Label: LAB_005a7f8e
//   XREF to: 006503a3 (PARAM)
// 005a7f93: MOV ESI,0xb22
// 005a7f98: PUSH 0x6503b8
//   XREF to: 006503b8 (DATA)
// 005a7f9d: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a7fa3: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005a7fa9: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a7fae: ADD ESP,0x4
// 005a7fb1: JMP 0x005a7e74
//   XREF to: 005a7e74 (UNCONDITIONAL_JUMP)
// 005a7fb6: MOV EBP,0x6503f8
//   Label: LAB_005a7fb6
//   XREF to: 006503f8 (DATA)
// 005a7fbb: MOV EAX,0xb41
// 005a7fc0: PUSH 0x65040d
//   XREF to: 0065040d (DATA)
// 005a7fc5: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 005a7fcb: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005a7fd0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a7fd5: ADD ESP,0x4
// 005a7fd8: JMP 0x005a7ee9
//   XREF to: 005a7ee9 (UNCONDITIONAL_JUMP)
