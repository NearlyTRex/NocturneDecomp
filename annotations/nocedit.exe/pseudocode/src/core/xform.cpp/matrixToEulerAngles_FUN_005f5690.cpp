// Name: core_xform.cpp_matrixToEulerAngles_FUN_005f5690
// Address: 005f5690
// Address Range: [[005f5690, 005f5bca]]
// Convention: __cdecl
// Signature: CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CVector3f * euler_out, CMatrix3x3f * matrix_ptr)
// Cross-references:
//   core_bodypart.cpp_FUN_0041a630 (0041a630) at 0041a9eb [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422a50 (00422a50) at 00422c34 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a420 (0042a420) at 0042a4b6 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042bd30 (0042bd30) at 0042beb6 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042d090 (0042d090) at 0042d1f4 [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_FUN_00442710 (00442710) at 0044276b [UNCONDITIONAL_CALL]
//   core_fire.cpp_CBulletHole_ctor_FUN_004bf7f0 (004bf7f0) at 004bf99b [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_CGabriella_FUN_004d7120 (004d7120) at 004d743f [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d5550 (004d5550) at 004d5790 [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502a70 (00502a70) at 00502b43 [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502b80 (00502b80) at 00502c60 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_FUN_005205f0 (005205f0) at 005207bf [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051f930 (0051f930) at 0051fc84 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054cc30 (0054cc30) at 0054d5bd [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e320 (0054e320) at 0054e3bb [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00558fd0 (00558fd0) at 005590c9 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056ca1b [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 00597906 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00595575 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_0059b640 (0059b640) at 0059b782 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c06b0 (005c06b0) at 005c077c [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c07b0 (005c07b0) at 005c1554 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3150 (005c3150) at 005c34ac [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_FUN_005db9d0 (005db9d0) at 005dbb03 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_FUN_005f1820 (005f1820) at 005f18b1 [UNCONDITIONAL_CALL]
//   core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0 (005f7ac0) at 005f7ae0 [UNCONDITIONAL_CALL]
// Globals:
//   double g_MatrixToEulerNegativeOne = -1
//   double g_MatrixToEulerNegativePi = -3.14159265359000
//   float g_MatrixToEulerTwoPi = 6.283185
//   double g_MatrixToEulerGimbalLockThreshold = 0.707000000000000
//   double g_MatrixToEulerNegativeGimbalThreshold = -0.707000000000000
//   double g_MatrixToEulerPi = 3.14159265359000
//   float g_MatrixToEulerNegativeTwoPi = -6.283185
// Function calls:
//   crt_math.c_acos_FUN_00600162
//   crt_math.c_asin_FUN_00600b94

#include "nocturne.h"

CVector3f * __cdecl
core_xform_cpp_matrixToEulerAngles_FUN_005f5690(CVector3f *euler_out,CMatrix3x3f *matrix_ptr)

