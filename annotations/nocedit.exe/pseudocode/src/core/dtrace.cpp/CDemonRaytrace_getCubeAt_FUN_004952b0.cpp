// Name: core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
// Address: 004952b0
// Address Range: [[004952b0, 0049530e]]
// Convention: __cdecl
// Signature: CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_copyVoxelBuffer2ToBuffer1_FUN_00499e70 (00499e70) at 00499ea9 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950 (00496950) at 00496a9c [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0 (004966f0) at 004967fd [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170 (00499170) at 0049927c [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50 (00499a50) at 00499ae2 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220 (00496220) at 00496527 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70 (00495b70) at 00495f6d [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 (00497500) at 00497569 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160 (0049a160) at 0049a215 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60 (00496c60) at 00496dcc [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_transferVoxelShadowBit_FUN_0049a280 (0049a280) at 0049a334 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330 (00499330) at 00499611 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CDemonCube * __cdecl
core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
          (CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z)

{
  int iVar1;
  int iVar2;
  
  if ((((-1 < grid_x) && (-1 < grid_y)) && (-1 < grid_z)) &&
     (((grid_x < (this_ptr->grid_coord).x && (iVar1 = (this_ptr->grid_coord).y, grid_y < iVar1)) &&
      (iVar2 = (this_ptr->grid_coord).z, grid_z < iVar2)))) {
    return this_ptr->cube_data + grid_y * iVar2 + grid_z + grid_x * iVar1 * iVar2;
  }
  return (CDemonCube *)0x0;
}


// Assembly code:
// 004952b0: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
// 004952b1: PUSH EDI
// 004952b2: PUSH EBP
// 004952b3: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004952b7: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004952bb: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004952bf: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 004952c3: TEST EAX,EAX
// 004952c5: JL 0x004952e2
//   XREF to: 004952e2 (CONDITIONAL_JUMP)
// 004952c7: TEST ECX,ECX
// 004952c9: JL 0x004952e2
//   XREF to: 004952e2 (CONDITIONAL_JUMP)
// 004952cb: TEST EBX,EBX
// 004952cd: JL 0x004952e2
//   XREF to: 004952e2 (CONDITIONAL_JUMP)
// 004952cf: CMP EAX,dword ptr [EDX + 0x40]
// 004952d2: JGE 0x004952e2
//   XREF to: 004952e2 (CONDITIONAL_JUMP)
// 004952d4: MOV EDI,dword ptr [EDX + 0x44]
// 004952d7: CMP ECX,EDI
// 004952d9: JGE 0x004952e2
//   XREF to: 004952e2 (CONDITIONAL_JUMP)
// 004952db: MOV EBP,dword ptr [EDX + 0x48]
// 004952de: CMP EBX,EBP
// 004952e0: JL 0x004952e8
//   XREF to: 004952e8 (CONDITIONAL_JUMP)
// 004952e2: XOR EAX,EAX
//   Label: LAB_004952e2
// 004952e4: POP EBP
// 004952e5: POP EDI
// 004952e6: POP EBX
// 004952e7: RET
// 004952e8: IMUL EAX,EDI
//   Label: LAB_004952e8
// 004952eb: IMUL ECX,EBP
// 004952ee: IMUL EAX,EBP
// 004952f1: ADD ECX,EBX
// 004952f3: ADD ECX,EAX
// 004952f5: LEA EAX,[ECX*0x4 + 0x0]
// 004952fc: SUB EAX,ECX
// 004952fe: SHL EAX,0x2
// 00495301: ADD ECX,EAX
// 00495303: SHL ECX,0x2
// 00495306: MOV EAX,dword ptr [EDX + 0x50]
// 00495309: ADD EAX,ECX
// 0049530b: POP EBP
// 0049530c: POP EDI
// 0049530d: POP EBX
// 0049530e: RET
