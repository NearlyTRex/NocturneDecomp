// Name: sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_005068e0
// Address: 005068e0
// Address Range: [[005068e0, 00506caa]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_005068e0(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule_index,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_005068e0(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule_index,SMpegFrame *frame)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  int local_54;
  SMpegLayer3SideInfo *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint *local_24;
  int local_20;
  int local_1c;
  
  iVar1 = channel * 0x48 + granule_index * 0xa0 + 0x18;
  if ((*(int *)(side_info + iVar1 + 0x10) != 0) && (*(int *)(side_info + iVar1 + 0x14) == 2)) {
    puVar8 = (uint *)(scalefactor_dest + granule_index * 0x3e);
    if (*(int *)(side_info + iVar1 + 0x18) == 0) {
      local_48 = 0;
      local_34 = 0;
      do {
        local_1c = *(int *)(&DAT_006192ac + local_34);
        local_20 = local_1c * 4;
        if (local_1c < *(int *)(&DAT_006192b0 + local_34)) {
          local_24 = puVar8 + local_1c + 0x27;
          do {
            puVar7 = (uint *)(local_20 + (int)puVar8);
            do {
              puVar5 = puVar7 + 0xd;
              uVar2 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_00504d30
                                (this_ptr,*(uint *)(&DAT_006192b8 +
                                                   *(int *)(side_info + iVar1 + 0xc) * 4 + local_48)
                                );
              puVar7[0x17] = uVar2;
              puVar7 = puVar5;
            } while (puVar5 != local_24);
            local_24 = local_24 + 1;
            local_20 = local_20 + 4;
            local_1c = local_1c + 1;
          } while (local_1c < *(int *)(&DAT_006192b0 + local_34));
        }
        local_48 = local_48 + 0x40;
        local_34 = local_34 + 4;
      } while (local_48 != 0x80);
      piVar3 = scalefactor_dest + granule_index * 0x3e + 0xc;
      do {
        piVar6 = piVar3 + 0xd;
        piVar3[0x17] = 0;
        piVar3 = piVar6;
      } while (piVar6 != scalefactor_dest + granule_index * 0x3e + 0x33);
      return;
    }
    puVar7 = puVar8;
    do {
      puVar5 = puVar7 + 1;
      uVar2 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_00504d30
                        (this_ptr,*(uint *)(&DAT_006192b8 + *(int *)(side_info + iVar1 + 0xc) * 4));
      *puVar7 = uVar2;
      puVar7 = puVar5;
    } while (puVar5 != puVar8 + 8);
    local_54 = 0xa8;
    local_3c = 3;
    do {
      piVar3 = scalefactor_dest + granule_index * 0x3e + local_3c;
      do {
        piVar6 = piVar3 + 0xd;
        uVar2 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_00504d30
                          (this_ptr,*(uint *)(&DAT_006192b8 + *(int *)(side_info + iVar1 + 0xc) * 4)
                          );
        piVar3[0x17] = uVar2;
        piVar3 = piVar6;
      } while (piVar6 != (int *)((int)scalefactor_dest + local_54 + granule_index * 0xf8));
      local_3c = local_3c + 1;
      local_54 = local_54 + 4;
    } while (local_3c < 6);
    local_40 = 6;
    local_4c = 0xb4;
    do {
      piVar3 = scalefactor_dest + granule_index * 0x3e + local_40;
      do {
        piVar6 = piVar3 + 0xd;
        uVar2 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_00504d30
                          (this_ptr,*(uint *)(&DAT_006192f8 + *(int *)(side_info + iVar1 + 0xc) * 4)
                          );
        piVar3[0x17] = uVar2;
        piVar3 = piVar6;
      } while (piVar6 != (int *)((int)scalefactor_dest + local_4c + granule_index * 0xf8));
      local_40 = local_40 + 1;
      local_4c = local_4c + 4;
    } while (local_40 < 0xc);
    piVar3 = scalefactor_dest + granule_index * 0x3e + 0xc;
    do {
      piVar6 = piVar3 + 0xd;
      piVar3[0x17] = 0;
      piVar3 = piVar6;
    } while (piVar6 != scalefactor_dest + granule_index * 0x3e + 0x33);
    return;
  }
  local_38 = 0;
  local_50 = side_info + granule_index * 0xa0;
  local_44 = 0;
  do {
    if ((*(int *)(local_50 + 8) == 0) || (channel == 0)) {
      iVar4 = *(int *)(&DAT_00619298 + local_38);
      puVar8 = (uint *)(scalefactor_dest + granule_index * 0x3e + iVar4);
      if (iVar4 < *(int *)(&DAT_0061929c + local_38)) {
        do {
          uVar2 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_00504d30
                            (this_ptr,*(uint *)(&DAT_006192b8 +
                                               *(int *)(side_info + iVar1 + 0xc) * 4 +
                                               (uint)(1 < local_44) * 0x40));
          *puVar8 = uVar2;
          iVar4 = iVar4 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar4 < *(int *)(&DAT_0061929c + local_38));
      }
    }
    local_38 = local_38 + 4;
    local_44 = local_44 + 1;
    local_50 = local_50 + 4;
  } while (local_44 < 4);
  scalefactor_dest[granule_index * 0x3e + 0x16] = 0;
  return;
}
