// Name: sound_mp3.cpp_calculateMpegFrame_FUN_0052ea80
// Address: 0052ea80
// Address Range: [[0052ea80, 0052ec37]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_calculateMpegFrame_FUN_0052ea80(SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_calculateMpegFrame_FUN_0052ea80(SMpegFrame *frame)

{
  SMpegFrameHeader *pSVar1;
  int iVar2;
  SMpegFrameHeader *pSVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  uint uVar7;
  
  pSVar1 = frame->header;
  iVar5 = pSVar1->channel_mode;
  frame->channel_mode = iVar5;
  frame->samples_per_granule = (iVar5 != 3) + 1;
  if (pSVar1->layer == 2) {
    pSVar3 = frame->header;
    iVar2 = pSVar3->mpeg_version;
    iVar4 = g_MpegBitrateTable[iVar2 + -1][pSVar3->layer + 2][pSVar3->bitrate_index] /
            frame->samples_per_granule;
    uVar7 = 0x52eb7f;
    dVar6 = crt_math_c_round_FUN_005fe6b0(g_MpegSampleRateTable[iVar2][pSVar3->sampling_rate_index])
    ;
    iVar5 = (int)ROUND(dVar6);
    if (iVar2 == 1) {
      if (((iVar5 == 0x30) && (0x37 < iVar4)) || ((0x37 < iVar4 && (iVar4 < 0x51)))) {
        iVar5 = 0;
      }
      else if ((iVar5 == 0x30) || (iVar4 < 0x60)) {
        if ((iVar5 == 0x20) || (0x30 < iVar4)) {
          iVar5 = 3;
        }
        else {
          iVar5 = 2;
        }
      }
      else {
        iVar5 = 1;
      }
    }
    else {
      iVar5 = 4;
    }
    if (iVar5 != *(int *)(iVar2 * 0xb4 + 0xc)) {
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 0x1a2;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("MPEG Layer 2 - pick_table - can't load tables!  File: %s",g_CurrentMp3Filename,uVar7);
    }
    frame->sblimit = (int)frame;
  }
  else {
    frame->sblimit = 0x20;
  }
  if (pSVar1->channel_mode != 1) {
    frame->js_bound = frame->sblimit;
    return;
  }
  iVar5 = pSVar1->layer;
  iVar2 = pSVar1->mode_extension;
  if ((((iVar5 < 1) || (3 < iVar5)) || (iVar2 < 0)) || (3 < iVar2)) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0x1b2;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("js_bound bad layer/modext (%d/%d)  File: %s",iVar5,iVar2,g_CurrentMp3Filename);
  }
  frame->js_bound = (int)g_MpegLayer2AllocationTables[iVar5][iVar2];
  return;
}
