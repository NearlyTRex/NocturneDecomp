// Name: core_dcube.cpp_intersectXZCapsule_FUN_004556b0
// Address: 004556b0
// Address Range: [[004556b0, 00455981]]
// Convention: __cdecl
// Signature: int core_dcube.cpp_intersectXZCapsule_FUN_004556b0(SIntersectXZCylinder * cylinder)
// Cross-references:
//   core_dcube.cpp_intersectTriangleWithXZCapsule_FUN_00455a30 (00455a30) at 00455de4 [UNCONDITIONAL_CALL]
//   core_dcube.cpp_intersectXZCapsuleWithHeight_FUN_00455990 (00455990) at 004559b9 [UNCONDITIONAL_CALL]
// Globals:
//   float g_IntersectionConstantNegTwo = -2
//   float g_IntersectionConstantFour = 4
//   float g_IntersectionConstantTwo = 2

#include "nocturne.h"

int __cdecl core_dcube_cpp_intersectXZCapsule_FUN_004556b0(SIntersectXZCylinder *cylinder)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_3c;
  float local_14;
  float local_10;
  
  fVar2 = cylinder->edge_z2 - cylinder->edge_z1;
  fVar1 = cylinder->edge_x2 - cylinder->edge_x1;
  local_10 = -fVar2;
  fVar5 = fVar1 * fVar1 + local_10 * local_10;
  if (0.0 < fVar5) {
    local_14 = 1.0 / SQRT(fVar5);
    local_10 = local_10 * local_14;
    local_14 = fVar1 * local_14;
    if (0.0 < (cylinder->center_z - cylinder->edge_z1) * local_14 +
              (cylinder->center_x - cylinder->edge_x1) * local_10) {
      local_14 = -local_14;
      local_10 = -local_10;
    }
    fVar5 = cylinder->normal_z * local_14 + cylinder->normal_x * local_10;
    if (fVar5 <= 0.0) {
      return 0;
    }
    local_3c = cylinder->edge_z1 * local_14 + cylinder->edge_x1 * local_10;
    if (local_3c < cylinder->center_z * local_14 + cylinder->center_x * local_10) {
      return 0;
    }
    fVar4 = local_10 * cylinder->radius + cylinder->center_x;
    fVar3 = local_14 * cylinder->radius + cylinder->center_z;
    local_3c = local_3c - (fVar3 * local_14 + fVar4 * local_10);
    if (fVar5 < local_3c) {
      return 0;
    }
    local_3c = local_3c / fVar5;
    if (cylinder->max_distance <= local_3c) {
      return 0;
    }
    cylinder->intersect_x = cylinder->normal_x * local_3c + fVar4;
    cylinder->intersect_z = cylinder->normal_z * local_3c + fVar3;
    if (ABS(fVar1) <= ABS(fVar2)) {
      fVar1 = (cylinder->intersect_z - cylinder->edge_z1) / fVar2;
    }
    else {
      fVar1 = (cylinder->intersect_x - cylinder->edge_x1) / fVar1;
    }
    cylinder->param_clamped = fVar1;
    if (0.0 <= cylinder->param_clamped) {
      if (cylinder->param_clamped <= 1.0) {
        if (local_3c < 0.0) {
          local_3c = 0.0;
        }
        cylinder->param_t = local_3c;
        return 1;
      }
      cylinder->param_clamped = 1.0;
      fVar1 = cylinder->edge_x2;
      fVar5 = cylinder->edge_z2;
    }
    else {
      cylinder->param_clamped = 0.0;
      fVar1 = cylinder->edge_x1;
      fVar5 = cylinder->edge_z1;
    }
    cylinder->intersect_z = fVar5;
    cylinder->intersect_x = fVar1;
    fVar5 = cylinder->intersect_x - cylinder->center_x;
    fVar3 = cylinder->intersect_z - cylinder->center_z;
    fVar1 = cylinder->normal_z * cylinder->normal_z + cylinder->normal_x * cylinder->normal_x;
    fVar2 = (cylinder->normal_z * fVar3 + cylinder->normal_x * fVar5) * g_IntersectionConstantNegTwo
    ;
    fVar5 = fVar2 * fVar2 -
            fVar1 * g_IntersectionConstantFour *
            ((fVar3 * fVar3 + fVar5 * fVar5) - cylinder->radius * cylinder->radius);
    if (0.0 <= fVar5) {
      fVar1 = (-fVar2 - SQRT(fVar5)) / (fVar1 * g_IntersectionConstantTwo);
      cylinder->param_t = fVar1;
      if (((0.0 <= fVar1) && (fVar1 <= 1.0)) && (cylinder->param_t < cylinder->max_distance)) {
        return 1;
      }
    }
  }
  return 0;
}


