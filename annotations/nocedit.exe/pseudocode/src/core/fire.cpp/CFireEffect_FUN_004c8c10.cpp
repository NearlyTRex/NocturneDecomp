// Name: core_fire.cpp_CFireEffect_FUN_004c8c10
// Address: 004c8c10
// Address Range: [[004c8c10, 004c8c84]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c8c10(CFireEffect * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042b930 (0042b930) at 0042b9b7 [UNCONDITIONAL_CALL]
//   core_crate.cpp_FUN_00448a70 (00448a70) at 00448af4 [UNCONDITIONAL_CALL]
//   core_event.cpp_LargeEventHandler_FUN_004aacc0 (004aacc0) at 004ab1f7 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CToss_process_FUN_004c4000 (004c4000) at 004c406d [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb390 (004cb390) at 004cb4af [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_process_FUN_005e91a0 (005e91a0) at 005e9660 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_xplode_wav_6_0_0062a08b
//   CSound* g_CSoundPtr = 03f6af64
//   undefined4 DAT_02d677b0
//   CExplosion[10] g_CFireEffectExplosions
//   CSound g_CSoundInstance
// Function calls:
//   core_fire.cpp_CExplosion_FUN_004c3970
//   core_fire.cpp_CFireEffect_FUN_004c8ea0
//   core_sound.cpp_CSound_FUN_005b3a40

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c8c10(CFireEffect *this_ptr)

{
  CFireEffect *in_stack_00000008;
  
  core_fire_cpp_CExplosion_FUN_004c3970(g_CFireEffectExplosions + DAT_02d677b0);
  DAT_02d677b0 = DAT_02d677b0 + 1;
  if (9 < DAT_02d677b0) {
    DAT_02d677b0 = 0;
  }
  core_sound_cpp_CSound_FUN_005b3a40
            (g_CSoundPtr,(char *)in_stack_00000008,"xplode?.wav @ 6.0");
  core_fire_cpp_CFireEffect_FUN_004c8ea0(in_stack_00000008);
  return;
}


// Assembly code:
// 004c8c10: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_FUN_004c8c10
// 004c8c11: PUSH EDI
// 004c8c12: PUSH EBP
// 004c8c13: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004c8c17: MOV EAX,[0x02d677b0]
//   XREF to: 02d677b0 (READ)
// 004c8c1c: SHL EAX,0x2
// 004c8c1f: PUSH dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 004c8c23: MOV EDX,EAX
// 004c8c25: SHL EAX,0x3
// 004c8c28: PUSH dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004c8c2c: SUB EAX,EDX
// 004c8c2e: PUSH EBX
// 004c8c2f: ADD EAX,0x2d677b4
//   XREF to: 02d677b4 (DATA)
// 004c8c34: PUSH EAX
// 004c8c35: CALL core_fire.cpp_CExplosion_FUN_004c3970
//   XREF to: 004c3970 (UNCONDITIONAL_CALL)
// 004c8c3a: MOV EDX,dword ptr [0x02d677b0]
//   XREF to: 02d677b0 (READ)
// 004c8c40: INC EDX
// 004c8c41: ADD ESP,0x10
// 004c8c44: MOV dword ptr [0x02d677b0],EDX
//   XREF to: 02d677b0 (WRITE)
// 004c8c4a: CMP EDX,0xa
// 004c8c4d: JL 0x004c8c59
//   XREF to: 004c8c59 (CONDITIONAL_JUMP)
// 004c8c4f: PUSH ESI
// 004c8c50: XOR ESI,ESI
// 004c8c52: MOV dword ptr [0x02d677b0],ESI
//   XREF to: 02d677b0 (WRITE)
// 004c8c58: POP ESI
// 004c8c59: PUSH EBX
//   Label: LAB_004c8c59
// 004c8c5a: PUSH 0x62a08b
//   XREF to: 0062a08b (DATA)
// 004c8c5f: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004c8c63: PUSH EDI
// 004c8c64: MOV EBP,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 004c8c6a: PUSH EBP
//   XREF to: 03f6af64 (DATA)
// 004c8c6b: CALL core_sound.cpp_CSound_FUN_005b3a40
//   XREF to: 005b3a40 (UNCONDITIONAL_CALL)
// 004c8c70: ADD ESP,0x10
// 004c8c73: PUSH dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 004c8c77: PUSH EBX
// 004c8c78: PUSH EDI
// 004c8c79: CALL core_fire.cpp_CFireEffect_FUN_004c8ea0
//   XREF to: 004c8ea0 (UNCONDITIONAL_CALL)
// 004c8c7e: ADD ESP,0xc
// 004c8c81: POP EBP
// 004c8c82: POP EDI
// 004c8c83: POP EBX
// 004c8c84: RET
