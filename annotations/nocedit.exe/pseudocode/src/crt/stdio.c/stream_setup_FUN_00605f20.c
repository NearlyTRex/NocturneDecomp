// Name: crt_stdio.c_stream_setup_FUN_00605f20
// Address: 00605f20
// Address Range: [[00605f20, 00605fac]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_stream_setup_FUN_00605f20(FILE * stream, int operation_type)
// Cross-references:
//   crt_stdio.c_fgetc_FUN_005ff245 (005ff245) at 005ff26c [UNCONDITIONAL_CALL]
//   crt_stdio.c_stream_valid_FUN_00608cd1 (00608cd1) at 00608d10 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_reportStreamError_FUN_00606020
//   crt_stdio.c_stream_flush_FUN_006060bb
//   crt_string.c_mbstrncpy_core_FUN_0060b670

#include "nocturne.h"

int __watcallStack crt_stdio_c_stream_setup_FUN_00605f20(FILE *stream,int operation_type)

{
  FILE *stream_00;
  FileEmbeddedData *embedded_data;
  char *unaff_retaddr;
  int in_stack_0000000c;
  
  if (*(int *)((int)&stream->_handle + *(int *)(stream->_ptr + 4)) == 0) {
    stream->_cnt = 0;
    stream_00 = *(FILE **)((int)&stream->_link + *(int *)(stream->_ptr + 4));
    if (stream_00 != (FILE *)0x0) {
      crt_stdio_c_stream_flush_FUN_006060bb(stream_00);
    }
    if ((in_stack_0000000c == 0) &&
       ((*(uint *)((int)&stream->_flag + *(int *)(stream->_ptr + 4)) & 1) != 0)) {
      crt_string_c_mbstrncpy_core_FUN_0060b670((char *)stream,unaff_retaddr,(int)stream);
      embedded_data = (FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4));
      if ((embedded_data->state_field & 4) != 0) {
        crt_stdio_c_reportStreamError_FUN_00606020(embedded_data,2);
      }
    }
    return (uint)(*(int *)((int)&stream->_handle + *(int *)(stream->_ptr + 4)) == 0);
  }
  crt_stdio_c_reportStreamError_FUN_00606020
            ((FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4)),2);
  return 0;
}


// Assembly code:
// 00605f20: PUSH EBX
//   Label: crt_stdio.c_stream_setup_FUN_00605f20
// 00605f21: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00605f25: MOV EAX,dword ptr [EBX]
// 00605f27: MOV EAX,dword ptr [EAX + 0x4]
// 00605f2a: MOV EDX,dword ptr [EBX + EAX*0x1 + 0x10]
// 00605f2e: TEST EDX,EDX
// 00605f30: JNZ 0x00605f8c
//   XREF to: 00605f8c (CONDITIONAL_JUMP)
// 00605f32: MOV EAX,dword ptr [EBX]
// 00605f34: MOV dword ptr [EBX + 0x4],EDX
// 00605f37: MOV EAX,dword ptr [EAX + 0x4]
// 00605f3a: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8]
// 00605f3e: TEST EAX,EAX
// 00605f40: JNZ 0x00605fa2
//   XREF to: 00605fa2 (CONDITIONAL_JUMP)
// 00605f42: CMP dword ptr [ESP + 0xc],0x0
//   Label: LAB_00605f42
//   XREF to: Stack[0x8] (READ)
// 00605f47: JNZ 0x00605f79
//   XREF to: 00605f79 (CONDITIONAL_JUMP)
// 00605f49: MOV EAX,dword ptr [EBX]
// 00605f4b: MOV EAX,dword ptr [EAX + 0x4]
// 00605f4e: MOV EAX,dword ptr [EBX + EAX*0x1 + 0xc]
// 00605f52: TEST AL,0x1
// 00605f54: JZ 0x00605f79
//   XREF to: 00605f79 (CONDITIONAL_JUMP)
// 00605f56: PUSH EBX
// 00605f57: CALL crt_string.c_mbstrncpy_core_FUN_0060b670
//   XREF to: 0060b6d7 (UNCONDITIONAL_CALL)
// 00605f5c: MOV EAX,dword ptr [EBX]
// 00605f5e: MOV EAX,dword ptr [EAX + 0x4]
// 00605f61: ADD EAX,EBX
// 00605f63: MOV EDX,dword ptr [EAX + 0x10]
// 00605f66: ADD ESP,0x4
// 00605f69: AND EDX,0x4
// 00605f6c: JZ 0x00605f79
//   XREF to: 00605f79 (CONDITIONAL_JUMP)
// 00605f6e: PUSH 0x2
// 00605f70: PUSH EAX
// 00605f71: CALL crt_stdio.c_reportStreamError_FUN_00606020
//   XREF to: 00606020 (UNCONDITIONAL_CALL)
// 00605f76: ADD ESP,0x8
// 00605f79: MOV EAX,dword ptr [EBX]
//   Label: LAB_00605f79
// 00605f7b: ADD EBX,dword ptr [EAX + 0x4]
// 00605f7e: CMP dword ptr [EBX + 0x10],0x0
// 00605f82: SETZ AL
// 00605f85: AND EAX,0xff
// 00605f8a: POP EBX
// 00605f8b: RET
// 00605f8c: MOV EAX,dword ptr [EBX]
//   Label: LAB_00605f8c
// 00605f8e: MOV ECX,dword ptr [EAX + 0x4]
// 00605f91: PUSH 0x2
// 00605f93: ADD EBX,ECX
// 00605f95: PUSH EBX
// 00605f96: CALL crt_stdio.c_reportStreamError_FUN_00606020
//   XREF to: 00606020 (UNCONDITIONAL_CALL)
// 00605f9b: ADD ESP,0x8
// 00605f9e: XOR EAX,EAX
// 00605fa0: POP EBX
// 00605fa1: RET
// 00605fa2: PUSH EAX
//   Label: LAB_00605fa2
// 00605fa3: CALL crt_stdio.c_stream_flush_FUN_006060bb
//   XREF to: 006060bb (UNCONDITIONAL_CALL)
// 00605fa8: ADD ESP,0x4
// 00605fab: JMP 0x00605f42
//   XREF to: 00605f42 (UNCONDITIONAL_JUMP)
