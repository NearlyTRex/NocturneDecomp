// Name: core_door.cpp_CDoor_getBoundingBox_FUN_00480a50
// Address: 00480a50
// Address Range: [[00480a50, 00480a9d]]
// Convention: __cdecl
// Signature: CBoundingBox3D * core_door.cpp_CDoor_getBoundingBox_FUN_00480a50(CDoor * this_ptr, CBoundingBox3D * out_box)
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

CBoundingBox3D * __cdecl
core_door_cpp_CDoor_getBoundingBox_FUN_00480a50(CDoor *this_ptr,CBoundingBox3D *out_box)

{
  CVector3f *pCVar1;
  CKeyFramedModel *pCVar2;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar1 = pCVar2->frame_bounds;
  (out_box->min).x = pCVar1->x;
  (out_box->min).y = pCVar1->y;
  (out_box->min).z = pCVar1->z;
  (out_box->max).x = pCVar1[1].x;
  (out_box->max).y = pCVar1[1].y;
  (out_box->max).z = pCVar1[1].z;
  return out_box;
}


// Assembly code:
// 00480a50: PUSH EBX
//   Label: core_door.cpp_CDoor_getBoundingBox_FUN_00480a50
// 00480a51: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00480a55: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00480a59: ADD EAX,0x158
// 00480a5e: PUSH EAX
// 00480a5f: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00480a64: MOV EAX,dword ptr [EAX + 0x5690]
// 00480a6a: MOV EDX,dword ptr [EAX]
// 00480a6c: LEA ECX,[EAX + 0x4]
// 00480a6f: MOV dword ptr [EBX],EDX
// 00480a71: LEA EDX,[EBX + 0x4]
// 00480a74: MOV ECX,dword ptr [ECX]
// 00480a76: MOV dword ptr [EDX],ECX
// 00480a78: LEA ECX,[EAX + 0x8]
// 00480a7b: MOV ECX,dword ptr [ECX]
// 00480a7d: MOV dword ptr [EDX + 0x4],ECX
// 00480a80: MOV ECX,dword ptr [EAX + 0xc]
// 00480a83: ADD EAX,0xc
// 00480a86: MOV dword ptr [EDX + 0x8],ECX
// 00480a89: LEA ECX,[EAX + 0x4]
// 00480a8c: MOV ECX,dword ptr [ECX]
// 00480a8e: MOV dword ptr [EDX + 0xc],ECX
// 00480a91: MOV EAX,dword ptr [EAX + 0x8]
// 00480a94: ADD ESP,0x4
// 00480a97: MOV dword ptr [EDX + 0x10],EAX
// 00480a9a: MOV EAX,EBX
// 00480a9c: POP EBX
// 00480a9d: RET
