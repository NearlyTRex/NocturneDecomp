// Name: core_sound.cpp_CSound_init_FUN_005b2dd0
// Address: 005b2dd0
// Address Range: [[005b2dd0, 005b2f66]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_init_FUN_005b2dd0(CSound * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_process_FUN_004e3190 (004e3190) at 004e3662 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004dbba1 [UNCONDITIONAL_CALL]
//   core_game.cpp_SaveRelated_FUN_004dcee0 (004dcee0) at 004dd448 [UNCONDITIONAL_CALL]
// Globals:
//   CEventList* g_CEventListPtr = 02d05310
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CEventList g_CEventListInstance
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_0326eed8
//   undefined4 DAT_0326eedc
//   undefined4 DAT_0326eee0
//   undefined4 g_CDemonSetInstance.player_on_train
//   CVector3f g_SoundListenerPrev
//   undefined4 g_SoundListenerPrev.y
//   undefined4 g_SoundListenerPrev.z
//   CVector3f CVector3f_03f6af7c
//   undefined4 CVector3f_03f6af7c.y
//   undefined4 CVector3f_03f6af7c.z
//   CVector3f g_SoundListenerOrient
//   undefined4 g_SoundListenerOrient.y
//   undefined4 g_SoundListenerOrient.z
//   char[40] g_SoundAmbientSoundName
//   int g_SoundAmbientSfxHandle
//   int g_SoundAudioInitialized
//   float g_CurrentVolumeMultiplier
//   float g_TargetVolumeMultiplier
//   float g_VolumeFadeTimeRemaining
//   CVector3f g_TrainVelocityVector
//   undefined4 g_TrainVelocityVector.y
//   undefined4 g_TrainVelocityVector.z
//   int g_TrainLastCameraIndex
// Function calls:
//   core_event.cpp_CEventList_FUN_004b0f00
//   core_sound.cpp_CSound_playSound_FUN_005b3a20
//   core_sound.cpp_updateListeners_FUN_005b1870
//   sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
//   sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0
//   sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   sound_sndmain.cpp_isSoundBusy_FUN_005ab540
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_set3DListenerOrientRight_FUN_005ab6e0
//   sound_sndmain.cpp_set3DListenerVelocity_FUN_005aa1c0
//   sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0
//   sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_init_FUN_005b2dd0(CSound *this_ptr)

