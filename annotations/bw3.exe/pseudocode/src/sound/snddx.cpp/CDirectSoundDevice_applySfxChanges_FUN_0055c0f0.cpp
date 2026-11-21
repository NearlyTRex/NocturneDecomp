// Name: sound_snddx.cpp_CDirectSoundDevice_applySfxChanges_FUN_0055c0f0
// Address: 0055c0f0
// Address Range: [[0055c0f0, 0055ca6d]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_applySfxChanges_FUN_0055c0f0(CDirectSoundDevice *this_ptr,CSfxSlot *slot,int update_flags)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_applySfxChanges_FUN_0055c0f0(CDirectSoundDevice *this_ptr,CSfxSlot *slot,int update_flags)

{
  LPDIRECTSOUNDBUFFER this_ptr_00;
  LPDIRECTSOUNDBUFFER this_ptr_01;
  CSfxSlot *pCVar1;
  int iVar2;
  uint uVar3;
  DWORD dwFrequency;
  int iVar4;
  uint uVar5;
  double dVar6;
  uint uVar7;
  float fVar8;
  char *in_stack_ffffecec;
  float fStack_1308;
  char acStack_1188 [408];
  char acStack_ff0 [400];
  char acStack_e60 [400];
  char acStack_cd0 [416];
  char acStack_b30 [384];
  char acStack_9b0 [392];
  char acStack_828 [408];
  char acStack_690 [400];
  char acStack_500 [396];
  char acStack_374 [400];
  char acStack_1e4 [400];
  longlong lStack_54;
  int iStack_48;
  DWORD DStack_44;
  ulonglong uStack_40;
  DWORD DStack_38;
  int iStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  int iStack_24;
  uint uStack_20;
  uint uStack_1c;
  IDirectSoundBuffer **ppIStack_18;
  float fStack_14;
  
  iVar2 = slot->hardware_buffer_handle;
  if (((iVar2 < 1) || (0x1e < iVar2)) ||
     (g_IDirectSoundBuffer_PTR_ARRAY_02cf500c[iVar2 * 9] == (IDirectSoundBuffer *)0x0)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 1258;
    core_main_c_displayErrorAndQuit_FUN_004e4330("DirectSoundDevice::setSfxPos - invalid handle");
  }
  uStack_1c = 1;
  ppIStack_18 = g_IDirectSoundBuffer_PTR_ARRAY_02cf500c + iVar2 * 9;
  this_ptr_00 = *ppIStack_18;
  this_ptr_01 = g_IDirectSoundBuffer_PTR_ARRAY_02cf500c[iVar2 * 9 + 1];
  if (this_ptr_00 == (LPDIRECTSOUNDBUFFER)0x0) {
    return 0;
  }
  if (this_ptr_01 != (LPDIRECTSOUNDBUFFER)0x0) {
    if ((update_flags & 0x88U) != 0) {
      fStack_28 = slot->reference_distance;
      fStack_30 = slot->max_distance;
      fStack_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20((slot->options).channel_index);
      if ((((slot->options).flags & 1) == 0) && (0.0 < fStack_14)) {
        fStack_28 = fStack_28 * fStack_14;
        fStack_30 = fStack_30 * fStack_14;
      }
    }
    if ((update_flags & 2U) != 0) {
      in_stack_ffffecec = (char *)(float)(slot->options).position.y;
      uVar3 = (*this_ptr_01->vtable->Unlock)
                        (this_ptr_01,(LPVOID)(float)(slot->options).position.x,
                         (DWORD)in_stack_ffffecec,(LPVOID)(float)(slot->options).position.z,1);
      if (uVar3 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar3);
        in_stack_ffffecec = "DirectSux: Unable to %s.  (%s)";
        _sprintf(acStack_b30,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_b30);
        uStack_1c = 0;
      }
    }
    if ((update_flags & 4U) != 0) {
      in_stack_ffffecec = (char *)(slot->options).velocity.y;
      fVar8 = (slot->options).velocity.x;
      uVar3 = (*this_ptr_01->vtable->Restore)(this_ptr_01);
      if (uVar3 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar3);
        _sprintf(acStack_500,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_500,fVar8);
        iStack_2c = 0;
      }
    }
    if (((update_flags & 8U) != 0) &&
       ((iStack_48 = sound_snddx_cpp_volumeToDirectSoundAttenuation_FUN_0055ab20
                               ((slot->options).current_volume * (float)in_stack_ffffecec),
        update_flags == -1 ||
        (uVar3 = iStack_48 - *(int *)((int)fStack_28 + 0x14), uVar5 = (int)uVar3 >> 0x1f,
        1 < (int)((uVar3 ^ uVar5) - uVar5))))) {
      uVar3 = (*this_ptr_00->vtable->SetVolume)(this_ptr_00,iStack_48);
      if (uVar3 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar3);
        _sprintf(acStack_ff0,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_ff0);
        iStack_2c = 0;
      }
      *(int *)((int)fStack_28 + 0x14) = iStack_48;
    }
    if (((update_flags & 0x10U) != 0) &&
       ((DStack_44 = sound_snddx_cpp_clampDirectSoundFrequency_FUN_0055abc0
                               ((float)(slot->sample->sample_info).sample_rate *
                                (slot->options).base_frequency), update_flags == -1 ||
        (uVar3 = DStack_44 - *(int *)((int)fStack_28 + 0x1c), uVar5 = (int)uVar3 >> 0x1f,
        1 < (int)((uVar3 ^ uVar5) - uVar5))))) {
      uVar3 = (*this_ptr_00->vtable->SetFrequency)(this_ptr_00,DStack_44);
      if (uVar3 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar3);
        _sprintf(acStack_cd0,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_cd0);
        iStack_2c = 0;
      }
      *(DWORD *)((int)fStack_28 + 0x1c) = DStack_44;
    }
    if ((update_flags & 0x40U) != 0) {
      iStack_34 = 0;
      if (((slot->options).flags & 1) != 0) {
        iStack_34 = 2;
      }
      if ((update_flags == -1) || (iStack_34 != *(int *)((int)fStack_28 + 0x20))) {
        uVar7 = 1;
        iVar2 = iStack_34;
        uVar3 = (*this_ptr_01->vtable->Stop)(this_ptr_01);
        if (uVar3 != 0) {
          sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar3);
          _sprintf(acStack_1188,"DirectSux: Unable to %s.  (%s)");
          sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_1188,iVar2,uVar7);
          iStack_34 = 0;
        }
        *(int *)((int)fStack_30 + 0x20) = uStack_40._4_4_;
      }
    }
    if ((update_flags & 0x80U) != 0) {
      uVar7 = 1;
      uVar3 = (*this_ptr_01->vtable->SetFrequency)(this_ptr_01,DStack_38);
      if (uVar3 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar3);
        _sprintf(acStack_1e4,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_1e4,uVar7);
        fStack_30 = 0.0;
      }
      uVar7 = 1;
      uVar3 = (*this_ptr_01->vtable->SetPan)(this_ptr_01,DStack_44);
      if (uVar3 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar3);
        _sprintf(acStack_828,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_828,uVar7);
        iStack_34 = 0;
      }
    }
    if ((update_flags & 0x100U) != 0) {
      uVar7 = 0x55c7ab;
      dVar6 = round(slot->prev_hardware_playback_pos);
      lStack_54 = (longlong)ROUND(dVar6);
      uVar3 = (*this_ptr_00->vtable->SetCurrentPosition)(this_ptr_00,(DWORD)lStack_54);
      if (uVar3 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar3);
        _sprintf(&stack0xffffecec,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_0055a560(&stack0xffffecec,uVar7);
        fStack_30 = 0.0;
      }
    }
    goto LAB_0055c320;
  }
  if ((update_flags & 0xcaU) != 0) {
    iVar2 = sound_sndmain_cpp_getAudioChannelCount_FUN_005583b0();
    iVar4 = 1;
    fStack_1308 = slot->channel_volumes[0];
    pCVar1 = slot;
    if (1 < iVar2) {
      do {
        if (fStack_1308 < pCVar1->channel_volumes[1]) {
          fStack_1308 = pCVar1->channel_volumes[1];
        }
        iVar4 = iVar4 + 1;
        pCVar1 = (CSfxSlot *)&(pCVar1->options).position;
      } while (iVar4 < iVar2);
    }
    iStack_2c = sound_snddx_cpp_volumeToDirectSoundAttenuation_FUN_0055ab20(fStack_1308);
    uStack_20 = 0;
    if ((iVar2 == 2) && (0.0 < fStack_1308)) {
      if (slot->channel_volumes[1] <= slot->channel_volumes[0]) {
        if (slot->channel_volumes[0] < slot->channel_volumes[1]) {
          if (0.0 < slot->channel_volumes[1]) {
            uStack_40 = floor
                                  ((double)((slot->channel_volumes[0] / slot->channel_volumes[1]) *
                                            0.6931472 * (float)-868.58900000000006));
            dVar6 = round(uStack_40);
            iStack_24 = (int)ROUND(dVar6);
            if ((iStack_24 < 0) || (-10000 < iStack_24)) goto LAB_0055c208;
          }
          else {
            uStack_20 = 0xffffd8f0;
          }
        }
      }
      else if (slot->channel_volumes[0] <= 0.0) {
LAB_0055c208:
        fStack_30 = 1.4013e-41;
      }
      else {
        uStack_40 = floor
                              ((double)((slot->channel_volumes[1] / slot->channel_volumes[0]) *
                                        0.6931472 * (float)868.58900000000006));
        dVar6 = round(uStack_40);
        iStack_24 = (int)ROUND(dVar6);
        if ((iStack_24 < 10000) || (0 < iStack_24)) {
          iStack_24 = 0;
        }
      }
    }
    uVar3 = uStack_40._4_4_ - *(int *)((int)fStack_28 + 0x14);
    if ((update_flags != -1) || (uVar5 = (int)uVar3 >> 0x1f, 1 < (int)((uVar3 ^ uVar5) - uVar5))) {
      uVar3 = (*this_ptr_00->vtable->SetVolume)(this_ptr_00,uStack_40._4_4_);
      if (uVar3 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar3);
        _sprintf(acStack_690,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_690);
        iStack_2c = 0;
      }
      *(int *)((int)fStack_28 + 0x14) = uStack_40._4_4_;
    }
    uVar3 = (int)fStack_30 - *(int *)((int)fStack_28 + 0x18);
    if ((update_flags != -1) || (uVar5 = (int)uVar3 >> 0x1f, 1 < (int)((uVar3 ^ uVar5) - uVar5))) {
      uVar3 = (*this_ptr_00->vtable->SetPan)(this_ptr_00,(long)fStack_30);
      if (uVar3 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar3);
        _sprintf(acStack_e60,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_e60);
        iStack_2c = 0;
      }
      *(float *)((int)fStack_28 + 0x18) = fStack_30;
    }
  }
  if ((update_flags & 0x96U) != 0) {
    dwFrequency = sound_snddx_cpp_clampDirectSoundFrequency_FUN_0055abc0
                            ((float)(slot->sample->sample_info).sample_rate *
                             slot->effective_frequency);
    uVar3 = dwFrequency - *(int *)((int)fStack_28 + 0x1c);
    if ((update_flags != -1) || (uVar5 = (int)uVar3 >> 0x1f, 1 < (int)((uVar3 ^ uVar5) - uVar5))) {
      uVar3 = (*this_ptr_00->vtable->SetFrequency)(this_ptr_00,dwFrequency);
      if (uVar3 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar3);
        _sprintf(acStack_9b0,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_9b0);
        iStack_2c = 0;
      }
      *(DWORD *)((int)fStack_28 + 0x1c) = dwFrequency;
    }
  }
  if ((update_flags & 0x100U) != 0) {
    uVar7 = 0x55c303;
    dVar6 = round(slot->prev_hardware_playback_pos);
    lStack_54 = (longlong)ROUND(dVar6);
    uVar3 = (*this_ptr_00->vtable->SetCurrentPosition)(this_ptr_00,(DWORD)lStack_54);
    if (uVar3 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar3);
      _sprintf(acStack_374,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_374,uVar7);
      fStack_30 = 0.0;
    }
  }
LAB_0055c320:
  slot->changed_flags = slot->changed_flags & (~update_flags | 0x40000000U);
  if (iStack_2c == 0) {
    sound_sndmain_cpp_logSoundError_FUN_0055a560("DirectSoundDevice::setSfxOpt - failed\n");
  }
  return iStack_2c;
}
