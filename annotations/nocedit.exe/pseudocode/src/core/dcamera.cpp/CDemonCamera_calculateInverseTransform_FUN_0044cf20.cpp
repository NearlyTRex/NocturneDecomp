// Name: core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20
// Address: 0044cf20
// Address Range: [[0044cf20, 0044d1b6]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20(CDemonCamera * this_ptr)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0 (0044d1c0) at 0044d287 [UNCONDITIONAL_CALL]
// Globals:
//   double g_FixedPointToFloat = 0.0000152587890625
//   double g_FloatToFixedPoint = 65536
// Function calls:
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20(CDemonCamera *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  undefined4 in_EDX;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  double dVar22;
  
  fVar2 = (float)(this_ptr->source_matrix).m[0][0] * (float)g_FixedPointToFloat;
  fVar10 = (float)(this_ptr->source_matrix).m[0][1] * (float)g_FixedPointToFloat;
  fVar12 = (float)(this_ptr->source_matrix).m[0][2] * (float)g_FixedPointToFloat;
  fVar8 = (float)(this_ptr->source_matrix).m[1][0] * (float)g_FixedPointToFloat;
  fVar3 = (float)(this_ptr->source_matrix).m[1][1] * (float)g_FixedPointToFloat;
  fVar4 = (float)(this_ptr->source_matrix).m[1][2] * (float)g_FixedPointToFloat;
  fVar11 = (float)(this_ptr->source_matrix).m[2][0] * (float)g_FixedPointToFloat;
  fVar6 = (float)(this_ptr->source_matrix).m[2][1] * (float)g_FixedPointToFloat;
  fVar7 = (float)(this_ptr->source_matrix).m[2][2] * (float)g_FixedPointToFloat;
  fVar5 = fVar3 * fVar7 - fVar4 * fVar6;
  fVar9 = fVar8 * fVar7 - fVar4 * fVar11;
  fVar1 = fVar8 * fVar6 - fVar3 * fVar11;
  fVar6 = -(fVar10 * fVar7 - fVar12 * fVar6);
  fVar13 = (float)g_FloatToFixedPoint / (fVar12 * fVar1 + (fVar2 * fVar5 - fVar10 * fVar9));
  fVar15 = (float10)fVar5 * (float10)fVar13;
  fVar16 = (float10)fVar6 * (float10)fVar13;
  fVar17 = (float10)(fVar10 * fVar4 - fVar12 * fVar3) * (float10)fVar13;
  fVar18 = (float10)-fVar9 * (float10)fVar13;
  fVar19 = (float10)(fVar2 * fVar7 - fVar12 * fVar11) * (float10)fVar13;
  fVar20 = (float10)-(fVar2 * fVar4 - fVar12 * fVar8) * (float10)fVar13;
  fVar21 = (float10)fVar1 * (float10)fVar13;
  dVar22 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,this_ptr));
  *(int *)(SUB84(dVar22,0) + 0x19c) = (int)ROUND(fVar15);
  fVar15 = (float10)fVar6 * (float10)fVar7;
  dVar22 = crt_math_c_round_FUN_005fe6b0(dVar22);
  *(int *)(SUB84(dVar22,0) + 0x1a0) = (int)ROUND(fVar16);
  fVar16 = (float10)fVar12 * (float10)fVar11;
  dVar22 = crt_math_c_round_FUN_005fe6b0(dVar22);
  dVar22 = crt_math_c_round_FUN_005fe6b0(dVar22);
  dVar22 = crt_math_c_round_FUN_005fe6b0(dVar22);
  dVar22 = crt_math_c_round_FUN_005fe6b0(dVar22);
  dVar22 = crt_math_c_round_FUN_005fe6b0(dVar22);
  dVar22 = crt_math_c_round_FUN_005fe6b0(dVar22);
  dVar22 = crt_math_c_round_FUN_005fe6b0(dVar22);
  iVar14 = SUB84(dVar22,0);
  *(int *)(iVar14 + 0x1a4) = (int)ROUND(fVar17);
  *(int *)(iVar14 + 0x1a8) = (int)ROUND(fVar18);
  *(int *)(iVar14 + 0x1ac) = (int)ROUND(fVar19);
  *(int *)(iVar14 + 0x1b0) = (int)ROUND(fVar20);
  *(int *)(iVar14 + 0x1b4) = (int)ROUND(fVar21);
  *(int *)(iVar14 + 0x1b8) = (int)ROUND(fVar15);
  *(int *)(iVar14 + 0x1bc) = (int)ROUND(fVar16);
  return;
}


