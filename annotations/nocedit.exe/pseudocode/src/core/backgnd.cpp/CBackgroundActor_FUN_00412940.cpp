// Name: core_backgnd.cpp_CBackgroundActor_FUN_00412940
// Address: 00412940
// Address Range: [[00412940, 0041298d]]
// Convention: __cdecl
// Signature: int * core_backgnd.cpp_CBackgroundActor_FUN_00412940(CBackgroundActor * this_ptr)
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

int * __cdecl core_backgnd_cpp_CBackgroundActor_FUN_00412940(CBackgroundActor *this_ptr)

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
// 00412940: PUSH EBX
//   Label: core_backgnd.cpp_CBackgroundActor_FUN_00412940
// 00412941: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00412945: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00412949: ADD EAX,0x158
// 0041294e: PUSH EAX
// 0041294f: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00412954: MOV EAX,dword ptr [EAX + 0x5690]
// 0041295a: MOV EDX,dword ptr [EAX]
// 0041295c: LEA ECX,[EAX + 0x4]
// 0041295f: MOV dword ptr [EBX],EDX
// 00412961: LEA EDX,[EBX + 0x4]
// 00412964: MOV ECX,dword ptr [ECX]
// 00412966: MOV dword ptr [EDX],ECX
// 00412968: LEA ECX,[EAX + 0x8]
// 0041296b: MOV ECX,dword ptr [ECX]
// 0041296d: MOV dword ptr [EDX + 0x4],ECX
// 00412970: MOV ECX,dword ptr [EAX + 0xc]
// 00412973: ADD EAX,0xc
// 00412976: MOV dword ptr [EDX + 0x8],ECX
// 00412979: LEA ECX,[EAX + 0x4]
// 0041297c: MOV ECX,dword ptr [ECX]
// 0041297e: MOV dword ptr [EDX + 0xc],ECX
// 00412981: MOV EAX,dword ptr [EAX + 0x8]
// 00412984: ADD ESP,0x4
// 00412987: MOV dword ptr [EDX + 0x10],EAX
// 0041298a: MOV EAX,EBX
// 0041298c: POP EBX
// 0041298d: RET
