// Name: sound_mp3.cpp_calculateMpegFrame_FUN_004fd150
// Address: 004fd150
// Address Range: [[004fd150, 004fd307]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_calculateMpegFrame_FUN_004fd150(SMpegFrame *frame)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_mp3_cpp_calculateMpegFrame_FUN_004fd150(SMpegFrame *frame)

{
  SMpegFrameHeader *pSVar1;
  int iVar2;
  SMpegFrameHeader *pSVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  
  pSVar1 = frame->header;
  iVar5 = pSVar1->channel_mode;
  frame->channel_mode = iVar5;
  frame->channel_count = (iVar5 != 3) + 1;
  if (pSVar1->layer == 2) {
    pSVar3 = frame->header;
    iVar2 = pSVar3->mpeg_version;
    iVar4 = *(int *)(&DAT_006011f8 +
                    pSVar3->bitrate_index * 4 + (pSVar3->layer + -1) * 0x3c + iVar2 * 0xb4) /
            frame->channel_count;
    dVar6 = round
                      (*(double *)(&DAT_006011b8 + pSVar3->sampling_rate_index * 8 + iVar2 * 0x20));
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
      _DAT_01d71de0 = "..\\sound\\mp3.cpp";
      _DAT_01d71de4 = 0x1d8;
      core_main_c_displayErrorAndQuit_FUN_004e4330("MPEG Layer 2 - pick_table - can't load tables!  File: %s");
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
    _DAT_01d71de0 = "..\\sound\\mp3.cpp";
    _DAT_01d71de4 = 0x1ea;
    core_main_c_displayErrorAndQuit_FUN_004e4330("js_bound bad layer/modext (%d/%d)  File: %s");
  }
  frame->js_bound = *(int *)("$CMotionController$$" + iVar5 * 0x10 + iVar2 * 4 + 0x13);
  return;
}
