// Name: sound_mp3.cpp_calculateMainDataSize_FUN_00533c50
// Address: 00533c50
// Address Range: [[00533c50, 00533d2b]]
// Convention: __cdecl
// Signature: int sound_mp3.cpp_calculateMainDataSize_FUN_00533c50(SMpegFrame frame_info)

#include "nocturne.h"

int __cdecl sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(SMpegFrame frame_info)

{
  float10 fVar1;
  double dVar2;
  int local_c;
  
  fVar1 = (float10)(*(int *)((frame_info.header)->mpeg_version * 0xb4 + 0x67e2d0 +
                            (frame_info.header)->bitrate_index * 4) * 0x90) /
          (float10)g_MpegSampleRateTable[(frame_info.header)->mpeg_version]
                   [(frame_info.header)->sampling_rate_index];
  dVar2 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44 /* combine 2-byte values */((frame_info.header)->mpeg_version * 0x20,frame_info.header));
  local_c = (int)ROUND(fVar1);
  if (*SUB84 /* extract 2-byte value */(dVar2,0) == 0) {
    if (frame_info.js_bound == 1) {
      local_c = local_c / 2 + -9;
    }
    else {
      local_c = local_c / 2 + -0x11;
    }
  }
  else if (frame_info.js_bound == 1) {
    local_c = local_c + -0x11;
  }
  else {
    local_c = local_c + -0x20;
  }
  if (*(int *)(frame_info.channel_mode + 0x14) != 0) {
    local_c = local_c + 1;
  }
  if (*(int *)(frame_info.channel_mode + 8) == 0) {
    return local_c + -4;
  }
  return local_c + -6;
}
