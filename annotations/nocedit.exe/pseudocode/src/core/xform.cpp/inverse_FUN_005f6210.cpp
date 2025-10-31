// Name: core_xform.cpp_inverse_FUN_005f6210
// Address: 005f6210
// Address Range: [[005f6210, 005f6458]]
// Convention: __cdecl
// Signature: CMatrix3x4f * core_xform.cpp_inverse_FUN_005f6210(CMatrix3x4f * output_matrix, CMatrix3x4f * input_matrix)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042d090 (0042d090) at 0042d24b [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80 (0042ce80) at 0042cf63 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043a2b0 (0043a2b0) at 0043a300 [UNCONDITIONAL_CALL]
//   core_mirror.cpp_setupMirrorReflection_FUN_005214c0 (005214c0) at 005218a7 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058ac80 (0058ac80) at 0058acf9 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058aeb0 (0058aeb0) at 0058aedd [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058bd00 (0058bd00) at 0058c010 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c3bf [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00595bfa [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_process_FUN_005db050 (005db050) at 005db32e [UNCONDITIONAL_CALL]
//   core_xform.cpp_buildMirrorTransform_FUN_005f7000 (005f7000) at 005f70a5 [UNCONDITIONAL_CALL]
//   core_xform.cpp_inverseInPlace_FUN_005f6190 (005f6190) at 005f619e [UNCONDITIONAL_CALL]
//   core_xform.cpp_invertAndGetTranslation_FUN_005f6140 (005f6140) at 005f6157 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_xform_cpp_00658389
//   TerminatedCString s_inverse_Singular_matrix_0065839b
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_xform.cpp_determinant_FUN_005f61c0

#include "nocturne.h"

CMatrix3x4f * __cdecl
core_xform_cpp_inverse_FUN_005f6210(CMatrix3x4f *output_matrix,CMatrix3x4f *input_matrix)

{
  undefined4 uVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  float *pfVar3;
  CMatrix3x4f *unaff_EDI;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  double dVar6;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  double local_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_28;
  undefined4 local_20;
  int iStack_1c;
  undefined4 local_18;
  
  bVar5 = 0;
  dVar6 = core_xform_cpp_determinant_FUN_005f61c0(output_matrix);
  iStack_1c = SUB84(dVar6,0);
  local_18 = (undefined4)((ulonglong)dVar6 >> 0x20);
  uVar1 = local_18;
  if ((((ulonglong)dVar6 & 0x7fffffff00000000) == 0) && (iStack_1c == 0)) {
    g_CurrentFilename = "..\\core\\xform.cpp";
    g_CurrentLineNumber = 0x23e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("inverse() - Singular matrix");
  }
  local_88 = output_matrix->m[1].x * output_matrix->m[2].y -
             output_matrix->m[1].y * output_matrix->m[2].x;
  local_58 = (double)local_88;
  local_78 = -(output_matrix->m[1].w * output_matrix->m[2].y -
              output_matrix->m[1].y * output_matrix->m[2].w);
  dVar6 = (double)local_78;
  local_20 = SUB84(dVar6,0);
  iStack_1c = (int)((ulonglong)dVar6 >> 0x20);
  dVar6 = 1.0 / (double)CONCAT44(local_8c,uVar1);
  local_68 = output_matrix->m[1].w * output_matrix->m[2].x -
             output_matrix->m[1].x * output_matrix->m[2].w;
  dStack_40 = (double)local_68;
  local_84 = -(output_matrix->m[0].x * output_matrix->m[2].y -
              output_matrix->m[0].y * output_matrix->m[2].x);
  local_50 = (double)local_84;
  local_74 = output_matrix->m[0].w * output_matrix->m[2].y -
             output_matrix->m[0].y * output_matrix->m[2].w;
  local_48 = (double)local_74;
  local_88 = local_88 * (float)dVar6;
  local_84 = local_84 * (float)dVar6;
  local_80 = (output_matrix->m[0].x * output_matrix->m[1].y -
             output_matrix->m[0].y * output_matrix->m[1].x) * (float)dVar6;
  local_78 = local_78 * (float)dVar6;
  local_60 = output_matrix->m[0].w * output_matrix->m[1].x -
             output_matrix->m[0].x * output_matrix->m[1].w;
  local_28 = (double)local_60;
  local_74 = local_74 * (float)dVar6;
  local_70 = -(output_matrix->m[0].w * output_matrix->m[1].y -
              output_matrix->m[0].y * output_matrix->m[1].w) * (float)dVar6;
  local_68 = local_68 * (float)dVar6;
  local_64 = -(output_matrix->m[0].w * output_matrix->m[2].x -
              output_matrix->m[0].x * output_matrix->m[2].w) * (float)dVar6;
  local_60 = local_60 * (float)dVar6;
  local_7c = -(output_matrix->m[2].z * local_80 +
              output_matrix->m[0].z * local_88 + output_matrix->m[1].z * local_84);
  local_6c = -(output_matrix->m[2].z * local_70 +
              output_matrix->m[1].z * local_74 + output_matrix->m[0].z * local_78);
  fStack_5c = -(output_matrix->m[2].z * local_60 +
               output_matrix->m[1].z * local_64 + output_matrix->m[0].z * local_68);
  pfVar3 = &local_88;
  pCVar4 = unaff_EDI;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  return unaff_EDI;
}


