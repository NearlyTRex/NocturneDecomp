// Name: core_gore.cpp_CGore_process_FUN_004e5e80
// Address: 004e5e80
// Address Range: [[004e5e80, 004e5f35]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_process_FUN_004e5e80(CGore *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CGore_process_FUN_004e5e80(CGore *this_ptr)

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
  } while (this_ptr_00 != (CBloodParticle *)&DAT_01cd56ac);
  iVar1 = 0;
  if (0 < _DAT_01cd56b0) {
    this_ptr_02 = (CBloodSplat *)0x1cd56b4;
    do {
      core_gore_cpp_CBloodSplat_processAge_FUN_004e4f70(this_ptr_02);
      iVar1 = iVar1 + 1;
      this_ptr_02 = this_ptr_02 + 1;
    } while (iVar1 < _DAT_01cd56b0);
  }
  core_gore_cpp_CBloodPool_setupRenderState_FUN_004e50e0((CBloodPool *)0x1cf69fc);
  iVar1 = 0;
  if (0 < _DAT_01cf69f8) {
    this_ptr_01 = (CBloodPool *)0x1cf69fc;
    do {
      core_gore_cpp_CBloodPool_processAge_FUN_004e5540(this_ptr_01);
      iVar1 = iVar1 + 1;
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar1 < _DAT_01cf69f8);
  }
  return;
}
