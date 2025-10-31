// Name: core_ammobox.cpp_CAmmoBox_FUN_004118b0
// Address: 004118b0
// Address Range: [[004118b0, 004118fd]]
// Convention: __cdecl
// Signature: int * core_ammobox.cpp_CAmmoBox_FUN_004118b0(CAmmoBox * this_ptr)
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

int * __cdecl core_ammobox_cpp_CAmmoBox_FUN_004118b0(CAmmoBox *this_ptr)

{
  CVector3f *pCVar1;
  CKeyFramedModel *pCVar2;
  float *in_stack_00000008;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)this_ptr->model_name);
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
// 004118b0: PUSH EBX
//   Label: core_ammobox.cpp_CAmmoBox_FUN_004118b0
// 004118b1: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004118b5: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004118b9: ADD EAX,0x158
// 004118be: PUSH EAX
// 004118bf: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004118c4: MOV EAX,dword ptr [EAX + 0x5690]
// 004118ca: MOV EDX,dword ptr [EAX]
// 004118cc: LEA ECX,[EAX + 0x4]
// 004118cf: MOV dword ptr [EBX],EDX
// 004118d1: LEA EDX,[EBX + 0x4]
// 004118d4: MOV ECX,dword ptr [ECX]
// 004118d6: MOV dword ptr [EDX],ECX
// 004118d8: LEA ECX,[EAX + 0x8]
// 004118db: MOV ECX,dword ptr [ECX]
// 004118dd: MOV dword ptr [EDX + 0x4],ECX
// 004118e0: MOV ECX,dword ptr [EAX + 0xc]
// 004118e3: ADD EAX,0xc
// 004118e6: MOV dword ptr [EDX + 0x8],ECX
// 004118e9: LEA ECX,[EAX + 0x4]
// 004118ec: MOV ECX,dword ptr [ECX]
// 004118ee: MOV dword ptr [EDX + 0xc],ECX
// 004118f1: MOV EAX,dword ptr [EAX + 0x8]
// 004118f4: ADD ESP,0x4
// 004118f7: MOV dword ptr [EDX + 0x10],EAX
// 004118fa: MOV EAX,EBX
// 004118fc: POP EBX
// 004118fd: RET
