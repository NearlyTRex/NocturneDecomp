// Name: shape_design.c_clampedArccos_FUN_00461c50
// Address: 00461c50
// Address Range: [[00461c50, 00461cab]]
// Convention: __cdecl
// Signature: double shape_design.c_clampedArccos_FUN_00461c50(double dot_product)
// Cross-references:
//   shape_design.c_calculateAngleBetweenPolygonNormals_FUN_00461cb0 (00461cb0) at 00461cfc [UNCONDITIONAL_CALL]
//   shape_design.c_calculatePolygonAngularArea_FUN_00461ee0 (00461ee0) at 0046200b [UNCONDITIONAL_CALL]
//   shape_design.c_calculateVertexAngle_FUN_00462050 (00462050) at 004620fc [UNCONDITIONAL_CALL]
// Globals:
//   double g_ArccosDomainMin = -1
// Function calls:
//   crt_math.c_acos_FUN_00600162

#include "nocturne.h"

double __cdecl shape_design_c_clampedArccos_FUN_00461c50(double dot_product)

{
  undefined4 in_stack_00000004;
  undefined8 local_18;
  
  if (g_ArccosDomainMin < (double)CONCAT44(dot_product._0_4_,in_stack_00000004)) {
    if ((double)CONCAT44(dot_product._0_4_,in_stack_00000004) < 1.0) {
      local_18 = crt_math_c_acos_FUN_00600162((double)CONCAT44(dot_product._0_4_,in_stack_00000004))
      ;
    }
    else {
      local_18 = 0.0;
    }
  }
  else {
    local_18 = 3.141592654;
  }
  return local_18;
}


// Assembly code:
// 00461c50: PUSH EBX
//   Label: shape_design.c_clampedArccos_FUN_00461c50
// 00461c51: PUSH ESI
// 00461c52: PUSH EDI
// 00461c53: PUSH EBP
// 00461c54: MOV EBP,ESP
// 00461c56: SUB ESP,0x8
// 00461c5c: FLD double ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461c5f: FCOMP double ptr [0x0061bfae]
//   XREF to: 0061bfae (READ)
// 00461c65: FNSTSW AX
// 00461c67: SAHF
// 00461c68: JA 0x00461c7a
//   XREF to: 00461c7a (CONDITIONAL_JUMP)
// 00461c6a: MOV dword ptr [EBP + -0x8],0x54524550
//   XREF to: Stack[-0x18] (WRITE)
// 00461c71: MOV dword ptr [EBP + -0x4],0x400921fb
//   XREF to: Stack[-0x14] (WRITE)
// 00461c78: JMP 0x00461c9f
//   XREF to: 00461c9f (UNCONDITIONAL_JUMP)
// 00461c7a: FLD1
//   Label: LAB_00461c7a
// 00461c7c: FCOMP double ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461c7f: FNSTSW AX
// 00461c81: SAHF
// 00461c82: JA 0x00461c94
//   XREF to: 00461c94 (CONDITIONAL_JUMP)
// 00461c84: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 00461c8b: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 00461c92: JMP 0x00461c9f
//   XREF to: 00461c9f (UNCONDITIONAL_JUMP)
// 00461c94: FLD double ptr [EBP + 0x14]
//   Label: LAB_00461c94
//   XREF to: Stack[0x4] (READ)
// 00461c97: CALL crt_math.c_acos_FUN_00600162
//   XREF to: 00600162 (UNCONDITIONAL_CALL)
// 00461c9c: FSTP double ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 00461c9f: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00461c9f
//   XREF to: Stack[-0x18] (READ)
// 00461ca2: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00461ca5: MOV ESP,EBP
// 00461ca7: POP EBP
// 00461ca8: POP EDI
// 00461ca9: POP ESI
// 00461caa: POP EBX
// 00461cab: RET
