// Name: sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_0056f1e0
// Address: 0056f1e0
// Address Range: [[0056f1e0, 0056f358]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_0056f1e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_0056f1e0(void)

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
  
  iVar11 = _DAT_02c7fc88 * 8;
  if (DAT_006232ec != 2) {
    if (0 < DAT_006232ec) {
      uVar4 = *(uint *)(&DAT_02c7fbf8 + iVar11);
      uVar5 = *(uint *)(iVar11 + 0x2c7fbfc);
      uVar6 = *(uint *)(&DAT_02c7fc08 + iVar11);
      uVar7 = *(uint *)(iVar11 + 0x2c7fc0c);
      uVar8 = *(uint *)(&DAT_02c7fc18 + iVar11);
      uVar9 = *(uint *)(iVar11 + 0x2c7fc1c);
      iVar11 = 0;
      do {
        iVar12 = iVar11 + 8;
        *(uint *)(&DAT_02c80710 + iVar11) = uVar4;
        *(uint *)(iVar11 + 0x2c80714) = uVar5;
        *(uint *)(&DAT_02c80750 + iVar11) = uVar6;
        *(uint *)(iVar11 + 0x2c80754) = uVar7;
        *(uint *)(&DAT_02c80790 + iVar11) = uVar8;
        *(uint *)(iVar11 + 0x2c80794) = uVar9;
        iVar11 = iVar12;
      } while (iVar12 < DAT_006232ec * 8);
    }
    return;
  }
  fVar10 = _DAT_00623308 * _DAT_005f3128;
  dVar1 = (double)(*(float *)(_DAT_02c7fc88 * 4 + 0x2c7fc40) * fVar10);
  dVar2 = (double)(*(float *)(_DAT_02c7fc88 * 4 + 0x2c7fc48) * fVar10);
  dVar3 = (double)(*(float *)(_DAT_02c7fc88 * 4 + 0x2c7fc50) * fVar10);
  _DAT_02c80710 = *(double *)(&DAT_02c7fbf8 + iVar11) - dVar1;
  _DAT_02c80750 = *(double *)(&DAT_02c7fc08 + iVar11) - dVar2;
  _DAT_02c80790 = *(double *)(&DAT_02c7fc18 + iVar11) - dVar3;
  _DAT_02c80718 = *(double *)(&DAT_02c7fbf8 + iVar11) + dVar1;
  _DAT_02c80758 = *(double *)(&DAT_02c7fc08 + iVar11) + dVar2;
  _DAT_02c80798 = *(double *)(&DAT_02c7fc18 + iVar11) + dVar3;
  return;
}
