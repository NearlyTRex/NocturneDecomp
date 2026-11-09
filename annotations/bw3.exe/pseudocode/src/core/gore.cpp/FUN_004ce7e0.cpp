// Name: core_gore.cpp_FUN_004ce7e0
// Address: 004ce7e0
// Address Range: [[004ce7e0, 004ce895]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004ce7e0(CGore *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_FUN_004ce7e0(CGore *this_ptr)

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
  } while (pCVar1 != (CBloodParticle *)&DAT_01d276b4);
  iVar2 = 0;
  if (0 < _DAT_01d276b8) {
    this_ptr_01 = (CBloodSplat *)0x1d276bc;
    do {
      core_gore_cpp_FUN_004cdb20(this_ptr_01);
      iVar2 = iVar2 + 1;
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar2 < _DAT_01d276b8);
  }
  core_gore_cpp_CBloodPool_setupRenderState_FUN_004cdc90((CBloodPool *)0x1d4a944);
  iVar2 = 0;
  if (0 < _DAT_01d4a940) {
    this_ptr_00 = (CBloodPool *)0x1d4a944;
    do {
      core_gore_cpp_FUN_004cdfc0(this_ptr_00);
      iVar2 = iVar2 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 < _DAT_01d4a940);
  }
  return;
}
