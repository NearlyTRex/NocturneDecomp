// Name: sound_mp3.cpp_calculateMpegFrame_FUN_0052ea80
// Address: 0052ea80
// Address Range: [[0052ea80, 0052ec37]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_calculateMpegFrame_FUN_0052ea80(SMpegFrame *frame)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl sound_mp3_cpp_calculateMpegFrame_FUN_0052ea80(SMpegFrame *frame)

{
  SMpegFrameHeader *pSVar1;
  int iVar2;
  SMpegFrameHeader *pSVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  pSVar1 = frame->header;
  iVar6 = pSVar1->channel_mode;
  frame->channel_mode = iVar6;
  frame->samples_per_granule = (iVar6 != 3) + 1;
  if (pSVar1->layer == 2) {
    iVar2 = frame->sblimit;
    pSVar3 = frame->header;
    iVar4 = pSVar3->mpeg_version;
    iVar5 = g_MpegBitrateTable[iVar4 + -1][pSVar3->layer + 2][pSVar3->bitrate_index] /
            frame->samples_per_granule;
    iVar6 = (int)ROUND(ROUND(g_MpegSampleRateTable[iVar4][pSVar3->sampling_rate_index]));
    if (iVar4 == 1) {
      if (((iVar6 == 0x30) && (0x37 < iVar5)) || ((0x37 < iVar5 && (iVar5 < 0x51)))) {
        iVar6 = 0;
      }
      else if ((iVar6 == 0x30) || (iVar5 < 0x60)) {
        if ((iVar6 == 0x20) || (0x30 < iVar5)) {
          iVar6 = 3;
        }
        else {
          iVar6 = 2;
        }
      }
      else {
        iVar6 = 1;
      }
    }
    else {
      iVar6 = 4;
    }
    if (iVar6 != frame->table_index) {
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 0x1a2;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("MPEG Layer 2 - pick_table - can't load tables!  File: %s",g_CurrentMp3Filename);
    }
    frame->sblimit = iVar2;
  }
  else {
    frame->sblimit = 0x20;
  }
  if (pSVar1->channel_mode != 1) {
    frame->js_bound = frame->sblimit;
    return;
  }
  iVar6 = pSVar1->layer;
  iVar2 = pSVar1->mode_extension;
  if ((((iVar6 < 1) || (3 < iVar6)) || (iVar2 < 0)) || (3 < iVar2)) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0x1b2;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("js_bound bad layer/modext (%d/%d)  File: %s",iVar6,iVar2,g_CurrentMp3Filename);
  }
  frame->js_bound = g_MpegLayer2AllocationTables[iVar6][iVar2];
  return;
}
