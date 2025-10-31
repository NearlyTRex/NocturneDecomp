// Name: crt_unknown.c_FUN_0060b07a
// Address: 0060b07a
// Address Range: [[0060b07a, 0060b0c7]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060b07a()
// Cross-references:
//   crt_unknown.c_FUN_00603dc8 (00603dc8) at 00603e45 [UNCONDITIONAL_CALL]

#include "nocturne.h"

undefined4 crt_unknown_c_FUN_0060b07a(void)

{
  int *in_stack_00000004;
  
  if ((*(ushort *)(in_stack_00000004 + 2) & 0x7fff) == 0x7fff) {
    if ((in_stack_00000004[1] == -0x80000000) && (*in_stack_00000004 == 0)) {
      return 3;
    }
    return 2;
  }
  if ((*(ushort *)(in_stack_00000004 + 2) & 0x7fff) != 0) {
    return 1;
  }
  if ((in_stack_00000004[1] == 0) && (*in_stack_00000004 == 0)) {
    return 0;
  }
  return 4;
}


// Assembly code:
// 0060b07a: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_unknown.c_FUN_0060b07a
//   XREF to: Stack[0x4] (READ)
// 0060b07e: MOV DX,word ptr [EAX + 0x8]
// 0060b082: AND DH,0x7f
// 0060b085: CMP DX,0x7fff
// 0060b08a: JNZ 0x0060b0a6
//   XREF to: 0060b0a6 (CONDITIONAL_JUMP)
// 0060b08c: CMP dword ptr [EAX + 0x4],0x80000000
// 0060b093: JNZ 0x0060b0a0
//   XREF to: 0060b0a0 (CONDITIONAL_JUMP)
// 0060b095: CMP dword ptr [EAX],0x0
// 0060b098: JNZ 0x0060b0a0
//   XREF to: 0060b0a0 (CONDITIONAL_JUMP)
// 0060b09a: MOV EAX,0x3
// 0060b09f: RET
// 0060b0a0: MOV EAX,0x2
//   Label: LAB_0060b0a0
// 0060b0a5: RET
// 0060b0a6: TEST word ptr [EAX + 0x8],0x7fff
//   Label: LAB_0060b0a6
// 0060b0ac: JNZ 0x0060b0c2
//   XREF to: 0060b0c2 (CONDITIONAL_JUMP)
// 0060b0ae: CMP dword ptr [EAX + 0x4],0x0
// 0060b0b2: JNZ 0x0060b0bc
//   XREF to: 0060b0bc (CONDITIONAL_JUMP)
// 0060b0b4: CMP dword ptr [EAX],0x0
// 0060b0b7: JNZ 0x0060b0bc
//   XREF to: 0060b0bc (CONDITIONAL_JUMP)
// 0060b0b9: XOR EAX,EAX
// 0060b0bb: RET
// 0060b0bc: MOV EAX,0x4
//   Label: LAB_0060b0bc
// 0060b0c1: RET
// 0060b0c2: MOV EAX,0x1
//   Label: LAB_0060b0c2
// 0060b0c7: RET
