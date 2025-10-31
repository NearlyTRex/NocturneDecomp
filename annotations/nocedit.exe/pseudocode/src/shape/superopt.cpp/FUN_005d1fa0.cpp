// Name: shape_superopt.cpp_FUN_005d1fa0
// Address: 005d1fa0
// Address Range: [[005d1fa0, 005d1fe2]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d1fa0()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d1fa0(undefined4 param_1) */

double shape_superopt_cpp_FUN_005d1fa0(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  
  iVar2 = in_stack_00000004[1] * 0x38;
  iVar1 = *(int *)(*in_stack_00000004 + 4);
  return -(*(double *)(iVar2 + 0x10 + iVar1) * *(double *)(in_stack_00000004 + 0x14) +
          *(double *)(iVar2 + iVar1) * *(double *)(in_stack_00000004 + 0x10) +
          *(double *)(iVar2 + 8 + iVar1) * *(double *)(in_stack_00000004 + 0x12));
}


// Assembly code:
// 005d1fa0: SUB ESP,0x8
//   Label: shape_superopt.cpp_FUN_005d1fa0
// 005d1fa3: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d1fa7: MOV EAX,dword ptr [ECX + 0x4]
// 005d1faa: SHL EAX,0x3
// 005d1fad: MOV EDX,EAX
// 005d1faf: SHL EAX,0x3
// 005d1fb2: SUB EAX,EDX
// 005d1fb4: MOV EDX,EAX
// 005d1fb6: MOV EAX,dword ptr [ECX]
// 005d1fb8: MOV EAX,dword ptr [EAX + 0x4]
// 005d1fbb: FLD double ptr [EDX + EAX*0x1 + 0x8]
// 005d1fbf: FMUL double ptr [ECX + 0x48]
// 005d1fc2: FLD double ptr [EDX + EAX*0x1]
// 005d1fc5: FMUL double ptr [ECX + 0x40]
// 005d1fc8: FADDP
// 005d1fca: FLD double ptr [EDX + EAX*0x1 + 0x10]
// 005d1fce: FMUL double ptr [ECX + 0x50]
// 005d1fd1: FADDP
// 005d1fd3: FCHS
// 005d1fd5: FSTP double ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005d1fd8: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005d1fdb: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 005d1fdf: ADD ESP,0x8
// 005d1fe2: RET
