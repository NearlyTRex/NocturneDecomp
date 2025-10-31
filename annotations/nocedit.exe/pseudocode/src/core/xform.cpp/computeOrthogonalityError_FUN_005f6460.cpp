// Name: core_xform.cpp_computeOrthogonalityError_FUN_005f6460
// Address: 005f6460
// Address Range: [[005f6460, 005f6686]]
// Convention: __cdecl
// Signature: float core_xform.cpp_computeOrthogonalityError_FUN_005f6460(CMatrix3x4f * matrix)

#include "nocturne.h"

float __cdecl core_xform_cpp_computeOrthogonalityError_FUN_005f6460(CMatrix3x4f *matrix)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float10 fVar10;
  double local_68;
  double local_60;
  double local_58;
  
  fVar1 = matrix->m[0].w;
  fVar2 = matrix->m[0].x;
  fVar3 = matrix->m[0].y;
  dVar9 = (double)matrix->m[1].y;
  fVar4 = matrix->m[2].w;
  fVar5 = matrix->m[2].x;
  dVar7 = (double)matrix->m[1].w;
  fVar6 = matrix->m[2].y;
  dVar8 = (double)matrix->m[1].x;
  local_60 = SQRT(dVar9 * dVar9 + dVar8 * dVar8 + dVar7 * dVar7);
  local_58 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  local_68 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  if (local_58 <= 0.0) {
    local_58 = 1.0;
  }
  if (local_60 <= 0.0) {
    local_60 = 1.0;
  }
  if (local_68 <= 0.0) {
    local_68 = 1.0;
  }
  local_58 = 1.0 / local_58;
  local_60 = 1.0 / local_60;
  local_68 = 1.0 / local_68;
  fVar10 = (float10)((double)fVar3 * local_58) * (float10)(dVar9 * local_60) +
           (float10)((double)fVar2 * local_58) * (float10)(dVar8 * local_60) +
           (float10)((double)fVar1 * local_58) * (float10)(dVar7 * local_60);
  fVar10 = (float10)((double)fVar2 * local_58) * (float10)((double)fVar5 * local_68) +
           (float10)((double)fVar1 * local_58) * (float10)((double)fVar4 * local_68) +
           (float10)((double)fVar3 * local_58) * (float10)((double)fVar6 * local_68);
  fVar10 = (float10)(dVar8 * local_60) * (float10)((double)fVar5 * local_68) +
           (float10)(dVar7 * local_60) * (float10)((double)fVar4 * local_68) +
           (float10)(dVar9 * local_60) * (float10)((double)fVar6 * local_68);
  return (float)(fVar10 * fVar10 + fVar10 * fVar10 + fVar10 * fVar10);
}


