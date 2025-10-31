// Name: shape_design.c_arePolygonsCoplanar_FUN_00461b70
// Address: 00461b70
// Address Range: [[00461b70, 00461c41]]
// Convention: __cdecl
// Signature: int shape_design.c_arePolygonsCoplanar_FUN_00461b70(SShapeEditorPolygon * polygon1_ptr, SShapeEditorPolygon * polygon2_ptr, float scale_factor, int tolerance)
// Cross-references:
//   shape_design.c_complexPolygonReduction_FUN_00463b30 (00463b30) at 00463c4b [UNCONDITIONAL_CALL]
// Function calls:
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

int __cdecl
shape_design_c_arePolygonsCoplanar_FUN_00461b70
          (SShapeEditorPolygon *polygon1_ptr,SShapeEditorPolygon *polygon2_ptr,float scale_factor,
          int tolerance)

{
  undefined4 in_EDX;
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  int local_2c;
  
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,polygon1_ptr));
  dVar4 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),polygon1_ptr));
  dVar4 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),polygon1_ptr));
  dVar4 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),polygon2_ptr));
  fVar2 = (float10)(int)scale_factor * (float10)(polygon2_ptr->normal).y;
  dVar4 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),polygon2_ptr));
  fVar3 = (float10)(int)scale_factor * (float10)(polygon2_ptr->normal).z;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),polygon2_ptr));
  if (((tolerance < 0x3d) ||
      (uVar1 = (int)(0x461bc9U - (int)ROUND(fVar2)) >> 0x1f,
      tolerance <= (int)((0x461bc9U - (int)ROUND(fVar2) ^ uVar1) - uVar1))) ||
     (uVar1 = (int)(0x461bddU - (int)ROUND(fVar3)) >> 0x1f,
     tolerance <= (int)((0x461bddU - (int)ROUND(fVar3) ^ uVar1) - uVar1))) {
    local_2c = 0;
  }
  else {
    local_2c = 1;
  }
  return local_2c;
}


// Assembly code:
// 00461b70: PUSH EBX
//   Label: shape_design.c_arePolygonsCoplanar_FUN_00461b70
// 00461b71: PUSH ESI
// 00461b72: PUSH EDI
// 00461b73: PUSH EBP
// 00461b74: MOV EBP,ESP
// 00461b76: SUB ESP,0x1c
// 00461b7c: FILD dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00461b7f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461b82: FMUL float ptr [EAX + 0xa8]
// 00461b88: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00461b8d: FISTP dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 00461b90: FILD dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00461b93: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461b96: FMUL float ptr [EAX + 0xac]
// 00461b9c: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00461ba1: FISTP dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 00461ba4: FILD dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00461ba7: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461baa: FMUL float ptr [EAX + 0xb0]
// 00461bb0: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00461bb5: FISTP dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 00461bb8: FILD dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00461bbb: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00461bbe: FMUL float ptr [EAX + 0xa8]
// 00461bc4: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00461bc9: FISTP dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 00461bcc: FILD dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00461bcf: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00461bd2: FMUL float ptr [EAX + 0xac]
// 00461bd8: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00461bdd: FISTP dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 00461be0: FILD dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00461be3: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00461be6: FMUL float ptr [EAX + 0xb0]
// 00461bec: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00461bf1: FISTP dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 00461bf4: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00461bf7: SUB EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00461bfa: CDQ
// 00461bfb: XOR EAX,EDX
// 00461bfd: SUB EAX,EDX
// 00461bff: CMP EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00461c02: JGE 0x00461c14
//   XREF to: 00461c14 (CONDITIONAL_JUMP)
// 00461c04: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00461c07: SUB EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00461c0a: CDQ
// 00461c0b: XOR EAX,EDX
// 00461c0d: SUB EAX,EDX
// 00461c0f: CMP EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00461c12: JL 0x00461c16
//   XREF to: 00461c16 (CONDITIONAL_JUMP)
// 00461c14: JMP 0x00461c26
//   Label: LAB_00461c14
//   XREF to: 00461c26 (UNCONDITIONAL_JUMP)
// 00461c16: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_00461c16
//   XREF to: Stack[-0x20] (READ)
// 00461c19: SUB EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00461c1c: CDQ
// 00461c1d: XOR EAX,EDX
// 00461c1f: SUB EAX,EDX
// 00461c21: CMP EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00461c24: JL 0x00461c28
//   XREF to: 00461c28 (CONDITIONAL_JUMP)
// 00461c26: JMP 0x00461c31
//   Label: LAB_00461c26
//   XREF to: 00461c31 (UNCONDITIONAL_JUMP)
// 00461c28: MOV dword ptr [EBP + -0x1c],0x1
//   Label: LAB_00461c28
//   XREF to: Stack[-0x2c] (WRITE)
// 00461c2f: JMP 0x00461c38
//   XREF to: 00461c38 (UNCONDITIONAL_JUMP)
// 00461c31: MOV dword ptr [EBP + -0x1c],0x0
//   Label: LAB_00461c31
//   XREF to: Stack[-0x2c] (WRITE)
// 00461c38: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_00461c38
//   XREF to: Stack[-0x2c] (READ)
// 00461c3b: MOV ESP,EBP
// 00461c3d: POP EBP
// 00461c3e: POP EDI
// 00461c3f: POP ESI
// 00461c40: POP EBX
// 00461c41: RET
