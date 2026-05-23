// Name: sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0
// Address: 0052f8e0
// MANUAL RECONSTRUCTION
// Address Range: [[0052f8e0, 0052fb46]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0(CFileBitStream *this_ptr,SMpegSubbandSCFSI *scfsi_array,SMpegSubbandAllocation *allocation_array,SMpegSubbandScalefactors *scalefactor_array,SMpegAllocationTable *allocation_table)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0(CFileBitStream *this_ptr,SMpegSubbandSCFSI *scfsi_array,SMpegSubbandAllocation *allocation_array,SMpegSubbandScalefactors *scalefactor_array,SMpegAllocationTable *allocation_table)

{
  int iVar2;
  uint uVar2;
  uint uVar3;
  int iVar3;
  int iVar4;
  int iVar5;
  SMpegSubbandScalefactors *puVar6;
  int *piVar8;
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
        piVar8 = &allocation_array->granules[local_28];
        do {
          if (*piVar8 != 0) {
            uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,2);
            scfsi_array[iVar4].scfsi[local_28] = uVar2 & 0xff;
          }
          iVar4 = iVar4 + 1;
          piVar8 = piVar8 + 0x20;
        } while (iVar4 < iVar1);
      }
      local_28 = local_28 + 1;
    } while (local_28 < iVar6);
  }
  if (iVar6 < 0x20) {
    iVar2 = iVar6;
    do {
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          scfsi_array[iVar5].scfsi[iVar2] = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x20);
  }
  if (0 < iVar6) {
    local_24 = 0;
    do {
      iVar2 = 0;
      if (0 < iVar1) {
        local_14 = &allocation_array->granules[local_24];
        puVar6 = scalefactor_array;
        do {
          if (*local_14 == 0) {
            puVar6->codes.q[2][local_24] = 0x3f;
            puVar6->codes.q[1][local_24] = puVar6->codes.q[2][local_24];
            puVar6->codes.q[0][local_24] = puVar6->codes.q[2][local_24];
            goto switchD_0052f9f0_default;
          }
          switch((uint)scfsi_array[iVar2].scfsi[local_24]) {
          case 0:
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,6);
            puVar6->codes.q[0][local_24] = uVar3;
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,6);
            puVar6->codes.q[1][local_24] = uVar3;
            goto LAB_0052fa18;
          case 1:
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,6);
            puVar6->codes.q[1][local_24] = uVar3;
            puVar6->codes.q[0][local_24] = uVar3;
LAB_0052fa18:
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,6);
            puVar6->codes.q[2][local_24] = uVar3;
            break;
          case 2:
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,6);
            puVar6->codes.q[2][local_24] = uVar3;
            puVar6->codes.q[1][local_24] = uVar3;
            puVar6->codes.q[0][local_24] = uVar3;
            break;
          case 3:
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,6);
            puVar6->codes.q[0][local_24] = uVar3;
            uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,6);
            puVar6->codes.q[2][local_24] = uVar3;
            puVar6->codes.q[1][local_24] = uVar3;
          }
switchD_0052f9f0_default:
          puVar6 = puVar6 + 1;
          local_14 = local_14 + 0x20;
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar1);
      }
      local_24 = local_24 + 1;
    } while (local_24 < iVar6);
  }
  if (iVar6 < 0x20) {
    iVar3 = iVar6;
    do {
      iVar6 = 0;
      if (0 < iVar1) {
        do {
          scalefactor_array[iVar6].codes.q[2][iVar3] = 0x3f;
          scalefactor_array[iVar6].codes.q[1][iVar3] = scalefactor_array[iVar6].codes.q[2][iVar3];
          scalefactor_array[iVar6].codes.q[0][iVar3] = scalefactor_array[iVar6].codes.q[2][iVar3];
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
  }
  return;
}
