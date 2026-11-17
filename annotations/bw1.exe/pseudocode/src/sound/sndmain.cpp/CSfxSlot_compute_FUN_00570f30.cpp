// Name: sound_sndmain.cpp_CSfxSlot_compute_FUN_00570f30
// Address: 00570f30
// Address Range: [[00570f30, 0057141a]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSlot_compute_FUN_00570f30(CSfxSlot *this_ptr,float delta_time)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSlot_compute_FUN_00570f30(CSfxSlot *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float local_28;
  
  if (g_INT_02c807ec < 1) {
    g_CHAR_PTR_01d1d400 = "..\\sound\\sndmain.cpp";
    g_INT_01d1d404 = 0xade;
    core_main_c_displayErrorAndQuit_FUN_005030e0("SfxSlot::compute - must be locked!");
  }
  if (this_ptr->sample == (CSfxSample *)0x0) {
    return 0;
  }
  if (this_ptr->is_active == 1) {
    engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"SFXDBG: sample = %s\n");
  }
  if ((this_ptr->playback_state != 0) && (0.0 <= (this_ptr->options).playback_position)) {
    if ((0.0 < delta_time) && (0.0 <= this_ptr->fade_time_remaining)) {
      if (this_ptr->fade_time_remaining <= delta_time) {
        if (ABS(this_ptr->stop_after_fade) != 0.0) goto LAB_00571212;
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
    sound_sndmain_cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_00570a40(this_ptr);
    g_INT_02c7fc88 =
         sound_sndmain_cpp_getNearestListener_FUN_00574080
                   ((this_ptr->options).position.x,(this_ptr->options).position.y,
                    (this_ptr->options).position.z);
    if (g_INT_02c7fc8c != 0) {
      sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_0056f1e0();
    }
    if ((this_ptr->options).delay_remaining == -1.0f) {
      if (this_ptr->is_active == 1) {
        engine_console_cpp_CConsole_printf_FUN_00445430
                  (g_CConsolePtr,"  auto computing delay...\n");
      }
      sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_00570e90(this_ptr);
    }
    if (this_ptr->is_active == 1) {
      engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"  delayRemaining = %7.2fs\n")
      ;
    }
    this_ptr->effective_frequency = (this_ptr->options).base_frequency;
    if (this_ptr->is_active == 1) {
      engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"  freq = %5.2f\n");
    }
    if (((this_ptr->options).flags & 1) == 0) {
      fVar6 = (float10)(this_ptr->options).position.x -
              (float10)(&g_DOUBLE_02c7fbf8)[g_INT_02c7fc88];
      fVar7 = (float10)(this_ptr->options).position.y -
              (float10)(&g_DOUBLE_02c7fc08)[g_INT_02c7fc88];
      fVar8 = (float10)(this_ptr->options).position.z -
              (float10)(&g_DOUBLE_02c7fc18)[g_INT_02c7fc88];
      fVar1 = (float)SQRT(fVar8 * (float10)(double)fVar8 +
                          fVar7 * (float10)(double)fVar7 + fVar6 * (float10)(double)fVar6);
      if (this_ptr->is_active == 1) {
        engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"  distToEar = %7.2fs\n");
      }
      fVar2 = *(float *)((int)&g_CVector3d_02c7fc28.x + g_INT_02c7fc88 * 4) -
              (this_ptr->options).velocity.x;
      fVar3 = *(float *)((int)&g_CVector3d_02c7fc28.y + g_INT_02c7fc88 * 4) -
              (this_ptr->options).velocity.y;
      fVar4 = *(float *)((int)&g_CVector3d_02c7fc28.z + g_INT_02c7fc88 * 4) -
              (this_ptr->options).velocity.z;
      if (fVar1 <= 0.0) {
        fVar1 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      }
      else {
        fVar1 = (fVar4 * (float)fVar8 + fVar3 * (float)fVar7 + fVar2 * (float)fVar6) / fVar1;
      }
      local_28 = (fVar1 * g_FLOAT_00623304 + 1116.4f) / 1116.4f;
      if (this_ptr->is_active == 1) {
        engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"  doppler = %5.2f\n");
      }
      if (local_28 < 1.0 / 4.0f) {
        local_28 = 1.0 / 4.0f;
      }
      if (4.0f < local_28) {
        local_28 = 4.0f;
      }
      if (this_ptr->is_active == 1) {
        engine_console_cpp_CConsole_printf_FUN_00445430
                  (g_CConsolePtr,"  doppler (clamped) = %5.2f\n");
      }
      this_ptr->effective_frequency = this_ptr->effective_frequency * local_28;
    }
    else if (this_ptr->is_active == 1) {
      engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"  non spatialized\n");
    }
    sound_sndmain_cpp_CSfxSlot_computeDistancesToSpeakers_FUN_00570bd0(this_ptr);
    sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_00570c40(this_ptr);
    if (this_ptr->is_active == 1) {
      engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"  vol = %5.2f\n");
    }
    sound_sndmain_cpp_CSfxSlot_computeChannelVolumes_FUN_00570d50(this_ptr);
    if ((this_ptr->is_active == 1) && (iVar5 = 0, 0 < g_INT_006232ec)) {
      do {
        iVar5 = iVar5 + 1;
        engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"  channelVol[%d] = %5.2f\n");
      } while (iVar5 < g_INT_006232ec);
    }
    if (this_ptr->effective_frequency < 1.0 / 20.0f) {
      this_ptr->effective_frequency = 1.0 / 20.0f;
    }
    if (20.0f < this_ptr->effective_frequency) {
      this_ptr->effective_frequency = 20.0f;
    }
    if (this_ptr->is_active == 1) {
      engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"  effFreq = %5.2f\n");
    }
    return 1;
  }
  engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"Killing %s in compute()\n");
LAB_00571212:
  sound_sndmain_cpp_CSfxSlot_kill_FUN_00571d70(this_ptr);
  return 0;
}
