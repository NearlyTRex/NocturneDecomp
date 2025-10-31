// Name: core_fire.cpp_CSmokeParticle_process_FUN_004bf390
// Address: 004bf390
// Address Range: [[004bf390, 004bf3e9]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CSmokeParticle_process_FUN_004bf390(CSmokeParticle * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 (004c6ec0) at 004c7171 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00629c0b = 30
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 g_CGameInstance.delta_time_float
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

void __cdecl core_fire_cpp_CSmokeParticle_process_FUN_004bf390(CSmokeParticle *this_ptr)

{
  CVector3f *pCVar1;
  float fVar2;
  CDemonSet *pCVar3;
  float fVar4;
  float fVar5;
  float local_8;
  
  fVar5 = g_CGamePtr->delta_time_float;
  this_ptr->age = fVar5 * FLOAT_00629c0b + this_ptr->age;
  if (0x421fffff < (int)this_ptr->age) {
    this_ptr->active = 0;
    return;
  }
  (this_ptr->position).y =
       fVar5 * this_ptr->vertical_accel * this_ptr->drag_factor + (this_ptr->position).y;
  fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-1.0,1.0);
  (this_ptr->position).x = fVar4 * local_8 + (this_ptr->position).x;
  fVar5 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-1.0,1.0);
  (this_ptr->position).z = fVar5 * fVar4 + (this_ptr->position).z;
  fVar5 = (this_ptr->wind_influence).y;
  fVar2 = (this_ptr->wind_influence).z;
  pCVar1 = &this_ptr->position;
  pCVar1->x = pCVar1->x + (this_ptr->wind_influence).x * fVar4;
  (this_ptr->position).y = (this_ptr->position).y + fVar5 * fVar4;
  pCVar3 = g_CDemonSetPtr;
  (this_ptr->position).z = (this_ptr->position).z + fVar2 * fVar4;
  fVar5 = *(float *)(pCVar3->field19_0x14f0a0 + 0xbbc4);
  fVar2 = *(float *)(pCVar3->field19_0x14f0a0 + 0xbbc8);
  pCVar1->x = pCVar1->x + *(float *)(pCVar3->field19_0x14f0a0 + 0xbbc0) * fVar4;
  (this_ptr->position).y = (this_ptr->position).y + fVar5 * fVar4;
  (this_ptr->position).z = (this_ptr->position).z + fVar2 * fVar4;
  return;
}


// Assembly code:
// 004bf390: PUSH EBX
//   Label: core_fire.cpp_CSmokeParticle_process_FUN_004bf390
// 004bf391: SUB ESP,0x20
// 004bf394: MOV EBX,dword ptr [ESP + 0x28]
// 004bf398: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004bf39d: MOV EAX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004bf3a3: MOV dword ptr [ESP + 0x18],EAX
// 004bf3a7: FLD float ptr [ESP + 0x18]
// 004bf3ab: FMUL float ptr [0x00629c0b]
//   XREF to: 00629c0b (READ)
// 004bf3b1: FADD float ptr [EBX + 0x18]
// 004bf3b4: FSTP float ptr [EBX + 0x18]
// 004bf3b7: CMP dword ptr [EBX + 0x18],0x42200000
// 004bf3be: JL 0x004bf3cb
//   XREF to: 004bf3cb (CONDITIONAL_JUMP)
// 004bf3c0: MOV dword ptr [EBX],0x0
// 004bf3c6: ADD ESP,0x20
// 004bf3c9: POP EBX
// 004bf3ca: RET
// 004bf3cb: FLD float ptr [ESP + 0x18]
//   Label: LAB_004bf3cb
// 004bf3cf: FMUL float ptr [EBX + 0x10]
// 004bf3d2: FMUL float ptr [EBX + 0x14]
// 004bf3d5: PUSH 0x3f800000
// 004bf3da: FADD float ptr [EBX + 0x8]
// 004bf3dd: PUSH 0xbf800000
// 004bf3e2: FSTP float ptr [EBX + 0x8]
// 004bf3e5: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
