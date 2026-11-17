// Name: core_gore.cpp_CGore_process_FUN_004c9670
// Address: 004c9670
// Address Range: [[004c9670, 004c9725]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_process_FUN_004c9670(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_process_FUN_004c9670(CGore *this_ptr)

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
  } while (this_ptr_00 != g_BloodParticles + sizeof(g_BloodParticles) / sizeof(g_BloodParticles[0]));
  iVar1 = 0;
  if (0 < g_INT_01cbcaf8) {
    this_ptr_02 = g_CBloodSplat_ARRAY_01cbcafc;
    do {
      core_gore_cpp_CBloodSplat_processAge_FUN_004c8690(this_ptr_02);
      iVar1 = iVar1 + 1;
      this_ptr_02 = this_ptr_02 + 1;
    } while (iVar1 < g_INT_01cbcaf8);
  }
  core_gore_cpp_CBloodPool_setupRenderState_FUN_004c8800(g_CBloodPool_ARRAY_01cdde44);
  iVar1 = 0;
  if (0 < g_INT_01cdde40) {
    this_ptr_01 = g_CBloodPool_ARRAY_01cdde44;
    do {
      core_gore_cpp_CBloodPool_processAge_FUN_004c8ce0(this_ptr_01);
      iVar1 = iVar1 + 1;
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar1 < g_INT_01cdde40);
  }
  return;
}
