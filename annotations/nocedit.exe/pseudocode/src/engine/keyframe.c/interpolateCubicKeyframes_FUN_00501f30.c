// Name: engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30
// Address: 00501f30
// Address Range: [[00501f30, 0050231e]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30(SMRGLHeaderExtended * header)
// Globals:
//   TerminatedCString s_engine_keyframe_c_00630cfa
//   TerminatedCString s_Bad_keyframe_1_00630d0f
//   TerminatedCString s_engine_keyframe_c_00630d1e
//   TerminatedCString s_ZBP_not_found_00630d33
//   double g_SplineNormalizer = 0.0000152587890625
//   float g_SplineCoeff_T3_W0 = -0.5
//   float g_SplineCoeff_T1_W0 = 0.5
//   double g_SplineCoeff_Scale = 65536
//   float g_SplineCoeff_T3_W2 = 1.5
//   float g_SplineCoeff_T2_W2 = -2.5
//   float g_SplineCoeff_T2_W3 = 2
//   float g_SplineCoeff_T3_W3 = -1.5
//   int g_AnimationTimerValue
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0
//   engine_3d.c_dispatchMRGLBlockChain_FUN_00407890
//   engine_keyframe.c_calculatePackedSurfaceNormal_FUN_00501a00
//   engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0
//   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40
//   engine_model.c_getMRGLSize_FUN_00528700

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_keyframe_c_interpolateCubicKeyframes_FUN_00501f30(SMRGLHeaderExtended *header)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int *extraout_ECX;
  int *piVar10;
  uint uVar11;
  int *unaff_EBX;
  int iVar12;
  int *piVar13;
  SSurfaceNormal *output;
  int unaff_ESI;
  int *piVar14;
  CVector3i *vertex_data;
  int *piVar15;
  int iVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  double dVar22;
  int local_18;
  
  if (header[1].child_count == 0) {
    engine_keyframe_c_loadAndInterpolateKeyframes_FUN_00501d40((SMRGLKeyframeModel *)header);
  }
  uVar9 = header[1].base.type;
  uVar6 = header[1].base.count;
  uVar11 = (int)uVar6 >> 0x1f;
  uVar6 = uVar6 ^ uVar11;
  uVar7 = uVar6 / uVar9;
  if (0x7ffe < uVar7) {
    uVar7 = 0x7fff;
  }
  uVar11 = ((uint)(((ulonglong)uVar6 % (ulonglong)uVar9 << 0x20) / (ulonglong)uVar9) >> 0x10 |
           uVar7 << 0x10) ^ uVar11;
  iVar12 = (int)uVar11 >> 0x10;
  local_18 = iVar12 + 1;
  iVar16 = header->child_count;
  header[1].base.count = g_AnimationTimerValue % (int)(header->child_count * uVar9);
  if (iVar16 <= local_18) {
    local_18 = 0;
  }
  local_18 = local_18 + 1;
  if (header->child_count <= local_18) {
    local_18 = 0;
  }
  iVar16 = iVar12 + -1;
  if (iVar16 < 0) {
    iVar16 = header->child_count + -1;
  }
  piVar8 = (int *)(header[1].child_count + 8);
  if (*piVar8 != 2) {
    g_CurrentFilename = "..\\engine\\keyframe.c";
    g_CurrentLineNumber = 0x16b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bad keyframe 1");
  }
  fVar17 = (float10)(uVar11 & 0xffff) * (float10)g_SplineNormalizer;
  fVar18 = fVar17 * fVar17;
  fVar19 = fVar18 * fVar17;
  fVar5 = (float)(fVar17 * (float10)g_SplineCoeff_T1_W0);
  fVar20 = ((fVar19 * (float10)g_SplineCoeff_T3_W0 + fVar18) - (float10)fVar5) *
           (float10)g_SplineCoeff_Scale;
  fVar17 = (fVar19 * (float10)g_SplineCoeff_T1_W0 - fVar18 * (float10)g_SplineCoeff_T1_W0) *
           (float10)g_SplineCoeff_Scale;
  fVar21 = ((float10)1 +
           fVar18 * (float10)g_SplineCoeff_T2_W2 + fVar19 * (float10)g_SplineCoeff_T3_W2) *
           (float10)g_SplineCoeff_Scale;
  fVar18 = (fVar19 * (float10)g_SplineCoeff_T3_W3 + fVar18 * (float10)g_SplineCoeff_T2_W3 +
           (float10)fVar5) * (float10)g_SplineCoeff_Scale;
  piVar13 = (int *)((&header[0x17].base.count)[iVar12] + 0x14);
  piVar14 = (int *)((&header[0x17].base.count)[local_18] + 0x14);
  piVar15 = (int *)((&header[0x17].base.count)[iVar16] + 0x14);
  dVar22 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(piVar8[2],piVar8));
  dVar22 = crt_math_c_round_FUN_005fe6b0(dVar22);
  dVar22 = crt_math_c_round_FUN_005fe6b0(dVar22);
  dVar22 = crt_math_c_round_FUN_005fe6b0(dVar22);
  iVar16 = (int)ROUND(fVar20);
  iVar12 = (int)ROUND(fVar21);
  iVar4 = (int)ROUND(fVar18);
  piVar8 = extraout_ECX;
  piVar10 = extraout_ECX;
  if ((int)((ulonglong)dVar22 >> 0x20) != 0 && -1 < (longlong)dVar22) {
    do {
      *piVar8 = ((uint)((longlong)iVar16 * (longlong)*piVar15) >> 0x10 |
                (int)((ulonglong)((longlong)iVar16 * (longlong)*piVar15) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar12 * (longlong)*piVar13) >> 0x10 |
                (int)((ulonglong)((longlong)iVar12 * (longlong)*piVar13) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar4 * (longlong)*unaff_EBX) >> 0x10 |
                (int)((ulonglong)((longlong)iVar4 * (longlong)*unaff_EBX) >> 0x20) << 0x10) +
                ((uint)((longlong)(int)fVar5 * (longlong)*piVar14) >> 0x10 |
                (int)((ulonglong)((longlong)(int)fVar5 * (longlong)*piVar14) >> 0x20) << 0x10);
      piVar8[1] = ((uint)((longlong)iVar16 * (longlong)piVar15[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar16 * (longlong)piVar15[1]) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar12 * (longlong)piVar13[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar12 * (longlong)piVar13[1]) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar4 * (longlong)unaff_EBX[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar4 * (longlong)unaff_EBX[1]) >> 0x20) << 0x10) +
                  ((uint)((longlong)(int)fVar5 * (longlong)piVar14[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)(int)fVar5 * (longlong)piVar14[1]) >> 0x20) << 0x10);
      piVar1 = piVar15 + 2;
      piVar2 = piVar13 + 2;
      piVar15 = piVar15 + 3;
      piVar13 = piVar13 + 3;
      piVar3 = piVar14 + 2;
      piVar14 = piVar14 + 3;
      piVar10 = piVar8 + 3;
      piVar8[2] = ((uint)((longlong)iVar16 * (longlong)*piVar1) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar16 * (longlong)*piVar1) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar12 * (longlong)*piVar2) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar12 * (longlong)*piVar2) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar4 * (longlong)unaff_EBX[2]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar4 * (longlong)unaff_EBX[2]) >> 0x20) << 0x10) +
                  ((uint)((longlong)(int)fVar5 * (longlong)*piVar3) >> 0x10 |
                  (int)((ulonglong)((longlong)(int)fVar5 * (longlong)*piVar3) >> 0x20) << 0x10);
      unaff_ESI = unaff_ESI + 1;
      unaff_EBX = unaff_EBX + 3;
      piVar8 = piVar10;
    } while (unaff_ESI < *(int *)((int)ROUND(fVar17) + 8));
  }
  if (*piVar10 != 0x17) {
    g_CurrentFilename = "..\\engine\\keyframe.c";
    g_CurrentLineNumber = 0x1a6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("ZBP not found!");
  }
  output = (SSurfaceNormal *)(piVar10 + 3);
  vertex_data = (CVector3i *)(header[1].child_count + 0x14);
  do {
    uVar9 = output->unknown;
    if (0x17 < uVar9) {
      if (uVar9 < 0x19) {
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(vertex_data,output);
      }
      else if (uVar9 == 0x19) {
        engine_keyframe_c_calculatePackedSurfaceNormal_FUN_00501a00
                  (vertex_data,(SSurfacePackedNormal *)output);
      }
    }
    uVar9 = engine_model_c_getMRGLSize_FUN_00528700((SMRGLHeaderExtended *)output);
    output = (SSurfaceNormal *)(output->field7_0x1c + ((uVar9 & 0xfffffffc) - 0x1c));
  } while (output->unknown != 0);
  engine_3d_c_dispatchMRGLBlockChain_FUN_00407890((SMRGLHeaderExtended *)header[1].child_count);
  return (SMRGLHeaderExtended *)&header[0x1c].child_count;
}


