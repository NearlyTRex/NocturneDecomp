// Name: core_fire.cpp_CFireEffect_FUN_004c7b20
// Address: 004c7b20
// Address Range: [[004c7b20, 004c7b77]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c7b20(CFireEffect * this_ptr)
// Cross-references:
//   core_baron.cpp_CBaron_process_FUN_00412e80 (00412e80) at 004131c0 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 00416bad [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ea40 (0042ea40) at 0042ec33 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 00484a51 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8070 (004a8070) at 004a83a2 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CCrater_process_FUN_004c4550 (004c4550) at 004c45d1 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c7620 (004c7620) at 004c7638 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireball_process_FUN_004c0b30 (004c0b30) at 004c0c1f [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGunFlame_process_FUN_004c4f60 (004c4f60) at 004c5047 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004c9c00 (004c9c00) at 004c9d09 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_PlaySounds_FUN_004d1a40 (004d1a40) at 004d1c27 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_02d141e8
//   CSmokeParticle[2048] g_CFireEffectSmokeParticles
// Function calls:
//   core_fire.cpp_CSmokeParticle_FUN_004bf2f0

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c7b20(CFireEffect *this_ptr)

{
  CSmokeParticle *this_ptr_00;
  int iVar1;
  
  iVar1 = DAT_02d141e8 + 1;
  this_ptr_00 = g_CFireEffectSmokeParticles + DAT_02d141e8;
  DAT_02d141e8 = iVar1;
  if (0x7ff < iVar1) {
    DAT_02d141e8 = 0;
  }
  core_fire_cpp_CSmokeParticle_FUN_004bf2f0(this_ptr_00);
  return;
}


// Assembly code:
// 004c7b20: PUSH ESI
//   Label: core_fire.cpp_CFireEffect_FUN_004c7b20
// 004c7b21: PUSH EDI
// 004c7b22: PUSH EBP
// 004c7b23: MOV EDX,dword ptr [0x02d141e8]
//   XREF to: 02d141e8 (READ)
// 004c7b29: LEA EAX,[EDX*0x4 + 0x0]
// 004c7b30: SUB EAX,EDX
// 004c7b32: SHL EAX,0x2
// 004c7b35: SUB EAX,EDX
// 004c7b37: SHL EAX,0x2
// 004c7b3a: INC EDX
// 004c7b3b: ADD EAX,0x2d141ec
//   XREF to: 02d141ec (DATA)
// 004c7b40: MOV dword ptr [0x02d141e8],EDX
//   XREF to: 02d141e8 (WRITE)
// 004c7b46: CMP EDX,0x800
// 004c7b4c: JL 0x004c7b58
//   XREF to: 004c7b58 (CONDITIONAL_JUMP)
// 004c7b4e: PUSH EBX
// 004c7b4f: XOR EBX,EBX
// 004c7b51: MOV dword ptr [0x02d141e8],EBX
//   XREF to: 02d141e8 (WRITE)
// 004c7b57: POP EBX
// 004c7b58: MOV ESI,dword ptr [ESP + 0x20]
//   Label: LAB_004c7b58
//   XREF to: Stack[0x14] (READ)
// 004c7b5c: PUSH ESI
// 004c7b5d: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004c7b61: PUSH EDI
// 004c7b62: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 004c7b66: PUSH dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 004c7b6a: PUSH EBP
// 004c7b6b: PUSH EAX
// 004c7b6c: CALL core_fire.cpp_CSmokeParticle_FUN_004bf2f0
//   XREF to: 004bf2f0 (UNCONDITIONAL_CALL)
// 004c7b71: ADD ESP,0x14
// 004c7b74: POP EBP
// 004c7b75: POP EDI
// 004c7b76: POP ESI
// 004c7b77: RET
