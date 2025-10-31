// Name: core_fire.cpp_CSmokeParticle_init_FUN_004bf2f0
// Address: 004bf2f0
// Address Range: [[004bf2f0, 004bf33e] [004bf35f, 004bf382]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CSmokeParticle_init_FUN_004bf2f0(CSmokeParticle * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, int alpha_value)
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c76a0 (004c76a0) at 004c77d4 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c7b20 (004c7b20) at 004c7b6c [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

void __cdecl
core_fire_cpp_CSmokeParticle_init_FUN_004bf2f0
          (CSmokeParticle *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,
          int alpha_value)

{
  CVector3f *pCVar1;
  float fVar2;
  int in_stack_00000018;
  
  if (&this_ptr->position != position) {
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  pCVar1 = &this_ptr->wind_influence;
  if (wind_influence == (CVector3f *)0x0) {
    (this_ptr->wind_influence).z = 0.0;
    (this_ptr->wind_influence).y = (this_ptr->wind_influence).z;
    pCVar1->x = (this_ptr->wind_influence).y;
  }
  else if (pCVar1 != wind_influence) {
    pCVar1->x = wind_influence->x;
    (this_ptr->wind_influence).y = wind_influence->y;
    (this_ptr->wind_influence).z = wind_influence->z;
  }
  this_ptr->age = 0.0;
  this_ptr->drag_factor = drag_factor;
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.95,1.05);
  this_ptr->active = 1;
  this_ptr->vertical_accel = fVar2;
  this_ptr->alpha_value = in_stack_00000018;
  return;
}


// Assembly code:
// 004bf2f0: PUSH EBX
//   Label: core_fire.cpp_CSmokeParticle_init_FUN_004bf2f0
// 004bf2f1: SUB ESP,0x4
// 004bf2f4: MOV EBX,dword ptr [ESP + 0xc]
// 004bf2f8: MOV ECX,dword ptr [ESP + 0x10]
// 004bf2fc: MOV EDX,dword ptr [ESP + 0x18]
// 004bf300: LEA EAX,[EBX + 0x4]
// 004bf303: CMP EAX,ECX
// 004bf305: JNZ 0x004bf35f
//   XREF to: 004bf35f (CONDITIONAL_JUMP)
// 004bf307: LEA EAX,[EBX + 0x1c]
//   Label: LAB_004bf307
// 004bf30a: TEST EDX,EDX
// 004bf30c: JZ 0x004bf373
//   XREF to: 004bf373 (CONDITIONAL_JUMP)
// 004bf30e: CMP EAX,EDX
// 004bf310: JZ 0x004bf322
//   XREF to: 004bf322 (CONDITIONAL_JUMP)
// 004bf312: MOV ECX,dword ptr [EDX]
// 004bf314: MOV dword ptr [EAX],ECX
// 004bf316: MOV ECX,dword ptr [EDX + 0x4]
// 004bf319: MOV dword ptr [EAX + 0x4],ECX
// 004bf31c: MOV ECX,dword ptr [EDX + 0x8]
// 004bf31f: MOV dword ptr [EAX + 0x8],ECX
// 004bf322: PUSH 0x3f866666
//   Label: LAB_004bf322
// 004bf327: MOV EAX,dword ptr [ESP + 0x18]
// 004bf32b: MOV dword ptr [EBX + 0x18],0x0
// 004bf332: PUSH 0x3f733333
// 004bf337: MOV dword ptr [EBX + 0x14],EAX
// 004bf33a: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004bf35f: PUSH ESI
//   Label: LAB_004bf35f
// 004bf360: MOV ESI,dword ptr [ECX]
// 004bf362: MOV dword ptr [EAX],ESI
// 004bf364: MOV ESI,dword ptr [ECX + 0x4]
// 004bf367: MOV dword ptr [EAX + 0x4],ESI
// 004bf36a: MOV ESI,dword ptr [ECX + 0x8]
// 004bf36d: MOV dword ptr [EAX + 0x8],ESI
// 004bf370: POP ESI
// 004bf371: JMP 0x004bf307
//   XREF to: 004bf307 (UNCONDITIONAL_JUMP)
// 004bf373: MOV dword ptr [EAX + 0x8],EDX
//   Label: LAB_004bf373
// 004bf376: MOV EDX,dword ptr [EAX + 0x8]
// 004bf379: MOV dword ptr [EAX + 0x4],EDX
// 004bf37c: MOV EDX,dword ptr [EAX + 0x4]
// 004bf37f: MOV dword ptr [EAX],EDX
// 004bf381: JMP 0x004bf322
//   XREF to: 004bf322 (UNCONDITIONAL_JUMP)
