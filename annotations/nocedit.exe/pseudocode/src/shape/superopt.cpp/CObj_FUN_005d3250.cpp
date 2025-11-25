// Name: shape_superopt.cpp_CObj_FUN_005d3250
// Address: 005d3250
// Address Range: [[005d3250, 005d3279]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_FUN_005d3250(CObj * this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_FUN_005d3250(CObj *this_ptr)

{
  int iVar1;
  
  iVar1 = (**(code **)((int)this_ptr->vtable + 0x60))();
  if (iVar1 == -1) {
    return 0;
  }
  iVar1 = (**(code **)((int)this_ptr->vtable + 0x54))();
  return iVar1;
}


// Assembly code:
// 005d3250: PUSH EBX
//   Label: shape_superopt.cpp_CObj_FUN_005d3250
// 005d3251: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005d3255: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005d3259: PUSH EDX
// 005d325a: MOV EAX,dword ptr [EBX + 0x18]
// 005d325d: PUSH EBX
// 005d325e: CALL dword ptr [EAX + 0x60]
// 005d3261: ADD ESP,0x8
// 005d3264: CMP EAX,-0x1
// 005d3267: JNZ 0x005d326d
//   XREF to: 005d326d (CONDITIONAL_JUMP)
// 005d3269: XOR EAX,EAX
// 005d326b: POP EBX
// 005d326c: RET
// 005d326d: PUSH EAX
//   Label: LAB_005d326d
// 005d326e: MOV EDX,dword ptr [EBX + 0x18]
// 005d3271: PUSH EBX
// 005d3272: CALL dword ptr [EDX + 0x54]
// 005d3275: ADD ESP,0x8
// 005d3278: POP EBX
// 005d3279: RET
