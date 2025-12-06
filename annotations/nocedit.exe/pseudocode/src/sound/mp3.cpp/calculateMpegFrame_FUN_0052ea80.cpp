// Name: sound_mp3.cpp_calculateMpegFrame_FUN_0052ea80
// Address: 0052ea80
// Address Range: [[0052ea80, 0052ec37]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_calculateMpegFrame_FUN_0052ea80(SMpegFrame * frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_calculateMpegFrame_FUN_0052ea80(SMpegFrame *frame)

{
  SMpegFrameHeader *pSVar1;
  int iVar2;
  int iVar3;
  SMpegFrameHeader *pSVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  double dVar8;
  int iVar9;
  SMpegFrame *pSVar10;
  
  pSVar1 = frame->header;
  iVar2 = pSVar1->channel_mode;
  frame->channel_mode = iVar2;
  frame->samples_per_granule = (iVar2 != 3) + 1;
  if (pSVar1->layer == 2) {
    iVar3 = frame->sblimit;
    pSVar4 = frame->header;
    iVar5 = pSVar4->mpeg_version;
    iVar9 = iVar5 * 0xb4;
    fVar7 = (float10)g_MpegSampleRateTable[iVar5][pSVar4->sampling_rate_index];
    pSVar10 = frame;
    dVar8 = crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44 /* combine 2-byte values */(g_MpegBitrateTable[iVar5 + -1][pSVar4->layer + 2]
                                        [pSVar4->bitrate_index] / frame->samples_per_granule,
                                        pSVar4->sampling_rate_index));
    iVar6 = (int)((ulonglong)dVar8 >> 0x20);
    iVar2 = (int)ROUND(fVar7);
    if (iVar5 == 1) {
      if (((iVar2 == 0x30) && (0x37 < iVar6)) || ((0x37 < iVar6 && (iVar6 < 0x51)))) {
        iVar5 = 0;
      }
      else if ((iVar2 == 0x30) || (iVar6 < 0x60)) {
        if ((iVar2 == 0x20) || (0x30 < iVar6)) {
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
    if (iVar5 != *(int *)(iVar3 + 0xc)) {
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 0x1a2;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("MPEG Layer 2 - pick_table - can't load tables!  File: %s",g_CurrentMp3Filename,iVar9,pSVar10);
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
  iVar2 = pSVar1->layer;
  iVar3 = pSVar1->mode_extension;
  if ((((iVar2 < 1) || (3 < iVar2)) || (iVar3 < 0)) || (3 < iVar3)) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0x1b2;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("js_bound bad layer/modext (%d/%d)  File: %s",iVar2,iVar3,g_CurrentMp3Filename);
  }
  frame->js_bound = (int)g_MpegLayer2AllocationTables[iVar2][iVar3];
  return;
}
