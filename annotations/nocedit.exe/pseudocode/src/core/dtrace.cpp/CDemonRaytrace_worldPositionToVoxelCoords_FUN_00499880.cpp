// Name: core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
// Address: 00499880
// Address Range: [[00499880, 00499921]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880(CDemonRaytrace * this_ptr, CVector3f * world_position, CVector3i * output_voxel_coords)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160 (0049a160) at 0049a1c4 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_transferVoxelShadowBit_FUN_0049a280 (0049a280) at 0049a2e5 [UNCONDITIONAL_CALL]
//   core_particle.cpp_CParticle_process_FUN_00545760 (00545760) at 0054581e [UNCONDITIONAL_CALL]
//   core_path.cpp_CPathMap_findPathToDestination_FUN_00547320 (00547320) at 0054734c [UNCONDITIONAL_CALL]
//   core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60 (00546a60) at 00546b0e [UNCONDITIONAL_CALL]
//   core_path.cpp_FUN_00548390 (00548390) at 005483d0 [UNCONDITIONAL_CALL]
//   core_path.cpp_FUN_00548680 (00548680) at 0054869d [UNCONDITIONAL_CALL]
// Function calls:
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
          (CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_voxel_coords)

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
          (float10)(this_ptr->adjusted_size).z;
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
// 00499880: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
// 00499881: PUSH EDI
// 00499882: SUB ESP,0x14
// 00499885: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00499889: MOV EBX,ESI
// 0049988b: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0049988f: FLD float ptr [EDI]
// 00499891: FSUB float ptr [ESI + 0x10]
// 00499894: FDIV float ptr [ESI + 0x34]
// 00499897: SUB ESP,0x8
// 0049989a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0049989d: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 004998a2: FLD float ptr [EDI + 0x4]
// 004998a5: FSUB float ptr [ESI + 0x14]
// 004998a8: FDIV float ptr [ESI + 0x38]
// 004998ab: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 004998af: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 004998b3: FLD double ptr [ESP + 0x14]
//   XREF to: Stack[-0x10] (READ)
// 004998b7: ADD ESP,0x8
// 004998ba: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004998bf: FISTP dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 004998c2: SUB ESP,0x8
// 004998c5: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004998c8: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 004998cd: FLD float ptr [EDI + 0x8]
// 004998d0: FSUB float ptr [ESI + 0x18]
// 004998d3: FDIV float ptr [ESI + 0x3c]
// 004998d6: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 004998da: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 004998de: FLD double ptr [ESP + 0x14]
//   XREF to: Stack[-0x10] (READ)
// 004998e2: ADD ESP,0x8
// 004998e5: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004998ea: FISTP dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (WRITE)
// 004998ee: SUB ESP,0x8
// 004998f1: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004998f4: MOV EDI,EBX
// 004998f6: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 004998fb: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 004998ff: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 00499903: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x1c] (DATA)
// 00499907: FLD double ptr [ESP + 0x14]
//   XREF to: Stack[-0x10] (READ)
// 0049990b: ADD ESP,0x8
// 0049990e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00499913: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (WRITE)
// 00499917: MOVSD ES:EDI,ESI
// 00499918: MOVSD ES:EDI,ESI
// 00499919: MOVSD ES:EDI,ESI
// 0049991a: MOV EAX,EBX
// 0049991c: ADD ESP,0x14
// 0049991f: POP EDI
// 00499920: POP EBX
// 00499921: RET
