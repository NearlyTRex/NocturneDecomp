// Name: sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830
// Address: 00524830
// Address Range: [[00524830, 00524d0d]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(CSfxSlot *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(CSfxSlot *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  ulonglong local_60;
  int local_18;
  
  if (_DAT_02dc84bc < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 2397;
    core_main_c_displayErrorAndQuit_FUN_004c8440("SfxSlot::compute - must be locked!");
  }
  if (this_ptr->sample == (CSfxSample *)0x0) {
    return 0;
  }
  local_18 = 0;
  if (this_ptr->is_active == 1) {
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"SFXDBG: sample = %s\n");
  }
  if ((this_ptr->playback_state != 0) && (0.0 <= (this_ptr->options).trigger_time)) {
    if ((0.0 < delta_time) && (0.0 <= this_ptr->fade_time_remaining)) {
      if (this_ptr->fade_time_remaining <= delta_time) {
        if (ABS(this_ptr->stop_after_fade) != 0.0) goto LAB_00524b03;
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
      local_18 = 8;
    }
    sound_sndmain_cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_00524410(this_ptr);
    if ((this_ptr->options).delay_remaining == _DAT_005a2148) {
      if (this_ptr->is_active == 1) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (g_CConsole_PTR_005ad350,"  auto computing delay...\n");
      }
      sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005247a0(this_ptr);
    }
    if (this_ptr->is_active == 1) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (g_CConsole_PTR_005ad350,"  delayRemaining = %7.2fs\n");
    }
    this_ptr->effective_frequency = (this_ptr->options).base_frequency;
    if (this_ptr->is_active == 1) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(g_CConsole_PTR_005ad350,"  freq = %5.2f\n");
    }
    if (((this_ptr->options).flags & 1) == 0) {
      dVar7 = (this_ptr->options).position.x - _DAT_02dc78e0;
      dVar5 = (this_ptr->options).position.y - _DAT_02dc78e8;
      dVar6 = (this_ptr->options).position.z - _DAT_02dc78f0;
      dVar4 = SQRT(dVar6 * dVar6 + dVar5 * dVar5 + dVar7 * dVar7);
      if (this_ptr->is_active == 1) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (g_CConsole_PTR_005ad350,"  distToEar = %7.2fs\n");
      }
      dVar8 = _DAT_02dc78f8 - (this_ptr->options).velocity.x;
      dVar9 = _DAT_02dc7900 - (this_ptr->options).velocity.y;
      dVar10 = _DAT_02dc7908 - (this_ptr->options).velocity.z;
      if (dVar4 <= 0.0) {
        dVar4 = SQRT(dVar10 * dVar10 + dVar9 * dVar9 + dVar8 * dVar8);
      }
      else {
        dVar4 = (dVar6 * dVar10 + dVar5 * dVar9 + dVar7 * dVar8) / dVar4;
      }
      local_60 = (dVar4 * _DAT_005bea80 + _DAT_005a2150) / _DAT_005a2150;
      if (this_ptr->is_active == 1) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (g_CConsole_PTR_005ad350,"  doppler = %5.2f\n");
      }
      dVar4 = 1.0 / __BITCAST_DOUBLE(CONCAT44(2.25f,FLOAT_005a2158));
      if (local_60 < dVar4) {
        local_60 = dVar4;
      }
      if (__BITCAST_DOUBLE(CONCAT44(2.25f,FLOAT_005a2158)) < local_60) {
        local_60 = __BITCAST_DOUBLE(CONCAT44(2.25f,FLOAT_005a2158));
      }
      if (this_ptr->is_active == 1) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (g_CConsole_PTR_005ad350,"  doppler (clamped) = %5.2f\n");
      }
      this_ptr->effective_frequency = this_ptr->effective_frequency * (float)local_60;
    }
    else if (this_ptr->is_active == 1) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (g_CConsole_PTR_005ad350,"  non spatialized\n");
    }
    sound_sndmain_cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005244b0(this_ptr);
    sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_00524520(this_ptr);
    if (this_ptr->is_active == 1) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(g_CConsole_PTR_005ad350,"  vol = %5.2f\n");
    }
    sound_sndmain_cpp_CSfxSlot_computeChannelVolumes_FUN_00524630(this_ptr);
    if ((this_ptr->is_active == 1) && (iVar11 = 0, 0 < DAT_005bea68)) {
      do {
        iVar11 = iVar11 + 1;
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (g_CConsole_PTR_005ad350,"  channelVol[%d] = %5.2f\n");
      } while (iVar11 < DAT_005bea68);
    }
    if (this_ptr->effective_frequency < (float)(1.0 / _FLOAT_005a2160)) {
      this_ptr->effective_frequency = (float)(1.0 / _FLOAT_005a2160);
    }
    if ((float)_FLOAT_005a2160 < this_ptr->effective_frequency) {
      this_ptr->effective_frequency = (float)_FLOAT_005a2160;
    }
    if (this_ptr->is_active == 1) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (g_CConsole_PTR_005ad350,"  effFreq = %5.2f\n");
    }
    if (((local_18 != 0) && (_DAT_02dc8318 != (int *)0x0)) &&
       (this_ptr->hardware_buffer_handle != 0)) {
      (**(code **)(*_DAT_02dc8318 + 0x40))(_DAT_02dc8318,this_ptr,local_18);
    }
    return 1;
  }
  engine_console_cpp_CConsole_printf_FUN_0043ac60
            (g_CConsole_PTR_005ad350,"Killing %s in compute()\n");
LAB_00524b03:
  sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(this_ptr);
  return 0;
}
