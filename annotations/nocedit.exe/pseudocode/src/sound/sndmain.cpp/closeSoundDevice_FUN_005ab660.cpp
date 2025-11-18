// Name: sound_sndmain.cpp_closeSoundDevice_FUN_005ab660
// Address: 005ab660
// Address Range: [[005ab660, 005ab6bc]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_closeSoundDevice_FUN_005ab660(void)
// Cross-references:
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00512ca5 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_initializeSoundDevice_FUN_005ab5b0 (005ab5b0) at 005ab5b1 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_readIni_FUN_005abf20 (005abf20) at 005abf61 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_shutdownSoundSystem_FUN_005aaeb0 (005aaeb0) at 005aaec9 [UNCONDITIONAL_CALL]
// Globals:
//   CSfxSample[64] g_SfxSamples
//   undefined4 DAT_03f629ac
//   CSfxSample* g_SfxSamplesEnd
//   CSoundDevice* g_CSoundDevicePtr
//   int g_HasHardware3DSound
// Function calls:
//   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
//   sound_sndmain.cpp_resetSoundDevice_FUN_005ab130

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_closeSoundDevice_FUN_005ab660(void)

{
  int iVar1;
  CSfxSample *this_ptr;
  
  iVar1 = sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
  if (iVar1 != 0) {
    this_ptr = g_SfxSamples;
    do {
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(this_ptr);
      this_ptr = this_ptr + 1;
    } while (this_ptr != (CSfxSample *)&g_SfxSamplesEnd);
    if (g_CSoundDevicePtr == (CSoundDevice *)0x0) {
      iVar1 = 1;
    }
    else {
      iVar1 = (*g_CSoundDevicePtr->vtable->close)(g_CSoundDevicePtr);
      if (iVar1 != 0) {
        g_HasHardware3DSound = 0;
        g_CSoundDevicePtr = (CSoundDevice *)0x0;
        return 1;
      }
    }
  }
  return iVar1;
}


// Assembly code:
// 005ab660: PUSH EBX
//   Label: sound_sndmain.cpp_closeSoundDevice_FUN_005ab660
// 005ab661: PUSH ESI
// 005ab662: CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130
//   XREF to: 005ab130 (UNCONDITIONAL_CALL)
// 005ab667: TEST EAX,EAX
// 005ab669: JZ 0x005ab698
//   XREF to: 005ab698 (CONDITIONAL_JUMP)
// 005ab66b: MOV EBX,0x3f6282c
//   XREF to: 03f6282c (DATA)
// 005ab670: LEA ESI,[EBX + 0x6000]
//   XREF to: 03f6882c (DATA)
// 005ab676: PUSH EBX
//   Label: LAB_005ab676
//   XREF to: 03f6282c (DATA)
//   XREF to: 03f629ac (DATA)
// 005ab677: CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
//   XREF to: 005a62c0 (UNCONDITIONAL_CALL)
// 005ab67c: ADD EBX,0x180
// 005ab682: ADD ESP,0x4
// 005ab685: CMP EBX,ESI
// 005ab687: JNZ 0x005ab676
//   XREF to: 005ab676 (CONDITIONAL_JUMP)
// 005ab689: MOV EDX,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005ab68f: TEST EDX,EDX
// 005ab691: JNZ 0x005ab69b
//   XREF to: 005ab69b (CONDITIONAL_JUMP)
// 005ab693: MOV EAX,0x1
// 005ab698: POP ESI
//   Label: LAB_005ab698
// 005ab699: POP EBX
// 005ab69a: RET
// 005ab69b: PUSH EDX
//   Label: LAB_005ab69b
// 005ab69c: MOV EBX,dword ptr [EDX]
// 005ab69e: CALL dword ptr [EBX]
// 005ab6a0: ADD ESP,0x4
// 005ab6a3: TEST EAX,EAX
// 005ab6a5: JZ 0x005ab698
//   XREF to: 005ab698 (CONDITIONAL_JUMP)
// 005ab6a7: XOR ECX,ECX
// 005ab6a9: MOV EAX,0x1
// 005ab6ae: MOV dword ptr [0x03f69270],ECX
//   XREF to: 03f69270 (WRITE)
// 005ab6b4: MOV dword ptr [0x03f69268],ECX
//   XREF to: 03f69268 (WRITE)
// 005ab6ba: POP ESI
// 005ab6bb: POP EBX
// 005ab6bc: RET
