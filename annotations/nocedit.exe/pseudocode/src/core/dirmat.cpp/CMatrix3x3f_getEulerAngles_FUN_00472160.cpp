// Name: core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
// Address: 00472160
// Address Range: [[00472160, 00472536]]
// Convention: __cdecl
// Signature: CVector3f * core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
// Cross-references:
//   core_box.cpp_CBox_processPhysics_FUN_0041e350 (0041e350) at 0041e8af [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_004268e0 (004268e0) at 00426f84 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043b7e0 (0043b7e0) at 0043b806 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0 (004736c0) at 004736f1 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0 (004758d0) at 00475b03 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210 (00475210) at 0047524e [UNCONDITIONAL_CALL]
//   core_fire.cpp_FUN_004c1940 (004c1940) at 004c19bc [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 00539457 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b128 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581bbc [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 005832ca [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0 (0057a2a0) at 0057a782 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200 (0048c200) at 0048c216 [UNCONDITIONAL_CALL]
// Globals:
//   double g_EulerGimbalLockThreshold = -1
//   double g_EulerSinCosThreshold = 0.707000000000000
//   double g_EulerSinCosThresholdNeg = -0.707000000000000
//   double g_EulerPi = 3.14159265359000
//   double g_EulerNegPi = -3.14159265359000
//   float g_EulerTwoPi = 6.283185
//   float g_EulerNegTwoPi = -6.283185
// Function calls:
//   crt_math.c_acos_FUN_00600162
//   crt_math.c_asin_FUN_00600b94

#include "nocturne.h"

CVector3f * __cdecl
core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
          (CMatrix3x3f *this_ptr,CVector3f *euler_angles)

