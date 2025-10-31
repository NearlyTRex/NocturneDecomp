// Name: core_fire.cpp_CGlassParticle_ctor_FUN_004c9630
// Address: 004c9630
// Address Range: [[004c9630, 004c965a]]
// Convention: __cdecl
// Signature: CGlassParticle * core_fire.cpp_CGlassParticle_ctor_FUN_004c9630(CGlassParticle * this_ptr)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
//   CParticle_vtable g_CGlassParticleVTable
// Function calls:
//   core_particle.cpp_CParticle_ctor_FUN_00545650
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_ctor_FUN_004c9630(CGlassParticle *this_ptr)

{
  CParticle *pCVar1;
  void *pvVar2;
  
  pCVar1 = core_particle_cpp_CParticle_ctor_FUN_00545650(&this_ptr->base);
  pvVar2 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (&pCVar1[2].position.z,3,&g_CVectorTypeInfo);
  *(CParticle_vtable **)((int)pvVar2 + -0x44) = &g_CGlassParticleVTable;
  return (CGlassParticle *)((int)pvVar2 + -0x78);
}


// Assembly code:
// 004c9630: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CGlassParticle_ctor_FUN_004c9630
//   XREF to: Stack[0x4] (READ)
// 004c9634: PUSH EAX
// 004c9635: CALL core_particle.cpp_CParticle_ctor_FUN_00545650
//   XREF to: 00545650 (UNCONDITIONAL_CALL)
// 004c963a: ADD ESP,0x4
// 004c963d: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 004c9642: PUSH 0x3
// 004c9644: ADD EAX,0x78
// 004c9647: PUSH EAX
// 004c9648: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004c964d: ADD ESP,0xc
// 004c9650: MOV dword ptr [EAX + -0x44],0x65dd34
//   XREF to: 0065dd34 (DATA)
// 004c9657: SUB EAX,0x78
// 004c965a: RET
