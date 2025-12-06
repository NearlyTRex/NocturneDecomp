// Name: sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20
// Address: 00530d20
// Address Range: [[00530d20, 005310ea]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20(CMP3Decoder * this_ptr, int * scalefactor_dest, SMpegLayer3Granule * granule_info, int channel, int granule_index, SMpegFrame * frame)

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20
          (CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3Granule *granule_info,int channel,
          int granule_index,SMpegFrame *frame)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar8;
  int local_60;
  int local_54;
  SMpegLayer3Granule *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_2c;
  int local_20;
  int local_18;
  int *piVar7;
  
  if ((granule_info[granule_index].table_select[channel * 0x12 + -3] != 0) &&
     (granule_info[granule_index].table_select[channel * 0x12 + -2] == 2)) {
    puVar8 = (uint *)(scalefactor_dest + granule_index * 0x3e);
    if (granule_info[granule_index].table_select[channel * 0x12 + -1] == 0) {
      local_48 = 0;
      local_34 = 0;
      do {
        iVar2 = *(int *)((int)g_Layer3ShortBandBoundaries + local_34);
        local_18 = local_48;
        local_20 = iVar2 * 4;
        if (iVar2 < *(int *)((int)g_Layer3ShortBandBoundaries + local_34 + 4)) {
          do {
            puVar5 = (uint *)(local_20 + (int)puVar8);
            do {
              puVar3 = puVar5 + 0xd;
              uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170
                                (this_ptr,*(uint *)((int)g_Layer3ScalefacLengths1 +
                                                   granule_info[granule_index].table_select
                                                   [channel * 0x12 + -4] * 4 + local_18));
              puVar5[0x17] = uVar1;
              puVar5 = puVar3;
            } while (puVar3 != puVar8 + iVar2 + 0x27);
            local_20 = local_20 + 4;
            local_18 = local_18 + 1;
          } while (local_18 < (int)puVar8[0x19f990]);
        }
        local_48 = local_48 + 0x40;
        local_34 = local_34 + 4;
      } while (local_48 != 0x80);
      piVar6 = scalefactor_dest + granule_index * 0x3e + 0xc;
      do {
        piVar7 = piVar6 + 0xd;
        piVar6[0x17] = 0;
        piVar6 = piVar7;
      } while (piVar7 != scalefactor_dest + granule_index * 0x3e + 0x33);
      return;
    }
    puVar5 = puVar8;
    do {
      puVar3 = puVar5 + 1;
      uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170
                        (this_ptr,g_Layer3ScalefacLengths1
                                  [granule_info[granule_index].table_select[channel * 0x12 + -4]]);
      *puVar5 = uVar1;
      puVar5 = puVar3;
    } while (puVar3 != puVar8 + 8);
    local_38 = 3;
    do {
      iVar2 = (int)granule_info + local_3c * 4 + (int)frame * 0xf8;
      do {
        iVar4 = iVar2 + 0x34;
        uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170
                          (this_ptr,g_Layer3ScalefacLengths1
                                    [granule_info[granule_index].table_select[channel * 0x12 + -4]])
        ;
        *(uint *)(iVar2 + 0x5c) = uVar1;
        iVar2 = iVar4;
      } while (iVar4 != local_60 + local_54);
      local_38 = local_38 + 1;
    } while (local_38 < 6);
    local_3c = 6;
    do {
      iVar2 = (int)granule_info + local_40 * 4 + (int)frame * 0xf8;
      do {
        iVar4 = iVar2 + 0x34;
        uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170
                          (this_ptr,g_Layer3ScalefacLengths2
                                    [granule_info[granule_index].table_select[channel * 0x12 + -4]])
        ;
        *(uint *)(iVar2 + 0x5c) = uVar1;
        iVar2 = iVar4;
      } while (iVar4 != (int)granule_info + local_4c + (int)frame * 0xf8);
      local_3c = local_3c + 1;
    } while (local_3c < 0xc);
    iVar2 = (int)granule_info + (int)frame * 0xf8 + 0x30;
    do {
      iVar4 = iVar2 + 0x34;
      *(uint *)(iVar2 + 0x5c) = 0;
      iVar2 = iVar4;
    } while (iVar4 != (int)granule_info + (int)frame * 0xf8 + 0xcc);
    return;
  }
  local_38 = 0;
  local_50 = granule_info + granule_index;
  local_44 = 0;
  do {
    if ((*(int *)local_50->field2_0x8 == 0) || (channel == 0)) {
      iVar2 = *(int *)((int)g_Layer3LongBandBoundaries + local_38);
      puVar8 = (uint *)(scalefactor_dest + granule_index * 0x3e + iVar2);
      if (iVar2 < *(int *)((int)g_Layer3LongBandBoundaries + local_38 + 4)) {
        do {
          uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170
                            (this_ptr,g_Layer3ScalefacLengths1
                                      [(uint)(1 < local_44) * 0x10 +
                                       granule_info[granule_index].table_select[channel * 0x12 + -4]
                                      ]);
          *puVar8 = uVar1;
          iVar2 = iVar2 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar2 < *(int *)((int)g_Layer3LongBandBoundaries + local_2c + 4));
      }
    }
    local_38 = local_38 + 4;
    local_44 = local_44 + 1;
    local_50 = (SMpegLayer3Granule *)&local_50->field1_0x4;
  } while (local_44 < 4);
  scalefactor_dest[granule_index * 0x3e + 0x16] = 0;
  return;
}
