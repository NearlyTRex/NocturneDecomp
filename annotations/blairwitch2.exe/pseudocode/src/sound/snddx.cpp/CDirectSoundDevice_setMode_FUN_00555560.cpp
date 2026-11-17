// Name: sound_snddx.cpp_CDirectSoundDevice_setMode_FUN_00555560
// Address: 00555560
// Address Range: [[00555560, 00555a74]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_setMode_FUN_00555560(CDirectSoundDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block)

#include "nocturne.h"

/* WARNING: Exceeded maximum restarts with more pending */

int __cdecl sound_snddx_cpp_CDirectSoundDevice_setMode_FUN_00555560(CDirectSoundDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block)

{
  uint uVar1;
  double dVar2;
  char acStack_520 [400];
  char acStack_390 [400];
  char acStack_200 [396];
  DSBUFFERDESC DStack_74;
  byte auStack_5c [20];
  WAVEFORMATEX WStack_48;
  tWAVEFORMATEX tStack_34;
  IDirectSoundBuffer *pIStack_20;
  int *piStack_1c;
  uint uStack_18;
  float fStack_14;
  
  if (g_DirectSoundPropertySet != (IKsPropertySet *)0x0) {
    (*g_DirectSoundPropertySet->vtable->Release)((IUnknown *)g_DirectSoundPropertySet);
    g_DirectSoundPropertySet = (IKsPropertySet *)0x0;
  }
  if (g_DirectSoundPrimaryBuffer != (IDirectSoundBuffer *)0x0) {
    memset(&WStack_48,0,0x12);
    WStack_48.wFormatTag = 1;
    WStack_48.nChannels = (WORD)channels;
    WStack_48.nSamplesPerSec = sample_rate;
    WStack_48.nBlockAlign =
         (short)((int)((bits_per_sample + (bits_per_sample >> 0x1f) * -8) -
                      (uint)((bits_per_sample >> 0x1f) << 2 < 0)) >> 3) * WStack_48.nChannels;
    WStack_48.nAvgBytesPerSec = sample_rate * (uint)WStack_48.nBlockAlign;
    WStack_48.wBitsPerSample = (WORD)bits_per_sample;
    uVar1 = (*g_DirectSoundPrimaryBuffer->vtable->SetFormat)(g_DirectSoundPrimaryBuffer,&WStack_48);
    if (uVar1 == 0) {
      uVar1 = (*g_DirectSoundPrimaryBuffer->vtable->GetFormat)
                        (g_DirectSoundPrimaryBuffer,&WStack_48,0x12,(LPDWORD)0x0);
      if (uVar1 == 0) {
        g_StreamBitsPerSample = (int)WStack_48.wBitsPerSample;
        g_StreamSampleRate = WStack_48.nSamplesPerSec;
        g_StreamChannelCount = (int)WStack_48.nChannels;
        if (g_DirectSoundPropertySet != (IKsPropertySet *)0x0) {
          (*g_DirectSoundPropertySet->vtable->Release)((IUnknown *)g_DirectSoundPropertySet);
          g_DirectSoundPropertySet = (IKsPropertySet *)0x0;
        }
        pIStack_20 = (IDirectSoundBuffer *)0x0;
        piStack_1c = (int *)0x0;
        memset(&tStack_34,0,0x12);
        tStack_34.wFormatTag = 1;
        tStack_34.nChannels = 1;
        tStack_34.nSamplesPerSec = 0x5622;
        tStack_34.wBitsPerSample = 0x10;
        tStack_34.nBlockAlign = 2;
        tStack_34.nAvgBytesPerSec = 0xac44;
        memset(auStack_5c,0,0x14);
        auStack_5c._16_4_ = &tStack_34;
        auStack_5c._0_4_ = 0x14;
        auStack_5c._4_4_ = 0x12;
        auStack_5c._8_4_ = 0x400;
        uVar1 = (*g_DirectSound->vtable->CreateSoundBuffer)
                          (g_DirectSound,(LPDSBUFFERDESC)auStack_5c,&pIStack_20,(LPUNKNOWN)0x0);
        if (uVar1 == 0) {
          (*pIStack_20->vtable->QueryInterface)(pIStack_20,&g_IID_IDirectSound3DBuffer);
          if (piStack_1c == (int *)0x0) {
            if (pIStack_20 != (IDirectSoundBuffer *)0x0) {
              (*pIStack_20->vtable->Release)();
              pIStack_20 = (IDirectSoundBuffer *)0x0;
            }
          }
          else {
            (**(code **)*piStack_1c)(piStack_1c,&g_IID_IKsPropertySet);
            if (pIStack_20 != (IDirectSoundBuffer *)0x0) {
              (*pIStack_20->vtable->Release)();
              pIStack_20 = (IDirectSoundBuffer *)0x0;
            }
            if (piStack_1c != (int *)0x0) {
              (**(code **)(*piStack_1c + 8))();
              piStack_1c = (int *)0x0;
            }
          }
        }
        else {
          sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(uVar1);
          _sprintf(acStack_520,"DirectSux: Unable to %s.  (%s)");
          sound_sndmain_cpp_logSoundError_FUN_005549c0(acStack_520);
        }
        if (g_DirectSoundPropertySet != (IKsPropertySet *)0x0) {
          uStack_18 = 1;
          (*g_DirectSoundPropertySet->vtable->Set)
                    (g_DirectSoundPropertySet,(LPGUID)&g_DSPROPSETID_VoiceManager,0,(LPVOID)0x0,0,
                     &uStack_18,4);
        }
        uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_00552b30();
        if (0 < (int)uVar1) {
          *out_samples_per_block = 0;
          return 1;
        }
        g_StreamBlockCount = 8;
        fStack_14 = sound_sndmain_cpp_getMaxSwLatency_FUN_00553600();
        dVar2 = round
                          ((double)(((float)g_StreamSampleRate * fStack_14) /
                                   (float)g_StreamBlockCount));
        g_StreamSamplesPerBlock = (int)ROUND(dVar2);
        g_StreamSamplesPerBlock = g_StreamSamplesPerBlock + 0xfU & 0xfffffff0;
        g_StreamBlockSizeBytes =
             g_StreamSamplesPerBlock *
             ((int)((g_StreamBitsPerSample + (g_StreamBitsPerSample >> 0x1f) * -8) -
                   (uint)((g_StreamBitsPerSample >> 0x1f) << 2 < 0)) >> 3) * g_StreamChannelCount;
        memset(&DStack_74,0,0x14);
        DStack_74.lpwfxFormat = (LPWAVEFORMATEX)(auStack_5c + 0x10);
        DStack_74.dwBufferBytes = g_StreamBlockSizeBytes * g_StreamBlockCount;
        DStack_74.dwSize = 0x14;
        DStack_74.dwFlags = 0;
        if (g_DirectSoundSecondaryBuffer != (IDirectSoundBuffer *)0x0) {
          (*g_DirectSoundSecondaryBuffer->vtable->Release)((IUnknown *)g_DirectSoundSecondaryBuffer)
          ;
          g_DirectSoundSecondaryBuffer = (IDirectSoundBuffer *)0x0;
        }
        uVar1 = (*g_DirectSound->vtable->CreateSoundBuffer)
                          (g_DirectSound,&DStack_74,&g_DirectSoundSecondaryBuffer,(LPUNKNOWN)0x0);
        if (uVar1 == 0) {
          *(int *)sample_rate = g_StreamSamplesPerBlock;
          return 1;
        }
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(uVar1);
        _sprintf(&stack0xfffff94c,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005549c0(&stack0xfffff94c);
      }
      else {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(uVar1);
        _sprintf(acStack_200,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005549c0(acStack_200);
      }
    }
    else {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(uVar1);
      _sprintf(acStack_390,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005549c0(acStack_390);
    }
  }
  if (g_DirectSoundSecondaryBuffer != (IDirectSoundBuffer *)0x0) {
    (*g_DirectSoundSecondaryBuffer->vtable->Release)((IUnknown *)g_DirectSoundSecondaryBuffer);
    g_DirectSoundSecondaryBuffer = (IDirectSoundBuffer *)0x0;
  }
  return 0;
}
