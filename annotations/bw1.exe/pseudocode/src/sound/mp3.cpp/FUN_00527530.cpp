// Name: sound_mp3.cpp_FUN_00527530
// Address: 00527530
// Address Range: [[00527530, 00527aa9]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_FUN_00527530(CMP3Decoder *this_ptr,CFileBitStream *bit_stream,SMpegLayer3SideInfo *side_info_array,SMpegFrame *frame)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_mp3_cpp_FUN_00527530(CMP3Decoder *this_ptr,CFileBitStream *bit_stream,SMpegLayer3SideInfo *side_info_array,SMpegFrame *frame)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  SMpegLayer3SideInfo *pSVar5;
  SMpegLayer3SideInfo *pSVar6;
  SMpegLayer3SideInfo *pSVar7;
  int iVar8;
  int iVar9;
  SMpegLayer3SideInfo *local_5c;
  int local_58;
  SMpegLayer3SideInfo *local_48;
  SMpegLayer3SideInfo *local_44;
  SMpegLayer3SideInfo *local_40;
  SMpegLayer3SideInfo *local_3c;
  SMpegLayer3SideInfo *local_38;
  int local_34;
  int local_30;
  SMpegLayer3SideInfo *local_2c;
  SMpegLayer3SideInfo *local_28;
  SMpegLayer3SideInfo *local_24;
  
  iVar1 = *(int *)(frame + 0x10);
  if (**(int **)frame == 0) {
    uVar3 = sound_mp3_cpp_FUN_00525cd0(bit_stream,8);
    *(uint *)side_info_array = uVar3;
    if (iVar1 == 1) {
      iVar9 = 1;
    }
    else {
      iVar9 = 2;
    }
    uVar3 = sound_mp3_cpp_FUN_00525cd0(bit_stream,iVar9);
    *(uint *)(side_info_array + 4) = uVar3;
    local_30 = 0;
    if (0 < iVar1) {
      local_28 = side_info_array;
      local_48 = side_info_array;
      local_3c = side_info_array;
      local_38 = side_info_array;
      do {
        uVar3 = sound_mp3_cpp_FUN_00525cd0(bit_stream,0xc);
        *(uint *)(local_28 + 0x18) = uVar3;
        uVar3 = sound_mp3_cpp_FUN_00525cd0(bit_stream,9);
        *(uint *)(local_28 + 0x1c) = uVar3;
        uVar3 = sound_mp3_cpp_FUN_00525cd0(bit_stream,8);
        *(uint *)(local_28 + 0x20) = uVar3;
        uVar3 = sound_mp3_cpp_FUN_00525cd0(bit_stream,9);
        *(uint *)(local_28 + 0x24) = uVar3;
        uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_00525be0(bit_stream);
        pSVar5 = side_info_array + local_30 * 0xa0;
        *(uint *)(local_28 + 0x28) = uVar3;
        if (uVar3 == 0) {
          iVar9 = 0;
          do {
            uVar3 = sound_mp3_cpp_FUN_00525cd0(bit_stream,5);
            iVar8 = iVar9 + 4;
            *(uint *)(pSVar5 + iVar9 + 0x34) = uVar3;
            iVar9 = iVar8;
          } while (iVar8 != 0xc);
          uVar3 = sound_mp3_cpp_FUN_00525cd0(bit_stream,4);
          *(uint *)(pSVar5 + 0x4c) = uVar3;
          uVar3 = sound_mp3_cpp_FUN_00525cd0(bit_stream,3);
          *(uint *)(pSVar5 + 0x2c) = 0;
          *(uint *)(pSVar5 + 0x50) = uVar3;
        }
        else {
          uVar3 = sound_mp3_cpp_FUN_00525cd0(bit_stream,2);
          *(uint *)(local_28 + 0x2c) = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_00525be0(bit_stream);
          *(uint *)(local_28 + 0x30) = uVar3;
          pSVar6 = pSVar5;
          do {
            pSVar7 = pSVar6 + 4;
            uVar3 = sound_mp3_cpp_FUN_00525cd0(bit_stream,5);
            *(uint *)(pSVar6 + 0x34) = uVar3;
            pSVar6 = pSVar7;
          } while (pSVar7 != pSVar5 + 8);
          uVar3 = (uint)pSVar7 ^ (uint)(pSVar5 + 8);
          do {
            uVar4 = sound_mp3_cpp_FUN_00525cd0(bit_stream,3);
            iVar9 = uVar3 + local_30 * 0xa0;
            uVar3 = uVar3 + 4;
            *(uint *)(side_info_array + iVar9 + 0x40) = uVar4;
          } while (uVar3 != 0xc);
          if (*(int *)(side_info_array + local_30 * 0xa0 + 0x2c) == 0) {
            _DAT_01d1d400 = "..\\sound\\mp3.cpp";
            _DAT_01d1d404 = 0x704;
            core_main_c_FUN_005030e0("Side info bad: block_type == 0 in split block.  File: %s",&DAT_01d404c8);
          }
          else if ((*(int *)(side_info_array + local_30 * 0xa0 + 0x2c) == 2) &&
                  (*(int *)(side_info_array + local_30 * 0xa0 + 0x30) == 0)) {
            *(uint *)(side_info_array + local_30 * 0xa0 + 0x4c) = 8;
          }
          else {
            *(uint *)(local_48 + 0x4c) = 7;
          }
          *(int *)(local_3c + 0x50) = 0x14 - *(int *)(local_3c + 0x4c);
        }
        uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_00525be0(bit_stream);
        *(uint *)(local_38 + 0x58) = uVar3;
        uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_00525be0(bit_stream);
        local_28 = local_28 + 0xa0;
        local_30 = local_30 + 1;
        *(uint *)(local_38 + 0x5c) = uVar3;
        local_48 = local_48 + 0xa0;
        local_3c = local_3c + 0xa0;
        local_38 = local_38 + 0xa0;
      } while (local_30 < iVar1);
    }
  }
  else {
    uVar3 = sound_mp3_cpp_FUN_00525cd0(bit_stream,9);
    *(uint *)side_info_array = uVar3;
    if (iVar1 == 1) {
      iVar9 = 5;
    }
    else {
      iVar9 = 3;
    }
    uVar3 = sound_mp3_cpp_FUN_00525cd0(bit_stream,iVar9);
    *(uint *)(side_info_array + 4) = uVar3;
    iVar9 = 0;
    if (0 < iVar1) {
      local_5c = side_info_array + 0x10;
      do {
        pSVar5 = side_info_array + iVar9 * 0xa0;
        do {
          pSVar6 = pSVar5 + 4;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_00525be0(bit_stream);
          *(uint *)(pSVar5 + 8) = uVar3;
          pSVar5 = pSVar6;
        } while (pSVar6 != local_5c);
        local_5c = local_5c + 0xa0;
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar1);
    }
    local_58 = 0;
    do {
      local_34 = 0;
      if (0 < iVar1) {
        local_44 = side_info_array + local_58;
        local_40 = local_44;
        local_2c = local_44;
        local_24 = local_44;
        do {
          uVar3 = sound_mp3_cpp_FUN_00525cd0(bit_stream,0xc);
          *(uint *)(local_24 + 0x18) = uVar3;
          uVar3 = sound_mp3_cpp_FUN_00525cd0(bit_stream,9);
          *(uint *)(local_24 + 0x1c) = uVar3;
          uVar3 = sound_mp3_cpp_FUN_00525cd0(bit_stream,8);
          *(uint *)(local_24 + 0x20) = uVar3;
          uVar3 = sound_mp3_cpp_FUN_00525cd0(bit_stream,4);
          *(uint *)(local_24 + 0x24) = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_00525be0(bit_stream);
          *(uint *)(local_24 + 0x28) = uVar3;
          if (uVar3 == 0) {
            iVar9 = 0;
            do {
              uVar3 = sound_mp3_cpp_FUN_00525cd0(bit_stream,5);
              iVar8 = local_58 + local_34 * 0xa0;
              iVar2 = iVar9 + iVar8;
              iVar9 = iVar9 + 4;
              *(uint *)(side_info_array + iVar2 + 0x34) = uVar3;
            } while (iVar9 != 0xc);
            uVar3 = sound_mp3_cpp_FUN_00525cd0(bit_stream,4);
            *(uint *)(side_info_array + iVar8 + 0x4c) = uVar3;
            uVar3 = sound_mp3_cpp_FUN_00525cd0(bit_stream,3);
            *(uint *)(side_info_array + iVar8 + 0x2c) = 0;
            *(uint *)(side_info_array + iVar8 + 0x50) = uVar3;
          }
          else {
            uVar3 = sound_mp3_cpp_FUN_00525cd0(bit_stream,2);
            *(uint *)(local_24 + 0x2c) = uVar3;
            uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_00525be0(bit_stream);
            pSVar6 = side_info_array + local_58 + local_34 * 0xa0;
            *(uint *)(local_24 + 0x30) = uVar3;
            pSVar5 = pSVar6;
            do {
              pSVar7 = pSVar5 + 4;
              uVar3 = sound_mp3_cpp_FUN_00525cd0(bit_stream,5);
              *(uint *)(pSVar5 + 0x34) = uVar3;
              pSVar5 = pSVar7;
            } while (pSVar7 != pSVar6 + 8);
            uVar3 = (uint)pSVar7 ^ (uint)(pSVar6 + 8);
            do {
              uVar4 = sound_mp3_cpp_FUN_00525cd0(bit_stream,3);
              iVar9 = local_58 + local_34 * 0xa0;
              iVar8 = uVar3 + iVar9;
              uVar3 = uVar3 + 4;
              *(uint *)(side_info_array + iVar8 + 0x40) = uVar4;
            } while (uVar3 != 0xc);
            if (*(int *)(side_info_array + iVar9 + 0x2c) == 0) {
              _DAT_01d1d400 = "..\\sound\\mp3.cpp";
              _DAT_01d1d404 = 0x6d5;
              core_main_c_FUN_005030e0("Side info bad: block_type == 0 in split block.  File: %s",&DAT_01d404c8);
            }
            else if ((*(int *)(side_info_array + iVar9 + 0x2c) == 2) &&
                    (*(int *)(side_info_array + iVar9 + 0x30) == 0)) {
              *(uint *)(side_info_array + iVar9 + 0x4c) = 8;
            }
            else {
              *(uint *)(local_44 + 0x4c) = 7;
            }
            *(int *)(local_40 + 0x50) = 0x14 - *(int *)(local_40 + 0x4c);
          }
          uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_00525be0(bit_stream);
          *(uint *)(local_2c + 0x54) = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_00525be0(bit_stream);
          *(uint *)(local_2c + 0x58) = uVar3;
          uVar3 = sound_mp3_cpp_CFileBitStream_readBit_FUN_00525be0(bit_stream);
          local_24 = local_24 + 0xa0;
          local_34 = local_34 + 1;
          *(uint *)(local_2c + 0x5c) = uVar3;
          local_44 = local_44 + 0xa0;
          local_40 = local_40 + 0xa0;
          local_2c = local_2c + 0xa0;
        } while (local_34 < iVar1);
      }
      local_58 = local_58 + 0x48;
    } while (local_58 != 0x90);
  }
  return;
}
