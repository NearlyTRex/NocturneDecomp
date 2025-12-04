// Name: shape_superopt.cpp_CPoly_rayPlaneIntersect_FUN_005d0ce0
// Address: 005d0ce0
// Address Range: [[005d0ce0, 005d0d2d]]
// Convention: __cdecl
// Signature: double shape_superopt.cpp_CPoly_rayPlaneIntersect_FUN_005d0ce0(CPoly * this_ptr, CVec * ray_origin, CVec * ray_dir)
// Function calls:
//   shape_superopt.cpp_rayPlaneIntersect_FUN_005d6500

#include "nocturne.h"

double __cdecl
shape_superopt_cpp_CPoly_rayPlaneIntersect_FUN_005d0ce0
          (CPoly *this_ptr,CVec *ray_origin,CVec *ray_dir)

{
  double dVar1;
  int *in_stack_00000004;
  CVector3d *in_stack_fffffff0;
  
  dVar1 = shape_superopt_cpp_rayPlaneIntersect_FUN_005d6500
                    (&ray_origin->impl,
                     (CVector3d *)(*(int *)(*in_stack_00000004 + 4) + in_stack_00000004[1] * 0x38),
                     (CVector3d *)(in_stack_00000004 + 0x10),in_stack_fffffff0);
  return dVar1;
}


// Assembly code:
// 005d0ce0: SUB ESP,0x10
//   Label: shape_superopt.cpp_CPoly_rayPlaneIntersect_FUN_005d0ce0
// 005d0ce3: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d0ce7: LEA EAX,[ECX + 0x40]
// 005d0cea: PUSH EAX
// 005d0ceb: MOV EAX,dword ptr [ECX + 0x4]
// 005d0cee: SHL EAX,0x3
// 005d0cf1: MOV EDX,EAX
// 005d0cf3: SHL EAX,0x3
// 005d0cf6: SUB EAX,EDX
// 005d0cf8: MOV EDX,EAX
// 005d0cfa: MOV EAX,dword ptr [ECX]
// 005d0cfc: MOV EAX,dword ptr [EAX + 0x4]
// 005d0cff: ADD EAX,EDX
// 005d0d01: PUSH EAX
// 005d0d02: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 005d0d06: PUSH EDX
// 005d0d07: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005d0d0b: PUSH ECX
// 005d0d0c: CALL shape_superopt.cpp_rayPlaneIntersect_FUN_005d6500
//   XREF to: 005d6500 (UNCONDITIONAL_CALL)
// 005d0d11: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 005d0d15: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x4] (WRITE)
// 005d0d19: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x8] (READ)
// 005d0d1d: ADD ESP,0x10
// 005d0d20: FSTP double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 005d0d23: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 005d0d26: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (READ)
// 005d0d2a: ADD ESP,0x10
// 005d0d2d: RET
