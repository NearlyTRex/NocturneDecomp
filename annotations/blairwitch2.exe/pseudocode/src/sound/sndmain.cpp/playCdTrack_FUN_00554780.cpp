// Name: sound_sndmain.cpp_playCdTrack_FUN_00554780
// Address: 00554780
// Address Range: [[00554780, 0055497f]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_playCdTrack_FUN_00554780(int track,float start_seconds)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_playCdTrack_FUN_00554780(int track,float start_seconds)

{
  MCIERROR MVar1;
  float10 fVar2;
  float10 fVar3;
  uint *dest;
  int value;
  double input_value;
  ulong count;
  char *format;
  byte auStack_64 [4];
  MCIDEVICEID MStack_60;
  uint uStack_5c;
  byte auStack_50 [4];
  uint uStack_4c;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  double dStack_38;
  double dStack_30;
  int iStack_28;
  int iStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  if (_DAT_0263cf14 != 0) {
LAB_00554799:
    fVar2 = (float10)start_seconds;
    fVar3 = fVar2 * (float10)_DAT_005e9496;
    round();
    uStack_20 = (uint)ROUND(fVar3);
    dStack_30 = (double)fVar2;
    fVar2 = fVar2 - (float10)(int)uStack_20 * (float10)_DAT_005e949a;
    uStack_14 = uStack_20;
    input_value = dStack_30;
    round();
    iStack_24 = (int)ROUND(fVar2);
    dStack_38 = floor(input_value);
    fVar3 = ((float10)dStack_30 - (float10)dStack_38) * (float10)_DAT_005e949e;
    count = 0xc;
    uStack_1c = track + 1;
    dest = &uStack_44;
    value = 0;
    uStack_18 = 0;
    round();
    iStack_28 = (int)ROUND(fVar3);
    memset(dest,value,count);
    uStack_40 = (uStack_20 & 0xffff) << 8 | track & 0xffU |
                (uint)CONCAT21((ushort)iStack_28,(byte)iStack_24) << 0x10;
    uStack_3c = uStack_1c & 0xff | (uStack_18 & 0xff) << 0x10;
    uStack_44 = 0;
    MVar1 = mciSendCommandA(_DAT_0263cf18,0x806,0xc,(DWORD_PTR)&uStack_44);
    if (MVar1 != 0) {
      MVar1 = mciSendCommandA(_DAT_0263cf18,0x806,5,(DWORD_PTR)&uStack_44);
      if (MVar1 != 0) {
        sound_sndmain_cpp_logSoundError_FUN_005549c0("Error starting CD playback");
        return 0;
      }
    }
    return 1;
  }
  memset(auStack_64,0,0x14);
  uStack_5c = 0x5e943e;
  MStack_60 = 0;
  MVar1 = mciSendCommandA(0,0x803,0x2102,(DWORD_PTR)auStack_64);
  if (MVar1 == 0) {
    memset(auStack_50,0,0xc);
    uStack_4c = 10;
    MVar1 = mciSendCommandA(MStack_60,0x80d,0x400,(DWORD_PTR)auStack_50);
    if (MVar1 == 0) {
      _DAT_0263cf18 = MStack_60;
      _DAT_0263cf14 = 1;
      goto LAB_00554799;
    }
    format = "Error setting CD time format";
  }
  else {
    format = "Error opening CD device";
  }
  sound_sndmain_cpp_logSoundError_FUN_005549c0(format);
  return 0;
}
