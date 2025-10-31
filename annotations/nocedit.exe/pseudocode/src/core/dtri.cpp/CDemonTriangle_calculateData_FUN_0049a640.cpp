// Name: core_dtri.cpp_CDemonTriangle_calculateData_FUN_0049a640
// Address: 0049a640
// Address Range: [[0049a640, 0049a78b]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_CDemonTriangle_calculateData_FUN_0049a640(CDemonTriangle * triangle)
// Cross-references:
//   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 (0049a790) at 0049a7d5 [UNCONDITIONAL_CALL]
//   core_dtri.cpp_CDemonTriangle_readDataCSV_FUN_0049a4e0 (0049a4e0) at 0049a519 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_calculateData_FUN_0049a640(CDemonTriangle *triangle)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_c;
  
  fVar2 = (triangle->vertex2).y - (triangle->vertex1).y;
  fVar1 = (triangle->vertex3).z - (triangle->vertex2).z;
  fVar4 = (triangle->vertex2).z - (triangle->vertex1).z;
  fVar7 = (triangle->vertex3).x - (triangle->vertex2).x;
  fVar6 = (triangle->vertex2).x - (triangle->vertex1).x;
  fVar5 = (triangle->vertex3).y - (triangle->vertex2).y;
  fVar3 = fVar2 * fVar1 - fVar5 * fVar4;
  fVar4 = fVar7 * fVar4 - fVar6 * fVar1;
  (triangle->normal).x = fVar3;
  (triangle->normal).y = fVar4;
  fVar1 = fVar6 * fVar5 - fVar7 * fVar2;
  (triangle->normal).z = fVar1;
  local_c = SQRT(fVar1 * (triangle->normal).z +
                 fVar4 * (triangle->normal).y + fVar3 * (triangle->normal).x);
  if (ABS(local_c) == 0.0) {
    local_c = 1.0;
  }
  local_c = 1.0 / local_c;
  fVar4 = -(triangle->normal).y * local_c;
  (triangle->normal).y = fVar4;
  fVar3 = -(triangle->normal).x * local_c;
  (triangle->normal).x = fVar3;
  fVar3 = ABS(fVar3);
  fVar1 = (triangle->vertex1).y;
  fVar2 = (triangle->vertex1).x;
  (triangle->normal).z = -(triangle->normal).z * local_c;
  triangle->plane_distance =
       (-(fVar2 * (triangle->normal).x) - fVar1 * (triangle->normal).y) -
       (triangle->vertex1).z * (triangle->normal).z;
  if ((ABS(fVar4) < fVar3) && (ABS((triangle->normal).z) < fVar3)) {
    triangle->area = 0.0;
    return;
  }
  fVar1 = ABS((triangle->normal).y);
  if ((ABS((triangle->normal).x) < fVar1) && (ABS((triangle->normal).z) < fVar1)) {
    triangle->area = 1.4013e-45;
    return;
  }
  triangle->area = 2.8026e-45;
  return;
}


