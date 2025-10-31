// Name: core_trash.cpp_CTrash_FUN_005df750
// Address: 005df750
// Address Range: [[005df750, 005df77e]]
// Convention: __cdecl
// Signature: void core_trash.cpp_CTrash_FUN_005df750(CTrash * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040

#include "nocturne.h"

void __cdecl core_trash_cpp_CTrash_FUN_005df750(CTrash *this_ptr)

{
  CLocation *pCVar1;
  
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base_actor);
  pCVar1 = &(this_ptr->base_actor).location;
  if ((CLocation *)&this_ptr->home_pos == pCVar1) {
    return;
  }
  (this_ptr->home_pos).x = (pCVar1->position).x;
  (this_ptr->home_pos).y = (this_ptr->base_actor).location.position.y;
  (this_ptr->home_pos).z = (this_ptr->base_actor).location.position.z;
  return;
}


// Assembly code:
// 005df750: PUSH EBX
//   Label: core_trash.cpp_CTrash_FUN_005df750
// 005df751: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005df755: PUSH EBX
// 005df756: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 005df75b: LEA EAX,[EBX + 0x2d4]
// 005df761: LEA EDX,[EBX + 0x20]
// 005df764: ADD ESP,0x4
// 005df767: CMP EAX,EDX
// 005df769: JNZ 0x005df76d
//   XREF to: 005df76d (CONDITIONAL_JUMP)
// 005df76b: POP EBX
// 005df76c: RET
// 005df76d: MOV ECX,dword ptr [EDX]
//   Label: LAB_005df76d
// 005df76f: MOV dword ptr [EAX],ECX
// 005df771: MOV ECX,dword ptr [EDX + 0x4]
// 005df774: MOV dword ptr [EAX + 0x4],ECX
// 005df777: MOV ECX,dword ptr [EDX + 0x8]
// 005df77a: MOV dword ptr [EAX + 0x8],ECX
// 005df77d: POP EBX
// 005df77e: RET
