// Name: core_actor.cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0
// Address: 0040cfe0
// Address Range: [[0040cfe0, 0040cff8]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0(CDemonActor * this_ptr, int deleted_area_index)

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0(CDemonActor *this_ptr,int deleted_area_index)

{
  int iVar1;
  
  iVar1 = (this_ptr->location).area_id;
  if (iVar1 <= deleted_area_index) {
    return;
  }
  (this_ptr->location).area_id = iVar1 + -1;
  return;
}


// Assembly code:
// 0040cfe0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_actor.cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0
//   XREF to: Stack[0x4] (READ)
// 0040cfe4: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0040cfe8: MOV EDX,dword ptr [EAX + 0x2c]
// 0040cfeb: CMP EDX,ECX
// 0040cfed: JG 0x0040cff0
//   XREF to: 0040cff0 (CONDITIONAL_JUMP)
// 0040cfef: RET
// 0040cff0: PUSH EBX
//   Label: LAB_0040cff0
// 0040cff1: LEA EBX,[EDX + -0x1]
// 0040cff4: MOV dword ptr [EAX + 0x2c],EBX
// 0040cff7: POP EBX
// 0040cff8: RET
