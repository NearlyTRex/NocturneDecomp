// Name: core_skeleton.cpp_CDeformableModelInstance_FUN_005a0210
// Address: 005a0210
// Address Range: [[005a0210, 005a0242]]
// Convention: __cdecl
// Signature: int core_skeleton.cpp_CDeformableModelInstance_FUN_005a0210(CDeformableModelInstance * this_ptr)
// Function calls:
//   core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0

#include "nocturne.h"

int __cdecl
core_skeleton_cpp_CDeformableModelInstance_FUN_005a0210(CDeformableModelInstance *this_ptr)

{
  CDeformableModel *this_ptr_00;
  CMatrix3x4f *unaff_ESI;
  int in_stack_00000008;
  CVector3f *in_stack_0000000c;
  int in_stack_00000010;
  char *vertex_index;
  
  vertex_index = this_ptr->field3_0x508 + 0x978;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  core_skeleton_cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00
            (this_ptr_00,in_stack_0000000c,in_stack_00000010,(int)vertex_index,unaff_ESI);
  return in_stack_00000008;
}


// Assembly code:
// 005a0210: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_FUN_005a0210
// 005a0211: PUSH ESI
// 005a0212: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a0216: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005a021a: LEA EAX,[EDX + 0xe80]
// 005a0220: PUSH EAX
// 005a0221: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 005a0225: PUSH ECX
// 005a0226: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005a022a: PUSH ESI
// 005a022b: PUSH EBX
// 005a022c: PUSH EDX
// 005a022d: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005a0232: ADD ESP,0x4
// 005a0235: PUSH EAX
// 005a0236: CALL core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00
//   XREF to: 0059aa00 (UNCONDITIONAL_CALL)
// 005a023b: ADD ESP,0x14
// 005a023e: MOV EAX,EBX
// 005a0240: POP ESI
// 005a0241: POP EBX
// 005a0242: RET
