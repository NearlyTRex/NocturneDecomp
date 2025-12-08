// Name: sound_mp3.cpp_calculateMpegFrame_FUN_0052ea80
// Address: 0052ea80
// Address Range: [[0052ea80, 0052ec37]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_calculateMpegFrame_FUN_0052ea80(SMpegFrame * frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_calculateMpegFrame_FUN_0052ea80(SMpegFrame *frame)

{
  SMpegFrameHeader *pSVar1;
  SMpegFrameHeader *pSVar2;
  int iVar3;
  int iVar4;
  int extraout_EDX;
  double dVar5;
  uint uVar6;
  int iVar7;
  
  pSVar1 = frame->header;
  iVar4 = pSVar1->channel_mode;
  frame->channel_mode = iVar4;
  frame->samples_per_granule = (iVar4 != 3) + 1;
  if (pSVar1->layer == 2) {
    pSVar2 = frame->header;
    iVar7 = pSVar2->bitrate_index;
    iVar3 = pSVar2->mpeg_version;
    uVar6 = 0x52eb7f;
    dVar5 = crt_math_c_round_FUN_005fe6b0(g_MpegSampleRateTable[iVar3][pSVar2->sampling_rate_index])
    ;
    iVar4 = (int)ROUND(dVar5);
    if (iVar3 == 1) {
      if (((iVar4 == 0x30) && (0x37 < extraout_EDX)) ||
         ((0x37 < extraout_EDX && (extraout_EDX < 0x51)))) {
        iVar4 = 0;
      }
      else if ((iVar4 == 0x30) || (extraout_EDX < 0x60)) {
        if ((iVar4 == 0x20) || (0x30 < extraout_EDX)) {
          iVar4 = 3;
        }
        else {
          iVar4 = 2;
        }
      }
      else {
        iVar4 = 1;
      }
    }
    else {
      iVar4 = 4;
    }
    if (iVar4 != *(int *)(iVar3 * 0xb4 + 0xc)) {
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 0x1a2;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("MPEG Layer 2 - pick_table - can't load tables!  File: %s",g_CurrentMp3Filename,uVar6,iVar7);
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
  iVar4 = pSVar1->layer;
  iVar7 = pSVar1->mode_extension;
  if ((((iVar4 < 1) || (3 < iVar4)) || (iVar7 < 0)) || (3 < iVar7)) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0x1b2;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("js_bound bad layer/modext (%d/%d)  File: %s",iVar4,iVar7,g_CurrentMp3Filename);
  }
  frame->js_bound = (int)g_MpegLayer2AllocationTables[iVar4][iVar7];
  return;
}
