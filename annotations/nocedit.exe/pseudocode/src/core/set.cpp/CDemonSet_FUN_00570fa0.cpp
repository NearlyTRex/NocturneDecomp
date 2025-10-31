// Name: core_set.cpp_CDemonSet_FUN_00570fa0
// Address: 00570fa0
// Address Range: [[00570fa0, 00570fbd]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_00570fa0(CDemonSet * this_ptr)
// Cross-references:
//   core_drip.cpp_FUN_0048e2a0 (0048e2a0) at 0048e438 [UNCONDITIONAL_CALL]
//   core_event.cpp_LargeEventHandler_FUN_004aacc0 (004aacc0) at 004ad3c4 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CExplosion_FUN_004c3970 (004c3970) at 004c39b6 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c8f50 (004c8f50) at 004c8fc6 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c8fd0 (004c8fd0) at 004c904a [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireball_onCollision_FUN_004c1690 (004c1690) at 004c1702 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonCamera g_CDemonCameraInstance
// Function calls:
//   core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00453fc0

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_00570fa0(CDemonSet *this_ptr)

{
  float in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000010;
  float in_stack_00000014;
  
  core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00453fc0
            (&g_CDemonCameraInstance,in_stack_00000008,in_stack_0000000c,in_stack_00000010,
             in_stack_00000014);
  return;
}


// Assembly code:
// 00570fa0: PUSH dword ptr [ESP + 0x14]
//   Label: core_set.cpp_CDemonSet_FUN_00570fa0
//   XREF to: Stack[0x14] (READ)
// 00570fa4: PUSH dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 00570fa8: PUSH dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00570fac: PUSH dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00570fb0: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 00570fb5: CALL core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00453fc0
//   XREF to: 00453fc0 (UNCONDITIONAL_CALL)
// 00570fba: ADD ESP,0x14
// 00570fbd: RET
