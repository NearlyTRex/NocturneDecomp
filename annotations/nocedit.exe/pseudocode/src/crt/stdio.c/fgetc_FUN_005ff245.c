// Name: crt_stdio.c_fgetc_FUN_005ff245
// Address: 005ff245
// Address Range: [[005ff245, 005ff2d6]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_fgetc_FUN_005ff245(FILE * stream, uchar * output_byte)
// Cross-references:
//   core_cloth.cpp_FUN_0043e4c0 (0043e4c0) at 0043e4e5 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CCodec_process_FUN_0043ea10 (0043ea10) at 0043ea48 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CLZWCompress_process_FUN_0043f360 (0043f360) at 0043f3b1 [UNCONDITIONAL_CALL]
//   support_codec.cpp_readBitsFromStream_FUN_0043e530 (0043e530) at 0043e687 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_fgetcInternal_FUN_00605fad
//   crt_stdio.c_stream_setup_FUN_00605f20

#include "nocturne.h"

int __watcallStack crt_stdio_c_fgetc_FUN_005ff245(FILE *stream,uchar *output_byte)

{
  uchar *puVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  
  if (((*(int *)((int)&stream->_handle + *(int *)(stream->_ptr + 4)) != 0) ||
      (*(int *)((int)&stream->_link + *(int *)(stream->_ptr + 4)) != 0)) &&
     (iVar3 = crt_stdio_c_stream_setup_FUN_00605f20(stream,1), iVar3 == 0)) {
    stream->_cnt = 0;
    return (int)stream;
  }
  iVar3 = *(int *)((int)&stream->_cnt + *(int *)(stream->_ptr + 4));
  if (*(uint *)(iVar3 + 0x10) != *(uint *)(iVar3 + 0x14)) {
    if ((*(uint *)(iVar3 + 0x14) < *(uint *)(iVar3 + 0x10)) ||
       (iVar4 = (**(code **)(*(int *)(iVar3 + 0x28) + 0x10))(), iVar4 != -1)) {
      puVar1 = *(uchar **)(iVar3 + 0x14);
      *(uchar **)(iVar3 + 0x14) = puVar1 + 1;
      uVar2 = *puVar1;
    }
    else {
      uVar2 = 0xff;
    }
    *output_byte = uVar2;
    return (int)stream;
  }
  crt_stdio_c_fgetcInternal_FUN_00605fad(stream,output_byte);
  return (int)stream;
}


// Assembly code:
// 005ff245: PUSH EBX
//   Label: crt_stdio.c_fgetc_FUN_005ff245
// 005ff246: PUSH ESI
// 005ff247: PUSH EDI
// 005ff248: PUSH EBP
// 005ff249: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ff24d: MOV EDX,dword ptr [EBX]
// 005ff24f: MOV EDX,dword ptr [EDX + 0x4]
// 005ff252: MOV ECX,dword ptr [EDX + EBX*0x1 + 0x10]
// 005ff256: MOV EAX,EBX
// 005ff258: TEST ECX,ECX
// 005ff25a: JNZ 0x005ff269
//   XREF to: 005ff269 (CONDITIONAL_JUMP)
// 005ff25c: MOV EDX,dword ptr [EBX]
// 005ff25e: MOV EDX,dword ptr [EDX + 0x4]
// 005ff261: MOV EDX,dword ptr [EDX + EAX*0x1 + 0x8]
// 005ff265: TEST EDX,EDX
// 005ff267: JZ 0x005ff278
//   XREF to: 005ff278 (CONDITIONAL_JUMP)
// 005ff269: PUSH 0x1
//   Label: LAB_005ff269
// 005ff26b: PUSH EAX
// 005ff26c: CALL crt_stdio.c_stream_setup_FUN_00605f20
//   XREF to: 00605f20 (UNCONDITIONAL_CALL)
// 005ff271: ADD ESP,0x8
// 005ff274: TEST EAX,EAX
// 005ff276: JZ 0x005ff2d2
//   XREF to: 005ff2d2 (CONDITIONAL_JUMP)
// 005ff278: MOV EAX,dword ptr [EBX]
//   Label: LAB_005ff278
// 005ff27a: MOV EAX,dword ptr [EAX + 0x4]
// 005ff27d: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4]
// 005ff281: MOV ESI,dword ptr [EAX + 0x10]
// 005ff284: MOV EDI,dword ptr [EAX + 0x14]
// 005ff287: SUB ESI,EDI
// 005ff289: JZ 0x005ff2c2
//   XREF to: 005ff2c2 (CONDITIONAL_JUMP)
// 005ff28b: MOV ECX,dword ptr [EAX + 0x10]
// 005ff28e: MOV ESI,EAX
// 005ff290: CMP EDI,ECX
// 005ff292: JNC 0x005ff2b1
//   XREF to: 005ff2b1 (CONDITIONAL_JUMP)
// 005ff294: MOV EAX,dword ptr [ESI + 0x14]
//   Label: LAB_005ff294
// 005ff297: LEA EDX,[EAX + 0x1]
// 005ff29a: MOV dword ptr [ESI + 0x14],EDX
// 005ff29d: MOV AL,byte ptr [EAX]
// 005ff29f: AND EAX,0xff
// 005ff2a4: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_005ff2a4
//   XREF to: Stack[0x8] (READ)
// 005ff2a8: MOV byte ptr [EDX],AL
// 005ff2aa: MOV EAX,EBX
//   Label: LAB_005ff2aa
// 005ff2ac: POP EBP
// 005ff2ad: POP EDI
// 005ff2ae: POP ESI
// 005ff2af: POP EBX
// 005ff2b0: RET
// 005ff2b1: PUSH EAX
//   Label: LAB_005ff2b1
// 005ff2b2: MOV EDX,dword ptr [EAX + 0x28]
// 005ff2b5: CALL dword ptr [EDX + 0x10]
// 005ff2b8: ADD ESP,0x4
// 005ff2bb: CMP EAX,-0x1
// 005ff2be: JNZ 0x005ff294
//   XREF to: 005ff294 (CONDITIONAL_JUMP)
// 005ff2c0: JMP 0x005ff2a4
//   XREF to: 005ff2a4 (UNCONDITIONAL_JUMP)
// 005ff2c2: MOV EBP,dword ptr [ESP + 0x18]
//   Label: LAB_005ff2c2
//   XREF to: Stack[0x8] (READ)
// 005ff2c6: PUSH EBP
// 005ff2c7: PUSH EBX
// 005ff2c8: CALL crt_stdio.c_fgetcInternal_FUN_00605fad
//   XREF to: 00605fad (UNCONDITIONAL_CALL)
// 005ff2cd: ADD ESP,0x8
// 005ff2d0: JMP 0x005ff2aa
//   XREF to: 005ff2aa (UNCONDITIONAL_JUMP)
// 005ff2d2: MOV dword ptr [EBX + 0x4],EAX
//   Label: LAB_005ff2d2
// 005ff2d5: JMP 0x005ff2aa
//   XREF to: 005ff2aa (UNCONDITIONAL_JUMP)
