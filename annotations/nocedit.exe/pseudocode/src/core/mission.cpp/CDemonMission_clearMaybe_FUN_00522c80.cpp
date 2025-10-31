// Name: core_mission.cpp_CDemonMission_clearMaybe_FUN_00522c80
// Address: 00522c80
// Address Range: [[00522c80, 00522d11]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_clearMaybe_FUN_00522c80(CDemonMission * this_ptr)
// Cross-references:
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 0050811d [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053cde5 [UNCONDITIONAL_CALL]
// Globals:
//   undefined1 DAT_02f35f10

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_clearMaybe_FUN_00522c80(CDemonMission *this_ptr)

{
  this_ptr->field0_0x0[4] = '\0';
  this_ptr->field0_0x0[5] = '\0';
  this_ptr->field0_0x0[6] = '\0';
  this_ptr->field0_0x0[7] = '\0';
  this_ptr->first_actor = (CDemonActor *)0x0;
  this_ptr->field6_0x54c[0] = '\0';
  this_ptr->field6_0x54c[1] = '\0';
  this_ptr->field6_0x54c[2] = '\0';
  this_ptr->field6_0x54c[3] = '\0';
  this_ptr->field6_0x54c[0x10] = -1;
  this_ptr->field6_0x54c[0x11] = -1;
  this_ptr->field6_0x54c[0x12] = -1;
  this_ptr->field6_0x54c[0x13] = -1;
  this_ptr->field6_0x54c[0xc] = '\0';
  this_ptr->field6_0x54c[0xd] = '\0';
  this_ptr->field6_0x54c[0xe] = '\0';
  this_ptr->field6_0x54c[0xf] = '\0';
  *(undefined4 *)(this_ptr->field6_0x54c + 8) = *(undefined4 *)(this_ptr->field6_0x54c + 0xc);
  *(undefined4 *)(this_ptr->field6_0x54c + 4) = *(undefined4 *)(this_ptr->field6_0x54c + 8);
  this_ptr->field2_0xc[0x38] = '\0';
  this_ptr->field6_0x54c[0x14] = '\0';
  this_ptr->field6_0x54c[0x15] = '\0';
  this_ptr->field6_0x54c[0x16] = '\0';
  this_ptr->field6_0x54c[0x17] = '\0';
  this_ptr->field2_0xc[0x30] = '\0';
  this_ptr->field2_0xc[0x31] = '\0';
  this_ptr->field2_0xc[0x32] = '\0';
  this_ptr->field2_0xc[0x33] = '\0';
  this_ptr->field2_0xc[0x34] = '\0';
  this_ptr->field2_0xc[0x35] = '\0';
  this_ptr->field2_0xc[0x36] = '\0';
  this_ptr->field2_0xc[0x37] = '\0';
  this_ptr->field6_0x54c[0x338] = '\0';
  this_ptr->field6_0x54c[0x339] = '\0';
  this_ptr->field6_0x54c[0x33a] = '\0';
  this_ptr->field6_0x54c[0x33b] = '\0';
  this_ptr->field2_0xc[0] = '\0';
  this_ptr->field2_0xc[1] = '\0';
  this_ptr->field2_0xc[2] = '\0';
  this_ptr->field2_0xc[3] = '\0';
  this_ptr->field6_0x54c[0x33c] = '\0';
  this_ptr->field6_0x54c[0x33d] = '\0';
  this_ptr->field6_0x54c[0x33e] = '\0';
  this_ptr->field6_0x54c[0x33f] = '\0';
  this_ptr->actorCountMaybe = 0;
  this_ptr->mission_version_num = -1;
  DAT_02f35f10 = 0;
  return;
}


// Assembly code:
// 00522c80: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_mission.cpp_CDemonMission_clearMaybe_FUN_00522c80
//   XREF to: Stack[0x4] (READ)
// 00522c84: MOV dword ptr [EAX + 0x4],0x0
// 00522c8b: MOV dword ptr [EAX + 0x548],0x0
// 00522c95: MOV dword ptr [EAX + 0x54c],0x0
// 00522c9f: LEA EDX,[EAX + 0x550]
// 00522ca5: MOV dword ptr [EAX + 0x55c],0xffffffff
// 00522caf: MOV dword ptr [EDX + 0x8],0x0
// 00522cb6: MOV ECX,dword ptr [EDX + 0x8]
// 00522cb9: MOV dword ptr [EDX + 0x4],ECX
// 00522cbc: MOV ECX,dword ptr [EDX + 0x4]
// 00522cbf: MOV dword ptr [EDX],ECX
// 00522cc1: MOV byte ptr [EAX + 0x44],0x0
// 00522cc5: MOV dword ptr [EAX + 0x560],0x0
// 00522ccf: MOV dword ptr [EAX + 0x3c],0x0
// 00522cd6: MOV dword ptr [EAX + 0x40],0x0
// 00522cdd: MOV dword ptr [EAX + 0x884],0x0
// 00522ce7: MOV dword ptr [EAX + 0xc],0x0
// 00522cee: MOV dword ptr [EAX + 0x888],0x0
// 00522cf8: MOV dword ptr [EAX + 0x88c],0x0
// 00522d02: XOR DL,DL
// 00522d04: MOV dword ptr [EAX + 0x8],0xffffffff
// 00522d0b: MOV byte ptr [0x02f35f10],DL
//   XREF to: 02f35f10 (WRITE)
// 00522d11: RET
