// Name: crt_stdio.c_fputc_FUN_005ff2d7
// Address: 005ff2d7
// Address Range: [[005ff2d7, 005ff383]]
// Convention: __cdecl
// Signature: int crt_stdio.c_fputc_FUN_005ff2d7(FILE * stream, int character)
// Cross-references:
//   support_codec.cpp_CCodec_process_FUN_0043ea10 (0043ea10) at 0043ea6c [UNCONDITIONAL_CALL]
//   support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200 (0043f200) at 0043f24f [UNCONDITIONAL_CALL]
//   support_codec.cpp_flushBitBuffer_FUN_0043e7e0 (0043e7e0) at 0043e826 [UNCONDITIONAL_CALL]
//   support_codec.cpp_writeBitsToStream_FUN_0043e6c0 (0043e6c0) at 0043e760 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_prepare_stream_for_write_FUN_00606055
//   crt_stdio.c_reportStreamError_FUN_00606020
//   crt_stdio.c_stream_flush_FUN_006060bb

#include "nocturne.h"

int __cdecl crt_stdio_c_fputc_FUN_005ff2d7(FILE *stream,int character)

{
  int iVar1;
  byte *pbVar2;
  bool bVar3;
  undefined3 extraout_var;
  uint uVar4;
  byte local_c;
  
  if ((*(int *)((int)&stream->_handle + *(int *)(stream->_ptr + 4)) == 0) &&
     (((*(int *)((int)&stream->_link + *(int *)(stream->_ptr + 4)) == 0 &&
       ((*(uint *)((int)&stream->_flag + *(int *)(stream->_ptr + 4)) & 0x4000) == 0)) ||
      (bVar3 = crt_stdio_c_prepare_stream_for_write_FUN_00606055(stream),
      CONCAT31(extraout_var,bVar3) != 0)))) {
    iVar1 = *(int *)((int)&stream->_cnt + *(int *)(stream->_ptr + 4));
    pbVar2 = *(byte **)(iVar1 + 0x20);
    if (pbVar2 < *(byte **)(iVar1 + 0x1c)) {
      *(byte **)(iVar1 + 0x20) = pbVar2 + 1;
      local_c = (byte)character;
      *pbVar2 = local_c;
      uVar4 = (uint)*pbVar2;
    }
    else {
      uVar4 = (**(code **)(*(int *)(iVar1 + 0x28) + 0xc))();
    }
    if (uVar4 == 0xffffffff) {
      crt_stdio_c_reportStreamError_FUN_00606020
                ((FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4)),2);
    }
    if ((*(uint *)((int)&stream->_flag + *(int *)(stream->_ptr + 4)) & 0x2000) != 0) {
      crt_stdio_c_stream_flush_FUN_006060bb(stream);
    }
  }
  return (int)stream;
}


