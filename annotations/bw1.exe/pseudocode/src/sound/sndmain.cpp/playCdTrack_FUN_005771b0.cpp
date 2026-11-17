// Name: sound_sndmain.cpp_playCdTrack_FUN_005771b0
// Address: 005771b0
// Address Range: [[005771b0, 005773af]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_playCdTrack_FUN_005771b0(int track,float start_seconds)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_playCdTrack_FUN_005771b0(int track,float start_seconds)

{
  MCIERROR MVar1;
  double dVar2;
  double dVar3;
  void *dest;
  uint *value;
  uint uVar4;
  ulong count;
  char *format;
  byte auStack_64 [4];
  MCIDEVICEID MStack_60;
  char *pcStack_5c;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  double dStack_40;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  byte bStack_28;
  uint uStack_24;
  uint uStack_20;
  int iStack_18;
  
  if (g_INT_02c745e4 != 0) {
LAB_005771c9:
    dVar2 = round((double)(start_seconds * 0.01666667f));
    uStack_24 = (uint)ROUND(dVar2);
    dVar2 = (double)start_seconds;
    uStack_34._0_2_ = SUB82(__BITCAST_UINT64(dVar2),0);
    uStack_34._2_2_ = (ushort)((ulonglong)dVar2 >> 0x10);
    uStack_30 = (uint)((ulonglong)dVar2 >> 0x20);
    uVar4 = 0x577207;
    iStack_18 = uStack_24;
    dVar3 = round
                      ((double)(start_seconds - (float)(int)uStack_24 * 60.0f));
    uStack_2c = (uint)ROUND(dVar3);
    dStack_40 = floor(__BITCAST_DOUBLE(CONCAT44(SUB84(__BITCAST_UINT64(dVar2),0),uVar4)));
    uVar4 = 0xc;
    uStack_24 = track + 1;
    value = &uStack_4c;
    count = 0;
    uStack_20 = 0;
    dest = (void *)0x577243;
    dVar2 = round
                      ((__BITCAST_DOUBLE(CONCAT26(uStack_34._2_2_,CONCAT24((ushort)uStack_34,uStack_38)))
                       - dStack_40) * _DAT_005f4698);
    uStack_34 = (int)ROUND(dVar2);
    memset(dest,(int)value,count);
    uStack_4c = (uStack_2c & 0xffff) << 8 | track & 0xffU |
                (uint)CONCAT21((ushort)uStack_34,(byte)uStack_30) << 0x10;
    uStack_48 = (uint)bStack_28 | (uStack_24 & 0xff) << 0x10;
    uStack_50 = 0;
    MVar1 = mciSendCommandA(g_INT_02c745e8,0x806,0xc,(DWORD_PTR)&uStack_50);
    if (MVar1 != 0) {
      MVar1 = mciSendCommandA(g_INT_02c745e8,0x806,5,(DWORD_PTR)&uStack_50);
      if (MVar1 != 0) {
        sound_sndmain_cpp_logSoundError_FUN_005773f0("Error starting CD playback",uVar4);
        return 0;
      }
    }
    return 1;
  }
  memset(auStack_64,0,0x14);
  pcStack_5c = "cdaudio";
  MStack_60 = 0;
  MVar1 = mciSendCommandA(0,0x803,0x2102,(DWORD_PTR)auStack_64);
  if (MVar1 == 0) {
    memset(&uStack_50,0,0xc);
    uStack_4c = 10;
    MVar1 = mciSendCommandA(MStack_60,0x80d,0x400,(DWORD_PTR)&uStack_50);
    if (MVar1 == 0) {
      g_INT_02c745e8 = MStack_60;
      g_INT_02c745e4 = 1;
      goto LAB_005771c9;
    }
    format = "Error setting CD time format";
  }
  else {
    format = "Error opening CD device";
  }
  sound_sndmain_cpp_logSoundError_FUN_005773f0(format);
  return 0;
}
