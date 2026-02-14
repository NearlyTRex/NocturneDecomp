// Name: sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0
// Address: 0052f8e0
// Address Range: [[0052f8e0, 0052fb46]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0(CFileBitStream *this_ptr,SMpegSubbandSCFSI *scfsi_array,SMpegSubbandAllocation *allocation_array,SMpegSubbandScalefactors *scalefactor_array,SBitAllocationTable *allocation_table)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0(CFileBitStream *this_ptr,SMpegSubbandSCFSI *scfsi_array,SMpegSubbandAllocation *allocation_array,SMpegSubbandScalefactors *scalefactor_array,SBitAllocationTable *allocation_table)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int *piVar8;
  int local_28;
  int local_24;
  int *local_14;
  
  iVar1 = allocation_table->num_subbands;
  iVar3 = allocation_table->num_granules;
  if (0 < iVar3) {
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
    } while (local_28 < iVar3 << 2);
  }
  if (iVar3 < 0x20) {
    iVar4 = iVar3 * 4;
    do {
      iVar5 = 0;
      if (0 < iVar1) {
        puVar7 = (uint *)((int)scfsi_array->scfsi + iVar4);
        do {
          iVar5 = iVar5 + 1;
          *puVar7 = 0;
          puVar7 = puVar7 + 0x20;
        } while (iVar5 < iVar1);
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 < 0x80);
  }
  if (0 < iVar3) {
    local_24 = 0;
    do {
      iVar4 = 0;
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
          switch(*(uint *)((int)scfsi_array[iVar4].scfsi + local_24)) {
          case 0:
            uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,6);
            *puVar6 = uVar2;
            uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,6);
            puVar6[0x20] = uVar2;
            goto LAB_0052fa18;
          case 1:
            uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,6);
            puVar6[0x20] = uVar2;
            *puVar6 = uVar2;
LAB_0052fa18:
            uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,6);
            puVar6[0x40] = uVar2;
            break;
          case 2:
            uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,6);
            puVar6[0x40] = uVar2;
            puVar6[0x20] = uVar2;
            *puVar6 = uVar2;
            break;
          case 3:
            uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,6);
            *puVar6 = uVar2;
            uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,6);
            puVar6[0x40] = uVar2;
            puVar6[0x20] = uVar2;
          }
switchD_0052f9f0_default:
          puVar6 = puVar6 + 0x60;
          local_14 = local_14 + 0x20;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
      local_24 = local_24 + 4;
    } while (local_24 < iVar3 << 2);
  }
  if (iVar3 < 0x20) {
    iVar3 = iVar3 * 4;
    do {
      iVar4 = 0;
      if (0 < iVar1) {
        puVar7 = (uint *)((int)scalefactor_array->codes[0] + iVar3);
        do {
          puVar7[0x40] = 0x3f;
          puVar7[0x20] = puVar7[0x40];
          iVar4 = iVar4 + 1;
          *puVar7 = puVar7[0x40];
          puVar7 = puVar7 + 0x60;
        } while (iVar4 < iVar1);
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x80);
  }
  return;
}