// Assembly code:
// 005ff2d7: PUSH EBX
//   Label: crt_stdio.c_fputc_FUN_005ff2d7
// 005ff2d8: PUSH ESI
// 005ff2d9: SUB ESP,0x4
// 005ff2dc: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005ff2e0: MOV EDX,dword ptr [EBX]
// 005ff2e2: MOV EDX,dword ptr [EDX + 0x4]
// 005ff2e5: MOV ECX,dword ptr [EDX + EBX*0x1 + 0x10]
// 005ff2e9: MOV EAX,EBX
// 005ff2eb: TEST ECX,ECX
// 005ff2ed: JNZ 0x005ff355
//   XREF to: 005ff355 (CONDITIONAL_JUMP)
// 005ff2ef: MOV EDX,dword ptr [EBX]
// 005ff2f1: MOV EDX,dword ptr [EDX + 0x4]
// 005ff2f4: ADD EDX,EBX
// 005ff2f6: MOV ECX,dword ptr [EDX + 0x8]
// 005ff2f9: TEST ECX,ECX
// 005ff2fb: JNZ 0x005ff35d
//   XREF to: 005ff35d (CONDITIONAL_JUMP)
// 005ff2fd: MOV EDX,dword ptr [EDX + 0xc]
// 005ff300: TEST DH,0x40
// 005ff303: JNZ 0x005ff35d
//   XREF to: 005ff35d (CONDITIONAL_JUMP)
// 005ff305: MOV EAX,dword ptr [EBX]
//   Label: LAB_005ff305
// 005ff307: MOV EAX,dword ptr [EAX + 0x4]
// 005ff30a: XOR ECX,ECX
// 005ff30c: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4]
// 005ff310: MOV CL,byte ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005ff314: MOV EDX,dword ptr [EAX + 0x20]
// 005ff317: MOV ESI,dword ptr [EAX + 0x1c]
// 005ff31a: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0xc] (DATA)
// 005ff31d: CMP EDX,ESI
// 005ff31f: JNC 0x005ff36c
//   XREF to: 005ff36c (CONDITIONAL_JUMP)
// 005ff321: LEA ECX,[EDX + 0x1]
// 005ff324: MOV dword ptr [EAX + 0x20],ECX
// 005ff327: MOV AL,byte ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005ff32a: MOV byte ptr [EDX],AL
// 005ff32c: XOR EAX,EAX
// 005ff32e: MOV AL,byte ptr [EDX]
// 005ff330: CMP EAX,-0x1
//   Label: LAB_005ff330
// 005ff333: JNZ 0x005ff347
//   XREF to: 005ff347 (CONDITIONAL_JUMP)
// 005ff335: MOV EAX,dword ptr [EBX]
// 005ff337: MOV EAX,dword ptr [EAX + 0x4]
// 005ff33a: PUSH 0x2
// 005ff33c: ADD EAX,EBX
// 005ff33e: PUSH EAX
// 005ff33f: CALL crt_stdio.c_reportStreamError_FUN_00606020
//   XREF to: 00606020 (UNCONDITIONAL_CALL)
// 005ff344: ADD ESP,0x8
// 005ff347: MOV EAX,dword ptr [EBX]
//   Label: LAB_005ff347
// 005ff349: MOV EAX,dword ptr [EAX + 0x4]
// 005ff34c: MOV EAX,dword ptr [EBX + EAX*0x1 + 0xc]
// 005ff350: TEST AH,0x20
// 005ff353: JNZ 0x005ff379
//   XREF to: 005ff379 (CONDITIONAL_JUMP)
// 005ff355: MOV EAX,EBX
//   Label: LAB_005ff355
// 005ff357: ADD ESP,0x4
// 005ff35a: POP ESI
// 005ff35b: POP EBX
// 005ff35c: RET
// 005ff35d: PUSH EAX
//   Label: LAB_005ff35d
// 005ff35e: CALL crt_stdio.c_prepare_stream_for_write_FUN_00606055
//   XREF to: 00606055 (UNCONDITIONAL_CALL)
// 005ff363: ADD ESP,0x4
// 005ff366: TEST EAX,EAX
// 005ff368: JNZ 0x005ff305
//   XREF to: 005ff305 (CONDITIONAL_JUMP)
// 005ff36a: JMP 0x005ff355
//   XREF to: 005ff355 (UNCONDITIONAL_JUMP)
// 005ff36c: PUSH ECX
//   Label: LAB_005ff36c
// 005ff36d: MOV EDX,dword ptr [EAX + 0x28]
// 005ff370: PUSH EAX
// 005ff371: CALL dword ptr [EDX + 0xc]
// 005ff374: ADD ESP,0x8
// 005ff377: JMP 0x005ff330
//   XREF to: 005ff330 (UNCONDITIONAL_JUMP)
// 005ff379: PUSH EBX
//   Label: LAB_005ff379
// 005ff37a: CALL crt_stdio.c_stream_flush_FUN_006060bb
//   XREF to: 006060bb (UNCONDITIONAL_CALL)
// 005ff37f: ADD ESP,0x4
// 005ff382: JMP 0x005ff355
//   XREF to: 005ff355 (UNCONDITIONAL_JUMP)
