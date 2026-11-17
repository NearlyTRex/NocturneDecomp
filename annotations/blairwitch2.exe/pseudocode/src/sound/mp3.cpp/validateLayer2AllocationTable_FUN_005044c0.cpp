// Name: sound_mp3.cpp_validateLayer2AllocationTable_FUN_005044c0
// Address: 005044c0
// Address Range: [[005044c0, 005045fd]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_validateLayer2AllocationTable_FUN_005044c0(SMpegFrame *frame)

#include "nocturne.h"

int __cdecl sound_mp3_cpp_validateLayer2AllocationTable_FUN_005044c0(SMpegFrame *frame)

{
  int iVar1;
  SMpegFrameHeader *pSVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  
  pSVar2 = frame->header;
  iVar3 = pSVar2->mpeg_version;
  iVar5 = g_INT_ARRAY_ARRAY_ARRAY_00618ec8[iVar3 + -1][pSVar2->layer + 2][pSVar2->bitrate_index] /
          frame->channel_count;
  iVar4 = frame->sblimit;
  dVar6 = round
                    (g_DOUBLE_ARRAY_ARRAY_00618e88[iVar3][pSVar2->sampling_rate_index]);
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
  g_CHAR_PTR_01d046a0 = "..\\sound\\mp3.cpp";
  g_INT_01d046a4 = 0x1d8;
  core_main_c_displayErrorAndQuit_FUN_004e4500("MPEG Layer 2 - pick_table - can't load tables!  File: %s");
  return iVar4;
}
