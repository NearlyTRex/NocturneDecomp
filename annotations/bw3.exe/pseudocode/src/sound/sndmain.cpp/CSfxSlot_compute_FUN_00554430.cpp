// Name: sound_sndmain.cpp_CSfxSlot_compute_FUN_00554430
// Address: 00554430
// Address Range: [[00554430, 0055491a]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSlot_compute_FUN_00554430(CSfxSlot *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_CSfxSlot_compute_FUN_00554430(CSfxSlot *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  CSfxSlot *pCVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float local_28;
  
  if (_DAT_02cf341c < 1) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0xae0;
    core_main_c_FUN_004e4330();
  }
  if (this_ptr->sample == (CSfxSample *)0x0) {
    return 0;
  }
  if (this_ptr->is_active == 1) {
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"SFXDBG: sample = %s\n");
  }
  if ((this_ptr->playback_state != 0) && (0.0 <= (this_ptr->options).playback_position)) {
    if ((0.0 < delta_time) && (0.0 <= this_ptr->fade_time_remaining)) {
      if (this_ptr->fade_time_remaining <= delta_time) {
        if (ABS(this_ptr->stop_after_fade) != 0.0) goto LAB_00554712;
        (this_ptr->options).current_volume = this_ptr->fade_target_volume;
      }
      else {
        fVar1 = (this_ptr->options).current_volume;
        fVar2 = this_ptr->fade_time_remaining;
        fVar3 = (this_ptr->options).current_volume;
        this_ptr->fade_time_remaining = this_ptr->fade_time_remaining - delta_time;
        (this_ptr->options).current_volume =
             (delta_time / fVar2) * (this_ptr->fade_target_volume - fVar1) + fVar3;
      }
      *(byte *)&this_ptr->changed_flags = (byte)this_ptr->changed_flags | 8;
    }
    sound_sndmain_cpp_FUN_00553f40();
    _DAT_02cf28b8 =
         sound_sndmain_cpp_FUN_005571e0
                   (*(uint *)&(this_ptr->options).position.x,
                    *(uint *)((int)&(this_ptr->options).position.x + 4),
                    *(uint *)&(this_ptr->options).position.y,
                    *(uint *)((int)&(this_ptr->options).position.y + 4),
                    *(uint *)&(this_ptr->options).position.z);
    if (_DAT_02cf28bc != 0) {
      sound_sndmain_cpp_FUN_005526d0();
    }
    if ((this_ptr->options).delay_remaining == _DAT_005e4824) {
      if (this_ptr->is_active == 1) {
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
      }
      sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_00554390(this_ptr);
    }
    if (this_ptr->is_active == 1) {
      engine_console_cpp_FUN_00441ff0
                (g_CConsolePtr,"  delayRemaining = %7.2fs\n",
                 (double)(this_ptr->options).delay_remaining);
    }
    this_ptr->effective_frequency = (this_ptr->options).base_frequency;
    if (this_ptr->is_active == 1) {
      engine_console_cpp_FUN_00441ff0
                (g_CConsolePtr,"  freq = %5.2f\n",(double)this_ptr->effective_frequency);
    }
    if (((this_ptr->options).flags & 1) == 0) {
      fVar8 = (float10)(this_ptr->options).position.x -
              (float10)*(double *)(&DAT_02cf2828 + _DAT_02cf28b8 * 8);
      fVar9 = (float10)(this_ptr->options).position.y -
              (float10)*(double *)(&DAT_02cf2838 + _DAT_02cf28b8 * 8);
      fVar10 = (float10)(this_ptr->options).position.z -
               (float10)*(double *)(&DAT_02cf2848 + _DAT_02cf28b8 * 8);
      fVar1 = (float)SQRT(fVar10 * (float10)(double)fVar10 +
                          fVar9 * (float10)(double)fVar9 + fVar8 * (float10)(double)fVar8);
      if (this_ptr->is_active == 1) {
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"  distToEar = %7.2fs\n",(double)fVar1);
      }
      fVar2 = *(float *)(_DAT_02cf28b8 * 4 + 0x2cf2858) - (this_ptr->options).velocity.x;
      fVar3 = *(float *)(_DAT_02cf28b8 * 4 + 0x2cf2860) - (this_ptr->options).velocity.y;
      fVar4 = *(float *)(_DAT_02cf28b8 * 4 + 0x2cf2868) - (this_ptr->options).velocity.z;
      if (fVar1 <= 0.0) {
        fVar1 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      }
      else {
        fVar1 = (fVar4 * (float)fVar10 + fVar3 * (float)fVar9 + fVar2 * (float)fVar8) / fVar1;
      }
      local_28 = (fVar1 * DAT_00604240 + _DAT_005e4844) / _DAT_005e4844;
      if (this_ptr->is_active == 1) {
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"  doppler = %5.2f\n",(double)local_28);
      }
      if (local_28 < 1.0 / 0x40800000) {
        local_28 = 1.0 / 0x40800000;
      }
      if (0x40800000 < local_28) {
        local_28 = 0x40800000;
      }
      if (this_ptr->is_active == 1) {
        engine_console_cpp_FUN_00441ff0
                  (g_CConsolePtr,"  doppler (clamped) = %5.2f\n",(double)local_28);
      }
      this_ptr->effective_frequency = this_ptr->effective_frequency * local_28;
    }
    else if (this_ptr->is_active == 1) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
    sound_sndmain_cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005540d0(this_ptr);
    sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_00554140(this_ptr);
    if (this_ptr->is_active == 1) {
      engine_console_cpp_FUN_00441ff0
                (g_CConsolePtr,"  vol = %5.2f\n",(double)(this_ptr->options).current_volume);
    }
    sound_sndmain_cpp_CSfxSlot_computeChannelVolumes_FUN_00554250(this_ptr);
    if ((this_ptr->is_active == 1) && (iVar5 = 0, pCVar7 = this_ptr, 0 < DAT_0060422c)) {
      do {
        iVar6 = iVar5 + 1;
        engine_console_cpp_FUN_00441ff0
                  (g_CConsolePtr,"  channelVol[%d] = %5.2f\n",iVar5,
                   (double)((float)(1 << ((char)(this_ptr->sample->sample_info).bit_depth - 1U &
                                         0x1f)) * pCVar7->channel_volumes[0]));
        iVar5 = iVar6;
        pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
      } while (iVar6 < DAT_0060422c);
    }
    if (this_ptr->effective_frequency < 1.0 / 0x41A00000) {
      this_ptr->effective_frequency = 1.0 / 0x41A00000;
    }
    if (0x41A00000 < this_ptr->effective_frequency) {
      this_ptr->effective_frequency = 0x41A00000;
    }
    if (this_ptr->is_active == 1) {
      engine_console_cpp_FUN_00441ff0
                (g_CConsolePtr,"  effFreq = %5.2f\n",(double)this_ptr->effective_frequency);
    }
    return 1;
  }
  engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"Killing %s in compute()\n");
LAB_00554712:
  sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270(this_ptr);
  return 0;
}
