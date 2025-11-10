// Name: sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0
// Address: 005349e0
// Address Range: [[005349e0, 00534a5e]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0(CMP3Decoder * this_ptr)
// Cross-references:
//   sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530 (00534530) at 00534536 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630 (00534630) at 0053463c [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_ReadingOrDecodingSoundFile_FUN_005a4c80 (005a4c80) at 005a4efd [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 (005aa3f0) at 005aa5ea [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_mp3_cpp_0063ace1
//   TerminatedCString s_sound_mp3_cpp_0063acf2
// Function calls:
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_free_FUN_005349e0(CMP3Decoder *this_ptr)

{
  FILE *file_ptr;
  char *ptr;
  
  this_ptr->decode_buffer_pos = (short *)0x0;
  this_ptr->available_samples = 0;
  file_ptr = (this_ptr->file_bitstream).file_handle;
  if (file_ptr == (FILE *)0x0) {
    ptr = (this_ptr->file_bitstream).buffer;
    if (ptr == (char *)0x0) {
      this_ptr->filename[0] = '\0';
      return;
    }
  }
  else {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\sound\\mp3.cpp",0x20b);
    (this_ptr->file_bitstream).file_handle = (FILE *)0x0;
    ptr = (this_ptr->file_bitstream).buffer;
    if (ptr == (char *)0x0) {
      this_ptr->filename[0] = '\0';
      return;
    }
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\sound\\mp3.cpp",0x210);
  (this_ptr->file_bitstream).buffer = (char *)0x0;
  this_ptr->filename[0] = '\0';
  return;
}


// Assembly code:
// 005349e0: PUSH EBX
//   Label: sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0
// 005349e1: PUSH ESI
// 005349e2: PUSH EDI
// 005349e3: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005349e7: MOV dword ptr [EDI + 0x10c],0x0
// 005349f1: LEA EBX,[EDI + 0x5320]
// 005349f7: MOV dword ptr [EDI + 0x108],0x0
// 00534a01: MOV EDX,dword ptr [EBX]
// 00534a03: MOV ESI,EBX
// 00534a05: TEST EDX,EDX
// 00534a07: JNZ 0x00534a17
//   XREF to: 00534a17 (CONDITIONAL_JUMP)
// 00534a09: MOV EBX,dword ptr [ESI + 0x4]
// 00534a0c: TEST EBX,EBX
// 00534a0e: JNZ 0x00534a3e
//   XREF to: 00534a3e (CONDITIONAL_JUMP)
// 00534a10: MOV byte ptr [EDI],0x0
// 00534a13: POP EDI
// 00534a14: POP ESI
// 00534a15: POP EBX
// 00534a16: RET
// 00534a17: PUSH 0x20b
//   Label: LAB_00534a17
// 00534a1c: PUSH 0x63ace1
//   XREF to: 0063ace1 (DATA)
// 00534a21: PUSH EDX
// 00534a22: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00534a27: ADD ESP,0xc
// 00534a2a: MOV dword ptr [EBX],0x0
// 00534a30: MOV EBX,dword ptr [ESI + 0x4]
// 00534a33: TEST EBX,EBX
// 00534a35: JNZ 0x00534a3e
//   XREF to: 00534a3e (CONDITIONAL_JUMP)
// 00534a37: MOV byte ptr [EDI],0x0
// 00534a3a: POP EDI
// 00534a3b: POP ESI
// 00534a3c: POP EBX
// 00534a3d: RET
// 00534a3e: PUSH 0x210
//   Label: LAB_00534a3e
// 00534a43: PUSH 0x63acf2
//   XREF to: 0063acf2 (DATA)
// 00534a48: PUSH EBX
// 00534a49: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00534a4e: ADD ESP,0xc
// 00534a51: MOV dword ptr [ESI + 0x4],0x0
// 00534a58: MOV byte ptr [EDI],0x0
// 00534a5b: POP EDI
// 00534a5c: POP ESI
// 00534a5d: POP EBX
// 00534a5e: RET
