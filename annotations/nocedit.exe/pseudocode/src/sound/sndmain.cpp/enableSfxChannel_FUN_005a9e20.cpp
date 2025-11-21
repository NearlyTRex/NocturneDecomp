// Name: sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
// Address: 005a9e20
// Address Range: [[005a9e20, 005a9e94]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20(int channel_index, int enable_state)
// Cross-references:
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00512841 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_init_FUN_005b2dd0 (005b2dd0) at 005b2e76 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_process_FUN_005b2fd0 (005b2fd0) at 005b3231 [UNCONDITIONAL_CALL]
//   core_sound.cpp_syncChannel3WithChannel0_FUN_005b2d70 (005b2d70) at 005b2d85 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_readIni_FUN_005abf20 (005abf20) at 005ac18e [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00 (005aae00) at 005aae14 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_00650aac
//   TerminatedCString s_enableSfxChannel_invalid_00650ac1
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CSfxSlot[64] g_SfxSlots
//   undefined4 g_SfxSlots[1].status
//   int[32] g_SfxChannelEnabled
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
//   sound_sndmain.cpp_lockSound_FUN_005abd30
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(int channel_index,int enable_state)

{
  int iVar1;
  
  if ((channel_index < 0) || (0x1f < channel_index)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xfa1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("enableSfxChannel - invalid channel index: %d",channel_index);
  }
  g_SfxChannelEnabled[channel_index] = enable_state;
  if (enable_state == 0) {
    sound_sndmain_cpp_lockSound_FUN_005abd30();
    iVar1 = 0;
    do {
      if (channel_index == *(int *)((int)g_SfxSlots[0].options.userdata + iVar1 + -0x54)) {
        sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60
                  ((CSfxSlot *)((int)g_SfxSlots[0].options.userdata + iVar1 + -0x54));
      }
      iVar1 = iVar1 + 0x128;
    } while (iVar1 != 0x4a00);
    sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  }
  return;
}


// Assembly code:
// 005a9e20: PUSH EBX
//   Label: sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
// 005a9e21: PUSH ESI
// 005a9e22: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a9e26: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005a9e2a: TEST ESI,ESI
// 005a9e2c: JL 0x005a9e33
//   XREF to: 005a9e33 (CONDITIONAL_JUMP)
// 005a9e2e: CMP ESI,0x20
// 005a9e31: JL 0x005a9e57
//   XREF to: 005a9e57 (CONDITIONAL_JUMP)
// 005a9e33: PUSH ESI
//   Label: LAB_005a9e33
// 005a9e34: MOV EDX,0x650aac
//   XREF to: 00650aac (PARAM)
// 005a9e39: MOV ECX,0xfa1
// 005a9e3e: PUSH 0x650ac1
//   XREF to: 00650ac1 (DATA)
// 005a9e43: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005a9e49: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005a9e4f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a9e54: ADD ESP,0x8
// 005a9e57: MOV dword ptr [ESI*0x4 + 0x3f68928],EBX
//   Label: LAB_005a9e57
//   XREF to: 03f68928 (DATA)
// 005a9e5e: TEST EBX,EBX
// 005a9e60: JNZ 0x005a9e92
//   XREF to: 005a9e92 (CONDITIONAL_JUMP)
// 005a9e62: CALL sound_sndmain.cpp_lockSound_FUN_005abd30
//   XREF to: 005abd30 (UNCONDITIONAL_CALL)
// 005a9e67: CMP ESI,dword ptr [EBX + 0x3f5daa4]
//   Label: LAB_005a9e67
//   XREF to: 03f5daa4 (DATA)
//   XREF to: 03f5dbcc (DATA)
// 005a9e6d: JNZ 0x005a9e7f
//   XREF to: 005a9e7f (CONDITIONAL_JUMP)
// 005a9e6f: MOV EAX,0x3f5daa4
//   XREF to: 03f5daa4 (DATA)
// 005a9e74: ADD EAX,EBX
// 005a9e76: PUSH EAX
// 005a9e77: CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
//   XREF to: 005a7e60 (UNCONDITIONAL_CALL)
// 005a9e7c: ADD ESP,0x4
// 005a9e7f: ADD EBX,0x128
//   Label: LAB_005a9e7f
// 005a9e85: CMP EBX,0x4a00
// 005a9e8b: JNZ 0x005a9e67
//   XREF to: 005a9e67 (CONDITIONAL_JUMP)
// 005a9e8d: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a9e92: POP ESI
//   Label: LAB_005a9e92
// 005a9e93: POP EBX
// 005a9e94: RET
