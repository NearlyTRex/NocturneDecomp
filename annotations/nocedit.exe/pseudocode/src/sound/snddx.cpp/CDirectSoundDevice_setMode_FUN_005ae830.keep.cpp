// Name: sound_snddx.cpp_CDirectSoundDevice_setMode_FUN_005ae830
// Address: 005ae830
// MANUAL RECONSTRUCTION
// Address Range: [[005ae830, 005aed41]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_setMode_FUN_005ae830(CDirectSoundDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */
/* WARNING: Exceeded maximum restarts with more pending */

int __cdecl sound_snddx_cpp_CDirectSoundDevice_setMode_FUN_005ae830(CDirectSoundDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar2;
  char acStack_6b0 [400];
  char acStack_520 [400];
  char acStack_390 [400];
  char acStack_200 [400];
  DSBUFFERDESC DStack_70;
  DSBUFFERDESC DStack_5c;
  WAVEFORMATEX local_48;
  tWAVEFORMATEX tStack_34;
  IDirectSoundBuffer *pIStack_20;
  IDirectSound3DBuffer *piStack_1c;
  uint uStack_18;
  float fStack_14;
  
  if (g_DirectSoundPropertySet != (IKsPropertySet *)0x0) {
    (*g_DirectSoundPropertySet->vtable->Release)((IUnknown *)g_DirectSoundPropertySet);
    g_DirectSoundPropertySet = (IKsPropertySet *)0x0;
  }
  if (g_DirectSoundPrimaryBuffer != (IDirectSoundBuffer *)0x0) {
    memset(&local_48,0,0x12);
    local_48.wFormatTag = 1;
    local_48.nChannels = (WORD)channels;
    local_48.nSamplesPerSec = sample_rate;
    local_48.nBlockAlign = (short)(bits_per_sample / 8) * local_48.nChannels;
    local_48.nAvgBytesPerSec = sample_rate * (uint)local_48.nBlockAlign;
    local_48.wBitsPerSample = (WORD)bits_per_sample;
    uVar1 = (*g_DirectSoundPrimaryBuffer->vtable->SetFormat)(g_DirectSoundPrimaryBuffer,&local_48);
    if (uVar1 == 0) {
      uVar2 = (*g_DirectSoundPrimaryBuffer->vtable->GetFormat)
                        (g_DirectSoundPrimaryBuffer,&local_48,0x12,(LPDWORD)0x0);
      if (uVar2 == 0) {
        g_StreamBitsPerSample = (int)local_48.wBitsPerSample;
        g_StreamSampleRate = local_48.nSamplesPerSec;
        g_StreamChannelCount = (int)local_48.nChannels;
        if (g_DirectSoundPropertySet != (IKsPropertySet *)0x0) {
          (*g_DirectSoundPropertySet->vtable->Release)((IUnknown *)g_DirectSoundPropertySet);
          g_DirectSoundPropertySet = (IKsPropertySet *)0x0;
        }
        pIStack_20 = (IDirectSoundBuffer *)0x0;
        piStack_1c = (IDirectSound3DBuffer *)0x0;
        memset(&tStack_34,0,0x12);
        tStack_34.wFormatTag = 1;
        tStack_34.nChannels = 1;
        tStack_34.nSamplesPerSec = 0x5622;
        tStack_34.wBitsPerSample = 0x10;
        tStack_34.nBlockAlign = 2;
        tStack_34.nAvgBytesPerSec = 0xac44;
        memset(&DStack_5c,0,0x14);
        DStack_5c.lpwfxFormat = &tStack_34;
        DStack_5c.dwSize = 0x14;
        DStack_5c.dwFlags = 0x12;
        DStack_5c.dwBufferBytes = 0x400;
        uVar2 = (*g_DirectSound->vtable->CreateSoundBuffer)
                          (g_DirectSound,&DStack_5c,&pIStack_20,(LPUNKNOWN)0x0);
        if (uVar2 == 0) {
          (*pIStack_20->vtable->QueryInterface)((IUnknown *)pIStack_20,&g_IID_IDirectSound3DBuffer,(void **)&piStack_1c);
          if (piStack_1c == (IDirectSound3DBuffer *)0x0) {
            if (pIStack_20 != (IDirectSoundBuffer *)0x0) {
              (*pIStack_20->vtable->Release)((IUnknown *)pIStack_20);
              pIStack_20 = (IDirectSoundBuffer *)0x0;
            }
          }
          else {
            (*piStack_1c->vtable->QueryInterface)((IUnknown *)piStack_1c,&g_IID_IKsPropertySet,(void **)&g_DirectSoundPropertySet);
            if (pIStack_20 != (IDirectSoundBuffer *)0x0) {
              (*pIStack_20->vtable->Release)((IUnknown *)pIStack_20);
              pIStack_20 = (IDirectSoundBuffer *)0x0;
            }
            if (piStack_1c != (IDirectSound3DBuffer *)0x0) {
              (*piStack_1c->vtable->Release)((IUnknown *)piStack_1c);
              piStack_1c = (IDirectSound3DBuffer *)0x0;
            }
          }
        }
        else {
          pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
          _sprintf
                    (acStack_390,"DirectSux: Unable to %s.  (%s)",
                     "Create temp secondary buffer for property set creation",pcVar3);
          sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_390);
        }
        if (g_DirectSoundPropertySet != (IKsPropertySet *)0x0) {
          uStack_18 = 1;
          (*g_DirectSoundPropertySet->vtable->Set)
                    (g_DirectSoundPropertySet,&g_KSPROPSETID_DirectSound3DListener,0,(LPVOID)0x0,0,
                     &uStack_18,4);
        }
        if (g_DirectSound3DListener != (IDirectSound3DListener *)0x0) {
          *out_samples_per_block = 0;
          return 1;
        }
        g_StreamBlockCount = 8;
        fStack_14 = sound_sndmain_cpp_getMaxSwLatency_FUN_005abea0();
        g_StreamSamplesPerBlock =
             (int)ROUND(ROUND(((float)g_StreamSampleRate * fStack_14) / (float)g_StreamBlockCount));
        g_StreamSamplesPerBlock = g_StreamSamplesPerBlock + 0xfU & 0xfffffff0;
        g_StreamBlockSizeBytes =
             g_StreamSamplesPerBlock * (g_StreamBitsPerSample / 8) * g_StreamChannelCount;
        memset(&DStack_70,0,0x14);
        DStack_70.lpwfxFormat = &local_48;
        DStack_70.dwBufferBytes = g_StreamBlockSizeBytes * g_StreamBlockCount;
        DStack_70.dwSize = 0x14;
        DStack_70.dwFlags = 0;
        if (g_DirectSoundSecondaryBuffer != (IDirectSoundBuffer *)0x0) {
          (*g_DirectSoundSecondaryBuffer->vtable->Release)((IUnknown *)g_DirectSoundSecondaryBuffer)
          ;
          g_DirectSoundSecondaryBuffer = (IDirectSoundBuffer *)0x0;
        }
        uVar2 = (*g_DirectSound->vtable->CreateSoundBuffer)
                          (g_DirectSound,&DStack_70,&g_DirectSoundSecondaryBuffer,(LPUNKNOWN)0x0);
        if (uVar2 == 0) {
          *out_samples_per_block = g_StreamSamplesPerBlock;
          return 1;
        }
        pcVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
        _sprintf
                  (acStack_6b0,"DirectSux: Unable to %s.  (%s)",
                   "Create the secondary buffer",pcVar2);
        sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_6b0);
      }
      else {
        pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
        _sprintf
                  (acStack_200,"DirectSux: Unable to %s.  (%s)",
                   "Get Primary buffer format",pcVar3);
        sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_200);
      }
    }
    else {
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar1);
      _sprintf
                (acStack_520,"DirectSux: Unable to %s.  (%s)","Set Primary buffer format",
                 pcVar3);
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_520);
    }
  }
  if (g_DirectSoundSecondaryBuffer != (IDirectSoundBuffer *)0x0) {
    (*g_DirectSoundSecondaryBuffer->vtable->Release)((IUnknown *)g_DirectSoundSecondaryBuffer);
    g_DirectSoundSecondaryBuffer = (IDirectSoundBuffer *)0x0;
  }
  return 0;
}
