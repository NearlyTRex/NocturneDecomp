// Name: sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_00526670
// Address: 00526670
// Address Range: [[00526670, 005268d6]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_00526670(CFileBitStream *this_ptr,SMpegSubbandSCFSI *scfsi_array,SMpegSubbandAllocation *allocation_array,SMpegSubbandScalefactors *scalefactor_array,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_00526670(CFileBitStream *this_ptr,SMpegSubbandSCFSI *scfsi_array,SMpegSubbandAllocation *allocation_array,SMpegSubbandScalefactors *scalefactor_array,SMpegFrame *frame)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SMpegSubbandScalefactors *pSVar6;
  SMpegSubbandAllocation *pSVar7;
  SMpegSubbandSCFSI *pSVar8;
  int local_28;
  int local_24;
  SMpegSubbandAllocation *local_14;
  
  iVar1 = *(int *)(frame + 0x10);
  iVar3 = *(int *)(frame + 0x18);
  if (0 < iVar3) {
    local_28 = 0;
    do {
      iVar4 = 0;
      if (0 < iVar1) {
        pSVar7 = allocation_array + local_28;
        do {
          if (*(int *)pSVar7 != 0) {
            uVar2 = sound_mp3_cpp_FUN_00525cd0(this_ptr,2);
            *(uint *)(scfsi_array + local_28 + iVar4 * 0x80) = uVar2 & 0xff;
          }
          iVar4 = iVar4 + 1;
          pSVar7 = pSVar7 + 0x80;
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
        pSVar8 = scfsi_array + iVar4;
        do {
          iVar5 = iVar5 + 1;
          *(uint *)pSVar8 = 0;
          pSVar8 = pSVar8 + 0x80;
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
        local_14 = allocation_array + local_24;
        pSVar6 = scalefactor_array + local_24;
        do {
          if (*(int *)local_14 == 0) {
            *(uint *)(pSVar6 + 0x100) = 0x3f;
            *(uint *)(pSVar6 + 0x80) = *(uint *)(pSVar6 + 0x100);
            *(uint *)pSVar6 = *(uint *)(pSVar6 + 0x100);
            goto switchD_00526780_default;
          }
          switch(*(uint *)(scfsi_array + local_24 + iVar4 * 0x80)) {
          case 0:
            uVar2 = sound_mp3_cpp_FUN_00525cd0(this_ptr,6);
            *(uint *)pSVar6 = uVar2;
            uVar2 = sound_mp3_cpp_FUN_00525cd0(this_ptr,6);
            *(uint *)(pSVar6 + 0x80) = uVar2;
            goto LAB_005267a8;
          case 1:
            uVar2 = sound_mp3_cpp_FUN_00525cd0(this_ptr,6);
            *(uint *)(pSVar6 + 0x80) = uVar2;
            *(uint *)pSVar6 = uVar2;
LAB_005267a8:
            uVar2 = sound_mp3_cpp_FUN_00525cd0(this_ptr,6);
            *(uint *)(pSVar6 + 0x100) = uVar2;
            break;
          case 2:
            uVar2 = sound_mp3_cpp_FUN_00525cd0(this_ptr,6);
            *(uint *)(pSVar6 + 0x100) = uVar2;
            *(uint *)(pSVar6 + 0x80) = uVar2;
            *(uint *)pSVar6 = uVar2;
            break;
          case 3:
            uVar2 = sound_mp3_cpp_FUN_00525cd0(this_ptr,6);
            *(uint *)pSVar6 = uVar2;
            uVar2 = sound_mp3_cpp_FUN_00525cd0(this_ptr,6);
            *(uint *)(pSVar6 + 0x100) = uVar2;
            *(uint *)(pSVar6 + 0x80) = uVar2;
          }
switchD_00526780_default:
          pSVar6 = pSVar6 + 0x180;
          local_14 = local_14 + 0x80;
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
        pSVar6 = scalefactor_array + iVar3;
        do {
          *(uint *)(pSVar6 + 0x100) = 0x3f;
          *(uint *)(pSVar6 + 0x80) = *(uint *)(pSVar6 + 0x100);
          iVar4 = iVar4 + 1;
          *(uint *)pSVar6 = *(uint *)(pSVar6 + 0x100);
          pSVar6 = pSVar6 + 0x180;
        } while (iVar4 < iVar1);
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x80);
  }
  return;
}
