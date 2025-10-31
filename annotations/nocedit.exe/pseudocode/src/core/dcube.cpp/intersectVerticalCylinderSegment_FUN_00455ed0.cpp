// Name: core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00455ed0
// Address: 00455ed0
// Address Range: [[00455ed0, 0045603c]]
// Convention: __cdecl
// Signature: uint core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00455ed0(CVector3f * segment_start, CVector3f * segment_end, float radius, float * out_height)
// Cross-references:
//   core_dcube.cpp_triangleCylinderCollision_FUN_00456040 (00456040) at 00456222 [UNCONDITIONAL_CALL]
// Globals:
//   double g_IntersectionConstantTwo2 = 2
//   double g_IntersectionConstantFour2 = 4

#include "nocturne.h"

uint __cdecl
core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00455ed0
          (CVector3f *segment_start,CVector3f *segment_end,float radius,float *out_height)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  fVar3 = segment_end->x - segment_start->x;
  fVar1 = segment_end->z - segment_start->z;
  fVar2 = fVar1 * fVar1 + fVar3 * fVar3;
  if (0.0 < fVar2) {
    fVar1 = (segment_start->x * fVar3 + segment_start->z * fVar1) *
            (float)g_IntersectionConstantTwo2;
    fVar3 = fVar1 * fVar1 -
            fVar2 * (float)g_IntersectionConstantFour2 *
            ((segment_start->x * segment_start->x + segment_start->z * segment_start->z) -
            radius * radius);
    if (0.0 <= fVar3) {
      fVar4 = (-fVar1 - SQRT(fVar3)) / (fVar2 * (float)g_IntersectionConstantTwo2);
      uVar5 = 0;
      if (((0.0 <= fVar4) && (fVar4 <= 1.0)) &&
         (fVar4 = (segment_end->y - segment_start->y) * fVar4 + segment_start->y,
         *out_height < fVar4)) {
        uVar5 = 1;
        *out_height = fVar4;
      }
      fVar1 = (SQRT(fVar3) - fVar1) / (fVar2 * (float)g_IntersectionConstantTwo2);
      if (((0.0 <= fVar1) && (fVar1 <= 1.0)) &&
         (fVar1 = (segment_end->y - segment_start->y) * fVar1 + segment_start->y,
         *out_height < fVar1)) {
        uVar5 = 1;
        *out_height = fVar1;
      }
      return uVar5;
    }
  }
  return 0;
}


