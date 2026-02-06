// Name: core_flies.cpp_CFlies_FUN_004cc760
// Address: 004cc760
// Address Range: [[004cc760, 004cc7ee] [004cc808, 004cc819]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_FUN_004cc760(CFlies *this_ptr)

#include "nocturne.h"

void __cdecl core_flies_cpp_CFlies_FUN_004cc760(CFlies *this_ptr)

{
  float *pfVar1;
  float fVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int in_stack_00000008;
  
  pcVar3 = this_ptr->unk1 + in_stack_00000008 * 0x34;
  pfVar1 = core_flies_cpp_CFlies_FUN_004cc820(this_ptr);
  if ((float *)(pcVar3 + 4) != pfVar1) {
    *(float *)(pcVar3 + 4) = *pfVar1;
    *(float *)(pcVar3 + 8) = pfVar1[1];
    *(float *)(pcVar3 + 0xc) = pfVar1[2];
  }
  pcVar5 = pcVar3 + 4;
  pcVar4 = pcVar3 + 0x10;
  do {
    pfVar1 = core_flies_cpp_CFlies_FUN_004cc820(this_ptr);
    if ((float *)pcVar4 != pfVar1) {
      *(float *)pcVar4 = *pfVar1;
      *(float *)(pcVar4 + 4) = pfVar1[1];
      *(float *)(pcVar4 + 8) = pfVar1[2];
    }
    pcVar5 = pcVar5 + 0xc;
    pcVar4 = pcVar4 + 0xc;
  } while (pcVar5 != pcVar3 + 0x28);
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
  *(float *)pcVar3 = fVar2;
  return;
}
