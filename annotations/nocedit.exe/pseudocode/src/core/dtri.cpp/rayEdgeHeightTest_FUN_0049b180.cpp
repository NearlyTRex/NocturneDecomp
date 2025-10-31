// Name: core_dtri.cpp_rayEdgeHeightTest_FUN_0049b180
// Address: 0049b180
// Address Range: [[0049b180, 0049b2ec]]
// Convention: __cdecl
// Signature: int core_dtri.cpp_rayEdgeHeightTest_FUN_0049b180(CVector3f * vertex1, CVector3f * vertex2, float rayRadius, float * outHeight)
// Cross-references:
//   core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0 (0049b2f0) at 0049b4a1 [UNCONDITIONAL_CALL]
// Globals:
//   double g_QuadraticDouble = 2
//   double g_QuadraticQuarter = 4

#include "nocturne.h"

int __cdecl
core_dtri_cpp_rayEdgeHeightTest_FUN_0049b180
          (CVector3f *vertex1,CVector3f *vertex2,float rayRadius,float *outHeight)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  fVar3 = vertex2->x - vertex1->x;
  fVar1 = vertex2->z - vertex1->z;
  fVar2 = fVar1 * fVar1 + fVar3 * fVar3;
  if (0.0 < fVar2) {
    fVar1 = (vertex1->x * fVar3 + vertex1->z * fVar1) * (float)g_QuadraticDouble;
    fVar3 = fVar1 * fVar1 -
            fVar2 * (float)g_QuadraticQuarter *
            ((vertex1->x * vertex1->x + vertex1->z * vertex1->z) - rayRadius * rayRadius);
    if (0.0 <= fVar3) {
      fVar4 = (-fVar1 - SQRT(fVar3)) / (fVar2 * (float)g_QuadraticDouble);
      iVar5 = 0;
      if (((0.0 <= fVar4) && (fVar4 <= 1.0)) &&
         (fVar4 = (vertex2->y - vertex1->y) * fVar4 + vertex1->y, *outHeight < fVar4)) {
        iVar5 = 1;
        *outHeight = fVar4;
      }
      fVar1 = (SQRT(fVar3) - fVar1) / (fVar2 * (float)g_QuadraticDouble);
      if (((0.0 <= fVar1) && (fVar1 <= 1.0)) &&
         (fVar1 = (vertex2->y - vertex1->y) * fVar1 + vertex1->y, *outHeight < fVar1)) {
        iVar5 = 1;
        *outHeight = fVar1;
      }
      return iVar5;
    }
  }
  return 0;
}


