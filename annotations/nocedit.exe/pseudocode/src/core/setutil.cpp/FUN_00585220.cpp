// Name: core_setutil.cpp_FUN_00585220
// Address: 00585220
// Address Range: [[00585220, 00585239]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_FUN_00585220(void)
// Globals:
//   double DOUBLE_0064659d = 65536
// Function calls:
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl core_setutil_cpp_FUN_00585220(void)

{
  undefined4 in_EDX;
  float10 fVar1;
  double dVar2;
  undefined4 in_stack_00000004;
  float in_stack_00000008;
  
  fVar1 = (float10)in_stack_00000008 * (float10)DOUBLE_0064659d;
  dVar2 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,in_stack_00000004));
  *(int *)(SUB84(dVar2,0) + 0x2fa4) = (int)ROUND(fVar1);
  return;
}


// Assembly code:
// 00585220: FLD float ptr [ESP + 0x8]
//   Label: core_setutil.cpp_FUN_00585220
//   XREF to: Stack[0x8] (READ)
// 00585224: FMUL double ptr [0x0064659d]
//   XREF to: 0064659d (READ)
// 0058522a: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0058522e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00585233: FISTP dword ptr [EAX + 0x2fa4]
// 00585239: RET
