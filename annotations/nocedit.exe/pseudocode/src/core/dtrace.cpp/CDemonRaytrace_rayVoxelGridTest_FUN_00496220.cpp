// Name: core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220
// Address: 00496220
// Address Range: [[00496220, 004966ed]]
// Convention: __cdecl
// Signature: int core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220(CDemonRaytrace * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
// Cross-references:
//   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460 (00572460) at 00572479 [UNCONDITIONAL_CALL]
// Globals:
//   float g_VoxelGridSize2 = 2.684355E+8
// Function calls:
//   core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
//   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

int __cdecl
core_dtrace_cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220
          (CDemonRaytrace *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CDemonRaytrace *this_ptr_00;
  CVector3f *ray_origin;
  CVector3f *pCVar4;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  float extraout_EAX_01;
  float *pfVar5;
  CDemonRaytrace *pCVar6;
  int iVar7;
  int iVar8;
  CDemonCube *this_ptr_01;
  CDemonRaytrace *pCVar9;
  float fVar10;
  undefined4 in_EDX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int iVar11;
  int unaff_EBX;
  int iVar12;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  float10 in_ST0;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  double dVar18;
  int unaff_retaddr;
  float fStack_78;
  undefined8 uStack_74;
  CVector3f local_6c;
  CVector3f local_60;
  CDemonRaytrace *local_54;
  CDemonRaytrace *local_50;
  float local_4c;
  uint local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  CDemonRaytrace *local_24;
  CDemonRaytrace *local_20;
  CDemonRaytrace *local_1c;
  int iStack_18;
  int local_14;
  
  ray_origin = start_pos;
  this_ptr_00 = this_ptr;
  local_50 = (CDemonRaytrace *)((start_pos->y - (this_ptr->bbox_min).y) / (this_ptr->cell_size).y);
  fVar13 = ((float10)start_pos->z - (float10)(this_ptr->bbox_min).z) /
           (float10)(this_ptr->cell_size).z;
  fVar14 = ((float10)start_pos->x - (float10)(this_ptr->bbox_min).x) *
           ((float10)1 / (float10)(this_ptr->cell_size).x);
  local_60.z = (float)fVar13;
  fVar15 = (float10)(float)local_50;
  dVar18 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,end_pos));
  dVar18 = crt_math_c_round_FUN_005fe6b0(dVar18);
  local_28 = (int)ROUND(fVar15);
  local_20 = (CDemonRaytrace *)(int)ROUND(fVar13);
  local_44 = (float)fVar14;
  crt_math_c_round_FUN_005fe6b0(dVar18);
  local_20 = (CDemonRaytrace *)(int)ROUND(fVar14);
  dVar18 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar15 = (float10)dVar18;
  uStack_74 = (double)CONCAT44(extraout_EDX,extraout_EAX);
  fVar13 = (float10)uStack_74;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,end_pos));
  local_50 = (CDemonRaytrace *)(int)ROUND(fVar13);
  dVar18 = crt_math_c_floor_FUN_005feb90((double)fVar15);
  fVar15 = (float10)dVar18;
  uStack_74 = (double)CONCAT44(extraout_EDX_00,extraout_EAX_00);
  fVar13 = (float10)uStack_74;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_00,end_pos));
  local_60.y = (float)(int)ROUND(fVar13);
  crt_math_c_floor_FUN_005feb90((double)fVar15);
  uStack_74 = (double)CONCAT44(extraout_EDX_01,extraout_EAX_01);
  fVar15 = (float10)uStack_74;
  iVar12 = 1;
  dVar18 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_01,end_pos));
  pfVar5 = SUB84(dVar18,0);
  fVar10 = *pfVar5 - start_pos->x;
  local_54 = (CDemonRaytrace *)(int)ROUND(fVar15);
  fVar1 = pfVar5[1] - start_pos->y;
  fVar2 = pfVar5[2] - start_pos->z;
  pCVar6 = local_20;
  if (((local_20 != local_50) || (pCVar6 = local_24, local_24 != (CDemonRaytrace *)local_60.y)) ||
     (pCVar6 = local_1c, pCVar9 = this_ptr, pCVar4 = start_pos, local_1c != local_54)) {
    fVar3 = SQRT(fVar2 * fVar2 + fVar10 * fVar10 + fVar1 * fVar1);
    if (0.0 >= fVar3) {
      return 0;
    }
    fVar13 = (float10)fVar10;
    fVar16 = (float10)g_VoxelGridSize2 / (float10)fVar3;
    fVar15 = ABS(fVar13) * fVar16;
    fVar14 = ABS((float10)fVar1) * fVar16;
    fVar16 = ABS((float10)fVar2) * fVar16;
    dVar18 = crt_math_c_round_FUN_005fe6b0
                       ((double)CONCAT44(local_50,CONCAT22((short)((uint)pCVar6 >> 0x10),
                                                           (ushort)(0.0 < fVar3) << 8 |
                                                           (ushort)NAN(fVar3) << 10 |
                                                           (ushort)(fVar3 == 0.0) << 0xe)));
    local_28 = (int)ROUND(fVar15);
    fVar15 = (float10)0;
    dVar18 = crt_math_c_round_FUN_005fe6b0(dVar18);
    dVar18 = crt_math_c_round_FUN_005fe6b0(dVar18);
    iVar11 = (int)((ulonglong)dVar18 >> 0x20);
    local_24 = (CDemonRaytrace *)(int)ROUND(fVar14);
    pCVar9 = (CDemonRaytrace *)(int)ROUND(fVar16);
    if (fVar13 < fVar15) {
      iVar7 = local_14 - (int)local_44;
      local_2c = 0xffffffff;
      local_54 = (CDemonRaytrace *)(local_34 - (float)local_14);
    }
    else {
      iVar7 = (int)local_44 - local_14;
      local_2c = 1;
      local_54 = (CDemonRaytrace *)((float)(local_14 + 1) - local_34);
      iVar11 = local_14;
    }
    if (fStack_78 < 0.0) {
      iVar8 = iStack_18 - (int)local_50;
      local_30 = 0xffffffff;
      local_3c = local_38 - (float)iStack_18;
    }
    else {
      iVar8 = (int)local_50 - iStack_18;
      local_30 = 1;
      local_3c = (float)(iStack_18 + 1) - local_38;
      iVar11 = iStack_18;
    }
    if (extraout_EAX_01 < 0.0) {
      iVar12 = unaff_EBP - local_48;
      local_28 = -1;
      local_4c = local_40 - (float)unaff_EBP;
    }
    else {
      iVar12 = local_48 - unaff_EBP;
      local_28 = 1;
      local_4c = (float)(unaff_EBP + 1) - local_40;
      iVar11 = unaff_EBP;
    }
    iVar12 = iVar7 + 1 + iVar8 + iVar12;
    fVar14 = (float10)(int)local_24 * (float10)local_4c;
    fVar16 = (float10)(int)pCVar9 * (float10)(float)local_54;
    fVar15 = (float10)(int)pCVar9 * (float10)local_3c;
    fVar13 = (float10)(int)local_24 * (float10)(float)local_54 -
             (float10)(int)local_20 * (float10)local_3c;
    fVar17 = (float10)(int)local_20 * (float10)local_4c;
    local_1c = pCVar9;
    dVar18 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar11,pCVar9));
    fVar14 = fVar14 - fVar15;
    unaff_ESI = (int)ROUND(fVar13);
    dVar18 = crt_math_c_round_FUN_005fe6b0(dVar18);
    fVar16 = fVar16 - fVar17;
    unaff_retaddr = (int)ROUND(fVar14);
    crt_math_c_round_FUN_005fe6b0(dVar18);
    pCVar4 = (CVector3f *)(int)ROUND(fVar16);
  }
  while (((iVar11 = unaff_EBX, start_pos = pCVar4, this_ptr = pCVar9,
          this_ptr_01 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                  (this_ptr_00,unaff_ESI,unaff_EDI,iVar11),
          this_ptr_01 == (CDemonCube *)0x0 ||
          (fVar10 = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                              (this_ptr_01,ray_origin,&local_6c,&local_60,&local_48), fVar10 < 0.0))
         || (1.0 < fVar10))) {
    iVar12 = iVar12 + -1;
    if (iVar12 < 1) {
      return 0;
    }
    pCVar9 = (CDemonRaytrace *)((int)&this_ptr->rendering_mode + iStack_18);
    unaff_EBX = (int)&local_1c->rendering_mode + iVar11;
    pCVar4 = (CVector3f *)((int)start_pos - local_14);
    if (unaff_retaddr < 0) {
      if ((int)start_pos < 0) {
        unaff_ESI = (int)&local_20->rendering_mode + unaff_ESI;
        unaff_retaddr = unaff_retaddr + iStack_18;
        pCVar9 = this_ptr;
        pCVar4 = (CVector3f *)((int)&start_pos->x + unaff_EBP);
        unaff_EBX = iVar11;
      }
    }
    else if (-1 < (int)this_ptr) {
      unaff_EDI = (int)&local_24->rendering_mode + unaff_EDI;
      unaff_retaddr = unaff_retaddr - local_14;
      pCVar9 = (CDemonRaytrace *)((int)this_ptr - unaff_EBP);
      pCVar4 = start_pos;
      unaff_EBX = iVar11;
    }
  }
  return 1;
}


