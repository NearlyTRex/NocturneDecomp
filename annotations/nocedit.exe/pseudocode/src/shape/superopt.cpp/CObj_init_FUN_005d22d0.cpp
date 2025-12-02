// Name: shape_superopt.cpp_CObj_init_FUN_005d22d0
// Address: 005d22d0
// Address Range: [[005d22d0, 005d231b]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_init_FUN_005d22d0(CObj * this_ptr, int poly_count, int vertex_count)
// Cross-references:
//   shape_superopt.cpp_CObj_ctor_FUN_005d2230 (005d2230) at 005d2250 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d789a [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl
shape_superopt_cpp_CObj_init_FUN_005d22d0(CObj *this_ptr,int poly_count,int vertex_count)

{
  int iVar1;
  int in_stack_00000014;
  int in_stack_0000002c;
  
  (*this_ptr->vtable->free)(this_ptr);
  if (in_stack_00000014 != 0) {
    iVar1 = (*this_ptr->vtable->allocatePolygons)(this_ptr,in_stack_00000014);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (in_stack_0000002c != 0) {
    iVar1 = (*this_ptr->vtable->allocateVertices)(this_ptr,in_stack_0000002c);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


// Assembly code:
// 005d22d0: PUSH EBX
//   Label: shape_superopt.cpp_CObj_init_FUN_005d22d0
// 005d22d1: PUSH ESI
// 005d22d2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d22d6: PUSH EBX
// 005d22d7: MOV EAX,dword ptr [EBX + 0x18]
// 005d22da: CALL dword ptr [EAX + 0x1c]
// 005d22dd: ADD ESP,0x4
// 005d22e0: MOV EDX,dword ptr [ESP + 0x10]
// 005d22e4: TEST EDX,EDX
// 005d22e6: JNZ 0x005d22f8
//   XREF to: 005d22f8 (CONDITIONAL_JUMP)
// 005d22e8: MOV ESI,dword ptr [ESP + 0x14]
//   Label: LAB_005d22e8
// 005d22ec: TEST ESI,ESI
// 005d22ee: JNZ 0x005d230a
//   XREF to: 005d230a (CONDITIONAL_JUMP)
// 005d22f0: MOV EAX,0x1
//   Label: LAB_005d22f0
// 005d22f5: POP ESI
// 005d22f6: POP EBX
// 005d22f7: RET
// 005d22f8: PUSH EDX
//   Label: LAB_005d22f8
// 005d22f9: MOV EAX,dword ptr [EBX + 0x18]
// 005d22fc: PUSH EBX
// 005d22fd: CALL dword ptr [EAX + 0xc]
// 005d2300: ADD ESP,0x8
// 005d2303: TEST EAX,EAX
// 005d2305: JNZ 0x005d22e8
//   XREF to: 005d22e8 (CONDITIONAL_JUMP)
// 005d2307: POP ESI
// 005d2308: POP EBX
// 005d2309: RET
// 005d230a: PUSH ESI
//   Label: LAB_005d230a
// 005d230b: MOV EAX,dword ptr [EBX + 0x18]
// 005d230e: PUSH EBX
// 005d230f: CALL dword ptr [EAX + 0x14]
// 005d2312: ADD ESP,0x8
// 005d2315: TEST EAX,EAX
// 005d2317: JNZ 0x005d22f0
//   XREF to: 005d22f0 (CONDITIONAL_JUMP)
// 005d2319: POP ESI
// 005d231a: POP EBX
// 005d231b: RET
