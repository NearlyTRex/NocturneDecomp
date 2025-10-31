// Name: crt_stdio.c_stream_flush_FUN_006060bb
// Address: 006060bb
// Address Range: [[006060bb, 006060fd]]
// Convention: __watcallStack
// Signature: FILE * crt_stdio.c_stream_flush_FUN_006060bb(FILE * stream)
// Cross-references:
//   crt_stdio.c_fputc_FUN_005ff2d7 (005ff2d7) at 005ff37a [UNCONDITIONAL_CALL]
//   crt_stdio.c_prepare_stream_for_write_FUN_00606055 (00606055) at 00606089 [UNCONDITIONAL_CALL]
//   crt_stdio.c_stream_setup_FUN_00605f20 (00605f20) at 00605fa3 [UNCONDITIONAL_CALL]
//   crt_stdio.c_stream_write_internal_FUN_005ffcb3 (005ffcb3) at 005ffd6b [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_reportStreamError_FUN_00606020

#include "nocturne.h"

FILE * __watcallStack crt_stdio_c_stream_flush_FUN_006060bb(FILE *stream)

{
  int iVar1;
  
  if (*(int *)((int)&stream->_handle + *(int *)(stream->_ptr + 4)) == 0) {
    iVar1 = (**(code **)(*(int *)(*(int *)((int)&stream->_cnt + *(int *)(stream->_ptr + 4)) + 0x28)
                        + 0x20))();
    if (iVar1 == -1) {
      crt_stdio_c_reportStreamError_FUN_00606020
                ((FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4)),2);
      return stream;
    }
  }
  return stream;
}


// Assembly code:
// 006060bb: PUSH EBX
//   Label: crt_stdio.c_stream_flush_FUN_006060bb
// 006060bc: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 006060c0: MOV EAX,dword ptr [EBX]
// 006060c2: MOV EAX,dword ptr [EAX + 0x4]
// 006060c5: CMP dword ptr [EBX + EAX*0x1 + 0x10],0x0
// 006060ca: JZ 0x006060d0
//   XREF to: 006060d0 (CONDITIONAL_JUMP)
// 006060cc: MOV EAX,EBX
//   Label: LAB_006060cc
// 006060ce: POP EBX
// 006060cf: RET
// 006060d0: MOV EAX,dword ptr [EBX]
//   Label: LAB_006060d0
// 006060d2: MOV EAX,dword ptr [EAX + 0x4]
// 006060d5: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4]
// 006060d9: PUSH EAX
// 006060da: MOV EDX,dword ptr [EAX + 0x28]
// 006060dd: CALL dword ptr [EDX + 0x20]
// 006060e0: ADD ESP,0x4
// 006060e3: CMP EAX,-0x1
// 006060e6: JNZ 0x006060cc
//   XREF to: 006060cc (CONDITIONAL_JUMP)
// 006060e8: MOV EAX,dword ptr [EBX]
// 006060ea: MOV EAX,dword ptr [EAX + 0x4]
// 006060ed: PUSH 0x2
// 006060ef: ADD EAX,EBX
// 006060f1: PUSH EAX
// 006060f2: CALL crt_stdio.c_reportStreamError_FUN_00606020
//   XREF to: 00606020 (UNCONDITIONAL_CALL)
// 006060f7: ADD ESP,0x8
// 006060fa: MOV EAX,EBX
// 006060fc: POP EBX
// 006060fd: RET
