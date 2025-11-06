// Name: core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_005a10e0
// Address: 005a10e0
// Address Range: [[005a10e0, 005a1155]]
// Convention: __cdecl
// Signature: float core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_005a10e0(CDeformableModelInstance * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction)
// Cross-references:
//   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 (00409470) at 00409787 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0059cba0
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0

#include "nocturne.h"

float __cdecl
core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_005a10e0
          (CDeformableModelInstance *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

{
  CDeformableModel *pCVar1;
  float fVar2;
  int lod_index;
  byte *unaff_EBP;
  int in_stack_00000010;
  CVector3f *in_stack_00000014;
  CVector3f *ray_direction_00;
  CVector3i *skinned_vertices;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  lod_index = pCVar1->num_lods + -2;
  if (lod_index < 0) {
    lod_index = 0;
  }
  if (lod_index != this_ptr->cached_skinned_lod_index) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(this_ptr,lod_index);
  }
  skinned_vertices = (CVector3i *)this_ptr->part_visibility_flags;
  ray_direction_00 = (CVector3f *)this_ptr->skinned_vertices_buffer;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  fVar2 = core_skeleton_cpp_CDeformableModel_exactRayTrace_FUN_0059cba0
                    (pCVar1,in_stack_00000010,in_stack_00000014,ray_direction_00,skinned_vertices,
                     unaff_EBP);
  return fVar2;
}


// Assembly code:
// 005a10e0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_005a10e0
// 005a10e1: PUSH ESI
// 005a10e2: PUSH EDI
// 005a10e3: PUSH EBP
// 005a10e4: SUB ESP,0x8
// 005a10e7: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005a10eb: PUSH ESI
// 005a10ec: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005a10f1: MOV EBX,dword ptr [EAX]
// 005a10f3: SUB EBX,0x2
// 005a10f6: ADD ESP,0x4
// 005a10f9: TEST EBX,EBX
// 005a10fb: JL 0x005a1146
//   XREF to: 005a1146 (CONDITIONAL_JUMP)
// 005a10fd: CMP EBX,dword ptr [ESI + 0x2230]
//   Label: LAB_005a10fd
// 005a1103: JNZ 0x005a114a
//   XREF to: 005a114a (CONDITIONAL_JUMP)
// 005a1105: LEA EAX,[ESI + 0x2140]
//   Label: LAB_005a1105
// 005a110b: PUSH EAX
// 005a110c: MOV ECX,dword ptr [ESI + 0x2234]
// 005a1112: PUSH ECX
// 005a1113: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 005a1117: PUSH EDI
// 005a1118: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 005a111c: PUSH EBP
// 005a111d: PUSH EBX
// 005a111e: PUSH ESI
// 005a111f: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005a1124: ADD ESP,0x4
// 005a1127: PUSH EAX
// 005a1128: CALL core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0059cba0
//   XREF to: 0059cba0 (UNCONDITIONAL_CALL)
// 005a112d: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a1131: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 005a1135: ADD ESP,0x18
// 005a1138: FSTP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005a113b: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005a113e: ADD ESP,0x8
// 005a1141: POP EBP
// 005a1142: POP EDI
// 005a1143: POP ESI
// 005a1144: POP EBX
// 005a1145: RET
// 005a1146: XOR EBX,EBX
//   Label: LAB_005a1146
// 005a1148: JMP 0x005a10fd
//   XREF to: 005a10fd (UNCONDITIONAL_JUMP)
// 005a114a: PUSH EBX
//   Label: LAB_005a114a
// 005a114b: PUSH ESI
// 005a114c: CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
//   XREF to: 005a01d0 (UNCONDITIONAL_CALL)
// 005a1151: ADD ESP,0x8
// 005a1154: JMP 0x005a1105
//   XREF to: 005a1105 (UNCONDITIONAL_JUMP)
