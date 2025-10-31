// Name: core_fire.cpp_CFireEffect_FUN_004c8fd0
// Address: 004c8fd0
// Address Range: [[004c8fd0, 004c9053]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c8fd0(CFireEffect * this_ptr)
// Cross-references:
//   core_baron.cpp_FUN_004136b0 (004136b0) at 004139af [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8070 (004a8070) at 004a8763 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CGunFlame* g_CFireEffectGunFlamesEnd
//   CLightningBolt[10] g_CFireEffectLightningBolts
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_fire.cpp_FUN_004c5680
//   core_set.cpp_CDemonSet_FUN_00570fa0

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c8fd0(CFireEffect *this_ptr)

{
  int in_stack_00000014;
  
  core_fire_cpp_FUN_004c5680();
  g_CFireEffectGunFlamesEnd = (CGunFlame *)(g_CFireEffectGunFlamesEnd->field0_0x0 + 1);
  if ((int)g_CFireEffectGunFlamesEnd < 10) {
    if (in_stack_00000014 == 0) {
      return;
    }
  }
  else {
    g_CFireEffectGunFlamesEnd = (CGunFlame *)0x0;
    if (in_stack_00000014 == 0) {
      return;
    }
  }
  core_set_cpp_CDemonSet_FUN_00570fa0(g_CDemonSetPtr);
  return;
}


// Assembly code:
// 004c8fd0: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_FUN_004c8fd0
// 004c8fd1: PUSH dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x18] (READ)
// 004c8fd5: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 004c8fd9: PUSH dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x14] (READ)
// 004c8fdd: PUSH EDX
// 004c8fde: MOV EDX,dword ptr [0x02d715b8]
//   XREF to: 02d715b8 (READ)
// 004c8fe4: LEA EAX,[EDX*0x4 + 0x0]
// 004c8feb: SUB EAX,EDX
// 004c8fed: SHL EAX,0x2
// 004c8ff0: SUB EAX,EDX
// 004c8ff2: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004c8ff6: SHL EAX,0x2
// 004c8ff9: PUSH ECX
// 004c8ffa: ADD EAX,0x2d715bc
//   XREF to: 02d715bc (DATA)
// 004c8fff: PUSH EAX
// 004c9000: CALL core_fire.cpp_FUN_004c5680
//   XREF to: 004c5680 (UNCONDITIONAL_CALL)
// 004c9005: MOV EBX,dword ptr [0x02d715b8]
//   XREF to: 02d715b8 (READ)
// 004c900b: INC EBX
// 004c900c: ADD ESP,0x14
// 004c900f: MOV dword ptr [0x02d715b8],EBX
//   XREF to: 02d715b8 (WRITE)
// 004c9015: CMP EBX,0xa
// 004c9018: JGE 0x004c9023
//   XREF to: 004c9023 (CONDITIONAL_JUMP)
// 004c901a: CMP dword ptr [ESP + 0x14],0x0
//   XREF to: Stack[0x10] (READ)
// 004c901f: JNZ 0x004c9036
//   XREF to: 004c9036 (CONDITIONAL_JUMP)
// 004c9021: POP EBX
// 004c9022: RET
// 004c9023: PUSH EDI
//   Label: LAB_004c9023
// 004c9024: XOR EDI,EDI
// 004c9026: MOV dword ptr [0x02d715b8],EDI
//   XREF to: 02d715b8 (WRITE)
// 004c902c: POP EDI
// 004c902d: CMP dword ptr [ESP + 0x14],0x0
//   XREF to: Stack[0x10] (READ)
// 004c9032: JNZ 0x004c9036
//   XREF to: 004c9036 (CONDITIONAL_JUMP)
// 004c9034: POP EBX
// 004c9035: RET
// 004c9036: PUSH 0x3f800000
//   Label: LAB_004c9036
// 004c903b: PUSH 0x0
// 004c903d: PUSH 0x0
// 004c903f: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004c9044: PUSH 0x42c80000
// 004c9049: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004c904a: CALL core_set.cpp_CDemonSet_FUN_00570fa0
//   XREF to: 00570fa0 (UNCONDITIONAL_CALL)
// 004c904f: ADD ESP,0x14
// 004c9052: POP EBX
// 004c9053: RET
