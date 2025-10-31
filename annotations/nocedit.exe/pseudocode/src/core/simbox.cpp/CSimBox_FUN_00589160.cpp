// Name: core_simbox.cpp_CSimBox_FUN_00589160
// Address: 00589160
// Address Range: [[00589160, 005891ad]]
// Convention: __cdecl
// Signature: float * core_simbox.cpp_CSimBox_FUN_00589160(CSimBox * this_ptr)
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

float * __cdecl core_simbox_cpp_CSimBox_FUN_00589160(CSimBox *this_ptr)

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
  return in_stack_00000008;
}


// Assembly code:
// 00589160: PUSH EBX
//   Label: core_simbox.cpp_CSimBox_FUN_00589160
// 00589161: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00589165: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00589169: ADD EAX,0x158
// 0058916e: PUSH EAX
// 0058916f: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00589174: MOV EAX,dword ptr [EAX + 0x5690]
// 0058917a: MOV EDX,dword ptr [EAX]
// 0058917c: LEA ECX,[EAX + 0x4]
// 0058917f: MOV dword ptr [EBX],EDX
// 00589181: LEA EDX,[EBX + 0x4]
// 00589184: MOV ECX,dword ptr [ECX]
// 00589186: MOV dword ptr [EDX],ECX
// 00589188: LEA ECX,[EAX + 0x8]
// 0058918b: MOV ECX,dword ptr [ECX]
// 0058918d: MOV dword ptr [EDX + 0x4],ECX
// 00589190: MOV ECX,dword ptr [EAX + 0xc]
// 00589193: ADD EAX,0xc
// 00589196: MOV dword ptr [EDX + 0x8],ECX
// 00589199: LEA ECX,[EAX + 0x4]
// 0058919c: MOV ECX,dword ptr [ECX]
// 0058919e: MOV dword ptr [EDX + 0xc],ECX
// 005891a1: MOV EAX,dword ptr [EAX + 0x8]
// 005891a4: ADD ESP,0x4
// 005891a7: MOV dword ptr [EDX + 0x10],EAX
// 005891aa: MOV EAX,EBX
// 005891ac: POP EBX
// 005891ad: RET
