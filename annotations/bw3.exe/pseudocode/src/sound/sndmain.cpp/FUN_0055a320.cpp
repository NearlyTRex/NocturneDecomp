// Name: sound_sndmain.cpp_FUN_0055a320
// Address: 0055a320
// Address Range: [[0055a320, 0055a51f]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_0055a320(uint param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_sndmain_cpp_FUN_0055a320(uint param_1,float param_2)

{
  MCIERROR MVar1;
  float10 fVar2;
  float10 fVar3;
  uint *dest;
  int value;
  double input_value;
  ulong count;
  char *pcVar4;
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
  
  if (_DAT_02ce7214 != 0) {
LAB_0055a339:
    fVar2 = (float10)param_2;
    fVar3 = fVar2 * (float10)_DAT_005d3f8a;
    round();
    uStack_20 = (uint)ROUND(fVar3);
    dStack_30 = (double)fVar2;
    fVar2 = fVar2 - (float10)(int)uStack_20 * (float10)_DAT_005d3f8e;
    uStack_14 = uStack_20;
    input_value = dStack_30;
    round();
    iStack_24 = (int)ROUND(fVar2);
    dStack_38 = floor(input_value);
    fVar3 = ((float10)dStack_30 - (float10)dStack_38) * (float10)_DAT_005d3f92;
    count = 0xc;
    uStack_1c = param_1 + 1;
    dest = &uStack_44;
    value = 0;
    uStack_18 = 0;
    round();
    iStack_28 = (int)ROUND(fVar3);
    memset(dest,value,count);
    uStack_40 = (uStack_20 & 0xffff) << 8 | param_1 & 0xff |
                (uint)CONCAT21((ushort)iStack_28,(byte)iStack_24) << 0x10;
    uStack_3c = uStack_1c & 0xff | (uStack_18 & 0xff) << 0x10;
    uStack_44 = 0;
    MVar1 = mciSendCommandA(_DAT_02ce7218,0x806,0xc,(DWORD_PTR)&uStack_44);
    if (MVar1 != 0) {
      MVar1 = mciSendCommandA(_DAT_02ce7218,0x806,5,(DWORD_PTR)&uStack_44);
      if (MVar1 != 0) {
        sound_sndmain_cpp_FUN_0055a560("Error starting CD playback");
        return 0;
      }
    }
    return 1;
  }
  memset(auStack_64,0,0x14);
  uStack_5c = 0x5d3f32;
  MStack_60 = 0;
  MVar1 = mciSendCommandA(0,0x803,0x2102,(DWORD_PTR)auStack_64);
  if (MVar1 == 0) {
    memset(auStack_50,0,0xc);
    uStack_4c = 10;
    MVar1 = mciSendCommandA(MStack_60,0x80d,0x400,(DWORD_PTR)auStack_50);
    if (MVar1 == 0) {
      _DAT_02ce7218 = MStack_60;
      _DAT_02ce7214 = 1;
      goto LAB_0055a339;
    }
    pcVar4 = "Error setting CD time format";
  }
  else {
    pcVar4 = "Error opening CD device";
  }
  sound_sndmain_cpp_FUN_0055a560(pcVar4);
  return 0;
}
