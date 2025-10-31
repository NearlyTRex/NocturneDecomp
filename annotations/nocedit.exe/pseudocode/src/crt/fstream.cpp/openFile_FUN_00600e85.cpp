// Name: crt_fstream.cpp_openFile_FUN_00600e85
// Address: 00600e85
// Address Range: [[00600e85, 00600ee3]]
// Convention: __cdecl
// Signature: void crt_fstream.cpp_openFile_FUN_00600e85(ifstream * stream_obj, char * filename, int open_mode, SIZE_T buffer_size)
// Cross-references:
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e15ba [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e0fcf [UNCONDITIONAL_CALL]
//   engine_dosio.c_reopenFileStream_FUN_00481b50 (00481b50) at 00481bc3 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_fstream.cpp_filebuf_open_FUN_00608c15
//   crt_stdio.c_clear_and_preserve_state_FUN_00600e64
//   crt_stdio.c_reportStreamError_FUN_00606020

#include "nocturne.h"

void __cdecl
crt_fstream_cpp_openFile_FUN_00600e85
          (ifstream *stream_obj,char *filename,int open_mode,SIZE_T buffer_size)

{
  int iVar1;
  FileEmbeddedData *embedded_data;
  
  embedded_data =
       (FileEmbeddedData *)
       ((stream_obj->fstreambase_core).filebuf.__unbuffered_get_area +
       *(int *)((int)(stream_obj->fstreambase_core).layout_info + 4) + -0x38);
  if ((filebuf *)embedded_data->stream != (filebuf *)0x0) {
    iVar1 = crt_fstream_cpp_filebuf_open_FUN_00608c15
                      ((filebuf *)embedded_data->stream,filename,open_mode,buffer_size);
    if (iVar1 != 0) {
      crt_stdio_c_clear_and_preserve_state_FUN_00600e64
                ((FileEmbeddedData *)
                 ((stream_obj->fstreambase_core).filebuf.__unbuffered_get_area +
                 *(int *)((int)(stream_obj->fstreambase_core).layout_info + 4) + -0x38),0);
      return;
    }
    embedded_data =
         (FileEmbeddedData *)
         ((stream_obj->fstreambase_core).filebuf.__unbuffered_get_area +
         *(int *)((int)(stream_obj->fstreambase_core).layout_info + 4) + -0x38);
  }
  crt_stdio_c_reportStreamError_FUN_00606020(embedded_data,2);
  return;
}


// Assembly code:
// 00600e85: PUSH EBX
//   Label: crt_fstream.cpp_openFile_FUN_00600e85
// 00600e86: PUSH ESI
// 00600e87: PUSH EDI
// 00600e88: PUSH EBP
// 00600e89: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00600e8d: MOV EAX,dword ptr [EBX]
// 00600e8f: MOV EAX,dword ptr [EAX + 0x4]
// 00600e92: ADD EAX,EBX
// 00600e94: MOV EDX,dword ptr [EAX + 0x4]
// 00600e97: TEST EDX,EDX
// 00600e99: JZ 0x00600ece
//   XREF to: 00600ece (CONDITIONAL_JUMP)
// 00600e9b: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00600e9f: PUSH ECX
// 00600ea0: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00600ea4: PUSH ESI
// 00600ea5: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00600ea9: PUSH EDI
// 00600eaa: PUSH EDX
// 00600eab: CALL crt_fstream.cpp_filebuf_open_FUN_00608c15
//   XREF to: 00608c15 (UNCONDITIONAL_CALL)
// 00600eb0: ADD ESP,0x10
// 00600eb3: TEST EAX,EAX
// 00600eb5: JNZ 0x00600ed3
//   XREF to: 00600ed3 (CONDITIONAL_JUMP)
// 00600eb7: MOV EAX,dword ptr [EBX]
// 00600eb9: MOV EDX,dword ptr [EAX + 0x4]
// 00600ebc: PUSH 0x2
// 00600ebe: ADD EBX,EDX
// 00600ec0: PUSH EBX
// 00600ec1: CALL crt_stdio.c_reportStreamError_FUN_00606020
//   Label: LAB_00600ec1
//   XREF to: 00606020 (UNCONDITIONAL_CALL)
// 00600ec6: ADD ESP,0x8
//   Label: LAB_00600ec6
// 00600ec9: POP EBP
// 00600eca: POP EDI
// 00600ecb: POP ESI
// 00600ecc: POP EBX
// 00600ecd: RET
// 00600ece: PUSH 0x2
//   Label: LAB_00600ece
// 00600ed0: PUSH EAX
// 00600ed1: JMP 0x00600ec1
//   XREF to: 00600ec1 (UNCONDITIONAL_JUMP)
// 00600ed3: MOV EAX,dword ptr [EBX]
//   Label: LAB_00600ed3
// 00600ed5: MOV EBP,dword ptr [EAX + 0x4]
// 00600ed8: PUSH 0x0
// 00600eda: ADD EBX,EBP
// 00600edc: PUSH EBX
// 00600edd: CALL crt_stdio.c_clear_and_preserve_state_FUN_00600e64
//   XREF to: 00600e64 (UNCONDITIONAL_CALL)
// 00600ee2: JMP 0x00600ec6
//   XREF to: 00600ec6 (UNCONDITIONAL_JUMP)
