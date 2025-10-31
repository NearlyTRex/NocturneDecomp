// Name: core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330
// Address: 00499330
// Address Range: [[00499330, 004997c9]]
// Convention: __cdecl
// Signature: int core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330(CDemonRaytrace * this_ptr, CVector3f * start_position, CVector3f * end_position)
// Cross-references:
//   core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_00572510 (00572510) at 0057251f [UNCONDITIONAL_CALL]
// Globals:
//   float g_VoxelSizeReciprocal2 = 0.125
//   float g_RaycastStepScale = 2.684355E+8
//   uchar[8] g_VoxelYBitMasks
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
//   crt_math.c_round_FUN_005fe6b0

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
           ((float10)1 / ((float10)(this_ptr->cell_size).x * (float10)g_VoxelSizeReciprocal2));
  fVar15 = ((float10)end_position->z - (float10)(this_ptr->bbox_min).z) *
           ((float10)1 / ((float10)(this_ptr->cell_size).z * (float10)g_VoxelSizeReciprocal2));
  iVar10 = 1;
  dVar16 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(end_position,start_position));
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
    fVar12 = ABS((float10)in_stack_ffffff98) * ((float10)g_RaycastStepScale / (float10)fVar3);
    fVar13 = ABS((float10)in_stack_ffffff9c) * ((float10)g_RaycastStepScale / (float10)fVar3);
    dVar16 = crt_math_c_round_FUN_005fe6b0
                       ((double)CONCAT44((int)ROUND(fVar15),
                                         CONCAT22((short)((uint)fVar6 >> 0x10),
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
    dVar16 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),iVar2))
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


