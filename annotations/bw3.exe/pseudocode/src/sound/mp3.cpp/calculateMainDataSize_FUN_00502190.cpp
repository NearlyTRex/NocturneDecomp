// Name: sound_mp3.cpp_calculateMainDataSize_FUN_00502190
// Address: 00502190
// Address Range: [[00502190, 0050226b]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_calculateMainDataSize_FUN_00502190(SMpegFrame frame_info)

#include "nocturne.h"

int __cdecl sound_mp3_cpp_calculateMainDataSize_FUN_00502190(SMpegFrame frame_info)

{
  double dVar1;
  int unaff_retaddr;
  int iStack_14;
  
  dVar1 = round
                    ((double)(*(int *)((frame_info.header)->mpeg_version * 0xb4 + 0x601270 +
                                      (frame_info.header)->bitrate_index * 4) * 0x90) /
                     g_DOUBLE_ARRAY_ARRAY_006011b8[(frame_info.header)->mpeg_version]
                     [(frame_info.header)->sampling_rate_index]);
  iStack_14 = (int)ROUND(dVar1);
  if ((frame_info.header)->mpeg_version == 0) {
    if (frame_info.table_index == 1) {
      iStack_14 = iStack_14 / 2 + -9;
    }
    else {
      iStack_14 = iStack_14 / 2 + -0x11;
    }
  }
  else if (frame_info.table_index == 1) {
    iStack_14 = iStack_14 + -0x11;
  }
  else {
    iStack_14 = iStack_14 + -0x20;
  }
  if (*(int *)(unaff_retaddr + 0x14) != 0) {
    iStack_14 = iStack_14 + 1;
  }
  if (*(int *)(unaff_retaddr + 8) == 0) {
    return iStack_14 + -4;
  }
  return iStack_14 + -6;
}
