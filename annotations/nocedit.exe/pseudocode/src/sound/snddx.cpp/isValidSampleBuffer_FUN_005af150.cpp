// Name: sound_snddx.cpp_isValidSampleBuffer_FUN_005af150
// Address: 005af150
// Address Range: [[005af150, 005af182]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_isValidSampleBuffer_FUN_005af150(int buffer_id)
// Globals:
//   IDirectSoundBuffer*[25] g_DirectSoundSampleBuffers
//   IDirectSoundBufferMetadata[25] g_DirectSoundBufferMetadata

#include "nocturne.h"

int __cdecl sound_snddx_cpp_isValidSampleBuffer_FUN_005af150(int buffer_id)

{
  if ((((0 < buffer_id) && (buffer_id < 0x19)) &&
      (g_DirectSoundSampleBuffers[buffer_id] != (IDirectSoundBuffer *)0x0)) &&
     (0 < g_DirectSoundBufferMetadata[buffer_id].field0_0x0)) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 005af150: MOV EDX,dword ptr [ESP + 0x4]
//   Label: sound_snddx.cpp_isValidSampleBuffer_FUN_005af150
//   XREF to: Stack[0x4] (READ)
// 005af154: TEST EDX,EDX
// 005af156: JLE 0x005af17a
//   XREF to: 005af17a (CONDITIONAL_JUMP)
// 005af158: CMP EDX,0x19
// 005af15b: JGE 0x005af17a
//   XREF to: 005af17a (CONDITIONAL_JUMP)
// 005af15d: CMP dword ptr [EDX*0x4 + 0x3f6a9e0],0x0
//   XREF to: 03f6a9e0 (DATA)
// 005af165: JZ 0x005af17a
//   XREF to: 005af17a (CONDITIONAL_JUMP)
// 005af167: LEA EAX,[EDX*0x4 + 0x0]
// 005af16e: ADD EAX,EDX
// 005af170: CMP dword ptr [EAX*0x4 + 0x3f6ab3c],0x1
//   XREF to: 03f6ab3c (DATA)
// 005af178: JGE 0x005af17d
//   XREF to: 005af17d (CONDITIONAL_JUMP)
// 005af17a: XOR EAX,EAX
//   Label: LAB_005af17a
// 005af17c: RET
// 005af17d: MOV EAX,0x1
//   Label: LAB_005af17d
// 005af182: RET