// Assembly code:
// 00499330: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330
// 00499331: PUSH ESI
// 00499332: PUSH EDI
// 00499333: PUSH EBP
// 00499334: MOV EBP,ESP
// 00499336: SUB ESP,0x78
// 00499339: AND ESP,0xfffffff8
// 0049933c: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0049933f: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00499342: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00499345: FLD float ptr [EAX]
// 00499347: FSUB float ptr [ECX + 0x10]
// 0049934a: FLD float ptr [0x00622d52]
//   XREF to: 00622d52 (READ)
// 00499350: FLD float ptr [ECX + 0x28]
// 00499353: FMUL ST1
// 00499355: FLD1
// 00499357: FDIVRP
// 00499359: FLD float ptr [EAX + 0x4]
// 0049935c: FSUB float ptr [ECX + 0x14]
// 0049935f: FLD float ptr [ECX + 0x2c]
// 00499362: FMUL ST3
// 00499364: FLD1
// 00499366: FDIVRP
// 00499368: FLD float ptr [EAX + 0x8]
// 0049936b: FSUB float ptr [ECX + 0x18]
// 0049936e: FXCH ST5
// 00499370: FMUL ST3
// 00499372: FLD float ptr [ECX + 0x30]
// 00499375: FMULP ST5
// 00499377: FLD1
// 00499379: FDIVRP ST5,ST0
// 0049937b: FXCH ST2
// 0049937d: FMUL ST1
// 0049937f: FXCH ST5
// 00499381: FMUL ST4
// 00499383: FXCH ST2
// 00499385: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x60] (WRITE)
// 00499389: FLD float ptr [EDX]
// 0049938b: FXCH ST5
// 0049938d: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (WRITE)
// 00499391: FLD float ptr [EDX + 0x4]
// 00499394: FXCH ST5
// 00499396: FSUB float ptr [ECX + 0x10]
// 00499399: FXCH ST5
// 0049939b: FSUB float ptr [ECX + 0x14]
// 0049939e: FXCH ST5
// 004993a0: FMULP ST3
// 004993a2: FMULP ST4
// 004993a4: FLD float ptr [EDX + 0x8]
// 004993a7: FLD float ptr [EDX]
// 004993a9: FSUB float ptr [EAX]
// 004993ab: FXCH
// 004993ad: FSUB float ptr [ECX + 0x18]
// 004993b0: FXCH
// 004993b2: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x84] (WRITE)
// 004993b6: FLD float ptr [EDX + 0x4]
// 004993b9: FSUB float ptr [EAX + 0x4]
// 004993bc: FXCH
// 004993be: FMULP ST4
// 004993c0: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x80] (WRITE)
// 004993c4: FLD float ptr [EDX + 0x8]
// 004993c7: FSUB float ptr [EAX + 0x8]
// 004993ca: MOV EBX,0x1
// 004993cf: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x7c] (WRITE)
// 004993d3: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (WRITE)
// 004993d7: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004993dc: FXCH ST2
// 004993de: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004993e3: FXCH
// 004993e5: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004993ea: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x60] (READ)
// 004993ee: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (READ)
// 004993f2: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 004993f6: FXCH ST5
// 004993f8: FISTP dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x64] (WRITE)
// 004993fc: FXCH ST3
// 004993fe: FISTP dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x6c] (WRITE)
// 00499402: FXCH
// 00499404: FISTP dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (WRITE)
// 00499408: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0049940d: FXCH
// 0049940f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00499414: FXCH ST2
// 00499416: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0049941b: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x64] (READ)
// 0049941f: FXCH
// 00499421: FISTP dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (WRITE)
// 00499425: FXCH
// 00499427: FISTP dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (WRITE)
// 0049942b: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (READ)
// 0049942f: FISTP dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x24] (WRITE)
// 00499433: CMP EAX,EDX
// 00499435: JNZ 0x00499445
//   XREF to: 00499445 (CONDITIONAL_JUMP)
// 00499437: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 0049943b: CMP EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x6c] (READ)
// 0049943f: JZ 0x004996e3
//   XREF to: 004996e3 (CONDITIONAL_JUMP)
// 00499445: FLD float ptr [ESP + 0x8]
//   Label: LAB_00499445
//   XREF to: Stack[-0x80] (READ)
// 00499449: FMUL ST0
// 0049944b: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x84] (READ)
// 0049944f: FMUL ST0
// 00499451: FADDP
// 00499453: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x7c] (READ)
// 00499457: FMUL ST0
// 00499459: FADDP
// 0049945b: FSQRT
// 0049945d: FST float ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 00499460: FLDZ
// 00499462: FCOMPP
// 00499464: FNSTSW AX
// 00499466: SAHF
// 00499467: JNC 0x004996f6
//   XREF to: 004996f6 (CONDITIONAL_JUMP)
// 0049946d: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x80] (READ)
// 00499471: FABS
// 00499473: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x7c] (READ)
// 00499477: FABS
// 00499479: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x84] (READ)
// 0049947d: FLD ST0
// 0049947f: FABS
// 00499481: FLD float ptr [0x00622d56]
//   XREF to: 00622d56 (READ)
// 00499487: FDIV float ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 0049948a: FXCH
// 0049948c: FMUL ST1
// 0049948e: FXCH ST4
// 00499490: FMUL ST1
// 00499492: FXCH ST3
// 00499494: FMULP
// 00499496: FXCH ST3
// 00499498: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0049949d: FISTP dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x34] (WRITE)
// 004994a1: FLDZ
// 004994a3: FXCH ST2
// 004994a5: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004994aa: FXCH ST3
// 004994ac: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004994b1: FXCH ST3
// 004994b3: FISTP dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x38] (WRITE)
// 004994b7: FXCH ST2
// 004994b9: FISTP dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x3c] (WRITE)
// 004994bd: FCOMPP
// 004994bf: FNSTSW AX
// 004994c1: SAHF
// 004994c2: JA 0x00499701
//   XREF to: 00499701 (CONDITIONAL_JUMP)
// 004994c8: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x64] (READ)
// 004994cc: MOV ESI,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (READ)
// 004994d0: SUB EAX,ESI
// 004994d2: MOV ECX,0x1
// 004994d7: ADD EBX,EAX
// 004994d9: LEA EAX,[ESI + ECX*0x1]
// 004994dc: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004994e0: FILD dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (READ)
// 004994e4: FSUB float ptr [ESP + 0x28]
//   XREF to: Stack[-0x60] (READ)
// 004994e8: MOV dword ptr [ESP + 0x48],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 004994ec: FSTP float ptr [ESP + 0x20]
//   Label: LAB_004994ec
//   XREF to: Stack[-0x68] (WRITE)
// 004994f0: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x80] (READ)
// 004994f4: FLDZ
// 004994f6: FCOMPP
// 004994f8: FNSTSW AX
// 004994fa: SAHF
// 004994fb: JA 0x00499729
//   XREF to: 00499729 (CONDITIONAL_JUMP)
// 00499501: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x6c] (READ)
// 00499505: MOV ESI,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 00499509: SUB EAX,ESI
// 0049950b: MOV ECX,0x1
// 00499510: ADD EBX,EAX
// 00499512: LEA EAX,[ESI + ECX*0x1]
// 00499515: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00499519: FILD dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (READ)
// 0049951d: FSUB float ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (READ)
// 00499521: MOV dword ptr [ESP + 0x40],ECX
//   XREF to: Stack[-0x48] (WRITE)
// 00499525: FSTP float ptr [ESP + 0x34]
//   Label: LAB_00499525
//   XREF to: Stack[-0x54] (WRITE)
// 00499529: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x7c] (READ)
// 0049952d: FLDZ
// 0049952f: FCOMPP
// 00499531: FNSTSW AX
// 00499533: SAHF
// 00499534: JA 0x00499751
//   XREF to: 00499751 (CONDITIONAL_JUMP)
// 0049953a: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (READ)
// 0049953e: MOV ESI,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x24] (READ)
// 00499542: SUB EAX,ESI
// 00499544: MOV ECX,0x1
// 00499549: ADD EBX,EAX
// 0049954b: LEA EAX,[ESI + ECX*0x1]
// 0049954e: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00499552: FILD dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (READ)
// 00499556: FSUB float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0049955a: MOV dword ptr [ESP + 0x44],ECX
//   XREF to: Stack[-0x44] (WRITE)
// 0049955e: FSTP float ptr [ESP + 0x2c]
//   Label: LAB_0049955e
//   XREF to: Stack[-0x5c] (WRITE)
// 00499562: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x38] (READ)
// 00499566: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0049956a: FILD dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (READ)
// 0049956e: FLD ST0
// 00499570: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x68] (READ)
// 00499574: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x34] (READ)
// 00499578: FXCH
// 0049957a: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x5c] (READ)
// 0049957e: FXCH
// 00499580: FMUL ST1
// 00499582: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00499586: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x3c] (READ)
// 0049958a: FILD dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (READ)
// 0049958e: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00499592: FLD ST0
// 00499594: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 00499598: FILD dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (READ)
// 0049959c: FLD ST0
// 0049959e: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x68] (READ)
// 004995a2: FXCH
// 004995a4: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 004995a8: FXCH ST2
// 004995aa: FSUBP ST6,ST0
// 004995ac: FXCH ST2
// 004995ae: FMULP ST4
// 004995b0: FXCH ST4
// 004995b2: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004995b7: FXCH ST4
// 004995b9: FSUBP ST2,ST0
// 004995bb: FXCH ST3
// 004995bd: FISTP dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x28] (WRITE)
// 004995c1: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004995c6: FXCH
// 004995c8: FSUBP ST2,ST0
// 004995ca: FISTP dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (WRITE)
// 004995ce: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004995d3: FISTP dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x1c] (WRITE)
// 004995d7: MOV EAX,dword ptr [ESP + 0x64]
//   Label: LAB_004995d7
//   XREF to: Stack[-0x24] (READ)
// 004995db: MOV EDX,EAX
// 004995dd: SAR EDX,0x1f
// 004995e0: SHL EDX,0x3
// 004995e3: SBB EAX,EDX
// 004995e5: SAR EAX,0x3
// 004995e8: PUSH EAX
// 004995e9: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x2c] (READ)
// 004995ed: MOV EDX,EAX
// 004995ef: SAR EDX,0x1f
// 004995f2: SHL EDX,0x3
// 004995f5: SBB EAX,EDX
// 004995f7: SAR EAX,0x3
// 004995fa: PUSH EAX
// 004995fb: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x30] (READ)
// 004995ff: MOV EDX,EAX
// 00499601: SAR EDX,0x1f
// 00499604: SHL EDX,0x3
// 00499607: SBB EAX,EDX
// 00499609: SAR EAX,0x3
// 0049960c: PUSH EAX
// 0049960d: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00499610: PUSH EDI
// 00499611: CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
//   XREF to: 004952b0 (UNCONDITIONAL_CALL)
// 00499616: MOV ECX,EAX
// 00499618: ADD ESP,0x10
// 0049961b: TEST EAX,EAX
// 0049961d: JZ 0x0049967b
//   XREF to: 0049967b (CONDITIONAL_JUMP)
// 0049961f: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (READ)
// 00499623: MOV EDX,EAX
// 00499625: MOV ESI,0x8
// 0049962a: SAR EDX,0x1f
// 0049962d: IDIV ESI
// 0049962f: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 00499633: MOV ESI,EDX
// 00499635: MOV EDX,EAX
// 00499637: MOV EDI,0x8
// 0049963c: SAR EDX,0x1f
// 0049963f: IDIV EDI
// 00499641: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x24] (READ)
// 00499645: MOV EDI,EDX
// 00499647: MOV EDX,EAX
// 00499649: MOV dword ptr [ESP + 0x74],0x8
//   XREF to: Stack[-0x14] (WRITE)
// 00499651: SAR EDX,0x1f
// 00499654: IDIV dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (READ)
// 00499658: MOV EAX,dword ptr [ECX]
// 0049965a: TEST EAX,EAX
// 0049965c: JZ 0x0049967b
//   XREF to: 0049967b (CONDITIONAL_JUMP)
// 0049965e: SHL EDX,0x3
// 00499661: ADD EDX,EDI
// 00499663: MOV AL,byte ptr [EDX + EAX*0x1]
// 00499666: XOR EDX,EDX
// 00499668: AND EAX,0xff
// 0049966d: MOV DL,byte ptr [ESI + 0x6789f8]
//   XREF to: 006789f8 (DATA)
// 00499673: TEST EAX,EDX
// 00499675: JNZ 0x00499779
//   XREF to: 00499779 (CONDITIONAL_JUMP)
// 0049967b: DEC EBX
//   Label: LAB_0049967b
// 0049967c: TEST EBX,EBX
// 0049967e: JLE 0x004996f6
//   XREF to: 004996f6 (CONDITIONAL_JUMP)
// 00499680: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 00499684: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x38] (READ)
// 00499688: MOV ECX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x44] (READ)
// 0049968c: ADD EAX,EDX
// 0049968e: MOV EDX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x24] (READ)
// 00499692: MOV ESI,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x34] (READ)
// 00499696: ADD EDX,ECX
// 00499698: MOV ECX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x1c] (READ)
// 0049969c: MOV EDI,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x28] (READ)
// 004996a0: SUB ECX,ESI
// 004996a2: TEST EDI,EDI
// 004996a4: JL 0x00499787
//   XREF to: 00499787 (CONDITIONAL_JUMP)
// 004996aa: MOV ESI,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 004996ae: TEST ESI,ESI
// 004996b0: JL 0x0049978f
//   XREF to: 0049978f (CONDITIONAL_JUMP)
// 004996b6: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 004996ba: MOV EDI,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 004996be: MOV EDX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x28] (READ)
// 004996c2: ADD EDI,EAX
// 004996c4: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x34] (READ)
// 004996c8: MOV ECX,ESI
// 004996ca: SUB EDX,EAX
// 004996cc: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x3c] (READ)
// 004996d0: MOV dword ptr [ESP + 0x5c],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 004996d4: SUB ECX,EAX
// 004996d6: MOV dword ptr [ESP + 0x60],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 004996da: MOV dword ptr [ESP + 0x68],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 004996de: JMP 0x004995d7
//   XREF to: 004995d7 (UNCONDITIONAL_JUMP)
// 004996e3: MOV EAX,dword ptr [ESP + 0x64]
//   Label: LAB_004996e3
//   XREF to: Stack[-0x24] (READ)
// 004996e7: CMP EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (READ)
// 004996eb: JNZ 0x00499445
//   XREF to: 00499445 (CONDITIONAL_JUMP)
// 004996f1: JMP 0x004995d7
//   XREF to: 004995d7 (UNCONDITIONAL_JUMP)
// 004996f6: XOR EDX,EDX
//   Label: LAB_004996f6
// 004996f8: MOV EAX,EDX
// 004996fa: MOV ESP,EBP
// 004996fc: POP EBP
// 004996fd: POP EDI
// 004996fe: POP ESI
// 004996ff: POP EBX
// 00499700: RET
// 00499701: MOV EAX,dword ptr [ESP + 0x58]
//   Label: LAB_00499701
//   XREF to: Stack[-0x30] (READ)
// 00499705: SUB EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x64] (READ)
// 00499709: ADD EBX,EAX
// 0049970b: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (READ)
// 0049970f: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00499713: MOV EDI,0xffffffff
// 00499718: FILD dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (READ)
// 0049971c: FSUBR float ptr [ESP + 0x28]
//   XREF to: Stack[-0x60] (READ)
// 00499720: MOV dword ptr [ESP + 0x48],EDI
//   XREF to: Stack[-0x40] (WRITE)
// 00499724: JMP 0x004994ec
//   XREF to: 004994ec (UNCONDITIONAL_JUMP)
// 00499729: MOV EAX,dword ptr [ESP + 0x5c]
//   Label: LAB_00499729
//   XREF to: Stack[-0x2c] (READ)
// 0049972d: SUB EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x6c] (READ)
// 00499731: ADD EBX,EAX
// 00499733: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 00499737: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0049973b: MOV EDI,0xffffffff
// 00499740: FILD dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (READ)
// 00499744: FSUBR float ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (READ)
// 00499748: MOV dword ptr [ESP + 0x40],EDI
//   XREF to: Stack[-0x48] (WRITE)
// 0049974c: JMP 0x00499525
//   XREF to: 00499525 (UNCONDITIONAL_JUMP)
// 00499751: MOV EAX,dword ptr [ESP + 0x64]
//   Label: LAB_00499751
//   XREF to: Stack[-0x24] (READ)
// 00499755: SUB EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (READ)
// 00499759: ADD EBX,EAX
// 0049975b: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x24] (READ)
// 0049975f: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00499763: MOV EDI,0xffffffff
// 00499768: FILD dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (READ)
// 0049976c: FSUBR float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00499770: MOV dword ptr [ESP + 0x44],EDI
//   XREF to: Stack[-0x44] (WRITE)
// 00499774: JMP 0x0049955e
//   XREF to: 0049955e (UNCONDITIONAL_JUMP)
// 00499779: MOV EDX,0x1
//   Label: LAB_00499779
// 0049977e: MOV EAX,EDX
// 00499780: MOV ESP,EBP
// 00499782: POP EBP
// 00499783: POP EDI
// 00499784: POP ESI
// 00499785: POP EBX
// 00499786: RET
// 00499787: MOV ESI,dword ptr [ESP + 0x6c]
//   Label: LAB_00499787
//   XREF to: Stack[-0x1c] (READ)
// 0049978b: TEST ESI,ESI
// 0049978d: JL 0x004997a0
//   XREF to: 004997a0 (CONDITIONAL_JUMP)
// 0049978f: MOV dword ptr [ESP + 0x6c],ECX
//   Label: LAB_0049978f
//   XREF to: Stack[-0x1c] (WRITE)
// 00499793: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00499797: MOV dword ptr [ESP + 0x64],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0049979b: JMP 0x004995d7
//   XREF to: 004995d7 (UNCONDITIONAL_JUMP)
// 004997a0: MOV EAX,dword ptr [ESP + 0x48]
//   Label: LAB_004997a0
//   XREF to: Stack[-0x40] (READ)
// 004997a4: MOV EDI,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (READ)
// 004997a8: MOV EDX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x28] (READ)
// 004997ac: ADD EDI,EAX
// 004997ae: ADD EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x38] (READ)
// 004997b2: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x3c] (READ)
// 004997b6: MOV dword ptr [ESP + 0x58],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 004997ba: LEA ECX,[ESI + EAX*0x1]
// 004997bd: MOV dword ptr [ESP + 0x60],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 004997c1: MOV dword ptr [ESP + 0x6c],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 004997c5: JMP 0x004995d7
//   XREF to: 004995d7 (UNCONDITIONAL_JUMP)