// Assembly code:
// 005f6460: PUSH EBX
//   Label: core_xform.cpp_computeOrthogonalityError_FUN_005f6460
// 005f6461: PUSH ESI
// 005f6462: PUSH EDI
// 005f6463: PUSH EBP
// 005f6464: MOV EBP,ESP
// 005f6466: SUB ESP,0x84
// 005f646c: AND ESP,0xfffffff8
// 005f646f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005f6472: FLD float ptr [EAX]
// 005f6474: FST double ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005f6477: FMUL double ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005f647a: FLD float ptr [EAX + 0x4]
// 005f647d: FST double ptr [ESP + 0x8]
//   XREF to: Stack[-0x90] (WRITE)
// 005f6481: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0x90] (READ)
// 005f6485: FLD float ptr [EAX + 0x8]
// 005f6488: FXCH
// 005f648a: FADDP ST2,ST0
// 005f648c: FST double ptr [ESP + 0x10]
//   XREF to: Stack[-0x88] (WRITE)
// 005f6490: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0x88] (READ)
// 005f6494: FLD float ptr [EAX + 0x10]
// 005f6497: FLD float ptr [EAX + 0x14]
// 005f649a: FLD float ptr [EAX + 0x18]
// 005f649d: FLD float ptr [EAX + 0x20]
// 005f64a0: FLD float ptr [EAX + 0x24]
// 005f64a3: FXCH ST4
// 005f64a5: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x80] (WRITE)
// 005f64a9: FXCH ST4
// 005f64ab: FADDP ST5,ST0
// 005f64ad: FLD float ptr [EAX + 0x28]
// 005f64b0: FXCH ST5
// 005f64b2: FSQRT
// 005f64b4: FXCH ST2
// 005f64b6: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x78] (WRITE)
// 005f64ba: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x80] (READ)
// 005f64be: FMUL ST0
// 005f64c0: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0x78] (READ)
// 005f64c4: FMUL ST0
// 005f64c6: FADDP
// 005f64c8: FXCH
// 005f64ca: FST double ptr [ESP + 0x28]
//   XREF to: Stack[-0x70] (WRITE)
// 005f64ce: FMUL double ptr [ESP + 0x28]
//   XREF to: Stack[-0x70] (READ)
// 005f64d2: FADDP
// 005f64d4: FSQRT
// 005f64d6: FXCH ST3
// 005f64d8: FST double ptr [ESP + 0x50]
//   XREF to: Stack[-0x48] (WRITE)
// 005f64dc: FMUL double ptr [ESP + 0x50]
//   XREF to: Stack[-0x48] (READ)
// 005f64e0: FXCH ST2
// 005f64e2: FST double ptr [ESP + 0x48]
//   XREF to: Stack[-0x50] (WRITE)
// 005f64e6: FMUL double ptr [ESP + 0x48]
//   XREF to: Stack[-0x50] (READ)
// 005f64ea: FADDP ST2,ST0
// 005f64ec: FXCH ST3
// 005f64ee: FST double ptr [ESP + 0x58]
//   XREF to: Stack[-0x40] (WRITE)
// 005f64f2: FMUL double ptr [ESP + 0x58]
//   XREF to: Stack[-0x40] (READ)
// 005f64f6: FADDP
// 005f64f8: FSQRT
// 005f64fa: FLDZ
// 005f64fc: FXCH ST3
// 005f64fe: FSTP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x58] (WRITE)
// 005f6502: FXCH
// 005f6504: FSTP double ptr [ESP + 0x38]
//   XREF to: Stack[-0x60] (WRITE)
// 005f6508: FSTP double ptr [ESP + 0x30]
//   XREF to: Stack[-0x68] (WRITE)
// 005f650c: FCOMP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x58] (READ)
// 005f6510: FNSTSW AX
// 005f6512: SAHF
// 005f6513: JNC 0x005f665f
//   XREF to: 005f665f (CONDITIONAL_JUMP)
// 005f6519: FLDZ
//   Label: LAB_005f6519
// 005f651b: FCOMP double ptr [ESP + 0x38]
//   XREF to: Stack[-0x60] (READ)
// 005f651f: FNSTSW AX
// 005f6521: SAHF
// 005f6522: JC 0x005f6533
//   XREF to: 005f6533 (CONDITIONAL_JUMP)
// 005f6524: XOR EBX,EBX
// 005f6526: MOV ESI,0x3ff00000
// 005f652b: MOV dword ptr [ESP + 0x38],EBX
//   XREF to: Stack[-0x60] (WRITE)
// 005f652f: MOV dword ptr [ESP + 0x3c],ESI
//   XREF to: Stack[-0x5c] (WRITE)
// 005f6533: FLDZ
//   Label: LAB_005f6533
// 005f6535: FCOMP double ptr [ESP + 0x30]
//   XREF to: Stack[-0x68] (READ)
// 005f6539: FNSTSW AX
// 005f653b: SAHF
// 005f653c: JNC 0x005f6673
//   XREF to: 005f6673 (CONDITIONAL_JUMP)
// 005f6542: FLD1
//   Label: LAB_005f6542
// 005f6544: FDIV double ptr [ESP + 0x40]
//   XREF to: Stack[-0x58] (READ)
// 005f6548: FLD1
// 005f654a: FDIV double ptr [ESP + 0x38]
//   XREF to: Stack[-0x60] (READ)
// 005f654e: FLD double ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005f6551: FMUL ST2
// 005f6553: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x90] (READ)
// 005f6557: FMUL ST3
// 005f6559: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x88] (READ)
// 005f655d: FMULP ST4
// 005f655f: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x80] (READ)
// 005f6563: FXCH ST3
// 005f6565: FSTP double ptr [ESP + 0x78]
//   XREF to: Stack[-0x20] (WRITE)
// 005f6569: FXCH ST2
// 005f656b: FMUL double ptr [ESP + 0x78]
//   XREF to: Stack[-0x20] (READ)
// 005f656f: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0x78] (READ)
// 005f6573: FMUL double ptr [ESP + 0x78]
//   XREF to: Stack[-0x20] (READ)
// 005f6577: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x70] (READ)
// 005f657b: FXCH ST3
// 005f657d: FSTP double ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005f6580: FLD1
// 005f6582: FLD double ptr [ESP + 0x50]
//   XREF to: Stack[-0x48] (READ)
// 005f6586: FXCH ST4
// 005f6588: FMUL double ptr [ESP + 0x78]
//   XREF to: Stack[-0x20] (READ)
// 005f658c: FXCH
// 005f658e: FDIV double ptr [ESP + 0x30]
//   XREF to: Stack[-0x68] (READ)
// 005f6592: FSTP double ptr [ESP + 0x78]
//   XREF to: Stack[-0x20] (WRITE)
// 005f6596: FXCH ST3
// 005f6598: FMUL double ptr [ESP + 0x78]
//   XREF to: Stack[-0x20] (READ)
// 005f659c: FXCH ST4
// 005f659e: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x90] (WRITE)
// 005f65a2: FLD double ptr [ESP + 0x48]
//   XREF to: Stack[-0x50] (READ)
// 005f65a6: FMUL double ptr [ESP + 0x78]
//   XREF to: Stack[-0x20] (READ)
// 005f65aa: FXCH ST5
// 005f65ac: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x88] (WRITE)
// 005f65b0: FLD double ptr [ESP + 0x58]
//   XREF to: Stack[-0x40] (READ)
// 005f65b4: FMUL double ptr [ESP + 0x78]
//   XREF to: Stack[-0x20] (READ)
// 005f65b8: FXCH ST2
// 005f65ba: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x80] (WRITE)
// 005f65be: FLD double ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005f65c1: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0x80] (READ)
// 005f65c5: FXCH ST4
// 005f65c7: FSTP double ptr [ESP + 0x50]
//   XREF to: Stack[-0x48] (WRITE)
// 005f65cb: FLD double ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005f65ce: FMUL double ptr [ESP + 0x50]
//   XREF to: Stack[-0x48] (READ)
// 005f65d2: FXCH
// 005f65d4: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x78] (WRITE)
// 005f65d8: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x80] (READ)
// 005f65dc: FMUL double ptr [ESP + 0x50]
//   XREF to: Stack[-0x48] (READ)
// 005f65e0: FXCH ST3
// 005f65e2: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x70] (WRITE)
// 005f65e6: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x90] (READ)
// 005f65ea: FMUL double ptr [ESP + 0x20]
//   XREF to: Stack[-0x78] (READ)
// 005f65ee: FXCH ST5
// 005f65f0: FSTP double ptr [ESP + 0x48]
//   XREF to: Stack[-0x50] (WRITE)
// 005f65f4: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x90] (READ)
// 005f65f8: FMUL double ptr [ESP + 0x48]
//   XREF to: Stack[-0x50] (READ)
// 005f65fc: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0x78] (READ)
// 005f6600: FXCH ST6
// 005f6602: FADDP ST5,ST0
// 005f6604: FXCH ST5
// 005f6606: FMUL double ptr [ESP + 0x48]
//   XREF to: Stack[-0x50] (READ)
// 005f660a: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x88] (READ)
// 005f660e: FMUL double ptr [ESP + 0x28]
//   XREF to: Stack[-0x70] (READ)
// 005f6612: FXCH ST6
// 005f6614: FADDP ST2,ST0
// 005f6616: FXCH ST2
// 005f6618: FSTP double ptr [ESP + 0x58]
//   XREF to: Stack[-0x40] (WRITE)
// 005f661c: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x88] (READ)
// 005f6620: FMUL double ptr [ESP + 0x58]
//   XREF to: Stack[-0x40] (READ)
// 005f6624: FXCH ST5
// 005f6626: FADDP ST4,ST0
// 005f6628: FLD ST3
// 005f662a: FMULP ST4
// 005f662c: FXCH
// 005f662e: FADDP ST2,ST0
// 005f6630: FADDP ST3,ST0
// 005f6632: FLD ST2
// 005f6634: FMULP ST3
// 005f6636: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x70] (READ)
// 005f663a: FMUL double ptr [ESP + 0x58]
//   XREF to: Stack[-0x40] (READ)
// 005f663e: FXCH ST3
// 005f6640: FADDP ST2,ST0
// 005f6642: FADDP ST2,ST0
// 005f6644: FLD ST1
// 005f6646: FMULP ST2
// 005f6648: FADDP
// 005f664a: FSTP float ptr [ESP + 0x80]
//   XREF to: Stack[-0x18] (WRITE)
// 005f6651: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x18] (READ)
// 005f6658: MOV ESP,EBP
// 005f665a: POP EBP
// 005f665b: POP EDI
// 005f665c: POP ESI
// 005f665d: POP EBX
// 005f665e: RET
// 005f665f: XOR EDX,EDX
//   Label: LAB_005f665f
// 005f6661: MOV ECX,0x3ff00000
// 005f6666: MOV dword ptr [ESP + 0x40],EDX
//   XREF to: Stack[-0x58] (WRITE)
// 005f666a: MOV dword ptr [ESP + 0x44],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 005f666e: JMP 0x005f6519
//   XREF to: 005f6519 (UNCONDITIONAL_JUMP)
// 005f6673: XOR EDI,EDI
//   Label: LAB_005f6673
// 005f6675: MOV EAX,0x3ff00000
// 005f667a: MOV dword ptr [ESP + 0x30],EDI
//   XREF to: Stack[-0x68] (WRITE)
// 005f667e: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 005f6682: JMP 0x005f6542
//   XREF to: 005f6542 (UNCONDITIONAL_JUMP)
