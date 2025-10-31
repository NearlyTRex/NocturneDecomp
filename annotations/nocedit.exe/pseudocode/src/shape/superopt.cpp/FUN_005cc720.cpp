// Name: shape_superopt.cpp_FUN_005cc720
// Address: 005cc720
// Address Range: [[005cc720, 005cc7b2]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005cc720()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005cc720(undefined4 param_1, undefined4 param_2) */

void shape_superopt_cpp_FUN_005cc720(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  double *in_stack_00000008;
  
  iVar1 = *(int *)(*in_stack_00000004 + 4);
  iVar2 = in_stack_00000004[1] * 0x38;
  *(double *)(iVar1 + iVar2) = *in_stack_00000008 + *(double *)(iVar1 + iVar2);
  *(double *)(iVar1 + 8 + iVar2) = in_stack_00000008[1] + *(double *)(iVar1 + 8 + iVar2);
  *(double *)(iVar1 + 0x10 + iVar2) = in_stack_00000008[2] + *(double *)(iVar1 + 0x10 + iVar2);
  iVar2 = in_stack_00000004[2] * 0x38;
  *(double *)(iVar1 + iVar2) = *in_stack_00000008 + *(double *)(iVar1 + iVar2);
  *(double *)(iVar1 + 8 + iVar2) = in_stack_00000008[1] + *(double *)(iVar1 + 8 + iVar2);
  *(double *)(iVar1 + 0x10 + iVar2) = in_stack_00000008[2] + *(double *)(iVar1 + 0x10 + iVar2);
  iVar2 = in_stack_00000004[3] * 0x38;
  *(double *)(iVar1 + iVar2) = *in_stack_00000008 + *(double *)(iVar1 + iVar2);
  *(double *)(iVar1 + 8 + iVar2) = in_stack_00000008[1] + *(double *)(iVar1 + 8 + iVar2);
  *(double *)(iVar1 + 0x10 + iVar2) = in_stack_00000008[2] + *(double *)(iVar1 + 0x10 + iVar2);
  return;
}


// Assembly code:
// 005cc720: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005cc720
// 005cc721: PUSH ESI
// 005cc722: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005cc726: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005cc72a: MOV EAX,dword ptr [ESI + 0x4]
// 005cc72d: SHL EAX,0x3
// 005cc730: MOV EBX,dword ptr [ESI]
// 005cc732: MOV ECX,EAX
// 005cc734: SHL EAX,0x3
// 005cc737: MOV EBX,dword ptr [EBX + 0x4]
// 005cc73a: SUB EAX,ECX
// 005cc73c: FLD double ptr [EDX]
// 005cc73e: FADD double ptr [EBX + EAX*0x1]
// 005cc741: FSTP double ptr [EBX + EAX*0x1]
// 005cc744: FLD double ptr [EDX + 0x8]
// 005cc747: FADD double ptr [EBX + EAX*0x1 + 0x8]
// 005cc74b: FSTP double ptr [EBX + EAX*0x1 + 0x8]
// 005cc74f: FLD double ptr [EDX + 0x10]
// 005cc752: FADD double ptr [EBX + EAX*0x1 + 0x10]
// 005cc756: FSTP double ptr [EBX + EAX*0x1 + 0x10]
// 005cc75a: MOV EAX,dword ptr [ESI + 0x8]
// 005cc75d: SHL EAX,0x3
// 005cc760: MOV ECX,EAX
// 005cc762: SHL EAX,0x3
// 005cc765: SUB EAX,ECX
// 005cc767: FLD double ptr [EDX]
// 005cc769: FADD double ptr [EBX + EAX*0x1]
// 005cc76c: FSTP double ptr [EBX + EAX*0x1]
// 005cc76f: FLD double ptr [EDX + 0x8]
// 005cc772: FADD double ptr [EBX + EAX*0x1 + 0x8]
// 005cc776: FSTP double ptr [EBX + EAX*0x1 + 0x8]
// 005cc77a: FLD double ptr [EDX + 0x10]
// 005cc77d: FADD double ptr [EBX + EAX*0x1 + 0x10]
// 005cc781: FSTP double ptr [EBX + EAX*0x1 + 0x10]
// 005cc785: MOV EAX,dword ptr [ESI + 0xc]
// 005cc788: SHL EAX,0x3
// 005cc78b: MOV ECX,EAX
// 005cc78d: SHL EAX,0x3
// 005cc790: SUB EAX,ECX
// 005cc792: FLD double ptr [EDX]
// 005cc794: FADD double ptr [EBX + EAX*0x1]
// 005cc797: FSTP double ptr [EBX + EAX*0x1]
// 005cc79a: FLD double ptr [EDX + 0x8]
// 005cc79d: FADD double ptr [EBX + EAX*0x1 + 0x8]
// 005cc7a1: FSTP double ptr [EBX + EAX*0x1 + 0x8]
// 005cc7a5: FLD double ptr [EDX + 0x10]
// 005cc7a8: FADD double ptr [EBX + EAX*0x1 + 0x10]
// 005cc7ac: FSTP double ptr [EBX + EAX*0x1 + 0x10]
// 005cc7b0: POP ESI
// 005cc7b1: POP EBX
// 005cc7b2: RET
