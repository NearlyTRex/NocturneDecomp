// Name: crt_unknown.c_FUN_00608e14
// Address: 00608e14
// Address Range: [[00608e14, 00608e47]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00608e14()
// Cross-references:
//   crt_math.c_atan2_FUN_006013b1 (006013b1) at 006013c0 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_math.c_atan2_FUN_0060c440

#include "nocturne.h"

undefined4 crt_unknown_c_FUN_00608e14(void)

{
  float10 in_ST0;
  float10 in_ST1;
  undefined4 unaff_retaddr;
  
  crt_math_c_atan2_FUN_0060c440(in_ST0,in_ST1);
  return unaff_retaddr;
}


// Assembly code:
// 00608e14: PUSH EAX
//   Label: crt_unknown.c_FUN_00608e14
// 00608e15: SUB ESP,0x76
// 00608e18: FSTP extended double ptr [ESP + 0x6c]
//   XREF to: Stack[-0xe] (WRITE)
// 00608e1c: FNSAVE [ESP]
//   XREF to: Stack[-0x7a] (DATA)
// 00608e1f: FLD extended double ptr [ESP + 0x1c]
//   XREF to: Stack[-0x5e] (READ)
// 00608e23: FLD extended double ptr [ESP + 0x6c]
//   XREF to: Stack[-0xe] (READ)
// 00608e27: CALL crt_math.c_atan2_FUN_0060c440
//   XREF to: 0060c440 (UNCONDITIONAL_CALL)
// 00608e2c: FNSTSW AX
// 00608e2e: FSTP extended double ptr [ESP + 0x1c]
//   XREF to: Stack[-0x5e] (WRITE)
// 00608e32: AND AX,0xff
// 00608e36: OR AX,word ptr [ESP + 0x4]
//   XREF to: Stack[-0x76] (READ)
// 00608e3b: MOV word ptr [ESP + 0x4],AX
//   XREF to: Stack[-0x76] (WRITE)
// 00608e40: FRSTOR [ESP]
//   XREF to: Stack[-0x7a] (DATA)
// 00608e43: ADD ESP,0x76
// 00608e46: POP EAX
// 00608e47: RET
