// Name: shape_superopt.cpp_CPoly_FUN_005cc720
// Address: 005cc720
// Address Range: [[005cc720, 005cc7b2]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_FUN_005cc720(CPoly * this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_FUN_005cc720(CPoly *this_ptr)

{
  int iVar1;
  CVert *pCVar2;
  double *in_stack_00000008;
  
  iVar1 = this_ptr->vertex_idx_0;
  pCVar2 = this_ptr->parent_obj->vertex_data;
  pCVar2[iVar1].position.impl.x = *in_stack_00000008 + pCVar2[iVar1].position.impl.x;
  pCVar2[iVar1].position.impl.y = in_stack_00000008[1] + pCVar2[iVar1].position.impl.y;
  pCVar2[iVar1].position.impl.z = in_stack_00000008[2] + pCVar2[iVar1].position.impl.z;
  iVar1 = this_ptr->vertex_idx_1;
  pCVar2[iVar1].position.impl.x = *in_stack_00000008 + pCVar2[iVar1].position.impl.x;
  pCVar2[iVar1].position.impl.y = in_stack_00000008[1] + pCVar2[iVar1].position.impl.y;
  pCVar2[iVar1].position.impl.z = in_stack_00000008[2] + pCVar2[iVar1].position.impl.z;
  iVar1 = this_ptr->vertex_idx_2;
  pCVar2[iVar1].position.impl.x = *in_stack_00000008 + pCVar2[iVar1].position.impl.x;
  pCVar2[iVar1].position.impl.y = in_stack_00000008[1] + pCVar2[iVar1].position.impl.y;
  pCVar2[iVar1].position.impl.z = in_stack_00000008[2] + pCVar2[iVar1].position.impl.z;
  return;
}


// Assembly code:
// 005cc720: PUSH EBX
//   Label: shape_superopt.cpp_CPoly_FUN_005cc720
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
