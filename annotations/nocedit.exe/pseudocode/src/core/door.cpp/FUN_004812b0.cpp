// Name: core_door.cpp_FUN_004812b0
// Address: 004812b0
// Address Range: [[004812b0, 0048131b]]
// Convention: __cdecl
// Signature: int core_door.cpp_FUN_004812b0(void)
// Cross-references:
//   core_door.cpp_CDoor_getPropertyList_FUN_00481320 (00481320) at 00481377 [DATA]
// Globals:
//   undefined4 g_CDoorClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_door.cpp_CDoor_reposition_FUN_0047fd20

#include "nocturne.h"

int __cdecl core_door_cpp_FUN_004812b0(void)

{
  CDoor *this_ptr;
  CDemonActor *in_stack_00000004;
  
  this_ptr = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c790
                                (in_stack_00000004,g_CDoorClassInfo.name_hash);
  if (this_ptr->door_state == 2) {
    this_ptr->param = 0.0;
    this_ptr->door_state = 0;
    core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
    return 1;
  }
  this_ptr->door_state = 2;
  this_ptr->param = this_ptr->max_param;
  core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
  return 1;
}


// Assembly code:
// 004812b0: PUSH EBX
//   Label: core_door.cpp_FUN_004812b0
// 004812b1: MOV EDX,dword ptr [0x02c14d14]
//   XREF to: 02c14d14 (READ)
// 004812b7: PUSH EDX
// 004812b8: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004812bc: PUSH ECX
// 004812bd: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004812c2: ADD ESP,0x8
// 004812c5: MOV EBX,dword ptr [EAX + 0x2e0]
// 004812cb: MOV EDX,EAX
// 004812cd: CMP EBX,0x2
// 004812d0: JNZ 0x004812f6
//   XREF to: 004812f6 (CONDITIONAL_JUMP)
// 004812d2: MOV dword ptr [EAX + 0x9ac],0x0
// 004812dc: MOV dword ptr [EAX + 0x2e0],0x0
// 004812e6: PUSH EDX
// 004812e7: CALL core_door.cpp_CDoor_reposition_FUN_0047fd20
//   XREF to: 0047fd20 (UNCONDITIONAL_CALL)
// 004812ec: MOV EAX,0x1
// 004812f1: ADD ESP,0x4
// 004812f4: POP EBX
// 004812f5: RET
// 004812f6: MOV dword ptr [EAX + 0x2e0],0x2
//   Label: LAB_004812f6
// 00481300: MOV ECX,dword ptr [EAX + 0x9b0]
// 00481306: MOV dword ptr [EAX + 0x9ac],ECX
// 0048130c: PUSH EDX
// 0048130d: CALL core_door.cpp_CDoor_reposition_FUN_0047fd20
//   XREF to: 0047fd20 (UNCONDITIONAL_CALL)
// 00481312: MOV EAX,0x1
// 00481317: ADD ESP,0x4
// 0048131a: POP EBX
// 0048131b: RET