// Assembly code:
// 00501f30: PUSH EBX
//   Label: engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30
// 00501f31: PUSH ESI
// 00501f32: PUSH EDI
// 00501f33: PUSH EBP
// 00501f34: MOV EBP,ESP
// 00501f36: SUB ESP,0x30
// 00501f39: AND ESP,0xfffffff8
// 00501f3c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00501f3f: CMP dword ptr [EAX + 0x14],0x0
// 00501f43: JZ 0x005022c8
//   XREF to: 005022c8 (CONDITIONAL_JUMP)
// 00501f49: MOV ESI,dword ptr [EBP + 0x14]
//   Label: LAB_00501f49
//   XREF to: Stack[0x4] (READ)
// 00501f4c: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00501f4f: MOV ESI,dword ptr [ESI + 0x8]
// 00501f52: MOV EBX,dword ptr [EDX + 0xc]
// 00501f55: IMUL ESI,EBX
// 00501f58: MOV EAX,dword ptr [EDX + 0x10]
// 00501f5b: CDQ
// 00501f5c: MOV ECX,EDX
// 00501f5e: XOR EAX,EDX
// 00501f60: XOR EDX,EDX
// 00501f62: DIV EBX
// 00501f64: CMP EAX,0x7fff
// 00501f69: JC 0x00501f70
//   XREF to: 00501f70 (CONDITIONAL_JUMP)
// 00501f6b: MOV EAX,0x7fff
// 00501f70: PUSH EAX
//   Label: LAB_00501f70
// 00501f71: XOR EAX,EAX
// 00501f73: DIV EBX
// 00501f75: POP EDX
// 00501f76: SHRD EAX,EDX,0x10
// 00501f7a: XOR EAX,ECX
// 00501f7c: MOV EDX,dword ptr [0x02cf6a84]
//   XREF to: 02cf6a84 (READ)
// 00501f82: MOV ECX,EAX
// 00501f84: MOV EAX,EDX
// 00501f86: SAR EDX,0x1f
// 00501f89: IDIV ESI
// 00501f8b: MOV EBX,ECX
// 00501f8d: SAR EBX,0x10
// 00501f90: AND ECX,0xffff
// 00501f96: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00501f99: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x40] (DATA)
// 00501f9c: LEA ESI,[EBX + 0x1]
// 00501f9f: MOV EDI,dword ptr [EAX + 0x8]
// 00501fa2: MOV dword ptr [EAX + 0x10],EDX
// 00501fa5: CMP ESI,EDI
// 00501fa7: JL 0x00501fab
//   XREF to: 00501fab (CONDITIONAL_JUMP)
// 00501fa9: XOR ESI,ESI
// 00501fab: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_00501fab
//   XREF to: Stack[0x4] (READ)
// 00501fae: LEA EAX,[ESI + 0x1]
// 00501fb1: MOV ECX,dword ptr [EDX + 0x8]
// 00501fb4: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00501fb8: CMP EAX,ECX
// 00501fba: JL 0x00501fc2
//   XREF to: 00501fc2 (CONDITIONAL_JUMP)
// 00501fbc: XOR EDI,EDI
// 00501fbe: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 00501fc2: LEA EDI,[EBX + -0x1]
//   Label: LAB_00501fc2
// 00501fc5: TEST EDI,EDI
// 00501fc7: JL 0x005022d6
//   XREF to: 005022d6 (CONDITIONAL_JUMP)
// 00501fcd: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00501fcd
//   XREF to: Stack[0x4] (READ)
// 00501fd0: MOV EAX,dword ptr [EAX + 0x14]
// 00501fd3: ADD EAX,0x8
// 00501fd6: MOV EDX,dword ptr [EAX]
// 00501fd8: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00501fdc: CMP EDX,0x2
// 00501fdf: JZ 0x00502003
//   XREF to: 00502003 (CONDITIONAL_JUMP)
// 00501fe1: MOV ECX,0x630cfa
//   XREF to: 00630cfa (PARAM)
// 00501fe6: MOV EAX,0x16b
// 00501feb: PUSH 0x630d0f
//   XREF to: 00630d0f (DATA)
// 00501ff0: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00501ff6: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00501ffb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00502000: ADD ESP,0x4
// 00502003: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_00502003
//   XREF to: Stack[0x4] (READ)
// 00502006: MOV EAX,EDX
// 00502008: MOV EAX,dword ptr [EAX + ESI*0x4 + 0x118]
// 0050200f: ADD EAX,0x14
// 00502012: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00502016: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 0050201a: SHL EAX,0x2
// 0050201d: ADD EAX,EDX
// 0050201f: MOV ESI,dword ptr [EAX + 0x118]
// 00502025: LEA EAX,[EDI*0x4 + 0x0]
// 0050202c: ADD EAX,EDX
// 0050202e: MOV EDI,dword ptr [EAX + 0x118]
// 00502034: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 00502037: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0050203b: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0050203f: FMUL double ptr [0x00630d48]
//   XREF to: 00630d48 (READ)
// 00502045: FLD ST0
// 00502047: FMUL ST1
// 00502049: FLD ST0
// 0050204b: FMUL ST2
// 0050204d: FLD ST1
// 0050204f: FMUL float ptr [0x00630d68]
//   XREF to: 00630d68 (READ)
// 00502055: FLD ST1
// 00502057: FMUL float ptr [0x00630d50]
//   XREF to: 00630d50 (READ)
// 0050205d: FLD ST2
// 0050205f: FMUL float ptr [0x00630d60]
//   XREF to: 00630d60 (READ)
// 00502065: FLD ST3
// 00502067: FXCH ST2
// 00502069: FADD ST0,ST5
// 0050206b: FXCH ST2
// 0050206d: FMUL float ptr [0x00630d6c]
//   XREF to: 00630d6c (READ)
// 00502073: FXCH ST6
// 00502075: FMUL float ptr [0x00630d54]
//   XREF to: 00630d54 (READ)
// 0050207b: FXCH ST4
// 0050207d: FMUL float ptr [0x00630d54]
//   XREF to: 00630d54 (READ)
// 00502083: FXCH ST4
// 00502085: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (WRITE)
// 00502089: FXCH
// 0050208b: FSUB float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0050208f: FLD ST4
// 00502091: FMUL float ptr [0x00630d54]
//   XREF to: 00630d54 (READ)
// 00502097: FXCH
// 00502099: FMUL double ptr [0x00630d58]
//   XREF to: 00630d58 (READ)
// 0050209f: FXCH
// 005020a1: FSUBP ST4,ST0
// 005020a3: FXCH ST4
// 005020a5: FMUL float ptr [0x00630d64]
//   XREF to: 00630d64 (READ)
// 005020ab: FXCH ST3
// 005020ad: FMUL double ptr [0x00630d58]
//   XREF to: 00630d58 (READ)
// 005020b3: FXCH ST3
// 005020b5: FADDP
// 005020b7: FXCH ST4
// 005020b9: FADDP
// 005020bb: FLD1
// 005020bd: FADDP ST4,ST0
// 005020bf: FADD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 005020c3: FXCH ST3
// 005020c5: FMUL double ptr [0x00630d58]
//   XREF to: 00630d58 (READ)
// 005020cb: FXCH ST3
// 005020cd: FMUL double ptr [0x00630d58]
//   XREF to: 00630d58 (READ)
// 005020d3: SHL EBX,0x2
// 005020d6: MOV ECX,dword ptr [EDX + 0x14]
// 005020d9: ADD EBX,EDX
// 005020db: ADD ECX,0x14
// 005020de: MOV EBX,dword ptr [EBX + 0x118]
// 005020e4: XOR EAX,EAX
// 005020e6: ADD EBX,0x14
// 005020e9: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005020ed: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 005020f1: ADD ESI,0x14
// 005020f4: ADD EDI,0x14
// 005020f7: MOV EDX,dword ptr [EAX + 0x8]
// 005020fa: FXCH
// 005020fc: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00502101: FISTP dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (WRITE)
// 00502105: FXCH
// 00502107: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050210c: FXCH ST2
// 0050210e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00502113: FXCH
// 00502115: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050211a: FXCH ST2
// 0050211c: FISTP dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 00502120: FISTP dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (WRITE)
// 00502124: FISTP dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (WRITE)
// 00502128: TEST EDX,EDX
// 0050212a: JLE 0x00502267
//   XREF to: 00502267 (CONDITIONAL_JUMP)
// 00502130: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_00502130
//   XREF to: Stack[-0x28] (READ)
// 00502134: MOV EDX,dword ptr [EDI]
// 00502136: IMUL EDX
// 00502138: SHRD EAX,EDX,0x10
// 0050213c: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00502140: MOV EDX,dword ptr [EBX]
// 00502142: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 00502146: IMUL EDX
// 00502148: SHRD EAX,EDX,0x10
// 0050214c: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 00502150: ADD EDX,EAX
// 00502152: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00502156: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 0050215a: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 0050215e: MOV EDX,dword ptr [EDX]
// 00502160: IMUL EDX
// 00502162: SHRD EAX,EDX,0x10
// 00502166: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0050216a: ADD EDX,EAX
// 0050216c: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 00502170: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00502174: MOV EDX,dword ptr [ESI]
// 00502176: IMUL EDX
// 00502178: SHRD EAX,EDX,0x10
// 0050217c: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 00502180: ADD EDX,EAX
// 00502182: MOV dword ptr [ECX],EDX
// 00502184: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 00502188: MOV EDX,dword ptr [EDI + 0x4]
// 0050218b: IMUL EDX
// 0050218d: SHRD EAX,EDX,0x10
// 00502191: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00502195: MOV EDX,dword ptr [EBX + 0x4]
// 00502198: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 0050219c: IMUL EDX
// 0050219e: SHRD EAX,EDX,0x10
// 005021a2: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 005021a6: ADD EDX,EAX
// 005021a8: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005021ac: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 005021b0: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 005021b4: MOV EDX,dword ptr [EDX + 0x4]
// 005021b7: IMUL EDX
// 005021b9: SHRD EAX,EDX,0x10
// 005021bd: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 005021c1: ADD EDX,EAX
// 005021c3: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 005021c7: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005021cb: MOV EDX,dword ptr [ESI + 0x4]
// 005021ce: IMUL EDX
// 005021d0: SHRD EAX,EDX,0x10
// 005021d4: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 005021d8: ADD EDX,EAX
// 005021da: MOV dword ptr [ECX + 0x4],EDX
// 005021dd: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 005021e1: MOV EDX,dword ptr [EDI + 0x8]
// 005021e4: IMUL EDX
// 005021e6: SHRD EAX,EDX,0x10
// 005021ea: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005021ee: MOV EDX,dword ptr [EBX + 0x8]
// 005021f1: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 005021f5: IMUL EDX
// 005021f7: SHRD EAX,EDX,0x10
// 005021fb: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 005021ff: ADD EDX,EAX
// 00502201: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00502205: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 00502209: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 0050220d: MOV EDX,dword ptr [EDX + 0x8]
// 00502210: ADD EDI,0xc
// 00502213: IMUL EDX
// 00502215: SHRD EAX,EDX,0x10
// 00502219: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0050221d: ADD EBX,0xc
// 00502220: ADD EDX,EAX
// 00502222: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 00502226: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0050222a: MOV EDX,dword ptr [ESI + 0x8]
// 0050222d: ADD ESI,0xc
// 00502230: IMUL EDX
// 00502232: SHRD EAX,EDX,0x10
// 00502236: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0050223a: ADD ECX,0xc
// 0050223d: ADD EDX,EAX
// 0050223f: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 00502243: MOV dword ptr [ECX + -0x4],EDX
// 00502246: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 0050224a: INC EAX
// 0050224b: ADD EDX,0xc
// 0050224e: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00502252: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00502256: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 0050225a: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 0050225e: CMP EAX,dword ptr [EDX + 0x8]
// 00502261: JL 0x00502130
//   XREF to: 00502130 (CONDITIONAL_JUMP)
// 00502267: MOV ESI,dword ptr [ECX]
//   Label: LAB_00502267
// 00502269: MOV EBX,ECX
// 0050226b: CMP ESI,0x17
// 0050226e: JNZ 0x005022e2
//   XREF to: 005022e2 (CONDITIONAL_JUMP)
// 00502270: MOV ESI,dword ptr [EBP + 0x14]
//   Label: LAB_00502270
//   XREF to: Stack[0x4] (READ)
// 00502273: MOV ESI,dword ptr [ESI + 0x14]
// 00502276: ADD EBX,0xc
// 00502279: ADD ESI,0x14
// 0050227c: MOV ECX,dword ptr [EBX]
//   Label: LAB_0050227c
// 0050227e: CMP ECX,0x18
// 00502281: JC 0x00502293
//   XREF to: 00502293 (CONDITIONAL_JUMP)
// 00502283: JA 0x00502315
//   XREF to: 00502315 (CONDITIONAL_JUMP)
// 00502289: PUSH EBX
// 0050228a: PUSH ESI
// 0050228b: CALL engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0
//   XREF to: 00501bc0 (UNCONDITIONAL_CALL)
// 00502290: ADD ESP,0x8
//   Label: LAB_00502290
// 00502293: PUSH EBX
//   Label: LAB_00502293
// 00502294: CALL engine_model.c_getMRGLSize_FUN_00528700
//   XREF to: 00528700 (UNCONDITIONAL_CALL)
// 00502299: SHR EAX,0x2
// 0050229c: SHL EAX,0x2
// 0050229f: ADD EBX,EAX
// 005022a1: MOV EDX,dword ptr [EBX]
// 005022a3: ADD ESP,0x4
// 005022a6: TEST EDX,EDX
// 005022a8: JNZ 0x0050227c
//   XREF to: 0050227c (CONDITIONAL_JUMP)
// 005022aa: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005022ad: MOV ECX,dword ptr [EAX + 0x14]
// 005022b0: PUSH ECX
// 005022b1: CALL engine_3d.c_dispatchMRGLBlockChain_FUN_00407890
//   XREF to: 00407890 (UNCONDITIONAL_CALL)
// 005022b6: ADD ESP,0x4
// 005022b9: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005022bc: ADD EAX,0x158
// 005022c1: MOV ESP,EBP
// 005022c3: POP EBP
// 005022c4: POP EDI
// 005022c5: POP ESI
// 005022c6: POP EBX
// 005022c7: RET
// 005022c8: PUSH EAX
//   Label: LAB_005022c8
// 005022c9: CALL engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40
//   XREF to: 00501d40 (UNCONDITIONAL_CALL)
// 005022ce: ADD ESP,0x4
// 005022d1: JMP 0x00501f49
//   XREF to: 00501f49 (UNCONDITIONAL_JUMP)
// 005022d6: MOV EDI,dword ptr [EBP + 0x14]
//   Label: LAB_005022d6
//   XREF to: Stack[0x4] (READ)
// 005022d9: MOV EDI,dword ptr [EDI + 0x8]
// 005022dc: DEC EDI
// 005022dd: JMP 0x00501fcd
//   XREF to: 00501fcd (UNCONDITIONAL_JUMP)
// 005022e2: MOV EDI,0x630d1e
//   Label: LAB_005022e2
//   XREF to: 00630d1e (DATA)
// 005022e7: MOV EAX,0x1a6
// 005022ec: PUSH 0x630d33
//   XREF to: 00630d33 (DATA)
// 005022f1: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005022f7: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005022fc: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00502301: ADD ESP,0x4
// 00502304: JMP 0x00502270
//   XREF to: 00502270 (UNCONDITIONAL_JUMP)
// 00502309: PUSH EBX
//   Label: LAB_00502309
// 0050230a: PUSH ESI
// 0050230b: CALL engine_keyframe.c_calculatePackedSurfaceNormal_FUN_00501a00
//   XREF to: 00501a00 (UNCONDITIONAL_CALL)
// 00502310: JMP 0x00502290
//   XREF to: 00502290 (UNCONDITIONAL_JUMP)
// 00502315: CMP ECX,0x19
//   Label: LAB_00502315
// 00502318: JZ 0x00502309
//   XREF to: 00502309 (CONDITIONAL_JUMP)
// 0050231a: JMP 0x00502293
//   XREF to: 00502293 (UNCONDITIONAL_JUMP)
