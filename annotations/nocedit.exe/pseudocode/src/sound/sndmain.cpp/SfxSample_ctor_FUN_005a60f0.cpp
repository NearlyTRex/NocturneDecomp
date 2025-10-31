// Name: sound_sndmain.cpp_SfxSample_ctor_FUN_005a60f0
// Address: 005a60f0
// Address Range: [[005a60f0, 005a614d]]
// Convention: __cdecl
// Signature: SfxSample * sound_sndmain.cpp_SfxSample_ctor_FUN_005a60f0(SfxSample * this_ptr)
// Function calls:
//   sound_sndmain.cpp_FUN_005a8480

#include "nocturne.h"

SfxSample * __cdecl sound_sndmain_cpp_SfxSample_ctor_FUN_005a60f0(SfxSample *this_ptr)

{
  SfxSample *pSVar1;
  
  pSVar1 = (SfxSample *)sound_sndmain_cpp_FUN_005a8480();
  pSVar1->sample_data = (void *)0x0;
  pSVar1->ref_count = 0;
  pSVar1->buffer_id = (void *)0x0;
  pSVar1->field_150 = 0;
  pSVar1->streaming_slot_index = -1;
  pSVar1->file_handle = (FILE *)0x0;
  pSVar1->mp3_data = (void *)0x0;
  pSVar1->sound_buffer = (void *)0x0;
  return pSVar1;
}


// Assembly code:
// 005a60f0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: sound_sndmain.cpp_SfxSample_ctor_FUN_005a60f0
//   XREF to: Stack[0x4] (READ)
// 005a60f4: PUSH EDX
// 005a60f5: CALL sound_sndmain.cpp_FUN_005a8480
//   XREF to: 005a8480 (UNCONDITIONAL_CALL)
// 005a60fa: MOV dword ptr [EAX + 0x120],0x0
// 005a6104: MOV dword ptr [EAX + 0x154],0x0
// 005a610e: MOV dword ptr [EAX + 0x158],0x0
// 005a6118: MOV dword ptr [EAX + 0x150],0x0
// 005a6122: MOV dword ptr [EAX + 0x15c],0xffffffff
// 005a612c: MOV dword ptr [EAX + 0x174],0x0
// 005a6136: MOV dword ptr [EAX + 0x16c],0x0
// 005a6140: ADD ESP,0x4
// 005a6143: MOV dword ptr [EAX + 0x17c],0x0
// 005a614d: RET
