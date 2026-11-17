// Name: sound_snddx.cpp_CDirectSoundDevice_setMode_FUN_0052a450
// Address: 0052a450
// Address Range: [[0052a450, 0052a961]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_setMode_FUN_0052a450(CDirectSoundDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block)

#include "nocturne.h"

/* WARNING: Exceeded maximum restarts with more pending */

int __cdecl sound_snddx_cpp_CDirectSoundDevice_setMode_FUN_0052a450(CDirectSoundDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block)

{
  uint uVar1;
  char *pcVar2;
  double dVar3;
  char acStack_520 [400];
  char acStack_390 [400];
  char acStack_200 [396];
  DSBUFFERDESC DStack_74;
  byte auStack_5c [20];
  WAVEFORMATEX local_48;
  tWAVEFORMATEX tStack_34;
  IDirectSoundBuffer *pIStack_20;
  int *piStack_1c;
  uint uStack_18;
  float fStack_14;
  
  if (g_IKsPropertySet_PTR_02dc9224 != (IKsPropertySet *)0x0) {
    (*g_IKsPropertySet_PTR_02dc9224->vtable->Release)((IUnknown *)g_IKsPropertySet_PTR_02dc9224);
    g_IKsPropertySet_PTR_02dc9224 = (IKsPropertySet *)0x0;
  }
  if (g_IDirectSoundBuffer_PTR_02dc9218 != (IDirectSoundBuffer *)0x0) {
    memset(&local_48,0,0x12);
    local_48.wFormatTag = 1;
    local_48.nChannels = (WORD)channels;
    local_48.nSamplesPerSec = sample_rate;
    local_48.nBlockAlign =
         (short)((int)((bits_per_sample + (bits_per_sample >> 0x1f) * -8) -
                      (uint)((bits_per_sample >> 0x1f) << 2 < 0)) >> 3) * local_48.nChannels;
    local_48.nAvgBytesPerSec = sample_rate * (uint)local_48.nBlockAlign;
    local_48.wBitsPerSample = (WORD)bits_per_sample;
    uVar1 = (*g_IDirectSoundBuffer_PTR_02dc9218->vtable->SetFormat)
                      (g_IDirectSoundBuffer_PTR_02dc9218,&local_48);
    if (uVar1 == 0) {
      uVar1 = (*g_IDirectSoundBuffer_PTR_02dc9218->vtable->GetFormat)
                        (g_IDirectSoundBuffer_PTR_02dc9218,&local_48,0x12,(LPDWORD)0x0);
      if (uVar1 == 0) {
        g_INT_02dc9228 = (int)local_48.wBitsPerSample;
        g_INT_02dc922c = local_48.nSamplesPerSec;
        g_INT_02dc9230 = (int)local_48.nChannels;
        if (g_IKsPropertySet_PTR_02dc9224 != (IKsPropertySet *)0x0) {
          (*g_IKsPropertySet_PTR_02dc9224->vtable->Release)
                    ((IUnknown *)g_IKsPropertySet_PTR_02dc9224);
          g_IKsPropertySet_PTR_02dc9224 = (IKsPropertySet *)0x0;
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
        uVar1 = (*g_IDirectSound_PTR_02dc9214->vtable->CreateSoundBuffer)
                          (g_IDirectSound_PTR_02dc9214,(LPDSBUFFERDESC)auStack_5c,&pIStack_20,
                           (LPUNKNOWN)0x0);
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
          sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar1);
          _sprintf(acStack_390,"DirectSux: Unable to %s.  (%s)",
                     "Create temp secondary buffer for property set creation");
          sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_390);
        }
        if (g_IKsPropertySet_PTR_02dc9224 != (IKsPropertySet *)0x0) {
          uStack_18 = 1;
          (*g_IKsPropertySet_PTR_02dc9224->vtable->Set)
                    (g_IKsPropertySet_PTR_02dc9224,&g_DSPROPSETID_VoiceManager,0,(LPVOID)0x0,0,
                     &uStack_18,4);
        }
        if (g_IDirectSound3DListener_PTR_02dc9220 != (IDirectSound3DListener *)0x0) {
          *out_samples_per_block = 0;
          return 1;
        }
        g_INT_02dc923c = 8;
        fStack_14 = sound_sndmain_cpp_getMaxSwLatency_FUN_00528970();
        dVar3 = round
                          ((double)(((float)g_INT_02dc922c * fStack_14) / (float)g_INT_02dc923c));
        g_INT_02dc9234 = (int)ROUND(dVar3);
        g_INT_02dc9234 = g_INT_02dc9234 + 0xfU & 0xfffffff0;
        g_INT_02dc9238 =
             g_INT_02dc9234 *
             ((int)((g_INT_02dc9228 + (g_INT_02dc9228 >> 0x1f) * -8) -
                   (uint)((g_INT_02dc9228 >> 0x1f) << 2 < 0)) >> 3) * g_INT_02dc9230;
        memset(&DStack_74,0,0x14);
        DStack_74.lpwfxFormat = (LPWAVEFORMATEX)(auStack_5c + 0x10);
        DStack_74.dwBufferBytes = g_INT_02dc9238 * g_INT_02dc923c;
        DStack_74.dwSize = 0x14;
        DStack_74.dwFlags = 0;
        if (g_IDirectSoundBuffer_PTR_02dc921c != (IDirectSoundBuffer *)0x0) {
          (*g_IDirectSoundBuffer_PTR_02dc921c->vtable->Release)
                    ((IUnknown *)g_IDirectSoundBuffer_PTR_02dc921c);
          g_IDirectSoundBuffer_PTR_02dc921c = (IDirectSoundBuffer *)0x0;
        }
        uVar1 = (*g_IDirectSound_PTR_02dc9214->vtable->CreateSoundBuffer)
                          (g_IDirectSound_PTR_02dc9214,&DStack_74,&g_IDirectSoundBuffer_PTR_02dc921c
                           ,(LPUNKNOWN)0x0);
        if (uVar1 == 0) {
          *(int *)sample_rate = g_INT_02dc9234;
          return 1;
        }
        pcVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar1);
        _sprintf(&stack0xfffff94c,"DirectSux: Unable to %s.  (%s)",
                   "Create the secondary buffer",pcVar2);
        sound_sndmain_cpp_logSoundError_FUN_00529980(&stack0xfffff94c);
      }
      else {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar1);
        _sprintf(acStack_200,"DirectSux: Unable to %s.  (%s)",
                   "Get Primary buffer format");
        sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_200);
      }
    }
    else {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar1);
      _sprintf(acStack_520,"DirectSux: Unable to %s.  (%s)","Set Primary buffer format")
      ;
      sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_520);
    }
  }
  if (g_IDirectSoundBuffer_PTR_02dc921c != (IDirectSoundBuffer *)0x0) {
    (*g_IDirectSoundBuffer_PTR_02dc921c->vtable->Release)
              ((IUnknown *)g_IDirectSoundBuffer_PTR_02dc921c);
    g_IDirectSoundBuffer_PTR_02dc921c = (IDirectSoundBuffer *)0x0;
  }
  return 0;
}
