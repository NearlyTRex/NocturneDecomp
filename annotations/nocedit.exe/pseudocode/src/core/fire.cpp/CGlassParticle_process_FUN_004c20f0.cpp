// Name: core_fire.cpp_CGlassParticle_process_FUN_004c20f0
// Address: 004c20f0
// Address Range: [[004c20f0, 004c215d]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CGlassParticle_process_FUN_004c20f0(CGlassParticle * this_ptr)
// Globals:
//   CGame* g_CGamePtr = 02d81a9c
//   int g_GlobalDeltaTimeInt
//   undefined4 g_CGameInstance.delta_time_float
// Function calls:
//   core_particle.cpp_CParticle_process_FUN_00545760

#include "nocturne.h"

void __cdecl core_fire_cpp_CGlassParticle_process_FUN_004c20f0(CGlassParticle *this_ptr)

{
  float fVar1;
  int iVar2;
  
  fVar1 = g_CGamePtr->delta_time_float;
  *(float *)(this_ptr->field1_0x38 + 0x1c) = *(float *)(this_ptr->field1_0x38 + 0x1c) + fVar1;
  *(float *)(this_ptr->field1_0x38 + 0x20) = *(float *)(this_ptr->field1_0x38 + 0x20) + fVar1;
  core_particle_cpp_CParticle_process_FUN_00545760(&this_ptr->base);
  iVar2 = *(int *)this_ptr->field1_0x38 - g_GlobalDeltaTimeInt / 6;
  *(int *)this_ptr->field1_0x38 = iVar2;
  if (-1 < iVar2) {
    return;
  }
  this_ptr->field1_0x38[0] = '\0';
  this_ptr->field1_0x38[1] = '\0';
  this_ptr->field1_0x38[2] = '\0';
  this_ptr->field1_0x38[3] = '\0';
  (this_ptr->base).lifetime_remaining = 0.0;
  return;
}


// Assembly code:
// 004c20f0: PUSH EBX
//   Label: core_fire.cpp_CGlassParticle_process_FUN_004c20f0
// 004c20f1: SUB ESP,0x4
// 004c20f4: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004c20f8: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004c20fd: FLD float ptr [EBX + 0x54]
// 004c2100: MOV EAX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004c2106: FLD float ptr [EBX + 0x58]
// 004c2109: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x8] (DATA)
// 004c210c: PUSH EBX
// 004c210d: FXCH
// 004c210f: FADD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (READ)
// 004c2113: FXCH
// 004c2115: FADD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (READ)
// 004c2119: FXCH
// 004c211b: FSTP float ptr [EBX + 0x54]
// 004c211e: FSTP float ptr [EBX + 0x58]
// 004c2121: CALL core_particle.cpp_CParticle_process_FUN_00545760
//   XREF to: 00545760 (UNCONDITIONAL_CALL)
// 004c2126: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 004c212b: MOV EDX,EAX
// 004c212d: MOV ECX,0x6
// 004c2132: SAR EDX,0x1f
// 004c2135: IDIV ECX
// 004c2137: MOV EDX,dword ptr [EBX + 0x38]
// 004c213a: SUB EDX,EAX
// 004c213c: ADD ESP,0x4
// 004c213f: MOV dword ptr [EBX + 0x38],EDX
// 004c2142: TEST EDX,EDX
// 004c2144: JL 0x004c214b
//   XREF to: 004c214b (CONDITIONAL_JUMP)
// 004c2146: ADD ESP,0x4
// 004c2149: POP EBX
// 004c214a: RET
// 004c214b: MOV dword ptr [EBX + 0x38],0x0
//   Label: LAB_004c214b
// 004c2152: MOV dword ptr [EBX + 0x18],0x0
// 004c2159: ADD ESP,0x4
// 004c215c: POP EBX
// 004c215d: RET
