// Name: core_dynamite.cpp_FUN_0049ce70
// Address: 0049ce70
// Address Range: [[0049ce70, 0049cedd]]
// Convention: unknown
// Signature: undefined core_dynamite.cpp_FUN_0049ce70()
// Globals:
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CFireEffect g_CFireEffectInstance
// Function calls:
//   core_fire.cpp_CFireEffect_FUN_004c8dd0
//   core_weapon.cpp_FUN_005ee6e0

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_dynamite.cpp_FUN_0049ce70(undefined4 param_1) */

undefined4 core_dynamite_cpp_FUN_0049ce70(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar1 == 0) {
    return 0;
  }
  core_fire_cpp_CFireEffect_FUN_004c8dd0(g_CFireEffectPtr);
  *(undefined4 *)(in_stack_00000004 + 0x588) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x578) = 0xbf800000;
  *(undefined4 *)(in_stack_00000004 + 0x584) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x580) = *(undefined4 *)(in_stack_00000004 + 0x584);
  *(undefined4 *)(in_stack_00000004 + 0x57c) = *(undefined4 *)(in_stack_00000004 + 0x580);
  return 1;
}


// Assembly code:
// 0049ce70: PUSH EBX
//   Label: core_dynamite.cpp_FUN_0049ce70
// 0049ce71: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0049ce75: PUSH EBX
// 0049ce76: CALL core_weapon.cpp_FUN_005ee6e0
//   XREF to: 005ee6e0 (UNCONDITIONAL_CALL)
// 0049ce7b: ADD ESP,0x4
// 0049ce7e: TEST EAX,EAX
// 0049ce80: JNZ 0x0049ce84
//   XREF to: 0049ce84 (CONDITIONAL_JUMP)
// 0049ce82: POP EBX
// 0049ce83: RET
// 0049ce84: PUSH ESI
//   Label: LAB_0049ce84
// 0049ce85: MOV EDX,dword ptr [EBX + 0x588]
// 0049ce8b: PUSH EDX
// 0049ce8c: LEA ESI,[EBX + 0x57c]
// 0049ce92: PUSH dword ptr [EBX + 0x578]
// 0049ce98: PUSH ESI
// 0049ce99: LEA EAX,[EBX + 0x30]
// 0049ce9c: PUSH EAX
// 0049ce9d: LEA EAX,[EBX + 0x20]
// 0049cea0: PUSH EAX
// 0049cea1: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 0049cea7: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 0049cea8: CALL core_fire.cpp_CFireEffect_FUN_004c8dd0
//   XREF to: 004c8dd0 (UNCONDITIONAL_CALL)
// 0049cead: MOV dword ptr [EBX + 0x588],0x0
// 0049ceb7: MOV dword ptr [EBX + 0x578],0xbf800000
// 0049cec1: MOV EAX,0x1
// 0049cec6: MOV dword ptr [ESI + 0x8],0x0
// 0049cecd: ADD ESP,0x18
// 0049ced0: MOV EDX,dword ptr [ESI + 0x8]
// 0049ced3: MOV dword ptr [ESI + 0x4],EDX
// 0049ced6: MOV EDX,dword ptr [ESI + 0x4]
// 0049ced9: MOV dword ptr [ESI],EDX
// 0049cedb: POP ESI
// 0049cedc: POP EBX
// 0049cedd: RET
