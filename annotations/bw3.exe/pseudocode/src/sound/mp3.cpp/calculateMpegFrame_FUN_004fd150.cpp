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
  int extraout_EDX;
  float10 fVar6;
  
  pSVar1 = frame->header;
  iVar5 = pSVar1->channel_mode;
  frame->channel_mode = iVar5;
  frame->channel_count = (iVar5 != 3) + 1;
  if (pSVar1->layer == 2) {
    iVar2 = frame->sblimit;
    pSVar3 = frame->header;
    iVar4 = pSVar3->mpeg_version;
    fVar6 = (float10)*(double *)(&DAT_006011b8 + pSVar3->sampling_rate_index * 8 + iVar4 * 0x20);
    round(pSVar3->bitrate_index,iVar4 * 0xb4);
    iVar5 = (int)ROUND(fVar6);
    if (iVar4 == 1) {
      if (((iVar5 == 0x30) && (0x37 < extraout_EDX)) ||
         ((0x37 < extraout_EDX && (extraout_EDX < 0x51)))) {
        iVar5 = 0;
      }
      else if ((iVar5 == 0x30) || (extraout_EDX < 0x60)) {
        if ((iVar5 == 0x20) || (0x30 < extraout_EDX)) {
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
    if (iVar5 != frame->table_index) {
      _DAT_01d71de0 = "..\\sound\\mp3.cpp";
      _DAT_01d71de4 = 0x1d8;
      core_main_c_FUN_004e4330("MPEG Layer 2 - pick_table - can't load tables!  File: %s",&DAT_01d94b98);
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
  iVar5 = pSVar1->layer;
  iVar2 = pSVar1->mode_extension;
  if ((((iVar5 < 1) || (3 < iVar5)) || (iVar2 < 0)) || (3 < iVar2)) {
    _DAT_01d71de0 = "..\\sound\\mp3.cpp";
    _DAT_01d71de4 = 0x1ea;
    core_main_c_FUN_004e4330("js_bound bad layer/modext (%d/%d)  File: %s",iVar5,iVar2,&DAT_01d94b98);
  }
  frame->js_bound = *(int *)("$CMotionController$$" + iVar5 * 0x10 + iVar2 * 4 + 0x13);
  return;
}
