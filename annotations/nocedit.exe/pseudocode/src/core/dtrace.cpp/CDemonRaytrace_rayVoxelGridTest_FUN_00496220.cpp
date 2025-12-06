// Name: core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220
// Address: 00496220
// Address Range: [[00496220, 004966ed]]
// Convention: __cdecl
// Signature: int core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220(CDemonRaytrace * this_ptr, CVector3f * start_pos, CVector3f * end_pos)

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
  uint extraout_EAX;
  uint extraout_EAX_00;
  float extraout_EAX_01;
  float *pfVar5;
  CDemonRaytrace *pCVar6;
  int iVar7;
  int iVar8;
  CDemonCube *this_ptr_01;
  CDemonRaytrace *pCVar9;
  float fVar10;
  uint in_EDX;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
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
  ulonglong uStack_74;
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
  uint local_30;
  uint local_2c;
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
  dVar18 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,end_pos));
  dVar18 = crt_math_c_round_FUN_005fe6b0(dVar18);
  local_28 = (int)ROUND(fVar15);
  local_20 = (CDemonRaytrace *)(int)ROUND(fVar13);
  local_44 = (float)fVar14;
  crt_math_c_round_FUN_005fe6b0(dVar18);
  local_20 = (CDemonRaytrace *)(int)ROUND(fVar14);
  dVar18 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar15 = (float10)dVar18;
  uStack_74 = (double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX);
  fVar13 = (float10)uStack_74;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,end_pos));
  local_50 = (CDemonRaytrace *)(int)ROUND(fVar13);
  dVar18 = crt_math_c_floor_FUN_005feb90((double)fVar15);
  fVar15 = (float10)dVar18;
  uStack_74 = (double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00);
  fVar13 = (float10)uStack_74;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,end_pos));
  local_60.y = (float)(int)ROUND(fVar13);
  crt_math_c_floor_FUN_005feb90((double)fVar15);
  uStack_74 = (double)CONCAT44 /* combine 2-byte values */(extraout_EDX_01,extraout_EAX_01);
  fVar15 = (float10)uStack_74;
  iVar12 = 1;
  dVar18 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_01,end_pos));
  pfVar5 = SUB84 /* extract 2-byte value */(dVar18,0);
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
    fVar16 = (float10)2.684355e+08f / (float10)fVar3;
    fVar15 = ABS(fVar13) * fVar16;
    fVar14 = ABS((float10)fVar1) * fVar16;
    fVar16 = ABS((float10)fVar2) * fVar16;
    dVar18 = crt_math_c_round_FUN_005fe6b0
                       ((double)CONCAT44 /* combine 2-byte values */(local_50,CONCAT22 /* combine 2-byte values */((short)((uint)pCVar6 >> 0x10),
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
    dVar18 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar11,pCVar9));
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
