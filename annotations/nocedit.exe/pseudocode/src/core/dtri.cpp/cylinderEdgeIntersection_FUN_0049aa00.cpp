// Name: core_dtri.cpp_cylinderEdgeIntersection_FUN_0049aa00
// Address: 0049aa00
// Address Range: [[0049aa00, 0049acd1]]
// Convention: __cdecl
// Signature: int core_dtri.cpp_cylinderEdgeIntersection_FUN_0049aa00(SIntersectXZCylinder * cylinder)
// Cross-references:
//   core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0049ace0 (0049ace0) at 0049ad09 [UNCONDITIONAL_CALL]
//   core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80 (0049ad80) at 0049afe6 [UNCONDITIONAL_CALL]
// Globals:
//   float g_CylinderScale2 = -2
//   float g_CylinderScale1 = 4
//   float g_CylinderInvScale = 2

#include "nocturne.h"

int __cdecl core_dtri_cpp_cylinderEdgeIntersection_FUN_0049aa00(SIntersectXZCylinder *cylinder)

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
    fVar2 = (cylinder->normal_z * fVar3 + cylinder->normal_x * fVar5) * g_CylinderScale2;
    fVar5 = fVar2 * fVar2 -
            fVar1 * g_CylinderScale1 *
            ((fVar3 * fVar3 + fVar5 * fVar5) - cylinder->radius * cylinder->radius);
    if (0.0 <= fVar5) {
      fVar1 = (-fVar2 - SQRT(fVar5)) / (fVar1 * g_CylinderInvScale);
      cylinder->param_t = fVar1;
      if (((0.0 <= fVar1) && (fVar1 <= 1.0)) && (cylinder->param_t < cylinder->max_distance)) {
        return 1;
      }
    }
  }
  return 0;
}


