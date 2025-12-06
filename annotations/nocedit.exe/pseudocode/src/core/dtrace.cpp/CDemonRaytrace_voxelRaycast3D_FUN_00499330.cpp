// Name: core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330
// Address: 00499330
// Address Range: [[00499330, 004997c9]]
// Convention: __cdecl
// Signature: int core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330(CDemonRaytrace * this_ptr, CVector3f * start_position, CVector3f * end_position)

#include "nocturne.h"

int __cdecl
core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330
          (CDemonRaytrace *this_ptr,CVector3f *start_position,CVector3f *end_position)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  CDemonCube *pCVar9;
  int unaff_EBX;
  int iVar10;
  int unaff_EBP;
  int unaff_ESI;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  double dVar16;
  int unaff_retaddr;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  float local_6c;
  float in_stack_ffffff98;
  float in_stack_ffffff9c;
  float in_stack_ffffffa4;
  float local_54;
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  int local_34;
  float local_2c;
  float local_28;
  float local_14;
  
  fVar14 = ((float10)end_position->x - (float10)(this_ptr->bbox_min).x) *
           ((float10)1 / ((float10)(this_ptr->cell_size).x * (float10)0.125f));
  fVar15 = ((float10)end_position->z - (float10)(this_ptr->bbox_min).z) *
           ((float10)1 / ((float10)(this_ptr->cell_size).z * (float10)0.125f));
  iVar10 = 1;
  dVar16 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(end_position,start_position));
  dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
  dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
  fVar11 = (float10)local_54;
  fVar12 = (float10)local_44;
  fVar13 = (float10)local_40;
  dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
  dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
  crt_math_c_round_FUN_005fe6b0(dVar16);
  local_14 = (float)(int)ROUND(fVar12);
  fVar1 = (float)(int)ROUND(fVar13);
  fVar6 = (float)(int)ROUND(fVar11);
  iVar5 = in_stack_00000018;
  if ((((int)ROUND(fVar11) != (int)ROUND(fVar15)) || (fVar6 = local_14, local_14 != local_54)) ||
     (fVar6 = fVar1, iVar2 = in_stack_00000010, iVar7 = in_stack_00000014, fVar1 != local_40)) {
    fVar3 = SQRT(in_stack_ffffff9c * in_stack_ffffff9c +
                 local_6c * local_6c + in_stack_ffffff98 * in_stack_ffffff98);
    if (0.0 >= fVar3) {
      return 0;
    }
    fVar11 = (float10)local_6c;
    fVar12 = ABS((float10)in_stack_ffffff98) * ((float10)2.684355e+08f / (float10)fVar3);
    fVar13 = ABS((float10)in_stack_ffffff9c) * ((float10)2.684355e+08f / (float10)fVar3);
    dVar16 = crt_math_c_round_FUN_005fe6b0
                       ((double)CONCAT44 /* combine 2-byte values */((int)ROUND(fVar15),
                                         CONCAT22 /* combine 2-byte values */((short)((uint)fVar6 >> 0x10),
                                                  (ushort)(0.0 < fVar3) << 8 |
                                                  (ushort)NAN(fVar3) << 10 |
                                                  (ushort)(fVar3 == 0.0) << 0xe)));
    fVar15 = (float10)0;
    dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
    dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
    local_14 = (float)(int)ROUND(fVar12);
    iVar2 = (int)ROUND(fVar13);
    if (fVar11 < fVar15) {
      iVar7 = (int)fVar1 - (int)local_40;
      fVar6 = local_3c - (float)(int)fVar1;
    }
    else {
      iVar7 = (int)local_40 - (int)fVar1;
      fVar6 = (float)((int)fVar1 + 1) - local_3c;
    }
    if (in_stack_ffffffa4 < 0.0) {
      iVar8 = unaff_ESI - local_48;
      fVar3 = local_2c - (float)unaff_ESI;
    }
    else {
      iVar8 = local_48 - unaff_ESI;
      fVar3 = (float)(unaff_ESI + 1) - local_2c;
    }
    if ((float)(int)ROUND(fVar14) < 0.0) {
      iVar10 = unaff_retaddr - local_34;
      fVar4 = local_28 - (float)unaff_retaddr;
    }
    else {
      iVar10 = local_34 - unaff_retaddr;
      fVar4 = (float)(unaff_retaddr + 1) - local_28;
    }
    iVar10 = iVar7 + 1 + iVar8 + iVar10;
    fVar11 = (float10)(int)local_14 * (float10)fVar4;
    fVar12 = (float10)iVar2 * (float10)fVar6;
    fVar14 = (float10)iVar2 * (float10)fVar3;
    fVar15 = (float10)(int)local_14 * (float10)fVar6 - (float10)unaff_EBP * (float10)fVar3;
    fVar13 = (float10)unaff_EBP * (float10)fVar4;
    dVar16 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar16 >> 0x20),iVar2))
    ;
    fVar11 = fVar11 - fVar14;
    unaff_retaddr = (int)ROUND(fVar15);
    dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
    fVar12 = fVar12 - fVar13;
    end_position = (CVector3f *)(int)ROUND(fVar11);
    crt_math_c_round_FUN_005fe6b0(dVar16);
    iVar7 = (int)ROUND(fVar12);
  }
  do {
    in_stack_00000018 = iVar5;
    in_stack_00000014 = iVar7;
    in_stack_00000010 = iVar2;
    pCVar9 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                       (this_ptr,(int)((unaff_retaddr + (unaff_retaddr >> 0x1f) * -8) -
                                      (uint)((unaff_retaddr >> 0x1f) << 2 < 0)) >> 3,
                        (int)((int)this_ptr +
                             (((int)this_ptr >> 0x1f) * -8 -
                             (uint)(((int)this_ptr >> 0x1f) << 2 < 0))) >> 3,
                        (int)((int)end_position +
                             (((int)end_position >> 0x1f) * -8 -
                             (uint)(((int)end_position >> 0x1f) << 2 < 0))) >> 3);
    if (pCVar9 != (CDemonCube *)0x0) {
      if ((pCVar9->voxel_buffer1 != (SVoxelGrid *)0x0) &&
         ((pCVar9->voxel_buffer1->voxels[in_stack_00000010 % 8][(int)start_position % 8] &
          g_VoxelYBitMasks[(int)this_ptr % 8]) != 0)) {
        return 1;
      }
    }
    iVar10 = iVar10 + -1;
    if (iVar10 < 1) {
      return 0;
    }
    iVar2 = in_stack_00000010 + unaff_EBP;
    iVar7 = in_stack_00000014 + unaff_EBX;
    iVar5 = in_stack_00000018 - unaff_retaddr;
    if ((int)end_position < 0) {
      if (in_stack_00000018 < 0) {
        this_ptr = (CDemonRaytrace *)((int)&this_ptr->rendering_mode + (int)fVar1);
        end_position = (CVector3f *)((int)&end_position->x + unaff_EBX);
        iVar2 = in_stack_00000010;
        iVar7 = in_stack_00000014;
        iVar5 = in_stack_00000018 + unaff_ESI;
      }
    }
    else if (-1 < in_stack_00000014) {
      start_position = (CVector3f *)((int)&start_position->x + (int)local_14);
      end_position = (CVector3f *)((int)end_position - unaff_retaddr);
      iVar2 = in_stack_00000010;
      iVar7 = in_stack_00000014 - unaff_ESI;
      iVar5 = in_stack_00000018;
    }
  } while( true );
}
