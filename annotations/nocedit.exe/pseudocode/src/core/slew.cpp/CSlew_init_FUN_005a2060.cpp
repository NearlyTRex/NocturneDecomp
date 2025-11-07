// Name: core_slew.cpp_CSlew_init_FUN_005a2060
// Address: 005a2060
// Address Range: [[005a2060, 005a209f]]
// Convention: __cdecl
// Signature: void core_slew.cpp_CSlew_init_FUN_005a2060(CSlew * this_ptr)
// Cross-references:
//   core_course.cpp_FUN_00443bc0 (00443bc0) at 00443bf0 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da23f [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b440 (0050b440) at 0050b643 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e344 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 005392de [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581af2 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 005831c5 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057a97c [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50 (0057ae50) at 0057aecb [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057d707 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 00596a79 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_slew_cpp_CSlew_init_FUN_005a2060(CSlew *this_ptr)

{
  (this_ptr->position).z = 0.0;
  (this_ptr->position).y = (this_ptr->position).z;
  (this_ptr->position).x = (this_ptr->position).y;
  this_ptr->roll = 0.0;
  this_ptr->yaw = this_ptr->roll;
  this_ptr->pitch = this_ptr->yaw;
  this_ptr->slew_rate = 28.0;
  return;
}


// Assembly code:
// 005a2060: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_slew.cpp_CSlew_init_FUN_005a2060
//   XREF to: Stack[0x4] (READ)
// 005a2064: MOV dword ptr [EDX + 0x8],0x0
// 005a206b: LEA EAX,[EDX + 0xc]
// 005a206e: MOV ECX,dword ptr [EDX + 0x8]
// 005a2071: MOV dword ptr [EDX + 0x4],ECX
// 005a2074: MOV ECX,dword ptr [EDX + 0x4]
// 005a2077: MOV dword ptr [EDX],ECX
// 005a2079: MOV dword ptr [EAX + 0x8],0x0
// 005a2080: MOV ECX,dword ptr [EAX + 0x8]
// 005a2083: MOV dword ptr [EAX + 0x4],ECX
// 005a2086: MOV ECX,dword ptr [EAX + 0x4]
// 005a2089: MOV dword ptr [EAX],ECX
// 005a208b: MOV dword ptr [EDX + 0x18],0x41e00000
// 005a2092: LEA EAX,[EAX]
// 005a2098: LEA EDX,[EDX]
// 005a209e: MOV EAX,EAX