{
  double dVar1;
  float fVar2;
  float fVar3;
  CMatrix3x3f *extraout_ECX;
  CMatrix3x3f *extraout_ECX_00;
  CMatrix3x3f *pCVar4;
  CMatrix3x3f *extraout_ECX_01;
  CVector3f *extraout_EDX;
  CVector3f *extraout_EDX_00;
  CVector3f *extraout_EDX_01;
  CVector3f *extraout_EDX_02;
  CVector3f *extraout_EDX_03;
  CVector3f *extraout_EDX_04;
  CVector3f *pCVar5;
  CVector3f *extraout_EDX_05;
  float10 fVar6;
  float10 fVar7;
  float10 extraout_ST1;
  double dVar8;
  float fStack_24;
  float local_20;
  float local_1c;
  
  fVar3 = -this_ptr->m[1].z;
  if (fVar3 <= (float)g_EulerGimbalLockThreshold) {
    euler_angles->x = -1.5707964;
  }
  else if ((double)fVar3 < 1.0) {
    fVar6 = crt_math_c_asin_FUN_00600b94((float10)fVar3);
    fVar7 = SQRT((float10)1 - extraout_ST1 * extraout_ST1);
    extraout_EDX_00->x = (float)fVar6;
    this_ptr = extraout_ECX;
    euler_angles = extraout_EDX_00;
    if (0.0 < (double)fVar7) {
      fVar3 = extraout_ECX->m[0].z * (1.0 / (float)fVar7);
      dVar1 = (double)fVar3;
      dVar8 = (double)(extraout_ECX->m[2].z * (1.0 / (float)fVar7));
      if ((g_EulerSinCosThreshold <= dVar1) || (dVar1 <= g_EulerSinCosThresholdNeg)) {
        pCVar4 = extraout_ECX;
        pCVar5 = extraout_EDX_00;
        if (g_EulerGimbalLockThreshold < dVar8) {
          if (dVar8 < 1.0) {
            dVar8 = crt_math_c_acos_FUN_00600162(dVar8);
            local_20 = (float)dVar8;
            pCVar4 = extraout_ECX_01;
            pCVar5 = extraout_EDX_04;
          }
          else {
            local_1c = 0.0;
          }
        }
        else {
          local_1c = 3.1415927;
        }
        if (dVar1 < 0.0) {
          local_1c = -local_1c;
        }
      }
      else {
        fVar6 = crt_math_c_asin_FUN_00600b94((float10)fVar3);
        local_1c = (float)fVar6;
        pCVar4 = extraout_ECX_00;
        pCVar5 = extraout_EDX_01;
        if (dVar8 < 0.0) {
          local_1c = (float)g_EulerPi - local_1c;
        }
      }
      if (local_1c < (float)g_EulerNegPi) {
        local_1c = local_1c + g_EulerTwoPi;
      }
      if ((float)g_EulerPi < local_1c) {
        local_1c = local_1c + g_EulerNegTwoPi;
      }
      pCVar5->y = local_1c;
      fVar3 = pCVar4->m[1].x * (1.0 / (float)fVar7);
      dVar1 = (double)fVar3;
      dVar8 = (double)(pCVar4->m[1].y * (1.0 / (float)fVar7));
      if ((g_EulerSinCosThreshold <= dVar1) || (dVar1 <= g_EulerSinCosThresholdNeg)) {
        if (g_EulerGimbalLockThreshold < dVar8) {
          if (dVar8 < 1.0) {
            crt_math_c_acos_FUN_00600162(dVar8);
            pCVar5 = extraout_EDX_05;
          }
          else {
            local_20 = 0.0;
          }
        }
        else {
          local_20 = 3.1415927;
        }
        if (dVar1 < 0.0) {
          local_20 = -local_20;
        }
      }
      else {
        fVar6 = crt_math_c_asin_FUN_00600b94((float10)fVar3);
        local_20 = (float)fVar6;
        pCVar5 = extraout_EDX_02;
        if (dVar8 < 0.0) {
          local_20 = (float)g_EulerPi - local_20;
        }
      }
      if (local_20 < (float)g_EulerNegPi) {
        local_20 = local_20 + g_EulerTwoPi;
      }
      if ((float)g_EulerPi < local_20) {
        local_20 = local_20 + g_EulerNegTwoPi;
      }
      pCVar5->z = local_20;
      return pCVar5;
    }
  }
  else {
    euler_angles->x = 1.5707964;
  }
  euler_angles->z = 0.0;
  fVar2 = -this_ptr->m[2].x;
  dVar1 = (double)fVar2;
  dVar8 = (double)this_ptr->m[0].x;
  if ((g_EulerSinCosThreshold <= dVar1) || (dVar1 <= g_EulerSinCosThresholdNeg)) {
    if (g_EulerGimbalLockThreshold < dVar8) {
      if (dVar8 < 1.0) {
        crt_math_c_acos_FUN_00600162(dVar8);
        fStack_24 = (float)((ulonglong)(double)fVar3 >> 0x20);
        euler_angles = extraout_EDX_03;
      }
      else {
        fStack_24 = 0.0;
      }
    }
    else {
      fStack_24 = 3.1415927;
    }
    if (dVar1 < 0.0) {
      fStack_24 = -fStack_24;
    }
  }
  else {
    fVar6 = crt_math_c_asin_FUN_00600b94((float10)fVar2);
    fStack_24 = (float)fVar6;
    euler_angles = extraout_EDX;
    if (dVar8 < 0.0) {
      fStack_24 = (float)g_EulerPi - fStack_24;
    }
  }
  if (fStack_24 < (float)g_EulerNegPi) {
    fStack_24 = fStack_24 + g_EulerTwoPi;
  }
  if ((float)g_EulerPi < fStack_24) {
    fStack_24 = fStack_24 + g_EulerNegTwoPi;
  }
  euler_angles->y = fStack_24;
  return euler_angles;
}


