// Name: core_vehicle.cpp_CVehicle_FUN_005e86d0
// Address: 005e86d0
// Address Range: [[005e86d0, 005e871d]]
// Convention: __cdecl
// Signature: int * core_vehicle.cpp_CVehicle_FUN_005e86d0(CVehicle * this_ptr)
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

int * __cdecl core_vehicle_cpp_CVehicle_FUN_005e86d0(CVehicle *this_ptr)

{
  CVector3f *pCVar1;
  CKeyFramedModel *pCVar2;
  float *in_stack_00000008;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)this_ptr->field1_0x158);
  pCVar1 = pCVar2->frame_bounds;
  *in_stack_00000008 = pCVar1->x;
  in_stack_00000008[1] = pCVar1->y;
  in_stack_00000008[2] = pCVar1->z;
  in_stack_00000008[3] = pCVar1[1].x;
  in_stack_00000008[4] = pCVar1[1].y;
  in_stack_00000008[5] = pCVar1[1].z;
  return (int *)in_stack_00000008;
}


// Assembly code:
// 005e86d0: PUSH EBX
//   Label: core_vehicle.cpp_CVehicle_FUN_005e86d0
// 005e86d1: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005e86d5: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e86d9: ADD EAX,0x158
// 005e86de: PUSH EAX
// 005e86df: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 005e86e4: MOV EAX,dword ptr [EAX + 0x5690]
// 005e86ea: MOV EDX,dword ptr [EAX]
// 005e86ec: LEA ECX,[EAX + 0x4]
// 005e86ef: MOV dword ptr [EBX],EDX
// 005e86f1: LEA EDX,[EBX + 0x4]
// 005e86f4: MOV ECX,dword ptr [ECX]
// 005e86f6: MOV dword ptr [EDX],ECX
// 005e86f8: LEA ECX,[EAX + 0x8]
// 005e86fb: MOV ECX,dword ptr [ECX]
// 005e86fd: MOV dword ptr [EDX + 0x4],ECX
// 005e8700: MOV ECX,dword ptr [EAX + 0xc]
// 005e8703: ADD EAX,0xc
// 005e8706: MOV dword ptr [EDX + 0x8],ECX
// 005e8709: LEA ECX,[EAX + 0x4]
// 005e870c: MOV ECX,dword ptr [ECX]
// 005e870e: MOV dword ptr [EDX + 0xc],ECX
// 005e8711: MOV EAX,dword ptr [EAX + 0x8]
// 005e8714: ADD ESP,0x4
// 005e8717: MOV dword ptr [EDX + 0x10],EAX
// 005e871a: MOV EAX,EBX
// 005e871c: POP EBX
// 005e871d: RET