// Assembly code:
// 0049b180: PUSH EBX
//   Label: core_dtri.cpp_rayEdgeHeightTest_FUN_0049b180
// 0049b181: PUSH ESI
// 0049b182: PUSH EBP
// 0049b183: MOV EBP,ESP
// 0049b185: SUB ESP,0x50
// 0049b188: AND ESP,0xfffffff8
// 0049b18b: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0049b18e: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0049b191: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 0049b194: FLD float ptr [ESI + 0x8]
// 0049b197: FLD float ptr [ESI]
// 0049b199: FSUB float ptr [EDX]
// 0049b19b: FXCH
// 0049b19d: FSUB float ptr [EDX + 0x8]
// 0049b1a0: FXCH
// 0049b1a2: FST double ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (WRITE)
// 0049b1a6: FMUL double ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (READ)
// 0049b1aa: FXCH
// 0049b1ac: FST double ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (WRITE)
// 0049b1b0: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 0049b1b4: FADDP
// 0049b1b6: FLDZ
// 0049b1b8: FXCH
// 0049b1ba: FSTP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (WRITE)
// 0049b1be: FCOMP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 0049b1c2: FNSTSW AX
// 0049b1c4: SAHF
// 0049b1c5: JNC 0x0049b2e5
//   XREF to: 0049b2e5 (CONDITIONAL_JUMP)
// 0049b1cb: FLD float ptr [EDX + 0x8]
// 0049b1ce: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 0049b1d2: FLD float ptr [EDX + 0x8]
// 0049b1d5: FMUL ST0
// 0049b1d7: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 0049b1db: FMUL double ptr [0x00622e12]
//   XREF to: 00622e12 (READ)
// 0049b1e1: FLD float ptr [EDX]
// 0049b1e3: FMUL ST0
// 0049b1e5: FLD float ptr [EDX]
// 0049b1e7: FMUL double ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (READ)
// 0049b1eb: FXCH
// 0049b1ed: FADDP ST3,ST0
// 0049b1ef: FADDP ST3,ST0
// 0049b1f1: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0049b1f4: FMUL ST0
// 0049b1f6: FXCH ST3
// 0049b1f8: FMUL double ptr [0x00622e0a]
//   XREF to: 00622e0a (READ)
// 0049b1fe: FXCH ST3
// 0049b200: FSUBP ST2,ST0
// 0049b202: FMULP
// 0049b204: FXCH
// 0049b206: FST double ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (WRITE)
// 0049b20a: FMUL double ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 0049b20e: FSUBRP
// 0049b210: FLDZ
// 0049b212: FXCH
// 0049b214: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (WRITE)
// 0049b218: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (READ)
// 0049b21c: FNSTSW AX
// 0049b21e: SAHF
// 0049b21f: JA 0x0049b2e5
//   XREF to: 0049b2e5 (CONDITIONAL_JUMP)
// 0049b225: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 0049b229: FCHS
// 0049b22b: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (READ)
// 0049b22f: FSQRT
// 0049b231: FSUBP
// 0049b233: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 0049b237: FMUL double ptr [0x00622e0a]
//   XREF to: 00622e0a (READ)
// 0049b23d: FDIVP
// 0049b23f: FLDZ
// 0049b241: XOR ECX,ECX
// 0049b243: FXCH
// 0049b245: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (WRITE)
// 0049b249: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (READ)
// 0049b24d: FNSTSW AX
// 0049b24f: SAHF
// 0049b250: JA 0x0049b286
//   XREF to: 0049b286 (CONDITIONAL_JUMP)
// 0049b252: FLD1
// 0049b254: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (READ)
// 0049b258: FNSTSW AX
// 0049b25a: SAHF
// 0049b25b: JC 0x0049b286
//   XREF to: 0049b286 (CONDITIONAL_JUMP)
// 0049b25d: FLD float ptr [ESI + 0x4]
// 0049b260: FSUB float ptr [EDX + 0x4]
// 0049b263: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (READ)
// 0049b267: FADD float ptr [EDX + 0x4]
// 0049b26a: FLD float ptr [EBX]
// 0049b26c: FXCH
// 0049b26e: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (WRITE)
// 0049b272: FCOMP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (READ)
// 0049b276: FNSTSW AX
// 0049b278: SAHF
// 0049b279: JNC 0x0049b286
//   XREF to: 0049b286 (CONDITIONAL_JUMP)
// 0049b27b: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (READ)
// 0049b27f: MOV ECX,0x1
// 0049b284: FSTP float ptr [EBX]
// 0049b286: FLD double ptr [ESP + 0x8]
//   Label: LAB_0049b286
//   XREF to: Stack[-0x58] (READ)
// 0049b28a: FSQRT
// 0049b28c: FSUB double ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 0049b290: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 0049b294: FMUL double ptr [0x00622e0a]
//   XREF to: 00622e0a (READ)
// 0049b29a: FDIVP
// 0049b29c: FLDZ
// 0049b29e: FXCH
// 0049b2a0: FSTP double ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 0049b2a3: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 0049b2a6: FNSTSW AX
// 0049b2a8: SAHF
// 0049b2a9: JA 0x0049b2dd
//   XREF to: 0049b2dd (CONDITIONAL_JUMP)
// 0049b2ab: FLD1
// 0049b2ad: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 0049b2b0: FNSTSW AX
// 0049b2b2: SAHF
// 0049b2b3: JC 0x0049b2dd
//   XREF to: 0049b2dd (CONDITIONAL_JUMP)
// 0049b2b5: FLD float ptr [ESI + 0x4]
// 0049b2b8: FSUB float ptr [EDX + 0x4]
// 0049b2bb: FMUL double ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 0049b2be: FADD float ptr [EDX + 0x4]
// 0049b2c1: FLD float ptr [EBX]
// 0049b2c3: FXCH
// 0049b2c5: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (WRITE)
// 0049b2c9: FCOMP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (READ)
// 0049b2cd: FNSTSW AX
// 0049b2cf: SAHF
// 0049b2d0: JNC 0x0049b2dd
//   XREF to: 0049b2dd (CONDITIONAL_JUMP)
// 0049b2d2: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (READ)
// 0049b2d6: MOV ECX,0x1
// 0049b2db: FSTP float ptr [EBX]
// 0049b2dd: MOV EAX,ECX
//   Label: LAB_0049b2dd
// 0049b2df: MOV ESP,EBP
// 0049b2e1: POP EBP
// 0049b2e2: POP ESI
// 0049b2e3: POP EBX
// 0049b2e4: RET
// 0049b2e5: XOR EAX,EAX
//   Label: LAB_0049b2e5
// 0049b2e7: MOV ESP,EBP
// 0049b2e9: POP EBP
// 0049b2ea: POP ESI
// 0049b2eb: POP EBX
// 0049b2ec: RET
