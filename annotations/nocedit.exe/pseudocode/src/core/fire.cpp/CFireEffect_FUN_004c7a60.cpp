// Name: core_fire.cpp_CFireEffect_FUN_004c7a60
// Address: 004c7a60
// Address Range: [[004c7a60, 004c7aa9]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c7a60(CFireEffect * this_ptr)
// Cross-references:
//   core_elephant.cpp_FUN_004a7160 (004a7160) at 004a7444 [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0350 (004f0350) at 004f0596 [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_FUN_00588060 (00588060) at 00588360 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_FUN_005ddb30 (005ddb30) at 005dddbc [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e3750 (005e3750) at 005e3b4b [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_02d58a00
//   CMuzzleFlash[20] g_CFireEffectMuzzleFlashes
// Function calls:
//   core_fire.cpp_FUN_004c1940

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c7a60(CFireEffect *this_ptr)

{
  DAT_02d58a00 = DAT_02d58a00 + 1;
  if (0x13 < DAT_02d58a00) {
    DAT_02d58a00 = 0;
  }
  core_fire_cpp_FUN_004c1940();
  return;
}


// Assembly code:
// 004c7a60: PUSH ESI
//   Label: core_fire.cpp_CFireEffect_FUN_004c7a60
// 004c7a61: PUSH EDI
// 004c7a62: MOV EDX,dword ptr [0x02d58a00]
//   XREF to: 02d58a00 (READ)
// 004c7a68: LEA EAX,[EDX*0x4 + 0x0]
// 004c7a6f: SUB EAX,EDX
// 004c7a71: SHL EAX,0x3
// 004c7a74: SUB EAX,EDX
// 004c7a76: SHL EAX,0x2
// 004c7a79: INC EDX
// 004c7a7a: ADD EAX,0x2d58a04
//   XREF to: 02d58a04 (DATA)
// 004c7a7f: MOV dword ptr [0x02d58a00],EDX
//   XREF to: 02d58a00 (WRITE)
// 004c7a85: CMP EDX,0x14
// 004c7a88: JL 0x004c7a94
//   XREF to: 004c7a94 (CONDITIONAL_JUMP)
// 004c7a8a: PUSH EBX
// 004c7a8b: XOR EBX,EBX
// 004c7a8d: MOV dword ptr [0x02d58a00],EBX
//   XREF to: 02d58a00 (WRITE)
// 004c7a93: POP EBX
// 004c7a94: MOV ESI,dword ptr [ESP + 0x14]
//   Label: LAB_004c7a94
//   XREF to: Stack[0xc] (READ)
// 004c7a98: PUSH ESI
// 004c7a99: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004c7a9d: PUSH EDI
// 004c7a9e: PUSH EAX
// 004c7a9f: CALL core_fire.cpp_FUN_004c1940
//   XREF to: 004c1940 (UNCONDITIONAL_CALL)
// 004c7aa4: ADD ESP,0xc
// 004c7aa7: POP EDI
// 004c7aa8: POP ESI
// 004c7aa9: RET
