// Name: core_fire.cpp_CFireEffect_FUN_004c9060
// Address: 004c9060
// Address Range: [[004c9060, 004c90b6]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c9060(CFireEffect * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c90c0 (004c90c0) at 004c9184 [UNCONDITIONAL_CALL]
// Globals:
//   CLightningBolt* g_CFireEffectLightningBoltsEnd
//   CTrail[100] g_CFireEffectTrails
// Function calls:
//   core_fire.cpp_CTrail_FUN_004c5df0

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c9060(CFireEffect *this_ptr)

{
  char *pcVar1;
  
  core_fire_cpp_CTrail_FUN_004c5df0(g_CFireEffectTrails + (int)g_CFireEffectLightningBoltsEnd);
  pcVar1 = g_CFireEffectLightningBoltsEnd->field0_0x0;
  g_CFireEffectLightningBoltsEnd = (CLightningBolt *)(pcVar1 + 1);
  if ((int)(pcVar1 + 1) < 100) {
    return;
  }
  g_CFireEffectLightningBoltsEnd = (CLightningBolt *)0x0;
  return;
}


// Assembly code:
// 004c9060: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_FUN_004c9060
// 004c9061: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x18] (READ)
// 004c9065: PUSH EDX
// 004c9066: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004c906a: MOV EDX,dword ptr [0x02d71774]
//   XREF to: 02d71774 (READ)
// 004c9070: PUSH dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x14] (READ)
// 004c9074: LEA EAX,[EDX*0x8 + 0x0]
// 004c907b: PUSH dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 004c907f: ADD EAX,EDX
// 004c9081: PUSH dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004c9085: SHL EAX,0x2
// 004c9088: PUSH ECX
// 004c9089: ADD EAX,0x2d71778
//   XREF to: 02d71778 (DATA)
// 004c908e: PUSH EAX
// 004c908f: CALL core_fire.cpp_CTrail_FUN_004c5df0
//   XREF to: 004c5df0 (UNCONDITIONAL_CALL)
// 004c9094: MOV EBX,dword ptr [0x02d71774]
//   XREF to: 02d71774 (READ)
// 004c909a: INC EBX
// 004c909b: ADD ESP,0x18
// 004c909e: MOV dword ptr [0x02d71774],EBX
//   XREF to: 02d71774 (WRITE)
// 004c90a4: CMP EBX,0x64
// 004c90a7: JGE 0x004c90ab
//   XREF to: 004c90ab (CONDITIONAL_JUMP)
// 004c90a9: POP EBX
// 004c90aa: RET
// 004c90ab: PUSH EDI
//   Label: LAB_004c90ab
// 004c90ac: XOR EDI,EDI
// 004c90ae: MOV dword ptr [0x02d71774],EDI
//   XREF to: 02d71774 (WRITE)
// 004c90b4: POP EDI
// 004c90b5: POP EBX
// 004c90b6: RET
