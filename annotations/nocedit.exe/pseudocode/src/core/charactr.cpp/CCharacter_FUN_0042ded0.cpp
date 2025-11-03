// Name: core_charactr.cpp_CCharacter_FUN_0042ded0
// Address: 0042ded0
// Address Range: [[0042ded0, 0042df8c]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042ded0(CCharacter * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_00429820 (00429820) at 0042985d [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc849 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_FUN_005db9d0 (005db9d0) at 005dbb13 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042ded0(CCharacter *this_ptr)

{
  COrientation *pCVar1;
  char *pcVar2;
  CVector3f *pCVar3;
  BADSPACEBASE *in_ESP;
  float *in_stack_00000008;
  undefined1 local_20 [12];
  CVector3f local_14;
  
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (&this_ptr->base_actor,(CVector3f *)local_20,
             (CVector3f *)(this_ptr->model).field10_0x2254);
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (&this_ptr->base_actor,(CVector3f *)&local_14.y,
             (CVector3f *)(this_ptr->field2_0x240c + 0x10));
  pCVar1 = &(this_ptr->base_actor).orient;
  if (pCVar1 != (COrientation *)in_stack_00000008) {
    pCVar1->pitch = *in_stack_00000008;
    (this_ptr->base_actor).orient.bank = in_stack_00000008[1];
    (this_ptr->base_actor).orient.heading = in_stack_00000008[2];
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base_actor);
  pCVar3 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                     (&this_ptr->base_actor,(CVector3f *)&stack0xffffffd4,&local_14);
  pcVar2 = (this_ptr->model).field10_0x2254;
  if ((CVector3f *)pcVar2 != pCVar3) {
    *(float *)pcVar2 = pCVar3->x;
    *(float *)((this_ptr->model).field10_0x2254 + 4) = pCVar3->y;
    *(float *)((this_ptr->model).field10_0x2254 + 8) = pCVar3->z;
  }
  pCVar3 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                     (&this_ptr->base_actor,(CVector3f *)(local_20 + 4),
                      (CVector3f *)&stack0xfffffffc);
  if ((CVector3f *)(this_ptr->field2_0x240c + 0x10) == pCVar3) {
    return;
  }
  ((CVector3f *)(this_ptr->field2_0x240c + 0x10))->x = pCVar3->x;
  *(float *)(this_ptr->field2_0x240c + 0x14) = pCVar3->y;
  *(float *)(this_ptr->field2_0x240c + 0x18) = pCVar3->z;
  return;
}


// Assembly code:
// 0042ded0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042ded0
// 0042ded1: PUSH ESI
// 0042ded2: SUB ESP,0x30
// 0042ded5: MOV EBX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 0042ded9: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 0042dedd: LEA EAX,[EBX + 0x23ac]
// 0042dee3: PUSH EAX
// 0042dee4: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x20] (DATA)
// 0042dee8: PUSH EAX
// 0042dee9: PUSH EBX
// 0042deea: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 0042deef: ADD ESP,0xc
// 0042def2: LEA EAX,[EBX + 0x241c]
// 0042def8: PUSH EAX
// 0042def9: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x14] (DATA)
// 0042defd: PUSH EAX
// 0042defe: PUSH EBX
// 0042deff: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 0042df04: LEA EAX,[EBX + 0x30]
// 0042df07: ADD ESP,0xc
// 0042df0a: CMP EAX,ESI
// 0042df0c: JZ 0x0042df1e
//   XREF to: 0042df1e (CONDITIONAL_JUMP)
// 0042df0e: MOV EDX,dword ptr [ESI]
// 0042df10: MOV dword ptr [EAX],EDX
// 0042df12: MOV EDX,dword ptr [ESI + 0x4]
// 0042df15: MOV dword ptr [EAX + 0x4],EDX
// 0042df18: MOV EDX,dword ptr [ESI + 0x8]
// 0042df1b: MOV dword ptr [EAX + 0x8],EDX
// 0042df1e: PUSH EBX
//   Label: LAB_0042df1e
// 0042df1f: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 0042df24: ADD ESP,0x4
// 0042df27: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x20] (DATA)
// 0042df2b: PUSH EAX
// 0042df2c: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x38] (DATA)
// 0042df30: PUSH EAX
// 0042df31: PUSH EBX
// 0042df32: CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   XREF to: 00408ea0 (UNCONDITIONAL_CALL)
// 0042df37: LEA EDX,[EBX + 0x23ac]
// 0042df3d: ADD ESP,0xc
// 0042df40: CMP EDX,EAX
// 0042df42: JZ 0x0042df54
//   XREF to: 0042df54 (CONDITIONAL_JUMP)
// 0042df44: MOV ECX,dword ptr [EAX]
// 0042df46: MOV dword ptr [EDX],ECX
// 0042df48: MOV ECX,dword ptr [EAX + 0x4]
// 0042df4b: MOV dword ptr [EDX + 0x4],ECX
// 0042df4e: MOV ECX,dword ptr [EAX + 0x8]
// 0042df51: MOV dword ptr [EDX + 0x8],ECX
// 0042df54: LEA EAX,[ESP + 0x24]
//   Label: LAB_0042df54
//   XREF to: Stack[-0x14] (DATA)
// 0042df58: PUSH EAX
// 0042df59: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x2c] (DATA)
// 0042df5d: PUSH EAX
// 0042df5e: PUSH EBX
// 0042df5f: CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   XREF to: 00408ea0 (UNCONDITIONAL_CALL)
// 0042df64: ADD EBX,0x241c
// 0042df6a: ADD ESP,0xc
// 0042df6d: CMP EBX,EAX
// 0042df6f: JNZ 0x0042df77
//   XREF to: 0042df77 (CONDITIONAL_JUMP)
// 0042df71: ADD ESP,0x30
// 0042df74: POP ESI
// 0042df75: POP EBX
// 0042df76: RET
// 0042df77: MOV EDX,dword ptr [EAX]
//   Label: LAB_0042df77
// 0042df79: MOV dword ptr [EBX],EDX
// 0042df7b: MOV EDX,dword ptr [EAX + 0x4]
// 0042df7e: MOV dword ptr [EBX + 0x4],EDX
// 0042df81: MOV EDX,dword ptr [EAX + 0x8]
// 0042df84: MOV dword ptr [EBX + 0x8],EDX
// 0042df87: ADD ESP,0x30
// 0042df8a: POP ESI
// 0042df8b: POP EBX
// 0042df8c: RET
