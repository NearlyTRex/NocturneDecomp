// Name: sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_005a6400
// Address: 005a6400
// Address Range: [[005a6400, 005a642f]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_005a6400(CSfxSample * this_ptr)
// Cross-references:
//   sound_sndmain.cpp_CSfxSample_FUN_005a6170 (005a6170) at 005a6189 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0 (005a62c0) at 005a62de [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_0064fd42
// Function calls:
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_005a6400(CSfxSample *this_ptr)

{
  if (this_ptr->sample_data == (void *)0x0) {
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->sample_data,"..\\sound\\sndmain.cpp",0x744);
  this_ptr->sample_data = (void *)0x0;
  return;
}


// Assembly code:
// 005a6400: PUSH EBX
//   Label: sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_005a6400
// 005a6401: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a6405: MOV EDX,dword ptr [EBX + 0x120]
// 005a640b: TEST EDX,EDX
// 005a640d: JNZ 0x005a6411
//   XREF to: 005a6411 (CONDITIONAL_JUMP)
// 005a640f: POP EBX
// 005a6410: RET
// 005a6411: PUSH 0x744
//   Label: LAB_005a6411
// 005a6416: PUSH 0x64fd42
//   XREF to: 0064fd42 (DATA)
// 005a641b: PUSH EDX
// 005a641c: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005a6421: ADD ESP,0xc
// 005a6424: MOV dword ptr [EBX + 0x120],0x0
// 005a642e: POP EBX
// 005a642f: RET
