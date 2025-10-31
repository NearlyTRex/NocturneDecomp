// Name: core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
// Address: 00495b70
// Address Range: [[00495b70, 00496219]]
// Convention: __cdecl
// Signature: float core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70(CDemonRaytrace * this_ptr, CVector3f * ray_start, CVector3f * ray_end, CVector3f * out_intersection_point, int * out_intersection_type)
// Cross-references:
//   core_box.cpp_CBox_processPhysics_FUN_0041e350 (0041e350) at 0041e3ef [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0 (00495aa0) at 00495abf [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ed240 (004ed240) at 004ed317 [UNCONDITIONAL_CALL]
//   core_particle.cpp_CParticle_process_FUN_00545760 (00545760) at 00545862 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_rayVoxelHeightQuery_FUN_00572340 (00572340) at 005723b7 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 (00572530) at 00572580 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_process_FUN_005e4210 (005e4210) at 005e4a07 [UNCONDITIONAL_CALL]
// Globals:
//   float g_VoxelGridSize = 2.684355E+8
// Function calls:
//   core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
//   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

float __cdecl
core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
          (CDemonRaytrace *this_ptr,CVector3f *ray_start,CVector3f *ray_end,
          CVector3f *out_intersection_point,int *out_intersection_type)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  undefined4 extraout_EAX_02;
  undefined4 extraout_EAX_03;
  float extraout_EAX_04;
  float fVar7;
  int iVar8;
  CDemonCube *this_ptr_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  CVector3f *extraout_EDX_04;
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  float unaff_ESI;
  int iVar9;
  float10 in_ST0;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float in_stack_ffffff68;
  float local_80;
  CVector3f *local_78;
  CVector3f CStack_74;
  undefined1 local_68 [8];
  float local_60;
  float local_5c;
  float local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  int local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  int iStack_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int iVar20;
  
  fVar16 = (ray_start->x - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x;
  fVar17 = (ray_start->y - (this_ptr->bbox_min).y) / (this_ptr->cell_size).y;
  fVar1 = ray_start->z;
  fVar2 = (this_ptr->bbox_min).z;
  fVar3 = (this_ptr->cell_size).z;
  dVar15 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar14 = (float10)dVar15;
  fVar10 = (float10)(double)CONCAT44(extraout_EDX,extraout_EAX);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
  local_38 = (float)(int)ROUND(fVar10);
  dVar15 = crt_math_c_floor_FUN_005feb90((double)fVar14);
  fVar14 = (float10)dVar15;
  fVar10 = (float10)(double)CONCAT44(extraout_EDX_00,extraout_EAX_00);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_00,extraout_EAX_00));
  local_3c = (float)(int)ROUND(fVar10);
  dVar15 = crt_math_c_floor_FUN_005feb90((double)fVar14);
  fVar14 = (float10)dVar15;
  fVar11 = (float10)(double)CONCAT44(extraout_EDX_01,extraout_EAX_01);
  fVar10 = ((float10)ray_end->x - (float10)(this_ptr->bbox_min).x) /
           (float10)(this_ptr->cell_size).x;
  fVar12 = ((float10)ray_end->y - (float10)(this_ptr->bbox_min).y) /
           (float10)(this_ptr->cell_size).y;
  fVar13 = ((float10)ray_end->z - (float10)(this_ptr->bbox_min).z) /
           (float10)(this_ptr->cell_size).z;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_01,this_ptr));
  local_34 = (float)(int)ROUND(fVar11);
  fVar19 = (float)fVar13;
  dVar15 = crt_math_c_floor_FUN_005feb90((double)fVar14);
  fVar14 = (float10)dVar15;
  fVar13 = (float10)(double)CONCAT44(extraout_EDX_02,extraout_EAX_02);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_02,extraout_EAX_02));
  local_58 = (float)(int)ROUND(fVar13);
  dVar15 = crt_math_c_floor_FUN_005feb90((double)fVar14);
  fVar14 = (float10)dVar15;
  fVar13 = (float10)(double)CONCAT44(extraout_EDX_03,extraout_EAX_03);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_03,extraout_EAX_03));
  local_60 = (float)(int)ROUND(fVar13);
  crt_math_c_floor_FUN_005feb90((double)fVar14);
  fVar14 = (float10)(double)CONCAT44(extraout_EDX_04,extraout_EAX_04);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_04,extraout_EAX_04));
  local_5c = (float)(int)ROUND(fVar14);
  if ((-1 < (int)local_38) || (-1 < (int)local_58)) {
    if (((int)local_3c < 0) && ((int)local_60 < 0)) {
      return -1.0;
    }
    if (((int)local_34 < 0) && ((int)local_5c < 0)) {
      return -1.0;
    }
    iVar9 = (this_ptr->grid_coord).x;
    if (((((int)local_38 < iVar9) || ((int)local_58 < iVar9)) &&
        ((iVar9 = (this_ptr->grid_coord).y, (int)local_3c < iVar9 || ((int)local_60 < iVar9)))) &&
       ((iVar9 = (this_ptr->grid_coord).z, (int)local_34 < iVar9 || ((int)local_5c < iVar9)))) {
      fVar18 = ray_end->x - ray_start->x;
      fVar4 = ray_end->y - ray_start->y;
      iVar9 = 1;
      fVar5 = ray_end->z - ray_start->z;
      fVar7 = local_38;
      local_78 = extraout_EDX_04;
      if ((local_38 != local_58) ||
         ((fVar7 = local_3c, local_3c != local_60 ||
          (fVar7 = local_34, iVar8 = local_1c, iVar6 = local_14, local_34 != local_5c)))) {
        fVar18 = SQRT(fVar5 * fVar5 + fVar18 * fVar18 + fVar4 * fVar4);
        if (0.0 >= fVar18) {
          return -1.0;
        }
        fVar13 = (float10)g_VoxelGridSize / (float10)fVar18;
        fVar14 = ABS((float10)(float)fVar10 - (float10)fVar16) * fVar13;
        fVar12 = ABS((float10)(float)fVar12 - (float10)fVar17) * fVar13;
        fVar13 = ABS((float10)fVar19 - (float10)((fVar1 - fVar2) / fVar3)) * fVar13;
        dVar15 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44(this_ptr,CONCAT22((short)((uint)fVar7 >> 0x10),
                                                               (ushort)(0.0 < fVar18) << 8 |
                                                               (ushort)NAN(fVar18) << 10 |
                                                               (ushort)(fVar18 == 0.0) << 0xe)));
        local_44 = (int)ROUND(fVar14);
        fVar10 = (float10)fVar4;
        dVar15 = crt_math_c_round_FUN_005fe6b0(dVar15);
        local_14 = (int)ROUND(fVar12);
        fVar14 = (float10)0;
        dVar15 = crt_math_c_round_FUN_005fe6b0(dVar15);
        unaff_ESI = (float)(int)ROUND(fVar13);
        if (fVar10 < fVar14) {
          local_4c = local_2c - local_4c;
          local_5c = fVar19 - (float)local_2c;
          local_14 = -1;
        }
        else {
          local_4c = local_4c - local_2c;
          local_5c = (float)(local_2c + 1) - fVar19;
          local_14 = 1;
        }
        if (local_80 < 0.0) {
          local_44 = 0xffffffff;
          iVar8 = local_30 - local_54;
          local_58 = in_stack_ffffff68 - (float)local_30;
        }
        else {
          iVar8 = local_54 - local_30;
          local_58 = (float)(local_30 + 1) - in_stack_ffffff68;
          local_44 = 1;
          local_54 = (uint)((ulonglong)dVar15 >> 0x20);
        }
        if (extraout_EAX_04 < 0.0) {
          local_40 = 0xffffffff;
          iVar9 = local_28 - local_50;
          local_34 = fVar18 - (float)local_28;
          local_54 = local_50;
        }
        else {
          iVar9 = local_50 - local_28;
          local_34 = (float)(local_28 + 1) - fVar18;
          local_40 = 1;
        }
        iVar9 = local_4c + 1 + iVar8 + iVar9;
        fVar12 = (float10)unaff_EBP * (float10)local_34;
        fVar13 = (float10)(int)unaff_ESI * (float10)local_5c;
        fVar14 = (float10)(int)unaff_ESI * (float10)local_58;
        fVar10 = (float10)unaff_EBP * (float10)local_5c - (float10)(int)local_3c * (float10)local_58
        ;
        fVar11 = (float10)(int)local_3c * (float10)local_34;
        local_38 = unaff_ESI;
        dVar15 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(local_54,unaff_ESI));
        fVar12 = fVar12 - fVar14;
        local_20 = (int)ROUND(fVar10);
        dVar15 = crt_math_c_round_FUN_005fe6b0(dVar15);
        fVar13 = fVar13 - fVar11;
        local_18 = (int)ROUND(fVar12);
        crt_math_c_round_FUN_005fe6b0(dVar15);
        iVar8 = local_1c;
        iVar6 = local_14;
        unaff_EBP = (int)ROUND(fVar13);
      }
      while( true ) {
        iVar20 = unaff_EBP;
        local_14 = iVar6;
        local_1c = iVar8;
        this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                (this_ptr,local_20,iStack_24,local_1c);
        if (this_ptr_00 != (CDemonCube *)0x0) {
          ray_start = (CVector3f *)
                      core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                                (this_ptr_00,ray_start,&CStack_74,(CVector3f *)local_68,&local_54);
          if ((float)ray_start < (float)local_78) {
            if ((out_intersection_point != (CVector3f *)0x0) &&
               (out_intersection_point != (CVector3f *)(local_68 + 4))) {
              out_intersection_point->x = (float)local_68._4_4_;
              out_intersection_point->y = local_60;
              out_intersection_point->z = local_5c;
            }
            local_78 = ray_start;
            if (out_intersection_type != (int *)0x0) {
              *out_intersection_type = local_50;
            }
          }
          if ((float)local_78 <= 1.0) {
            return (float)local_78;
          }
        }
        iVar9 = iVar9 + -1;
        if (iVar9 < 1) break;
        iVar8 = local_1c + (int)local_34;
        iVar6 = local_14 + unaff_EBX;
        unaff_EBP = iVar20 - local_30;
        if (local_18 < 0) {
          if (iVar20 < 0) {
            local_20 = local_20 + (int)unaff_ESI;
            local_18 = local_18 + unaff_EBX;
            iVar8 = local_1c;
            iVar6 = local_14;
            unaff_EBP = iVar20 + local_2c;
          }
        }
        else if (-1 < local_14) {
          iStack_24 = iStack_24 + (int)local_38;
          local_18 = local_18 - local_30;
          iVar8 = local_1c;
          iVar6 = local_14 - local_2c;
          unaff_EBP = iVar20;
        }
      }
      if (out_intersection_type != (int *)0x0) {
        *out_intersection_type = 1;
        return -1.0;
      }
    }
  }
  return -1.0;
}


