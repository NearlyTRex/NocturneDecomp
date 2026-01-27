// Name: core_gore.cpp_FUN_004ed760
// Address: 004ed760
// Address Range: [[004ed760, 004ed7aa]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ed760()

#include "nocturne.h"

void core_gore_cpp_FUN_004ed760(void)

{
  CBloodParticle *pCVar1;
  CBloodParticle *pCVar2;
  
  DAT_02d833d0 = 0;
  DAT_02d873d4 = 0;
  DAT_02d873d8 = 0;
  DAT_02da871c = 0;
  DAT_02da8720 = 0;
  pCVar1 = DAT_02d833d4;
  do {
    pCVar2 = pCVar1 + 1;
    pCVar1->unk[0x18] = '\0';
    pCVar1->unk[0x19] = '\0';
    pCVar1->unk[0x1a] = '\0';
    pCVar1->unk[0x1b] = '\0';
    pCVar1 = pCVar2;
  } while (pCVar2 != (CBloodParticle *)&DAT_02d873d4);
  DAT_02da8c28 = 0;
  DAT_02da8c24 = 0;
  return;
}
