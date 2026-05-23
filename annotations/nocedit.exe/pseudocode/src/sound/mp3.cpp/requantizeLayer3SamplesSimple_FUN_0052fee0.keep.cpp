// Name: sound_mp3.cpp_requantizeLayer3SamplesSimple_FUN_0052fee0
// Address: 0052fee0
// MANUAL RECONSTRUCTION
// Address Range: [[0052fee0, 005301ac]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_requantizeLayer3SamplesSimple_FUN_0052fee0(int *scalefactor_indices,uint *quantized_samples,float *dequantized_output,SMpegFrame *frame_info)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_requantizeLayer3SamplesSimple_FUN_0052fee0(int *scalefactor_indices,uint *quantized_samples,float *dequantized_output,SMpegFrame *frame_info)

{
  byte bVar2;
  float *puVar3;
  int iVar4;
  int iVar2;
  int iVar5;
  int iVar6;
  SMpegAllocationEntry *local_58;
  int local_54;
  int local_40;
  int *local_30;
  uint *local_28;
  int local_1c;
  float *local_18;
  int iVar1;

  iVar1 = frame_info->channel_count;
  iVar2 = frame_info->sblimit;
  local_58 = frame_info->allocation_entries;
  if (0 < iVar2) {
    local_54 = 0;
    do {
      local_40 = 0;
      do {
        local_1c = 0;
        if (0 < iVar1) {
          local_18 = &dequantized_output[local_54 + local_40];
          local_30 = &scalefactor_indices[local_54 + local_40];
          local_28 = &quantized_samples[local_54];
          do {
            if (*local_28 == 0) {
              *(uint *)local_18 = 0;
            }
            else {
              for (bVar2 = 0;
                  (uint)(1 << (bVar2 & 0x1f)) < (uint)local_58[*local_28].value_range;
                  bVar2 = bVar2 + 1) {
              }
              if ((*local_30 >> (bVar2 - 1 & 0x1f) & 1) == 1) {
                *(uint *)local_18 = 0;
              }
              else {
                *(uint *)local_18 = 0xbf800000;
              }
              iVar4 = 1 << (bVar2 - 1 & 0x1f);
              *local_18 = (float)(iVar4 - 1U & *local_30) / (float)iVar4 + *local_18;
              *local_18 = *local_18 +
                          (float)g_MpegRequantizationOffsetTable
                                 [local_58[*local_28].requantization_index];
              *local_18 = *local_18 *
                          (float)g_MpegRequantizationScaleTable
                                 [local_58[*local_28].requantization_index];
            }
            local_28 = local_28 + 0x20;
            local_30 = local_30 + 0x60;
            local_18 = local_18 + 0x60;
            local_1c = local_1c + 1;
          } while (local_1c < iVar1);
        }
        local_40 = local_40 + 0x20;
      } while (local_40 != 0x60);
      local_54 = local_54 + 1;
      local_58 = local_58 + 0x10;
    } while (local_54 < iVar2);
  }
  if (iVar2 < 0x20) {
    iVar6 = iVar2;
    do {
      iVar2 = 0;
      do {
        iVar5 = 0;
        if (0 < iVar1) {
          puVar3 = &dequantized_output[iVar6 + iVar2];
          do {
            iVar5 = iVar5 + 1;
            *puVar3 = 0.0f;
            puVar3 = puVar3 + 0x60;
          } while (iVar5 < iVar1);
        }
        iVar2 = iVar2 + 0x20;
      } while (iVar2 != 0x60);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x20);
  }
  return;
}
