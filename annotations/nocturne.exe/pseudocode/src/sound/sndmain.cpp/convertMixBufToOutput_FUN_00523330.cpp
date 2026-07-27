// Name: sound_sndmain.cpp_convertMixBufToOutput_FUN_00523330
// Address: 00523330
// Address Range: [[00523330, 005234a7]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_convertMixBufToOutput_FUN_00523330(float *param_1,undefined2 *param_2,uint param_3,int param_4,int param_5)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_convertMixBufToOutput_FUN_00523330(float *param_1,ushort *param_2,uint param_3,int param_4,int param_5)

{
  float fVar1;
  ushort *local_30;
  byte local_28;
  ushort local_20;
  int local_18;
  int local_14;
  
  local_30 = param_2;
  if (param_3 < 8) {
LAB_0052347d:
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0x554;
    core_main_c_FUN_004c8440("convertMixBufToOutput - invalid bits: %d",param_3);
    return;
  }
  if (param_3 < 9) {
    local_18 = 0;
    if (0 < param_4) {
      do {
        fVar1 = *param_1;
        if (fVar1 <= (float)-1) {
          *(byte *)local_30 = 0;
        }
        else if (fVar1 < 1.0) {
          local_28 = (byte)(int)ROUND(fVar1 * 127.0f + 128.0f);
          *(byte *)local_30 = local_28;
        }
        else {
          *(byte *)local_30 = 0xff;
        }
        local_30 = (ushort *)((int)local_30 + param_5);
        param_1 = param_1 + 1;
        local_18 = local_18 + 1;
      } while (local_18 < param_4);
    }
  }
  else {
    if (param_3 != 0x10) goto LAB_0052347d;
    local_14 = 0;
    if (0 < param_4) {
      do {
        fVar1 = *param_1;
        if (fVar1 <= (float)-1) {
          *local_30 = 0x8001;
        }
        else if (fVar1 < 1.0) {
          local_20 = (ushort)(int)ROUND(fVar1 * 32766.0f);
          *local_30 = local_20;
        }
        else {
          *local_30 = 0x7fff;
        }
        local_30 = (ushort *)((int)local_30 + param_5);
        param_1 = param_1 + 1;
        local_14 = local_14 + 1;
      } while (local_14 < param_4);
    }
  }
  return;
}
