// Name: crt_unknown.c_staticFinal_FUN_00608fc0
// Address: 00608fc0
// Address Range: [[00608fc0, 00608fce]]
// Convention: unknown
// Signature: undefined crt_unknown.c_staticFinal_FUN_00608fc0()
// Function calls:
//   crt_unknown.c_FUN_00608fdc
//   crt_unknown.c_FUN_006093e8

#include "nocturne.h"

void crt_unknown_c_staticFinal_FUN_00608fc0(void)

{
  crt_unknown_c_FUN_00608fdc();
  crt_unknown_c_FUN_006093e8();
  return;
}


// Assembly code:
// 00608fc0: PUSH 0x0
//   Label: crt_unknown.c_staticFinal_FUN_00608fc0
// 00608fc2: CALL crt_unknown.c_FUN_00608fdc
//   XREF to: 00608fdc (UNCONDITIONAL_CALL)
// 00608fc7: ADD ESP,0x4
// 00608fca: JMP 0x006093e8
//   XREF to: 006093e8 (UNCONDITIONAL_CALL)