// Assembly code:
// 0049aa00: PUSH EBX
//   Label: core_dtri.cpp_cylinderEdgeIntersection_FUN_0049aa00
// 0049aa01: PUSH EBP
// 0049aa02: MOV EBP,ESP
// 0049aa04: SUB ESP,0x58
// 0049aa07: AND ESP,0xfffffff8
// 0049aa0a: MOV EDX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0049aa0d: FLD float ptr [EDX + 0x44]
// 0049aa10: FLD float ptr [EDX + 0x48]
// 0049aa13: FSUB float ptr [EDX + 0x40]
// 0049aa16: FXCH
// 0049aa18: FSUB float ptr [EDX + 0x3c]
// 0049aa1b: FXCH
// 0049aa1d: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x44] (WRITE)
// 0049aa21: FCHS
// 0049aa23: FST float ptr [ESP + 0x50]
//   XREF to: Stack[-0x10] (WRITE)
// 0049aa27: FMUL float ptr [ESP + 0x50]
//   XREF to: Stack[-0x10] (READ)
// 0049aa2b: FXCH
// 0049aa2d: FST float ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (WRITE)
// 0049aa31: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (READ)
// 0049aa35: FADDP
// 0049aa37: FLDZ
// 0049aa39: FXCH
// 0049aa3b: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (WRITE)
// 0049aa3f: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (READ)
// 0049aa43: FNSTSW AX
// 0049aa45: SAHF
// 0049aa46: JNC 0x0049ac60
//   XREF to: 0049ac60 (CONDITIONAL_JUMP)
// 0049aa4c: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (READ)
// 0049aa50: FSQRT
// 0049aa52: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x10] (READ)
// 0049aa56: FLD1
// 0049aa58: FDIVRP ST2,ST0
// 0049aa5a: FMUL ST1
// 0049aa5c: FLD float ptr [EDX + 0x10]
// 0049aa5f: FSUB float ptr [EDX + 0x3c]
// 0049aa62: FXCH
// 0049aa64: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x10] (WRITE)
// 0049aa68: FMUL float ptr [ESP + 0x50]
//   XREF to: Stack[-0x10] (READ)
// 0049aa6c: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (READ)
// 0049aa70: FMULP ST2
// 0049aa72: FLD float ptr [EDX + 0x14]
// 0049aa75: FSUB float ptr [EDX + 0x40]
// 0049aa78: FXCH ST2
// 0049aa7a: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (WRITE)
// 0049aa7e: FXCH
// 0049aa80: FMUL float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (READ)
// 0049aa84: FADDP
// 0049aa86: FLDZ
// 0049aa88: FCOMPP
// 0049aa8a: FNSTSW AX
// 0049aa8c: SAHF
// 0049aa8d: JC 0x0049ac67
//   XREF to: 0049ac67 (CONDITIONAL_JUMP)
// 0049aa93: FLD float ptr [EDX + 0x18]
//   Label: LAB_0049aa93
// 0049aa96: FMUL float ptr [ESP + 0x50]
//   XREF to: Stack[-0x10] (READ)
// 0049aa9a: FLD float ptr [EDX + 0x1c]
// 0049aa9d: FMUL float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (READ)
// 0049aaa1: FADDP
// 0049aaa3: FST float ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (WRITE)
// 0049aaa7: FLDZ
// 0049aaa9: FCOMPP
// 0049aaab: FNSTSW AX
// 0049aaad: SAHF
// 0049aaae: JNC 0x0049ac60
//   XREF to: 0049ac60 (CONDITIONAL_JUMP)
// 0049aab4: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x10] (READ)
// 0049aab8: FLD float ptr [EDX + 0x3c]
// 0049aabb: FMUL ST1
// 0049aabd: FLD float ptr [EDX + 0x10]
// 0049aac0: FMULP ST2
// 0049aac2: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (READ)
// 0049aac6: FLD float ptr [EDX + 0x40]
// 0049aac9: FMUL ST1
// 0049aacb: FLD float ptr [EDX + 0x14]
// 0049aace: FMULP ST2
// 0049aad0: FADDP ST2,ST0
// 0049aad2: FADDP ST2,ST0
// 0049aad4: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (WRITE)
// 0049aad8: FCOMP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 0049aadc: FNSTSW AX
// 0049aade: SAHF
// 0049aadf: JA 0x0049ac60
//   XREF to: 0049ac60 (CONDITIONAL_JUMP)
// 0049aae5: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x10] (READ)
// 0049aae9: FLD ST0
// 0049aaeb: FMUL float ptr [EDX + 0x20]
// 0049aaee: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (READ)
// 0049aaf2: FLD ST0
// 0049aaf4: FMUL float ptr [EDX + 0x20]
// 0049aaf7: FXCH ST2
// 0049aaf9: FADD float ptr [EDX + 0x10]
// 0049aafc: FXCH ST2
// 0049aafe: FADD float ptr [EDX + 0x14]
// 0049ab01: FXCH ST2
// 0049ab03: FST float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x24] (WRITE)
// 0049ab07: FMULP ST3
// 0049ab09: FXCH
// 0049ab0b: FST float ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (WRITE)
// 0049ab0f: FMULP
// 0049ab11: FADDP
// 0049ab13: FSUBR float ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 0049ab17: FST float ptr [ESP + 0x24]
//   XREF to: Stack[-0x3c] (WRITE)
// 0049ab1b: FCOMP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (READ)
// 0049ab1f: FNSTSW AX
// 0049ab21: SAHF
// 0049ab22: JA 0x0049ac60
//   XREF to: 0049ac60 (CONDITIONAL_JUMP)
// 0049ab28: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x3c] (READ)
// 0049ab2c: FDIV float ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (READ)
// 0049ab30: FST float ptr [ESP + 0x24]
//   XREF to: Stack[-0x3c] (WRITE)
// 0049ab34: FCOMP float ptr [EDX]
// 0049ab36: FNSTSW AX
// 0049ab38: SAHF
// 0049ab39: JNC 0x0049ac60
//   XREF to: 0049ac60 (CONDITIONAL_JUMP)
// 0049ab3f: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (READ)
// 0049ab43: FABS
// 0049ab45: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x44] (READ)
// 0049ab49: FABS
// 0049ab4b: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x3c] (READ)
// 0049ab4f: FLD float ptr [EDX + 0x18]
// 0049ab52: FMUL ST1
// 0049ab54: FLD float ptr [EDX + 0x1c]
// 0049ab57: FMULP ST2
// 0049ab59: FADD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x24] (READ)
// 0049ab5d: FXCH
// 0049ab5f: FADD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 0049ab63: FXCH
// 0049ab65: FSTP float ptr [EDX + 0x54]
// 0049ab68: FSTP float ptr [EDX + 0x58]
// 0049ab6b: FCOMPP
// 0049ab6d: FNSTSW AX
// 0049ab6f: SAHF
// 0049ab70: JNC 0x0049ac82
//   XREF to: 0049ac82 (CONDITIONAL_JUMP)
// 0049ab76: FLD float ptr [EDX + 0x54]
// 0049ab79: FSUB float ptr [EDX + 0x3c]
// 0049ab7c: FDIV float ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (READ)
// 0049ab80: FSTP float ptr [EDX + 0x50]
//   Label: LAB_0049ab80
// 0049ab83: FLDZ
// 0049ab85: FLD float ptr [EDX + 0x50]
// 0049ab88: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (WRITE)
// 0049ab8c: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (READ)
// 0049ab90: FNSTSW AX
// 0049ab92: SAHF
// 0049ab93: JBE 0x0049ac91
//   XREF to: 0049ac91 (CONDITIONAL_JUMP)
// 0049ab99: MOV dword ptr [EDX + 0x50],0x0
// 0049aba0: FLD float ptr [EDX + 0x3c]
// 0049aba3: MOV EAX,dword ptr [EDX + 0x40]
// 0049aba6: MOV dword ptr [EDX + 0x58],EAX
//   Label: LAB_0049aba6
// 0049aba9: FSTP float ptr [EDX + 0x54]
// 0049abac: FLD float ptr [EDX + 0x18]
// 0049abaf: FMUL ST0
// 0049abb1: FLD float ptr [EDX + 0x18]
// 0049abb4: FLD float ptr [EDX + 0x54]
// 0049abb7: FSUB float ptr [EDX + 0x10]
// 0049abba: FXCH
// 0049abbc: FMUL ST1
// 0049abbe: FLD float ptr [EDX + 0x1c]
// 0049abc1: FMUL ST0
// 0049abc3: FLD ST2
// 0049abc5: FMULP ST3
// 0049abc7: FLD float ptr [EDX + 0x58]
// 0049abca: FSUB float ptr [EDX + 0x14]
// 0049abcd: FLD float ptr [EDX + 0x1c]
// 0049abd0: FMUL ST1
// 0049abd2: FLD ST1
// 0049abd4: FXCH ST3
// 0049abd6: FADDP ST6,ST0
// 0049abd8: FXCH ST2
// 0049abda: FMULP
// 0049abdc: FXCH ST4
// 0049abde: FST float ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (WRITE)
// 0049abe2: FMUL float ptr [0x00622dfe]
//   XREF to: 00622dfe (READ)
// 0049abe8: FXCH ST4
// 0049abea: FADDP ST3,ST0
// 0049abec: FADDP
// 0049abee: FLD float ptr [EDX + 0x20]
// 0049abf1: FMUL ST0
// 0049abf3: FXCH
// 0049abf5: FMUL float ptr [0x00622dfa]
//   XREF to: 00622dfa (READ)
// 0049abfb: FXCH
// 0049abfd: FSUBP ST2,ST0
// 0049abff: FXCH ST2
// 0049ac01: FMULP
// 0049ac03: FXCH
// 0049ac05: FST float ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (WRITE)
// 0049ac09: FMUL float ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 0049ac0d: FSUBRP
// 0049ac0f: FLDZ
// 0049ac11: FXCH
// 0049ac13: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (WRITE)
// 0049ac17: FCOMP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 0049ac1b: FNSTSW AX
// 0049ac1d: SAHF
// 0049ac1e: JA 0x0049ac60
//   XREF to: 0049ac60 (CONDITIONAL_JUMP)
// 0049ac20: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 0049ac24: FCHS
// 0049ac26: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 0049ac2a: FSQRT
// 0049ac2c: FSUBP
// 0049ac2e: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 0049ac32: FMUL float ptr [0x00622e02]
//   XREF to: 00622e02 (READ)
// 0049ac38: FDIVP
// 0049ac3a: FLDZ
// 0049ac3c: FXCH
// 0049ac3e: FST float ptr [EDX + 0x4c]
// 0049ac41: FSTP double ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 0049ac44: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 0049ac47: FNSTSW AX
// 0049ac49: SAHF
// 0049ac4a: JA 0x0049ac60
//   XREF to: 0049ac60 (CONDITIONAL_JUMP)
// 0049ac4c: FLD1
// 0049ac4e: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 0049ac51: FNSTSW AX
// 0049ac53: SAHF
// 0049ac54: JC 0x0049ac60
//   XREF to: 0049ac60 (CONDITIONAL_JUMP)
// 0049ac56: FLD float ptr [EDX + 0x4c]
// 0049ac59: FCOMP float ptr [EDX]
// 0049ac5b: FNSTSW AX
// 0049ac5d: SAHF
// 0049ac5e: JC 0x0049acc8
//   XREF to: 0049acc8 (CONDITIONAL_JUMP)
// 0049ac60: XOR EAX,EAX
//   Label: LAB_0049ac60
// 0049ac62: MOV ESP,EBP
// 0049ac64: POP EBP
// 0049ac65: POP EBX
// 0049ac66: RET
// 0049ac67: MOV BL,byte ptr [ESP + 0x4f]
//   Label: LAB_0049ac67
//   XREF to: Stack[-0x11] (READ)
// 0049ac6b: MOV AH,byte ptr [ESP + 0x53]
//   XREF to: Stack[-0xd] (READ)
// 0049ac6f: XOR BL,0x80
// 0049ac72: XOR AH,0x80
// 0049ac75: MOV byte ptr [ESP + 0x4f],BL
//   XREF to: Stack[-0x11] (WRITE)
// 0049ac79: MOV byte ptr [ESP + 0x53],AH
//   XREF to: Stack[-0xd] (WRITE)
// 0049ac7d: JMP 0x0049aa93
//   XREF to: 0049aa93 (UNCONDITIONAL_JUMP)
// 0049ac82: FLD float ptr [EDX + 0x58]
//   Label: LAB_0049ac82
// 0049ac85: FSUB float ptr [EDX + 0x40]
// 0049ac88: FDIV float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x44] (READ)
// 0049ac8c: JMP 0x0049ab80
//   XREF to: 0049ab80 (UNCONDITIONAL_JUMP)
// 0049ac91: FLD1
//   Label: LAB_0049ac91
// 0049ac93: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (READ)
// 0049ac97: FNSTSW AX
// 0049ac99: SAHF
// 0049ac9a: JNC 0x0049acae
//   XREF to: 0049acae (CONDITIONAL_JUMP)
// 0049ac9c: MOV dword ptr [EDX + 0x50],0x3f800000
// 0049aca3: FLD float ptr [EDX + 0x44]
// 0049aca6: MOV EAX,dword ptr [EDX + 0x48]
// 0049aca9: JMP 0x0049aba6
//   XREF to: 0049aba6 (UNCONDITIONAL_JUMP)
// 0049acae: FLD float ptr [ESP + 0x24]
//   Label: LAB_0049acae
//   XREF to: Stack[-0x3c] (READ)
// 0049acb2: FLDZ
// 0049acb4: FCOMPP
// 0049acb6: FNSTSW AX
// 0049acb8: SAHF
// 0049acb9: JBE 0x0049acc1
//   XREF to: 0049acc1 (CONDITIONAL_JUMP)
// 0049acbb: XOR ECX,ECX
// 0049acbd: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 0049acc1: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_0049acc1
//   XREF to: Stack[-0x3c] (READ)
// 0049acc5: MOV dword ptr [EDX + 0x4c],EAX
// 0049acc8: MOV EAX,0x1
//   Label: LAB_0049acc8
// 0049accd: MOV ESP,EBP
// 0049accf: POP EBP
// 0049acd0: POP EBX
// 0049acd1: RET