// Assembly code:
// 00496220: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220
// 00496221: PUSH ESI
// 00496222: PUSH EDI
// 00496223: PUSH EBP
// 00496224: MOV EBP,ESP
// 00496226: SUB ESP,0x90
// 0049622c: AND ESP,0xfffffff8
// 0049622f: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00496232: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00496235: FLD float ptr [EDI + 0x4]
// 00496238: FSUB float ptr [ESI + 0x14]
// 0049623b: FDIV float ptr [ESI + 0x2c]
// 0049623e: FLD float ptr [EDI]
// 00496240: FSUB float ptr [ESI + 0x10]
// 00496243: FLD1
// 00496245: FDIV float ptr [ESI + 0x28]
// 00496248: FLD float ptr [EDI + 0x8]
// 0049624b: FSUB float ptr [ESI + 0x18]
// 0049624e: FDIV float ptr [ESI + 0x30]
// 00496251: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00496254: FLD float ptr [EAX]
// 00496256: FSUB float ptr [ESI + 0x10]
// 00496259: FXCH ST3
// 0049625b: FMUL ST2
// 0049625d: FXCH ST3
// 0049625f: FMULP ST2
// 00496261: FXCH ST3
// 00496263: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x50] (WRITE)
// 00496267: FXCH ST2
// 00496269: FST float ptr [ESP + 0x48]
//   XREF to: Stack[-0x58] (WRITE)
// 0049626d: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x50] (READ)
// 00496271: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00496276: FXCH
// 00496278: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0049627d: FXCH
// 0049627f: FISTP dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x30] (WRITE)
// 00496283: FISTP dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x28] (WRITE)
// 00496287: FST float ptr [ESP + 0x54]
//   XREF to: Stack[-0x4c] (WRITE)
// 0049628b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00496290: FISTP dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x2c] (WRITE)
// 00496294: SUB ESP,0x8
// 00496297: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 0049629a: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0049629f: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 004962a3: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x78] (WRITE)
// 004962a7: FLD double ptr [ESP + 0x2c]
//   XREF to: Stack[-0x7c] (READ)
// 004962ab: ADD ESP,0x8
// 004962ae: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004962b1: FLD float ptr [EAX + 0x4]
// 004962b4: FSUB float ptr [ESI + 0x14]
// 004962b7: FDIV float ptr [ESI + 0x2c]
// 004962ba: FXCH
// 004962bc: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004962c1: FISTP dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x5c] (WRITE)
// 004962c5: SUB ESP,0x8
// 004962c8: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 004962cb: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 004962d0: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 004962d4: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x78] (WRITE)
// 004962d8: FLD double ptr [ESP + 0x2c]
//   XREF to: Stack[-0x7c] (READ)
// 004962dc: ADD ESP,0x8
// 004962df: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004962e2: FLD float ptr [EAX + 0x8]
// 004962e5: FSUB float ptr [ESI + 0x18]
// 004962e8: FDIV float ptr [ESI + 0x30]
// 004962eb: FXCH
// 004962ed: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004962f2: FISTP dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x68] (WRITE)
// 004962f6: SUB ESP,0x8
// 004962f9: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 004962fc: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 00496301: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 00496305: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x78] (WRITE)
// 00496309: FLD double ptr [ESP + 0x2c]
//   XREF to: Stack[-0x7c] (READ)
// 0049630d: ADD ESP,0x8
// 00496310: MOV EBX,0x1
// 00496315: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00496318: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0049631d: FLD float ptr [EAX]
// 0049631f: FSUB float ptr [EDI]
// 00496321: FXCH
// 00496323: FISTP dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x60] (WRITE)
// 00496327: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x94] (WRITE)
// 0049632b: FLD float ptr [EAX + 0x4]
// 0049632e: FSUB float ptr [EDI + 0x4]
// 00496331: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x5c] (READ)
// 00496335: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x90] (WRITE)
// 00496339: FLD float ptr [EAX + 0x8]
// 0049633c: FSUB float ptr [EDI + 0x8]
// 0049633f: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x2c] (READ)
// 00496343: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x8c] (WRITE)
// 00496347: CMP EAX,EDX
// 00496349: JNZ 0x00496359
//   XREF to: 00496359 (CONDITIONAL_JUMP)
// 0049634b: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x30] (READ)
// 0049634f: CMP EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x68] (READ)
// 00496353: JZ 0x004965ac
//   XREF to: 004965ac (CONDITIONAL_JUMP)
// 00496359: FLD float ptr [ESP + 0x10]
//   Label: LAB_00496359
//   XREF to: Stack[-0x90] (READ)
// 0049635d: FMUL ST0
// 0049635f: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x94] (READ)
// 00496363: FMUL ST0
// 00496365: FADDP
// 00496367: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x8c] (READ)
// 0049636b: FMUL ST0
// 0049636d: FADDP
// 0049636f: FSQRT
// 00496371: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x98] (WRITE)
// 00496375: FLDZ
// 00496377: FCOMPP
// 00496379: FNSTSW AX
// 0049637b: SAHF
// 0049637c: JNC 0x004965bf
//   XREF to: 004965bf (CONDITIONAL_JUMP)
// 00496382: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x90] (READ)
// 00496386: FABS
// 00496388: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x8c] (READ)
// 0049638c: FABS
// 0049638e: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x94] (READ)
// 00496392: FLD ST0
// 00496394: FABS
// 00496396: FLD float ptr [0x00622b66]
//   XREF to: 00622b66 (READ)
// 0049639c: FDIV float ptr [ESP + 0x8]
//   XREF to: Stack[-0x98] (READ)
// 004963a0: FXCH
// 004963a2: FMUL ST1
// 004963a4: FXCH ST4
// 004963a6: FMUL ST1
// 004963a8: FXCH ST3
// 004963aa: FMULP
// 004963ac: FXCH ST3
// 004963ae: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004963b3: FISTP dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x38] (WRITE)
// 004963b7: FLDZ
// 004963b9: FXCH ST2
// 004963bb: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004963c0: FXCH ST3
// 004963c2: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004963c7: FXCH ST3
// 004963c9: FISTP dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x3c] (WRITE)
// 004963cd: FXCH ST2
// 004963cf: FISTP dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x34] (WRITE)
// 004963d3: FCOMPP
// 004963d5: FNSTSW AX
// 004963d7: SAHF
// 004963d8: JA 0x004965c8
//   XREF to: 004965c8 (CONDITIONAL_JUMP)
// 004963de: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x5c] (READ)
// 004963e2: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x2c] (READ)
// 004963e6: SUB EAX,EDX
// 004963e8: MOV ECX,0x1
// 004963ed: ADD EBX,EAX
// 004963ef: LEA EAX,[EDX + ECX*0x1]
// 004963f2: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004963f9: FILD dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x14] (READ)
// 00496400: FSUB float ptr [ESP + 0x54]
//   XREF to: Stack[-0x4c] (READ)
// 00496404: MOV dword ptr [ESP + 0x5c],ECX
//   Label: LAB_00496404
//   XREF to: Stack[-0x44] (WRITE)
// 00496408: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x6c] (WRITE)
// 0049640c: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x90] (READ)
// 00496410: FLDZ
// 00496412: FCOMPP
// 00496414: FNSTSW AX
// 00496416: SAHF
// 00496417: JA 0x004965f2
//   XREF to: 004965f2 (CONDITIONAL_JUMP)
// 0049641d: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x68] (READ)
// 00496421: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x30] (READ)
// 00496425: SUB EAX,EDX
// 00496427: MOV ECX,0x1
// 0049642c: ADD EBX,EAX
// 0049642e: LEA EAX,[EDX + ECX*0x1]
// 00496431: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00496438: FILD dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x14] (READ)
// 0049643f: FSUB float ptr [ESP + 0x50]
//   XREF to: Stack[-0x50] (READ)
// 00496443: MOV dword ptr [ESP + 0x58],ECX
//   Label: LAB_00496443
//   XREF to: Stack[-0x48] (WRITE)
// 00496447: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x54] (WRITE)
// 0049644b: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x8c] (READ)
// 0049644f: FLDZ
// 00496451: FCOMPP
// 00496453: FNSTSW AX
// 00496455: SAHF
// 00496456: JA 0x0049661c
//   XREF to: 0049661c (CONDITIONAL_JUMP)
// 0049645c: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x60] (READ)
// 00496460: MOV EDX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x28] (READ)
// 00496464: SUB EAX,EDX
// 00496466: MOV ECX,0x1
// 0049646b: ADD EBX,EAX
// 0049646d: LEA EAX,[EDX + ECX*0x1]
// 00496470: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00496477: FILD dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x14] (READ)
// 0049647e: FSUB float ptr [ESP + 0x48]
//   XREF to: Stack[-0x58] (READ)
// 00496482: MOV dword ptr [ESP + 0x60],ECX
//   Label: LAB_00496482
//   XREF to: Stack[-0x40] (WRITE)
// 00496486: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x64] (WRITE)
// 0049648a: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x3c] (READ)
// 0049648e: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00496495: FILD dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x14] (READ)
// 0049649c: FLD ST0
// 0049649e: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x6c] (READ)
// 004964a2: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x38] (READ)
// 004964a6: FXCH
// 004964a8: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x64] (READ)
// 004964ac: FXCH
// 004964ae: FMUL ST1
// 004964b0: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004964b7: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x34] (READ)
// 004964bb: FILD dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x14] (READ)
// 004964c2: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004964c9: FLD ST0
// 004964cb: FMUL float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x54] (READ)
// 004964cf: FILD dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x14] (READ)
// 004964d6: FLD ST0
// 004964d8: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x6c] (READ)
// 004964dc: FXCH
// 004964de: FMUL float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x54] (READ)
// 004964e2: FXCH ST2
// 004964e4: FSUBP ST6,ST0
// 004964e6: FXCH ST2
// 004964e8: FMULP ST4
// 004964ea: FXCH ST4
// 004964ec: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004964f1: FXCH ST4
// 004964f3: FSUBP ST2,ST0
// 004964f5: FXCH ST3
// 004964f7: FISTP dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x24] (WRITE)
// 004964fb: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00496500: FXCH
// 00496502: FSUBP ST2,ST0
// 00496504: FISTP dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x20] (WRITE)
// 0049650b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00496510: FISTP dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x1c] (WRITE)
// 00496517: MOV ECX,dword ptr [ESP + 0x78]
//   Label: LAB_00496517
//   XREF to: Stack[-0x28] (READ)
// 0049651b: PUSH ECX
// 0049651c: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x30] (READ)
// 00496520: PUSH EAX
// 00496521: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x2c] (READ)
// 00496525: PUSH EDX
// 00496526: PUSH ESI
// 00496527: CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
//   XREF to: 004952b0 (UNCONDITIONAL_CALL)
// 0049652c: ADD ESP,0x10
// 0049652f: TEST EAX,EAX
// 00496531: JNZ 0x00496646
//   XREF to: 00496646 (CONDITIONAL_JUMP)
// 00496537: DEC EBX
//   Label: LAB_00496537
// 00496538: TEST EBX,EBX
// 0049653a: JLE 0x004965bf
//   XREF to: 004965bf (CONDITIONAL_JUMP)
// 00496540: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x20] (READ)
// 00496547: MOV ECX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x3c] (READ)
// 0049654b: MOV EDX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x28] (READ)
// 0049654f: ADD EAX,ECX
// 00496551: ADD EDX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x40] (READ)
// 00496555: MOV ECX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x1c] (READ)
// 0049655c: SUB ECX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x38] (READ)
// 00496560: CMP dword ptr [ESP + 0x7c],0x0
//   XREF to: Stack[-0x24] (READ)
// 00496565: JL 0x0049669a
//   XREF to: 0049669a (CONDITIONAL_JUMP)
// 0049656b: CMP dword ptr [ESP + 0x80],0x0
//   XREF to: Stack[-0x20] (READ)
// 00496573: JL 0x004966a4
//   XREF to: 004966a4 (CONDITIONAL_JUMP)
// 00496579: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x48] (READ)
// 0049657d: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x30] (READ)
// 00496581: MOV ECX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x24] (READ)
// 00496585: ADD EDX,EAX
// 00496587: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x38] (READ)
// 0049658b: MOV dword ptr [ESP + 0x70],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 0049658f: MOV EDX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x20] (READ)
// 00496596: SUB ECX,EAX
// 00496598: SUB EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x34] (READ)
// 0049659c: MOV dword ptr [ESP + 0x7c],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 004965a0: MOV dword ptr [ESP + 0x80],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 004965a7: JMP 0x00496517
//   XREF to: 00496517 (UNCONDITIONAL_JUMP)
// 004965ac: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_004965ac
//   XREF to: Stack[-0x28] (READ)
// 004965b0: CMP EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x60] (READ)
// 004965b4: JNZ 0x00496359
//   XREF to: 00496359 (CONDITIONAL_JUMP)
// 004965ba: JMP 0x00496517
//   XREF to: 00496517 (UNCONDITIONAL_JUMP)
// 004965bf: XOR EAX,EAX
//   Label: LAB_004965bf
// 004965c1: MOV ESP,EBP
// 004965c3: POP EBP
// 004965c4: POP EDI
// 004965c5: POP ESI
// 004965c6: POP EBX
// 004965c7: RET
// 004965c8: MOV EAX,dword ptr [ESP + 0x74]
//   Label: LAB_004965c8
//   XREF to: Stack[-0x2c] (READ)
// 004965cc: SUB EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x5c] (READ)
// 004965d0: ADD EBX,EAX
// 004965d2: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x2c] (READ)
// 004965d6: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004965dd: MOV ECX,0xffffffff
// 004965e2: FILD dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x14] (READ)
// 004965e9: FSUBR float ptr [ESP + 0x54]
//   XREF to: Stack[-0x4c] (READ)
// 004965ed: JMP 0x00496404
//   XREF to: 00496404 (UNCONDITIONAL_JUMP)
// 004965f2: MOV EAX,dword ptr [ESP + 0x70]
//   Label: LAB_004965f2
//   XREF to: Stack[-0x30] (READ)
// 004965f6: SUB EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x68] (READ)
// 004965fa: ADD EBX,EAX
// 004965fc: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x30] (READ)
// 00496600: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00496607: MOV ECX,0xffffffff
// 0049660c: FILD dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x14] (READ)
// 00496613: FSUBR float ptr [ESP + 0x50]
//   XREF to: Stack[-0x50] (READ)
// 00496617: JMP 0x00496443
//   XREF to: 00496443 (UNCONDITIONAL_JUMP)
// 0049661c: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_0049661c
//   XREF to: Stack[-0x28] (READ)
// 00496620: SUB EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x60] (READ)
// 00496624: ADD EBX,EAX
// 00496626: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x28] (READ)
// 0049662a: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00496631: MOV ECX,0xffffffff
// 00496636: FILD dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x14] (READ)
// 0049663d: FSUBR float ptr [ESP + 0x48]
//   XREF to: Stack[-0x58] (READ)
// 00496641: JMP 0x00496482
//   XREF to: 00496482 (UNCONDITIONAL_JUMP)
// 00496646: LEA EDX,[ESP + 0x30]
//   Label: LAB_00496646
//   XREF to: Stack[-0x70] (DATA)
// 0049664a: PUSH EDX
// 0049664b: LEA EDX,[ESP + 0x1c]
//   XREF to: Stack[-0x88] (DATA)
// 0049664f: PUSH EDX
// 00496650: LEA EDX,[ESP + 0x14]
//   XREF to: Stack[-0x94] (DATA)
// 00496654: PUSH EDX
// 00496655: PUSH EDI
// 00496656: PUSH EAX
// 00496657: CALL core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
//   XREF to: 004578f0 (UNCONDITIONAL_CALL)
// 0049665c: MOV dword ptr [ESP + 0xa0],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00496663: FLD float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x14] (READ)
// 0049666a: ADD ESP,0x14
// 0049666d: FLDZ
// 0049666f: FXCH
// 00496671: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 00496674: FCOMP double ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 00496677: FNSTSW AX
// 00496679: SAHF
// 0049667a: JA 0x00496537
//   XREF to: 00496537 (CONDITIONAL_JUMP)
// 00496680: FLD1
// 00496682: FCOMP double ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 00496685: FNSTSW AX
// 00496687: SAHF
// 00496688: JC 0x00496537
//   XREF to: 00496537 (CONDITIONAL_JUMP)
// 0049668e: MOV EAX,0x1
// 00496693: MOV ESP,EBP
// 00496695: POP EBP
// 00496696: POP EDI
// 00496697: POP ESI
// 00496698: POP EBX
// 00496699: RET
// 0049669a: CMP dword ptr [ESP + 0x84],0x0
//   Label: LAB_0049669a
//   XREF to: Stack[-0x1c] (READ)
// 004966a2: JL 0x004966bb
//   XREF to: 004966bb (CONDITIONAL_JUMP)
// 004966a4: MOV dword ptr [ESP + 0x84],ECX
//   Label: LAB_004966a4
//   XREF to: Stack[-0x1c] (WRITE)
// 004966ab: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004966b2: MOV dword ptr [ESP + 0x78],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 004966b6: JMP 0x00496517
//   XREF to: 00496517 (UNCONDITIONAL_JUMP)
// 004966bb: MOV EAX,dword ptr [ESP + 0x5c]
//   Label: LAB_004966bb
//   XREF to: Stack[-0x44] (READ)
// 004966bf: MOV ECX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x2c] (READ)
// 004966c3: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x24] (READ)
// 004966c7: ADD ECX,EAX
// 004966c9: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x3c] (READ)
// 004966cd: MOV dword ptr [ESP + 0x74],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 004966d1: MOV ECX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x1c] (READ)
// 004966d8: ADD EDX,EAX
// 004966da: ADD ECX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x34] (READ)
// 004966de: MOV dword ptr [ESP + 0x7c],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 004966e2: MOV dword ptr [ESP + 0x84],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 004966e9: JMP 0x00496517
//   XREF to: 00496517 (UNCONDITIONAL_JUMP)
