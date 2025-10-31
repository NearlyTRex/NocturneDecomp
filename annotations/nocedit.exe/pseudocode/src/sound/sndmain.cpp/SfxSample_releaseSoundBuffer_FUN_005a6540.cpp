// Name: sound_sndmain.cpp_SfxSample_releaseSoundBuffer_FUN_005a6540
// Address: 005a6540
// Address Range: [[005a6540, 005a6597]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_SfxSample_releaseSoundBuffer_FUN_005a6540(SfxSample * sample)
// Cross-references:
//   sound_sndmain.cpp_ReadingOrDecodingSoundFile_FUN_005a4c80 (005a4c80) at 005a4fae [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSample_freeMemory_FUN_005a62c0 (005a62c0) at 005a62d5 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_pollStream_FUN_005a6730 (005a6730) at 005a6c97 [UNCONDITIONAL_CALL]
// Globals:
//   CSound* g_CSoundInstance

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_SfxSample_releaseSoundBuffer_FUN_005a6540(SfxSample *sample)

{
  if (sample->sound_buffer != (void *)0x0) {
    if ((sample->buffer_id != (void *)0x0) && (g_CSoundInstance != (CSound *)0x0)) {
      (*g_CSoundInstance->vtable->releaseBuffer)
                (g_CSoundInstance,sample->buffer_id,sample->field_376,sample->sound_buffer);
    }
    sample->sound_buffer = (void *)0x0;
    sample->field_376 = (void *)0x0;
  }
  return;
}


// Assembly code:
// 005a6540: PUSH EBX
//   Label: sound_sndmain.cpp_SfxSample_releaseSoundBuffer_FUN_005a6540
// 005a6541: PUSH EBP
// 005a6542: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a6546: CMP dword ptr [EBX + 0x17c],0x0
// 005a654d: JZ 0x005a6579
//   XREF to: 005a6579 (CONDITIONAL_JUMP)
// 005a654f: PUSH ESI
// 005a6550: MOV ECX,dword ptr [EBX + 0x158]
// 005a6556: TEST ECX,ECX
// 005a6558: JZ 0x005a6564
//   XREF to: 005a6564 (CONDITIONAL_JUMP)
// 005a655a: MOV ESI,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a6560: TEST ESI,ESI
// 005a6562: JNZ 0x005a657c
//   XREF to: 005a657c (CONDITIONAL_JUMP)
// 005a6564: MOV dword ptr [EBX + 0x17c],0x0
//   Label: LAB_005a6564
// 005a656e: MOV dword ptr [EBX + 0x178],0x0
// 005a6578: POP ESI
// 005a6579: POP EBP
//   Label: LAB_005a6579
// 005a657a: POP EBX
// 005a657b: RET
// 005a657c: PUSH EDI
//   Label: LAB_005a657c
// 005a657d: MOV EDI,dword ptr [EBX + 0x17c]
// 005a6583: PUSH EDI
// 005a6584: MOV EBP,dword ptr [EBX + 0x178]
// 005a658a: PUSH EBP
// 005a658b: PUSH ECX
// 005a658c: MOV EDX,dword ptr [ESI]
// 005a658e: PUSH ESI
// 005a658f: CALL dword ptr [EDX + 0x38]
// 005a6592: ADD ESP,0x10
// 005a6595: POP EDI
// 005a6596: JMP 0x005a6564
//   XREF to: 005a6564 (UNCONDITIONAL_JUMP)
