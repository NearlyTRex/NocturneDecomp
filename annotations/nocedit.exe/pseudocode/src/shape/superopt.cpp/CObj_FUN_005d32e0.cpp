// Name: shape_superopt.cpp_CObj_FUN_005d32e0
// Address: 005d32e0
// Address Range: [[005d32e0, 005d3313]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_FUN_005d32e0(CObj * this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_FUN_005d32e0(CObj *this_ptr)

{
  int iVar1;
  int in_stack_00000008;
  
  iVar1 = (**(code **)((int)this_ptr->vtable + 0x68))();
  if (iVar1 != 0) {
    return (in_stack_00000008 - (int)this_ptr->vertex_data) / 0x38;
  }
  return -1;
}


// Assembly code:
// 005d32e0: PUSH EBX
//   Label: shape_superopt.cpp_CObj_FUN_005d32e0
// 005d32e1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005d32e5: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005d32e9: PUSH EDX
// 005d32ea: MOV EAX,dword ptr [EBX + 0x18]
// 005d32ed: PUSH EBX
// 005d32ee: CALL dword ptr [EAX + 0x68]
// 005d32f1: ADD ESP,0x8
// 005d32f4: TEST EAX,EAX
// 005d32f6: JZ 0x005d330d
//   XREF to: 005d330d (CONDITIONAL_JUMP)
// 005d32f8: MOV EDX,dword ptr [ESP + 0xc]
// 005d32fc: SUB EDX,dword ptr [EBX + 0x4]
// 005d32ff: MOV ECX,0x38
// 005d3304: MOV EAX,EDX
// 005d3306: SAR EDX,0x1f
// 005d3309: IDIV ECX
// 005d330b: POP EBX
// 005d330c: RET
// 005d330d: MOV EAX,0xffffffff
//   Label: LAB_005d330d
// 005d3312: POP EBX
// 005d3313: RET
