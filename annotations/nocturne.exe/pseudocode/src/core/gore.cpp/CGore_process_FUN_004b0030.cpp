// Name: core_gore.cpp_CGore_process_FUN_004b0030
// Address: 004b0030
// Address Range: [[004b0030, 004b00e5]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_process_FUN_004b0030(CGore *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CGore_process_FUN_004b0030(CGore *this_ptr)

{
  CBloodParticle *this_ptr_00;
  int iVar1;
  CBloodPool *this_ptr_01;
  CBloodSplat *this_ptr_02;
  
  this_ptr_00 = g_CBloodParticle_ARRAY_01c78cec;
  do {
    if (0.0 < (this_ptr_00->base).lifetime_remaining) {
      (*((this_ptr_00->base).vtable)->process)(&this_ptr_00->base);
    }
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CBloodParticle *)&DAT_01c7ccec);
  iVar1 = 0;
  if (0 < _DAT_01c7ccf0) {
    this_ptr_02 = g_CBloodSplat_ARRAY_01c7ccf4;
    do {
      core_gore_cpp_CBloodSplat_processAge_FUN_004af130(this_ptr_02);
      iVar1 = iVar1 + 1;
      this_ptr_02 = this_ptr_02 + 1;
    } while (iVar1 < _DAT_01c7ccf0);
  }
  core_gore_cpp_CBloodPool_setupRenderState_FUN_004af2a0(g_CBloodPool_ARRAY_01c9e03c);
  iVar1 = 0;
  if (0 < _DAT_01c9e038) {
    this_ptr_01 = g_CBloodPool_ARRAY_01c9e03c;
    do {
      core_gore_cpp_CBloodPool_processAge_FUN_004af700(this_ptr_01);
      iVar1 = iVar1 + 1;
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar1 < _DAT_01c9e038);
  }
  return;
}