// Assembly code:
// 0049a640: PUSH EBP
//   Label: core_dtri.cpp_CDemonTriangle_calculateData_FUN_0049a640
// 0049a641: MOV EBP,ESP
// 0049a643: SUB ESP,0x30
// 0049a646: AND ESP,0xfffffff8
// 0049a649: MOV EDX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0049a64c: FLD float ptr [EDX + 0x20]
// 0049a64f: FLD float ptr [EDX + 0x10]
// 0049a652: FSUB float ptr [EDX + 0x4]
// 0049a655: FXCH
// 0049a657: FSUB float ptr [EDX + 0x14]
// 0049a65a: FLD ST1
// 0049a65c: FXCH
// 0049a65e: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (WRITE)
// 0049a662: FMUL float ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 0049a666: FLD float ptr [EDX + 0x18]
// 0049a669: FLD float ptr [EDX + 0x14]
// 0049a66c: FSUB float ptr [EDX + 0x8]
// 0049a66f: FXCH
// 0049a671: FSUB float ptr [EDX + 0xc]
// 0049a674: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (WRITE)
// 0049a678: FMUL ST1
// 0049a67a: FLD float ptr [EDX + 0x1c]
// 0049a67d: FLD float ptr [EDX + 0xc]
// 0049a680: FSUB float ptr [EDX]
// 0049a682: FXCH
// 0049a684: FSUB float ptr [EDX + 0x10]
// 0049a687: FLD ST1
// 0049a689: FMUL ST1
// 0049a68b: FXCH
// 0049a68d: FMULP ST4
// 0049a68f: FXCH
// 0049a691: FMUL float ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 0049a695: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 0049a699: FMULP ST6
// 0049a69b: FXCH ST3
// 0049a69d: FSUBP ST4,ST0
// 0049a69f: FXCH ST2
// 0049a6a1: FSUBP
// 0049a6a3: FXCH ST2
// 0049a6a5: FST float ptr [EDX + 0x24]
// 0049a6a8: FMUL float ptr [EDX + 0x24]
// 0049a6ab: FXCH ST2
// 0049a6ad: FST float ptr [EDX + 0x28]
// 0049a6b0: FMUL float ptr [EDX + 0x28]
// 0049a6b3: FXCH ST3
// 0049a6b5: FSUBP
// 0049a6b7: FXCH ST2
// 0049a6b9: FADDP
// 0049a6bb: FXCH
// 0049a6bd: FST float ptr [EDX + 0x2c]
// 0049a6c0: FMUL float ptr [EDX + 0x2c]
// 0049a6c3: FADDP
// 0049a6c5: FSQRT
// 0049a6c7: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0xc] (WRITE)
// 0049a6cb: TEST dword ptr [ESP + 0x2c],0x7fffffff
//   XREF to: Stack[-0xc] (READ)
// 0049a6d3: JZ 0x0049a769
//   XREF to: 0049a769 (CONDITIONAL_JUMP)
// 0049a6d9: FLD float ptr [EDX + 0x24]
//   Label: LAB_0049a6d9
// 0049a6dc: FCHS
// 0049a6de: FLD1
// 0049a6e0: FDIV float ptr [ESP + 0x2c]
//   XREF to: Stack[-0xc] (READ)
// 0049a6e4: FLD float ptr [EDX + 0x28]
// 0049a6e7: FCHS
// 0049a6e9: FMUL ST1
// 0049a6eb: FST float ptr [EDX + 0x28]
// 0049a6ee: FABS
// 0049a6f0: FXCH ST2
// 0049a6f2: FMUL ST1
// 0049a6f4: FST float ptr [EDX + 0x24]
// 0049a6f7: FABS
// 0049a6f9: FLD float ptr [EDX + 0x4]
// 0049a6fc: FMUL float ptr [EDX + 0x28]
// 0049a6ff: FLD float ptr [EDX]
// 0049a701: FMUL float ptr [EDX + 0x24]
// 0049a704: FLD float ptr [EDX + 0x2c]
// 0049a707: FCHS
// 0049a709: FMULP ST4
// 0049a70b: FCHS
// 0049a70d: FSUBRP
// 0049a70f: FXCH ST2
// 0049a711: FSTP float ptr [EDX + 0x2c]
// 0049a714: FLD float ptr [EDX + 0x8]
// 0049a717: FMUL float ptr [EDX + 0x2c]
// 0049a71a: FSUBP ST2,ST0
// 0049a71c: FXCH
// 0049a71e: FSTP float ptr [EDX + 0x30]
// 0049a721: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0049a724: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0049a727: FNSTSW AX
// 0049a729: SAHF
// 0049a72a: JNC 0x0049a739
//   XREF to: 0049a739 (CONDITIONAL_JUMP)
// 0049a72c: FLD float ptr [EDX + 0x2c]
// 0049a72f: FABS
// 0049a731: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0049a734: FNSTSW AX
// 0049a736: SAHF
// 0049a737: JC 0x0049a776
//   XREF to: 0049a776 (CONDITIONAL_JUMP)
// 0049a739: FLD float ptr [EDX + 0x24]
//   Label: LAB_0049a739
// 0049a73c: FABS
// 0049a73e: FLD float ptr [EDX + 0x28]
// 0049a741: FABS
// 0049a743: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 0049a747: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 0049a74b: FNSTSW AX
// 0049a74d: SAHF
// 0049a74e: JNC 0x0049a781
//   XREF to: 0049a781 (CONDITIONAL_JUMP)
// 0049a750: FLD float ptr [EDX + 0x2c]
// 0049a753: FABS
// 0049a755: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 0049a759: FNSTSW AX
// 0049a75b: SAHF
// 0049a75c: JNC 0x0049a781
//   XREF to: 0049a781 (CONDITIONAL_JUMP)
// 0049a75e: MOV dword ptr [EDX + 0x34],0x1
// 0049a765: MOV ESP,EBP
// 0049a767: POP EBP
// 0049a768: RET
// 0049a769: MOV dword ptr [ESP + 0x2c],0x3f800000
//   Label: LAB_0049a769
//   XREF to: Stack[-0xc] (WRITE)
// 0049a771: JMP 0x0049a6d9
//   XREF to: 0049a6d9 (UNCONDITIONAL_JUMP)
// 0049a776: MOV dword ptr [EDX + 0x34],0x0
//   Label: LAB_0049a776
// 0049a77d: MOV ESP,EBP
// 0049a77f: POP EBP
// 0049a780: RET
// 0049a781: MOV dword ptr [EDX + 0x34],0x2
//   Label: LAB_0049a781
// 0049a788: MOV ESP,EBP
// 0049a78a: POP EBP
// 0049a78b: RET
