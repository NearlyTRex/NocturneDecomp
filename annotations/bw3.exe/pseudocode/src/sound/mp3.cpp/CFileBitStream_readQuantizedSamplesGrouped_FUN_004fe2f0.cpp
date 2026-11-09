// Name: sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_004fe2f0
// Address: 004fe2f0
// Address Range: [[004fe2f0, 004fe57c]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_004fe2f0(CFileBitStream *this_ptr,SMpegSubbandScalefactors *sample_array,SMpegSubbandAllocation *allocation_array,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_004fe2f0(CFileBitStream *this_ptr,SMpegSubbandScalefactors *sample_array,SMpegSubbandAllocation *allocation_array,SMpegFrame *frame)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  SMpegSubbandScalefactors *pSVar7;
  SMpegSubbandScalefactors *pSVar8;
  int iVar9;
  int iVar10;
  int local_4c;
  int local_48;
  int local_2c;
  int local_20;
  SMpegSubbandAllocation *local_1c;
  SMpegSubbandScalefactors *local_18;
  
  iVar1 = *(int *)(frame + 0x10);
  iVar10 = *(int *)(frame + 0x18);
  iVar9 = *(int *)(frame + 0x14);
  iVar2 = *(int *)(frame + 8);
  local_2c = 0;
  if (0 < iVar10) {
    local_48 = 0;
    local_4c = iVar2;
    do {
      local_18 = sample_array;
      local_1c = allocation_array + local_48;
      local_20 = 0;
      while( true ) {
        iVar3 = iVar1;
        if (iVar9 <= local_2c) {
          iVar3 = 1;
        }
        if (iVar3 <= local_20) break;
        if (*(int *)local_1c == 0) {
          pSVar7 = local_18 + local_48;
          do {
            *(uint *)pSVar7 = 0;
            pSVar7 = pSVar7 + 0x80;
          } while (pSVar7 != local_18 + local_48 + 0x180);
        }
        else {
          puVar4 = (uint *)(*(int *)local_1c * 0x10 + iVar2 + local_2c * 0x100);
          if (puVar4[2] == 3) {
            pSVar7 = local_18 + local_48;
            do {
              pSVar8 = pSVar7 + 0x80;
              uVar5 = sound_mp3_cpp_FUN_004fd5e0
                                (this_ptr,*(int *)(*(int *)(allocation_array +
                                                           local_48 + local_20 * 0x80) * 0x10 +
                                                   local_4c + 4));
              *(uint *)pSVar7 = uVar5;
              pSVar7 = pSVar8;
            } while (pSVar8 != local_18 + local_48 + 0x180);
          }
          else {
            uVar5 = *puVar4;
            uVar6 = sound_mp3_cpp_FUN_004fd5e0(this_ptr,puVar4[1]);
            pSVar7 = local_18 + local_48;
            do {
              *(uint *)pSVar7 = uVar6 % uVar5;
              uVar6 = uVar6 / uVar5;
              pSVar7 = pSVar7 + 0x80;
            } while (pSVar7 != local_18 + local_48 + 0x180);
          }
        }
        if ((iVar1 == 2) && (iVar9 <= local_2c)) {
          pSVar7 = sample_array + local_48;
          do {
            pSVar8 = pSVar7 + 0x80;
            *(uint *)(pSVar7 + 0x180) = *(uint *)pSVar7;
            pSVar7 = pSVar8;
          } while (pSVar8 != sample_array + local_48 + 0x180);
        }
        local_1c = local_1c + 0x80;
        local_20 = local_20 + 1;
        local_18 = local_18 + 0x180;
      }
      local_48 = local_48 + 4;
      local_4c = local_4c + 0x100;
      local_2c = local_2c + 1;
    } while (local_2c < iVar10);
  }
  if (iVar10 < 0x20) {
    iVar10 = iVar10 * 4;
    do {
      iVar9 = 0;
      if (0 < iVar1) {
        do {
          pSVar7 = sample_array + iVar10 + iVar9 * 0x180;
          do {
            pSVar8 = pSVar7 + 0x80;
            *(uint *)pSVar7 = 0;
            pSVar7 = pSVar8;
          } while (pSVar8 != sample_array + iVar10 + 0x180 + iVar9 * 0x180);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar1);
      }
      iVar10 = iVar10 + 4;
    } while (iVar10 < 0x80);
  }
  return;
}
