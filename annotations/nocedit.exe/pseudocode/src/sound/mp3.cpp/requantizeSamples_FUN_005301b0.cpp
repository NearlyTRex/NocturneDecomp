// Name: sound_mp3.cpp_requantizeSamples_FUN_005301b0
// Address: 005301b0
// Address Range: [[005301b0, 005302ea]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_requantizeSamples_FUN_005301b0(SMpegSubbandScalefactors *quantized_samples,SMpegSubbandScalefactors *dequantized_samples,SMpegSubbandAllocation *allocation,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_requantizeSamples_FUN_005301b0(SMpegSubbandScalefactors *quantized_samples,SMpegSubbandScalefactors *dequantized_samples,SMpegSubbandAllocation *allocation,SMpegFrame *frame)

{
  float *pfVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int local_28;
  int local_18;
  int iVar1;
  byte bVar3;
  float fVar2;
  
  iVar1 = frame->channel_count;
  local_28 = 0;
  do {
    local_18 = 0;
    if (0 < iVar1) {
      puVar9 = (uint *)((int)&quantized_samples->codes + local_28);
      pfVar4 = (float *)((int)&dequantized_samples->codes + local_28);
      piVar5 = (int *)((int)allocation->granules + local_28);
      pfVar6 = pfVar4;
      do {
        if (*piVar5 == 0) {
          *pfVar6 = 0.0;
        }
        else {
          bVar3 = (byte)*piVar5;
          if ((*(uint *)((int)&quantized_samples[local_18].codes + local_28) >>
               ((byte)*piVar5 & 0x1f) & 1) == 1) {
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
