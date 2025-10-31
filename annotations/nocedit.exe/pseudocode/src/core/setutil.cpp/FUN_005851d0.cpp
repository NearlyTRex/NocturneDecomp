// Name: core_setutil.cpp_FUN_005851d0
// Address: 005851d0
// Address Range: [[005851d0, 005851e5]]
// Convention: unknown
// Signature: undefined core_setutil.cpp_FUN_005851d0()
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30

#include "nocturne.h"

void core_setutil_cpp_FUN_005851d0(void)

{
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)(in_stack_00000004 + 0x10),in_stack_00000008);
  return;
}


// Assembly code:
// 005851d0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_setutil.cpp_FUN_005851d0
//   XREF to: Stack[0x8] (READ)
// 005851d4: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005851d8: PUSH EDX
// 005851d9: ADD EAX,0x10
// 005851dc: PUSH EAX
// 005851dd: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 005851e2: ADD ESP,0x8
// 005851e5: RET
