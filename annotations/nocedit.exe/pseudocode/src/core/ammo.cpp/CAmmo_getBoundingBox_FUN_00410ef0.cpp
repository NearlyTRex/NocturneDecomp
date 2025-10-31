// Name: core_ammo.cpp_CAmmo_getBoundingBox_FUN_00410ef0
// Address: 00410ef0
// Address Range: [[00410ef0, 00410f3d]]
// Convention: __cdecl
// Signature: CBoundingBox3D * core_ammo.cpp_CAmmo_getBoundingBox_FUN_00410ef0(CAmmo * this_ptr, CBoundingBox3D * out_box)
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

CBoundingBox3D * __cdecl
core_ammo_cpp_CAmmo_getBoundingBox_FUN_00410ef0(CAmmo *this_ptr,CBoundingBox3D *out_box)

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
// 00410ef0: PUSH EBX
//   Label: core_ammo.cpp_CAmmo_getBoundingBox_FUN_00410ef0
// 00410ef1: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00410ef5: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00410ef9: ADD EAX,0x158
// 00410efe: PUSH EAX
// 00410eff: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00410f04: MOV EAX,dword ptr [EAX + 0x5690]
// 00410f0a: MOV EDX,dword ptr [EAX]
// 00410f0c: LEA ECX,[EAX + 0x4]
// 00410f0f: MOV dword ptr [EBX],EDX
// 00410f11: LEA EDX,[EBX + 0x4]
// 00410f14: MOV ECX,dword ptr [ECX]
// 00410f16: MOV dword ptr [EDX],ECX
// 00410f18: LEA ECX,[EAX + 0x8]
// 00410f1b: MOV ECX,dword ptr [ECX]
// 00410f1d: MOV dword ptr [EDX + 0x4],ECX
// 00410f20: MOV ECX,dword ptr [EAX + 0xc]
// 00410f23: ADD EAX,0xc
// 00410f26: MOV dword ptr [EDX + 0x8],ECX
// 00410f29: LEA ECX,[EAX + 0x4]
// 00410f2c: MOV ECX,dword ptr [ECX]
// 00410f2e: MOV dword ptr [EDX + 0xc],ECX
// 00410f31: MOV EAX,dword ptr [EAX + 0x8]
// 00410f34: ADD ESP,0x4
// 00410f37: MOV dword ptr [EDX + 0x10],EAX
// 00410f3a: MOV EAX,EBX
// 00410f3c: POP EBX
// 00410f3d: RET
