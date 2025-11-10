// Name: sound_mp3.cpp_CFileBitStream_close_FUN_0052edf0
// Address: 0052edf0
// Address Range: [[0052edf0, 0052ee45]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_CFileBitStream_close_FUN_0052edf0(CFileBitStream * this_ptr)
// Globals:
//   TerminatedCString s_sound_mp3_cpp_0063ace1
//   TerminatedCString s_sound_mp3_cpp_0063acf2
// Function calls:
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_close_FUN_0052edf0(CFileBitStream *this_ptr)

{
  char *ptr;
  
  if (this_ptr->file_handle == (FILE *)0x0) {
    ptr = this_ptr->buffer;
    if (ptr == (char *)0x0) {
      return;
    }
  }
  else {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(this_ptr->file_handle,"..\\sound\\mp3.cpp",0x20b);
    this_ptr->file_handle = (FILE *)0x0;
    ptr = this_ptr->buffer;
    if (ptr == (char *)0x0) {
      return;
    }
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\sound\\mp3.cpp",0x210);
  this_ptr->buffer = (char *)0x0;
  return;
}


// Assembly code:
// 0052edf0: PUSH EBX
//   Label: sound_mp3.cpp_CFileBitStream_close_FUN_0052edf0
// 0052edf1: PUSH ESI
// 0052edf2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052edf6: MOV EDX,dword ptr [EBX]
// 0052edf8: TEST EDX,EDX
// 0052edfa: JNZ 0x0052ee06
//   XREF to: 0052ee06 (CONDITIONAL_JUMP)
// 0052edfc: MOV ESI,dword ptr [EBX + 0x4]
// 0052edff: TEST ESI,ESI
// 0052ee01: JNZ 0x0052ee29
//   XREF to: 0052ee29 (CONDITIONAL_JUMP)
// 0052ee03: POP ESI
// 0052ee04: POP EBX
// 0052ee05: RET
// 0052ee06: PUSH 0x20b
//   Label: LAB_0052ee06
// 0052ee0b: PUSH 0x63ace1
//   XREF to: 0063ace1 (DATA)
// 0052ee10: PUSH EDX
// 0052ee11: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0052ee16: ADD ESP,0xc
// 0052ee19: MOV dword ptr [EBX],0x0
// 0052ee1f: MOV ESI,dword ptr [EBX + 0x4]
// 0052ee22: TEST ESI,ESI
// 0052ee24: JNZ 0x0052ee29
//   XREF to: 0052ee29 (CONDITIONAL_JUMP)
// 0052ee26: POP ESI
// 0052ee27: POP EBX
// 0052ee28: RET
// 0052ee29: PUSH 0x210
//   Label: LAB_0052ee29
// 0052ee2e: PUSH 0x63acf2
//   XREF to: 0063acf2 (DATA)
// 0052ee33: PUSH ESI
// 0052ee34: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0052ee39: ADD ESP,0xc
// 0052ee3c: MOV dword ptr [EBX + 0x4],0x0
// 0052ee43: POP ESI
// 0052ee44: POP EBX
// 0052ee45: RET
