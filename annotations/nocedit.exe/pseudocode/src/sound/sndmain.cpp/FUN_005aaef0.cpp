// Name: sound_sndmain.cpp_FUN_005aaef0
// Address: 005aaef0
// Address Range: [[005aaef0, 005ab124]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005aaef0()
// Cross-references:
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e40f9 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053eb40 (0053eb40) at 0053eb61 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580f86 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589b10 (00589b10) at 00589b1b [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589c20 (00589c20) at 00589e8c [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058d1f4 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b2dd0 (005b2dd0) at 005b2e33 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b3830 (005b3830) at 005b3933 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 (005ad5c0) at 005ad6d1 [UNCONDITIONAL_CALL]
// Globals:
//   int g_AudioBitsPerSample = 0x10
//   int g_AudioChannelCount = 0x2
//   int g_AudioSampleRate = 0x5622
//   double DOUBLE_00681b30 = 1
//   undefined4 DOUBLE_00681b30+4
//   CVector3d g_Cached3DListenerPos
//   undefined4 g_Cached3DListenerPos.x+4
//   undefined4 g_Cached3DListenerPos.y
//   undefined4 g_Cached3DListenerPos.y+4
//   undefined4 g_Cached3DListenerPos.z
//   undefined4 g_Cached3DListenerPos.z+4
//   CVector3d g_Cached3DListenerVelocity
//   undefined4 g_Cached3DListenerVelocity.x+4
//   undefined4 g_Cached3DListenerVelocity.y
//   undefined4 g_Cached3DListenerVelocity.y+4
//   undefined4 g_Cached3DListenerVelocity.z
//   undefined4 g_Cached3DListenerVelocity.z+4
//   CVector3d g_Cached3DListenerOrientFront
//   undefined4 g_Cached3DListenerOrientFront.x+4
//   undefined4 g_Cached3DListenerOrientFront.y
//   undefined4 g_Cached3DListenerOrientFront.y+4
//   undefined4 g_Cached3DListenerOrientFront.z
//   undefined4 g_Cached3DListenerOrientFront.z+4
//   CVector3d g_Cached3DListenerOrientUp
//   undefined4 g_Cached3DListenerOrientUp.x+4
//   undefined4 g_Cached3DListenerOrientUp.y
//   undefined4 g_Cached3DListenerOrientUp.y+4
//   undefined4 g_Cached3DListenerOrientUp.z
//   undefined4 g_Cached3DListenerOrientUp.z+4
//   CVector3d g_Cached3DListenerOrientRight
//   undefined4 g_Cached3DListenerOrientRight.x+4
//   undefined4 g_Cached3DListenerOrientRight.y
//   undefined4 g_Cached3DListenerOrientRight.y+4
//   undefined4 g_Cached3DListenerOrientRight.z
//   undefined4 g_Cached3DListenerOrientRight.z+4
//   CSoundDevice* g_CSoundDevicePtr
//   int g_SoundBusyFlag
//   int g_MixBufferReadIndex
//   int g_MixBufferWriteIndex
//   int g_MixBufferSize
//   int g_NumMixBuffers
//   void*[8] g_ChannelPrimaryBuffers
//   undefined4 g_ChannelPrimaryBuffers[1]
//   undefined4 DAT_03f693e8
//   undefined4 DAT_03f693ec
//   undefined4 DAT_03f693f0
//   undefined4 DAT_03f69410
// Function calls:
//   crt_memory.c_memset_FUN_005fde40
//   sound_sndmain.cpp_FUN_005ab130
//   sound_sndmain.cpp_getSoundEnabled_FUN_005a96b0
//   sound_sndmain.cpp_isSoundBusy_FUN_005ab540
//   sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530
//   sound_sndmain.cpp_lockSound_FUN_005abd30
//   sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

int sound_sndmain_cpp_FUN_005aaef0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = sound_sndmain_cpp_isSoundSystemActive_FUN_005ab530();
  if (uVar2 == 0) {
    return 0;
  }
  iVar3 = sound_sndmain_cpp_getSoundEnabled_FUN_005a96b0();
  if (iVar3 != 0) {
    iVar3 = sound_sndmain_cpp_FUN_005ab130();
    return iVar3;
  }
  iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
  if (iVar3 != 0) {
    return 1;
  }
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  iVar3 = sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170
                    (g_AudioBitsPerSample,g_AudioChannelCount,g_AudioSampleRate);
  if (iVar3 != 0) {
    if ((0 < g_NumMixBuffers) && (iVar3 = 0, 0 < g_AudioChannelCount)) {
      iVar4 = 0;
      do {
        puVar1 = (undefined4 *)((int)g_ChannelPrimaryBuffers + iVar4);
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 1;
        crt_memory_c_memset_FUN_005fde40((void *)*puVar1,0,g_MixBufferSize * g_NumMixBuffers * 4);
      } while (iVar3 < g_AudioChannelCount);
    }
    g_MixBufferReadIndex = 0;
    g_MixBufferWriteIndex = 0;
    (*g_CSoundDevicePtr->vtable->set3DListenerPos)
              (g_CSoundDevicePtr,
               (double)CONCAT44(g_Cached3DListenerPos.x._4_4_,g_Cached3DListenerPos.x._0_4_),
               (double)CONCAT44(g_Cached3DListenerPos.y._4_4_,g_Cached3DListenerPos.y._0_4_),
               (double)CONCAT44(g_Cached3DListenerPos.z._4_4_,g_Cached3DListenerPos.z._0_4_));
    (*g_CSoundDevicePtr->vtable->set3DListenerOrient)
              (g_CSoundDevicePtr,
               (double)CONCAT44(g_Cached3DListenerOrientFront.x._4_4_,
                                g_Cached3DListenerOrientFront.x._0_4_),
               (double)CONCAT44(g_Cached3DListenerOrientFront.y._4_4_,
                                g_Cached3DListenerOrientFront.y._0_4_),
               (double)CONCAT44(g_Cached3DListenerOrientFront.z._4_4_,
                                g_Cached3DListenerOrientFront.z._0_4_),
               (double)CONCAT44(g_Cached3DListenerOrientUp.x._4_4_,
                                g_Cached3DListenerOrientUp.x._0_4_),
               (double)CONCAT44(g_Cached3DListenerOrientUp.y._4_4_,
                                g_Cached3DListenerOrientUp.y._0_4_),
               (double)CONCAT44(g_Cached3DListenerOrientUp.z._4_4_,
                                g_Cached3DListenerOrientUp.z._0_4_));
    (*g_CSoundDevicePtr->vtable->set3DListenerVelocity)
              (g_CSoundDevicePtr,
               (double)CONCAT44(g_Cached3DListenerVelocity.x._4_4_,
                                g_Cached3DListenerVelocity.x._0_4_),
               (double)CONCAT44(g_Cached3DListenerVelocity.y._4_4_,
                                g_Cached3DListenerVelocity.y._0_4_),
               (double)CONCAT44(g_Cached3DListenerVelocity.z._4_4_,
                                g_Cached3DListenerVelocity.z._0_4_));
    (*g_CSoundDevicePtr->vtable->set3DListenerDistanceFactor)
              (g_CSoundDevicePtr,(double)CONCAT44(DOUBLE_00681b30._4_4_,DOUBLE_00681b30._0_4_));
    (*g_CSoundDevicePtr->vtable->commitDeferredSettings)(g_CSoundDevicePtr);
    DAT_03f69410 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    iVar3 = (*g_CSoundDevicePtr->vtable->start)(g_CSoundDevicePtr);
    if (iVar3 != 0) {
      g_SoundBusyFlag = 1;
      sound_sndmain_cpp_unlockSound_FUN_005abdc0();
      return 1;
    }
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 0;
}


// Assembly code:
// 005aaef0: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005aaef0
// 005aaef1: PUSH ESI
// 005aaef2: PUSH EDI
// 005aaef3: PUSH EBP
// 005aaef4: CALL sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530
//   XREF to: 005ab530 (UNCONDITIONAL_CALL)
// 005aaef9: TEST EAX,EAX
// 005aaefb: JNZ 0x005aaf02
//   XREF to: 005aaf02 (CONDITIONAL_JUMP)
// 005aaefd: POP EBP
// 005aaefe: POP EDI
// 005aaeff: POP ESI
// 005aaf00: POP EBX
// 005aaf01: RET
// 005aaf02: CALL sound_sndmain.cpp_getSoundEnabled_FUN_005a96b0
//   Label: LAB_005aaf02
//   XREF to: 005a96b0 (UNCONDITIONAL_CALL)
// 005aaf07: TEST EAX,EAX
// 005aaf09: JNZ 0x005aaf1e
//   XREF to: 005aaf1e (CONDITIONAL_JUMP)
// 005aaf0b: CALL sound_sndmain.cpp_isSoundBusy_FUN_005ab540
//   XREF to: 005ab540 (UNCONDITIONAL_CALL)
// 005aaf10: TEST EAX,EAX
// 005aaf12: JZ 0x005aaf28
//   XREF to: 005aaf28 (CONDITIONAL_JUMP)
// 005aaf14: MOV EAX,0x1
// 005aaf19: POP EBP
// 005aaf1a: POP EDI
// 005aaf1b: POP ESI
// 005aaf1c: POP EBX
// 005aaf1d: RET
// 005aaf1e: CALL sound_sndmain.cpp_FUN_005ab130
//   Label: LAB_005aaf1e
//   XREF to: 005ab130 (UNCONDITIONAL_CALL)
// 005aaf23: POP EBP
// 005aaf24: POP EDI
// 005aaf25: POP ESI
// 005aaf26: POP EBX
// 005aaf27: RET
// 005aaf28: CALL sound_sndmain.cpp_lockSound_FUN_005abd30
//   Label: LAB_005aaf28
//   XREF to: 005abd30 (UNCONDITIONAL_CALL)
// 005aaf2d: MOV EDX,dword ptr [0x00681b1c]
//   XREF to: 00681b1c (READ)
// 005aaf33: PUSH EDX
// 005aaf34: MOV ECX,dword ptr [0x00681b18]
//   XREF to: 00681b18 (READ)
// 005aaf3a: PUSH ECX
// 005aaf3b: MOV EBX,dword ptr [0x00681b14]
//   XREF to: 00681b14 (READ)
// 005aaf41: PUSH EBX
// 005aaf42: CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170
//   XREF to: 005ab170 (UNCONDITIONAL_CALL)
// 005aaf47: ADD ESP,0xc
// 005aaf4a: TEST EAX,EAX
// 005aaf4c: JZ 0x005ab119
//   XREF to: 005ab119 (CONDITIONAL_JUMP)
// 005aaf52: CMP dword ptr [0x03f69284],0x0
//   XREF to: 03f69284 (READ)
// 005aaf59: JLE 0x005aafa0
//   XREF to: 005aafa0 (CONDITIONAL_JUMP)
// 005aaf5b: MOV EDI,dword ptr [0x00681b18]
//   XREF to: 00681b18 (READ)
// 005aaf61: XOR EBX,EBX
// 005aaf63: TEST EDI,EDI
// 005aaf65: JLE 0x005aafa0
//   XREF to: 005aafa0 (CONDITIONAL_JUMP)
// 005aaf67: XOR ESI,ESI
// 005aaf69: MOV EAX,[0x03f69280]
//   Label: LAB_005aaf69
//   XREF to: 03f69280 (READ)
// 005aaf6e: IMUL EAX,dword ptr [0x03f69284]
//   XREF to: 03f69284 (READ)
// 005aaf75: SHL EAX,0x2
// 005aaf78: PUSH EAX
// 005aaf79: PUSH 0x0
// 005aaf7b: MOV EAX,dword ptr [ESI + 0x3f692b0]
//   XREF to: 03f692b0 (READ)
//   XREF to: 03f692b4 (READ)
// 005aaf81: PUSH EAX
// 005aaf82: ADD ESI,0x4
// 005aaf85: INC EBX
// 005aaf86: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005aaf8b: MOV EDX,dword ptr [0x00681b18]
//   XREF to: 00681b18 (READ)
// 005aaf91: ADD ESP,0xc
// 005aaf94: CMP EBX,EDX
// 005aaf96: JL 0x005aaf69
//   XREF to: 005aaf69 (CONDITIONAL_JUMP)
// 005aaf98: LEA EAX,[EAX]
// 005aaf9e: MOV EDX,EDX
// 005aafa0: MOV ESI,dword ptr [0x03f68844]
//   Label: LAB_005aafa0
//   XREF to: 03f68844 (READ)
// 005aafa6: PUSH ESI
// 005aafa7: MOV EDI,dword ptr [0x03f68840]
//   XREF to: 03f68840 (READ)
// 005aafad: PUSH EDI
// 005aafae: MOV EBP,dword ptr [0x03f6883c]
//   XREF to: 03f6883c (READ)
// 005aafb4: XOR ECX,ECX
// 005aafb6: PUSH EBP
// 005aafb7: MOV EDX,dword ptr [0x03f68838]
//   XREF to: 03f68838 (READ)
// 005aafbd: MOV dword ptr [0x03f69278],ECX
//   XREF to: 03f69278 (WRITE)
// 005aafc3: PUSH EDX
// 005aafc4: MOV dword ptr [0x03f6927c],ECX
//   XREF to: 03f6927c (WRITE)
// 005aafca: MOV ECX,dword ptr [0x03f68834]
//   XREF to: 03f68834 (READ)
// 005aafd0: PUSH ECX
// 005aafd1: MOV ESI,dword ptr [0x03f68830]
//   XREF to: 03f68830 (READ)
// 005aafd7: MOV EAX,[0x03f69268]
//   XREF to: 03f69268 (READ)
// 005aafdc: PUSH ESI
// 005aafdd: MOV EBX,dword ptr [EAX]
// 005aafdf: PUSH EAX
// 005aafe0: CALL dword ptr [EBX + 0x18]
// 005aafe3: ADD ESP,0x1c
// 005aafe6: MOV EDI,dword ptr [0x03f688a4]
//   XREF to: 03f688a4 (READ)
// 005aafec: PUSH EDI
// 005aafed: MOV EBP,dword ptr [0x03f688a0]
//   XREF to: 03f688a0 (READ)
// 005aaff3: PUSH EBP
// 005aaff4: MOV EDX,dword ptr [0x03f6889c]
//   XREF to: 03f6889c (READ)
// 005aaffa: PUSH EDX
// 005aaffb: MOV ECX,dword ptr [0x03f68898]
//   XREF to: 03f68898 (READ)
// 005ab001: PUSH ECX
// 005ab002: MOV ESI,dword ptr [0x03f68894]
//   XREF to: 03f68894 (READ)
// 005ab008: PUSH ESI
// 005ab009: MOV EDI,dword ptr [0x03f68890]
//   XREF to: 03f68890 (READ)
// 005ab00f: PUSH EDI
// 005ab010: MOV EBP,dword ptr [0x03f6888c]
//   XREF to: 03f6888c (READ)
// 005ab016: PUSH EBP
// 005ab017: MOV EDX,dword ptr [0x03f68888]
//   XREF to: 03f68888 (READ)
// 005ab01d: PUSH EDX
// 005ab01e: MOV ECX,dword ptr [0x03f68884]
//   XREF to: 03f68884 (READ)
// 005ab024: PUSH ECX
// 005ab025: MOV ESI,dword ptr [0x03f68880]
//   XREF to: 03f68880 (READ)
// 005ab02b: PUSH ESI
// 005ab02c: MOV EDI,dword ptr [0x03f6887c]
//   XREF to: 03f6887c (READ)
// 005ab032: PUSH EDI
// 005ab033: MOV EBP,dword ptr [0x03f68878]
//   XREF to: 03f68878 (READ)
// 005ab039: PUSH EBP
// 005ab03a: MOV EDX,dword ptr [0x03f68874]
//   XREF to: 03f68874 (READ)
// 005ab040: PUSH EDX
// 005ab041: MOV ECX,dword ptr [0x03f68870]
//   XREF to: 03f68870 (READ)
// 005ab047: PUSH ECX
// 005ab048: MOV ESI,dword ptr [0x03f6886c]
//   XREF to: 03f6886c (READ)
// 005ab04e: PUSH ESI
// 005ab04f: MOV EDI,dword ptr [0x03f68868]
//   XREF to: 03f68868 (READ)
// 005ab055: PUSH EDI
// 005ab056: MOV EBP,dword ptr [0x03f68864]
//   XREF to: 03f68864 (READ)
// 005ab05c: PUSH EBP
// 005ab05d: MOV EDX,dword ptr [0x03f68860]
//   XREF to: 03f68860 (READ)
// 005ab063: MOV EAX,[0x03f69268]
//   XREF to: 03f69268 (READ)
// 005ab068: PUSH EDX
// 005ab069: MOV EBX,dword ptr [EAX]
// 005ab06b: PUSH EAX
// 005ab06c: CALL dword ptr [EBX + 0x1c]
// 005ab06f: ADD ESP,0x4c
// 005ab072: MOV ECX,dword ptr [0x03f6885c]
//   XREF to: 03f6885c (READ)
// 005ab078: PUSH ECX
// 005ab079: MOV ESI,dword ptr [0x03f68858]
//   XREF to: 03f68858 (READ)
// 005ab07f: PUSH ESI
// 005ab080: MOV EDI,dword ptr [0x03f68854]
//   XREF to: 03f68854 (READ)
// 005ab086: PUSH EDI
// 005ab087: MOV EBP,dword ptr [0x03f68850]
//   XREF to: 03f68850 (READ)
// 005ab08d: PUSH EBP
// 005ab08e: MOV EDX,dword ptr [0x03f6884c]
//   XREF to: 03f6884c (READ)
// 005ab094: PUSH EDX
// 005ab095: MOV ECX,dword ptr [0x03f68848]
//   XREF to: 03f68848 (READ)
// 005ab09b: MOV EAX,[0x03f69268]
//   XREF to: 03f69268 (READ)
// 005ab0a0: PUSH ECX
// 005ab0a1: MOV EBX,dword ptr [EAX]
// 005ab0a3: PUSH EAX
// 005ab0a4: CALL dword ptr [EBX + 0x20]
// 005ab0a7: ADD ESP,0x1c
// 005ab0aa: MOV ESI,dword ptr [0x00681b34]
//   XREF to: 00681b34 (READ)
// 005ab0b0: PUSH ESI
// 005ab0b1: MOV EDI,dword ptr [0x00681b30]
//   XREF to: 00681b30 (READ)
// 005ab0b7: MOV EAX,[0x03f69268]
//   XREF to: 03f69268 (READ)
// 005ab0bc: PUSH EDI
// 005ab0bd: MOV EBX,dword ptr [EAX]
// 005ab0bf: PUSH EAX
// 005ab0c0: CALL dword ptr [EBX + 0x24]
// 005ab0c3: ADD ESP,0xc
// 005ab0c6: PUSH dword ptr [0x03f693f0]
//   XREF to: 03f693f0 (READ)
// 005ab0cc: MOV EAX,[0x03f69268]
//   XREF to: 03f69268 (READ)
// 005ab0d1: PUSH dword ptr [0x03f693ec]
//   XREF to: 03f693ec (READ)
// 005ab0d7: MOV EBX,dword ptr [EAX]
// 005ab0d9: PUSH dword ptr [0x03f693e8]
//   XREF to: 03f693e8 (READ)
// 005ab0df: PUSH EAX
// 005ab0e0: CALL dword ptr [EBX + 0x28]
// 005ab0e3: ADD ESP,0x10
// 005ab0e6: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 005ab0eb: MOV [0x03f69410],EAX
//   XREF to: 03f69410 (WRITE)
// 005ab0f0: MOV EAX,[0x03f69268]
//   XREF to: 03f69268 (READ)
// 005ab0f5: PUSH EAX
// 005ab0f6: MOV EBX,dword ptr [EAX]
// 005ab0f8: CALL dword ptr [EBX + 0x4]
// 005ab0fb: ADD ESP,0x4
// 005ab0fe: TEST EAX,EAX
// 005ab100: JZ 0x005ab119
//   XREF to: 005ab119 (CONDITIONAL_JUMP)
// 005ab102: MOV EBP,0x1
// 005ab107: MOV dword ptr [0x03f6926c],EBP
//   XREF to: 03f6926c (WRITE)
// 005ab10d: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005ab112: MOV EAX,EBP
// 005ab114: POP EBP
// 005ab115: POP EDI
// 005ab116: POP ESI
// 005ab117: POP EBX
// 005ab118: RET
// 005ab119: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   Label: LAB_005ab119
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005ab11e: XOR EAX,EAX
// 005ab120: POP EBP
// 005ab121: POP EDI
// 005ab122: POP ESI
// 005ab123: POP EBX
// 005ab124: RET
