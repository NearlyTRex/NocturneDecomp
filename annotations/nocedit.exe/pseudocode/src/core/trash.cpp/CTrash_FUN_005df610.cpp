// Name: core_trash.cpp_CTrash_FUN_005df610
// Address: 005df610
// Address Range: [[005df610, 005df6ce]]
// Convention: __cdecl
// Signature: float * core_trash.cpp_CTrash_FUN_005df610(CTrash * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

float * __cdecl core_trash_cpp_CTrash_FUN_005df610(CTrash *this_ptr)

{
  CVector3f *pCVar1;
  CKeyFramedModel *pCVar2;
  BADSPACEBASE *in_ESP;
  float *in_stack_00000008;
  CVector3f local_1c;
  float local_10;
  float local_c;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)&this_ptr->model_name);
  pCVar1 = pCVar2->frame_bounds;
  *in_stack_00000008 = pCVar1->x;
  in_stack_00000008[1] = pCVar1->y;
  in_stack_00000008[2] = pCVar1->z;
  in_stack_00000008[3] = pCVar1[1].x;
  in_stack_00000008[4] = pCVar1[1].y;
  in_stack_00000008[5] = pCVar1[1].z;
  local_c = *(float *)(this_ptr->field4_0x2e0 + 0x30);
  local_10 = 0.0;
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
            (&this_ptr->base_actor,&local_1c,(CVector3f *)&local_10);
  *in_stack_00000008 = *in_stack_00000008 + local_1c.y;
  in_stack_00000008[1] = in_stack_00000008[1] + local_1c.z;
  in_stack_00000008[2] = in_stack_00000008[2] + local_10;
  in_stack_00000008[3] = in_stack_00000008[3] + local_1c.y;
  in_stack_00000008[4] = in_stack_00000008[4] + local_1c.z;
  in_stack_00000008[5] = in_stack_00000008[5] + local_10;
  return in_stack_00000008;
}


// Assembly code:
// 005df610: PUSH EBX
//   Label: core_trash.cpp_CTrash_FUN_005df610
// 005df611: PUSH ESI
// 005df612: SUB ESP,0x18
// 005df615: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005df619: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 005df61d: LEA EAX,[ESI + 0x158]
// 005df623: PUSH EAX
// 005df624: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 005df629: MOV EAX,dword ptr [EAX + 0x5690]
// 005df62f: MOV EDX,dword ptr [EAX]
// 005df631: LEA ECX,[EAX + 0x4]
// 005df634: MOV dword ptr [EBX],EDX
// 005df636: LEA EDX,[EBX + 0x4]
// 005df639: MOV ECX,dword ptr [ECX]
// 005df63b: MOV dword ptr [EDX],ECX
// 005df63d: LEA ECX,[EAX + 0x8]
// 005df640: MOV ECX,dword ptr [ECX]
// 005df642: MOV dword ptr [EDX + 0x4],ECX
// 005df645: MOV ECX,dword ptr [EAX + 0xc]
// 005df648: ADD EAX,0xc
// 005df64b: MOV dword ptr [EDX + 0x8],ECX
// 005df64e: LEA ECX,[EAX + 0x4]
// 005df651: MOV ECX,dword ptr [ECX]
// 005df653: MOV dword ptr [EDX + 0xc],ECX
// 005df656: MOV EAX,dword ptr [EAX + 0x8]
// 005df659: MOV dword ptr [EDX + 0x10],EAX
// 005df65c: ADD ESP,0x4
// 005df65f: MOV EAX,dword ptr [ESI + 0x310]
// 005df665: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005df669: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x14] (DATA)
// 005df66d: PUSH EAX
// 005df66e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x20] (DATA)
// 005df672: PUSH EAX
// 005df673: XOR EDX,EDX
// 005df675: PUSH ESI
// 005df676: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005df67a: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 005df67e: CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   XREF to: 00408ea0 (UNCONDITIONAL_CALL)
// 005df683: ADD ESP,0xc
// 005df686: FLD float ptr [EBX]
// 005df688: FADD float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005df68b: FLD float ptr [EBX + 0x4]
// 005df68e: FXCH
// 005df690: FSTP float ptr [EBX]
// 005df692: FADD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 005df696: FLD float ptr [EBX + 0x8]
// 005df699: FXCH
// 005df69b: FSTP float ptr [EBX + 0x4]
// 005df69e: FADD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005df6a2: LEA EAX,[EBX + 0xc]
// 005df6a5: FSTP float ptr [EBX + 0x8]
// 005df6a8: FLD float ptr [EAX]
// 005df6aa: FADD float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005df6ad: FLD float ptr [EAX + 0x4]
// 005df6b0: FXCH
// 005df6b2: FSTP float ptr [EAX]
// 005df6b4: FADD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 005df6b8: FLD float ptr [EAX + 0x8]
// 005df6bb: FXCH
// 005df6bd: FSTP float ptr [EAX + 0x4]
// 005df6c0: FADD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005df6c4: FSTP float ptr [EAX + 0x8]
// 005df6c7: MOV EAX,EBX
// 005df6c9: ADD ESP,0x18
// 005df6cc: POP ESI
// 005df6cd: POP EBX
// 005df6ce: RET
