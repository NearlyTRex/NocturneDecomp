// Name: sound_sndmain.cpp_allocBuffers_FUN_005ab5b0
// Address: 005ab5b0
// Address Range: [[005ab5b0, 005ab65c]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_allocBuffers_FUN_005ab5b0(void)
// Cross-references:
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00512d12 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_findAllSoundFiles_FUN_005b2d00 (005b2d00) at 005b2d37 [UNCONDITIONAL_CALL]
// Globals:
//   int g_CurrentSoundDevice = -0x1
//   undefined4 DAT_03f68990
//   undefined4 DAT_03f68994
//   CSound* g_CSoundPtr
//   undefined4 DAT_03f69270
// Function calls:
//   sound_snddx.cpp_CreatePrimaryBufferMaybe_FUN_005b0440
//   sound_sndmain.cpp_cleanup_FUN_005ab660
//   sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0
//   sound_sndwav.cpp_WaveOutGetDevCapsA2_FUN_005b1510

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_allocBuffers_FUN_005ab5b0(void)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_cleanup_FUN_005ab660();
  if (iVar1 == 0) {
    return 0;
  }
  sound_sndmain_cpp_selectSoundDevice_FUN_005ab4c0(g_CurrentSoundDevice);
  if (-1 < g_CurrentSoundDevice) {
    if (g_SoundDevices[g_CurrentSoundDevice].api_type == 0) {
      g_CSoundPtr = (CSound *)sound_sndwav_cpp_WaveOutGetDevCapsA2_FUN_005b1510();
    }
    if (g_SoundDevices[g_CurrentSoundDevice].api_type == 1) {
      g_CSoundPtr = (CSound *)sound_snddx_cpp_CreatePrimaryBufferMaybe_FUN_005b0440();
    }
    if (g_CSoundPtr == (CSound *)0x0) {
      return 0;
    }
    DAT_03f69270 = (*(code *)g_CSoundPtr->vtable->field_20)();
    return 1;
  }
  return 0;
}


// Assembly code:
// 005ab5b0: PUSH EBP
//   Label: sound_sndmain.cpp_allocBuffers_FUN_005ab5b0
// 005ab5b1: CALL sound_sndmain.cpp_cleanup_FUN_005ab660
//   XREF to: 005ab660 (UNCONDITIONAL_CALL)
// 005ab5b6: TEST EAX,EAX
// 005ab5b8: JNZ 0x005ab5bc
//   XREF to: 005ab5bc (CONDITIONAL_JUMP)
// 005ab5ba: POP EBP
// 005ab5bb: RET
// 005ab5bc: MOV EDX,dword ptr [0x00681b24]
//   Label: LAB_005ab5bc
//   XREF to: 00681b24 (READ)
// 005ab5c2: PUSH EDX
// 005ab5c3: CALL sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0
//   XREF to: 005ab4c0 (UNCONDITIONAL_CALL)
// 005ab5c8: MOV ECX,dword ptr [0x00681b24]
//   XREF to: 00681b24 (READ)
// 005ab5ce: ADD ESP,0x4
// 005ab5d1: TEST ECX,ECX
// 005ab5d3: JL 0x005ab644
//   XREF to: 005ab644 (CONDITIONAL_JUMP)
// 005ab5d5: LEA EAX,[ECX*0x8 + 0x0]
// 005ab5dc: ADD EAX,ECX
// 005ab5de: SHL EAX,0x2
// 005ab5e1: SUB EAX,ECX
// 005ab5e3: SHL EAX,0x3
// 005ab5e6: CMP dword ptr [EAX + 0x3f68aa8],0x0
//   XREF to: 03f68990 (READ)
// 005ab5ed: JNZ 0x005ab605
//   XREF to: 005ab605 (CONDITIONAL_JUMP)
// 005ab5ef: PUSH ESI
// 005ab5f0: MOV ESI,dword ptr [EAX + 0x3f68aac]
//   XREF to: 03f68994 (READ)
// 005ab5f6: PUSH ESI
// 005ab5f7: CALL sound_sndwav.cpp_WaveOutGetDevCapsA2_FUN_005b1510
//   XREF to: 005b1510 (UNCONDITIONAL_CALL)
// 005ab5fc: ADD ESP,0x4
// 005ab5ff: MOV [0x03f69268],EAX
//   XREF to: 03f69268 (WRITE)
// 005ab604: POP ESI
// 005ab605: MOV EDX,dword ptr [0x00681b24]
//   Label: LAB_005ab605
//   XREF to: 00681b24 (READ)
// 005ab60b: LEA EAX,[EDX*0x8 + 0x0]
// 005ab612: ADD EAX,EDX
// 005ab614: SHL EAX,0x2
// 005ab617: SUB EAX,EDX
// 005ab619: SHL EAX,0x3
// 005ab61c: CMP dword ptr [EAX + 0x3f68aa8],0x1
//   XREF to: 03f68990 (READ)
// 005ab623: JNZ 0x005ab639
//   XREF to: 005ab639 (CONDITIONAL_JUMP)
// 005ab625: MOV EBP,dword ptr [EAX + 0x3f68aac]
//   XREF to: 03f68994 (READ)
// 005ab62b: PUSH EBP
// 005ab62c: CALL sound_snddx.cpp_CreatePrimaryBufferMaybe_FUN_005b0440
//   XREF to: 005b0440 (UNCONDITIONAL_CALL)
// 005ab631: ADD ESP,0x4
// 005ab634: MOV [0x03f69268],EAX
//   XREF to: 03f69268 (WRITE)
// 005ab639: MOV EAX,[0x03f69268]
//   Label: LAB_005ab639
//   XREF to: 03f69268 (READ)
// 005ab63e: TEST EAX,EAX
// 005ab640: JNZ 0x005ab648
//   XREF to: 005ab648 (CONDITIONAL_JUMP)
// 005ab642: POP EBP
// 005ab643: RET
// 005ab644: XOR EAX,EAX
//   Label: LAB_005ab644
// 005ab646: POP EBP
// 005ab647: RET
// 005ab648: PUSH EAX
//   Label: LAB_005ab648
// 005ab649: MOV EDX,dword ptr [EAX]
// 005ab64b: CALL dword ptr [EDX + 0x14]
// 005ab64e: ADD ESP,0x4
// 005ab651: MOV [0x03f69270],EAX
//   XREF to: 03f69270 (WRITE)
// 005ab656: MOV EAX,0x1
// 005ab65b: POP EBP
// 005ab65c: RET
