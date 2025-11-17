// Name: sound_sndmain.cpp_CSfxSample_ctor_FUN_005a60f0
// Address: 005a60f0
// Address Range: [[005a60f0, 005a614d]]
// Convention: __cdecl
// Signature: CSfxSample * sound_sndmain.cpp_CSfxSample_ctor_FUN_005a60f0(CSfxSample * this_ptr)
// Function calls:
//   sound_sndmain.cpp_FUN_005a8480

#include "nocturne.h"

CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_ctor_FUN_005a60f0(CSfxSample *this_ptr)

{
  CSfxSample *pCVar1;
  
  pCVar1 = (CSfxSample *)sound_sndmain_cpp_FUN_005a8480();
  pCVar1->sample_data = (void *)0x0;
  pCVar1->ref_count = 0;
  pCVar1->buffer_id = 0;
  pCVar1->taken = 0;
  pCVar1->streaming_slot_index = -1;
  pCVar1->file_handle = (FILE *)0x0;
  pCVar1->mp3_data = (CMP3Decoder *)0x0;
  pCVar1->sound_buffer = (void *)0x0;
  return pCVar1;
}


// Assembly code:
// 005a60f0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: sound_sndmain.cpp_CSfxSample_ctor_FUN_005a60f0
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
