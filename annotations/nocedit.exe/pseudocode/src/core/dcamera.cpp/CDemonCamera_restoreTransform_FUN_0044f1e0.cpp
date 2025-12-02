// Name: core_dcamera.cpp_CDemonCamera_restoreTransform_FUN_0044f1e0
// Address: 0044f1e0
// Address Range: [[0044f1e0, 0044f287]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_restoreTransform_FUN_0044f1e0(CDemonCamera * this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_restoreTransform_FUN_0044f1e0(CDemonCamera *this_ptr)

{
  CVector3i *pCVar1;
  CVector3i *pCVar2;
  
  pCVar1 = &(this_ptr->base).position;
  pCVar2 = &(this_ptr->transform_state).saved_camera_position;
  (this_ptr->camera_origin).x = (this_ptr->transform_state).saved_camera_origin.x;
  (this_ptr->camera_origin).y = (this_ptr->transform_state).saved_camera_origin.y;
  (this_ptr->camera_origin).z = (this_ptr->transform_state).saved_camera_origin.z;
  if (pCVar1 != pCVar2) {
    pCVar1->x = pCVar2->x;
    (this_ptr->base).position.y = (this_ptr->transform_state).saved_camera_position.y;
    (this_ptr->base).position.z = (this_ptr->transform_state).saved_camera_position.z;
  }
  (this_ptr->source_matrix).m[0].x = (this_ptr->transform_state).saved_source_matrix.m[0].x;
  (this_ptr->source_matrix).m[0].y = (this_ptr->transform_state).saved_source_matrix.m[0].y;
  (this_ptr->source_matrix).m[0].z = (this_ptr->transform_state).saved_source_matrix.m[0].z;
  (this_ptr->source_matrix).m[1].x = (this_ptr->transform_state).saved_source_matrix.m[1].x;
  (this_ptr->source_matrix).m[1].y = (this_ptr->transform_state).saved_source_matrix.m[1].y;
  (this_ptr->source_matrix).m[1].z = (this_ptr->transform_state).saved_source_matrix.m[1].z;
  (this_ptr->source_matrix).m[2].x = (this_ptr->transform_state).saved_source_matrix.m[2].x;
  (this_ptr->source_matrix).m[2].y = (this_ptr->transform_state).saved_source_matrix.m[2].y;
  (this_ptr->source_matrix).m[2].z = (this_ptr->transform_state).saved_source_matrix.m[2].z;
  return;
}


// Assembly code:
// 0044f1e0: PUSH ESI
//   Label: core_dcamera.cpp_CDemonCamera_restoreTransform_FUN_0044f1e0
// 0044f1e1: PUSH EDI
// 0044f1e2: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0044f1e6: LEA ECX,[EAX + 0x4]
// 0044f1e9: LEA EDI,[EAX + 0x16c]
// 0044f1ef: LEA ESI,[EAX + 0x148c]
// 0044f1f5: LEA EDX,[EAX + 0x1498]
// 0044f1fb: MOVSD ES:EDI,ESI
// 0044f1fc: MOVSD ES:EDI,ESI
// 0044f1fd: MOVSD ES:EDI,ESI
// 0044f1fe: CMP ECX,EDX
// 0044f200: JNZ 0x0044f271
//   XREF to: 0044f271 (CONDITIONAL_JUMP)
// 0044f202: MOV EDX,dword ptr [EAX + 0x14a4]
//   Label: LAB_0044f202
// 0044f208: MOV dword ptr [EAX + 0x178],EDX
// 0044f20e: MOV EDX,dword ptr [EAX + 0x14a8]
// 0044f214: MOV dword ptr [EAX + 0x17c],EDX
// 0044f21a: MOV EDX,dword ptr [EAX + 0x14ac]
// 0044f220: MOV dword ptr [EAX + 0x180],EDX
// 0044f226: MOV EDX,dword ptr [EAX + 0x14b0]
// 0044f22c: MOV dword ptr [EAX + 0x184],EDX
// 0044f232: MOV EDX,dword ptr [EAX + 0x14b4]
// 0044f238: MOV dword ptr [EAX + 0x188],EDX
// 0044f23e: MOV EDX,dword ptr [EAX + 0x14b8]
// 0044f244: MOV dword ptr [EAX + 0x18c],EDX
// 0044f24a: MOV EDX,dword ptr [EAX + 0x14bc]
// 0044f250: MOV dword ptr [EAX + 0x190],EDX
// 0044f256: MOV EDX,dword ptr [EAX + 0x14c0]
// 0044f25c: MOV dword ptr [EAX + 0x194],EDX
// 0044f262: MOV EDX,dword ptr [EAX + 0x14c4]
// 0044f268: MOV dword ptr [EAX + 0x198],EDX
// 0044f26e: POP EDI
// 0044f26f: POP ESI
// 0044f270: RET
// 0044f271: PUSH EBX
//   Label: LAB_0044f271
// 0044f272: MOV EBX,dword ptr [EDX]
// 0044f274: MOV dword ptr [ECX],EBX
// 0044f276: MOV EBX,dword ptr [EDX + 0x4]
// 0044f279: MOV dword ptr [ECX + 0x4],EBX
// 0044f27c: MOV EBX,dword ptr [EDX + 0x8]
// 0044f27f: MOV dword ptr [ECX + 0x8],EBX
// 0044f282: POP EBX
// 0044f283: JMP 0x0044f202
//   XREF to: 0044f202 (UNCONDITIONAL_JUMP)