// Assembly code:
// 00472160: PUSH EBX
//   Label: core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
// 00472161: PUSH EDI
// 00472162: PUSH EBP
// 00472163: MOV EBP,ESP
// 00472165: SUB ESP,0x84
// 0047216b: AND ESP,0xfffffff8
// 0047216e: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00472171: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00472174: FLD float ptr [ECX + 0x14]
// 00472177: FCHS
// 00472179: FST double ptr [ESP + 0x68]
//   XREF to: Stack[-0x28] (WRITE)
// 0047217d: FCOMP double ptr [0x0061ee1b]
//   XREF to: 0061ee1b (READ)
// 00472183: FNSTSW AX
// 00472185: SAHF
// 00472186: JBE 0x0047226e
//   XREF to: 0047226e (CONDITIONAL_JUMP)
// 0047218c: FLD1
// 0047218e: FCOMP double ptr [ESP + 0x68]
//   XREF to: Stack[-0x28] (READ)
// 00472192: FNSTSW AX
// 00472194: SAHF
// 00472195: JA 0x00472279
//   XREF to: 00472279 (CONDITIONAL_JUMP)
// 0047219b: MOV dword ptr [EDX],0x3fc90fdb
// 004721a1: MOV dword ptr [EDX + 0x8],0x0
//   Label: LAB_004721a1
// 004721a8: FLD float ptr [ECX + 0x18]
// 004721ab: FCHS
// 004721ad: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x78] (WRITE)
// 004721b1: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x78] (READ)
// 004721b5: FLD float ptr [ECX]
// 004721b7: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 004721bb: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x74] (READ)
// 004721bf: FSTP double ptr [ESP + 0x48]
//   XREF to: Stack[-0x48] (WRITE)
// 004721c3: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 004721c7: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x48] (READ)
// 004721cb: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004721cf: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x44] (READ)
// 004721d3: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x78] (READ)
// 004721d7: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004721db: FCOMP double ptr [0x0061ee23]
//   XREF to: 0061ee23 (READ)
// 004721e1: FNSTSW AX
// 004721e3: SAHF
// 004721e4: JNC 0x00472441
//   XREF to: 00472441 (CONDITIONAL_JUMP)
// 004721ea: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x78] (READ)
// 004721ee: FCOMP double ptr [0x0061ee2b]
//   XREF to: 0061ee2b (READ)
// 004721f4: FNSTSW AX
// 004721f6: SAHF
// 004721f7: JBE 0x00472441
//   XREF to: 00472441 (CONDITIONAL_JUMP)
// 004721fd: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x78] (READ)
// 00472201: CALL crt_math.c_asin_FUN_00600b94
//   XREF to: 00600b94 (UNCONDITIONAL_CALL)
// 00472206: FLDZ
// 00472208: FXCH
// 0047220a: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x20] (WRITE)
// 0047220e: FCOMP double ptr [ESP + 0x48]
//   XREF to: Stack[-0x48] (READ)
// 00472212: FNSTSW AX
// 00472214: SAHF
// 00472215: JBE 0x00472225
//   XREF to: 00472225 (CONDITIONAL_JUMP)
// 00472217: FLD float ptr [ESP + 0x70]
//   XREF to: Stack[-0x20] (READ)
// 0047221b: FSUBR double ptr [0x0061ee33]
//   XREF to: 0061ee33 (READ)
// 00472221: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x20] (WRITE)
// 00472225: FLD float ptr [ESP + 0x70]
//   Label: LAB_00472225
//   XREF to: Stack[-0x20] (READ)
// 00472229: FCOMP double ptr [0x0061ee3b]
//   XREF to: 0061ee3b (READ)
// 0047222f: FNSTSW AX
// 00472231: SAHF
// 00472232: JNC 0x00472242
//   XREF to: 00472242 (CONDITIONAL_JUMP)
// 00472234: FLD float ptr [ESP + 0x70]
//   XREF to: Stack[-0x20] (READ)
// 00472238: FADD float ptr [0x0061ee43]
//   XREF to: 0061ee43 (READ)
// 0047223e: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x20] (WRITE)
// 00472242: FLD float ptr [ESP + 0x70]
//   Label: LAB_00472242
//   XREF to: Stack[-0x20] (READ)
// 00472246: FCOMP double ptr [0x0061ee33]
//   XREF to: 0061ee33 (READ)
// 0047224c: FNSTSW AX
// 0047224e: SAHF
// 0047224f: JBE 0x0047225f
//   XREF to: 0047225f (CONDITIONAL_JUMP)
// 00472251: FLD float ptr [ESP + 0x70]
//   XREF to: Stack[-0x20] (READ)
// 00472255: FADD float ptr [0x0061ee47]
//   XREF to: 0061ee47 (READ)
// 0047225b: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x20] (WRITE)
// 0047225f: MOV EAX,dword ptr [ESP + 0x70]
//   Label: LAB_0047225f
//   XREF to: Stack[-0x20] (READ)
// 00472263: MOV dword ptr [EDX + 0x4],EAX
// 00472266: MOV EAX,EDX
// 00472268: MOV ESP,EBP
// 0047226a: POP EBP
// 0047226b: POP EDI
// 0047226c: POP EBX
// 0047226d: RET
// 0047226e: MOV dword ptr [EDX],0xbfc90fdb
//   Label: LAB_0047226e
// 00472274: JMP 0x004721a1
//   XREF to: 004721a1 (UNCONDITIONAL_JUMP)
// 00472279: FLD double ptr [ESP + 0x68]
//   Label: LAB_00472279
//   XREF to: Stack[-0x28] (READ)
// 0047227d: FLD ST0
// 0047227f: CALL crt_math.c_asin_FUN_00600b94
//   XREF to: 00600b94 (UNCONDITIONAL_CALL)
// 00472284: FLD ST1
// 00472286: FMULP ST2
// 00472288: FLD1
// 0047228a: FSUBRP ST2,ST0
// 0047228c: FXCH
// 0047228e: FSQRT
// 00472290: FLDZ
// 00472292: FXCH ST2
// 00472294: FSTP float ptr [EDX]
// 00472296: FSTP double ptr [ESP]
//   XREF to: Stack[-0x90] (DATA)
// 00472299: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x90] (DATA)
// 0047229c: FNSTSW AX
// 0047229e: SAHF
// 0047229f: JNC 0x004721a1
//   XREF to: 004721a1 (CONDITIONAL_JUMP)
// 004722a5: FLD float ptr [ECX + 0x20]
// 004722a8: FLD1
// 004722aa: FDIV double ptr [ESP]
//   XREF to: Stack[-0x90] (DATA)
// 004722ad: FLD float ptr [ECX + 0x8]
// 004722b0: FMUL ST1
// 004722b2: FXCH ST2
// 004722b4: FMULP
// 004722b6: FXCH
// 004722b8: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x80] (WRITE)
// 004722bc: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x80] (READ)
// 004722c0: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 004722c4: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x7c] (READ)
// 004722c8: FSTP double ptr [ESP + 0x38]
//   XREF to: Stack[-0x58] (WRITE)
// 004722cc: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 004722d0: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x58] (READ)
// 004722d4: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004722d8: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x54] (READ)
// 004722dc: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x80] (READ)
// 004722e0: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004722e4: FCOMP double ptr [0x0061ee23]
//   XREF to: 0061ee23 (READ)
// 004722ea: FNSTSW AX
// 004722ec: SAHF
// 004722ed: JNC 0x00472493
//   XREF to: 00472493 (CONDITIONAL_JUMP)
// 004722f3: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x80] (READ)
// 004722f7: FCOMP double ptr [0x0061ee2b]
//   XREF to: 0061ee2b (READ)
// 004722fd: FNSTSW AX
// 004722ff: SAHF
// 00472300: JBE 0x00472493
//   XREF to: 00472493 (CONDITIONAL_JUMP)
// 00472306: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x80] (READ)
// 0047230a: CALL crt_math.c_asin_FUN_00600b94
//   XREF to: 00600b94 (UNCONDITIONAL_CALL)
// 0047230f: FLDZ
// 00472311: FXCH
// 00472313: FSTP float ptr [ESP + 0x78]
//   XREF to: Stack[-0x18] (WRITE)
// 00472317: FCOMP double ptr [ESP + 0x38]
//   XREF to: Stack[-0x58] (READ)
// 0047231b: FNSTSW AX
// 0047231d: SAHF
// 0047231e: JBE 0x0047232e
//   XREF to: 0047232e (CONDITIONAL_JUMP)
// 00472320: FLD float ptr [ESP + 0x78]
//   XREF to: Stack[-0x18] (READ)
// 00472324: FSUBR double ptr [0x0061ee33]
//   XREF to: 0061ee33 (READ)
// 0047232a: FSTP float ptr [ESP + 0x78]
//   XREF to: Stack[-0x18] (WRITE)
// 0047232e: FLD float ptr [ESP + 0x78]
//   Label: LAB_0047232e
//   XREF to: Stack[-0x18] (READ)
// 00472332: FCOMP double ptr [0x0061ee3b]
//   XREF to: 0061ee3b (READ)
// 00472338: FNSTSW AX
// 0047233a: SAHF
// 0047233b: JNC 0x0047234b
//   XREF to: 0047234b (CONDITIONAL_JUMP)
// 0047233d: FLD float ptr [ESP + 0x78]
//   XREF to: Stack[-0x18] (READ)
// 00472341: FADD float ptr [0x0061ee43]
//   XREF to: 0061ee43 (READ)
// 00472347: FSTP float ptr [ESP + 0x78]
//   XREF to: Stack[-0x18] (WRITE)
// 0047234b: FLD float ptr [ESP + 0x78]
//   Label: LAB_0047234b
//   XREF to: Stack[-0x18] (READ)
// 0047234f: FCOMP double ptr [0x0061ee33]
//   XREF to: 0061ee33 (READ)
// 00472355: FNSTSW AX
// 00472357: SAHF
// 00472358: JBE 0x00472368
//   XREF to: 00472368 (CONDITIONAL_JUMP)
// 0047235a: FLD float ptr [ESP + 0x78]
//   XREF to: Stack[-0x18] (READ)
// 0047235e: FADD float ptr [0x0061ee47]
//   XREF to: 0061ee47 (READ)
// 00472364: FSTP float ptr [ESP + 0x78]
//   XREF to: Stack[-0x18] (WRITE)
// 00472368: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_00472368
//   XREF to: Stack[-0x18] (READ)
// 0047236c: MOV dword ptr [EDX + 0x4],EAX
// 0047236f: FLD float ptr [ECX + 0x10]
// 00472372: FLD1
// 00472374: FDIV double ptr [ESP]
//   XREF to: Stack[-0x90] (DATA)
// 00472377: FLD float ptr [ECX + 0xc]
// 0047237a: FMUL ST1
// 0047237c: FXCH ST2
// 0047237e: FMULP
// 00472380: FXCH
// 00472382: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x88] (WRITE)
// 00472386: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x88] (READ)
// 0047238a: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0047238e: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x84] (READ)
// 00472392: FSTP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x50] (WRITE)
// 00472396: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0047239a: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x50] (READ)
// 0047239e: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004723a2: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x4c] (READ)
// 004723a6: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x88] (READ)
// 004723aa: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004723ae: FCOMP double ptr [0x0061ee23]
//   XREF to: 0061ee23 (READ)
// 004723b4: FNSTSW AX
// 004723b6: SAHF
// 004723b7: JNC 0x004724e5
//   XREF to: 004724e5 (CONDITIONAL_JUMP)
// 004723bd: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x88] (READ)
// 004723c1: FCOMP double ptr [0x0061ee2b]
//   XREF to: 0061ee2b (READ)
// 004723c7: FNSTSW AX
// 004723c9: SAHF
// 004723ca: JBE 0x004724e5
//   XREF to: 004724e5 (CONDITIONAL_JUMP)
// 004723d0: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x88] (READ)
// 004723d4: CALL crt_math.c_asin_FUN_00600b94
//   XREF to: 00600b94 (UNCONDITIONAL_CALL)
// 004723d9: FLDZ
// 004723db: FXCH
// 004723dd: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (WRITE)
// 004723e1: FCOMP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x50] (READ)
// 004723e5: FNSTSW AX
// 004723e7: SAHF
// 004723e8: JBE 0x004723f8
//   XREF to: 004723f8 (CONDITIONAL_JUMP)
// 004723ea: FLD float ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (READ)
// 004723ee: FSUBR double ptr [0x0061ee33]
//   XREF to: 0061ee33 (READ)
// 004723f4: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (WRITE)
// 004723f8: FLD float ptr [ESP + 0x74]
//   Label: LAB_004723f8
//   XREF to: Stack[-0x1c] (READ)
// 004723fc: FCOMP double ptr [0x0061ee3b]
//   XREF to: 0061ee3b (READ)
// 00472402: FNSTSW AX
// 00472404: SAHF
// 00472405: JNC 0x00472415
//   XREF to: 00472415 (CONDITIONAL_JUMP)
// 00472407: FLD float ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (READ)
// 0047240b: FADD float ptr [0x0061ee43]
//   XREF to: 0061ee43 (READ)
// 00472411: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (WRITE)
// 00472415: FLD float ptr [ESP + 0x74]
//   Label: LAB_00472415
//   XREF to: Stack[-0x1c] (READ)
// 00472419: FCOMP double ptr [0x0061ee33]
//   XREF to: 0061ee33 (READ)
// 0047241f: FNSTSW AX
// 00472421: SAHF
// 00472422: JBE 0x00472432
//   XREF to: 00472432 (CONDITIONAL_JUMP)
// 00472424: FLD float ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (READ)
// 00472428: FADD float ptr [0x0061ee47]
//   XREF to: 0061ee47 (READ)
// 0047242e: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (WRITE)
// 00472432: MOV EAX,dword ptr [ESP + 0x74]
//   Label: LAB_00472432
//   XREF to: Stack[-0x1c] (READ)
// 00472436: MOV dword ptr [EDX + 0x8],EAX
// 00472439: MOV EAX,EDX
// 0047243b: MOV ESP,EBP
// 0047243d: POP EBP
// 0047243e: POP EDI
// 0047243f: POP EBX
// 00472440: RET
// 00472441: FLD double ptr [ESP + 0x60]
//   Label: LAB_00472441
//   XREF to: Stack[-0x30] (READ)
// 00472445: FCOMP double ptr [0x0061ee1b]
//   XREF to: 0061ee1b (READ)
// 0047244b: FNSTSW AX
// 0047244d: SAHF
// 0047244e: JA 0x00472471
//   XREF to: 00472471 (CONDITIONAL_JUMP)
// 00472450: MOV dword ptr [ESP + 0x70],0x40490fdb
//   XREF to: Stack[-0x20] (WRITE)
// 00472458: FLDZ
//   Label: LAB_00472458
// 0047245a: FCOMP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x68] (READ)
// 0047245e: FNSTSW AX
// 00472460: SAHF
// 00472461: JBE 0x00472225
//   XREF to: 00472225 (CONDITIONAL_JUMP)
// 00472467: XOR byte ptr [ESP + 0x73],0x80
//   XREF to: Stack[-0x1d] (READ_WRITE)
// 0047246c: JMP 0x00472225
//   XREF to: 00472225 (UNCONDITIONAL_JUMP)
// 00472471: FLD1
//   Label: LAB_00472471
// 00472473: FCOMP double ptr [ESP + 0x60]
//   XREF to: Stack[-0x30] (READ)
// 00472477: FNSTSW AX
// 00472479: SAHF
// 0047247a: JA 0x00472484
//   XREF to: 00472484 (CONDITIONAL_JUMP)
// 0047247c: XOR ECX,ECX
// 0047247e: MOV dword ptr [ESP + 0x70],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 00472482: JMP 0x00472458
//   XREF to: 00472458 (UNCONDITIONAL_JUMP)
// 00472484: FLD double ptr [ESP + 0x60]
//   Label: LAB_00472484
//   XREF to: Stack[-0x30] (READ)
// 00472488: CALL crt_math.c_acos_FUN_00600162
//   XREF to: 00600162 (UNCONDITIONAL_CALL)
// 0047248d: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x20] (WRITE)
// 00472491: JMP 0x00472458
//   XREF to: 00472458 (UNCONDITIONAL_JUMP)
// 00472493: FLD double ptr [ESP + 0x58]
//   Label: LAB_00472493
//   XREF to: Stack[-0x38] (READ)
// 00472497: FCOMP double ptr [0x0061ee1b]
//   XREF to: 0061ee1b (READ)
// 0047249d: FNSTSW AX
// 0047249f: SAHF
// 004724a0: JA 0x004724c3
//   XREF to: 004724c3 (CONDITIONAL_JUMP)
// 004724a2: MOV dword ptr [ESP + 0x78],0x40490fdb
//   XREF to: Stack[-0x18] (WRITE)
// 004724aa: FLDZ
//   Label: LAB_004724aa
// 004724ac: FCOMP double ptr [ESP + 0x30]
//   XREF to: Stack[-0x60] (READ)
// 004724b0: FNSTSW AX
// 004724b2: SAHF
// 004724b3: JBE 0x0047232e
//   XREF to: 0047232e (CONDITIONAL_JUMP)
// 004724b9: XOR byte ptr [ESP + 0x7b],0x80
//   XREF to: Stack[-0x15] (READ_WRITE)
// 004724be: JMP 0x0047232e
//   XREF to: 0047232e (UNCONDITIONAL_JUMP)
// 004724c3: FLD1
//   Label: LAB_004724c3
// 004724c5: FCOMP double ptr [ESP + 0x58]
//   XREF to: Stack[-0x38] (READ)
// 004724c9: FNSTSW AX
// 004724cb: SAHF
// 004724cc: JA 0x004724d6
//   XREF to: 004724d6 (CONDITIONAL_JUMP)
// 004724ce: XOR EBX,EBX
// 004724d0: MOV dword ptr [ESP + 0x78],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 004724d4: JMP 0x004724aa
//   XREF to: 004724aa (UNCONDITIONAL_JUMP)
// 004724d6: FLD double ptr [ESP + 0x58]
//   Label: LAB_004724d6
//   XREF to: Stack[-0x38] (READ)
// 004724da: CALL crt_math.c_acos_FUN_00600162
//   XREF to: 00600162 (UNCONDITIONAL_CALL)
// 004724df: FSTP float ptr [ESP + 0x78]
//   XREF to: Stack[-0x18] (WRITE)
// 004724e3: JMP 0x004724aa
//   XREF to: 004724aa (UNCONDITIONAL_JUMP)
// 004724e5: FLD double ptr [ESP + 0x50]
//   Label: LAB_004724e5
//   XREF to: Stack[-0x40] (READ)
// 004724e9: FCOMP double ptr [0x0061ee1b]
//   XREF to: 0061ee1b (READ)
// 004724ef: FNSTSW AX
// 004724f1: SAHF
// 004724f2: JA 0x00472515
//   XREF to: 00472515 (CONDITIONAL_JUMP)
// 004724f4: MOV dword ptr [ESP + 0x74],0x40490fdb
//   XREF to: Stack[-0x1c] (WRITE)
// 004724fc: FLDZ
//   Label: LAB_004724fc
// 004724fe: FCOMP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x70] (READ)
// 00472502: FNSTSW AX
// 00472504: SAHF
// 00472505: JBE 0x004723f8
//   XREF to: 004723f8 (CONDITIONAL_JUMP)
// 0047250b: XOR byte ptr [ESP + 0x77],0x80
//   XREF to: Stack[-0x19] (READ_WRITE)
// 00472510: JMP 0x004723f8
//   XREF to: 004723f8 (UNCONDITIONAL_JUMP)
// 00472515: FLD1
//   Label: LAB_00472515
// 00472517: FCOMP double ptr [ESP + 0x50]
//   XREF to: Stack[-0x40] (READ)
// 0047251b: FNSTSW AX
// 0047251d: SAHF
// 0047251e: JA 0x00472528
//   XREF to: 00472528 (CONDITIONAL_JUMP)
// 00472520: XOR EDI,EDI
// 00472522: MOV dword ptr [ESP + 0x74],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 00472526: JMP 0x004724fc
//   XREF to: 004724fc (UNCONDITIONAL_JUMP)
// 00472528: FLD double ptr [ESP + 0x50]
//   Label: LAB_00472528
//   XREF to: Stack[-0x40] (READ)
// 0047252c: CALL crt_math.c_acos_FUN_00600162
//   XREF to: 00600162 (UNCONDITIONAL_CALL)
// 00472531: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (WRITE)
// 00472535: JMP 0x004724fc
//   XREF to: 004724fc (UNCONDITIONAL_JUMP)
