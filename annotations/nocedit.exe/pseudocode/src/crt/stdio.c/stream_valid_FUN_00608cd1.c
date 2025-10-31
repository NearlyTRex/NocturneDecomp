// Name: crt_stdio.c_stream_valid_FUN_00608cd1
// Address: 00608cd1
// Address Range: [[00608cd1, 00608d19]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_stream_valid_FUN_00608cd1(FILE * stream, int operation_type)
// Cross-references:
//   crt_stdio.c_fgetc_buffered_FUN_0060d510 (0060d510) at 0060d519 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00600ee4 (00600ee4) at 00600eec [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060d576 (0060d576) at 0060d584 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_stream_setup_FUN_00605f20

#include "nocturne.h"

int __watcallStack crt_stdio_c_stream_valid_FUN_00608cd1(FILE *stream,int operation_type)

{
  int iVar1;
  
  if ((((operation_type != 0) ||
       ((*(uint *)((int)&stream->_flag + *(int *)(stream->_ptr + 4)) & 1) == 0)) &&
      (*(int *)((int)&stream->_handle + *(int *)(stream->_ptr + 4)) == 0)) &&
     (*(int *)((int)&stream->_link + *(int *)(stream->_ptr + 4)) == 0)) {
    return 1;
  }
  iVar1 = crt_stdio_c_stream_setup_FUN_00605f20(stream,operation_type);
  return iVar1;
}


// Assembly code:
// 00608cd1: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_stdio.c_stream_valid_FUN_00608cd1
//   XREF to: Stack[0x4] (READ)
// 00608cd5: CMP dword ptr [ESP + 0x8],0x0
//   XREF to: Stack[0x8] (READ)
// 00608cda: JZ 0x00608cfb
//   XREF to: 00608cfb (CONDITIONAL_JUMP)
// 00608cdc: MOV EDX,dword ptr [EAX]
//   Label: LAB_00608cdc
// 00608cde: MOV EDX,dword ptr [EDX + 0x4]
// 00608ce1: CMP dword ptr [EDX + EAX*0x1 + 0x10],0x0
// 00608ce6: JNZ 0x00608d09
//   XREF to: 00608d09 (CONDITIONAL_JUMP)
// 00608ce8: MOV EDX,dword ptr [EAX]
// 00608cea: MOV EDX,dword ptr [EDX + 0x4]
// 00608ced: MOV EDX,dword ptr [EDX + EAX*0x1 + 0x8]
// 00608cf1: TEST EDX,EDX
// 00608cf3: JNZ 0x00608d09
//   XREF to: 00608d09 (CONDITIONAL_JUMP)
// 00608cf5: MOV EAX,0x1
// 00608cfa: RET
// 00608cfb: MOV EDX,dword ptr [EAX]
//   Label: LAB_00608cfb
// 00608cfd: MOV EDX,dword ptr [EDX + 0x4]
// 00608d00: MOV EDX,dword ptr [EDX + EAX*0x1 + 0xc]
// 00608d04: TEST DL,0x1
// 00608d07: JZ 0x00608cdc
//   XREF to: 00608cdc (CONDITIONAL_JUMP)
// 00608d09: PUSH EBX
//   Label: LAB_00608d09
// 00608d0a: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00608d0e: PUSH EBX
// 00608d0f: PUSH EAX
// 00608d10: CALL crt_stdio.c_stream_setup_FUN_00605f20
//   XREF to: 00605f20 (UNCONDITIONAL_CALL)
// 00608d15: ADD ESP,0x8
// 00608d18: POP EBX
// 00608d19: RET
