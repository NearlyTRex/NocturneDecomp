// Name: core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0
// Address: 005f5bd0
// Address Range: [[005f5bd0, 005f610a]]
// Convention: __cdecl
// Signature: CVector3f * core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(CVector3f * euler_out, CMatrix3x3f * matrix_ptr)
// Cross-references:
//   core_bodypart.cpp_FUN_0041a630 (0041a630) at 0041a8c4 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 005980d5 [UNCONDITIONAL_CALL]
//   core_xform.cpp_quaternionToEulerAnglesZYX_FUN_005f7af0 (005f7af0) at 005f7b10 [UNCONDITIONAL_CALL]
// Globals:
//   double g_MathConstantNegativeOne = -1
//   double g_MathConstantNegativePi = -3.14159265359000
//   float g_MathConstantTwoPi = 6.283185
//   double g_MathConstantSqrtTwoOverTwo = 0.707000000000000
//   double g_MathConstantNegativeSqrtTwoOverTwo = -0.707000000000000
//   double g_MathConstantPi = 3.14159265359000
//   float g_MathConstantNegativeTwoPi = -6.283185
// Function calls:
//   crt_math.c_acos_FUN_00600162
//   crt_math.c_asin_FUN_00600b94

#include "nocturne.h"

CVector3f * __cdecl
core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(CVector3f *euler_out,CMatrix3x3f *matrix_ptr)

