// Name: core_skeleton.cpp_FUN_005a2060
// Address: 005a2060
// Address Range: [[005a2060, 005a209f]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_FUN_005a2060()
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
//   core_skeledit.cpp_DefinitelyRelatedToEditorMode_FUN_005968b0 (005968b0) at 00596a79 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_FUN_005a2060(undefined4 param_1) */

undefined8 core_skeleton_cpp_FUN_005a2060(void)

{
  undefined4 *in_stack_00000004;
  
  in_stack_00000004[2] = 0;
  in_stack_00000004[1] = in_stack_00000004[2];
  *in_stack_00000004 = in_stack_00000004[1];
  in_stack_00000004[5] = 0;
  in_stack_00000004[4] = in_stack_00000004[5];
  in_stack_00000004[3] = in_stack_00000004[4];
  in_stack_00000004[6] = 0x41e00000;
  return CONCAT44(in_stack_00000004,in_stack_00000004 + 3);
}


// Assembly code:
// 005a2060: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_skeleton.cpp_FUN_005a2060
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