// Assembly code:
// 005f6210: PUSH EBX
//   Label: core_xform.cpp_inverse_FUN_005f6210
// 005f6211: PUSH EDI
// 005f6212: PUSH EBP
// 005f6213: MOV EBP,ESP
// 005f6215: SUB ESP,0x8c
// 005f621b: AND ESP,0xfffffff8
// 005f621e: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005f6221: MOV dword ptr [ESP + 0x88],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 005f6228: PUSH EBX
// 005f6229: CALL core_xform.cpp_determinant_FUN_005f61c0
//   XREF to: 005f61c0 (UNCONDITIONAL_CALL)
// 005f622e: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005f6232: MOV dword ptr [ESP + 0x80],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005f6239: FLD double ptr [ESP + 0x7c]
//   XREF to: Stack[-0x20] (READ)
// 005f623d: ADD ESP,0x4
// 005f6240: FSTP double ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005f6243: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x94] (READ)
// 005f6247: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005f624a: TEST EDX,0x7fffffff
// 005f6250: JNZ 0x005f625a
//   XREF to: 005f625a (CONDITIONAL_JUMP)
// 005f6252: TEST ECX,ECX
// 005f6254: JZ 0x005f6431
//   XREF to: 005f6431 (CONDITIONAL_JUMP)
// 005f625a: FLD float ptr [EBX + 0x14]
//   Label: LAB_005f625a
// 005f625d: FMUL float ptr [EBX + 0x28]
// 005f6260: FLD float ptr [EBX + 0x10]
// 005f6263: FMUL float ptr [EBX + 0x28]
// 005f6266: FLD float ptr [EBX + 0x10]
// 005f6269: FMUL float ptr [EBX + 0x24]
// 005f626c: FLD float ptr [EBX + 0x4]
// 005f626f: FMUL float ptr [EBX + 0x28]
// 005f6272: FLD float ptr [EBX + 0x8]
// 005f6275: FMUL float ptr [EBX + 0x20]
// 005f6278: FLD float ptr [EBX + 0x18]
// 005f627b: FMUL float ptr [EBX + 0x24]
// 005f627e: FLD float ptr [EBX + 0x18]
// 005f6281: FXCH
// 005f6283: FSUBP ST6,ST0
// 005f6285: FMUL float ptr [EBX + 0x20]
// 005f6288: FXCH ST5
// 005f628a: FSTP double ptr [ESP + 0x38]
//   XREF to: Stack[-0x60] (WRITE)
// 005f628e: FLD float ptr [EBX + 0x4]
// 005f6291: FMUL float ptr [EBX + 0x20]
// 005f6294: FXCH ST5
// 005f6296: FSUBP ST4,ST0
// 005f6298: FLD1
// 005f629a: FXCH ST4
// 005f629c: FCHS
// 005f629e: FSTP double ptr [ESP + 0x70]
//   XREF to: Stack[-0x28] (WRITE)
// 005f62a2: FLD float ptr [EBX + 0x14]
// 005f62a5: FMUL float ptr [EBX + 0x20]
// 005f62a8: FXCH ST4
// 005f62aa: FDIV double ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005f62ad: FLD float ptr [EBX + 0x4]
// 005f62b0: FMUL float ptr [EBX + 0x18]
// 005f62b3: FXCH ST5
// 005f62b5: FSUBP ST4,ST0
// 005f62b7: FXCH ST3
// 005f62b9: FSTP double ptr [ESP + 0x50]
//   XREF to: Stack[-0x48] (WRITE)
// 005f62bd: FLD float ptr [EBX + 0x8]
// 005f62c0: FMUL float ptr [EBX + 0x24]
// 005f62c3: FLD float ptr [EBX + 0x8]
// 005f62c6: FXCH
// 005f62c8: FSUBP ST3,ST0
// 005f62ca: FMUL float ptr [EBX + 0x10]
// 005f62cd: FXCH ST2
// 005f62cf: FCHS
// 005f62d1: FSTP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x58] (WRITE)
// 005f62d5: FLD float ptr [EBX]
// 005f62d7: FMUL float ptr [EBX + 0x28]
// 005f62da: FLD float ptr [EBX + 0x4]
// 005f62dd: FMUL float ptr [EBX + 0x10]
// 005f62e0: FXCH
// 005f62e2: FSUBRP ST2,ST0
// 005f62e4: FXCH
// 005f62e6: FSTP double ptr [ESP + 0x48]
//   XREF to: Stack[-0x50] (WRITE)
// 005f62ea: FLD float ptr [EBX]
// 005f62ec: FMUL float ptr [EBX + 0x24]
// 005f62ef: FLD float ptr [EBX + 0x8]
// 005f62f2: FXCH
// 005f62f4: FSUBRP ST6,ST0
// 005f62f6: FMUL float ptr [EBX + 0x14]
// 005f62f9: FXCH ST5
// 005f62fb: FCHS
// 005f62fd: FSTP double ptr [ESP + 0x80]
//   XREF to: Stack[-0x18] (WRITE)
// 005f6304: FLD float ptr [EBX]
// 005f6306: FMUL float ptr [EBX + 0x18]
// 005f6309: FLD float ptr [EBX]
// 005f630b: FMUL float ptr [EBX + 0x14]
// 005f630e: FXCH ST6
// 005f6310: FSUBP ST5,ST0
// 005f6312: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0x60] (READ)
// 005f6316: FXCH ST4
// 005f6318: FSTP double ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005f631b: FXCH ST3
// 005f631d: FMUL double ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005f6320: FXCH ST3
// 005f6322: FSUBRP ST2,ST0
// 005f6324: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x58] (READ)
// 005f6328: FMUL double ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005f632b: FXCH ST2
// 005f632d: FCHS
// 005f632f: FXCH ST4
// 005f6331: FMUL double ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005f6334: FLD double ptr [ESP + 0x70]
//   XREF to: Stack[-0x28] (READ)
// 005f6338: FMUL double ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005f633b: FXCH ST6
// 005f633d: FSUBRP ST2,ST0
// 005f633f: FXCH
// 005f6341: FSTP double ptr [ESP + 0x68]
//   XREF to: Stack[-0x30] (WRITE)
// 005f6345: FLD double ptr [ESP + 0x48]
//   XREF to: Stack[-0x50] (READ)
// 005f6349: FMUL double ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005f634c: FXCH ST4
// 005f634e: FMUL double ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005f6351: FLD double ptr [ESP + 0x50]
//   XREF to: Stack[-0x48] (READ)
// 005f6355: FMUL double ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005f6358: FXCH ST4
// 005f635a: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x90] (WRITE)
// 005f635e: FLD double ptr [ESP + 0x80]
//   XREF to: Stack[-0x18] (READ)
// 005f6365: FMUL double ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005f6368: FXCH ST3
// 005f636a: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x8c] (WRITE)
// 005f636e: FLD double ptr [ESP + 0x68]
//   XREF to: Stack[-0x30] (READ)
// 005f6372: FMUL double ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005f6375: FXCH ST2
// 005f6377: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x88] (WRITE)
// 005f637b: FLD float ptr [EBX + 0x1c]
// 005f637e: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[-0x8c] (READ)
// 005f6382: FXCH ST6
// 005f6384: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x80] (WRITE)
// 005f6388: FLD float ptr [EBX + 0xc]
// 005f638b: FMUL float ptr [ESP + 0x18]
//   XREF to: Stack[-0x80] (READ)
// 005f638f: FXCH ST5
// 005f6391: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x7c] (WRITE)
// 005f6395: FLD float ptr [EBX + 0xc]
// 005f6398: FXCH ST4
// 005f639a: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x70] (WRITE)
// 005f639e: FXCH ST3
// 005f63a0: FMUL float ptr [ESP + 0x28]
//   XREF to: Stack[-0x70] (READ)
// 005f63a4: FXCH ST3
// 005f63a6: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x78] (WRITE)
// 005f63aa: FLD float ptr [EBX + 0xc]
// 005f63ad: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x90] (READ)
// 005f63b1: FLD float ptr [EBX + 0x1c]
// 005f63b4: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x7c] (READ)
// 005f63b8: FXCH ST3
// 005f63ba: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x6c] (WRITE)
// 005f63be: FLD float ptr [EBX + 0x1c]
// 005f63c1: FMUL float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x6c] (READ)
// 005f63c5: FXCH
// 005f63c7: FADDP ST6,ST0
// 005f63c9: FXCH ST2
// 005f63cb: FADDP ST4,ST0
// 005f63cd: FLD float ptr [EBX + 0x2c]
// 005f63d0: FMUL float ptr [ESP + 0x10]
//   XREF to: Stack[-0x88] (READ)
// 005f63d4: FLD float ptr [EBX + 0x2c]
// 005f63d7: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x78] (READ)
// 005f63db: FXCH ST3
// 005f63dd: FADDP ST4,ST0
// 005f63df: FXCH
// 005f63e1: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x68] (WRITE)
// 005f63e5: FLD float ptr [EBX + 0x2c]
// 005f63e8: FMUL float ptr [ESP + 0x30]
//   XREF to: Stack[-0x68] (READ)
// 005f63ec: FXCH
// 005f63ee: FADDP ST5,ST0
// 005f63f0: FXCH
// 005f63f2: FADDP ST3,ST0
// 005f63f4: FADDP
// 005f63f6: FXCH ST2
// 005f63f8: FCHS
// 005f63fa: FXCH
// 005f63fc: FCHS
// 005f63fe: FXCH ST2
// 005f6400: FCHS
// 005f6402: FXCH
// 005f6404: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x84] (WRITE)
// 005f6408: FXCH
// 005f640a: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x74] (WRITE)
// 005f640e: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x64] (WRITE)
// 005f6412: MOV ECX,0xc
// 005f6417: MOV EDI,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x10] (READ)
// 005f641e: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x90] (DATA)
// 005f6422: MOVSD.REP ES:EDI,ESI
// 005f6424: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x10] (READ)
// 005f642b: MOV ESP,EBP
// 005f642d: POP EBP
// 005f642e: POP EDI
// 005f642f: POP EBX
// 005f6430: RET
// 005f6431: MOV ESI,0x658389
//   Label: LAB_005f6431
//   XREF to: 00658389 (DATA)
// 005f6436: MOV EDI,0x23e
// 005f643b: PUSH 0x65839b
//   XREF to: 0065839b (DATA)
// 005f6440: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005f6446: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005f644c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005f6451: ADD ESP,0x4
// 005f6454: JMP 0x005f625a
//   XREF to: 005f625a (UNCONDITIONAL_JUMP)
