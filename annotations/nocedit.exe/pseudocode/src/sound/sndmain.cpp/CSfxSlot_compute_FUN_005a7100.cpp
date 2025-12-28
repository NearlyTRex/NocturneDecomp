// Name: sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
// Address: 005a7100
// Address Range: [[005a7100, 005a75dd]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100(CSfxSlot * this_ptr, float delta_time)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(CSfxSlot *this_ptr,float delta_time)

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
  int iVar12;
  int unaff_EDI;
  CSfxSlot *pCVar13;
  ulonglong local_60;
  uint local_38;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x96a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::compute - must be locked!");
  }
  if (this_ptr->sample == (CSfxSample *)0x0) {
    return 0;
  }
  if (this_ptr->is_active == 1) {
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"SFXDBG: sample = %s\n");
  }
  if ((this_ptr->playback_state != 0) && (0.0 <= (this_ptr->options).trigger_time)) {
    if ((0.0 < delta_time) && (0.0 <= this_ptr->fade_time_remaining)) {
      if (this_ptr->fade_time_remaining <= delta_time) {
        if ((this_ptr->stop_after_fade & 0x7fffffffU) != 0) goto LAB_005a73d3;
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
    }
    sound_sndmain_cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_005a6ce0(this_ptr);
    if ((this_ptr->options).delay_remaining == -1) {
      if (this_ptr->is_active == 1) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"  auto computing delay...\n");
      }
      sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005a7070(this_ptr);
    }
    if (this_ptr->is_active == 1) {
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"  delayRemaining = %7.2fs\n",
                 *(uint *)&(this_ptr->options).delay_remaining);
    }
    this_ptr->effective_frequency = (this_ptr->options).base_frequency;
    if (this_ptr->is_active == 1) {
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"  freq = %5.2f\n",(double)this_ptr->effective_frequency);
    }
    if (((this_ptr->options).flags & 1) == 0) {
      dVar7 = (this_ptr->options).position.x - g_Cached3DListenerPos.x;
      dVar5 = (this_ptr->options).position.y - g_Cached3DListenerPos.y;
      dVar6 = (this_ptr->options).position.z - g_Cached3DListenerPos.z;
      dVar4 = SQRT(dVar6 * dVar6 + dVar5 * dVar5 + dVar7 * dVar7);
      if (this_ptr->is_active == 1) {
        local_38 = SUB84 /* extract 2-byte value */(dVar4,0);
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"  distToEar = %7.2fs\n",local_38);
      }
      dVar8 = g_Cached3DListenerVelocity.x - (this_ptr->options).velocity.x;
      dVar9 = g_Cached3DListenerVelocity.y - (this_ptr->options).velocity.y;
      dVar10 = g_Cached3DListenerVelocity.z - (this_ptr->options).velocity.z;
      if (dVar4 <= 0.0) {
        dVar4 = SQRT(dVar10 * dVar10 + dVar9 * dVar9 + dVar8 * dVar8);
      }
      else {
        dVar4 = (dVar6 * dVar10 + dVar5 * dVar9 + dVar7 * dVar8) / dVar4;
      }
      local_60 = (dVar4 * 1 + 1116.4000000000001) / 1116.4000000000001;
      if (this_ptr->is_active == 1) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"  doppler = %5.2f\n",(uint)local_60);
      }
      dVar4 = 1.0 / (double)CONCAT44 /* combine 2-byte values */(4._4_4_,4._0_4_);
      if (local_60 < dVar4) {
        local_60 = dVar4;
      }
      if ((double)CONCAT44 /* combine 2-byte values */(4._4_4_,4._0_4_) < local_60) {
        local_60 = (double)CONCAT44 /* combine 2-byte values */(4._4_4_,4._0_4_);
      }
      if (this_ptr->is_active == 1) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"  doppler (clamped) = %5.2f\n",(uint)local_60);
      }
      this_ptr->effective_frequency = this_ptr->effective_frequency * (float)local_60;
    }
    else if (this_ptr->is_active == 1) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"  non spatialized\n");
    }
    sound_sndmain_cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005a6d80(this_ptr);
    sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0(this_ptr);
    if (this_ptr->is_active == 1) {
      dVar4 = (double)(this_ptr->options).current_volume;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"  vol = %5.2f\n",SUB84 /* extract 2-byte value */(dVar4,0),(int)((ulonglong)dVar4 >> 0x20));
    }
    sound_sndmain_cpp_CSfxSlot_computeChannelVolumes_FUN_005a6f00(this_ptr);
    if ((this_ptr->is_active == 1) && (iVar11 = 0, pCVar13 = this_ptr, 0 < g_AudioChannelCount)) {
      do {
        dVar4 = (double)((float)(1 << ((char)(this_ptr->sample->sample_info).bit_depth - 1U & 0x1f))
                        * pCVar13->channel_volumes[0]);
        iVar12 = iVar11 + 1;
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"  channelVol[%d] = %5.2f\n",iVar11,SUB84 /* extract 2-byte value */(dVar4,0),
                   (int)((ulonglong)dVar4 >> 0x20));
        iVar11 = iVar12;
        pCVar13 = (CSfxSlot *)&(pCVar13->options).position;
      } while (iVar12 < g_AudioChannelCount);
    }
    if (this_ptr->effective_frequency < (float)(1.0 / 20)) {
      this_ptr->effective_frequency = (float)(1.0 / 20);
    }
    if ((float)20 < this_ptr->effective_frequency) {
      this_ptr->effective_frequency = (float)20;
    }
    if (this_ptr->is_active == 1) {
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"  effFreq = %5.2f\n",
                 SUB84 /* extract 2-byte value */((double)this_ptr->effective_frequency,0),
                 (int)((ulonglong)(double)this_ptr->effective_frequency >> 0x20));
    }
    if (((unaff_EDI != 0) && (g_CSoundDevicePtr != (CSoundDevice *)0x0)) &&
       (this_ptr->hardware_buffer_handle != 0)) {
      (*g_CSoundDevicePtr->vtable->setSfxPos)(g_CSoundDevicePtr,this_ptr,unaff_EDI);
    }
    return 1;
  }
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"Killing %s in compute()\n");
LAB_005a73d3:
  sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(this_ptr);
  return 0;
}
