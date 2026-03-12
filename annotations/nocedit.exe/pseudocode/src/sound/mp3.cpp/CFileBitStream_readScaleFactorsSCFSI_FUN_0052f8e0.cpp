// Name: sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0
// Address: 0052f8e0
// Address Range: [[0052f8e0, 0052fb46]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0(CFileBitStream *this_ptr,SMpegSubbandSCFSI *scfsi_array,SMpegSubbandAllocation *allocation_array,SMpegSubbandScalefactors *scalefactor_array,SBitAllocationTable *allocation_table)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0(CFileBitStream *this_ptr,SMpegSubbandSCFSI *scfsi_array,SMpegSubbandAllocation *allocation_array,SMpegSubbandScalefactors *scalefactor_array,SBitAllocationTable *allocation_table)

{
  int iVar2;
  uint uVar2;
  uint uVar3;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int *piVar8;
  uint *puVar4;
  int iVar6;
  int local_28;
  int local_24;
  int *local_14;
  int iVar1;
  
  iVar1 = allocation_table->num_subbands;
  iVar6 = allocation_table->num_granules;
  if (0 < iVar6) {
    local_28 = 0;
    do {
      iVar4 = 0;
      if (0 < iVar1) {
        piVar8 = (int *)((int)allocation_array->granules + local_28);
        do {
          if (*piVar8 != 0) {
            uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,2);
            *(uint *)((int)scfsi_array[iVar4].scfsi + local_28) = uVar2 & 0xff;
          }
          iVar4 = iVar4 + 1;
          piVar8 = piVar8 + 0x20;
        } while (iVar4 < iVar1);
      }
      local_28 = local_28 + 4;
    } while (local_28 < iVar6 << 2);
  }
  if (iVar6 < 0x20) {
    iVar2 = iVar6 * 4;
    do {
      iVar5 = 0;
      if (0 < iVar1) {
        puVar4 = (uint *)((int)scfsi_array->scfsi + iVar2);
        do {
          iVar5 = iVar5 + 1;
          *puVar4 = 0;
          puVar4 = puVar4 + 0x20;
        } while (iVar5 < iVar1);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x80);
  }
  if (0 < iVar6) {
    local_24 = 0;
    do {
      iVar2 = 0;
      if (0 < iVar1) {
        local_14 = (int *)((int)allocation_array->granules + local_24);
        puVar6 = (uint *)((int)scalefactor_array->codes[0] + local_24);
        do {
          if (*local_14 == 0) {
            puVar6[0x40] = 0x3f;
            puVar6[0x20] = puVar6[0x40];
            *puVar6 = puVar6[0x40];
            goto switchD_0052f9f0_default;
          }
          switch(*(uint *)((int)scfsi_array[iVar2].scfsi + local_24)) {
          case 0:
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,6);
            *puVar6 = uVar3;
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,6);
            puVar6[0x20] = uVar3;
            goto LAB_0052fa18;
          case 1:
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,6);
            puVar6[0x20] = uVar3;
            *puVar6 = uVar3;
LAB_0052fa18:
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,6);
            puVar6[0x40] = uVar3;
            break;
          case 2:
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,6);
            puVar6[0x40] = uVar3;
            puVar6[0x20] = uVar3;
            *puVar6 = uVar3;
            break;
          case 3:
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,6);
            *puVar6 = uVar3;
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,6);
            puVar6[0x40] = uVar3;
            puVar6[0x20] = uVar3;
          }
switchD_0052f9f0_default:
          puVar6 = puVar6 + 0x60;
          local_14 = local_14 + 0x20;
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar1);
      }
      local_24 = local_24 + 4;
    } while (local_24 < iVar6 << 2);
  }
  if (iVar6 < 0x20) {
    iVar3 = iVar6 * 4;
    do {
      iVar6 = 0;
      if (0 < iVar1) {
        puVar7 = (uint *)((int)scalefactor_array->codes[0] + iVar3);
        do {
          puVar7 = puVar7 + 0x60;
          puVar7[0x40] = 0x3f;
          puVar7[0x20] = puVar7[0x40];
          iVar6 = iVar6 + 1;
          *puVar7 = puVar7[0x40];
          puVar7 = puVar7;
        } while (iVar6 < iVar1);
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x80);
  }
  return;
}
