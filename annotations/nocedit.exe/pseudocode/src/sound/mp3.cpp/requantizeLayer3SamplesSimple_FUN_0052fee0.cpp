// Name: sound_mp3.cpp_requantizeLayer3SamplesSimple_FUN_0052fee0
// Address: 0052fee0
// Address Range: [[0052fee0, 005301ac]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_requantizeLayer3SamplesSimple_FUN_0052fee0(int *scalefactor_indices,uint *quantized_samples,float *dequantized_output,SMpegFrame *frame_info)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_requantizeLayer3SamplesSimple_FUN_0052fee0(int *scalefactor_indices,uint *quantized_samples,float *dequantized_output,SMpegFrame *frame_info)

{
  byte bVar2;
  uint *puVar3;
  int iVar4;
  int iVar2;
  int iVar5;
  int iVar6;
  SBitAllocationTable *local_58;
  int local_54;
  int local_40;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  int *local_28;
  uint *local_24;
  int *local_20;
  int local_1c;
  float *local_18;
  int iVar1;
  
  iVar1 = frame_info->samples_per_granule;
  iVar2 = frame_info->sblimit;
  local_58 = frame_info->allocation_table;
  if (0 < iVar2) {
    local_54 = 0;
    do {
      local_40 = 0;
      do {
        local_1c = 0;
        if (0 < iVar1) {
          local_34 = (uint *)(local_54 + local_40 + (int)dequantized_output);
          local_24 = (uint *)((int)dequantized_output + local_40 + local_54);
          local_2c = (uint *)(local_40 + local_54 + (int)scalefactor_indices);
          local_30 = (uint *)(local_54 + local_40 + (int)scalefactor_indices);
          local_18 = (float *)(local_54 + local_40 + (int)dequantized_output);
          local_28 = (int *)(local_54 + (int)quantized_samples);
          local_20 = (int *)(local_54 + (int)quantized_samples);
          do {
            if (*local_28 == 0) {
              *local_34 = 0;
            }
            else {
              for (bVar2 = 0;
                  (uint)(1 << (bVar2 & 0x1f)) <
                  (uint)(&local_58->table_version)
                        [*(int *)((int)quantized_samples + local_54 + local_1c * 0x80) * 4];
                  bVar2 = bVar2 + 1) {
              }
              if ((*local_2c >> (bVar2 - 1 & 0x1f) & 1) == 1) {
                *local_24 = 0;
              }
              else {
                *local_24 = 0xbf800000;
              }
              iVar4 = 1 << (bVar2 - 1 & 0x1f);
              *local_18 = (float)(iVar4 - 1U & *local_30) / (float)iVar4 + *local_18;
              *local_18 = *local_18 +
                          (float)g_MpegRequantizationOffsetTable
                                 [(&local_58->table_index)[*local_20 * 4]];
              *local_18 = *local_18 *
                          (float)g_MpegRequantizationScaleTable
                                 [(&local_58->table_index)[*local_20 * 4]];
            }
            local_28 = local_28 + 0x20;
            local_34 = local_34 + 0x60;
            local_24 = local_24 + 0x60;
            local_2c = local_2c + 0x60;
            local_20 = local_20 + 0x20;
            local_30 = local_30 + 0x60;
            local_18 = local_18 + 0x60;
            local_1c = local_1c + 1;
          } while (local_1c < iVar1);
        }
        local_40 = local_40 + 0x80;
      } while (local_40 != 0x180);
      local_54 = local_54 + 4;
      local_58 = (SBitAllocationTable *)&local_58[9].num_lines;
    } while (local_54 < iVar2 * 4);
  }
  if (iVar2 < 0x20) {
    iVar6 = iVar2 * 4;
    do {
      iVar2 = 0;
      do {
        iVar5 = 0;
        if (0 < iVar1) {
          puVar3 = (uint *)(iVar6 + iVar2 + (int)dequantized_output);
          do {
            iVar5 = iVar5 + 1;
            *puVar3 = 0;
            puVar3 = puVar3 + 0x60;
          } while (iVar5 < iVar1);
        }
        iVar2 = iVar2 + 0x80;
      } while (iVar2 != 0x180);
      iVar6 = iVar6 + 4;
    } while (iVar6 < 0x80);
  }
  return;
}
