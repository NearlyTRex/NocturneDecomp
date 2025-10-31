// Name: core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
// Address: 0049a790
// Address Range: [[0049a790, 0049a7f1]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0 (004781d0) at 004783a1 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950 (00478950) at 00478b6f [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_addTriangle_FUN_00495100 (00495100) at 0049512a [UNCONDITIONAL_CALL]
//   core_dtri.cpp_buildClipTriangleFan_FUN_0049cb5a (0049cb5a) at 0049cb7e [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 (005716b0) at 00572003 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140 (00573140) at 00573201 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_rayTestQuadFloor_FUN_005715d0 (005715d0) at 005715ef [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_testCylinderQuadCollision_FUN_005730d0 (005730d0) at 005730eb [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0059cba0 (0059cba0) at 0059cd14 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005ba700 (005ba700) at 005ba811 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005eb740 (005eb740) at 005eb7ee [UNCONDITIONAL_CALL]
// Function calls:
//   core_dtri.cpp_CDemonTriangle_calculateData_FUN_0049a640

#include "nocturne.h"

void __cdecl
core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
          (CDemonTriangle *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3)

{
  if (this_ptr != (CDemonTriangle *)vertex1) {
    (this_ptr->vertex1).x = vertex1->x;
    (this_ptr->vertex1).y = vertex1->y;
    (this_ptr->vertex1).z = vertex1->z;
  }
  if (&this_ptr->vertex2 != vertex2) {
    (this_ptr->vertex2).x = vertex2->x;
    (this_ptr->vertex2).y = vertex2->y;
    (this_ptr->vertex2).z = vertex2->z;
  }
  if (&this_ptr->vertex3 != vertex3) {
    (this_ptr->vertex3).x = vertex3->x;
    (this_ptr->vertex3).y = vertex3->y;
    (this_ptr->vertex3).z = vertex3->z;
  }
  core_dtri_cpp_CDemonTriangle_calculateData_FUN_0049a640(this_ptr);
  return;
}


// Assembly code:
// 0049a790: PUSH EBX
//   Label: core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
// 0049a791: PUSH ESI
// 0049a792: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0049a796: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0049a79a: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0049a79e: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 0049a7a2: CMP EAX,EDX
// 0049a7a4: JNZ 0x0049a7e0
//   XREF to: 0049a7e0 (CONDITIONAL_JUMP)
// 0049a7a6: LEA EDX,[EAX + 0xc]
//   Label: LAB_0049a7a6
// 0049a7a9: CMP EDX,ECX
// 0049a7ab: JZ 0x0049a7bd
//   XREF to: 0049a7bd (CONDITIONAL_JUMP)
// 0049a7ad: MOV ESI,dword ptr [ECX]
// 0049a7af: MOV dword ptr [EDX],ESI
// 0049a7b1: MOV ESI,dword ptr [ECX + 0x4]
// 0049a7b4: MOV dword ptr [EDX + 0x4],ESI
// 0049a7b7: MOV ESI,dword ptr [ECX + 0x8]
// 0049a7ba: MOV dword ptr [EDX + 0x8],ESI
// 0049a7bd: LEA EDX,[EAX + 0x18]
//   Label: LAB_0049a7bd
// 0049a7c0: CMP EDX,EBX
// 0049a7c2: JZ 0x0049a7d4
//   XREF to: 0049a7d4 (CONDITIONAL_JUMP)
// 0049a7c4: MOV ECX,dword ptr [EBX]
// 0049a7c6: MOV dword ptr [EDX],ECX
// 0049a7c8: MOV ECX,dword ptr [EBX + 0x4]
// 0049a7cb: MOV dword ptr [EDX + 0x4],ECX
// 0049a7ce: MOV ECX,dword ptr [EBX + 0x8]
// 0049a7d1: MOV dword ptr [EDX + 0x8],ECX
// 0049a7d4: PUSH EAX
//   Label: LAB_0049a7d4
// 0049a7d5: CALL core_dtri.cpp_CDemonTriangle_calculateData_FUN_0049a640
//   XREF to: 0049a640 (UNCONDITIONAL_CALL)
// 0049a7da: ADD ESP,0x4
// 0049a7dd: POP ESI
// 0049a7de: POP EBX
// 0049a7df: RET
// 0049a7e0: MOV ESI,dword ptr [EDX]
//   Label: LAB_0049a7e0
// 0049a7e2: MOV dword ptr [EAX],ESI
// 0049a7e4: MOV ESI,dword ptr [EDX + 0x4]
// 0049a7e7: MOV dword ptr [EAX + 0x4],ESI
// 0049a7ea: MOV ESI,dword ptr [EDX + 0x8]
// 0049a7ed: MOV dword ptr [EAX + 0x8],ESI
// 0049a7f0: JMP 0x0049a7a6
//   XREF to: 0049a7a6 (UNCONDITIONAL_JUMP)
