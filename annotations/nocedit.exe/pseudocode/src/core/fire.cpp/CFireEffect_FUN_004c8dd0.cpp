// Name: core_fire.cpp_CFireEffect_FUN_004c8dd0
// Address: 004c8dd0
// Address Range: [[004c8dd0, 004c8e3e]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c8dd0(CFireEffect * this_ptr)
// Cross-references:
//   core_dynamite.cpp_FUN_0049ce70 (0049ce70) at 0049cea8 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062a0b3 = 0.000100000000000000
//   CToss[20] g_TossPool
//   undefined4 DAT_02d67cb0
// Function calls:
//   core_fire.cpp_CFireEffect_FUN_004c8e40
//   sound_sndmain.cpp_YetAnother2ComputingDelayCall_FUN_005a98b0

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c8dd0(CFireEffect *this_ptr)

{
  int iVar1;
  undefined4 in_stack_0000001c;
  
  iVar1 = core_fire_cpp_CFireEffect_FUN_004c8e40(this_ptr);
  *(undefined4 *)(g_TossPool[iVar1].field0_0x0 + 0x3e0) = in_stack_0000001c;
  sound_sndmain_cpp_YetAnother2ComputingDelayCall_FUN_005a98b0();
  return;
}


// Assembly code:
// 004c8dd0: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_FUN_004c8dd0
// 004c8dd1: PUSH ESI
// 004c8dd2: PUSH EDI
// 004c8dd3: PUSH EBP
// 004c8dd4: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004c8dd8: FCOMP double ptr [0x0062a0b3]
//   XREF to: 0062a0b3 (READ)
// 004c8dde: FNSTSW AX
// 004c8de0: SAHF
// 004c8de1: JNC 0x004c8deb
//   XREF to: 004c8deb (CONDITIONAL_JUMP)
// 004c8de3: MOV dword ptr [ESP + 0x24],0x38d1b717
//   XREF to: Stack[0x14] (WRITE)
// 004c8deb: MOV ECX,dword ptr [ESP + 0x20]
//   Label: LAB_004c8deb
//   XREF to: Stack[0x10] (READ)
// 004c8def: PUSH dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004c8df3: PUSH ECX
// 004c8df4: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 004c8df8: PUSH EBX
// 004c8df9: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 004c8dfd: PUSH ESI
// 004c8dfe: PUSH 0x0
// 004c8e00: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 004c8e04: PUSH EDI
// 004c8e05: CALL core_fire.cpp_CFireEffect_FUN_004c8e40
//   XREF to: 004c8e40 (UNCONDITIONAL_CALL)
// 004c8e0a: IMUL EAX,EAX,0x3e4
// 004c8e10: ADD ESP,0x18
// 004c8e13: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 004c8e17: MOV dword ptr [EAX + 0x2d67cb0],EDX
//   XREF to: 02d67cb0 (DATA)
// 004c8e1d: MOV EDX,0x2d678d0
//   XREF to: 02d678d0 (DATA)
// 004c8e22: ADD EDX,EAX
// 004c8e24: ADD EDX,0x180
// 004c8e2a: PUSH EDX
// 004c8e2b: MOV EBP,dword ptr [EAX + 0x2d67cb0]
//   XREF to: 02d67cb0 (DATA)
// 004c8e31: PUSH EBP
// 004c8e32: CALL sound_sndmain.cpp_YetAnother2ComputingDelayCall_FUN_005a98b0
//   XREF to: 005a98b0 (UNCONDITIONAL_CALL)
// 004c8e37: ADD ESP,0x8
// 004c8e3a: POP EBP
// 004c8e3b: POP EDI
// 004c8e3c: POP ESI
// 004c8e3d: POP EBX
// 004c8e3e: RET
