// Name: sound_mp3.cpp_FUN_004e3f80
// Address: 004e3f80
// Address Range: [[004e3f80, 004e4068]]
// Convention: unknown
// Signature: void sound_mp3_cpp_FUN_004e3f80(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_mp3_cpp_FUN_004e3f80(float *param_1)

{
  double dVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  double local_38;
  double local_30;
  int local_28;
  float *local_1c;
  int local_18;
  
  local_28 = 0;
  local_1c = param_1;
  do {
    iVar3 = 1;
    pfVar2 = local_1c;
    pfVar4 = local_1c;
    do {
      fVar5 = (float10)fcos((float10)iVar3 *
                            ((float10)local_28 * (float10)_DAT_0058b680 + (float10)_DAT_0058b698));
      *pfVar2 = (float)(fVar5 * (float10)_DAT_0058b688);
      local_18 = iVar3;
      if (0.0 <= *pfVar2) {
        local_30 = (double)*pfVar2;
        modf((double)(*pfVar2 + (float)_DAT_0058b6a8),&local_30);
        dVar1 = local_30;
      }
      else {
        local_38 = (double)*pfVar2;
        modf((double)(*pfVar2 + (float)_DAT_0058b6a0),&local_38);
        dVar1 = local_38;
      }
      *pfVar2 = (float)dVar1;
      pfVar2 = pfVar2 + 1;
      iVar3 = iVar3 + 2;
      *pfVar4 = *pfVar4 * (float)_DAT_0058b690;
      pfVar4 = pfVar4 + 1;
    } while (iVar3 != 0x41);
    local_28 = local_28 + 1;
    local_1c = local_1c + 0x20;
  } while (local_28 < 0x40);
  return;
}
