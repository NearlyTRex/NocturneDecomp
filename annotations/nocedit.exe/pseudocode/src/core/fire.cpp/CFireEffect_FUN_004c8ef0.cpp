// Name: core_fire.cpp_CFireEffect_FUN_004c8ef0
// Address: 004c8ef0
// Address Range: [[004c8ef0, 004c8f48]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c8ef0(CFireEffect * this_ptr)
// Cross-references:
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 00484cfe [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8070 (004a8070) at 004a849e [UNCONDITIONAL_CALL]
//   core_flamegun.cpp_FUN_004cb920 (004cb920) at 004cb971 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_02d6cf64
//   CGunFlame[500] g_CFireEffectGunFlames
// Function calls:
//   core_fire.cpp_CGunFlame_FUN_004c4db0

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c8ef0(CFireEffect *this_ptr)

{
  int in_stack_00000010;
  
  if (0 < in_stack_00000010) {
    do {
      core_fire_cpp_CGunFlame_FUN_004c4db0(g_CFireEffectGunFlames + DAT_02d6cf64);
      DAT_02d6cf64 = DAT_02d6cf64 + 1;
      if (499 < DAT_02d6cf64) {
        DAT_02d6cf64 = 0;
      }
      in_stack_00000010 = in_stack_00000010 + -1;
    } while (0 < in_stack_00000010);
  }
  return;
}


// Assembly code:
// 004c8ef0: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_FUN_004c8ef0
// 004c8ef1: PUSH ESI
// 004c8ef2: PUSH EDI
// 004c8ef3: PUSH EBP
// 004c8ef4: MOV ESI,dword ptr [0x02d6cf64]
//   XREF to: 02d6cf64 (READ)
// 004c8efa: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004c8efe: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004c8f02: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004c8f06: TEST EBX,EBX
// 004c8f08: JLE 0x004c8f3e
//   XREF to: 004c8f3e (CONDITIONAL_JUMP)
// 004c8f0a: IMUL EAX,ESI,0x24
//   Label: LAB_004c8f0a
// 004c8f0d: PUSH EDI
// 004c8f0e: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 004c8f12: PUSH EDX
// 004c8f13: PUSH EBP
// 004c8f14: ADD EAX,0x2d6cf68
//   XREF to: 02d6cf68 (PARAM)
// 004c8f19: PUSH EAX
//   XREF to: 02d6cf68 (DATA)
// 004c8f1a: MOV dword ptr [0x02d6cf64],ESI
//   XREF to: 02d6cf64 (WRITE)
// 004c8f20: CALL core_fire.cpp_CGunFlame_FUN_004c4db0
//   XREF to: 004c4db0 (UNCONDITIONAL_CALL)
// 004c8f25: MOV ESI,dword ptr [0x02d6cf64]
//   XREF to: 02d6cf64 (READ)
// 004c8f2b: INC ESI
// 004c8f2c: ADD ESP,0x10
// 004c8f2f: CMP ESI,0x1f4
// 004c8f35: JL 0x004c8f39
//   XREF to: 004c8f39 (CONDITIONAL_JUMP)
// 004c8f37: XOR ESI,ESI
// 004c8f39: DEC EBX
//   Label: LAB_004c8f39
// 004c8f3a: TEST EBX,EBX
// 004c8f3c: JG 0x004c8f0a
//   XREF to: 004c8f0a (CONDITIONAL_JUMP)
// 004c8f3e: MOV dword ptr [0x02d6cf64],ESI
//   Label: LAB_004c8f3e
//   XREF to: 02d6cf64 (WRITE)
// 004c8f44: POP EBP
// 004c8f45: POP EDI
// 004c8f46: POP ESI
// 004c8f47: POP EBX
// 004c8f48: RET