// Assembly code:
// 0044cf20: PUSH EBP
//   Label: core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20
// 0044cf21: MOV EBP,ESP
// 0044cf23: SUB ESP,0x54
// 0044cf26: AND ESP,0xfffffff8
// 0044cf29: MOV EAX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0044cf2c: FILD dword ptr [EAX + 0x178]
// 0044cf32: FMUL double ptr [0x0061a09a]
//   XREF to: 0061a09a (READ)
// 0044cf38: FILD dword ptr [EAX + 0x17c]
// 0044cf3e: FMUL double ptr [0x0061a09a]
//   XREF to: 0061a09a (READ)
// 0044cf44: FILD dword ptr [EAX + 0x180]
// 0044cf4a: FMUL double ptr [0x0061a09a]
//   XREF to: 0061a09a (READ)
// 0044cf50: FILD dword ptr [EAX + 0x184]
// 0044cf56: FMUL double ptr [0x0061a09a]
//   XREF to: 0061a09a (READ)
// 0044cf5c: FILD dword ptr [EAX + 0x188]
// 0044cf62: FMUL double ptr [0x0061a09a]
//   XREF to: 0061a09a (READ)
// 0044cf68: FILD dword ptr [EAX + 0x18c]
// 0044cf6e: FMUL double ptr [0x0061a09a]
//   XREF to: 0061a09a (READ)
// 0044cf74: FILD dword ptr [EAX + 0x190]
// 0044cf7a: FMUL double ptr [0x0061a09a]
//   XREF to: 0061a09a (READ)
// 0044cf80: FXCH ST6
// 0044cf82: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x8] (WRITE)
// 0044cf86: FILD dword ptr [EAX + 0x194]
// 0044cf8c: FMUL double ptr [0x0061a09a]
//   XREF to: 0061a09a (READ)
// 0044cf92: FXCH ST2
// 0044cf94: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x14] (WRITE)
// 0044cf98: FILD dword ptr [EAX + 0x198]
// 0044cf9e: FMUL double ptr [0x0061a09a]
//   XREF to: 0061a09a (READ)
// 0044cfa4: FXCH
// 0044cfa6: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x3c] (WRITE)
// 0044cfaa: FXCH ST2
// 0044cfac: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (WRITE)
// 0044cfb0: FXCH
// 0044cfb2: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0044cfb6: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x14] (READ)
// 0044cfba: FXCH ST2
// 0044cfbc: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x54] (WRITE)
// 0044cfc0: FXCH
// 0044cfc2: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x54] (READ)
// 0044cfc6: FSUBRP
// 0044cfc8: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x8] (READ)
// 0044cfcc: FXCH
// 0044cfce: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (WRITE)
// 0044cfd2: FMUL float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (READ)
// 0044cfd6: FXCH
// 0044cfd8: FST float ptr [ESP + 0x48]
//   XREF to: Stack[-0x10] (WRITE)
// 0044cfdc: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x54] (READ)
// 0044cfe0: FXCH ST3
// 0044cfe2: FST float ptr [ESP + 0x4c]
//   XREF to: Stack[-0xc] (WRITE)
// 0044cfe6: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x54] (READ)
// 0044cfea: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x3c] (READ)
// 0044cfee: FXCH ST5
// 0044cff0: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x50] (WRITE)
// 0044cff4: FXCH ST4
// 0044cff6: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x50] (READ)
// 0044cffa: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x8] (READ)
// 0044cffe: FXCH
// 0044d000: FSUBP ST4,ST0
// 0044d002: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x54] (READ)
// 0044d006: FXCH ST3
// 0044d008: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x44] (WRITE)
// 0044d00c: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0xc] (READ)
// 0044d010: FMUL float ptr [ESP + 0x14]
//   XREF to: Stack[-0x44] (READ)
// 0044d014: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x8] (READ)
// 0044d018: FXCH
// 0044d01a: FSUBP ST2,ST0
// 0044d01c: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0044d020: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x10] (READ)
// 0044d024: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0044d028: FXCH ST3
// 0044d02a: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (WRITE)
// 0044d02e: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0xc] (READ)
// 0044d032: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x3c] (READ)
// 0044d036: FXCH ST3
// 0044d038: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x38] (WRITE)
// 0044d03c: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x14] (READ)
// 0044d040: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x50] (READ)
// 0044d044: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (READ)
// 0044d048: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0044d04c: FXCH
// 0044d04e: FSUBR float ptr [ESP + 0x20]
//   XREF to: Stack[-0x38] (READ)
// 0044d052: FXCH
// 0044d054: FSUBP ST6,ST0
// 0044d056: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x18] (WRITE)
// 0044d05a: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (READ)
// 0044d05e: FMUL float ptr [ESP + 0x40]
//   XREF to: Stack[-0x18] (READ)
// 0044d062: FXCH ST5
// 0044d064: FCHS
// 0044d066: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x28] (WRITE)
// 0044d06a: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (READ)
// 0044d06e: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x50] (READ)
// 0044d072: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x8] (READ)
// 0044d076: FXCH
// 0044d078: FSUBP ST5,ST0
// 0044d07a: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x3c] (READ)
// 0044d07e: FXCH ST4
// 0044d080: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x24] (WRITE)
// 0044d084: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0xc] (READ)
// 0044d088: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x50] (READ)
// 0044d08c: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (READ)
// 0044d090: FMUL float ptr [ESP + 0x44]
//   XREF to: Stack[-0x14] (READ)
// 0044d094: FXCH
// 0044d096: FSUBP ST2,ST0
// 0044d098: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (READ)
// 0044d09c: FMUL float ptr [ESP + 0x48]
//   XREF to: Stack[-0x10] (READ)
// 0044d0a0: FXCH
// 0044d0a2: FSUBP ST4,ST0
// 0044d0a4: FSUBP ST4,ST0
// 0044d0a6: FCHS
// 0044d0a8: FXCH ST2
// 0044d0aa: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x30] (WRITE)
// 0044d0ae: FXCH ST2
// 0044d0b0: FCHS
// 0044d0b2: FXCH
// 0044d0b4: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x2c] (WRITE)
// 0044d0b8: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x20] (WRITE)
// 0044d0bc: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x44] (READ)
// 0044d0c0: FCHS
// 0044d0c2: FXCH ST2
// 0044d0c4: FADDP
// 0044d0c6: FXCH
// 0044d0c8: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 0044d0cc: FSTP float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0044d0cf: FLD float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0044d0d2: FDIVR double ptr [0x0061a0a2]
//   XREF to: 0061a0a2 (READ)
// 0044d0d8: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x8] (READ)
// 0044d0dc: FMUL float ptr [ESP + 0x44]
//   XREF to: Stack[-0x14] (READ)
// 0044d0e0: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0xc] (READ)
// 0044d0e4: FMUL float ptr [ESP + 0x48]
//   XREF to: Stack[-0x10] (READ)
// 0044d0e8: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (READ)
// 0044d0ec: FXCH ST3
// 0044d0ee: FSTP float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0044d0f1: FXCH ST2
// 0044d0f3: FMUL float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0044d0f6: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x28] (READ)
// 0044d0fa: FMUL float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0044d0fd: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x30] (READ)
// 0044d101: FMUL float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0044d104: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (READ)
// 0044d108: FMUL float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0044d10b: FXCH ST5
// 0044d10d: FSUBP ST4,ST0
// 0044d10f: FXCH ST3
// 0044d111: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x48] (WRITE)
// 0044d115: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x24] (READ)
// 0044d119: FMUL float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0044d11c: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x20] (READ)
// 0044d120: FMUL float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0044d123: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x18] (READ)
// 0044d127: FMUL float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0044d12a: FXCH ST4
// 0044d12c: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0044d131: FISTP dword ptr [EAX + 0x19c]
// 0044d137: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x2c] (READ)
// 0044d13b: FMUL float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0044d13e: FXCH ST3
// 0044d140: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0044d145: FISTP dword ptr [EAX + 0x1a0]
// 0044d14b: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x48] (READ)
// 0044d14f: FMUL float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0044d152: FXCH ST5
// 0044d154: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0044d159: FXCH ST6
// 0044d15b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0044d160: FXCH ST2
// 0044d162: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0044d167: FXCH
// 0044d169: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0044d16e: FXCH ST4
// 0044d170: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0044d175: FXCH ST3
// 0044d177: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0044d17c: FXCH ST5
// 0044d17e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0044d183: FXCH ST6
// 0044d185: FISTP dword ptr [EAX + 0x1a4]
// 0044d18b: FXCH
// 0044d18d: FISTP dword ptr [EAX + 0x1a8]
// 0044d193: FISTP dword ptr [EAX + 0x1ac]
// 0044d199: FXCH
// 0044d19b: FISTP dword ptr [EAX + 0x1b0]
// 0044d1a1: FISTP dword ptr [EAX + 0x1b4]
// 0044d1a7: FISTP dword ptr [EAX + 0x1b8]
// 0044d1ad: FISTP dword ptr [EAX + 0x1bc]
// 0044d1b3: MOV ESP,EBP
// 0044d1b5: POP EBP
// 0044d1b6: RET
