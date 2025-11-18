// Name: sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005a63b0
// Address: 005a63b0
// Address Range: [[005a63b0, 005a63f1]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005a63b0(CSfxSample * this_ptr)
// Cross-references:
//   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170 (005a6170) at 005a617c [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0 (005a62c0) at 005a62f1 [UNCONDITIONAL_CALL]
// Globals:
//   CSoundDevice* g_CSoundDevicePtr

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_005a63b0(CSfxSample *this_ptr)

{
  if (this_ptr->buffer_id != 0) {
    if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
      (*g_CSoundDevicePtr->vtable->freeSample)(g_CSoundDevicePtr,this_ptr->buffer_id);
      this_ptr->buffer_id = 0;
      return;
    }
    this_ptr->buffer_id = 0;
  }
  return;
}


// Assembly code:
// 005a63b0: PUSH EBX
//   Label: sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005a63b0
// 005a63b1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a63b5: CMP dword ptr [EBX + 0x158],0x0
// 005a63bc: JZ 0x005a63d2
//   XREF to: 005a63d2 (CONDITIONAL_JUMP)
// 005a63be: MOV ECX,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a63c4: TEST ECX,ECX
// 005a63c6: JNZ 0x005a63d4
//   XREF to: 005a63d4 (CONDITIONAL_JUMP)
// 005a63c8: MOV dword ptr [EBX + 0x158],0x0
// 005a63d2: POP EBX
//   Label: LAB_005a63d2
// 005a63d3: RET
// 005a63d4: PUSH ESI
//   Label: LAB_005a63d4
// 005a63d5: MOV ESI,dword ptr [EBX + 0x158]
// 005a63db: PUSH ESI
// 005a63dc: MOV EDX,dword ptr [ECX]
// 005a63de: PUSH ECX
// 005a63df: CALL dword ptr [EDX + 0x30]
// 005a63e2: ADD ESP,0x8
// 005a63e5: POP ESI
// 005a63e6: MOV dword ptr [EBX + 0x158],0x0
// 005a63f0: POP EBX
// 005a63f1: RET
