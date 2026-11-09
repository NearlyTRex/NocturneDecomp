// Name: core_set.cpp_FUN_005386d0
// Address: 005386d0
// Address Range: [[005386d0, 005388da]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_005386d0(undefined4 param_1,float *param_2,float *param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_FUN_005386d0(uint param_1,float *param_2,float *param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fStack_58;
  
  iVar5 = 0;
  fVar7 = 0.0;
  fStack_58 = 0.0;
  fVar8 = 0.0;
  if (0 < _DAT_0203b3e8) {
    do {
      iVar1 = *(int *)(&DAT_0203b3ec + iVar5);
      if ((*(uint *)(iVar1 + 0x11d4) & 0x7fffffff) != 0) {
        fVar4 = *(float *)(iVar1 + 0x104) - (*param_2 + *param_3);
        fVar2 = *(float *)(iVar1 + 0x108) - (param_2[1] + param_3[1]);
        fVar3 = *(float *)(iVar1 + 0x10c) - (param_2[2] + param_3[2]);
        fVar4 = (float)(((int)(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) >> 1) + _DAT_01d1a0a4)
        ;
        if (fVar4 <= *(float *)(iVar1 + 0x11d4)) {
          fVar4 = 1.0 - fVar4 / *(float *)(iVar1 + 0x11d4);
          fVar8 = *(float *)(iVar1 + 0x11c4) * fVar4 + fVar8;
          fVar7 = *(float *)(iVar1 + 0x11c8) * fVar4 + fVar7;
          fStack_58 = *(float *)(iVar1 + 0x11cc) * fVar4 + fStack_58;
        }
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < _DAT_0203b3e8 * 4);
  }
  if (_DAT_0203b3e8 == 0) {
    fVar7 = 128.0;
    fStack_58 = 128.0;
    fVar8 = 128.0;
  }
  if ((float)_DAT_005d06af < fVar8) {
    fVar8 = 255.0;
  }
  if ((float)_DAT_005d06af < fVar7) {
    fVar7 = 255.0;
  }
  if ((float)_DAT_005d06af < fStack_58) {
    fStack_58 = 255.0;
  }
  fVar6 = (float10)fStack_58;
  round(fVar7,fVar8);
  iVar5 = round();
  (&DAT_0060b034)[param_4 * 0xc] = iVar5 << 8;
  iVar5 = round();
  (&DAT_0060b038)[param_4 * 0xc] = iVar5 << 8;
  (&DAT_0060b03c)[param_4 * 0xc] = (int)ROUND(fVar6) << 8;
  return;
}
