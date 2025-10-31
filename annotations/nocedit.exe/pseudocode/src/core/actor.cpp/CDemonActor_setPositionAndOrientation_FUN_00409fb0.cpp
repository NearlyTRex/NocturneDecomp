// Name: core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0
// Address: 00409fb0
// Address Range: [[00409fb0, 0040a008]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0(CDemonActor * this_ptr, CVector3f * new_position, CVector3f * new_orientation)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_004285d0 (004285d0) at 004285f0 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_actor_cpp_006139ad
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   core_actor.cpp_CDemonActor_FUN_00408c10

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0
          (CDemonActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x56e);
  (this_ptr->location).position.x = new_position->x;
  (this_ptr->location).position.y = new_position->y;
  (this_ptr->location).position.z = new_position->z;
  if (&this_ptr->orient != (COrientation *)new_orientation) {
    (this_ptr->orient).pitch = new_orientation->x;
    (this_ptr->orient).bank = new_orientation->y;
    (this_ptr->orient).heading = new_orientation->z;
  }
  core_actor_cpp_CDemonActor_FUN_00408c10(this_ptr);
  return;
}


// Assembly code:
// 00409fb0: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0
// 00409fb1: PUSH ESI
// 00409fb2: PUSH EDI
// 00409fb3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00409fb7: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00409fbb: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00409fbf: PUSH 0x56e
// 00409fc4: PUSH 0x6139ad
//   XREF to: 006139ad (DATA)
// 00409fc9: PUSH EBX
// 00409fca: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00409fcf: LEA EAX,[EBX + 0x20]
// 00409fd2: MOV EDX,dword ptr [EDI]
// 00409fd4: MOV dword ptr [EAX],EDX
// 00409fd6: MOV EDX,dword ptr [EDI + 0x4]
// 00409fd9: MOV dword ptr [EAX + 0x4],EDX
// 00409fdc: MOV EDX,dword ptr [EDI + 0x8]
// 00409fdf: MOV dword ptr [EAX + 0x8],EDX
// 00409fe2: LEA EAX,[EBX + 0x30]
// 00409fe5: ADD ESP,0xc
// 00409fe8: CMP EAX,ESI
// 00409fea: JZ 0x00409ffc
//   XREF to: 00409ffc (CONDITIONAL_JUMP)
// 00409fec: MOV EDX,dword ptr [ESI]
// 00409fee: MOV dword ptr [EAX],EDX
// 00409ff0: MOV EDX,dword ptr [ESI + 0x4]
// 00409ff3: MOV dword ptr [EAX + 0x4],EDX
// 00409ff6: MOV EDX,dword ptr [ESI + 0x8]
// 00409ff9: MOV dword ptr [EAX + 0x8],EDX
// 00409ffc: PUSH EBX
//   Label: LAB_00409ffc
// 00409ffd: CALL core_actor.cpp_CDemonActor_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 0040a002: ADD ESP,0x4
// 0040a005: POP EDI
// 0040a006: POP ESI
// 0040a007: POP EBX
// 0040a008: RET
