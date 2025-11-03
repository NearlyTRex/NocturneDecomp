// Name: core_fire.cpp_CFireEffect_FUN_004c8f50
// Address: 004c8f50
// Address Range: [[004c8f50, 004c8fcf]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c8f50(CFireEffect * this_ptr)
// Cross-references:
//   core_baron.cpp_FUN_004136b0 (004136b0) at 00413781 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8070 (004a8070) at 004a85a6 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CGunFlame* g_GunFlameActiveListHead
//   CLightningBolt[10] g_LightningBoltPool
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_fire.cpp_CLightningBolt_FUN_004c5640
//   core_set.cpp_CDemonSet_FUN_00570fa0

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c8f50(CFireEffect *this_ptr)

{
  int in_stack_00000014;
  
  core_fire_cpp_CLightningBolt_FUN_004c5640(g_LightningBoltPool + (int)g_GunFlameActiveListHead);
  g_GunFlameActiveListHead = (CGunFlame *)(g_GunFlameActiveListHead->field0_0x0 + 1);
  if ((int)g_GunFlameActiveListHead < 10) {
    if (in_stack_00000014 == 0) {
      return;
    }
  }
  else {
    g_GunFlameActiveListHead = (CGunFlame *)0x0;
    if (in_stack_00000014 == 0) {
      return;
    }
  }
  core_set_cpp_CDemonSet_FUN_00570fa0(g_CDemonSetPtr);
  return;
}


// Assembly code:
// 004c8f50: PUSH EBP
//   Label: core_fire.cpp_CFireEffect_FUN_004c8f50
// 004c8f51: PUSH dword ptr [ESP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 004c8f55: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004c8f59: PUSH dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 004c8f5d: PUSH EDX
// 004c8f5e: MOV EDX,dword ptr [0x02d715b8]
//   XREF to: 02d715b8 (READ)
// 004c8f64: LEA EAX,[EDX*0x4 + 0x0]
// 004c8f6b: SUB EAX,EDX
// 004c8f6d: SHL EAX,0x2
// 004c8f70: SUB EAX,EDX
// 004c8f72: SHL EAX,0x2
// 004c8f75: ADD EAX,0x2d715bc
//   XREF to: 02d715bc (DATA)
// 004c8f7a: PUSH EAX
// 004c8f7b: CALL core_fire.cpp_CLightningBolt_FUN_004c5640
//   XREF to: 004c5640 (UNCONDITIONAL_CALL)
// 004c8f80: MOV ECX,dword ptr [0x02d715b8]
//   XREF to: 02d715b8 (READ)
// 004c8f86: INC ECX
// 004c8f87: ADD ESP,0x10
// 004c8f8a: MOV dword ptr [0x02d715b8],ECX
//   XREF to: 02d715b8 (WRITE)
// 004c8f90: CMP ECX,0xa
// 004c8f93: JGE 0x004c8f9e
//   XREF to: 004c8f9e (CONDITIONAL_JUMP)
// 004c8f95: CMP dword ptr [ESP + 0x14],0x0
//   XREF to: Stack[0x10] (READ)
// 004c8f9a: JNZ 0x004c8fb1
//   XREF to: 004c8fb1 (CONDITIONAL_JUMP)
// 004c8f9c: POP EBP
// 004c8f9d: RET
// 004c8f9e: PUSH ESI
//   Label: LAB_004c8f9e
// 004c8f9f: XOR ESI,ESI
// 004c8fa1: MOV dword ptr [0x02d715b8],ESI
//   XREF to: 02d715b8 (WRITE)
// 004c8fa7: POP ESI
// 004c8fa8: CMP dword ptr [ESP + 0x14],0x0
//   XREF to: Stack[0x10] (READ)
// 004c8fad: JNZ 0x004c8fb1
//   XREF to: 004c8fb1 (CONDITIONAL_JUMP)
// 004c8faf: POP EBP
// 004c8fb0: RET
// 004c8fb1: PUSH 0x3f800000
//   Label: LAB_004c8fb1
// 004c8fb6: PUSH 0x0
// 004c8fb8: PUSH 0x0
// 004c8fba: MOV EBP,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004c8fc0: PUSH 0x42c80000
// 004c8fc5: PUSH EBP
//   XREF to: 03114278 (DATA)
// 004c8fc6: CALL core_set.cpp_CDemonSet_FUN_00570fa0
//   XREF to: 00570fa0 (UNCONDITIONAL_CALL)
// 004c8fcb: ADD ESP,0x14
// 004c8fce: POP EBP
// 004c8fcf: RET
