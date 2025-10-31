// Name: core_door.cpp_CDoor_updateCollisionData_FUN_00481020
// Address: 00481020
// Address Range: [[00481020, 00481055]]
// Convention: __cdecl
// Signature: void core_door.cpp_CDoor_updateCollisionData_FUN_00481020(CDoor * this_ptr)
// Globals:
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_door.cpp_CDoor_reposition_FUN_0047fd20
//   core_setcolid.cpp_CDemonSet_FUN_00574440

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_updateCollisionData_FUN_00481020(CDoor *this_ptr)

{
  if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0) && (this_ptr->door_state == 0)) {
    core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
    core_setcolid_cpp_CDemonSet_FUN_00574440(g_CDemonSetPtr);
    return;
  }
  return;
}


// Assembly code:
// 00481020: PUSH EBX
//   Label: core_door.cpp_CDoor_updateCollisionData_FUN_00481020
// 00481021: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00481025: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (DATA)
//   XREF to: 0067d550 (READ)
// 0048102a: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 0048102e: JNZ 0x00481039
//   XREF to: 00481039 (CONDITIONAL_JUMP)
// 00481030: CMP dword ptr [EBX + 0x2e0],0x0
// 00481037: JZ 0x0048103b
//   XREF to: 0048103b (CONDITIONAL_JUMP)
// 00481039: POP EBX
//   Label: LAB_00481039
// 0048103a: RET
// 0048103b: PUSH EBX
//   Label: LAB_0048103b
// 0048103c: CALL core_door.cpp_CDoor_reposition_FUN_0047fd20
//   XREF to: 0047fd20 (UNCONDITIONAL_CALL)
// 00481041: ADD ESP,0x4
// 00481044: PUSH EBX
// 00481045: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0048104b: PUSH EBX
//   XREF to: 03114278 (DATA)
// 0048104c: CALL core_setcolid.cpp_CDemonSet_FUN_00574440
//   XREF to: 00574440 (UNCONDITIONAL_CALL)
// 00481051: ADD ESP,0x8
// 00481054: POP EBX
// 00481055: RET
