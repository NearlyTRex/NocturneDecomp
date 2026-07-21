// Name: sound_mp3.cpp_requantizeSamples_FUN_004e3d30
// Address: 004e3d30
// Address Range: [[004e3d30, 004e3e6a]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_requantizeSamples_FUN_004e3d30(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_requantizeSamples_FUN_004e3d30(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  float fVar2;
  byte bVar3;
  float *pfVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int local_28;
  int local_18;
  
  iVar1 = *(int *)(param_4 + 0x10);
  local_28 = 0;
  do {
    local_18 = 0;
    if (0 < iVar1) {
      puVar9 = (uint *)(local_28 + param_1);
      pfVar4 = (float *)(local_28 + param_2);
      piVar5 = (int *)(local_28 + param_3);
      pfVar6 = pfVar4;
      do {
        if (*piVar5 == 0) {
          *pfVar6 = 0.0;
        }
        else {
          bVar3 = (byte)*piVar5;
          if ((*(uint *)(local_28 + local_18 * 0x180 + param_1) >> ((byte)*piVar5 & 0x1f) & 1) == 1)
          {
            *pfVar6 = 0.0;
          }
          else {
            *pfVar6 = -1.0;
          }
          iVar7 = 1 << (bVar3 & 0x1f);
          fVar2 = 1.0 / (float)iVar7;
          iVar8 = 1 << (bVar3 + 1 & 0x1f);
          *pfVar4 = ((float)iVar8 * ((float)(*puVar9 & iVar7 - 1U) * fVar2 + *pfVar4 + fVar2)) /
                    (float)(iVar8 + -1);
        }
        pfVar6 = pfVar6 + 0x60;
        piVar5 = piVar5 + 0x20;
        local_18 = local_18 + 1;
        puVar9 = puVar9 + 0x60;
        pfVar4 = pfVar4 + 0x60;
      } while (local_18 < iVar1);
    }
    local_28 = local_28 + 4;
  } while (local_28 != 0x80);
  return;
}
