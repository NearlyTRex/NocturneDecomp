// Name: core_fire.cpp_CShell_process_FUN_004c6300
// Address: 004c6300
// Address Range: [[004c6300, 004c6379]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CShell_process_FUN_004c6300(CShell * this_ptr)
// Globals:
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 g_CGameInstance.delta_time_float
// Function calls:
//   core_particle.cpp_CParticle_process_FUN_00545760

#include "nocturne.h"

void __cdecl core_fire_cpp_CShell_process_FUN_004c6300(CShell *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((this_ptr->base).lifetime_remaining <= 0.0) {
    return;
  }
  core_particle_cpp_CParticle_process_FUN_00545760(&this_ptr->base);
  fVar4 = g_CGamePtr->delta_time_float;
  fVar1 = *(float *)(this_ptr->field1_0x38 + 0x10);
  fVar2 = *(float *)(this_ptr->field1_0x38 + 0x14);
  fVar3 = *(float *)(this_ptr->field1_0x38 + 4);
  *(float *)this_ptr->field1_0x38 =
       *(float *)this_ptr->field1_0x38 + *(float *)(this_ptr->field1_0x38 + 0xc) * fVar4;
  *(float *)(this_ptr->field1_0x38 + 4) = fVar3 + fVar1 * fVar4;
  *(float *)(this_ptr->field1_0x38 + 8) = *(float *)(this_ptr->field1_0x38 + 8) + fVar2 * fVar4;
  return;
}


// Assembly code:
// 004c6300: PUSH EBX
//   Label: core_fire.cpp_CShell_process_FUN_004c6300
// 004c6301: SUB ESP,0x10
// 004c6304: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004c6308: FLD float ptr [EBX + 0x18]
// 004c630b: FLDZ
// 004c630d: FCOMPP
// 004c630f: FNSTSW AX
// 004c6311: SAHF
// 004c6312: JC 0x004c6319
//   XREF to: 004c6319 (CONDITIONAL_JUMP)
// 004c6314: ADD ESP,0x10
// 004c6317: POP EBX
// 004c6318: RET
// 004c6319: PUSH EBX
//   Label: LAB_004c6319
// 004c631a: CALL core_particle.cpp_CParticle_process_FUN_00545760
//   XREF to: 00545760 (UNCONDITIONAL_CALL)
// 004c631f: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004c6324: ADD ESP,0x4
// 004c6327: MOV EAX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004c632d: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 004c6331: LEA EAX,[EBX + 0x44]
// 004c6334: FLD float ptr [EAX]
// 004c6336: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[-0x8] (READ)
// 004c633a: FSTP float ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 004c633d: FLD float ptr [EAX + 0x4]
// 004c6340: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[-0x8] (READ)
// 004c6344: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x10] (WRITE)
// 004c6348: FLD float ptr [EAX + 0x8]
// 004c634b: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[-0x8] (READ)
// 004c634f: LEA EAX,[EBX + 0x38]
// 004c6352: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (WRITE)
// 004c6356: FLD float ptr [EAX]
// 004c6358: FADD float ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 004c635b: FLD float ptr [EAX + 0x4]
// 004c635e: FXCH
// 004c6360: FSTP float ptr [EAX]
// 004c6362: FADD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x10] (READ)
// 004c6366: FLD float ptr [EAX + 0x8]
// 004c6369: FXCH
// 004c636b: FSTP float ptr [EAX + 0x4]
// 004c636e: FADD float ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 004c6372: FSTP float ptr [EAX + 0x8]
// 004c6375: ADD ESP,0x10
// 004c6378: POP EBX
// 004c6379: RET
