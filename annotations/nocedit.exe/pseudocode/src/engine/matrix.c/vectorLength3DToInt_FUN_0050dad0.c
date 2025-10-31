// Name: engine_matrix.c_vectorLength3DToInt_FUN_0050dad0
// Address: 0050dad0
// Address Range: [[0050dad0, 0050dafb]]
// Convention: __cdecl
// Signature: int engine_matrix.c_vectorLength3DToInt_FUN_0050dad0(CVector3i * vector_ptr)
// Function calls:
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

int __cdecl engine_matrix_c_vectorLength3DToInt_FUN_0050dad0(CVector3i *vector_ptr)

{
  undefined4 in_EDX;
  float10 fVar1;
  
  fVar1 = SQRT((float10)vector_ptr->z * (float10)vector_ptr->z +
               (float10)vector_ptr->y * (float10)vector_ptr->y +
               (float10)vector_ptr->x * (float10)vector_ptr->x);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,vector_ptr));
  return (int)ROUND(fVar1);
}


// Assembly code:
// 0050dad0: SUB ESP,0x1c
//   Label: engine_matrix.c_vectorLength3DToInt_FUN_0050dad0
// 0050dad3: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0050dad7: FILD dword ptr [EAX]
// 0050dad9: FMUL ST0
// 0050dadb: FILD dword ptr [EAX + 0x4]
// 0050dade: FMUL ST0
// 0050dae0: FADDP
// 0050dae2: FILD dword ptr [EAX + 0x8]
// 0050dae5: FMUL ST0
// 0050dae7: FADDP
// 0050dae9: FSQRT
// 0050daeb: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050daf0: FISTP dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x4] (WRITE)
// 0050daf4: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x4] (READ)
// 0050daf8: ADD ESP,0x1c
// 0050dafb: RET
