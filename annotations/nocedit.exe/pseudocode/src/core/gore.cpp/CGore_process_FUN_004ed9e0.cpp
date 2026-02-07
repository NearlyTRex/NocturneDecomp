// Name: core_gore.cpp_CGore_process_FUN_004ed9e0
// Address: 004ed9e0
// Address Range: [[004ed9e0, 004eda95]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CGore_process_FUN_004ed9e0(CGore *this_ptr)

#include "nocturne.h"

int __cdecl core_gore_cpp_CGore_process_FUN_004ed9e0(CGore *this_ptr)

{
  int extraout_EAX;
  int extraout_EAX_00;
  CBloodParticle *this_ptr_00;
  int iVar1;
  int iVar2;
  
  this_ptr_00 = DAT_02d833d4;
  do {
    if (0.0 < (this_ptr_00->base).lifetime_remaining) {
      (*((this_ptr_00->base).vtable)->process)(&this_ptr_00->base);
    }
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CBloodParticle *)&DAT_02d873d4);
  iVar1 = 0;
  if (0 < DAT_02d873d8) {
    do {
      core_gore_cpp_FUN_004ecad0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_02d873d8);
  }
  core_gore_cpp_FUN_004ecc40();
  iVar2 = 0;
  iVar1 = extraout_EAX;
  if (0 < DAT_02da8720) {
    do {
      core_gore_cpp_FUN_004ed0a0();
      iVar2 = iVar2 + 1;
      iVar1 = extraout_EAX_00;
    } while (iVar2 < DAT_02da8720);
  }
  return iVar1;
}
