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
  CBloodParticle *pCVar1;
  int iVar2;
  int iVar3;
  
  pCVar1 = DAT_02d833d4;
  do {
    if (0.0 < *(float *)(pCVar1->unk + 0x18)) {
      (**(code **)(*(int *)(pCVar1->unk + 0x34) + 4))();
    }
    pCVar1 = pCVar1 + 1;
  } while (pCVar1 != (CBloodParticle *)&DAT_02d873d4);
  iVar2 = 0;
  if (0 < DAT_02d873d8) {
    do {
      core_gore_cpp_FUN_004ecad0();
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_02d873d8);
  }
  core_gore_cpp_FUN_004ecc40();
  iVar3 = 0;
  iVar2 = extraout_EAX;
  if (0 < DAT_02da8720) {
    do {
      core_gore_cpp_FUN_004ed0a0();
      iVar3 = iVar3 + 1;
      iVar2 = extraout_EAX_00;
    } while (iVar3 < DAT_02da8720);
  }
  return iVar2;
}