{
  double dVar1;
  double x;
  float fVar2;
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
  local_98 = SUB84(dVar6,0);
  dVar6 = (double)SQRT(euler_out[2].x * euler_out[2].x +
                       euler_out[1].z * euler_out[1].z + euler_out[1].y * euler_out[1].y);
  if (0.0 < dVar6) {
    dVar6 = 1.0 / dVar6;
  }
  local_80 = SUB84(dVar6,0);
  dVar1 = (double)SQRT(euler_out[3].y * euler_out[3].y +
                       euler_out[3].x * euler_out[3].x + euler_out[2].z * euler_out[2].z);
  if (0.0 < dVar1) {
    dVar1 = 1.0 / dVar1;
  }
  uStack_84 = (undefined4)((ulonglong)dVar1 >> 0x20);
  local_88 = SUB84(dVar1,0);
  fVar2 = -euler_out[2].x * (float)dVar6;
  uStack_8c = (undefined4)((ulonglong)(double)fVar2 >> 0x20);
  if ((float)g_MatrixToEulerNegativeOne < fVar2) {
    if ((double)fVar2 < 1.0) {
      fVar5 = crt_math_c_asin_FUN_00600b94((float10)fVar2);
      extraout_ECX_00->x = (float)fVar5;
      dVar6 = (double)SQRT((float10)1 - extraout_ST1 * extraout_ST1);
      if (fVar5 < (float10)g_MatrixToEulerNegativePi) {
        extraout_ECX_00->x = extraout_ECX_00->x + g_MatrixToEulerTwoPi;
      }
      matrix_ptr = (CMatrix3x3f *)extraout_ECX_00;
      euler_out = extraout_EDX;
      if (0.0 < dVar6) {
        dVar6 = 1.0 / dVar6;
        fVar2 = extraout_EDX->z * (float)(double)CONCAT44(local_98,uStack_9c) * (float)dVar6;
        dVar1 = (double)fVar2;
        x = (double)(extraout_EDX[3].y * (float)(double)CONCAT44(local_88,uStack_8c) * (float)dVar6)
        ;
        if ((g_MatrixToEulerGimbalLockThreshold <= dVar1) ||
           (dVar1 <= g_MatrixToEulerNegativeGimbalThreshold)) {
          pCVar3 = extraout_ECX_00;
          pCVar4 = extraout_EDX;
          if (g_MatrixToEulerNegativeOne < x) {
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
          fVar5 = crt_math_c_asin_FUN_00600b94((float10)fVar2);
          local_14 = (float)fVar5;
          pCVar3 = extraout_ECX_01;
          pCVar4 = extraout_EDX_00;
          if (x < 0.0) {
            local_14 = (float)g_MatrixToEulerPi - local_14;
          }
        }
        if (local_14 < (float)g_MatrixToEulerNegativePi) {
          local_14 = local_14 + g_MatrixToEulerTwoPi;
        }
        if ((float)g_MatrixToEulerPi < local_14) {
          local_14 = local_14 + g_MatrixToEulerNegativeTwoPi;
        }
        pCVar3->y = local_14;
        dVar1 = (double)pCVar4[1].y * (double)CONCAT44(local_80,uStack_84) * dVar6;
        dVar6 = (double)pCVar4[1].z * (double)CONCAT44(local_80,uStack_84) * dVar6;
        uStack_ac = SUB84(dVar1,0);
        if ((g_MatrixToEulerGimbalLockThreshold <= dVar1) ||
           (dVar1 <= g_MatrixToEulerNegativeGimbalThreshold)) {
          if (g_MatrixToEulerNegativeOne < dVar6) {
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
          fVar5 = crt_math_c_asin_FUN_00600b94((float10)dVar1);
          fStack_1c = (float)fVar5;
          pCVar3 = extraout_ECX_02;
          if (dVar6 < 0.0) {
            fStack_1c = (float)g_MatrixToEulerPi - fStack_1c;
          }
        }
        if (fStack_1c < (float)g_MatrixToEulerNegativePi) {
          fStack_1c = fStack_1c + g_MatrixToEulerTwoPi;
        }
        if ((float)g_MatrixToEulerPi < fStack_1c) {
          fStack_1c = fStack_1c + g_MatrixToEulerNegativeTwoPi;
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
  fVar2 = -euler_out[2].z * (float)(double)CONCAT44(local_88,uStack_8c);
  dVar6 = (double)fVar2;
  dVar1 = (double)(euler_out->x * (float)(double)CONCAT44(local_98,uStack_9c));
  if ((g_MatrixToEulerGimbalLockThreshold <= dVar6) ||
     (dVar6 <= g_MatrixToEulerNegativeGimbalThreshold)) {
    if (g_MatrixToEulerNegativeOne < dVar1) {
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
      local_18 = (float)g_MatrixToEulerPi - local_18;
    }
  }
  if (local_18 < (float)g_MatrixToEulerNegativePi) {
    local_18 = local_18 + g_MatrixToEulerTwoPi;
  }
  if ((float)g_MatrixToEulerPi < local_18) {
    local_18 = local_18 + g_MatrixToEulerNegativeTwoPi;
  }
  matrix_ptr->m[0].y = local_18;
  return matrix_ptr->m;
}


// Assembly code:
// 005f5690: PUSH EBX
//   Label: core_xform.cpp_matrixToEulerAngles_FUN_005f5690
// 005f5691: PUSH EDI
// 005f5692: PUSH EBP
// 005f5693: MOV EBP,ESP
// 005f5695: SUB ESP,0x9c
// 005f569b: AND ESP,0xfffffff8
// 005f569e: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005f56a1: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005f56a4: FLD float ptr [EDX + 0x4]
// 005f56a7: FMUL ST0
// 005f56a9: FLD float ptr [EDX]
// 005f56ab: FMUL ST0
// 005f56ad: FADDP
// 005f56af: FLD float ptr [EDX + 0x8]
// 005f56b2: FMUL ST0
// 005f56b4: FADDP
// 005f56b6: FSQRT
// 005f56b8: FLDZ
// 005f56ba: FXCH
// 005f56bc: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x98] (WRITE)
// 005f56c0: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x98] (READ)
// 005f56c4: FNSTSW AX
// 005f56c6: SAHF
// 005f56c7: JC 0x005f5844
//   XREF to: 005f5844 (CONDITIONAL_JUMP)
// 005f56cd: FLD float ptr [EDX + 0x10]
//   Label: LAB_005f56cd
// 005f56d0: FMUL ST0
// 005f56d2: FLD float ptr [EDX + 0x14]
// 005f56d5: FMUL ST0
// 005f56d7: FADDP
// 005f56d9: FLD float ptr [EDX + 0x18]
// 005f56dc: FMUL ST0
// 005f56de: FADDP
// 005f56e0: FSQRT
// 005f56e2: FLDZ
// 005f56e4: FXCH
// 005f56e6: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x80] (WRITE)
// 005f56ea: FCOMP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x80] (READ)
// 005f56ee: FNSTSW AX
// 005f56f0: SAHF
// 005f56f1: JNC 0x005f56fd
//   XREF to: 005f56fd (CONDITIONAL_JUMP)
// 005f56f3: FLD1
// 005f56f5: FDIV double ptr [ESP + 0x28]
//   XREF to: Stack[-0x80] (READ)
// 005f56f9: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x80] (WRITE)
// 005f56fd: FLD float ptr [EDX + 0x20]
//   Label: LAB_005f56fd
// 005f5700: FMUL ST0
// 005f5702: FLD float ptr [EDX + 0x24]
// 005f5705: FMUL ST0
// 005f5707: FADDP
// 005f5709: FLD float ptr [EDX + 0x28]
// 005f570c: FMUL ST0
// 005f570e: FADDP
// 005f5710: FSQRT
// 005f5712: FLDZ
// 005f5714: FXCH
// 005f5716: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x88] (WRITE)
// 005f571a: FCOMP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x88] (READ)
// 005f571e: FNSTSW AX
// 005f5720: SAHF
// 005f5721: JNC 0x005f572d
//   XREF to: 005f572d (CONDITIONAL_JUMP)
// 005f5723: FLD1
// 005f5725: FDIV double ptr [ESP + 0x20]
//   XREF to: Stack[-0x88] (READ)
// 005f5729: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x88] (WRITE)
// 005f572d: FLD float ptr [EDX + 0x18]
//   Label: LAB_005f572d
// 005f5730: FCHS
// 005f5732: FMUL double ptr [ESP + 0x28]
//   XREF to: Stack[-0x80] (READ)
// 005f5736: FST double ptr [ESP + 0x18]
//   XREF to: Stack[-0x90] (WRITE)
// 005f573a: FCOMP double ptr [0x0065831d]
//   XREF to: 0065831d (READ)
// 005f5740: FNSTSW AX
// 005f5742: SAHF
// 005f5743: JA 0x005f5853
//   XREF to: 005f5853 (CONDITIONAL_JUMP)
// 005f5749: MOV dword ptr [ECX],0xbfc90fdb
// 005f574f: MOV dword ptr [ECX + 0x8],0x0
//   Label: LAB_005f574f
// 005f5756: FLD float ptr [EDX + 0x20]
// 005f5759: FCHS
// 005f575b: FMUL double ptr [ESP + 0x20]
//   XREF to: Stack[-0x88] (READ)
// 005f575f: FLD float ptr [EDX]
// 005f5761: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0x98] (READ)
// 005f5765: FXCH
// 005f5767: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xa0] (WRITE)
// 005f576b: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xa0] (READ)
// 005f576f: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 005f5773: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x9c] (READ)
// 005f5777: FSTP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x68] (WRITE)
// 005f577b: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 005f577f: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x68] (READ)
// 005f5783: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005f5787: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x64] (READ)
// 005f578b: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xa0] (READ)
// 005f578f: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005f5793: FCOMP double ptr [0x00658335]
//   XREF to: 00658335 (READ)
// 005f5799: FNSTSW AX
// 005f579b: SAHF
// 005f579c: JNC 0x005f5aab
//   XREF to: 005f5aab (CONDITIONAL_JUMP)
// 005f57a2: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xa0] (READ)
// 005f57a6: FCOMP double ptr [0x0065833d]
//   XREF to: 0065833d (READ)
// 005f57ac: FNSTSW AX
// 005f57ae: SAHF
// 005f57af: JBE 0x005f5aab
//   XREF to: 005f5aab (CONDITIONAL_JUMP)
// 005f57b5: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xa0] (READ)
// 005f57b9: CALL crt_math.c_asin_FUN_00600b94
//   XREF to: 00600b94 (UNCONDITIONAL_CALL)
// 005f57be: FLDZ
// 005f57c0: FXCH
// 005f57c2: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x14] (WRITE)
// 005f57c9: FCOMP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x68] (READ)
// 005f57cd: FNSTSW AX
// 005f57cf: SAHF
// 005f57d0: JBE 0x005f57e6
//   XREF to: 005f57e6 (CONDITIONAL_JUMP)
// 005f57d2: FLD float ptr [ESP + 0x94]
//   XREF to: Stack[-0x14] (READ)
// 005f57d9: FSUBR double ptr [0x00658345]
//   XREF to: 00658345 (READ)
// 005f57df: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x14] (WRITE)
// 005f57e6: FLD float ptr [ESP + 0x94]
//   Label: LAB_005f57e6
//   XREF to: Stack[-0x14] (READ)
// 005f57ed: FCOMP double ptr [0x00658325]
//   XREF to: 00658325 (READ)
// 005f57f3: FNSTSW AX
// 005f57f5: SAHF
// 005f57f6: JNC 0x005f580c
//   XREF to: 005f580c (CONDITIONAL_JUMP)
// 005f57f8: FLD float ptr [ESP + 0x94]
//   XREF to: Stack[-0x14] (READ)
// 005f57ff: FADD float ptr [0x0065832d]
//   XREF to: 0065832d (READ)
// 005f5805: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x14] (WRITE)
// 005f580c: FLD float ptr [ESP + 0x94]
//   Label: LAB_005f580c
//   XREF to: Stack[-0x14] (READ)
// 005f5813: FCOMP double ptr [0x00658345]
//   XREF to: 00658345 (READ)
// 005f5819: FNSTSW AX
// 005f581b: SAHF
// 005f581c: JBE 0x005f5832
//   XREF to: 005f5832 (CONDITIONAL_JUMP)
// 005f581e: FLD float ptr [ESP + 0x94]
//   XREF to: Stack[-0x14] (READ)
// 005f5825: FADD float ptr [0x0065834d]
//   XREF to: 0065834d (READ)
// 005f582b: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x14] (WRITE)
// 005f5832: MOV EAX,dword ptr [ESP + 0x94]
//   Label: LAB_005f5832
//   XREF to: Stack[-0x14] (READ)
// 005f5839: MOV dword ptr [ECX + 0x4],EAX
// 005f583c: MOV EAX,ECX
// 005f583e: MOV ESP,EBP
// 005f5840: POP EBP
// 005f5841: POP EDI
// 005f5842: POP EBX
// 005f5843: RET
// 005f5844: FLD1
//   Label: LAB_005f5844
// 005f5846: FDIV double ptr [ESP + 0x10]
//   XREF to: Stack[-0x98] (READ)
// 005f584a: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x98] (WRITE)
// 005f584e: JMP 0x005f56cd
//   XREF to: 005f56cd (UNCONDITIONAL_JUMP)
// 005f5853: FLD1
//   Label: LAB_005f5853
// 005f5855: FCOMP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x90] (READ)
// 005f5859: FNSTSW AX
// 005f585b: SAHF
// 005f585c: JA 0x005f5869
//   XREF to: 005f5869 (CONDITIONAL_JUMP)
// 005f585e: MOV dword ptr [ECX],0x3fc90fdb
// 005f5864: JMP 0x005f574f
//   XREF to: 005f574f (UNCONDITIONAL_JUMP)
// 005f5869: FLD double ptr [ESP + 0x18]
//   Label: LAB_005f5869
//   XREF to: Stack[-0x90] (READ)
// 005f586d: FLD ST0
// 005f586f: CALL crt_math.c_asin_FUN_00600b94
//   XREF to: 00600b94 (UNCONDITIONAL_CALL)
// 005f5874: FLD ST1
// 005f5876: FMULP ST2
// 005f5878: FLD1
// 005f587a: FSUBRP ST2,ST0
// 005f587c: FXCH
// 005f587e: FSQRT
// 005f5880: FXCH
// 005f5882: FST float ptr [ECX]
// 005f5884: FXCH
// 005f5886: FSTP double ptr [ESP + 0x50]
//   XREF to: Stack[-0x58] (WRITE)
// 005f588a: FCOMP double ptr [0x00658325]
//   XREF to: 00658325 (READ)
// 005f5890: FNSTSW AX
// 005f5892: SAHF
// 005f5893: JNC 0x005f589f
//   XREF to: 005f589f (CONDITIONAL_JUMP)
// 005f5895: FLD float ptr [ECX]
// 005f5897: FADD float ptr [0x0065832d]
//   XREF to: 0065832d (READ)
// 005f589d: FSTP float ptr [ECX]
// 005f589f: FLDZ
//   Label: LAB_005f589f
// 005f58a1: FCOMP double ptr [ESP + 0x50]
//   XREF to: Stack[-0x58] (READ)
// 005f58a5: FNSTSW AX
// 005f58a7: SAHF
// 005f58a8: JNC 0x005f574f
//   XREF to: 005f574f (CONDITIONAL_JUMP)
// 005f58ae: FLD1
// 005f58b0: FDIV double ptr [ESP + 0x50]
//   XREF to: Stack[-0x58] (READ)
// 005f58b4: FLD float ptr [EDX + 0x28]
// 005f58b7: FMUL double ptr [ESP + 0x20]
//   XREF to: Stack[-0x88] (READ)
// 005f58bb: FLD float ptr [EDX + 0x8]
// 005f58be: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0x98] (READ)
// 005f58c2: FXCH ST2
// 005f58c4: FSTP double ptr [ESP + 0x70]
//   XREF to: Stack[-0x38] (WRITE)
// 005f58c8: FXCH
// 005f58ca: FMUL double ptr [ESP + 0x70]
//   XREF to: Stack[-0x38] (READ)
// 005f58ce: FXCH
// 005f58d0: FMUL double ptr [ESP + 0x70]
//   XREF to: Stack[-0x38] (READ)
// 005f58d4: FXCH
// 005f58d6: FSTP double ptr [ESP + 0x78]
//   XREF to: Stack[-0x30] (WRITE)
// 005f58da: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x30] (READ)
// 005f58de: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005f58e5: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x2c] (READ)
// 005f58e9: FSTP double ptr [ESP + 0x48]
//   XREF to: Stack[-0x60] (WRITE)
// 005f58ed: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005f58f4: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x60] (READ)
// 005f58f8: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005f58fc: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 005f5900: FLD double ptr [ESP + 0x78]
//   XREF to: Stack[-0x30] (READ)
// 005f5904: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005f5908: FCOMP double ptr [0x00658335]
//   XREF to: 00658335 (READ)
// 005f590e: FNSTSW AX
// 005f5910: SAHF
// 005f5911: JNC 0x005f5b09
//   XREF to: 005f5b09 (CONDITIONAL_JUMP)
// 005f5917: FLD double ptr [ESP + 0x78]
//   XREF to: Stack[-0x30] (READ)
// 005f591b: FCOMP double ptr [0x0065833d]
//   XREF to: 0065833d (READ)
// 005f5921: FNSTSW AX
// 005f5923: SAHF
// 005f5924: JBE 0x005f5b09
//   XREF to: 005f5b09 (CONDITIONAL_JUMP)
// 005f592a: FLD double ptr [ESP + 0x78]
//   XREF to: Stack[-0x30] (READ)
// 005f592e: CALL crt_math.c_asin_FUN_00600b94
//   XREF to: 00600b94 (UNCONDITIONAL_CALL)
// 005f5933: FLDZ
// 005f5935: FXCH
// 005f5937: FSTP float ptr [ESP + 0x98]
//   XREF to: Stack[-0x10] (WRITE)
// 005f593e: FCOMP double ptr [ESP + 0x48]
//   XREF to: Stack[-0x60] (READ)
// 005f5942: FNSTSW AX
// 005f5944: SAHF
// 005f5945: JBE 0x005f595b
//   XREF to: 005f595b (CONDITIONAL_JUMP)
// 005f5947: FLD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x10] (READ)
// 005f594e: FSUBR double ptr [0x00658345]
//   XREF to: 00658345 (READ)
// 005f5954: FSTP float ptr [ESP + 0x98]
//   XREF to: Stack[-0x10] (WRITE)
// 005f595b: FLD float ptr [ESP + 0x98]
//   Label: LAB_005f595b
//   XREF to: Stack[-0x10] (READ)
// 005f5962: FCOMP double ptr [0x00658325]
//   XREF to: 00658325 (READ)
// 005f5968: FNSTSW AX
// 005f596a: SAHF
// 005f596b: JNC 0x005f5981
//   XREF to: 005f5981 (CONDITIONAL_JUMP)
// 005f596d: FLD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x10] (READ)
// 005f5974: FADD float ptr [0x0065832d]
//   XREF to: 0065832d (READ)
// 005f597a: FSTP float ptr [ESP + 0x98]
//   XREF to: Stack[-0x10] (WRITE)
// 005f5981: FLD float ptr [ESP + 0x98]
//   Label: LAB_005f5981
//   XREF to: Stack[-0x10] (READ)
// 005f5988: FCOMP double ptr [0x00658345]
//   XREF to: 00658345 (READ)
// 005f598e: FNSTSW AX
// 005f5990: SAHF
// 005f5991: JBE 0x005f59a7
//   XREF to: 005f59a7 (CONDITIONAL_JUMP)
// 005f5993: FLD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x10] (READ)
// 005f599a: FADD float ptr [0x0065834d]
//   XREF to: 0065834d (READ)
// 005f59a0: FSTP float ptr [ESP + 0x98]
//   XREF to: Stack[-0x10] (WRITE)
// 005f59a7: MOV EAX,dword ptr [ESP + 0x98]
//   Label: LAB_005f59a7
//   XREF to: Stack[-0x10] (READ)
// 005f59ae: MOV dword ptr [ECX + 0x4],EAX
// 005f59b1: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x80] (READ)
// 005f59b5: FLD float ptr [EDX + 0x10]
// 005f59b8: FMUL ST1
// 005f59ba: FLD float ptr [EDX + 0x14]
// 005f59bd: FMULP ST2
// 005f59bf: FLD double ptr [ESP + 0x70]
//   XREF to: Stack[-0x38] (READ)
// 005f59c3: FXCH
// 005f59c5: FMUL ST1
// 005f59c7: FXCH ST2
// 005f59c9: FMULP
// 005f59cb: FXCH
// 005f59cd: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 005f59d0: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 005f59d3: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005f59da: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xa4] (READ)
// 005f59de: FSTP double ptr [ESP + 0x38]
//   XREF to: Stack[-0x70] (WRITE)
// 005f59e2: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005f59e9: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x70] (READ)
// 005f59ed: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005f59f1: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x6c] (READ)
// 005f59f5: FLD double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 005f59f8: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005f59fc: FCOMP double ptr [0x00658335]
//   XREF to: 00658335 (READ)
// 005f5a02: FNSTSW AX
// 005f5a04: SAHF
// 005f5a05: JNC 0x005f5b6a
//   XREF to: 005f5b6a (CONDITIONAL_JUMP)
// 005f5a0b: FLD double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 005f5a0e: FCOMP double ptr [0x0065833d]
//   XREF to: 0065833d (READ)
// 005f5a14: FNSTSW AX
// 005f5a16: SAHF
// 005f5a17: JBE 0x005f5b6a
//   XREF to: 005f5b6a (CONDITIONAL_JUMP)
// 005f5a1d: FLD double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 005f5a20: CALL crt_math.c_asin_FUN_00600b94
//   XREF to: 00600b94 (UNCONDITIONAL_CALL)
// 005f5a25: FLDZ
// 005f5a27: FXCH
// 005f5a29: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x18] (WRITE)
// 005f5a30: FCOMP double ptr [ESP + 0x38]
//   XREF to: Stack[-0x70] (READ)
// 005f5a34: FNSTSW AX
// 005f5a36: SAHF
// 005f5a37: JBE 0x005f5a4d
//   XREF to: 005f5a4d (CONDITIONAL_JUMP)
// 005f5a39: FLD float ptr [ESP + 0x90]
//   XREF to: Stack[-0x18] (READ)
// 005f5a40: FSUBR double ptr [0x00658345]
//   XREF to: 00658345 (READ)
// 005f5a46: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x18] (WRITE)
// 005f5a4d: FLD float ptr [ESP + 0x90]
//   Label: LAB_005f5a4d
//   XREF to: Stack[-0x18] (READ)
// 005f5a54: FCOMP double ptr [0x00658325]
//   XREF to: 00658325 (READ)
// 005f5a5a: FNSTSW AX
// 005f5a5c: SAHF
// 005f5a5d: JNC 0x005f5a73
//   XREF to: 005f5a73 (CONDITIONAL_JUMP)
// 005f5a5f: FLD float ptr [ESP + 0x90]
//   XREF to: Stack[-0x18] (READ)
// 005f5a66: FADD float ptr [0x0065832d]
//   XREF to: 0065832d (READ)
// 005f5a6c: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x18] (WRITE)
// 005f5a73: FLD float ptr [ESP + 0x90]
//   Label: LAB_005f5a73
//   XREF to: Stack[-0x18] (READ)
// 005f5a7a: FCOMP double ptr [0x00658345]
//   XREF to: 00658345 (READ)
// 005f5a80: FNSTSW AX
// 005f5a82: SAHF
// 005f5a83: JBE 0x005f5a99
//   XREF to: 005f5a99 (CONDITIONAL_JUMP)
// 005f5a85: FLD float ptr [ESP + 0x90]
//   XREF to: Stack[-0x18] (READ)
// 005f5a8c: FADD float ptr [0x0065834d]
//   XREF to: 0065834d (READ)
// 005f5a92: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x18] (WRITE)
// 005f5a99: MOV EAX,dword ptr [ESP + 0x90]
//   Label: LAB_005f5a99
//   XREF to: Stack[-0x18] (READ)
// 005f5aa0: MOV dword ptr [ECX + 0x8],EAX
// 005f5aa3: MOV EAX,ECX
// 005f5aa5: MOV ESP,EBP
// 005f5aa7: POP EBP
// 005f5aa8: POP EDI
// 005f5aa9: POP EBX
// 005f5aaa: RET
// 005f5aab: FLD double ptr [ESP + 0x68]
//   Label: LAB_005f5aab
//   XREF to: Stack[-0x40] (READ)
// 005f5aaf: FCOMP double ptr [0x0065831d]
//   XREF to: 0065831d (READ)
// 005f5ab5: FNSTSW AX
// 005f5ab7: SAHF
// 005f5ab8: JA 0x005f5ae1
//   XREF to: 005f5ae1 (CONDITIONAL_JUMP)
// 005f5aba: MOV dword ptr [ESP + 0x94],0x40490fdb
//   XREF to: Stack[-0x14] (WRITE)
// 005f5ac5: FLDZ
//   Label: LAB_005f5ac5
// 005f5ac7: FCOMP double ptr [ESP + 0x30]
//   XREF to: Stack[-0x78] (READ)
// 005f5acb: FNSTSW AX
// 005f5acd: SAHF
// 005f5ace: JBE 0x005f57e6
//   XREF to: 005f57e6 (CONDITIONAL_JUMP)
// 005f5ad4: XOR byte ptr [ESP + 0x97],0x80
//   XREF to: Stack[-0x11] (READ_WRITE)
// 005f5adc: JMP 0x005f57e6
//   XREF to: 005f57e6 (UNCONDITIONAL_JUMP)
// 005f5ae1: FLD1
//   Label: LAB_005f5ae1
// 005f5ae3: FCOMP double ptr [ESP + 0x68]
//   XREF to: Stack[-0x40] (READ)
// 005f5ae7: FNSTSW AX
// 005f5ae9: SAHF
// 005f5aea: JA 0x005f5af7
//   XREF to: 005f5af7 (CONDITIONAL_JUMP)
// 005f5aec: XOR EDX,EDX
// 005f5aee: MOV dword ptr [ESP + 0x94],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005f5af5: JMP 0x005f5ac5
//   XREF to: 005f5ac5 (UNCONDITIONAL_JUMP)
// 005f5af7: FLD double ptr [ESP + 0x68]
//   Label: LAB_005f5af7
//   XREF to: Stack[-0x40] (READ)
// 005f5afb: CALL crt_math.c_acos_FUN_00600162
//   XREF to: 00600162 (UNCONDITIONAL_CALL)
// 005f5b00: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x14] (WRITE)
// 005f5b07: JMP 0x005f5ac5
//   XREF to: 005f5ac5 (UNCONDITIONAL_JUMP)
// 005f5b09: FLD double ptr [ESP + 0x58]
//   Label: LAB_005f5b09
//   XREF to: Stack[-0x50] (READ)
// 005f5b0d: FCOMP double ptr [0x0065831d]
//   XREF to: 0065831d (READ)
// 005f5b13: FNSTSW AX
// 005f5b15: SAHF
// 005f5b16: JA 0x005f5b42
//   XREF to: 005f5b42 (CONDITIONAL_JUMP)
// 005f5b18: MOV dword ptr [ESP + 0x98],0x40490fdb
//   XREF to: Stack[-0x10] (WRITE)
// 005f5b23: FLDZ
//   Label: LAB_005f5b23
// 005f5b25: FCOMP double ptr [ESP + 0x80]
//   XREF to: Stack[-0x28] (READ)
// 005f5b2c: FNSTSW AX
// 005f5b2e: SAHF
// 005f5b2f: JBE 0x005f595b
//   XREF to: 005f595b (CONDITIONAL_JUMP)
// 005f5b35: XOR byte ptr [ESP + 0x9b],0x80
//   XREF to: Stack[-0xd] (READ_WRITE)
// 005f5b3d: JMP 0x005f595b
//   XREF to: 005f595b (UNCONDITIONAL_JUMP)
// 005f5b42: FLD1
//   Label: LAB_005f5b42
// 005f5b44: FCOMP double ptr [ESP + 0x58]
//   XREF to: Stack[-0x50] (READ)
// 005f5b48: FNSTSW AX
// 005f5b4a: SAHF
// 005f5b4b: JA 0x005f5b58
//   XREF to: 005f5b58 (CONDITIONAL_JUMP)
// 005f5b4d: XOR EBX,EBX
// 005f5b4f: MOV dword ptr [ESP + 0x98],EBX
//   XREF to: Stack[-0x10] (WRITE)
// 005f5b56: JMP 0x005f5b23
//   XREF to: 005f5b23 (UNCONDITIONAL_JUMP)
// 005f5b58: FLD double ptr [ESP + 0x58]
//   Label: LAB_005f5b58
//   XREF to: Stack[-0x50] (READ)
// 005f5b5c: CALL crt_math.c_acos_FUN_00600162
//   XREF to: 00600162 (UNCONDITIONAL_CALL)
// 005f5b61: FSTP float ptr [ESP + 0x98]
//   XREF to: Stack[-0x10] (WRITE)
// 005f5b68: JMP 0x005f5b23
//   XREF to: 005f5b23 (UNCONDITIONAL_JUMP)
// 005f5b6a: FLD double ptr [ESP + 0x60]
//   Label: LAB_005f5b6a
//   XREF to: Stack[-0x48] (READ)
// 005f5b6e: FCOMP double ptr [0x0065831d]
//   XREF to: 0065831d (READ)
// 005f5b74: FNSTSW AX
// 005f5b76: SAHF
// 005f5b77: JA 0x005f5ba3
//   XREF to: 005f5ba3 (CONDITIONAL_JUMP)
// 005f5b79: MOV dword ptr [ESP + 0x90],0x40490fdb
//   XREF to: Stack[-0x18] (WRITE)
// 005f5b84: FLDZ
//   Label: LAB_005f5b84
// 005f5b86: FCOMP double ptr [ESP + 0x88]
//   XREF to: Stack[-0x20] (READ)
// 005f5b8d: FNSTSW AX
// 005f5b8f: SAHF
// 005f5b90: JBE 0x005f5a4d
//   XREF to: 005f5a4d (CONDITIONAL_JUMP)
// 005f5b96: XOR byte ptr [ESP + 0x93],0x80
//   XREF to: Stack[-0x15] (READ_WRITE)
// 005f5b9e: JMP 0x005f5a4d
//   XREF to: 005f5a4d (UNCONDITIONAL_JUMP)
// 005f5ba3: FLD1
//   Label: LAB_005f5ba3
// 005f5ba5: FCOMP double ptr [ESP + 0x60]
//   XREF to: Stack[-0x48] (READ)
// 005f5ba9: FNSTSW AX
// 005f5bab: SAHF
// 005f5bac: JA 0x005f5bb9
//   XREF to: 005f5bb9 (CONDITIONAL_JUMP)
// 005f5bae: XOR EDI,EDI
// 005f5bb0: MOV dword ptr [ESP + 0x90],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 005f5bb7: JMP 0x005f5b84
//   XREF to: 005f5b84 (UNCONDITIONAL_JUMP)
// 005f5bb9: FLD double ptr [ESP + 0x60]
//   Label: LAB_005f5bb9
//   XREF to: Stack[-0x48] (READ)
// 005f5bbd: CALL crt_math.c_acos_FUN_00600162
//   XREF to: 00600162 (UNCONDITIONAL_CALL)
// 005f5bc2: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x18] (WRITE)
// 005f5bc9: JMP 0x005f5b84
//   XREF to: 005f5b84 (UNCONDITIONAL_JUMP)
