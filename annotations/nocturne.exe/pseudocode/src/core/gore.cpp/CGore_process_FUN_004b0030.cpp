// Name: core_gore.cpp_CGore_process_FUN_004b0030
// Address: 004b0030
// Address Range: [[004b0030, 004b00e5]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_process_FUN_004b0030(CGore *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CGore_process_FUN_004b0030(CGore *this_ptr)

{
  byte *puVar1;
  int iVar2;
  CBloodPool *this_ptr_00;
  CBloodSplat *this_ptr_01;
  
  puVar1 = &DAT_01c78cec;
  do {
    if (0.0 < *(float *)(puVar1 + 0x18)) {
      (**(code **)(*(int *)(puVar1 + 0x34) + 4))(puVar1);
    }
    puVar1 = puVar1 + 0x40;
  } while (puVar1 != &DAT_01c7ccec);
  iVar2 = 0;
  if (0 < _DAT_01c7ccf0) {
    this_ptr_01 = (CBloodSplat *)0x1c7ccf4;
    do {
      core_gore_cpp_CBloodSplat_processAge_FUN_004af130(this_ptr_01);
      iVar2 = iVar2 + 1;
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar2 < _DAT_01c7ccf0);
  }
  core_gore_cpp_CBloodPool_setupRenderState_FUN_004af2a0((CBloodPool *)0x1c9e03c);
  iVar2 = 0;
  if (0 < _DAT_01c9e038) {
    this_ptr_00 = (CBloodPool *)0x1c9e03c;
    do {
      core_gore_cpp_CBloodPool_processAge_FUN_004af700(this_ptr_00);
      iVar2 = iVar2 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 < _DAT_01c9e038);
  }
  return;
}
