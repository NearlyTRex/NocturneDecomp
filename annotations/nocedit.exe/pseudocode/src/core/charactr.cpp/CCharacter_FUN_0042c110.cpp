// Name: core_charactr.cpp_CCharacter_FUN_0042c110
// Address: 0042c110
// Address Range: [[0042c110, 0042c176]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042c110(CCharacter * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408f10

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042c110(CCharacter *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000010;
  char *in_stack_00000030;
  
  core_actor_cpp_CDemonActor_FUN_00408f10(&this_ptr->base_actor);
  iVar1 = (*((this_ptr->base_actor).metadata.vtable)->testCylinderCollision)
                    (&this_ptr->base_actor,(SCollisionReturnInfo *)&stack0xfffffff4,
                     in_stack_00000010);
  if (iVar1 == 0) {
    in_stack_00000030[4] = '\0';
    in_stack_00000030[5] = '\0';
    in_stack_00000030[6] = '\0';
    in_stack_00000030[7] = '\0';
    return 0;
  }
  (*(this_ptr->base_actor).metadata.vtable[1].playAmbientSoundWithVolume)
            (&this_ptr->base_actor,in_stack_00000030,(float)in_stack_00000010);
  return 1;
}


// Assembly code:
// 0042c110: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042c110
// 0042c111: SUB ESP,0xc
// 0042c114: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042c118: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0042c11c: PUSH EDX
// 0042c11d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x10] (DATA)
// 0042c121: PUSH EAX
// 0042c122: PUSH EBX
// 0042c123: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 0042c128: ADD ESP,0xc
// 0042c12b: MOV EDX,ESP
// 0042c12d: PUSH dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0042c131: PUSH EDX
// 0042c132: MOV EAX,dword ptr [EBX + 0x154]
// 0042c138: PUSH EBX
// 0042c139: CALL dword ptr [EAX + 0xa4]
// 0042c13f: ADD ESP,0xc
// 0042c142: TEST EAX,EAX
// 0042c144: JNZ 0x0042c158
//   XREF to: 0042c158 (CONDITIONAL_JUMP)
// 0042c146: MOV EAX,dword ptr [ESP + 0x20]
// 0042c14a: MOV dword ptr [EAX + 0x4],0x0
// 0042c151: XOR EAX,EAX
// 0042c153: ADD ESP,0xc
// 0042c156: POP EBX
// 0042c157: RET
// 0042c158: MOV ECX,dword ptr [ESP + 0x20]
//   Label: LAB_0042c158
// 0042c15c: PUSH ECX
// 0042c15d: MOV EAX,dword ptr [EBX + 0x154]
// 0042c163: PUSH EBX
// 0042c164: CALL dword ptr [EAX + 0x11c]
// 0042c16a: MOV EAX,0x1
// 0042c16f: ADD ESP,0x8
// 0042c172: ADD ESP,0xc
// 0042c175: POP EBX
// 0042c176: RET
