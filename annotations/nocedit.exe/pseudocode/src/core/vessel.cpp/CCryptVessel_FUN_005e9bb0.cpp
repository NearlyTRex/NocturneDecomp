// Name: core_vessel.cpp_CCryptVessel_FUN_005e9bb0
// Address: 005e9bb0
// Address Range: [[005e9bb0, 005e9bfd]]
// Convention: __cdecl
// Signature: int * core_vessel.cpp_CCryptVessel_FUN_005e9bb0(CCryptVessel * this_ptr)
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

int * __cdecl core_vessel_cpp_CCryptVessel_FUN_005e9bb0(CCryptVessel *this_ptr)

{
  CVector3f *pCVar1;
  CKeyFramedModel *pCVar2;
  float *in_stack_00000008;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)&this_ptr->model_name);
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
// 005e9bb0: PUSH EBX
//   Label: core_vessel.cpp_CCryptVessel_FUN_005e9bb0
// 005e9bb1: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005e9bb5: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e9bb9: ADD EAX,0x158
// 005e9bbe: PUSH EAX
// 005e9bbf: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 005e9bc4: MOV EAX,dword ptr [EAX + 0x5690]
// 005e9bca: MOV EDX,dword ptr [EAX]
// 005e9bcc: LEA ECX,[EAX + 0x4]
// 005e9bcf: MOV dword ptr [EBX],EDX
// 005e9bd1: LEA EDX,[EBX + 0x4]
// 005e9bd4: MOV ECX,dword ptr [ECX]
// 005e9bd6: MOV dword ptr [EDX],ECX
// 005e9bd8: LEA ECX,[EAX + 0x8]
// 005e9bdb: MOV ECX,dword ptr [ECX]
// 005e9bdd: MOV dword ptr [EDX + 0x4],ECX
// 005e9be0: MOV ECX,dword ptr [EAX + 0xc]
// 005e9be3: ADD EAX,0xc
// 005e9be6: MOV dword ptr [EDX + 0x8],ECX
// 005e9be9: LEA ECX,[EAX + 0x4]
// 005e9bec: MOV ECX,dword ptr [ECX]
// 005e9bee: MOV dword ptr [EDX + 0xc],ECX
// 005e9bf1: MOV EAX,dword ptr [EAX + 0x8]
// 005e9bf4: ADD ESP,0x4
// 005e9bf7: MOV dword ptr [EDX + 0x10],EAX
// 005e9bfa: MOV EAX,EBX
// 005e9bfc: POP EBX
// 005e9bfd: RET
