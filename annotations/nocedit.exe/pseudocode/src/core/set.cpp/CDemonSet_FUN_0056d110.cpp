// Name: core_set.cpp_CDemonSet_FUN_0056d110
// Address: 0056d110
// Address Range: [[0056d110, 0056d13d]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056d110(CDemonSet * this_ptr)
// Cross-references:
//   core_boxactor.cpp_FUN_00422a50 (00422a50) at 00422b74 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8070 (004a8070) at 004a81f9 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireball_process_FUN_004c0b30 (004c0b30) at 004c0be1 [UNCONDITIONAL_CALL]
//   core_fire.cpp_FUN_004c1940 (004c1940) at 004c1983 [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_FUN_00501710 (00501710) at 005017a6 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee4a0 (005ee4a0) at 005ee621 [UNCONDITIONAL_CALL]
// Globals:
//   int g_CoronaGlobeCount

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056d110(CDemonSet *this_ptr)

{
  int in_stack_00000008;
  
  if ((0xff < *(int *)(in_stack_00000008 + 0xc)) && (g_CoronaGlobeCount < 100)) {
    (&g_CoronaGlobeCount)[g_CoronaGlobeCount + 1] = in_stack_00000008;
    g_CoronaGlobeCount = g_CoronaGlobeCount + 1;
    return;
  }
  return;
}


// Assembly code:
// 0056d110: MOV EDX,dword ptr [0x032776c8]
//   Label: core_set.cpp_CDemonSet_FUN_0056d110
//   XREF to: 032776c8 (READ)
// 0056d116: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0056d11a: CMP dword ptr [ECX + 0xc],0x100
// 0056d121: JL 0x0056d128
//   XREF to: 0056d128 (CONDITIONAL_JUMP)
// 0056d123: CMP EDX,0x64
// 0056d126: JL 0x0056d12f
//   XREF to: 0056d12f (CONDITIONAL_JUMP)
// 0056d128: MOV dword ptr [0x032776c8],EDX
//   Label: LAB_0056d128
//   XREF to: 032776c8 (WRITE)
// 0056d12e: RET
// 0056d12f: INC EDX
//   Label: LAB_0056d12f
// 0056d130: MOV dword ptr [EDX*0x4 + 0x32776c8],ECX
//   XREF to: 032776c8 (DATA)
// 0056d137: MOV dword ptr [0x032776c8],EDX
//   XREF to: 032776c8 (WRITE)
// 0056d13d: RET