// Assembly code:
// 00495b70: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
// 00495b71: PUSH ESI
// 00495b72: PUSH EDI
// 00495b73: PUSH EBP
// 00495b74: MOV EBP,ESP
// 00495b76: SUB ESP,0xa0
// 00495b7c: AND ESP,0xfffffff8
// 00495b7f: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00495b82: MOV EBX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00495b85: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00495b88: FLD float ptr [EAX]
// 00495b8a: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00495b8d: FSUB float ptr [EAX + 0x10]
// 00495b90: FDIV float ptr [EAX + 0x28]
// 00495b93: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00495b96: FLD float ptr [EAX + 0x4]
// 00495b99: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00495b9c: FSUB float ptr [EAX + 0x14]
// 00495b9f: FDIV float ptr [EAX + 0x2c]
// 00495ba2: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00495ba5: FLD float ptr [EAX + 0x8]
// 00495ba8: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00495bab: FSUB float ptr [EAX + 0x18]
// 00495bae: FDIV float ptr [EAX + 0x30]
// 00495bb1: FXCH ST2
// 00495bb3: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0xa8] (WRITE)
// 00495bb7: FXCH
// 00495bb9: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0xa4] (WRITE)
// 00495bbd: FXCH
// 00495bbf: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0xac] (WRITE)
// 00495bc3: SUB ESP,0x8
// 00495bc6: FSTP double ptr [ESP]
//   XREF to: Stack[-0xb8] (DATA)
// 00495bc9: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 00495bce: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 00495bd2: MOV dword ptr [ESP + 0x44],EDX
//   XREF to: Stack[-0x74] (WRITE)
// 00495bd6: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x78] (READ)
// 00495bda: ADD ESP,0x8
// 00495bdd: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00495be2: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0xa4] (READ)
// 00495be6: FXCH
// 00495be8: FISTP dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x38] (WRITE)
// 00495bec: SUB ESP,0x8
// 00495bef: FSTP double ptr [ESP]
//   XREF to: Stack[-0xb8] (DATA)
// 00495bf2: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 00495bf7: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 00495bfb: MOV dword ptr [ESP + 0x44],EDX
//   XREF to: Stack[-0x74] (WRITE)
// 00495bff: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x78] (READ)
// 00495c03: ADD ESP,0x8
// 00495c06: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00495c0b: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0xac] (READ)
// 00495c0f: FXCH
// 00495c11: FISTP dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x3c] (WRITE)
// 00495c15: SUB ESP,0x8
// 00495c18: FSTP double ptr [ESP]
//   XREF to: Stack[-0xb8] (DATA)
// 00495c1b: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 00495c20: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 00495c24: MOV dword ptr [ESP + 0x44],EDX
//   XREF to: Stack[-0x74] (WRITE)
// 00495c28: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x78] (READ)
// 00495c2c: ADD ESP,0x8
// 00495c2f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00495c32: FLD float ptr [ESI]
// 00495c34: FSUB float ptr [EAX + 0x10]
// 00495c37: FDIV float ptr [EAX + 0x28]
// 00495c3a: FLD float ptr [ESI + 0x4]
// 00495c3d: FSUB float ptr [EAX + 0x14]
// 00495c40: FDIV float ptr [EAX + 0x2c]
// 00495c43: FLD float ptr [ESI + 0x8]
// 00495c46: FSUB float ptr [EAX + 0x18]
// 00495c49: FDIV float ptr [EAX + 0x30]
// 00495c4c: FXCH ST3
// 00495c4e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00495c53: FISTP dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x34] (WRITE)
// 00495c57: FXCH
// 00495c59: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x94] (WRITE)
// 00495c5d: FSTP float ptr [ESP]
//   XREF to: Stack[-0xb0] (DATA)
// 00495c60: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x9c] (WRITE)
// 00495c64: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x94] (READ)
// 00495c68: SUB ESP,0x8
// 00495c6b: FSTP double ptr [ESP]
//   XREF to: Stack[-0xb8] (DATA)
// 00495c6e: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 00495c73: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 00495c77: MOV dword ptr [ESP + 0x44],EDX
//   XREF to: Stack[-0x74] (WRITE)
// 00495c7b: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x78] (READ)
// 00495c7f: ADD ESP,0x8
// 00495c82: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00495c87: FLD float ptr [ESP]
//   XREF to: Stack[-0xb0] (DATA)
// 00495c8a: FXCH
// 00495c8c: FISTP dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x58] (WRITE)
// 00495c90: SUB ESP,0x8
// 00495c93: FSTP double ptr [ESP]
//   XREF to: Stack[-0xb8] (DATA)
// 00495c96: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 00495c9b: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 00495c9f: MOV dword ptr [ESP + 0x44],EDX
//   XREF to: Stack[-0x74] (WRITE)
// 00495ca3: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x78] (READ)
// 00495ca7: ADD ESP,0x8
// 00495caa: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00495caf: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x9c] (READ)
// 00495cb3: FXCH
// 00495cb5: FISTP dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x60] (WRITE)
// 00495cb9: SUB ESP,0x8
// 00495cbc: FSTP double ptr [ESP]
//   XREF to: Stack[-0xb8] (DATA)
// 00495cbf: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 00495cc4: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 00495cc8: MOV dword ptr [ESP + 0x44],EDX
//   XREF to: Stack[-0x74] (WRITE)
// 00495ccc: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x78] (READ)
// 00495cd0: ADD ESP,0x8
// 00495cd3: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00495cd8: MOV EDX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x38] (READ)
// 00495cdc: FISTP dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x5c] (WRITE)
// 00495ce0: TEST EDX,EDX
// 00495ce2: JL 0x00495ffa
//   XREF to: 00495ffa (CONDITIONAL_JUMP)
// 00495ce8: CMP dword ptr [ESP + 0x74],0x0
//   Label: LAB_00495ce8
//   XREF to: Stack[-0x3c] (READ)
// 00495ced: JL 0x00496018
//   XREF to: 00496018 (CONDITIONAL_JUMP)
// 00495cf3: CMP dword ptr [ESP + 0x7c],0x0
//   Label: LAB_00495cf3
//   XREF to: Stack[-0x34] (READ)
// 00495cf8: JL 0x00496036
//   XREF to: 00496036 (CONDITIONAL_JUMP)
// 00495cfe: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_00495cfe
//   XREF to: Stack[0x4] (READ)
// 00495d01: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x38] (READ)
// 00495d05: MOV EDI,dword ptr [EDX + 0x40]
// 00495d08: CMP EAX,EDI
// 00495d0a: JL 0x00495d16
//   XREF to: 00495d16 (CONDITIONAL_JUMP)
// 00495d0c: CMP EDI,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x58] (READ)
// 00495d10: JLE 0x00496005
//   XREF to: 00496005 (CONDITIONAL_JUMP)
// 00495d16: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_00495d16
//   XREF to: Stack[0x4] (READ)
// 00495d19: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x3c] (READ)
// 00495d1d: MOV EDI,dword ptr [EDX + 0x44]
// 00495d20: CMP EAX,EDI
// 00495d22: JL 0x00495d2e
//   XREF to: 00495d2e (CONDITIONAL_JUMP)
// 00495d24: CMP EDI,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x60] (READ)
// 00495d28: JLE 0x00496005
//   XREF to: 00496005 (CONDITIONAL_JUMP)
// 00495d2e: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_00495d2e
//   XREF to: Stack[0x4] (READ)
// 00495d31: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x34] (READ)
// 00495d35: MOV EDI,dword ptr [EDX + 0x48]
// 00495d38: CMP EAX,EDI
// 00495d3a: JL 0x00495d46
//   XREF to: 00495d46 (CONDITIONAL_JUMP)
// 00495d3c: CMP EDI,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x5c] (READ)
// 00495d40: JLE 0x00496005
//   XREF to: 00496005 (CONDITIONAL_JUMP)
// 00495d46: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_00495d46
//   XREF to: Stack[0x8] (READ)
// 00495d49: FLD float ptr [ESI]
// 00495d4b: FSUB float ptr [EAX]
// 00495d4d: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x90] (WRITE)
// 00495d51: FLD float ptr [ESI + 0x4]
// 00495d54: FSUB float ptr [EAX + 0x4]
// 00495d57: MOV EDI,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x58] (READ)
// 00495d5b: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x8c] (WRITE)
// 00495d5f: FLD float ptr [ESI + 0x8]
// 00495d62: MOV ESI,0x1
// 00495d67: FSUB float ptr [EAX + 0x8]
// 00495d6a: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x38] (READ)
// 00495d6e: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x88] (WRITE)
// 00495d72: CMP EAX,EDI
// 00495d74: JZ 0x00496054
//   XREF to: 00496054 (CONDITIONAL_JUMP)
// 00495d7a: FLD float ptr [ESP + 0x24]
//   Label: LAB_00495d7a
//   XREF to: Stack[-0x8c] (READ)
// 00495d7e: FMUL ST0
// 00495d80: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x90] (READ)
// 00495d84: FMUL ST0
// 00495d86: FADDP
// 00495d88: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x88] (READ)
// 00495d8c: FMUL ST0
// 00495d8e: FADDP
// 00495d90: FSQRT
// 00495d92: FST float ptr [ESP + 0x10]
//   XREF to: Stack[-0xa0] (WRITE)
// 00495d96: FLDZ
// 00495d98: FCOMPP
// 00495d9a: FNSTSW AX
// 00495d9c: SAHF
// 00495d9d: JNC 0x00496005
//   XREF to: 00496005 (CONDITIONAL_JUMP)
// 00495da3: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x94] (READ)
// 00495da7: FSUB float ptr [ESP + 0x8]
//   XREF to: Stack[-0xa8] (READ)
// 00495dab: FABS
// 00495dad: FLD float ptr [ESP]
//   XREF to: Stack[-0xb0] (DATA)
// 00495db0: FSUB float ptr [ESP + 0xc]
//   XREF to: Stack[-0xa4] (READ)
// 00495db4: FABS
// 00495db6: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x9c] (READ)
// 00495dba: FSUB float ptr [ESP + 0x4]
//   XREF to: Stack[-0xac] (READ)
// 00495dbe: FABS
// 00495dc0: FLD float ptr [0x00622b62]
//   XREF to: 00622b62 (READ)
// 00495dc6: FDIV float ptr [ESP + 0x10]
//   XREF to: Stack[-0xa0] (READ)
// 00495dca: FXCH ST3
// 00495dcc: FMUL ST3
// 00495dce: FXCH ST2
// 00495dd0: FMUL ST3
// 00495dd2: FXCH
// 00495dd4: FMULP ST3
// 00495dd6: FXCH
// 00495dd8: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00495ddd: FISTP dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x48] (WRITE)
// 00495de1: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x90] (READ)
// 00495de5: FXCH
// 00495de7: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00495dec: FISTP dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x1c] (WRITE)
// 00495df3: FLDZ
// 00495df5: FXCH ST2
// 00495df7: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00495dfc: FISTP dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x44] (WRITE)
// 00495e00: FXCH
// 00495e02: FCOMPP
// 00495e04: FNSTSW AX
// 00495e06: SAHF
// 00495e07: JA 0x00496075
//   XREF to: 00496075 (CONDITIONAL_JUMP)
// 00495e0d: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x58] (READ)
// 00495e11: MOV EDI,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x38] (READ)
// 00495e15: SUB EAX,EDI
// 00495e17: MOV ECX,0x1
// 00495e1c: ADD ESI,EAX
// 00495e1e: LEA EAX,[EDI + ECX*0x1]
// 00495e21: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00495e28: FILD dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x14] (READ)
// 00495e2f: FSUB float ptr [ESP + 0x8]
//   XREF to: Stack[-0xa8] (READ)
// 00495e33: MOV dword ptr [ESP + 0x90],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 00495e3a: FSTP float ptr [ESP + 0x48]
//   Label: LAB_00495e3a
//   XREF to: Stack[-0x68] (WRITE)
// 00495e3e: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x8c] (READ)
// 00495e42: FLDZ
// 00495e44: FCOMPP
// 00495e46: FNSTSW AX
// 00495e48: SAHF
// 00495e49: JA 0x004960a6
//   XREF to: 004960a6 (CONDITIONAL_JUMP)
// 00495e4f: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x60] (READ)
// 00495e53: MOV EDI,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x3c] (READ)
// 00495e57: SUB EAX,EDI
// 00495e59: MOV ECX,0x1
// 00495e5e: ADD ESI,EAX
// 00495e60: LEA EAX,[EDI + ECX*0x1]
// 00495e63: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00495e6a: FILD dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x14] (READ)
// 00495e71: FSUB float ptr [ESP + 0xc]
//   XREF to: Stack[-0xa4] (READ)
// 00495e75: MOV dword ptr [ESP + 0x60],ECX
//   XREF to: Stack[-0x50] (WRITE)
// 00495e79: FSTP float ptr [ESP + 0x4c]
//   Label: LAB_00495e79
//   XREF to: Stack[-0x64] (WRITE)
// 00495e7d: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x88] (READ)
// 00495e81: FLDZ
// 00495e83: FCOMPP
// 00495e85: FNSTSW AX
// 00495e87: SAHF
// 00495e88: JA 0x004960d6
//   XREF to: 004960d6 (CONDITIONAL_JUMP)
// 00495e8e: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x5c] (READ)
// 00495e92: MOV EDI,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x34] (READ)
// 00495e96: SUB EAX,EDI
// 00495e98: MOV ECX,0x1
// 00495e9d: ADD ESI,EAX
// 00495e9f: LEA EAX,[EDI + ECX*0x1]
// 00495ea2: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00495ea9: FILD dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x14] (READ)
// 00495eb0: FSUB float ptr [ESP + 0x4]
//   XREF to: Stack[-0xac] (READ)
// 00495eb4: MOV dword ptr [ESP + 0x64],ECX
//   XREF to: Stack[-0x4c] (WRITE)
// 00495eb8: FSTP float ptr [ESP + 0x70]
//   Label: LAB_00495eb8
//   XREF to: Stack[-0x40] (WRITE)
// 00495ebc: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x1c] (READ)
// 00495ec3: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00495eca: FILD dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x14] (READ)
// 00495ed1: FLD ST0
// 00495ed3: FMUL float ptr [ESP + 0x48]
//   XREF to: Stack[-0x68] (READ)
// 00495ed7: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x48] (READ)
// 00495edb: FXCH
// 00495edd: FLD float ptr [ESP + 0x70]
//   XREF to: Stack[-0x40] (READ)
// 00495ee1: FXCH
// 00495ee3: FMUL ST1
// 00495ee5: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00495eec: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x44] (READ)
// 00495ef0: FILD dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x14] (READ)
// 00495ef7: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00495efe: FLD ST0
// 00495f00: FMUL float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x64] (READ)
// 00495f04: FILD dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x14] (READ)
// 00495f0b: FLD ST0
// 00495f0d: FMUL float ptr [ESP + 0x48]
//   XREF to: Stack[-0x68] (READ)
// 00495f11: FXCH
// 00495f13: FMUL float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x64] (READ)
// 00495f17: FXCH ST2
// 00495f19: FSUBP ST6,ST0
// 00495f1b: FXCH ST2
// 00495f1d: FMULP ST4
// 00495f1f: FXCH ST4
// 00495f21: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00495f26: FXCH ST4
// 00495f28: FSUBP ST2,ST0
// 00495f2a: FXCH ST3
// 00495f2c: FISTP dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x30] (WRITE)
// 00495f33: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00495f38: FXCH
// 00495f3a: FSUBP ST2,ST0
// 00495f3c: FISTP dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x2c] (WRITE)
// 00495f43: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00495f48: FISTP dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x28] (WRITE)
// 00495f4f: MOV dword ptr [ESP + 0x18],0x3f800347
//   Label: LAB_00495f4f
//   XREF to: Stack[-0x98] (WRITE)
// 00495f57: MOV ECX,dword ptr [ESP + 0x7c]
//   Label: LAB_00495f57
//   XREF to: Stack[-0x34] (READ)
// 00495f5b: PUSH ECX
// 00495f5c: MOV EDI,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x3c] (READ)
// 00495f60: PUSH EDI
// 00495f61: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x38] (READ)
// 00495f68: PUSH EAX
// 00495f69: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00495f6c: PUSH EDX
// 00495f6d: CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
//   XREF to: 004952b0 (UNCONDITIONAL_CALL)
// 00495f72: ADD ESP,0x10
// 00495f75: TEST EAX,EAX
// 00495f77: JNZ 0x00496106
//   XREF to: 00496106 (CONDITIONAL_JUMP)
// 00495f7d: DEC ESI
//   Label: LAB_00495f7d
// 00495f7e: TEST ESI,ESI
// 00495f80: JLE 0x004961f6
//   XREF to: 004961f6 (CONDITIONAL_JUMP)
// 00495f86: MOV ECX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x2c] (READ)
// 00495f8d: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x1c] (READ)
// 00495f94: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x34] (READ)
// 00495f98: MOV EDI,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x4c] (READ)
// 00495f9c: ADD ECX,EAX
// 00495f9e: ADD EDX,EDI
// 00495fa0: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x28] (READ)
// 00495fa7: SUB EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x48] (READ)
// 00495fab: CMP dword ptr [ESP + 0x80],0x0
//   XREF to: Stack[-0x30] (READ)
// 00495fb3: JL 0x0049619c
//   XREF to: 0049619c (CONDITIONAL_JUMP)
// 00495fb9: MOV EDI,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x2c] (READ)
// 00495fc0: TEST EDI,EDI
// 00495fc2: JL 0x004961a7
//   XREF to: 004961a7 (CONDITIONAL_JUMP)
// 00495fc8: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x50] (READ)
// 00495fcc: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x3c] (READ)
// 00495fd0: MOV ECX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x30] (READ)
// 00495fd7: ADD EDX,EAX
// 00495fd9: SUB ECX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x48] (READ)
// 00495fdd: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x44] (READ)
// 00495fe1: MOV dword ptr [ESP + 0x74],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 00495fe5: SUB EDI,EAX
// 00495fe7: MOV dword ptr [ESP + 0x80],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 00495fee: MOV dword ptr [ESP + 0x84],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 00495ff5: JMP 0x00495f57
//   XREF to: 00495f57 (UNCONDITIONAL_JUMP)
// 00495ffa: CMP dword ptr [ESP + 0x58],0x0
//   Label: LAB_00495ffa
//   XREF to: Stack[-0x58] (READ)
// 00495fff: JGE 0x00495ce8
//   XREF to: 00495ce8 (CONDITIONAL_JUMP)
// 00496005: MOV dword ptr [ESP + 0x5c],0xbf800000
//   Label: LAB_00496005
//   XREF to: Stack[-0x54] (WRITE)
// 0049600d: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x54] (READ)
// 00496011: MOV ESP,EBP
// 00496013: POP EBP
// 00496014: POP EDI
// 00496015: POP ESI
// 00496016: POP EBX
// 00496017: RET
// 00496018: CMP dword ptr [ESP + 0x50],0x0
//   Label: LAB_00496018
//   XREF to: Stack[-0x60] (READ)
// 0049601d: JGE 0x00495cf3
//   XREF to: 00495cf3 (CONDITIONAL_JUMP)
// 00496023: MOV dword ptr [ESP + 0x5c],0xbf800000
//   XREF to: Stack[-0x54] (WRITE)
// 0049602b: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x54] (READ)
// 0049602f: MOV ESP,EBP
// 00496031: POP EBP
// 00496032: POP EDI
// 00496033: POP ESI
// 00496034: POP EBX
// 00496035: RET
// 00496036: CMP dword ptr [ESP + 0x54],0x0
//   Label: LAB_00496036
//   XREF to: Stack[-0x5c] (READ)
// 0049603b: JGE 0x00495cfe
//   XREF to: 00495cfe (CONDITIONAL_JUMP)
// 00496041: MOV dword ptr [ESP + 0x5c],0xbf800000
//   XREF to: Stack[-0x54] (WRITE)
// 00496049: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x54] (READ)
// 0049604d: MOV ESP,EBP
// 0049604f: POP EBP
// 00496050: POP EDI
// 00496051: POP ESI
// 00496052: POP EBX
// 00496053: RET
// 00496054: MOV EAX,dword ptr [ESP + 0x74]
//   Label: LAB_00496054
//   XREF to: Stack[-0x3c] (READ)
// 00496058: CMP EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x60] (READ)
// 0049605c: JNZ 0x00495d7a
//   XREF to: 00495d7a (CONDITIONAL_JUMP)
// 00496062: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x34] (READ)
// 00496066: CMP EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x5c] (READ)
// 0049606a: JNZ 0x00495d7a
//   XREF to: 00495d7a (CONDITIONAL_JUMP)
// 00496070: JMP 0x00495f4f
//   XREF to: 00495f4f (UNCONDITIONAL_JUMP)
// 00496075: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_00496075
//   XREF to: Stack[-0x38] (READ)
// 00496079: SUB EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x58] (READ)
// 0049607d: ADD ESI,EAX
// 0049607f: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x38] (READ)
// 00496083: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0049608a: MOV EDI,0xffffffff
// 0049608f: FILD dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x14] (READ)
// 00496096: FSUBR float ptr [ESP + 0x8]
//   XREF to: Stack[-0xa8] (READ)
// 0049609a: MOV dword ptr [ESP + 0x90],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 004960a1: JMP 0x00495e3a
//   XREF to: 00495e3a (UNCONDITIONAL_JUMP)
// 004960a6: MOV EAX,0xffffffff
//   Label: LAB_004960a6
// 004960ab: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x60] (READ)
// 004960af: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 004960b3: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x3c] (READ)
// 004960b7: SUB EAX,EDX
// 004960b9: ADD ESI,EAX
// 004960bb: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x3c] (READ)
// 004960bf: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004960c6: FILD dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x14] (READ)
// 004960cd: FSUBR float ptr [ESP + 0xc]
//   XREF to: Stack[-0xa4] (READ)
// 004960d1: JMP 0x00495e79
//   XREF to: 00495e79 (UNCONDITIONAL_JUMP)
// 004960d6: MOV EAX,0xffffffff
//   Label: LAB_004960d6
// 004960db: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x5c] (READ)
// 004960df: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 004960e3: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x34] (READ)
// 004960e7: SUB EAX,EDX
// 004960e9: ADD ESI,EAX
// 004960eb: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x34] (READ)
// 004960ef: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004960f6: FILD dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x14] (READ)
// 004960fd: FSUBR float ptr [ESP + 0x4]
//   XREF to: Stack[-0xac] (READ)
// 00496101: JMP 0x00495eb8
//   XREF to: 00495eb8 (UNCONDITIONAL_JUMP)
// 00496106: LEA EDX,[ESP + 0x40]
//   Label: LAB_00496106
//   XREF to: Stack[-0x70] (DATA)
// 0049610a: PUSH EDX
// 0049610b: LEA EDX,[ESP + 0x30]
//   XREF to: Stack[-0x84] (DATA)
// 0049610f: PUSH EDX
// 00496110: LEA EDX,[ESP + 0x28]
//   XREF to: Stack[-0x90] (DATA)
// 00496114: PUSH EDX
// 00496115: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00496118: PUSH ECX
// 00496119: PUSH EAX
// 0049611a: CALL core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
//   XREF to: 004578f0 (UNCONDITIONAL_CALL)
// 0049611f: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00496126: FLD float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x14] (READ)
// 0049612d: ADD ESP,0x14
// 00496130: FST float ptr [ESP + 0x98]
//   XREF to: Stack[-0x18] (WRITE)
// 00496137: FCOMP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x98] (READ)
// 0049613b: FNSTSW AX
// 0049613d: SAHF
// 0049613e: JNC 0x00496178
//   XREF to: 00496178 (CONDITIONAL_JUMP)
// 00496140: TEST EBX,EBX
// 00496142: JZ 0x00496160
//   XREF to: 00496160 (CONDITIONAL_JUMP)
// 00496144: LEA EAX,[ESP + 0x2c]
//   XREF to: Stack[-0x84] (DATA)
// 00496148: CMP EBX,EAX
// 0049614a: JZ 0x00496160
//   XREF to: 00496160 (CONDITIONAL_JUMP)
// 0049614c: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x84] (DATA)
// 00496150: MOV dword ptr [EBX],EAX
// 00496152: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x80] (READ)
// 00496156: MOV dword ptr [EBX + 0x4],EAX
// 00496159: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x7c] (READ)
// 0049615d: MOV dword ptr [EBX + 0x8],EAX
// 00496160: MOV EDI,dword ptr [EBP + 0x24]
//   Label: LAB_00496160
//   XREF to: Stack[0x14] (READ)
// 00496163: TEST EDI,EDI
// 00496165: JZ 0x0049616d
//   XREF to: 0049616d (CONDITIONAL_JUMP)
// 00496167: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x70] (READ)
// 0049616b: MOV dword ptr [EDI],EAX
// 0049616d: MOV EAX,dword ptr [ESP + 0x98]
//   Label: LAB_0049616d
//   XREF to: Stack[-0x18] (READ)
// 00496174: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 00496178: FLD float ptr [ESP + 0x18]
//   Label: LAB_00496178
//   XREF to: Stack[-0x98] (READ)
// 0049617c: FLD1
// 0049617e: FCOMPP
// 00496180: FNSTSW AX
// 00496182: SAHF
// 00496183: JC 0x00495f7d
//   XREF to: 00495f7d (CONDITIONAL_JUMP)
// 00496189: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x98] (READ)
// 0049618d: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00496191: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x54] (READ)
// 00496195: MOV ESP,EBP
// 00496197: POP EBP
// 00496198: POP EDI
// 00496199: POP ESI
// 0049619a: POP EBX
// 0049619b: RET
// 0049619c: MOV EDI,dword ptr [ESP + 0x88]
//   Label: LAB_0049619c
//   XREF to: Stack[-0x28] (READ)
// 004961a3: TEST EDI,EDI
// 004961a5: JL 0x004961be
//   XREF to: 004961be (CONDITIONAL_JUMP)
// 004961a7: MOV dword ptr [ESP + 0x88],EAX
//   Label: LAB_004961a7
//   XREF to: Stack[-0x28] (WRITE)
// 004961ae: MOV dword ptr [ESP + 0x84],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 004961b5: MOV dword ptr [ESP + 0x7c],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 004961b9: JMP 0x00495f57
//   XREF to: 00495f57 (UNCONDITIONAL_JUMP)
// 004961be: MOV EAX,dword ptr [ESP + 0x90]
//   Label: LAB_004961be
//   XREF to: Stack[-0x20] (READ)
// 004961c5: MOV EDX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x38] (READ)
// 004961c9: MOV ECX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x30] (READ)
// 004961d0: ADD EDX,EAX
// 004961d2: ADD ECX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x1c] (READ)
// 004961d9: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x44] (READ)
// 004961dd: MOV dword ptr [ESP + 0x78],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 004961e1: ADD EDI,EAX
// 004961e3: MOV dword ptr [ESP + 0x80],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 004961ea: MOV dword ptr [ESP + 0x88],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 004961f1: JMP 0x00495f57
//   XREF to: 00495f57 (UNCONDITIONAL_JUMP)
// 004961f6: MOV EAX,dword ptr [EBP + 0x24]
//   Label: LAB_004961f6
//   XREF to: Stack[0x14] (READ)
// 004961f9: TEST EAX,EAX
// 004961fb: JZ 0x00496005
//   XREF to: 00496005 (CONDITIONAL_JUMP)
// 00496201: MOV dword ptr [EAX],0x1
// 00496207: MOV dword ptr [ESP + 0x5c],0xbf800000
//   XREF to: Stack[-0x54] (WRITE)
// 0049620f: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x54] (READ)
// 00496213: MOV ESP,EBP
// 00496215: POP EBP
// 00496216: POP EDI
// 00496217: POP ESI
// 00496218: POP EBX
// 00496219: RET
