// Name: core_mission.cpp_CDemonMission_FUN_00523cc0
// Address: 00523cc0
// Address Range: [[00523cc0, 00523ce2]]
// Convention: __cdecl
// Signature: int core_mission.cpp_CDemonMission_FUN_00523cc0(CDemonMission * this_ptr)
// Cross-references:
//   core_mission.cpp_CDemonMission_writeFile_FUN_00523600 (00523600) at 00523773 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b510 (0053b510) at 0053b5c7 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_RelevantActorsToTesting_FUN_0053b030 (0053b030) at 0053b0e7 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053ce7d [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl core_mission_cpp_CDemonMission_FUN_00523cc0(CDemonMission *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  for (pCVar1 = this_ptr->first_actor; pCVar1 != (CDemonActor *)0x0; pCVar1 = pCVar1->next_actor) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


// Assembly code:
// 00523cc0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_mission.cpp_CDemonMission_FUN_00523cc0
//   XREF to: Stack[0x4] (READ)
// 00523cc4: MOV EAX,dword ptr [EAX + 0x548]
// 00523cca: XOR EDX,EDX
// 00523ccc: TEST EAX,EAX
// 00523cce: JZ 0x00523ce0
//   XREF to: 00523ce0 (CONDITIONAL_JUMP)
// 00523cd0: MOV EAX,dword ptr [EAX + 0x14c]
//   Label: LAB_00523cd0
// 00523cd6: INC EDX
// 00523cd7: TEST EAX,EAX
// 00523cd9: JNZ 0x00523cd0
//   XREF to: 00523cd0 (CONDITIONAL_JUMP)
// 00523cdb: LEA EAX,[EAX]
// 00523cde: MOV ECX,ECX
// 00523ce0: MOV EAX,EDX
//   Label: LAB_00523ce0
// 00523ce2: RET
