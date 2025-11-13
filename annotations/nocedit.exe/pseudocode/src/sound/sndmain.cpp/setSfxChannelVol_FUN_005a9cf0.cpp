// Name: sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
// Address: 005a9cf0
// Address Range: [[005a9cf0, 005a9d8a]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0(int channel_index, float volume)
// Cross-references:
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00512980 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b2dd0 (005b2dd0) at 005b2e9d [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b2fd0 (005b2fd0) at 005b325f [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b3830 (005b3830) at 005b38a6 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b2d70 (005b2d70) at 005b2dad [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005aae00 (005aae00) at 005aae09 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_readIni_FUN_005abf20 (005abf20) at 005ac1eb [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_006509f0
//   TerminatedCString s_setSfxChannelVol_invalid_00650a05
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CSfxSlot[64] g_SfxSlots
//   undefined4 DAT_03f5db14
//   undefined4 g_SfxSlots[0].field7_0x74
//   undefined4 g_SfxSlots[1].status
//   undefined4 g_SfxSlots[1].dsound_buffer
//   undefined4 DAT_03f5dc40
//   undefined4 g_SfxLastSlot
//   undefined4 DAT_03f688a8
//   CSoundDevice* g_CSoundDevicePtr
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   sound_sndmain.cpp_FUN_005ab5a0
//   sound_sndmain.cpp_lockSound_FUN_005abd30
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(int channel_index,float volume)

{
  CSoundDevice *pCVar1;
  int iVar2;
  CSfxSlot *pCVar3;
  undefined4 in_stack_0000000c;
  
  if ((channel_index < 0) || (0x1f < channel_index)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xf81;
    core_main_c_displayErrorAndQuit_FUN_00506f10("setSfxChannelVol - invalid channel index: %d",channel_index);
  }
  pCVar1 = g_CSoundDevicePtr;
  *(undefined4 *)(&DAT_03f688a8 + channel_index * 4) = in_stack_0000000c;
  if (pCVar1 != (CSoundDevice *)0x0) {
    iVar2 = sound_sndmain_cpp_FUN_005ab5a0();
    if (iVar2 != 0) {
      pCVar3 = g_SfxSlots;
      sound_sndmain_cpp_lockSound_FUN_005abd30();
      do {
        if (((pCVar3->field2_0x74 != 0) && (pCVar3->dsound_buffer != (void *)0x0)) &&
           (channel_index == (pCVar3->options).status)) {
          (*g_CSoundDevicePtr->vtable->setSfxPos)(g_CSoundDevicePtr);
        }
        pCVar3 = pCVar3 + 1;
      } while (pCVar3 != (CSfxSlot *)&g_SfxLastSlot);
      sound_sndmain_cpp_unlockSound_FUN_005abdc0();
      return;
    }
  }
  return;
}


// Assembly code:
// 005a9cf0: PUSH EBX
//   Label: sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
// 005a9cf1: PUSH ESI
// 005a9cf2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a9cf6: TEST ESI,ESI
// 005a9cf8: JL 0x005a9cff
//   XREF to: 005a9cff (CONDITIONAL_JUMP)
// 005a9cfa: CMP ESI,0x20
// 005a9cfd: JL 0x005a9d23
//   XREF to: 005a9d23 (CONDITIONAL_JUMP)
// 005a9cff: PUSH ESI
//   Label: LAB_005a9cff
// 005a9d00: MOV EDX,0x6509f0
//   XREF to: 006509f0 (PARAM)
// 005a9d05: MOV ECX,0xf81
// 005a9d0a: PUSH 0x650a05
//   XREF to: 00650a05 (DATA)
// 005a9d0f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005a9d15: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005a9d1b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a9d20: ADD ESP,0x8
// 005a9d23: MOV EDX,dword ptr [ESP + 0x10]
//   Label: LAB_005a9d23
//   XREF to: Stack[0x8] (READ)
// 005a9d27: MOV EBX,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a9d2d: MOV dword ptr [ESI*0x4 + 0x3f688a8],EDX
//   XREF to: 03f688a8 (DATA)
// 005a9d34: TEST EBX,EBX
// 005a9d36: JNZ 0x005a9d3b
//   XREF to: 005a9d3b (CONDITIONAL_JUMP)
// 005a9d38: POP ESI
//   Label: LAB_005a9d38
// 005a9d39: POP EBX
// 005a9d3a: RET
// 005a9d3b: CALL sound_sndmain.cpp_FUN_005ab5a0
//   Label: LAB_005a9d3b
//   XREF to: 005ab5a0 (UNCONDITIONAL_CALL)
// 005a9d40: TEST EAX,EAX
// 005a9d42: JZ 0x005a9d38
//   XREF to: 005a9d38 (CONDITIONAL_JUMP)
// 005a9d44: PUSH EDI
// 005a9d45: MOV EBX,0x3f5daa4
//   XREF to: 03f5daa4 (DATA)
// 005a9d4a: CALL sound_sndmain.cpp_lockSound_FUN_005abd30
//   XREF to: 005abd30 (UNCONDITIONAL_CALL)
// 005a9d4f: LEA EDI,[EBX + 0x4a00]
//   XREF to: 03f624a4 (DATA)
// 005a9d55: CMP dword ptr [EBX + 0x74],0x0
//   Label: LAB_005a9d55
//   XREF to: 03f5db18 (READ)
//   XREF to: 03f5dc40 (READ)
// 005a9d59: JNZ 0x005a9d6e
//   XREF to: 005a9d6e (CONDITIONAL_JUMP)
// 005a9d5b: ADD EBX,0x128
//   Label: LAB_005a9d5b
// 005a9d61: CMP EBX,EDI
// 005a9d63: JNZ 0x005a9d55
//   XREF to: 005a9d55 (CONDITIONAL_JUMP)
// 005a9d65: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a9d6a: POP EDI
// 005a9d6b: POP ESI
// 005a9d6c: POP EBX
// 005a9d6d: RET
// 005a9d6e: CMP dword ptr [EBX + 0x70],0x0
//   Label: LAB_005a9d6e
//   XREF to: 03f5db14 (READ)
//   XREF to: 03f5dc3c (READ)
// 005a9d72: JZ 0x005a9d5b
//   XREF to: 005a9d5b (CONDITIONAL_JUMP)
// 005a9d74: CMP ESI,dword ptr [EBX]
//   XREF to: 03f5daa4 (READ)
//   XREF to: 03f5dbcc (READ)
// 005a9d76: JNZ 0x005a9d5b
//   XREF to: 005a9d5b (CONDITIONAL_JUMP)
// 005a9d78: PUSH 0x8
// 005a9d7a: MOV EAX,[0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a9d7f: PUSH EBX
//   XREF to: 03f5daa4 (DATA)
//   XREF to: 03f5dbcc (DATA)
// 005a9d80: MOV EDX,dword ptr [EAX]
// 005a9d82: PUSH EAX
// 005a9d83: CALL dword ptr [EDX + 0x40]
// 005a9d86: ADD ESP,0xc
// 005a9d89: JMP 0x005a9d5b
//   XREF to: 005a9d5b (UNCONDITIONAL_JUMP)
