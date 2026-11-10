// Name: core_gore.cpp_CGore_process_FUN_004c9670
// Address: 004c9670
// Address Range: [[004c9670, 004c9725]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_process_FUN_004c9670(CGore *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CGore_process_FUN_004c9670(CGore *this_ptr)

{
  CBloodParticle *pCVar1;
  int iVar2;
  CBloodPool *this_ptr_00;
  CBloodSplat *this_ptr_01;
  
  pCVar1 = g_BloodParticles;
  do {
    if (0.0 < *(float *)&pCVar1->field_0x24) {
      (**(code **)(*(int *)&pCVar1->field_0x3c + 4))(pCVar1);
    }
    pCVar1 = pCVar1 + 1;
  } while (pCVar1 != (CBloodParticle *)&DAT_01cbcaf4);
  iVar2 = 0;
  if (0 < _DAT_01cbcaf8) {
    this_ptr_01 = (CBloodSplat *)0x1cbcafc;
    do {
      core_gore_cpp_CBloodSplat_processAge_FUN_004c8690(this_ptr_01);
      iVar2 = iVar2 + 1;
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar2 < _DAT_01cbcaf8);
  }
  core_gore_cpp_CBloodPool_setupRenderState_FUN_004c8800((CBloodPool *)0x1cdde44);
  iVar2 = 0;
  if (0 < _DAT_01cdde40) {
    this_ptr_00 = (CBloodPool *)0x1cdde44;
    do {
      core_gore_cpp_CBloodPool_processAge_FUN_004c8ce0(this_ptr_00);
      iVar2 = iVar2 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 < _DAT_01cdde40);
  }
  return;
}
