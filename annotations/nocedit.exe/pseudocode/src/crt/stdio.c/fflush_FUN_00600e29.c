// Name: crt_stdio.c_fflush_FUN_00600e29
// Address: 00600e29
// Address Range: [[00600e29, 00600e63]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_fflush_FUN_00600e29(FILE * stream)
// Cross-references:
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e1640 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e10c4 [UNCONDITIONAL_CALL]
//   engine_dosio.c_reopenFileStream_FUN_00481b50 (00481b50) at 00481b68 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_fstream.cpp_filebuf_close_FUN_00608bcc
//   crt_stdio.c_reportStreamError_FUN_00606020

#include "nocturne.h"

int __watcallStack crt_stdio_c_fflush_FUN_00600e29(FILE *stream)

{
  filebuf *pfVar1;
  int extraout_EAX;
  FileEmbeddedData *embedded_data;
  
  embedded_data = (FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4));
  if ((filebuf *)embedded_data->stream != (filebuf *)0x0) {
    pfVar1 = crt_fstream_cpp_filebuf_close_FUN_00608bcc((filebuf *)embedded_data->stream);
    if (pfVar1 != (filebuf *)0x0) {
      return (int)pfVar1;
    }
    embedded_data = (FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4));
  }
  crt_stdio_c_reportStreamError_FUN_00606020(embedded_data,2);
  return extraout_EAX;
}


// Assembly code:
// 00600e29: PUSH EBX
//   Label: crt_stdio.c_fflush_FUN_00600e29
// 00600e2a: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00600e2e: MOV EAX,dword ptr [EBX]
// 00600e30: MOV EAX,dword ptr [EAX + 0x4]
// 00600e33: ADD EAX,EBX
// 00600e35: MOV EDX,dword ptr [EAX + 0x4]
// 00600e38: TEST EDX,EDX
// 00600e3a: JZ 0x00600e4b
//   XREF to: 00600e4b (CONDITIONAL_JUMP)
// 00600e3c: PUSH EDX
// 00600e3d: CALL crt_fstream.cpp_filebuf_close_FUN_00608bcc
//   XREF to: 00608bcc (UNCONDITIONAL_CALL)
// 00600e42: ADD ESP,0x4
// 00600e45: TEST EAX,EAX
// 00600e47: JZ 0x00600e58
//   XREF to: 00600e58 (CONDITIONAL_JUMP)
// 00600e49: POP EBX
// 00600e4a: RET
// 00600e4b: PUSH 0x2
//   Label: LAB_00600e4b
// 00600e4d: PUSH EAX
// 00600e4e: CALL crt_stdio.c_reportStreamError_FUN_00606020
//   Label: LAB_00600e4e
//   XREF to: 00606020 (UNCONDITIONAL_CALL)
// 00600e53: ADD ESP,0x8
// 00600e56: POP EBX
// 00600e57: RET
// 00600e58: MOV EAX,dword ptr [EBX]
//   Label: LAB_00600e58
// 00600e5a: MOV EDX,dword ptr [EAX + 0x4]
// 00600e5d: PUSH 0x2
// 00600e5f: ADD EBX,EDX
// 00600e61: PUSH EBX
// 00600e62: JMP 0x00600e4e
//   XREF to: 00600e4e (UNCONDITIONAL_JUMP)
