// Name: shape_superopt.cpp_CObj_FUN_005d30c0
// Address: 005d30c0
// Address Range: [[005d30c0, 005d30e9]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_FUN_005d30c0(CObj * this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_FUN_005d30c0(CObj *this_ptr)

{
  int iVar1;
  
  iVar1 = (**(code **)((int)this_ptr->vtable + 0x60))();
  if (iVar1 == -1) {
    return 0;
  }
  iVar1 = (**(code **)((int)this_ptr->vtable + 0x48))();
  return iVar1;
}


// Assembly code:
// 005d30c0: PUSH EBX
//   Label: shape_superopt.cpp_CObj_FUN_005d30c0
// 005d30c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005d30c5: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005d30c9: PUSH EDX
// 005d30ca: MOV EAX,dword ptr [EBX + 0x18]
// 005d30cd: PUSH EBX
// 005d30ce: CALL dword ptr [EAX + 0x60]
// 005d30d1: ADD ESP,0x8
// 005d30d4: CMP EAX,-0x1
// 005d30d7: JNZ 0x005d30dd
//   XREF to: 005d30dd (CONDITIONAL_JUMP)
// 005d30d9: XOR EAX,EAX
// 005d30db: POP EBX
// 005d30dc: RET
// 005d30dd: PUSH EAX
//   Label: LAB_005d30dd
// 005d30de: MOV EDX,dword ptr [EBX + 0x18]
// 005d30e1: PUSH EBX
// 005d30e2: CALL dword ptr [EDX + 0x48]
// 005d30e5: ADD ESP,0x8
// 005d30e8: POP EBX
// 005d30e9: RET
