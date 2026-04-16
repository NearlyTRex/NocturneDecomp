// Name: core_gore.cpp_CGore_process_FUN_004ed9e0
// Address: 004ed9e0
// Address Range: [[004ed9e0, 004eda95]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_process_FUN_004ed9e0(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_process_FUN_004ed9e0(CGore *this_ptr)

{
  CBloodParticle *this_ptr_00;
  int iVar1;
  CBloodPool *this_ptr_01;
  CBloodSplat *this_ptr_02;
  
  this_ptr_00 = g_BloodParticles;
  do {
    if (0.0 < (this_ptr_00->base).lifetime_remaining) {
      (*((this_ptr_00->base).vtable)->process)(&this_ptr_00->base);
    }
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != g_BloodParticles + 256);
  iVar1 = 0;
  if (0 < g_BloodSplatCount) {
    this_ptr_02 = g_BloodSplats;
    do {
      core_gore_cpp_CBloodSplat_processAge_FUN_004ecad0(this_ptr_02);
      iVar1 = iVar1 + 1;
      this_ptr_02 = this_ptr_02 + 1;
    } while (iVar1 < g_BloodSplatCount);
  }
  core_gore_cpp_CBloodPool_setupRenderState_FUN_004ecc40(g_BloodPools);
  iVar1 = 0;
  if (0 < g_BloodPoolCount) {
    this_ptr_01 = g_BloodPools;
    do {
      core_gore_cpp_CBloodPool_processAge_FUN_004ed0a0(this_ptr_01);
      iVar1 = iVar1 + 1;
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar1 < g_BloodPoolCount);
  }
  return;
}
