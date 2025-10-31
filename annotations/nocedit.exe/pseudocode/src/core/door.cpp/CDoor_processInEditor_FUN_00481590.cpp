// Name: core_door.cpp_CDoor_processInEditor_FUN_00481590
// Address: 00481590
// Address Range: [[00481590, 00481620]]
// Convention: __cdecl
// Signature: void core_door.cpp_CDoor_processInEditor_FUN_00481590(CDoor * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_processInEditor_FUN_00481590(CDoor *this_ptr)

{
  CLocation *pCVar1;
  COrientation *pCVar2;
  
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base_actor);
  if (this_ptr->door_state == 0) {
    pCVar1 = &(this_ptr->base_actor).location;
    if ((CLocation *)&this_ptr->orig_pos != pCVar1) {
      (this_ptr->orig_pos).x = (pCVar1->position).x;
      (this_ptr->orig_pos).y = (this_ptr->base_actor).location.position.y;
      (this_ptr->orig_pos).z = (this_ptr->base_actor).location.position.z;
    }
    pCVar2 = &(this_ptr->base_actor).orient;
    if ((COrientation *)&this_ptr->orig_orient != pCVar2) {
      (this_ptr->orig_orient).x = pCVar2->pitch;
      (this_ptr->orig_orient).y = (this_ptr->base_actor).orient.bank;
      (this_ptr->orig_orient).z = (this_ptr->base_actor).orient.heading;
    }
  }
  if (this_ptr->door_state != 0) {
    if (this_ptr->door_state == 2) {
      this_ptr->param = this_ptr->max_param;
      return;
    }
    this_ptr->param = 0.0;
    this_ptr->door_state = 0;
    return;
  }
  this_ptr->param = 0.0;
  return;
}


// Assembly code:
// 00481590: PUSH EBX
//   Label: core_door.cpp_CDoor_processInEditor_FUN_00481590
// 00481591: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00481595: PUSH EBX
// 00481596: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 0048159b: MOV EDX,dword ptr [EBX + 0x2e0]
// 004815a1: ADD ESP,0x4
// 004815a4: TEST EDX,EDX
// 004815a6: JNZ 0x004815e2
//   XREF to: 004815e2 (CONDITIONAL_JUMP)
// 004815a8: LEA EAX,[EBX + 0x994]
// 004815ae: LEA EDX,[EBX + 0x20]
// 004815b1: CMP EAX,EDX
// 004815b3: JZ 0x004815c5
//   XREF to: 004815c5 (CONDITIONAL_JUMP)
// 004815b5: MOV ECX,dword ptr [EDX]
// 004815b7: MOV dword ptr [EAX],ECX
// 004815b9: MOV ECX,dword ptr [EDX + 0x4]
// 004815bc: MOV dword ptr [EAX + 0x4],ECX
// 004815bf: MOV ECX,dword ptr [EDX + 0x8]
// 004815c2: MOV dword ptr [EAX + 0x8],ECX
// 004815c5: LEA EAX,[EBX + 0x9a0]
//   Label: LAB_004815c5
// 004815cb: LEA EDX,[EBX + 0x30]
// 004815ce: CMP EAX,EDX
// 004815d0: JZ 0x004815e2
//   XREF to: 004815e2 (CONDITIONAL_JUMP)
// 004815d2: MOV ECX,dword ptr [EDX]
// 004815d4: MOV dword ptr [EAX],ECX
// 004815d6: MOV ECX,dword ptr [EDX + 0x4]
// 004815d9: MOV dword ptr [EAX + 0x4],ECX
// 004815dc: MOV ECX,dword ptr [EDX + 0x8]
// 004815df: MOV dword ptr [EAX + 0x8],ECX
// 004815e2: MOV EAX,dword ptr [EBX + 0x2e0]
//   Label: LAB_004815e2
// 004815e8: TEST EAX,EAX
// 004815ea: JBE 0x004815ff
//   XREF to: 004815ff (CONDITIONAL_JUMP)
// 004815ec: CMP EAX,0x2
// 004815ef: JNZ 0x0048160b
//   XREF to: 0048160b (CONDITIONAL_JUMP)
// 004815f1: MOV EAX,dword ptr [EBX + 0x9b0]
// 004815f7: MOV dword ptr [EBX + 0x9ac],EAX
// 004815fd: POP EBX
// 004815fe: RET
// 004815ff: MOV dword ptr [EBX + 0x9ac],0x0
//   Label: LAB_004815ff
// 00481609: POP EBX
// 0048160a: RET
// 0048160b: MOV dword ptr [EBX + 0x9ac],0x0
//   Label: LAB_0048160b
// 00481615: MOV dword ptr [EBX + 0x2e0],0x0
// 0048161f: POP EBX
// 00481620: RET
