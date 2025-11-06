// Name: core_bat.cpp_CBat_FUN_00414f00
// Address: 00414f00
// Address Range: [[00414f00, 00414fa2]]
// Convention: __cdecl
// Signature: void core_bat.cpp_CBat_FUN_00414f00(CBat * this_ptr)
// Globals:
//   double DOUBLE_00615426 = 0.25
//   CKeys* g_CKeysPtr = 02dcd7d4
//   void* g_CKeysPtr
// Function calls:
//   core_bat.cpp_FUN_00414ce0

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_FUN_00414f00(CBat *this_ptr)

{
  int iVar1;
  undefined4 uStack0000000c;
  undefined4 uStack00000020;
  float in_stack_0000002c;
  undefined4 uStack00000038;
  CBat *pCStack0000003c;
  float in_stack_00000040;
  
  (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
  (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
  uStack0000000c = 0x414f5c;
  iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x34);
  if (iVar1 != 0) {
    this_ptr->param = this_ptr->param + in_stack_0000002c;
  }
  uStack00000020 = 0x414f7f;
  iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x33);
  if (iVar1 != 0) {
    this_ptr->param = this_ptr->param - in_stack_00000040;
  }
  pCStack0000003c = this_ptr;
  uStack00000038 = 0x414f9b;
  core_bat_cpp_FUN_00414ce0();
  return;
}


// Assembly code:
// 00414f00: PUSH EBX
//   Label: core_bat.cpp_CBat_FUN_00414f00
// 00414f01: PUSH EBP
// 00414f02: MOV EBP,ESP
// 00414f04: SUB ESP,0x4
// 00414f07: AND ESP,0xfffffff8
// 00414f0a: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00414f0d: PUSH 0x2a
// 00414f0f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00414f14: MOV EDX,0x3f800000
// 00414f19: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00414f1a: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 00414f1e: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00414f20: CALL dword ptr [EDX]
// 00414f22: ADD ESP,0x8
// 00414f25: TEST EAX,EAX
// 00414f27: JZ 0x00414f30
//   XREF to: 00414f30 (CONDITIONAL_JUMP)
// 00414f29: MOV dword ptr [ESP],0x40800000
// 00414f30: PUSH 0x38
//   Label: LAB_00414f30
// 00414f32: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00414f37: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00414f38: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00414f3a: CALL dword ptr [EDX]
// 00414f3c: ADD ESP,0x8
// 00414f3f: TEST EAX,EAX
// 00414f41: JZ 0x00414f4f
//   XREF to: 00414f4f (CONDITIONAL_JUMP)
// 00414f43: FLD float ptr [ESP]
// 00414f46: FMUL double ptr [0x00615426]
//   XREF to: 00615426 (READ)
// 00414f4c: FSTP float ptr [ESP]
// 00414f4f: PUSH 0x34
//   Label: LAB_00414f4f
// 00414f51: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00414f56: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00414f57: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00414f59: CALL dword ptr [EDX + 0x4]
// 00414f5c: ADD ESP,0x8
// 00414f5f: TEST EAX,EAX
// 00414f61: JZ 0x00414f72
//   XREF to: 00414f72 (CONDITIONAL_JUMP)
// 00414f63: FLD float ptr [EBX + 0x304]
// 00414f69: FADD float ptr [ESP]
// 00414f6c: FSTP float ptr [EBX + 0x304]
// 00414f72: PUSH 0x33
//   Label: LAB_00414f72
// 00414f74: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00414f79: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00414f7a: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00414f7c: CALL dword ptr [EDX + 0x4]
// 00414f7f: ADD ESP,0x8
// 00414f82: TEST EAX,EAX
// 00414f84: JZ 0x00414f95
//   XREF to: 00414f95 (CONDITIONAL_JUMP)
// 00414f86: FLD float ptr [EBX + 0x304]
// 00414f8c: FSUB float ptr [ESP]
// 00414f8f: FSTP float ptr [EBX + 0x304]
// 00414f95: PUSH EBX
//   Label: LAB_00414f95
// 00414f96: CALL core_bat.cpp_FUN_00414ce0
//   XREF to: 00414ce0 (UNCONDITIONAL_CALL)
// 00414f9b: ADD ESP,0x4
// 00414f9e: MOV ESP,EBP
// 00414fa0: POP EBP
// 00414fa1: POP EBX
// 00414fa2: RET