// Assembly code:
// 004556b0: PUSH EBX
//   Label: core_dcube.cpp_intersectXZCapsule_FUN_004556b0
// 004556b1: PUSH EBP
// 004556b2: MOV EBP,ESP
// 004556b4: SUB ESP,0x58
// 004556b7: AND ESP,0xfffffff8
// 004556ba: MOV EDX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004556bd: FLD float ptr [EDX + 0x44]
// 004556c0: FLD float ptr [EDX + 0x48]
// 004556c3: FSUB float ptr [EDX + 0x40]
// 004556c6: FXCH
// 004556c8: FSUB float ptr [EDX + 0x3c]
// 004556cb: FXCH
// 004556cd: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x44] (WRITE)
// 004556d1: FCHS
// 004556d3: FST float ptr [ESP + 0x50]
//   XREF to: Stack[-0x10] (WRITE)
// 004556d7: FMUL float ptr [ESP + 0x50]
//   XREF to: Stack[-0x10] (READ)
// 004556db: FXCH
// 004556dd: FST float ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (WRITE)
// 004556e1: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (READ)
// 004556e5: FADDP
// 004556e7: FLDZ
// 004556e9: FXCH
// 004556eb: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (WRITE)
// 004556ef: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (READ)
// 004556f3: FNSTSW AX
// 004556f5: SAHF
// 004556f6: JNC 0x00455910
//   XREF to: 00455910 (CONDITIONAL_JUMP)
// 004556fc: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (READ)
// 00455700: FSQRT
// 00455702: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x10] (READ)
// 00455706: FLD1
// 00455708: FDIVRP ST2,ST0
// 0045570a: FMUL ST1
// 0045570c: FLD float ptr [EDX + 0x10]
// 0045570f: FSUB float ptr [EDX + 0x3c]
// 00455712: FXCH
// 00455714: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x10] (WRITE)
// 00455718: FMUL float ptr [ESP + 0x50]
//   XREF to: Stack[-0x10] (READ)
// 0045571c: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (READ)
// 00455720: FMULP ST2
// 00455722: FLD float ptr [EDX + 0x14]
// 00455725: FSUB float ptr [EDX + 0x40]
// 00455728: FXCH ST2
// 0045572a: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (WRITE)
// 0045572e: FXCH
// 00455730: FMUL float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (READ)
// 00455734: FADDP
// 00455736: FLDZ
// 00455738: FCOMPP
// 0045573a: FNSTSW AX
// 0045573c: SAHF
// 0045573d: JC 0x00455917
//   XREF to: 00455917 (CONDITIONAL_JUMP)
// 00455743: FLD float ptr [EDX + 0x18]
//   Label: LAB_00455743
// 00455746: FMUL float ptr [ESP + 0x50]
//   XREF to: Stack[-0x10] (READ)
// 0045574a: FLD float ptr [EDX + 0x1c]
// 0045574d: FMUL float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (READ)
// 00455751: FADDP
// 00455753: FST float ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (WRITE)
// 00455757: FLDZ
// 00455759: FCOMPP
// 0045575b: FNSTSW AX
// 0045575d: SAHF
// 0045575e: JNC 0x00455910
//   XREF to: 00455910 (CONDITIONAL_JUMP)
// 00455764: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x10] (READ)
// 00455768: FLD float ptr [EDX + 0x3c]
// 0045576b: FMUL ST1
// 0045576d: FLD float ptr [EDX + 0x10]
// 00455770: FMULP ST2
// 00455772: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (READ)
// 00455776: FLD float ptr [EDX + 0x40]
// 00455779: FMUL ST1
// 0045577b: FLD float ptr [EDX + 0x14]
// 0045577e: FMULP ST2
// 00455780: FADDP ST2,ST0
// 00455782: FADDP ST2,ST0
// 00455784: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (WRITE)
// 00455788: FCOMP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 0045578c: FNSTSW AX
// 0045578e: SAHF
// 0045578f: JA 0x00455910
//   XREF to: 00455910 (CONDITIONAL_JUMP)
// 00455795: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x10] (READ)
// 00455799: FLD ST0
// 0045579b: FMUL float ptr [EDX + 0x20]
// 0045579e: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (READ)
// 004557a2: FLD ST0
// 004557a4: FMUL float ptr [EDX + 0x20]
// 004557a7: FXCH ST2
// 004557a9: FADD float ptr [EDX + 0x10]
// 004557ac: FXCH ST2
// 004557ae: FADD float ptr [EDX + 0x14]
// 004557b1: FXCH ST2
// 004557b3: FST float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x24] (WRITE)
// 004557b7: FMULP ST3
// 004557b9: FXCH
// 004557bb: FST float ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (WRITE)
// 004557bf: FMULP
// 004557c1: FADDP
// 004557c3: FSUBR float ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 004557c7: FST float ptr [ESP + 0x24]
//   XREF to: Stack[-0x3c] (WRITE)
// 004557cb: FCOMP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (READ)
// 004557cf: FNSTSW AX
// 004557d1: SAHF
// 004557d2: JA 0x00455910
//   XREF to: 00455910 (CONDITIONAL_JUMP)
// 004557d8: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x3c] (READ)
// 004557dc: FDIV float ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (READ)
// 004557e0: FST float ptr [ESP + 0x24]
//   XREF to: Stack[-0x3c] (WRITE)
// 004557e4: FCOMP float ptr [EDX]
// 004557e6: FNSTSW AX
// 004557e8: SAHF
// 004557e9: JNC 0x00455910
//   XREF to: 00455910 (CONDITIONAL_JUMP)
// 004557ef: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (READ)
// 004557f3: FABS
// 004557f5: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x44] (READ)
// 004557f9: FABS
// 004557fb: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x3c] (READ)
// 004557ff: FLD float ptr [EDX + 0x18]
// 00455802: FMUL ST1
// 00455804: FLD float ptr [EDX + 0x1c]
// 00455807: FMULP ST2
// 00455809: FADD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x24] (READ)
// 0045580d: FXCH
// 0045580f: FADD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 00455813: FXCH
// 00455815: FSTP float ptr [EDX + 0x54]
// 00455818: FSTP float ptr [EDX + 0x58]
// 0045581b: FCOMPP
// 0045581d: FNSTSW AX
// 0045581f: SAHF
// 00455820: JNC 0x00455932
//   XREF to: 00455932 (CONDITIONAL_JUMP)
// 00455826: FLD float ptr [EDX + 0x54]
// 00455829: FSUB float ptr [EDX + 0x3c]
// 0045582c: FDIV float ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (READ)
// 00455830: FSTP float ptr [EDX + 0x50]
//   Label: LAB_00455830
// 00455833: FLDZ
// 00455835: FLD float ptr [EDX + 0x50]
// 00455838: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (WRITE)
// 0045583c: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (READ)
// 00455840: FNSTSW AX
// 00455842: SAHF
// 00455843: JBE 0x00455941
//   XREF to: 00455941 (CONDITIONAL_JUMP)
// 00455849: MOV dword ptr [EDX + 0x50],0x0
// 00455850: FLD float ptr [EDX + 0x3c]
// 00455853: MOV EAX,dword ptr [EDX + 0x40]
// 00455856: MOV dword ptr [EDX + 0x58],EAX
//   Label: LAB_00455856
// 00455859: FSTP float ptr [EDX + 0x54]
// 0045585c: FLD float ptr [EDX + 0x18]
// 0045585f: FMUL ST0
// 00455861: FLD float ptr [EDX + 0x18]
// 00455864: FLD float ptr [EDX + 0x54]
// 00455867: FSUB float ptr [EDX + 0x10]
// 0045586a: FXCH
// 0045586c: FMUL ST1
// 0045586e: FLD float ptr [EDX + 0x1c]
// 00455871: FMUL ST0
// 00455873: FLD ST2
// 00455875: FMULP ST3
// 00455877: FLD float ptr [EDX + 0x58]
// 0045587a: FSUB float ptr [EDX + 0x14]
// 0045587d: FLD float ptr [EDX + 0x1c]
// 00455880: FMUL ST1
// 00455882: FLD ST1
// 00455884: FXCH ST3
// 00455886: FADDP ST6,ST0
// 00455888: FXCH ST2
// 0045588a: FMULP
// 0045588c: FXCH ST4
// 0045588e: FST float ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (WRITE)
// 00455892: FMUL float ptr [0x0061a4f2]
//   XREF to: 0061a4f2 (READ)
// 00455898: FXCH ST4
// 0045589a: FADDP ST3,ST0
// 0045589c: FADDP
// 0045589e: FLD float ptr [EDX + 0x20]
// 004558a1: FMUL ST0
// 004558a3: FXCH
// 004558a5: FMUL float ptr [0x0061a4ee]
//   XREF to: 0061a4ee (READ)
// 004558ab: FXCH
// 004558ad: FSUBP ST2,ST0
// 004558af: FXCH ST2
// 004558b1: FMULP
// 004558b3: FXCH
// 004558b5: FST float ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (WRITE)
// 004558b9: FMUL float ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 004558bd: FSUBRP
// 004558bf: FLDZ
// 004558c1: FXCH
// 004558c3: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (WRITE)
// 004558c7: FCOMP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 004558cb: FNSTSW AX
// 004558cd: SAHF
// 004558ce: JA 0x00455910
//   XREF to: 00455910 (CONDITIONAL_JUMP)
// 004558d0: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 004558d4: FCHS
// 004558d6: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 004558da: FSQRT
// 004558dc: FSUBP
// 004558de: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 004558e2: FMUL float ptr [0x0061a4f6]
//   XREF to: 0061a4f6 (READ)
// 004558e8: FDIVP
// 004558ea: FLDZ
// 004558ec: FXCH
// 004558ee: FST float ptr [EDX + 0x4c]
// 004558f1: FSTP double ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 004558f4: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 004558f7: FNSTSW AX
// 004558f9: SAHF
// 004558fa: JA 0x00455910
//   XREF to: 00455910 (CONDITIONAL_JUMP)
// 004558fc: FLD1
// 004558fe: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 00455901: FNSTSW AX
// 00455903: SAHF
// 00455904: JC 0x00455910
//   XREF to: 00455910 (CONDITIONAL_JUMP)
// 00455906: FLD float ptr [EDX + 0x4c]
// 00455909: FCOMP float ptr [EDX]
// 0045590b: FNSTSW AX
// 0045590d: SAHF
// 0045590e: JC 0x00455978
//   XREF to: 00455978 (CONDITIONAL_JUMP)
// 00455910: XOR EAX,EAX
//   Label: LAB_00455910
// 00455912: MOV ESP,EBP
// 00455914: POP EBP
// 00455915: POP EBX
// 00455916: RET
// 00455917: MOV BL,byte ptr [ESP + 0x4f]
//   Label: LAB_00455917
//   XREF to: Stack[-0x11] (READ)
// 0045591b: MOV AH,byte ptr [ESP + 0x53]
//   XREF to: Stack[-0xd] (READ)
// 0045591f: XOR BL,0x80
// 00455922: XOR AH,0x80
// 00455925: MOV byte ptr [ESP + 0x4f],BL
//   XREF to: Stack[-0x11] (WRITE)
// 00455929: MOV byte ptr [ESP + 0x53],AH
//   XREF to: Stack[-0xd] (WRITE)
// 0045592d: JMP 0x00455743
//   XREF to: 00455743 (UNCONDITIONAL_JUMP)
// 00455932: FLD float ptr [EDX + 0x58]
//   Label: LAB_00455932
// 00455935: FSUB float ptr [EDX + 0x40]
// 00455938: FDIV float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x44] (READ)
// 0045593c: JMP 0x00455830
//   XREF to: 00455830 (UNCONDITIONAL_JUMP)
// 00455941: FLD1
//   Label: LAB_00455941
// 00455943: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (READ)
// 00455947: FNSTSW AX
// 00455949: SAHF
// 0045594a: JNC 0x0045595e
//   XREF to: 0045595e (CONDITIONAL_JUMP)
// 0045594c: MOV dword ptr [EDX + 0x50],0x3f800000
// 00455953: FLD float ptr [EDX + 0x44]
// 00455956: MOV EAX,dword ptr [EDX + 0x48]
// 00455959: JMP 0x00455856
//   XREF to: 00455856 (UNCONDITIONAL_JUMP)
// 0045595e: FLD float ptr [ESP + 0x24]
//   Label: LAB_0045595e
//   XREF to: Stack[-0x3c] (READ)
// 00455962: FLDZ
// 00455964: FCOMPP
// 00455966: FNSTSW AX
// 00455968: SAHF
// 00455969: JBE 0x00455971
//   XREF to: 00455971 (CONDITIONAL_JUMP)
// 0045596b: XOR ECX,ECX
// 0045596d: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 00455971: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00455971
//   XREF to: Stack[-0x3c] (READ)
// 00455975: MOV dword ptr [EDX + 0x4c],EAX
// 00455978: MOV EAX,0x1
//   Label: LAB_00455978
// 0045597d: MOV ESP,EBP
// 0045597f: POP EBP
// 00455980: POP EBX
// 00455981: RET
