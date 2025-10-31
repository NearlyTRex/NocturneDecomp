// Name: crt_unknown.c_FUN_0060fa80
// Address: 0060fa80
// Address Range: [[0060fa80, 0060fa8a]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060fa80()
// Cross-references:
//   crt_unknown.c_FUN_0060eb4b (0060eb4b) at 0060eb50 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060eb57 (0060eb57) at 0060eb62 [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_FUN_0068502b = 00604824
// Function calls:
//   crt_unknown.c_FUN_00604824

#include "nocturne.h"

void crt_unknown_c_FUN_0060fa80(void)

{
  (*(code *)PTR_FUN_0068502b)();
  return;
}


// Assembly code:
// 0060fa80: PUSH EAX
//   Label: crt_unknown.c_FUN_0060fa80
// 0060fa81: CALL dword ptr [PTR_FUN_0068502b]
//   XREF to: 00604824 (COMPUTED_CALL)
//   XREF to: 0068502b (READ)
// 0060fa87: ADD ESP,0x4
// 0060fa8a: RET