{
  double dVar1;
  float fVar2;
  double x;
  CVector3f *extraout_ECX;
  CVector3f *extraout_ECX_00;
  CVector3f *extraout_ECX_01;
  CVector3f *extraout_ECX_02;
  CVector3f *extraout_ECX_03;
  CVector3f *extraout_ECX_04;
  CVector3f *pCVar3;
  CVector3f *extraout_ECX_05;
  CVector3f *extraout_EDX;
  CVector3f *extraout_EDX_00;
  CVector3f *pCVar4;
  CVector3f *extraout_EDX_01;
  float10 fVar5;
  float10 extraout_ST1;
  double dVar6;
  undefined4 uStack_ac;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  float fStack_1c;
  float local_18;
  float local_14;
  
  dVar6 = (double)SQRT(euler_out->z * euler_out->z +
                       euler_out->x * euler_out->x + euler_out->y * euler_out->y);
  if (0.0 < dVar6) {
    dVar6 = 1.0 / dVar6;
  }
  uStack_84 = (undefined4)((ulonglong)dVar6 >> 0x20);
  local_88 = SUB84(dVar6,0);
  dVar6 = (double)SQRT(euler_out[2].x * euler_out[2].x +
                       euler_out[1].z * euler_out[1].z + euler_out[1].y * euler_out[1].y);
  if (0.0 < dVar6) {
    dVar6 = 1.0 / dVar6;
  }
  local_98 = SUB84(dVar6,0);
  dVar6 = (double)SQRT(euler_out[3].y * euler_out[3].y +
                       euler_out[3].x * euler_out[3].x + euler_out[2].z * euler_out[2].z);
  if (0.0 < dVar6) {
    dVar6 = 1.0 / dVar6;
  }
  local_80 = SUB84(dVar6,0);
  fVar2 = -euler_out[3].x * (float)dVar6;
  uStack_8c = (undefined4)((ulonglong)(double)fVar2 >> 0x20);
  if ((float)g_MathConstantNegativeOne < fVar2) {
    if ((double)fVar2 < 1.0) {
      fVar5 = crt_math_c_asin_FUN_00600b94((float10)fVar2);
      extraout_ECX_00->x = (float)fVar5;
      dVar6 = (double)SQRT((float10)1 - extraout_ST1 * extraout_ST1);
      if (fVar5 < (float10)g_MathConstantNegativePi) {
        extraout_ECX_00->x = extraout_ECX_00->x + g_MathConstantTwoPi;
      }
      matrix_ptr = (CMatrix3x3f *)extraout_ECX_00;
      euler_out = extraout_EDX;
      if (0.0 < dVar6) {
        dVar6 = 1.0 / dVar6;
        dVar1 = (double)extraout_EDX[2].z * (double)CONCAT44(local_80,uStack_84) * dVar6;
        x = (double)extraout_EDX[3].y * (double)CONCAT44(local_80,uStack_84) * dVar6;
        if ((g_MathConstantSqrtTwoOverTwo <= dVar1) ||
           (dVar1 <= g_MathConstantNegativeSqrtTwoOverTwo)) {
          pCVar3 = extraout_ECX_00;
          pCVar4 = extraout_EDX;
          if (g_MathConstantNegativeOne < x) {
            if (x < 1.0) {
              crt_math_c_acos_FUN_00600162(x);
              pCVar3 = extraout_ECX_04;
              pCVar4 = extraout_EDX_01;
            }
            else {
              local_14 = 0.0;
            }
          }
          else {
            local_14 = 3.1415927;
          }
          if (dVar1 < 0.0) {
            local_14 = -local_14;
          }
        }
        else {
          fVar5 = crt_math_c_asin_FUN_00600b94((float10)dVar1);
          local_14 = (float)fVar5;
          pCVar3 = extraout_ECX_01;
          pCVar4 = extraout_EDX_00;
          if (x < 0.0) {
            local_14 = (float)g_MathConstantPi - local_14;
          }
        }
        if (local_14 < (float)g_MathConstantNegativePi) {
          local_14 = local_14 + g_MathConstantTwoPi;
        }
        if ((float)g_MathConstantPi < local_14) {
          local_14 = local_14 + g_MathConstantNegativeTwoPi;
        }
        pCVar3->y = local_14;
        fVar2 = pCVar4->y * (float)(double)CONCAT44(local_88,uStack_8c) * (float)dVar6;
        dVar1 = (double)fVar2;
        uStack_ac = SUB84(dVar1,0);
        dVar6 = (double)(pCVar4[1].z * (float)(double)CONCAT44(local_98,uStack_9c) * (float)dVar6);
        if ((g_MathConstantSqrtTwoOverTwo <= dVar1) ||
           (dVar1 <= g_MathConstantNegativeSqrtTwoOverTwo)) {
          if (g_MathConstantNegativeOne < dVar6) {
            if (dVar6 < 1.0) {
              dVar6 = crt_math_c_acos_FUN_00600162(dVar6);
              dVar1 = (double)CONCAT44((float)dVar6,uStack_ac);
              pCVar3 = extraout_ECX_05;
            }
            else {
              fStack_1c = 0.0;
            }
          }
          else {
            fStack_1c = 3.1415927;
          }
          if (dVar1 < 0.0) {
            fStack_1c = -fStack_1c;
          }
        }
        else {
          fVar5 = crt_math_c_asin_FUN_00600b94((float10)fVar2);
          fStack_1c = (float)fVar5;
          pCVar3 = extraout_ECX_02;
          if (dVar6 < 0.0) {
            fStack_1c = (float)g_MathConstantPi - fStack_1c;
          }
        }
        if (fStack_1c < (float)g_MathConstantNegativePi) {
          fStack_1c = fStack_1c + g_MathConstantTwoPi;
        }
        if ((float)g_MathConstantPi < fStack_1c) {
          fStack_1c = fStack_1c + g_MathConstantNegativeTwoPi;
        }
        pCVar3->z = fStack_1c;
        return pCVar3;
      }
    }
    else {
      matrix_ptr->m[0].x = 1.5707964;
    }
  }
  else {
    matrix_ptr->m[0].x = -1.5707964;
  }
  matrix_ptr->m[0].z = 0.0;
  fVar2 = -euler_out->z * (float)(double)CONCAT44(local_88,uStack_8c);
  dVar6 = (double)fVar2;
  dVar1 = (double)(euler_out->x * (float)(double)CONCAT44(local_88,uStack_8c));
  if ((g_MathConstantSqrtTwoOverTwo <= dVar6) || (dVar6 <= g_MathConstantNegativeSqrtTwoOverTwo)) {
    if (g_MathConstantNegativeOne < dVar1) {
      if (dVar1 < 1.0) {
        crt_math_c_acos_FUN_00600162(dVar1);
        matrix_ptr = (CMatrix3x3f *)extraout_ECX_03;
      }
      else {
        local_18 = 0.0;
      }
    }
    else {
      local_18 = 3.1415927;
    }
    if (dVar6 < 0.0) {
      local_18 = -local_18;
    }
  }
  else {
    fVar5 = crt_math_c_asin_FUN_00600b94((float10)fVar2);
    local_18 = (float)fVar5;
    matrix_ptr = (CMatrix3x3f *)extraout_ECX;
    if (dVar1 < 0.0) {
      local_18 = (float)g_MathConstantPi - local_18;
    }
  }
  if (local_18 < (float)g_MathConstantNegativePi) {
    local_18 = local_18 + g_MathConstantTwoPi;
  }
  if ((float)g_MathConstantPi < local_18) {
    local_18 = local_18 + g_MathConstantNegativeTwoPi;
  }
  matrix_ptr->m[0].y = local_18;
  return matrix_ptr->m;
}


