// Name: core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0
// Address: 004997d0
// Address Range: [[004997d0, 00499871]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0(CDemonRaytrace * this_ptr, CVector3f * world_position, CVector3i * output_grid_coords)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160 (0049a160) at 0049a179 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_transferVoxelShadowBit_FUN_0049a280 (0049a280) at 0049a299 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0
          (CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_grid_coords)

{
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  byte bVar1;
  float10 in_ST0;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  double dVar5;
  int aiStack_1008 [1024];
  
  bVar1 = 0;
  dVar5 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar4 = (float10)dVar5;
  fVar2 = (float10)(double)CONCAT44(extraout_EDX,extraout_EAX);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
  aiStack_1008[0x3fb] = (int)ROUND(fVar2);
  dVar5 = crt_math_c_floor_FUN_005feb90((double)fVar4);
  fVar4 = (float10)dVar5;
  fVar2 = ((float10)world_position->z - (float10)(this_ptr->bbox_min).z) /
          (float10)(this_ptr->cell_size).z;
  fVar3 = (float10)(double)CONCAT44(extraout_EDX_00,extraout_EAX_00);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_00,extraout_EAX_00));
  aiStack_1008[0x3fc] = (int)ROUND(fVar3);
  crt_math_c_floor_FUN_005feb90((double)fVar4);
  fVar4 = (float10)(double)CONCAT44(extraout_EDX_01,extraout_EAX_01);
  aiStack_1008[0x3fa] = (int)((ulonglong)(double)fVar2 >> 0x20);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_01,extraout_EAX_01));
  aiStack_1008[0x3fd] = (int)ROUND(fVar4);
  *unaff_ESI = aiStack_1008[0x3fa];
  unaff_ESI[(uint)bVar1 * -2 + 1] = aiStack_1008[(uint)bVar1 * -2 + 0x3fb];
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       aiStack_1008[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x3fc];
  return;
}


// Assembly code:
// 004997d0: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0
// 004997d1: PUSH EDI
// 004997d2: SUB ESP,0x14
// 004997d5: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 004997d9: MOV EBX,ESI
// 004997db: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004997df: FLD float ptr [EDI]
// 004997e1: FSUB float ptr [ESI + 0x10]
// 004997e4: FDIV float ptr [ESI + 0x28]
// 004997e7: SUB ESP,0x8
// 004997ea: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004997ed: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 004997f2: FLD float ptr [EDI + 0x4]
// 004997f5: FSUB float ptr [ESI + 0x14]
// 004997f8: FDIV float ptr [ESI + 0x2c]
// 004997fb: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 004997ff: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 00499803: FLD double ptr [ESP + 0x14]
//   XREF to: Stack[-0x10] (READ)
// 00499807: ADD ESP,0x8
// 0049980a: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0049980f: FISTP dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00499812: SUB ESP,0x8
// 00499815: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00499818: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0049981d: FLD float ptr [EDI + 0x8]
// 00499820: FSUB float ptr [ESI + 0x18]
// 00499823: FDIV float ptr [ESI + 0x30]
// 00499826: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0049982a: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 0049982e: FLD double ptr [ESP + 0x14]
//   XREF to: Stack[-0x10] (READ)
// 00499832: ADD ESP,0x8
// 00499835: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0049983a: FISTP dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (WRITE)
// 0049983e: SUB ESP,0x8
// 00499841: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00499844: MOV EDI,EBX
// 00499846: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0049984b: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0049984f: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 00499853: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x1c] (DATA)
// 00499857: FLD double ptr [ESP + 0x14]
//   XREF to: Stack[-0x10] (READ)
// 0049985b: ADD ESP,0x8
// 0049985e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00499863: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (WRITE)
// 00499867: MOVSD ES:EDI,ESI
// 00499868: MOVSD ES:EDI,ESI
// 00499869: MOVSD ES:EDI,ESI
// 0049986a: MOV EAX,EBX
// 0049986c: ADD ESP,0x14
// 0049986f: POP EDI
// 00499870: POP EBX
// 00499871: RET
