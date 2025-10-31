// Name: core_xform.cpp_normalizeMatrix_FUN_005f51e0
// Address: 005f51e0
// Address Range: [[005f51e0, 005f536a]]
// Convention: __cdecl
// Signature: void core_xform.cpp_normalizeMatrix_FUN_005f51e0(CMatrix3x4f * matrix)

#include "nocturne.h"

void __cdecl core_xform_cpp_normalizeMatrix_FUN_005f51e0(CMatrix3x4f *matrix)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  
  fVar1 = matrix->m[0].x;
  fVar2 = matrix->m[0].w;
  fVar3 = matrix->m[0].y;
  dVar4 = (double)(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if ((0.0 < dVar4) && (dVar4 != 1.0)) {
    dVar4 = 1.0 / SQRT(dVar4);
    matrix->m[0].w = matrix->m[0].w * (float)dVar4;
    matrix->m[0].x = matrix->m[0].x * (float)dVar4;
    matrix->m[0].y = matrix->m[0].y * (float)dVar4;
  }
  fVar1 = matrix->m[1].w;
  fVar2 = matrix->m[1].x;
  fVar3 = matrix->m[1].y;
  dVar4 = (double)(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if ((0.0 < dVar4) && (dVar4 != 1.0)) {
    dVar4 = 1.0 / SQRT(dVar4);
    fVar1 = matrix->m[1].x;
    fVar2 = matrix->m[1].y;
    matrix->m[1].w = matrix->m[1].w * (float)dVar4;
    matrix->m[1].x = fVar1 * (float)dVar4;
    matrix->m[1].y = fVar2 * (float)dVar4;
  }
  fVar1 = matrix->m[2].w;
  fVar2 = matrix->m[2].x;
  fVar3 = matrix->m[2].y;
  dVar4 = (double)(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if ((0.0 < dVar4) && (dVar4 != 1.0)) {
    dVar4 = 1.0 / SQRT(dVar4);
    fVar1 = matrix->m[2].x;
    fVar2 = matrix->m[2].y;
    matrix->m[2].w = matrix->m[2].w * (float)dVar4;
    matrix->m[2].x = fVar1 * (float)dVar4;
    matrix->m[2].y = fVar2 * (float)dVar4;
    return;
  }
  return;
}


// Assembly code:
// 005f51e0: PUSH EBX
//   Label: core_xform.cpp_normalizeMatrix_FUN_005f51e0
// 005f51e1: PUSH ESI
// 005f51e2: PUSH EDI
// 005f51e3: PUSH EBP
// 005f51e4: MOV EBP,ESP
// 005f51e6: SUB ESP,0x30
// 005f51e9: AND ESP,0xfffffff8
// 005f51ec: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005f51ef: FLD float ptr [EDX + 0x4]
// 005f51f2: FMUL ST0
// 005f51f4: FLD float ptr [EDX]
// 005f51f6: FMUL ST0
// 005f51f8: FADDP
// 005f51fa: FLD float ptr [EDX + 0x8]
// 005f51fd: FMUL ST0
// 005f51ff: FADDP
// 005f5201: FLDZ
// 005f5203: FXCH
// 005f5205: FSTP double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 005f5208: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 005f520b: FNSTSW AX
// 005f520d: SAHF
// 005f520e: JNC 0x005f5262
//   XREF to: 005f5262 (CONDITIONAL_JUMP)
// 005f5210: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 005f5214: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 005f5217: CMP ECX,0x3ff00000
// 005f521d: JNZ 0x005f5223
//   XREF to: 005f5223 (CONDITIONAL_JUMP)
// 005f521f: TEST EBX,EBX
// 005f5221: JZ 0x005f5262
//   XREF to: 005f5262 (CONDITIONAL_JUMP)
// 005f5223: FLD double ptr [ESP]
//   Label: LAB_005f5223
//   XREF to: Stack[-0x40] (DATA)
// 005f5226: FSQRT
// 005f5228: FLD1
// 005f522a: FDIVRP
// 005f522c: FLD float ptr [EDX]
// 005f522e: FLD ST0
// 005f5230: FXCH ST2
// 005f5232: FSTP double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 005f5235: FXCH
// 005f5237: FMUL double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 005f523a: FLD float ptr [EDX + 0x4]
// 005f523d: FLD ST0
// 005f523f: FMUL double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 005f5242: FLD float ptr [EDX + 0x8]
// 005f5245: FLD ST0
// 005f5247: FMUL double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 005f524a: FXCH ST4
// 005f524c: FSTP ST5
// 005f524e: FXCH
// 005f5250: FSTP ST2
// 005f5252: FXCH ST2
// 005f5254: FSTP ST2
// 005f5256: FXCH ST2
// 005f5258: FSTP float ptr [EDX]
// 005f525a: FXCH
// 005f525c: FSTP float ptr [EDX + 0x4]
// 005f525f: FSTP float ptr [EDX + 0x8]
// 005f5262: FLD float ptr [EDX + 0x10]
//   Label: LAB_005f5262
// 005f5265: FMUL ST0
// 005f5267: FLD float ptr [EDX + 0x14]
// 005f526a: FMUL ST0
// 005f526c: FADDP
// 005f526e: FLD float ptr [EDX + 0x18]
// 005f5271: FMUL ST0
// 005f5273: FADDP
// 005f5275: FLDZ
// 005f5277: FXCH
// 005f5279: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (WRITE)
// 005f527d: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 005f5281: FNSTSW AX
// 005f5283: SAHF
// 005f5284: JNC 0x005f52e0
//   XREF to: 005f52e0 (CONDITIONAL_JUMP)
// 005f5286: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 005f528a: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 005f528e: CMP ESI,0x3ff00000
// 005f5294: JNZ 0x005f529a
//   XREF to: 005f529a (CONDITIONAL_JUMP)
// 005f5296: TEST EDI,EDI
// 005f5298: JZ 0x005f52e0
//   XREF to: 005f52e0 (CONDITIONAL_JUMP)
// 005f529a: FLD double ptr [ESP + 0x10]
//   Label: LAB_005f529a
//   XREF to: Stack[-0x30] (READ)
// 005f529e: FSQRT
// 005f52a0: FLD1
// 005f52a2: FDIVRP
// 005f52a4: FLD float ptr [EDX + 0x10]
// 005f52a7: FLD ST0
// 005f52a9: FXCH ST2
// 005f52ab: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (WRITE)
// 005f52af: FXCH
// 005f52b1: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 005f52b5: FLD float ptr [EDX + 0x14]
// 005f52b8: FLD ST0
// 005f52ba: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 005f52be: FLD float ptr [EDX + 0x18]
// 005f52c1: FLD ST0
// 005f52c3: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 005f52c7: FXCH ST4
// 005f52c9: FSTP ST5
// 005f52cb: FXCH
// 005f52cd: FSTP ST2
// 005f52cf: FXCH ST2
// 005f52d1: FSTP ST2
// 005f52d3: FXCH ST2
// 005f52d5: FSTP float ptr [EDX + 0x10]
// 005f52d8: FXCH
// 005f52da: FSTP float ptr [EDX + 0x14]
// 005f52dd: FSTP float ptr [EDX + 0x18]
// 005f52e0: FLD float ptr [EDX + 0x20]
//   Label: LAB_005f52e0
// 005f52e3: FMUL ST0
// 005f52e5: FLD float ptr [EDX + 0x24]
// 005f52e8: FMUL ST0
// 005f52ea: FADDP
// 005f52ec: FLD float ptr [EDX + 0x28]
// 005f52ef: FMUL ST0
// 005f52f1: FADDP
// 005f52f3: FLDZ
// 005f52f5: FXCH
// 005f52f7: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (WRITE)
// 005f52fb: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 005f52ff: FNSTSW AX
// 005f5301: SAHF
// 005f5302: JNC 0x005f5317
//   XREF to: 005f5317 (CONDITIONAL_JUMP)
// 005f5304: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 005f5308: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 005f530c: CMP EAX,0x3ff00000
// 005f5311: JNZ 0x005f531e
//   XREF to: 005f531e (CONDITIONAL_JUMP)
// 005f5313: TEST ECX,ECX
// 005f5315: JNZ 0x005f531e
//   XREF to: 005f531e (CONDITIONAL_JUMP)
// 005f5317: MOV ESP,EBP
//   Label: LAB_005f5317
// 005f5319: POP EBP
// 005f531a: POP EDI
// 005f531b: POP ESI
// 005f531c: POP EBX
// 005f531d: RET
// 005f531e: FLD double ptr [ESP + 0x8]
//   Label: LAB_005f531e
//   XREF to: Stack[-0x38] (READ)
// 005f5322: FSQRT
// 005f5324: FLD1
// 005f5326: FDIVRP
// 005f5328: FLD float ptr [EDX + 0x20]
// 005f532b: FLD ST0
// 005f532d: FXCH ST2
// 005f532f: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (WRITE)
// 005f5333: FXCH
// 005f5335: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 005f5339: FLD float ptr [EDX + 0x24]
// 005f533c: FLD ST0
// 005f533e: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 005f5342: FLD float ptr [EDX + 0x28]
// 005f5345: FLD ST0
// 005f5347: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 005f534b: FXCH ST4
// 005f534d: FSTP ST5
// 005f534f: FXCH
// 005f5351: FSTP ST2
// 005f5353: FXCH ST2
// 005f5355: FSTP ST2
// 005f5357: FXCH ST2
// 005f5359: FSTP float ptr [EDX + 0x20]
// 005f535c: FXCH
// 005f535e: FSTP float ptr [EDX + 0x24]
// 005f5361: FSTP float ptr [EDX + 0x28]
// 005f5364: MOV ESP,EBP
// 005f5366: POP EBP
// 005f5367: POP EDI
// 005f5368: POP ESI
// 005f5369: POP EBX
// 005f536a: RET
