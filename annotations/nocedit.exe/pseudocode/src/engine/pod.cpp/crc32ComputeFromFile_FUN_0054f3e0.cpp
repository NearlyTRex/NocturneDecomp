// Name: engine_pod.cpp_crc32ComputeFromFile_FUN_0054f3e0
// Address: 0054f3e0
// Address Range: [[0054f3e0, 0054f487]]
// Convention: __cdecl
// Signature: uint engine_pod.cpp_crc32ComputeFromFile_FUN_0054f3e0(FILE * file_stream, uint total_bytes)
// Globals:
//   char[65536] g_FileIOBuffer
//   undefined4 DAT_030d5091
// Function calls:
//   crt_stdio.c_fread_FUN_005fd990
//   engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0

#include "nocturne.h"

uint __cdecl engine_pod_cpp_crc32ComputeFromFile_FUN_0054f3e0(FILE *file_stream,uint total_bytes)

{
  uchar uVar1;
  uint uVar2;
  uint current_crc;
  char *pcVar3;
  
  current_crc = 0xffffffff;
  if (0xffff < (int)total_bytes) {
    do {
      pcVar3 = g_FileIOBuffer;
      uVar2 = 0;
      crt_stdio_c_fread_FUN_005fd990(g_FileIOBuffer,0x10000,1,file_stream);
      do {
        uVar1 = *pcVar3;
        pcVar3 = (char *)((uchar *)pcVar3 + 1);
        uVar2 = uVar2 + 1;
        current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(current_crc,uVar1);
      } while (uVar2 < 0x10000);
      total_bytes = total_bytes - 0x10000;
    } while (0xffff < (int)total_bytes);
  }
  pcVar3 = g_FileIOBuffer;
  uVar2 = 0;
  crt_stdio_c_fread_FUN_005fd990(g_FileIOBuffer,total_bytes,1,file_stream);
  if (total_bytes != 0) {
    do {
      uVar1 = *pcVar3;
      pcVar3 = (char *)((uchar *)pcVar3 + 1);
      uVar2 = uVar2 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(current_crc,uVar1);
    } while (uVar2 < total_bytes);
  }
  return current_crc;
}


// Assembly code:
// 0054f3e0: PUSH EBX
//   Label: engine_pod.cpp_crc32ComputeFromFile_FUN_0054f3e0
// 0054f3e1: PUSH ESI
// 0054f3e2: PUSH EDI
// 0054f3e3: PUSH EBP
// 0054f3e4: SUB ESP,0x4
// 0054f3e7: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0054f3eb: MOV EBP,0xffffffff
// 0054f3f0: CMP EDI,0x10000
// 0054f3f6: JL 0x0054f442
//   XREF to: 0054f442 (CONDITIONAL_JUMP)
// 0054f3f8: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_0054f3f8
//   XREF to: Stack[0x4] (READ)
// 0054f3fc: PUSH EDX
// 0054f3fd: PUSH 0x1
// 0054f3ff: PUSH 0x10000
// 0054f404: PUSH 0x30d5090
//   XREF to: 030d5090 (DATA)
// 0054f409: MOV ESI,0x30d5090
//   XREF to: 030d5090 (DATA)
// 0054f40e: XOR EBX,EBX
// 0054f410: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0054f415: ADD ESP,0x10
// 0054f418: MOV EAX,EBP
// 0054f41a: XOR EDX,EDX
//   Label: LAB_0054f41a
// 0054f41c: MOV DL,byte ptr [ESI]
//   XREF to: 030d5090 (READ)
//   XREF to: 030d5091 (READ)
// 0054f41e: PUSH EDX
// 0054f41f: PUSH EAX
// 0054f420: INC ESI
// 0054f421: INC EBX
// 0054f422: CALL engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0
//   XREF to: 0054f2e0 (UNCONDITIONAL_CALL)
// 0054f427: ADD ESP,0x8
// 0054f42a: CMP EBX,0x10000
// 0054f430: JC 0x0054f41a
//   XREF to: 0054f41a (CONDITIONAL_JUMP)
// 0054f432: SUB EDI,0x10000
// 0054f438: MOV EBP,EAX
// 0054f43a: CMP EDI,0x10000
// 0054f440: JGE 0x0054f3f8
//   XREF to: 0054f3f8 (CONDITIONAL_JUMP)
// 0054f442: MOV ECX,dword ptr [ESP + 0x18]
//   Label: LAB_0054f442
//   XREF to: Stack[0x4] (READ)
// 0054f446: PUSH ECX
// 0054f447: PUSH 0x1
// 0054f449: PUSH EDI
// 0054f44a: PUSH 0x30d5090
//   XREF to: 030d5090 (DATA)
// 0054f44f: MOV EBX,0x30d5090
//   XREF to: 030d5090 (DATA)
// 0054f454: XOR ESI,ESI
// 0054f456: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0054f45b: ADD ESP,0x10
// 0054f45e: MOV EAX,EBP
// 0054f460: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x14] (DATA)
// 0054f463: TEST EDI,EDI
// 0054f465: JBE 0x0054f480
//   XREF to: 0054f480 (CONDITIONAL_JUMP)
// 0054f467: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0054f46a: XOR EDX,EDX
//   Label: LAB_0054f46a
// 0054f46c: MOV DL,byte ptr [EBX]
//   XREF to: 030d5090 (READ)
//   XREF to: 030d5091 (READ)
// 0054f46e: PUSH EDX
// 0054f46f: PUSH EAX
// 0054f470: INC EBX
// 0054f471: INC ESI
// 0054f472: CALL engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0
//   XREF to: 0054f2e0 (UNCONDITIONAL_CALL)
// 0054f477: ADD ESP,0x8
// 0054f47a: CMP ESI,EDI
// 0054f47c: JC 0x0054f46a
//   XREF to: 0054f46a (CONDITIONAL_JUMP)
// 0054f47e: MOV EAX,EAX
// 0054f480: ADD ESP,0x4
//   Label: LAB_0054f480
// 0054f483: POP EBP
// 0054f484: POP EDI
// 0054f485: POP ESI
// 0054f486: POP EBX
// 0054f487: RET