{
  int iVar1;
  float fVar2;
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  undefined4 uStack00000008;
  CSound *in_stack_00000028;
  
  CVector3f_03f6af7c.x = 0.0;
  CVector3f_03f6af7c.y = 0.0;
  CVector3f_03f6af7c.z = 0.0;
  g_SoundListenerPrev.x = 1e+10;
  g_SoundListenerPrev.y = 1e+10;
  g_SoundListenerPrev.z = 1e+10;
  sound_sndmain_cpp_set3DListenerVelocity_FUN_005aa1c0(0.0,0.0,0.0);
  core_sound_cpp_updateListeners_FUN_005b1870();
  CVector3f_03f6af7c.y = 0.0;
  sound_sndmain_cpp_set3DListenerOrientRight_FUN_005ab6e0
            (g_SoundListenerOrient.x,g_SoundListenerOrient.y,g_SoundListenerOrient.z);
  sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
  if (iVar1 == 0) {
    return;
  }
  g_CurrentVolumeMultiplier = 1.0;
  g_TargetVolumeMultiplier = 1.0;
  g_VolumeFadeTimeRemaining = 0.0;
  iVar1 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
  if (iVar1 == 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(3,0);
  }
  else {
    sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(3,1);
    fVar2 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(3,fVar2 * g_CurrentVolumeMultiplier);
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(3);
  core_sound_cpp_CSound_playSound_FUN_005b3a20
            (in_stack_00000028,g_CDemonSetPtr,g_SoundAmbientSoundName);
  uStack00000008 = 0x5b2ed7;
  g_SoundAmbientSfxHandle = extraout_EAX;
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  if (g_CDemonSetPtr->player_on_train != 0) {
    if ((float *)&stack0x00000000 != &g_TrainNoiseArray[8].position.z) {
      g_TrainVelocityVector.x = -*(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc0);
      g_TrainVelocityVector.y = -*(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc4);
      g_TrainVelocityVector.z = -*(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc8);
    }
    g_TrainLastCameraIndex = -1;
  }
  uStack00000008 = 0x5b2f45;
  core_event_cpp_CEventList_FUN_004b0f00(g_CEventListPtr);
  g_SoundAudioInitialized = 1;
  return;
}


// Assembly code:
// 005b2dd0: PUSH ESI
//   Label: core_sound.cpp_CSound_init_FUN_005b2dd0
// 005b2dd1: SUB ESP,0x10
// 005b2dd4: XOR EDX,EDX
// 005b2dd6: PUSH EDX
// 005b2dd7: PUSH EDX
// 005b2dd8: PUSH EDX
// 005b2dd9: MOV ESI,0x501502f9
// 005b2dde: PUSH EDX
// 005b2ddf: MOV dword ptr [0x03f6af7c],EDX
//   XREF to: 03f6af7c (WRITE)
// 005b2de5: MOV dword ptr [0x03f6af80],EDX
//   XREF to: 03f6af80 (WRITE)
// 005b2deb: PUSH EDX
// 005b2dec: MOV dword ptr [0x03f6af84],EDX
//   XREF to: 03f6af84 (WRITE)
// 005b2df2: MOV dword ptr [0x03f6af70],ESI
//   XREF to: 03f6af70 (WRITE)
// 005b2df8: PUSH EDX
// 005b2df9: MOV dword ptr [0x03f6af74],ESI
//   XREF to: 03f6af74 (WRITE)
// 005b2dff: MOV dword ptr [0x03f6af78],ESI
//   XREF to: 03f6af78 (WRITE)
// 005b2e05: CALL sound_sndmain.cpp_set3DListenerVelocity_FUN_005aa1c0
//   XREF to: 005aa1c0 (UNCONDITIONAL_CALL)
// 005b2e0a: ADD ESP,0x18
// 005b2e0d: CALL core_sound.cpp_updateListeners_FUN_005b1870
//   XREF to: 005b1870 (UNCONDITIONAL_CALL)
// 005b2e12: PUSH dword ptr [0x03f6af90]
//   XREF to: 03f6af90 (READ)
// 005b2e18: PUSH dword ptr [0x03f6af8c]
//   XREF to: 03f6af8c (READ)
// 005b2e1e: XOR EAX,EAX
// 005b2e20: PUSH dword ptr [0x03f6af88]
//   XREF to: 03f6af88 (READ)
// 005b2e26: MOV [0x03f6af80],EAX
//   XREF to: 03f6af80 (WRITE)
// 005b2e2b: CALL sound_sndmain.cpp_set3DListenerOrientRight_FUN_005ab6e0
//   XREF to: 005ab6e0 (UNCONDITIONAL_CALL)
// 005b2e30: ADD ESP,0xc
// 005b2e33: CALL sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0
//   XREF to: 005aaef0 (UNCONDITIONAL_CALL)
// 005b2e38: CALL sound_sndmain.cpp_isSoundBusy_FUN_005ab540
//   XREF to: 005ab540 (UNCONDITIONAL_CALL)
// 005b2e3d: TEST EAX,EAX
// 005b2e3f: JNZ 0x005b2e46
//   XREF to: 005b2e46 (CONDITIONAL_JUMP)
// 005b2e41: ADD ESP,0x10
// 005b2e44: POP ESI
// 005b2e45: RET
// 005b2e46: PUSH EDI
//   Label: LAB_005b2e46
// 005b2e47: PUSH EBX
// 005b2e48: MOV EDX,0x3f800000
// 005b2e4d: XOR EBX,EBX
// 005b2e4f: MOV dword ptr [0x03f6b7b0],EDX
//   XREF to: 03f6b7b0 (WRITE)
// 005b2e55: PUSH EBX
// 005b2e56: MOV dword ptr [0x03f6b7b4],EDX
//   XREF to: 03f6b7b4 (WRITE)
// 005b2e5c: MOV dword ptr [0x03f6b7b8],EBX
//   XREF to: 03f6b7b8 (WRITE)
// 005b2e62: CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)
// 005b2e67: ADD ESP,0x4
// 005b2e6a: TEST EAX,EAX
// 005b2e6c: JZ 0x005b2f5a
//   XREF to: 005b2f5a (CONDITIONAL_JUMP)
// 005b2e72: PUSH 0x1
// 005b2e74: PUSH 0x3
// 005b2e76: CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
//   XREF to: 005a9e20 (UNCONDITIONAL_CALL)
// 005b2e7b: ADD ESP,0x8
// 005b2e7e: PUSH EBX
// 005b2e7f: CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   XREF to: 005a9d90 (UNCONDITIONAL_CALL)
// 005b2e84: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 005b2e88: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x8] (READ)
// 005b2e8c: ADD ESP,0x4
// 005b2e8f: FMUL float ptr [0x03f6b7b0]
//   XREF to: 03f6b7b0 (READ)
// 005b2e95: SUB ESP,0x4
// 005b2e98: FSTP float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005b2e9b: PUSH 0x3
// 005b2e9d: CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
//   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)
// 005b2ea2: ADD ESP,0x8
//   Label: LAB_005b2ea2
// 005b2ea5: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 005b2eaa: PUSH 0x3
// 005b2eac: CALL sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0
//   XREF to: 005a8af0 (UNCONDITIONAL_CALL)
// 005b2eb1: ADD ESP,0x4
// 005b2eb4: PUSH 0x3f6b780
//   XREF to: 03f6b780 (DATA)
// 005b2eb9: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005b2ebf: PUSH ESI
//   XREF to: 03114278 (DATA)
// 005b2ec0: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005b2ec4: PUSH EDI
// 005b2ec5: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 005b2eca: ADD ESP,0xc
// 005b2ecd: MOV [0x03f6b7a8],EAX
//   XREF to: 03f6b7a8 (WRITE)
// 005b2ed2: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005b2ed7: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005b2edc: CMP dword ptr [EAX + 0x15aca8],0x0
//   XREF to: 0326ef20 (READ)
// 005b2ee3: JZ 0x005b2f39
//   XREF to: 005b2f39 (CONDITIONAL_JUMP)
// 005b2ee5: FLD float ptr [EAX + 0x15ac60]
//   XREF to: 0326eed8 (READ)
// 005b2eeb: FCHS
// 005b2eed: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (WRITE)
// 005b2ef1: FLD float ptr [EAX + 0x15ac64]
//   XREF to: 0326eedc (READ)
// 005b2ef7: FCHS
// 005b2ef9: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (WRITE)
// 005b2efd: FLD float ptr [EAX + 0x15ac68]
//   XREF to: 0326eee0 (READ)
// 005b2f03: FCHS
// 005b2f05: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x14] (DATA)
// 005b2f09: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0xc] (WRITE)
// 005b2f0d: CMP EAX,0x3f6b85c
//   XREF to: 03f6b85c (DATA)
// 005b2f12: JZ 0x005b2f2f
//   XREF to: 005b2f2f (CONDITIONAL_JUMP)
// 005b2f14: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (DATA)
// 005b2f18: MOV [0x03f6b85c],EAX
//   XREF to: 03f6b85c (WRITE)
// 005b2f1d: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (READ)
// 005b2f21: MOV [0x03f6b860],EAX
//   XREF to: 03f6b860 (WRITE)
// 005b2f26: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xc] (READ)
// 005b2f2a: MOV [0x03f6b864],EAX
//   XREF to: 03f6b864 (WRITE)
// 005b2f2f: MOV dword ptr [0x03f6b86c],0xffffffff
//   Label: LAB_005b2f2f
//   XREF to: 03f6b86c (WRITE)
// 005b2f39: MOV EDX,dword ptr [0x006793d0]
//   Label: LAB_005b2f39
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 005b2f3f: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 005b2f40: CALL core_event.cpp_CEventList_FUN_004b0f00
//   XREF to: 004b0f00 (UNCONDITIONAL_CALL)
// 005b2f45: MOV ECX,0x1
// 005b2f4a: ADD ESP,0x4
// 005b2f4d: MOV dword ptr [0x03f6b7ac],ECX
//   XREF to: 03f6b7ac (WRITE)
// 005b2f53: POP EBX
// 005b2f54: POP EDI
// 005b2f55: ADD ESP,0x10
// 005b2f58: POP ESI
// 005b2f59: RET
// 005b2f5a: PUSH EBX
//   Label: LAB_005b2f5a
// 005b2f5b: PUSH 0x3
// 005b2f5d: CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
//   XREF to: 005a9e20 (UNCONDITIONAL_CALL)
// 005b2f62: JMP 0x005b2ea2
//   XREF to: 005b2ea2 (UNCONDITIONAL_JUMP)
