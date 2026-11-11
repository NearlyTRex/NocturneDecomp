// Name: core_gore.cpp_CGore_process_FUN_004ce7e0
// Address: 004ce7e0
// Address Range: [[004ce7e0, 004ce895]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_process_FUN_004ce7e0(CGore *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CGore_process_FUN_004ce7e0(CGore *this_ptr)

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
  } while (this_ptr_00 != (CBloodParticle *)&DAT_01d276b4);
  iVar1 = 0;
  if (0 < _DAT_01d276b8) {
    this_ptr_02 = (CBloodSplat *)0x1d276bc;
    do {
      core_gore_cpp_CBloodSplat_processAge_FUN_004cdb20(this_ptr_02);
      iVar1 = iVar1 + 1;
      this_ptr_02 = this_ptr_02 + 1;
    } while (iVar1 < _DAT_01d276b8);
  }
  core_gore_cpp_CBloodPool_setupRenderState_FUN_004cdc90((CBloodPool *)0x1d4a944);
  iVar1 = 0;
  if (0 < _DAT_01d4a940) {
    this_ptr_01 = (CBloodPool *)0x1d4a944;
    do {
      core_gore_cpp_CBloodPool_processAge_FUN_004cdfc0(this_ptr_01);
      iVar1 = iVar1 + 1;
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar1 < _DAT_01d4a940);
  }
  return;
}