// Assembly code:
// 00455ed0: PUSH EBX
//   Label: core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00455ed0
// 00455ed1: PUSH ESI
// 00455ed2: PUSH EBP
// 00455ed3: MOV EBP,ESP
// 00455ed5: SUB ESP,0x50
// 00455ed8: AND ESP,0xfffffff8
// 00455edb: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00455ede: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00455ee1: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 00455ee4: FLD float ptr [ESI + 0x8]
// 00455ee7: FLD float ptr [ESI]
// 00455ee9: FSUB float ptr [EDX]
// 00455eeb: FXCH
// 00455eed: FSUB float ptr [EDX + 0x8]
// 00455ef0: FXCH
// 00455ef2: FST double ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (WRITE)
// 00455ef6: FMUL double ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (READ)
// 00455efa: FXCH
// 00455efc: FST double ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (WRITE)
// 00455f00: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 00455f04: FADDP
// 00455f06: FLDZ
// 00455f08: FXCH
// 00455f0a: FSTP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (WRITE)
// 00455f0e: FCOMP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 00455f12: FNSTSW AX
// 00455f14: SAHF
// 00455f15: JNC 0x00456035
//   XREF to: 00456035 (CONDITIONAL_JUMP)
// 00455f1b: FLD float ptr [EDX + 0x8]
// 00455f1e: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 00455f22: FLD float ptr [EDX + 0x8]
// 00455f25: FMUL ST0
// 00455f27: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 00455f2b: FMUL double ptr [0x0061a502]
//   XREF to: 0061a502 (READ)
// 00455f31: FLD float ptr [EDX]
// 00455f33: FMUL ST0
// 00455f35: FLD float ptr [EDX]
// 00455f37: FMUL double ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (READ)
// 00455f3b: FXCH
// 00455f3d: FADDP ST3,ST0
// 00455f3f: FADDP ST3,ST0
// 00455f41: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00455f44: FMUL ST0
// 00455f46: FXCH ST3
// 00455f48: FMUL double ptr [0x0061a4fa]
//   XREF to: 0061a4fa (READ)
// 00455f4e: FXCH ST3
// 00455f50: FSUBP ST2,ST0
// 00455f52: FMULP
// 00455f54: FXCH
// 00455f56: FST double ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (WRITE)
// 00455f5a: FMUL double ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 00455f5e: FSUBRP
// 00455f60: FLDZ
// 00455f62: FXCH
// 00455f64: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (WRITE)
// 00455f68: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (READ)
// 00455f6c: FNSTSW AX
// 00455f6e: SAHF
// 00455f6f: JA 0x00456035
//   XREF to: 00456035 (CONDITIONAL_JUMP)
// 00455f75: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 00455f79: FCHS
// 00455f7b: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (READ)
// 00455f7f: FSQRT
// 00455f81: FSUBP
// 00455f83: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 00455f87: FMUL double ptr [0x0061a4fa]
//   XREF to: 0061a4fa (READ)
// 00455f8d: FDIVP
// 00455f8f: FLDZ
// 00455f91: XOR ECX,ECX
// 00455f93: FXCH
// 00455f95: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (WRITE)
// 00455f99: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (READ)
// 00455f9d: FNSTSW AX
// 00455f9f: SAHF
// 00455fa0: JA 0x00455fd6
//   XREF to: 00455fd6 (CONDITIONAL_JUMP)
// 00455fa2: FLD1
// 00455fa4: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (READ)
// 00455fa8: FNSTSW AX
// 00455faa: SAHF
// 00455fab: JC 0x00455fd6
//   XREF to: 00455fd6 (CONDITIONAL_JUMP)
// 00455fad: FLD float ptr [ESI + 0x4]
// 00455fb0: FSUB float ptr [EDX + 0x4]
// 00455fb3: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (READ)
// 00455fb7: FADD float ptr [EDX + 0x4]
// 00455fba: FLD float ptr [EBX]
// 00455fbc: FXCH
// 00455fbe: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (WRITE)
// 00455fc2: FCOMP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (READ)
// 00455fc6: FNSTSW AX
// 00455fc8: SAHF
// 00455fc9: JNC 0x00455fd6
//   XREF to: 00455fd6 (CONDITIONAL_JUMP)
// 00455fcb: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (READ)
// 00455fcf: MOV ECX,0x1
// 00455fd4: FSTP float ptr [EBX]
// 00455fd6: FLD double ptr [ESP + 0x8]
//   Label: LAB_00455fd6
//   XREF to: Stack[-0x58] (READ)
// 00455fda: FSQRT
// 00455fdc: FSUB double ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 00455fe0: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 00455fe4: FMUL double ptr [0x0061a4fa]
//   XREF to: 0061a4fa (READ)
// 00455fea: FDIVP
// 00455fec: FLDZ
// 00455fee: FXCH
// 00455ff0: FSTP double ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 00455ff3: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 00455ff6: FNSTSW AX
// 00455ff8: SAHF
// 00455ff9: JA 0x0045602d
//   XREF to: 0045602d (CONDITIONAL_JUMP)
// 00455ffb: FLD1
// 00455ffd: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 00456000: FNSTSW AX
// 00456002: SAHF
// 00456003: JC 0x0045602d
//   XREF to: 0045602d (CONDITIONAL_JUMP)
// 00456005: FLD float ptr [ESI + 0x4]
// 00456008: FSUB float ptr [EDX + 0x4]
// 0045600b: FMUL double ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 0045600e: FADD float ptr [EDX + 0x4]
// 00456011: FLD float ptr [EBX]
// 00456013: FXCH
// 00456015: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (WRITE)
// 00456019: FCOMP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (READ)
// 0045601d: FNSTSW AX
// 0045601f: SAHF
// 00456020: JNC 0x0045602d
//   XREF to: 0045602d (CONDITIONAL_JUMP)
// 00456022: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (READ)
// 00456026: MOV ECX,0x1
// 0045602b: FSTP float ptr [EBX]
// 0045602d: MOV EAX,ECX
//   Label: LAB_0045602d
// 0045602f: MOV ESP,EBP
// 00456031: POP EBP
// 00456032: POP ESI
// 00456033: POP EBX
// 00456034: RET
// 00456035: XOR EAX,EAX
//   Label: LAB_00456035
// 00456037: MOV ESP,EBP
// 00456039: POP EBP
// 0045603a: POP ESI
// 0045603b: POP EBX
// 0045603c: RET
