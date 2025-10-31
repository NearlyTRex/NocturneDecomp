// Name: crt_io.c_ConvertCreationDisposition_FUN_0060c894
// Address: 0060c894
// Address Range: [[0060c894, 0060c8f3]]
// Convention: __cdecl
// Signature: void crt_io.c_ConvertCreationDisposition_FUN_0060c894(DWORD mode_flags, DWORD * creation_disposition)
// Cross-references:
//   crt_stdio.c_CreateFileImpl_FUN_006090a0 (006090a0) at 006090f3 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
crt_io_c_ConvertCreationDisposition_FUN_0060c894(DWORD mode_flags,DWORD *creation_disposition)

{
  uint uVar1;
  
  uVar1 = mode_flags & 0x70;
  if (uVar1 < 0x20) {
    if (uVar1 != 0) {
      if (uVar1 != 0x10) {
        return;
      }
      *creation_disposition = 0;
      return;
    }
    *creation_disposition = 1;
    if ((mode_flags & 7) == 0) {
      *(byte *)creation_disposition = (byte)*creation_disposition | 2;
      return;
    }
  }
  else {
    if (uVar1 < 0x21) {
      *creation_disposition = 1;
      return;
    }
    if (0x2f < uVar1) {
      if (uVar1 < 0x31) {
        *creation_disposition = 2;
        return;
      }
      if (uVar1 != 0x40) {
        return;
      }
      *creation_disposition = 3;
    }
  }
  return;
}


// Assembly code:
// 0060c894: PUSH EBX
//   Label: crt_io.c_ConvertCreationDisposition_FUN_0060c894
// 0060c895: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060c899: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0060c89d: MOV EAX,EBX
// 0060c89f: AND EAX,0x70
// 0060c8a2: AND EBX,0x7
// 0060c8a5: CMP EAX,0x20
// 0060c8a8: JC 0x0060c8ba
//   XREF to: 0060c8ba (CONDITIONAL_JUMP)
// 0060c8aa: JBE 0x0060c8e4
//   XREF to: 0060c8e4 (CONDITIONAL_JUMP)
// 0060c8ac: CMP EAX,0x30
// 0060c8af: JC 0x0060c8f2
//   XREF to: 0060c8f2 (CONDITIONAL_JUMP)
// 0060c8b1: JBE 0x0060c8dc
//   XREF to: 0060c8dc (CONDITIONAL_JUMP)
// 0060c8b3: CMP EAX,0x40
// 0060c8b6: JZ 0x0060c8ec
//   XREF to: 0060c8ec (CONDITIONAL_JUMP)
// 0060c8b8: POP EBX
// 0060c8b9: RET
// 0060c8ba: TEST EAX,EAX
//   Label: LAB_0060c8ba
// 0060c8bc: JBE 0x0060c8c5
//   XREF to: 0060c8c5 (CONDITIONAL_JUMP)
// 0060c8be: CMP EAX,0x10
// 0060c8c1: JZ 0x0060c8d4
//   XREF to: 0060c8d4 (CONDITIONAL_JUMP)
// 0060c8c3: POP EBX
// 0060c8c4: RET
// 0060c8c5: MOV dword ptr [EDX],0x1
//   Label: LAB_0060c8c5
// 0060c8cb: TEST EBX,EBX
// 0060c8cd: JNZ 0x0060c8f2
//   XREF to: 0060c8f2 (CONDITIONAL_JUMP)
// 0060c8cf: OR byte ptr [EDX],0x2
// 0060c8d2: POP EBX
// 0060c8d3: RET
// 0060c8d4: MOV dword ptr [EDX],0x0
//   Label: LAB_0060c8d4
// 0060c8da: POP EBX
// 0060c8db: RET
// 0060c8dc: MOV dword ptr [EDX],0x2
//   Label: LAB_0060c8dc
// 0060c8e2: POP EBX
// 0060c8e3: RET
// 0060c8e4: MOV dword ptr [EDX],0x1
//   Label: LAB_0060c8e4
// 0060c8ea: POP EBX
// 0060c8eb: RET
// 0060c8ec: MOV dword ptr [EDX],0x3
//   Label: LAB_0060c8ec
// 0060c8f2: POP EBX
//   Label: LAB_0060c8f2
// 0060c8f3: RET
