// Name: sound_mp3.cpp_calculateMainDataSize_FUN_00533c50
// Address: 00533c50
// Address Range: [[00533c50, 00533d2b]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(SMpegFrame frame_info)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(SMpegFrame frame_info)

{
  int local_10;
  
  local_10 = (int)ROUND(ROUND((double)(*(int *)((frame_info.header)->mpeg_version * 0xb4 + 0x67e2d0
                                               + (frame_info.header)->bitrate_index * 4) * 0x90) /
                              g_MpegSampleRateTable[(frame_info.header)->mpeg_version]
                              [(frame_info.header)->sampling_rate_index]));
  if ((frame_info.header)->mpeg_version == 0) {
    if (frame_info.samples_per_granule == 1) {
      local_10 = local_10 / 2 + -9;
    }
    else {
      local_10 = local_10 / 2 + -0x11;
    }
  }
  else if (frame_info.samples_per_granule == 1) {
    local_10 = local_10 + -0x11;
  }
  else {
    local_10 = local_10 + -0x20;
  }
  if ((frame_info.header)->padding != 0) {
    local_10 = local_10 + 1;
  }
  if ((frame_info.header)->protection == 0) {
    return local_10 + -4;
  }
  return local_10 + -6;
}
