// Name: core_dtrace.cpp_initCapsuleCollisionData_FUN_00496b90
// Address: 00496b90
// Address Range: [[00496b90, 00496c51]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_initCapsuleCollisionData_FUN_00496b90(SCapsuleCollision * out_data, float start_x, float start_z, float dir_x, float dir_z, float radius, void * user_data1, void * user_data2)
// Cross-references:
//   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470 (00573470) at 00573caf [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90
          (SCapsuleCollision *out_data,float start_x,float start_z,float dir_x,float dir_z,
          float radius,void *user_data1,void *user_data2)

{
  float fVar1;
  float fVar2;
  
  out_data->start_x = start_x;
  out_data->start_z = start_z;
  out_data->dir_x = dir_x;
  out_data->dir_z = dir_z;
  out_data->radius = radius;
  out_data->user_data1 = user_data2;
  out_data->user_data2 = user_data1;
  fVar1 = SQRT(dir_z * dir_z + dir_x * dir_x);
  fVar2 = radius / fVar1 + 1.0;
  out_data->dot_product = start_z * dir_z + start_x * dir_x;
  out_data->constant = 1.01;
  out_data->expanded_term = fVar2 * dir_z * dir_z + fVar2 * dir_x * dir_x + out_data->dot_product;
  if (0.0 < fVar1) {
    out_data->normal_x = dir_x * (1.0 / fVar1);
    out_data->normal_z = dir_z * (1.0 / fVar1);
    return;
  }
  out_data->normal_z = 0.0;
  out_data->normal_x = 0.0;
  return;
}


// Assembly code:
// 00496b90: PUSH EBP
//   Label: core_dtrace.cpp_initCapsuleCollisionData_FUN_00496b90
// 00496b91: MOV EBP,ESP
// 00496b93: SUB ESP,0x14
// 00496b96: AND ESP,0xfffffff8
// 00496b99: MOV EDX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00496b9c: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 00496b9f: FMUL ST0
// 00496ba1: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 00496ba4: MOV EAX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00496ba7: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 00496baa: MOV dword ptr [EDX + 0x10],EAX
// 00496bad: MOV EAX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00496bb0: MOV dword ptr [EDX + 0x14],EAX
// 00496bb3: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 00496bb6: MOV dword ptr [EDX + 0x18],EAX
// 00496bb9: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 00496bbc: MOV dword ptr [EDX + 0x1c],EAX
// 00496bbf: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0x18] (READ)
// 00496bc2: MOV dword ptr [EDX + 0x20],EAX
// 00496bc5: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x20] (READ)
// 00496bc8: MOV dword ptr [EDX + 0x24],EAX
// 00496bcb: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x1c] (READ)
// 00496bce: FADDP
// 00496bd0: MOV dword ptr [EDX + 0x28],EAX
// 00496bd3: FSQRT
// 00496bd5: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0x18] (READ)
// 00496bd8: FDIV ST0,ST1
// 00496bda: FLD float ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00496bdd: FMUL float ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 00496be0: FLD float ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00496be3: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 00496be6: FLD1
// 00496be8: FADDP ST3,ST0
// 00496bea: FLD ST2
// 00496bec: FMUL float ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 00496bef: FXCH
// 00496bf1: FADDP ST2,ST0
// 00496bf3: FMUL float ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 00496bf6: FXCH
// 00496bf8: FSTP float ptr [EDX + 0x2c]
// 00496bfb: FADD float ptr [EDX + 0x2c]
// 00496bfe: FXCH
// 00496c00: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 00496c03: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 00496c06: MOV dword ptr [EDX],0x3f8147ae
// 00496c0c: FXCH ST2
// 00496c0e: FST float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00496c11: FXCH ST2
// 00496c13: FADDP
// 00496c15: FLDZ
// 00496c17: FXCH
// 00496c19: FSTP float ptr [EDX + 0x30]
// 00496c1c: FCOMPP
// 00496c1e: FNSTSW AX
// 00496c20: SAHF
// 00496c21: JNC 0x00496c40
//   XREF to: 00496c40 (CONDITIONAL_JUMP)
// 00496c23: FLD1
// 00496c25: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 00496c28: FXCH
// 00496c2a: FDIV float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00496c2d: FXCH
// 00496c2f: FMUL ST1
// 00496c31: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 00496c34: FMULP ST2
// 00496c36: FSTP float ptr [EDX + 0x34]
// 00496c39: FSTP float ptr [EDX + 0x38]
// 00496c3c: MOV ESP,EBP
// 00496c3e: POP EBP
// 00496c3f: RET
// 00496c40: MOV dword ptr [EDX + 0x38],0x0
//   Label: LAB_00496c40
// 00496c47: MOV dword ptr [EDX + 0x34],0x0
// 00496c4e: MOV ESP,EBP
// 00496c50: POP EBP
// 00496c51: RET
