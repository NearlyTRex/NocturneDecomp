// Name: sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_0054cb70
// Address: 0054cb70
// Address Range: [[0054cb70, 0054cce8]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_0054cb70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_0054cb70(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  
  iVar11 = _DAT_026484b8 * 8;
  if (DAT_0061bc9c != 2) {
    if (0 < DAT_0061bc9c) {
      uVar4 = *(uint *)(&DAT_02648428 + iVar11);
      uVar5 = *(uint *)(iVar11 + 0x264842c);
      uVar6 = *(uint *)(&DAT_02648438 + iVar11);
      uVar7 = *(uint *)(iVar11 + 0x264843c);
      uVar8 = *(uint *)(&DAT_02648448 + iVar11);
      uVar9 = *(uint *)(iVar11 + 0x264844c);
      iVar11 = 0;
      do {
        iVar12 = iVar11 + 8;
        *(uint *)(&DAT_02648f40 + iVar11) = uVar4;
        *(uint *)(iVar11 + 0x2648f44) = uVar5;
        *(uint *)(&DAT_02648f80 + iVar11) = uVar6;
        *(uint *)(iVar11 + 0x2648f84) = uVar7;
        *(uint *)(&DAT_02648fc0 + iVar11) = uVar8;
        *(uint *)(iVar11 + 0x2648fc4) = uVar9;
        iVar11 = iVar12;
      } while (iVar12 < DAT_0061bc9c * 8);
    }
    return;
  }
  fVar10 = _DAT_0061bcb8 * _DAT_005e7f2e;
  dVar1 = (double)(*(float *)(_DAT_026484b8 * 4 + 0x2648470) * fVar10);
  dVar2 = (double)(*(float *)(_DAT_026484b8 * 4 + 0x2648478) * fVar10);
  dVar3 = (double)(*(float *)(_DAT_026484b8 * 4 + 0x2648480) * fVar10);
  _DAT_02648f40 = *(double *)(&DAT_02648428 + iVar11) - dVar1;
  _DAT_02648f80 = *(double *)(&DAT_02648438 + iVar11) - dVar2;
  _DAT_02648fc0 = *(double *)(&DAT_02648448 + iVar11) - dVar3;
  _DAT_02648f48 = *(double *)(&DAT_02648428 + iVar11) + dVar1;
  _DAT_02648f88 = *(double *)(&DAT_02648438 + iVar11) + dVar2;
  _DAT_02648fc8 = *(double *)(&DAT_02648448 + iVar11) + dVar3;
  return;
}
