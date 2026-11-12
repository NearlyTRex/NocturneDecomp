// Name: sound_mp3.cpp_calculateMainDataSize_FUN_0052a880
// Address: 0052a880
// Address Range: [[0052a880, 0052a95b]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_calculateMainDataSize_FUN_0052a880(SMpegFrame frame_info)

#include "nocturne.h"

int __cdecl sound_mp3_cpp_calculateMainDataSize_FUN_0052a880(SMpegFrame frame_info)

{
  int *piVar1;
  float10 fVar2;
  int local_10;
  
  fVar2 = (float10)(*(int *)(&DAT_006203a0 +
                            (frame_info.header)->bitrate_index * 4 +
                            (frame_info.header)->mpeg_version * 0xb4) * 0x90) /
          (float10)*(double *)
                    (&DAT_006202e8 +
                    (frame_info.header)->sampling_rate_index * 8 +
                    (frame_info.header)->mpeg_version * 0x20);
  piVar1 = (int *)round();
  local_10 = (int)ROUND(fVar2);
  if (*piVar1 == 0) {
    if (frame_info.channel_count == 1) {
      local_10 = local_10 / 2 + -9;
    }
    else {
      local_10 = local_10 / 2 + -0x11;
    }
  }
  else if (frame_info.channel_count == 1) {
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
