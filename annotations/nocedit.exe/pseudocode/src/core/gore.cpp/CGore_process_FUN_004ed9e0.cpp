// Name: core_gore.cpp_CGore_process_FUN_004ed9e0
// Address: 004ed9e0
// Address Range: [[004ed9e0, 004eda95]]
// Convention: unknown
// Signature: undefined core_gore.cpp_CGore_process_FUN_004ed9e0()

#include "nocturne.h"

uint core_gore_cpp_CGore_process_FUN_004ed9e0(void)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  CBloodParticle *pCVar4;
  int iVar5;
  ulonglong uVar6;
  
  pCVar4 = DAT_02d833d4;
  do {
    fVar1 = *(float *)(pCVar4->unk + 0x18);
    uVar3 = (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                          (ushort)(fVar1 == 0.0) << 0xe);
    if (0.0 < fVar1) {
      uVar3 = (**(code **)(*(int *)(pCVar4->unk + 0x34) + 4))();
    }
    uVar6 = CONCAT44(DAT_02d873d8,uVar3);
    pCVar4 = pCVar4 + 1;
  } while (pCVar4 != (CBloodParticle *)&DAT_02d873d4);
  iVar5 = 0;
  if (0 < DAT_02d873d8) {
    do {
      uVar6 = core_gore_cpp_FUN_004ecad0();
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_02d873d8);
  }
  uVar2 = core_gore_cpp_FUN_004ecc40((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  iVar5 = 0;
  if (0 < DAT_02da8720) {
    do {
      uVar2 = core_gore_cpp_FUN_004ed0a0();
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_02da8720);
  }
  return uVar2;
}
