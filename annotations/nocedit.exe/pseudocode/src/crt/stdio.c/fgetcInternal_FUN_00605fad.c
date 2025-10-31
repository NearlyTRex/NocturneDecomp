// Name: crt_stdio.c_fgetcInternal_FUN_00605fad
// Address: 00605fad
// Address Range: [[00605fad, 0060601f]]
// Convention: __watcallStack
// Signature: FILE * crt_stdio.c_fgetcInternal_FUN_00605fad(FILE * stream, byte * output_byte)
// Cross-references:
//   crt_stdio.c_fgetc_FUN_005ff245 (005ff245) at 005ff2c8 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_reportStreamError_FUN_00606020

#include "nocturne.h"

FILE * __watcallStack crt_stdio_c_fgetcInternal_FUN_00605fad(FILE *stream,byte *output_byte)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)&stream->_cnt + *(int *)(stream->_ptr + 4));
  if (*(uint *)(iVar1 + 0x10) <= *(uint *)(iVar1 + 0x14)) {
    iVar4 = (**(code **)(*(int *)(iVar1 + 0x28) + 0x10))();
    if (iVar4 == -1) {
      uVar3 = 0xffffffff;
      goto LAB_00605fd8;
    }
  }
  pbVar2 = *(byte **)(iVar1 + 0x14);
  *(byte **)(iVar1 + 0x14) = pbVar2 + 1;
  uVar3 = (uint)*pbVar2;
LAB_00605fd8:
  if (uVar3 != 0xffffffff) {
    *output_byte = (byte)uVar3;
    stream->_cnt = 1;
    return stream;
  }
  crt_stdio_c_reportStreamError_FUN_00606020
            ((FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4)),6);
  stream->_cnt = 0;
  return stream;
}


// Assembly code:
// 00605fad: PUSH EBX
//   Label: crt_stdio.c_fgetcInternal_FUN_00605fad
// 00605fae: PUSH ESI
// 00605faf: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00605fb3: MOV EAX,dword ptr [EBX]
// 00605fb5: MOV EAX,dword ptr [EAX + 0x4]
// 00605fb8: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4]
// 00605fbc: MOV EDX,dword ptr [EAX + 0x14]
// 00605fbf: MOV ECX,dword ptr [EAX + 0x10]
// 00605fc2: MOV ESI,EAX
// 00605fc4: CMP EDX,ECX
// 00605fc6: JNC 0x00605ff1
//   XREF to: 00605ff1 (CONDITIONAL_JUMP)
// 00605fc8: MOV EAX,dword ptr [ESI + 0x14]
//   Label: LAB_00605fc8
// 00605fcb: LEA EDX,[EAX + 0x1]
// 00605fce: MOV dword ptr [ESI + 0x14],EDX
// 00605fd1: MOV AL,byte ptr [EAX]
// 00605fd3: AND EAX,0xff
// 00605fd8: MOV EDX,EAX
//   Label: LAB_00605fd8
// 00605fda: CMP EAX,-0x1
// 00605fdd: JZ 0x00606002
//   XREF to: 00606002 (CONDITIONAL_JUMP)
// 00605fdf: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00605fe3: MOV byte ptr [EAX],DL
// 00605fe5: MOV dword ptr [EBX + 0x4],0x1
// 00605fec: MOV EAX,EBX
// 00605fee: POP ESI
// 00605fef: POP EBX
// 00605ff0: RET
// 00605ff1: PUSH EAX
//   Label: LAB_00605ff1
// 00605ff2: MOV EDX,dword ptr [EAX + 0x28]
// 00605ff5: CALL dword ptr [EDX + 0x10]
// 00605ff8: ADD ESP,0x4
// 00605ffb: CMP EAX,-0x1
// 00605ffe: JNZ 0x00605fc8
//   XREF to: 00605fc8 (CONDITIONAL_JUMP)
// 00606000: JMP 0x00605fd8
//   XREF to: 00605fd8 (UNCONDITIONAL_JUMP)
// 00606002: MOV EAX,dword ptr [EBX]
//   Label: LAB_00606002
// 00606004: MOV EAX,dword ptr [EAX + 0x4]
// 00606007: PUSH 0x6
// 00606009: ADD EAX,EBX
// 0060600b: PUSH EAX
// 0060600c: CALL crt_stdio.c_reportStreamError_FUN_00606020
//   XREF to: 00606020 (UNCONDITIONAL_CALL)
// 00606011: ADD ESP,0x8
// 00606014: MOV dword ptr [EBX + 0x4],0x0
// 0060601b: MOV EAX,EBX
// 0060601d: POP ESI
// 0060601e: POP EBX
// 0060601f: RET
