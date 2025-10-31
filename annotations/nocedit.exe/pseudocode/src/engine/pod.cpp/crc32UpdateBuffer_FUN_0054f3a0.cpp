// Name: engine_pod.cpp_crc32UpdateBuffer_FUN_0054f3a0
// Address: 0054f3a0
// Address Range: [[0054f3a0, 0054f3d3]]
// Convention: __cdecl
// Signature: uint engine_pod.cpp_crc32UpdateBuffer_FUN_0054f3a0(uchar * data_buffer, uint byte_count, uint initial_crc)
// Function calls:
//   engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0

#include "nocturne.h"

uint __cdecl
engine_pod_cpp_crc32UpdateBuffer_FUN_0054f3a0(uchar *data_buffer,uint byte_count,uint initial_crc)

{
  uchar data_byte;
  uint uVar1;
  
  uVar1 = 0;
  if (byte_count != 0) {
    do {
      data_byte = *data_buffer;
      data_buffer = data_buffer + 1;
      uVar1 = uVar1 + 1;
      initial_crc = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(initial_crc,data_byte);
    } while (uVar1 < byte_count);
  }
  return initial_crc;
}


// Assembly code:
// 0054f3a0: PUSH EBX
//   Label: engine_pod.cpp_crc32UpdateBuffer_FUN_0054f3a0
// 0054f3a1: PUSH ESI
// 0054f3a2: PUSH EDI
// 0054f3a3: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0054f3a7: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0054f3ab: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0054f3af: XOR EBX,EBX
// 0054f3b1: TEST EDI,EDI
// 0054f3b3: JBE 0x0054f3d0
//   XREF to: 0054f3d0 (CONDITIONAL_JUMP)
// 0054f3b5: XOR EDX,EDX
//   Label: LAB_0054f3b5
// 0054f3b7: MOV DL,byte ptr [ESI]
// 0054f3b9: PUSH EDX
// 0054f3ba: PUSH EAX
// 0054f3bb: INC ESI
// 0054f3bc: INC EBX
// 0054f3bd: CALL engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0
//   XREF to: 0054f2e0 (UNCONDITIONAL_CALL)
// 0054f3c2: ADD ESP,0x8
// 0054f3c5: CMP EBX,EDI
// 0054f3c7: JC 0x0054f3b5
//   XREF to: 0054f3b5 (CONDITIONAL_JUMP)
// 0054f3c9: LEA EAX,[EAX]
// 0054f3cf: NOP
// 0054f3d0: POP EDI
//   Label: LAB_0054f3d0
// 0054f3d1: POP ESI
// 0054f3d2: POP EBX
// 0054f3d3: RET
