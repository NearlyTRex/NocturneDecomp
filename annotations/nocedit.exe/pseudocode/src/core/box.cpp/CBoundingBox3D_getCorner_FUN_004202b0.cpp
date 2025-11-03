// Name: core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
// Address: 004202b0
// Address Range: [[004202b0, 00420318]]
// Convention: __cdecl
// Signature: CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
// Cross-references:
//   core_actor.cpp_CDemonActor_FUN_0040dec0 (0040dec0) at 0040df32 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_00409270 (00409270) at 004092b4 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 (0040d940) at 0040d9a3 [UNCONDITIONAL_CALL]
//   core_actor.cpp_drawBoundingBox_FUN_0040d470 (0040d470) at 0040d49a [UNCONDITIONAL_CALL]
//   core_box.cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680 (00420680) at 004206a5 [UNCONDITIONAL_CALL]
//   core_box.cpp_CBoundingBox3D_render_FUN_004210b0 (004210b0) at 004210d6 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b234 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 (005716b0) at 00571a45 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140 (00573140) at 00573183 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 (005751d0) at 005752bb [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a16c0 (005a16c0) at 005a173f [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8950 (005b8950) at 005b8a2a [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e2910 (005e2910) at 005e2adf [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e2d50 (005e2d50) at 005e2da9 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CVector3f * __cdecl
core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
          (CBoundingBox3D *this_ptr,CVector3f *out_point,uint corner_index)

{
  float fVar1;
  
  if ((corner_index & 1) == 0) {
    fVar1 = (this_ptr->min).x;
  }
  else {
    fVar1 = (this_ptr->max).x;
  }
  out_point->x = fVar1;
  if ((corner_index & 2) == 0) {
    fVar1 = (this_ptr->min).y;
  }
  else {
    fVar1 = (this_ptr->max).y;
  }
  out_point->y = fVar1;
  if ((corner_index & 4) != 0) {
    out_point->z = (this_ptr->max).z;
    return out_point;
  }
  out_point->z = (this_ptr->min).z;
  return out_point;
}


// Assembly code:
// 004202b0: PUSH EBX
//   Label: core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
// 004202b1: SUB ESP,0xc
// 004202b4: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004202b8: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004202bc: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004202c0: TEST CL,0x1
// 004202c3: JNZ 0x004202fc
//   XREF to: 004202fc (CONDITIONAL_JUMP)
// 004202c5: MOV EBX,dword ptr [EAX]
// 004202c7: MOV dword ptr [ESP + 0x8],EBX
//   Label: LAB_004202c7
//   XREF to: Stack[-0x8] (WRITE)
// 004202cb: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x8] (READ)
// 004202cf: MOV dword ptr [EDX],EBX
// 004202d1: TEST CL,0x2
// 004202d4: JZ 0x00420301
//   XREF to: 00420301 (CONDITIONAL_JUMP)
// 004202d6: MOV EBX,dword ptr [EAX + 0x10]
// 004202d9: MOV dword ptr [ESP + 0x4],EBX
//   Label: LAB_004202d9
//   XREF to: Stack[-0xc] (WRITE)
// 004202dd: MOV EBX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (READ)
// 004202e1: MOV dword ptr [EDX + 0x4],EBX
// 004202e4: TEST CL,0x4
// 004202e7: JZ 0x00420306
//   XREF to: 00420306 (CONDITIONAL_JUMP)
// 004202e9: MOV EAX,dword ptr [EAX + 0x14]
// 004202ec: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x10] (DATA)
// 004202ef: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 004202f2: MOV dword ptr [EDX + 0x8],EAX
// 004202f5: MOV EAX,EDX
// 004202f7: ADD ESP,0xc
// 004202fa: POP EBX
// 004202fb: RET
// 004202fc: MOV EBX,dword ptr [EAX + 0xc]
//   Label: LAB_004202fc
// 004202ff: JMP 0x004202c7
//   XREF to: 004202c7 (UNCONDITIONAL_JUMP)
// 00420301: MOV EBX,dword ptr [EAX + 0x4]
//   Label: LAB_00420301
// 00420304: JMP 0x004202d9
//   XREF to: 004202d9 (UNCONDITIONAL_JUMP)
// 00420306: MOV EAX,dword ptr [EAX + 0x8]
//   Label: LAB_00420306
// 00420309: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x10] (DATA)
// 0042030c: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 0042030f: MOV dword ptr [EDX + 0x8],EAX
// 00420312: MOV EAX,EDX
// 00420314: ADD ESP,0xc
// 00420317: POP EBX
// 00420318: RET
