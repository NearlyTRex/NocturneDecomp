// Name: crt_stdio.c_DetectDeviceAndSetBuffering_FUN_00608ee0
// Address: 00608ee0
// Address Range: [[00608ee0, 00608f12]]
// Convention: __cdecl
// Signature: void crt_stdio.c_DetectDeviceAndSetBuffering_FUN_00608ee0(FILE * file)
// Cross-references:
//   crt_stdio.c_InitializeFileBuffer_FUN_006027e0 (006027e0) at 006027e7 [UNCONDITIONAL_CALL]
//   crt_stdio.c_OpenFileAndInitialize_FUN_0060190c (0060190c) at 00601a0f [UNCONDITIONAL_CALL]
//   crt_stdio.c_setvbuf_FUN_00601490 (00601490) at 006014fa [UNCONDITIONAL_CALL]
// Function calls:
//   crt_io.c_IsSpecialDevice_FUN_0060c270

#include "nocturne.h"

void __cdecl crt_stdio_c_DetectDeviceAndSetBuffering_FUN_00608ee0(FILE *file)

{
  byte bVar1;
  int iVar2;
  
  if ((file->_flag & 0x2000) == 0) {
    iVar2 = crt_io_c_IsSpecialDevice_FUN_0060c270(file->_handle);
    if (iVar2 != 0) {
      bVar1 = *(byte *)((int)&file->_flag + 1);
      *(byte *)((int)&file->_flag + 1) = bVar1 | 0x20;
      if ((bVar1 & 7) == 0) {
        *(byte *)((int)&file->_flag + 1) = bVar1 | 0x22;
      }
    }
  }
  return;
}


// Assembly code:
// 00608ee0: PUSH EBX
//   Label: crt_stdio.c_DetectDeviceAndSetBuffering_FUN_00608ee0
// 00608ee1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00608ee5: TEST byte ptr [EBX + 0xd],0x20
// 00608ee9: JNZ 0x00608f11
//   XREF to: 00608f11 (CONDITIONAL_JUMP)
// 00608eeb: MOV EDX,dword ptr [EBX + 0x10]
// 00608eee: PUSH EDX
// 00608eef: CALL crt_io.c_IsSpecialDevice_FUN_0060c270
//   XREF to: 0060c270 (UNCONDITIONAL_CALL)
// 00608ef4: ADD ESP,0x4
// 00608ef7: TEST EAX,EAX
// 00608ef9: JZ 0x00608f11
//   XREF to: 00608f11 (CONDITIONAL_JUMP)
// 00608efb: MOV DL,byte ptr [EBX + 0xd]
// 00608efe: OR DL,0x20
// 00608f01: MOV byte ptr [EBX + 0xd],DL
// 00608f04: TEST DL,0x7
// 00608f07: JNZ 0x00608f11
//   XREF to: 00608f11 (CONDITIONAL_JUMP)
// 00608f09: MOV CL,DL
// 00608f0b: OR CL,0x2
// 00608f0e: MOV byte ptr [EBX + 0xd],CL
// 00608f11: POP EBX
//   Label: LAB_00608f11
// 00608f12: RET