// Assembly code:
// 005f5bd0: PUSH EBX
//   Label: core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0
// 005f5bd1: PUSH EDI
// 005f5bd2: PUSH EBP
// 005f5bd3: MOV EBP,ESP
// 005f5bd5: SUB ESP,0x9c
// 005f5bdb: AND ESP,0xfffffff8
// 005f5bde: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005f5be1: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005f5be4: FLD float ptr [EDX + 0x4]
// 005f5be7: FMUL ST0
// 005f5be9: FLD float ptr [EDX]
// 005f5beb: FMUL ST0
// 005f5bed: FADDP
// 005f5bef: FLD float ptr [EDX + 0x8]
// 005f5bf2: FMUL ST0
// 005f5bf4: FADDP
// 005f5bf6: FSQRT
// 005f5bf8: FLDZ
// 005f5bfa: FXCH
// 005f5bfc: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x88] (WRITE)
// 005f5c00: FCOMP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x88] (READ)
// 005f5c04: FNSTSW AX
// 005f5c06: SAHF
// 005f5c07: JC 0x005f5d84
//   XREF to: 005f5d84 (CONDITIONAL_JUMP)
// 005f5c0d: FLD float ptr [EDX + 0x10]
//   Label: LAB_005f5c0d
// 005f5c10: FMUL ST0
// 005f5c12: FLD float ptr [EDX + 0x14]
// 005f5c15: FMUL ST0
// 005f5c17: FADDP
// 005f5c19: FLD float ptr [EDX + 0x18]
// 005f5c1c: FMUL ST0
// 005f5c1e: FADDP
// 005f5c20: FSQRT
// 005f5c22: FLDZ
// 005f5c24: FXCH
// 005f5c26: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x98] (WRITE)
// 005f5c2a: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x98] (READ)
// 005f5c2e: FNSTSW AX
// 005f5c30: SAHF
// 005f5c31: JNC 0x005f5c3d
//   XREF to: 005f5c3d (CONDITIONAL_JUMP)
// 005f5c33: FLD1
// 005f5c35: FDIV double ptr [ESP + 0x10]
//   XREF to: Stack[-0x98] (READ)
// 005f5c39: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x98] (WRITE)
// 005f5c3d: FLD float ptr [EDX + 0x20]
//   Label: LAB_005f5c3d
// 005f5c40: FMUL ST0
// 005f5c42: FLD float ptr [EDX + 0x24]
// 005f5c45: FMUL ST0
// 005f5c47: FADDP
// 005f5c49: FLD float ptr [EDX + 0x28]
// 005f5c4c: FMUL ST0
// 005f5c4e: FADDP
// 005f5c50: FSQRT
// 005f5c52: FLDZ
// 005f5c54: FXCH
// 005f5c56: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x80] (WRITE)
// 005f5c5a: FCOMP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x80] (READ)
// 005f5c5e: FNSTSW AX
// 005f5c60: SAHF
// 005f5c61: JNC 0x005f5c6d
//   XREF to: 005f5c6d (CONDITIONAL_JUMP)
// 005f5c63: FLD1
// 005f5c65: FDIV double ptr [ESP + 0x28]
//   XREF to: Stack[-0x80] (READ)
// 005f5c69: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x80] (WRITE)
// 005f5c6d: FLD float ptr [EDX + 0x24]
//   Label: LAB_005f5c6d
// 005f5c70: FCHS
// 005f5c72: FMUL double ptr [ESP + 0x28]
//   XREF to: Stack[-0x80] (READ)
// 005f5c76: FST double ptr [ESP + 0x18]
//   XREF to: Stack[-0x90] (WRITE)
// 005f5c7a: FCOMP double ptr [0x00658355]
//   XREF to: 00658355 (READ)
// 005f5c80: FNSTSW AX
// 005f5c82: SAHF
// 005f5c83: JA 0x005f5d93
//   XREF to: 005f5d93 (CONDITIONAL_JUMP)
// 005f5c89: MOV dword ptr [ECX],0xbfc90fdb
// 005f5c8f: MOV dword ptr [ECX + 0x8],0x0
//   Label: LAB_005f5c8f
// 005f5c96: FLD float ptr [EDX + 0x8]
// 005f5c99: FCHS
// 005f5c9b: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0x88] (READ)
// 005f5c9f: FXCH
// 005f5ca1: FMUL ST1
// 005f5ca3: FLD float ptr [EDX]
// 005f5ca5: FMULP ST2
// 005f5ca7: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xa0] (WRITE)
// 005f5cab: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xa0] (READ)
// 005f5caf: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 005f5cb3: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x9c] (READ)
// 005f5cb7: FSTP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x68] (WRITE)
// 005f5cbb: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 005f5cbf: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x68] (READ)
// 005f5cc3: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005f5cc7: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x64] (READ)
// 005f5ccb: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xa0] (READ)
// 005f5ccf: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005f5cd3: FCOMP double ptr [0x0065836d]
//   XREF to: 0065836d (READ)
// 005f5cd9: FNSTSW AX
// 005f5cdb: SAHF
// 005f5cdc: JNC 0x005f5feb
//   XREF to: 005f5feb (CONDITIONAL_JUMP)
// 005f5ce2: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xa0] (READ)
// 005f5ce6: FCOMP double ptr [0x00658375]
//   XREF to: 00658375 (READ)
// 005f5cec: FNSTSW AX
// 005f5cee: SAHF
// 005f5cef: JBE 0x005f5feb
//   XREF to: 005f5feb (CONDITIONAL_JUMP)
// 005f5cf5: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xa0] (READ)
// 005f5cf9: CALL crt_math.c_asin_FUN_00600b94
//   XREF to: 00600b94 (UNCONDITIONAL_CALL)
// 005f5cfe: FLDZ
// 005f5d00: FXCH
// 005f5d02: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x14] (WRITE)
// 005f5d09: FCOMP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x68] (READ)
// 005f5d0d: FNSTSW AX
// 005f5d0f: SAHF
// 005f5d10: JBE 0x005f5d26
//   XREF to: 005f5d26 (CONDITIONAL_JUMP)
// 005f5d12: FLD float ptr [ESP + 0x94]
//   XREF to: Stack[-0x14] (READ)
// 005f5d19: FSUBR double ptr [0x0065837d]
//   XREF to: 0065837d (READ)
// 005f5d1f: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x14] (WRITE)
// 005f5d26: FLD float ptr [ESP + 0x94]
//   Label: LAB_005f5d26
//   XREF to: Stack[-0x14] (READ)
// 005f5d2d: FCOMP double ptr [0x0065835d]
//   XREF to: 0065835d (READ)
// 005f5d33: FNSTSW AX
// 005f5d35: SAHF
// 005f5d36: JNC 0x005f5d4c
//   XREF to: 005f5d4c (CONDITIONAL_JUMP)
// 005f5d38: FLD float ptr [ESP + 0x94]
//   XREF to: Stack[-0x14] (READ)
// 005f5d3f: FADD float ptr [0x00658365]
//   XREF to: 00658365 (READ)
// 005f5d45: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x14] (WRITE)
// 005f5d4c: FLD float ptr [ESP + 0x94]
//   Label: LAB_005f5d4c
//   XREF to: Stack[-0x14] (READ)
// 005f5d53: FCOMP double ptr [0x0065837d]
//   XREF to: 0065837d (READ)
// 005f5d59: FNSTSW AX
// 005f5d5b: SAHF
// 005f5d5c: JBE 0x005f5d72
//   XREF to: 005f5d72 (CONDITIONAL_JUMP)
// 005f5d5e: FLD float ptr [ESP + 0x94]
//   XREF to: Stack[-0x14] (READ)
// 005f5d65: FADD float ptr [0x00658385]
//   XREF to: 00658385 (READ)
// 005f5d6b: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x14] (WRITE)
// 005f5d72: MOV EAX,dword ptr [ESP + 0x94]
//   Label: LAB_005f5d72
//   XREF to: Stack[-0x14] (READ)
// 005f5d79: MOV dword ptr [ECX + 0x4],EAX
// 005f5d7c: MOV EAX,ECX
// 005f5d7e: MOV ESP,EBP
// 005f5d80: POP EBP
// 005f5d81: POP EDI
// 005f5d82: POP EBX
// 005f5d83: RET
// 005f5d84: FLD1
//   Label: LAB_005f5d84
// 005f5d86: FDIV double ptr [ESP + 0x20]
//   XREF to: Stack[-0x88] (READ)
// 005f5d8a: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x88] (WRITE)
// 005f5d8e: JMP 0x005f5c0d
//   XREF to: 005f5c0d (UNCONDITIONAL_JUMP)
// 005f5d93: FLD1
//   Label: LAB_005f5d93
// 005f5d95: FCOMP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x90] (READ)
// 005f5d99: FNSTSW AX
// 005f5d9b: SAHF
// 005f5d9c: JA 0x005f5da9
//   XREF to: 005f5da9 (CONDITIONAL_JUMP)
// 005f5d9e: MOV dword ptr [ECX],0x3fc90fdb
// 005f5da4: JMP 0x005f5c8f
//   XREF to: 005f5c8f (UNCONDITIONAL_JUMP)
// 005f5da9: FLD double ptr [ESP + 0x18]
//   Label: LAB_005f5da9
//   XREF to: Stack[-0x90] (READ)
// 005f5dad: FLD ST0
// 005f5daf: CALL crt_math.c_asin_FUN_00600b94
//   XREF to: 00600b94 (UNCONDITIONAL_CALL)
// 005f5db4: FLD ST1
// 005f5db6: FMULP ST2
// 005f5db8: FLD1
// 005f5dba: FSUBRP ST2,ST0
// 005f5dbc: FXCH
// 005f5dbe: FSQRT
// 005f5dc0: FXCH
// 005f5dc2: FST float ptr [ECX]
// 005f5dc4: FXCH
// 005f5dc6: FSTP double ptr [ESP + 0x50]
//   XREF to: Stack[-0x58] (WRITE)
// 005f5dca: FCOMP double ptr [0x0065835d]
//   XREF to: 0065835d (READ)
// 005f5dd0: FNSTSW AX
// 005f5dd2: SAHF
// 005f5dd3: JNC 0x005f5ddf
//   XREF to: 005f5ddf (CONDITIONAL_JUMP)
// 005f5dd5: FLD float ptr [ECX]
// 005f5dd7: FADD float ptr [0x00658365]
//   XREF to: 00658365 (READ)
// 005f5ddd: FSTP float ptr [ECX]
// 005f5ddf: FLDZ
//   Label: LAB_005f5ddf
// 005f5de1: FCOMP double ptr [ESP + 0x50]
//   XREF to: Stack[-0x58] (READ)
// 005f5de5: FNSTSW AX
// 005f5de7: SAHF
// 005f5de8: JNC 0x005f5c8f
//   XREF to: 005f5c8f (CONDITIONAL_JUMP)
// 005f5dee: FLD1
// 005f5df0: FDIV double ptr [ESP + 0x50]
//   XREF to: Stack[-0x58] (READ)
// 005f5df4: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x80] (READ)
// 005f5df8: FLD float ptr [EDX + 0x28]
// 005f5dfb: FMUL ST1
// 005f5dfd: FLD float ptr [EDX + 0x20]
// 005f5e00: FMULP ST2
// 005f5e02: FXCH ST2
// 005f5e04: FSTP double ptr [ESP + 0x70]
//   XREF to: Stack[-0x38] (WRITE)
// 005f5e08: FMUL double ptr [ESP + 0x70]
//   XREF to: Stack[-0x38] (READ)
// 005f5e0c: FXCH
// 005f5e0e: FMUL double ptr [ESP + 0x70]
//   XREF to: Stack[-0x38] (READ)
// 005f5e12: FXCH
// 005f5e14: FSTP double ptr [ESP + 0x78]
//   XREF to: Stack[-0x30] (WRITE)
// 005f5e18: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x30] (READ)
// 005f5e1c: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005f5e23: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x2c] (READ)
// 005f5e27: FSTP double ptr [ESP + 0x48]
//   XREF to: Stack[-0x60] (WRITE)
// 005f5e2b: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005f5e32: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x60] (READ)
// 005f5e36: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005f5e3a: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 005f5e3e: FLD double ptr [ESP + 0x78]
//   XREF to: Stack[-0x30] (READ)
// 005f5e42: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005f5e46: FCOMP double ptr [0x0065836d]
//   XREF to: 0065836d (READ)
// 005f5e4c: FNSTSW AX
// 005f5e4e: SAHF
// 005f5e4f: JNC 0x005f6049
//   XREF to: 005f6049 (CONDITIONAL_JUMP)
// 005f5e55: FLD double ptr [ESP + 0x78]
//   XREF to: Stack[-0x30] (READ)
// 005f5e59: FCOMP double ptr [0x00658375]
//   XREF to: 00658375 (READ)
// 005f5e5f: FNSTSW AX
// 005f5e61: SAHF
// 005f5e62: JBE 0x005f6049
//   XREF to: 005f6049 (CONDITIONAL_JUMP)
// 005f5e68: FLD double ptr [ESP + 0x78]
//   XREF to: Stack[-0x30] (READ)
// 005f5e6c: CALL crt_math.c_asin_FUN_00600b94
//   XREF to: 00600b94 (UNCONDITIONAL_CALL)
// 005f5e71: FLDZ
// 005f5e73: FXCH
// 005f5e75: FSTP float ptr [ESP + 0x98]
//   XREF to: Stack[-0x10] (WRITE)
// 005f5e7c: FCOMP double ptr [ESP + 0x48]
//   XREF to: Stack[-0x60] (READ)
// 005f5e80: FNSTSW AX
// 005f5e82: SAHF
// 005f5e83: JBE 0x005f5e99
//   XREF to: 005f5e99 (CONDITIONAL_JUMP)
// 005f5e85: FLD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x10] (READ)
// 005f5e8c: FSUBR double ptr [0x0065837d]
//   XREF to: 0065837d (READ)
// 005f5e92: FSTP float ptr [ESP + 0x98]
//   XREF to: Stack[-0x10] (WRITE)
// 005f5e99: FLD float ptr [ESP + 0x98]
//   Label: LAB_005f5e99
//   XREF to: Stack[-0x10] (READ)
// 005f5ea0: FCOMP double ptr [0x0065835d]
//   XREF to: 0065835d (READ)
// 005f5ea6: FNSTSW AX
// 005f5ea8: SAHF
// 005f5ea9: JNC 0x005f5ebf
//   XREF to: 005f5ebf (CONDITIONAL_JUMP)
// 005f5eab: FLD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x10] (READ)
// 005f5eb2: FADD float ptr [0x00658365]
//   XREF to: 00658365 (READ)
// 005f5eb8: FSTP float ptr [ESP + 0x98]
//   XREF to: Stack[-0x10] (WRITE)
// 005f5ebf: FLD float ptr [ESP + 0x98]
//   Label: LAB_005f5ebf
//   XREF to: Stack[-0x10] (READ)
// 005f5ec6: FCOMP double ptr [0x0065837d]
//   XREF to: 0065837d (READ)
// 005f5ecc: FNSTSW AX
// 005f5ece: SAHF
// 005f5ecf: JBE 0x005f5ee5
//   XREF to: 005f5ee5 (CONDITIONAL_JUMP)
// 005f5ed1: FLD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x10] (READ)
// 005f5ed8: FADD float ptr [0x00658385]
//   XREF to: 00658385 (READ)
// 005f5ede: FSTP float ptr [ESP + 0x98]
//   XREF to: Stack[-0x10] (WRITE)
// 005f5ee5: MOV EAX,dword ptr [ESP + 0x98]
//   Label: LAB_005f5ee5
//   XREF to: Stack[-0x10] (READ)
// 005f5eec: MOV dword ptr [ECX + 0x4],EAX
// 005f5eef: FLD float ptr [EDX + 0x4]
// 005f5ef2: FMUL double ptr [ESP + 0x20]
//   XREF to: Stack[-0x88] (READ)
// 005f5ef6: FLD float ptr [EDX + 0x14]
// 005f5ef9: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0x98] (READ)
// 005f5efd: FXCH
// 005f5eff: FLD double ptr [ESP + 0x70]
//   XREF to: Stack[-0x38] (READ)
// 005f5f03: FXCH
// 005f5f05: FMUL ST1
// 005f5f07: FXCH ST2
// 005f5f09: FMULP
// 005f5f0b: FXCH
// 005f5f0d: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 005f5f10: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 005f5f13: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005f5f1a: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xa4] (READ)
// 005f5f1e: FSTP double ptr [ESP + 0x38]
//   XREF to: Stack[-0x70] (WRITE)
// 005f5f22: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005f5f29: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x70] (READ)
// 005f5f2d: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005f5f31: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x6c] (READ)
// 005f5f35: FLD double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 005f5f38: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005f5f3c: FCOMP double ptr [0x0065836d]
//   XREF to: 0065836d (READ)
// 005f5f42: FNSTSW AX
// 005f5f44: SAHF
// 005f5f45: JNC 0x005f60aa
//   XREF to: 005f60aa (CONDITIONAL_JUMP)
// 005f5f4b: FLD double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 005f5f4e: FCOMP double ptr [0x00658375]
//   XREF to: 00658375 (READ)
// 005f5f54: FNSTSW AX
// 005f5f56: SAHF
// 005f5f57: JBE 0x005f60aa
//   XREF to: 005f60aa (CONDITIONAL_JUMP)
// 005f5f5d: FLD double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 005f5f60: CALL crt_math.c_asin_FUN_00600b94
//   XREF to: 00600b94 (UNCONDITIONAL_CALL)
// 005f5f65: FLDZ
// 005f5f67: FXCH
// 005f5f69: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x18] (WRITE)
// 005f5f70: FCOMP double ptr [ESP + 0x38]
//   XREF to: Stack[-0x70] (READ)
// 005f5f74: FNSTSW AX
// 005f5f76: SAHF
// 005f5f77: JBE 0x005f5f8d
//   XREF to: 005f5f8d (CONDITIONAL_JUMP)
// 005f5f79: FLD float ptr [ESP + 0x90]
//   XREF to: Stack[-0x18] (READ)
// 005f5f80: FSUBR double ptr [0x0065837d]
//   XREF to: 0065837d (READ)
// 005f5f86: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x18] (WRITE)
// 005f5f8d: FLD float ptr [ESP + 0x90]
//   Label: LAB_005f5f8d
//   XREF to: Stack[-0x18] (READ)
// 005f5f94: FCOMP double ptr [0x0065835d]
//   XREF to: 0065835d (READ)
// 005f5f9a: FNSTSW AX
// 005f5f9c: SAHF
// 005f5f9d: JNC 0x005f5fb3
//   XREF to: 005f5fb3 (CONDITIONAL_JUMP)
// 005f5f9f: FLD float ptr [ESP + 0x90]
//   XREF to: Stack[-0x18] (READ)
// 005f5fa6: FADD float ptr [0x00658365]
//   XREF to: 00658365 (READ)
// 005f5fac: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x18] (WRITE)
// 005f5fb3: FLD float ptr [ESP + 0x90]
//   Label: LAB_005f5fb3
//   XREF to: Stack[-0x18] (READ)
// 005f5fba: FCOMP double ptr [0x0065837d]
//   XREF to: 0065837d (READ)
// 005f5fc0: FNSTSW AX
// 005f5fc2: SAHF
// 005f5fc3: JBE 0x005f5fd9
//   XREF to: 005f5fd9 (CONDITIONAL_JUMP)
// 005f5fc5: FLD float ptr [ESP + 0x90]
//   XREF to: Stack[-0x18] (READ)
// 005f5fcc: FADD float ptr [0x00658385]
//   XREF to: 00658385 (READ)
// 005f5fd2: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x18] (WRITE)
// 005f5fd9: MOV EAX,dword ptr [ESP + 0x90]
//   Label: LAB_005f5fd9
//   XREF to: Stack[-0x18] (READ)
// 005f5fe0: MOV dword ptr [ECX + 0x8],EAX
// 005f5fe3: MOV EAX,ECX
// 005f5fe5: MOV ESP,EBP
// 005f5fe7: POP EBP
// 005f5fe8: POP EDI
// 005f5fe9: POP EBX
// 005f5fea: RET
// 005f5feb: FLD double ptr [ESP + 0x68]
//   Label: LAB_005f5feb
//   XREF to: Stack[-0x40] (READ)
// 005f5fef: FCOMP double ptr [0x00658355]
//   XREF to: 00658355 (READ)
// 005f5ff5: FNSTSW AX
// 005f5ff7: SAHF
// 005f5ff8: JA 0x005f6021
//   XREF to: 005f6021 (CONDITIONAL_JUMP)
// 005f5ffa: MOV dword ptr [ESP + 0x94],0x40490fdb
//   XREF to: Stack[-0x14] (WRITE)
// 005f6005: FLDZ
//   Label: LAB_005f6005
// 005f6007: FCOMP double ptr [ESP + 0x30]
//   XREF to: Stack[-0x78] (READ)
// 005f600b: FNSTSW AX
// 005f600d: SAHF
// 005f600e: JBE 0x005f5d26
//   XREF to: 005f5d26 (CONDITIONAL_JUMP)
// 005f6014: XOR byte ptr [ESP + 0x97],0x80
//   XREF to: Stack[-0x11] (READ_WRITE)
// 005f601c: JMP 0x005f5d26
//   XREF to: 005f5d26 (UNCONDITIONAL_JUMP)
// 005f6021: FLD1
//   Label: LAB_005f6021
// 005f6023: FCOMP double ptr [ESP + 0x68]
//   XREF to: Stack[-0x40] (READ)
// 005f6027: FNSTSW AX
// 005f6029: SAHF
// 005f602a: JA 0x005f6037
//   XREF to: 005f6037 (CONDITIONAL_JUMP)
// 005f602c: XOR EDX,EDX
// 005f602e: MOV dword ptr [ESP + 0x94],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005f6035: JMP 0x005f6005
//   XREF to: 005f6005 (UNCONDITIONAL_JUMP)
// 005f6037: FLD double ptr [ESP + 0x68]
//   Label: LAB_005f6037
//   XREF to: Stack[-0x40] (READ)
// 005f603b: CALL crt_math.c_acos_FUN_00600162
//   XREF to: 00600162 (UNCONDITIONAL_CALL)
// 005f6040: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x14] (WRITE)
// 005f6047: JMP 0x005f6005
//   XREF to: 005f6005 (UNCONDITIONAL_JUMP)
// 005f6049: FLD double ptr [ESP + 0x58]
//   Label: LAB_005f6049
//   XREF to: Stack[-0x50] (READ)
// 005f604d: FCOMP double ptr [0x00658355]
//   XREF to: 00658355 (READ)
// 005f6053: FNSTSW AX
// 005f6055: SAHF
// 005f6056: JA 0x005f6082
//   XREF to: 005f6082 (CONDITIONAL_JUMP)
// 005f6058: MOV dword ptr [ESP + 0x98],0x40490fdb
//   XREF to: Stack[-0x10] (WRITE)
// 005f6063: FLDZ
//   Label: LAB_005f6063
// 005f6065: FCOMP double ptr [ESP + 0x80]
//   XREF to: Stack[-0x28] (READ)
// 005f606c: FNSTSW AX
// 005f606e: SAHF
// 005f606f: JBE 0x005f5e99
//   XREF to: 005f5e99 (CONDITIONAL_JUMP)
// 005f6075: XOR byte ptr [ESP + 0x9b],0x80
//   XREF to: Stack[-0xd] (READ_WRITE)
// 005f607d: JMP 0x005f5e99
//   XREF to: 005f5e99 (UNCONDITIONAL_JUMP)
// 005f6082: FLD1
//   Label: LAB_005f6082
// 005f6084: FCOMP double ptr [ESP + 0x58]
//   XREF to: Stack[-0x50] (READ)
// 005f6088: FNSTSW AX
// 005f608a: SAHF
// 005f608b: JA 0x005f6098
//   XREF to: 005f6098 (CONDITIONAL_JUMP)
// 005f608d: XOR EBX,EBX
// 005f608f: MOV dword ptr [ESP + 0x98],EBX
//   XREF to: Stack[-0x10] (WRITE)
// 005f6096: JMP 0x005f6063
//   XREF to: 005f6063 (UNCONDITIONAL_JUMP)
// 005f6098: FLD double ptr [ESP + 0x58]
//   Label: LAB_005f6098
//   XREF to: Stack[-0x50] (READ)
// 005f609c: CALL crt_math.c_acos_FUN_00600162
//   XREF to: 00600162 (UNCONDITIONAL_CALL)
// 005f60a1: FSTP float ptr [ESP + 0x98]
//   XREF to: Stack[-0x10] (WRITE)
// 005f60a8: JMP 0x005f6063
//   XREF to: 005f6063 (UNCONDITIONAL_JUMP)
// 005f60aa: FLD double ptr [ESP + 0x60]
//   Label: LAB_005f60aa
//   XREF to: Stack[-0x48] (READ)
// 005f60ae: FCOMP double ptr [0x00658355]
//   XREF to: 00658355 (READ)
// 005f60b4: FNSTSW AX
// 005f60b6: SAHF
// 005f60b7: JA 0x005f60e3
//   XREF to: 005f60e3 (CONDITIONAL_JUMP)
// 005f60b9: MOV dword ptr [ESP + 0x90],0x40490fdb
//   XREF to: Stack[-0x18] (WRITE)
// 005f60c4: FLDZ
//   Label: LAB_005f60c4
// 005f60c6: FCOMP double ptr [ESP + 0x88]
//   XREF to: Stack[-0x20] (READ)
// 005f60cd: FNSTSW AX
// 005f60cf: SAHF
// 005f60d0: JBE 0x005f5f8d
//   XREF to: 005f5f8d (CONDITIONAL_JUMP)
// 005f60d6: XOR byte ptr [ESP + 0x93],0x80
//   XREF to: Stack[-0x15] (READ_WRITE)
// 005f60de: JMP 0x005f5f8d
//   XREF to: 005f5f8d (UNCONDITIONAL_JUMP)
// 005f60e3: FLD1
//   Label: LAB_005f60e3
// 005f60e5: FCOMP double ptr [ESP + 0x60]
//   XREF to: Stack[-0x48] (READ)
// 005f60e9: FNSTSW AX
// 005f60eb: SAHF
// 005f60ec: JA 0x005f60f9
//   XREF to: 005f60f9 (CONDITIONAL_JUMP)
// 005f60ee: XOR EDI,EDI
// 005f60f0: MOV dword ptr [ESP + 0x90],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 005f60f7: JMP 0x005f60c4
//   XREF to: 005f60c4 (UNCONDITIONAL_JUMP)
// 005f60f9: FLD double ptr [ESP + 0x60]
//   Label: LAB_005f60f9
//   XREF to: Stack[-0x48] (READ)
// 005f60fd: CALL crt_math.c_acos_FUN_00600162
//   XREF to: 00600162 (UNCONDITIONAL_CALL)
// 005f6102: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x18] (WRITE)
// 005f6109: JMP 0x005f60c4
//   XREF to: 005f60c4 (UNCONDITIONAL_JUMP)
