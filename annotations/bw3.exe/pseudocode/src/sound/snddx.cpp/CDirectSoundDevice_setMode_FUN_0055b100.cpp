// Name: sound_snddx.cpp_CDirectSoundDevice_setMode_FUN_0055b100
// Address: 0055b100
// Address Range: [[0055b100, 0055b614]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_setMode_FUN_0055b100(CDirectSoundDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block)

#include "nocturne.h"

/* WARNING: Exceeded maximum restarts with more pending */

int __cdecl sound_snddx_cpp_CDirectSoundDevice_setMode_FUN_0055b100(CDirectSoundDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block)

{
  uint uVar1;
  double dVar2;
  char acStack_540 [400];
  char acStack_3b0 [400];
  char acStack_220 [396];
  DSBUFFERDESC aDStack_94 [2];
  DSBUFFERDESC DStack_6c;
  byte auStack_4c [6];
  ushort uStack_46;
  DWORD DStack_44;
  int iStack_40;
  ushort uStack_3c;
  ushort uStack_3a;
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
    memset(auStack_4c + 4,0,0x12);
    auStack_4c._4_2_ = 1;
    uStack_46 = (ushort)channels;
    DStack_44 = sample_rate;
    uStack_3c = (short)((int)((bits_per_sample + (bits_per_sample >> 0x1f) * -8) -
                             (uint)((bits_per_sample >> 0x1f) << 2 < 0)) >> 3) * uStack_46;
    iStack_40 = sample_rate * (uint)uStack_3c;
    uStack_3a = (ushort)bits_per_sample;
    uVar1 = (*g_DirectSoundPrimaryBuffer->vtable->SetFormat)
                      (g_DirectSoundPrimaryBuffer,(LPCWAVEFORMATEX)(auStack_4c + 4));
    if (uVar1 == 0) {
      uVar1 = (*g_DirectSoundPrimaryBuffer->vtable->GetFormat)
                        (g_DirectSoundPrimaryBuffer,(LPWAVEFORMATEX)(auStack_4c + 4),0x12,
                         (LPDWORD)0x0);
      if (uVar1 == 0) {
        g_StreamBitsPerSample = (int)uStack_3a;
        g_StreamSampleRate = DStack_44;
        g_StreamChannelCount = (int)uStack_46;
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
        memset(&DStack_6c,0,0x24);
        DStack_6c.lpwfxFormat = &tStack_34;
        DStack_6c.dwSize = 0x24;
        DStack_6c.dwFlags = 0x12;
        DStack_6c.dwBufferBytes = 0x400;
        uVar1 = (*g_DirectSound->vtable->CreateSoundBuffer)
                          (g_DirectSound,&DStack_6c,&pIStack_20,(LPUNKNOWN)0x0);
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
          sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar1);
          _sprintf(acStack_540,"DirectSux: Unable to %s.  (%s)");
          sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_540);
        }
        if (g_DirectSoundPropertySet != (IKsPropertySet *)0x0) {
          uStack_18 = 1;
          (*g_DirectSoundPropertySet->vtable->Set)
                    (g_DirectSoundPropertySet,(LPGUID)&g_DSPROPSETID_VoiceManager,0,(LPVOID)0x0,0,
                     &uStack_18,4);
        }
        uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_005586d0();
        if (0 < (int)uVar1) {
          *out_samples_per_block = 0;
          return 1;
        }
        g_StreamBlockCount = 8;
        fStack_14 = sound_sndmain_cpp_getMaxSwLatency_FUN_005591a0();
        dVar2 = round
                          ((double)(((float)g_StreamSampleRate * fStack_14) /
                                   (float)g_StreamBlockCount));
        g_StreamSamplesPerBlock = (int)ROUND(dVar2);
        g_StreamSamplesPerBlock = g_StreamSamplesPerBlock + 0xfU & 0xfffffff0;
        g_StreamBlockSizeBytes =
             g_StreamSamplesPerBlock *
             ((int)((g_StreamBitsPerSample + (g_StreamBitsPerSample >> 0x1f) * -8) -
                   (uint)((g_StreamBitsPerSample >> 0x1f) << 2 < 0)) >> 3) * g_StreamChannelCount;
        memset(aDStack_94,0,0x24);
        aDStack_94[0].lpwfxFormat = (LPWAVEFORMATEX)auStack_4c;
        aDStack_94[0].dwBufferBytes = g_StreamBlockSizeBytes * g_StreamBlockCount;
        aDStack_94[0].dwSize = 0x24;
        aDStack_94[0].dwFlags = 0;
        if (g_DirectSoundSecondaryBuffer != (IDirectSoundBuffer *)0x0) {
          (*g_DirectSoundSecondaryBuffer->vtable->Release)((IUnknown *)g_DirectSoundSecondaryBuffer)
          ;
          g_DirectSoundSecondaryBuffer = (IDirectSoundBuffer *)0x0;
        }
        uVar1 = (*g_DirectSound->vtable->CreateSoundBuffer)
                          (g_DirectSound,aDStack_94,&g_DirectSoundSecondaryBuffer,(LPUNKNOWN)0x0);
        if (uVar1 == 0) {
          *(int *)sample_rate = g_StreamSamplesPerBlock;
          return 1;
        }
        sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar1);
        _sprintf(&stack0xfffff92c,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_0055a560(&stack0xfffff92c);
      }
      else {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar1);
        _sprintf(acStack_220,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_220);
      }
    }
    else {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar1);
      _sprintf(acStack_3b0,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_3b0);
    }
  }
  if (g_DirectSoundSecondaryBuffer != (IDirectSoundBuffer *)0x0) {
    (*g_DirectSoundSecondaryBuffer->vtable->Release)((IUnknown *)g_DirectSoundSecondaryBuffer);
    g_DirectSoundSecondaryBuffer = (IDirectSoundBuffer *)0x0;
  }
  return 0;
}
