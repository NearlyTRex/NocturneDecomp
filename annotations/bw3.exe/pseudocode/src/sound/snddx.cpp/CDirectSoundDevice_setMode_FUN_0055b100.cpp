// Name: sound_snddx.cpp_CDirectSoundDevice_setMode_FUN_0055b100
// Address: 0055b100
// Address Range: [[0055b100, 0055b614]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_setMode_FUN_0055b100(CDirectSoundDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
  
  if (_DAT_02cf49d4 != (int *)0x0) {
    (**(code **)(*_DAT_02cf49d4 + 8))();
    _DAT_02cf49d4 = (int *)0x0;
  }
  if (g_IDirectSoundBuffer_PTR_02cf49c8 != (IDirectSoundBuffer *)0x0) {
    memset(auStack_4c + 4,0,0x12);
    auStack_4c._4_2_ = 1;
    uStack_46 = (ushort)channels;
    DStack_44 = sample_rate;
    uStack_3c = (short)((int)((bits_per_sample + (bits_per_sample >> 0x1f) * -8) -
                             (uint)((bits_per_sample >> 0x1f) << 2 < 0)) >> 3) * uStack_46;
    iStack_40 = sample_rate * (uint)uStack_3c;
    uStack_3a = (ushort)bits_per_sample;
    uVar1 = (*g_IDirectSoundBuffer_PTR_02cf49c8->vtable->SetFormat)
                      (g_IDirectSoundBuffer_PTR_02cf49c8,(LPCWAVEFORMATEX)(auStack_4c + 4));
    if (uVar1 == 0) {
      uVar1 = (*g_IDirectSoundBuffer_PTR_02cf49c8->vtable->GetFormat)
                        (g_IDirectSoundBuffer_PTR_02cf49c8,(LPWAVEFORMATEX)(auStack_4c + 4),0x12,
                         (LPDWORD)0x0);
      if (uVar1 == 0) {
        g_INT_02cf49d8 = (int)uStack_3a;
        g_INT_02cf49dc = DStack_44;
        g_INT_02cf49e0 = (int)uStack_46;
        if (_DAT_02cf49d4 != (int *)0x0) {
          (**(code **)(*_DAT_02cf49d4 + 8))();
          _DAT_02cf49d4 = (int *)0x0;
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
        uVar1 = (*g_IDirectSound_PTR_02cf49c4->vtable->CreateSoundBuffer)
                          (g_IDirectSound_PTR_02cf49c4,&DStack_6c,&pIStack_20,(LPUNKNOWN)0x0);
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
        if (_DAT_02cf49d4 != (int *)0x0) {
          uStack_18 = 1;
          (**(code **)(*_DAT_02cf49d4 + 0x10))
                    (_DAT_02cf49d4,&g_DSPROPSETID_VoiceManager,0,0,0,&uStack_18);
        }
        uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_005586d0();
        if (0 < (int)uVar1) {
          *out_samples_per_block = 0;
          return 1;
        }
        g_INT_02cf49ec = 8;
        fStack_14 = sound_sndmain_cpp_getMaxSwLatency_FUN_005591a0();
        dVar2 = round
                          ((double)(((float)g_INT_02cf49dc * fStack_14) / (float)g_INT_02cf49ec));
        g_INT_02cf49e4 = (int)ROUND(dVar2);
        g_INT_02cf49e4 = g_INT_02cf49e4 + 0xfU & 0xfffffff0;
        g_INT_02cf49e8 =
             g_INT_02cf49e4 *
             ((int)((g_INT_02cf49d8 + (g_INT_02cf49d8 >> 0x1f) * -8) -
                   (uint)((g_INT_02cf49d8 >> 0x1f) << 2 < 0)) >> 3) * g_INT_02cf49e0;
        memset(aDStack_94,0,0x24);
        aDStack_94[0].lpwfxFormat = (LPWAVEFORMATEX)auStack_4c;
        aDStack_94[0].dwBufferBytes = g_INT_02cf49e8 * g_INT_02cf49ec;
        aDStack_94[0].dwSize = 0x24;
        aDStack_94[0].dwFlags = 0;
        if (g_IDirectSoundBuffer_PTR_02cf49cc != (IDirectSoundBuffer *)0x0) {
          (*g_IDirectSoundBuffer_PTR_02cf49cc->vtable->Release)
                    ((IUnknown *)g_IDirectSoundBuffer_PTR_02cf49cc);
          g_IDirectSoundBuffer_PTR_02cf49cc = (IDirectSoundBuffer *)0x0;
        }
        uVar1 = (*g_IDirectSound_PTR_02cf49c4->vtable->CreateSoundBuffer)
                          (g_IDirectSound_PTR_02cf49c4,aDStack_94,&g_IDirectSoundBuffer_PTR_02cf49cc
                           ,(LPUNKNOWN)0x0);
        if (uVar1 == 0) {
          *(int *)sample_rate = g_INT_02cf49e4;
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
  if (g_IDirectSoundBuffer_PTR_02cf49cc != (IDirectSoundBuffer *)0x0) {
    (*g_IDirectSoundBuffer_PTR_02cf49cc->vtable->Release)
              ((IUnknown *)g_IDirectSoundBuffer_PTR_02cf49cc);
    g_IDirectSoundBuffer_PTR_02cf49cc = (IDirectSoundBuffer *)0x0;
  }
  return 0;
}
