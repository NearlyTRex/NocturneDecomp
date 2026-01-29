// Name: sound_mp3.cpp_validateLayer2AllocationTable_FUN_0052e8d0
// Address: 0052e8d0
// Address Range: [[0052e8d0, 0052ea0d]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_validateLayer2AllocationTable_FUN_0052e8d0(SMpegFrame *frame)

#include "nocturne.h"

int __cdecl sound_mp3_cpp_validateLayer2AllocationTable_FUN_0052e8d0(SMpegFrame *frame)

{
  int iVar1;
  SMpegFrameHeader *pSVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  uint uVar7;
  
  pSVar2 = frame->header;
  iVar3 = pSVar2->mpeg_version;
  iVar5 = g_MpegBitrateTable[iVar3 + -1][pSVar2->layer + 2][pSVar2->bitrate_index] /
          frame->samples_per_granule;
  iVar4 = frame->sblimit;
  uVar7 = 0x52e93d;
  dVar6 = round(g_MpegSampleRateTable[iVar3][pSVar2->sampling_rate_index]);
  iVar1 = (int)ROUND(dVar6);
  if (iVar3 == 1) {
    if (((iVar1 == 0x30) && (0x37 < iVar5)) || ((0x37 < iVar5 && (iVar5 < 0x51)))) {
      if (frame->table_index == 0) {
        return iVar4;
      }
    }
    else if ((iVar1 == 0x30) || (iVar5 < 0x60)) {
      if ((iVar1 == 0x20) || (0x30 < iVar5)) {
        if (frame->table_index == 3) {
          return iVar4;
        }
      }
      else if (frame->table_index == 2) {
        return iVar4;
      }
    }
    else if (frame->table_index == 1) {
      return iVar4;
    }
  }
  else if (frame->table_index == 4) {
    return iVar4;
  }
  g_CurrentFilename = "..\\sound\\mp3.cpp";
  g_CurrentLineNumber = 0x1a2;
  core_main_c_displayErrorAndQuit_FUN_00506f10
            ("MPEG Layer 2 - pick_table - can't load tables!  File: %s",g_CurrentMp3Filename,uVar7);
  return iVar4;
}
