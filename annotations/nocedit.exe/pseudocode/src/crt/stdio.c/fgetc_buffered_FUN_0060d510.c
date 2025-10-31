// Name: crt_stdio.c_fgetc_buffered_FUN_0060d510
// Address: 0060d510
// Address Range: [[0060d510, 0060d575]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_fgetc_buffered_FUN_0060d510(FILE * stream)
// Cross-references:
//   crt_string.c_mbstrncpy_core_FUN_0060b670 (0060b6d7) at 0060b6dd [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_reportStreamError_FUN_00606020
//   crt_stdio.c_stream_valid_FUN_00608cd1

#include "nocturne.h"

int __watcallStack crt_stdio_c_fgetc_buffered_FUN_0060d510(FILE *stream)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = crt_stdio_c_stream_valid_FUN_00608cd1(stream,1);
  if (iVar1 == 0) {
    return -1;
  }
  iVar1 = *(int *)((int)&stream->_cnt + *(int *)(stream->_ptr + 4));
  if (*(byte **)(iVar1 + 0x14) < *(byte **)(iVar1 + 0x10)) {
    uVar2 = (uint)**(byte **)(iVar1 + 0x14);
  }
  else {
    uVar2 = (**(code **)(*(int *)(iVar1 + 0x28) + 0x10))();
  }
  if (uVar2 != 0xffffffff) {
    return uVar2;
  }
  crt_stdio_c_reportStreamError_FUN_00606020
            ((FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4)),4);
  return -1;
}


// Assembly code:
// 0060d510: PUSH EBX
//   Label: crt_stdio.c_fgetc_buffered_FUN_0060d510
// 0060d511: PUSH ESI
// 0060d512: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0060d516: PUSH 0x1
// 0060d518: PUSH EBX
// 0060d519: CALL crt_stdio.c_stream_valid_FUN_00608cd1
//   XREF to: 00608cd1 (UNCONDITIONAL_CALL)
// 0060d51e: ADD ESP,0x8
// 0060d521: TEST EAX,EAX
// 0060d523: JZ 0x0060d56c
//   XREF to: 0060d56c (CONDITIONAL_JUMP)
// 0060d525: MOV EAX,dword ptr [EBX]
// 0060d527: MOV EAX,dword ptr [EAX + 0x4]
// 0060d52a: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4]
// 0060d52e: MOV ESI,dword ptr [EAX + 0x14]
// 0060d531: CMP ESI,dword ptr [EAX + 0x10]
// 0060d534: JNC 0x0060d549
//   XREF to: 0060d549 (CONDITIONAL_JUMP)
// 0060d536: MOV AL,byte ptr [ESI]
// 0060d538: AND EAX,0xff
// 0060d53d: MOV ESI,EAX
//   Label: LAB_0060d53d
// 0060d53f: CMP EAX,-0x1
// 0060d542: JZ 0x0060d555
//   XREF to: 0060d555 (CONDITIONAL_JUMP)
// 0060d544: MOV EAX,ESI
// 0060d546: POP ESI
// 0060d547: POP EBX
// 0060d548: RET
// 0060d549: PUSH EAX
//   Label: LAB_0060d549
// 0060d54a: MOV ESI,dword ptr [EAX + 0x28]
// 0060d54d: CALL dword ptr [ESI + 0x10]
// 0060d550: ADD ESP,0x4
// 0060d553: JMP 0x0060d53d
//   XREF to: 0060d53d (UNCONDITIONAL_JUMP)
// 0060d555: MOV EAX,dword ptr [EBX]
//   Label: LAB_0060d555
// 0060d557: MOV ECX,dword ptr [EAX + 0x4]
// 0060d55a: PUSH 0x4
// 0060d55c: ADD EBX,ECX
// 0060d55e: PUSH EBX
// 0060d55f: CALL crt_stdio.c_reportStreamError_FUN_00606020
//   XREF to: 00606020 (UNCONDITIONAL_CALL)
// 0060d564: ADD ESP,0x8
// 0060d567: MOV EAX,ESI
// 0060d569: POP ESI
// 0060d56a: POP EBX
// 0060d56b: RET
// 0060d56c: MOV ESI,0xffffffff
//   Label: LAB_0060d56c
// 0060d571: MOV EAX,ESI
// 0060d573: POP ESI
// 0060d574: POP EBX
// 0060d575: RET
