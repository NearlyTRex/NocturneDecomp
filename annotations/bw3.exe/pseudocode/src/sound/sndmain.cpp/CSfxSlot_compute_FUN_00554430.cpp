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
  if (*(int *)&this_ptr->field_0x68 == 0) {
    return 0;
  }
  if (*(int *)&this_ptr->field_0x108 == 1) {
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"SFXDBG: sample = %s\n");
  }
  if ((*(int *)&this_ptr->field_0x64 != 0) && (0.0 <= *(double *)&this_ptr->field_0x50)) {
    if ((0.0 < delta_time) && (0.0 <= *(float *)&this_ptr->field_0x100)) {
      if (*(float *)&this_ptr->field_0x100 <= delta_time) {
        if ((*(uint *)&this_ptr->field_0x104 & 0x7fffffff) != 0) goto LAB_00554712;
        *(uint *)&this_ptr->field_0x38 = *(uint *)&this_ptr->field_0xfc;
      }
      else {
        fVar1 = *(float *)&this_ptr->field_0x100;
        *(float *)&this_ptr->field_0x100 = *(float *)&this_ptr->field_0x100 - delta_time;
        *(float *)&this_ptr->field_0x38 =
             (delta_time / fVar1) *
             (*(float *)&this_ptr->field_0xfc - *(float *)&this_ptr->field_0x38) +
             *(float *)&this_ptr->field_0x38;
      }
      this_ptr->field_0x118 = this_ptr->field_0x118 | 8;
    }
    sound_sndmain_cpp_FUN_00553f40();
    _DAT_02cf28b8 =
         sound_sndmain_cpp_FUN_005571e0
                   (*(uint *)&this_ptr->field_0x4,*(uint *)&this_ptr->field_0x8,
                    *(uint *)&this_ptr->field_0xc,*(uint *)&this_ptr->field_0x10,
                    *(uint *)&this_ptr->field_0x14);
    if (_DAT_02cf28bc != 0) {
      sound_sndmain_cpp_FUN_005526d0();
    }
    if (*(float *)&this_ptr->field_0x40 == _DAT_005e4824) {
      if (*(int *)&this_ptr->field_0x108 == 1) {
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
      }
      sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_00554390(this_ptr);
    }
    if (*(int *)&this_ptr->field_0x108 == 1) {
      engine_console_cpp_FUN_00441ff0
                (g_CConsolePtr,"  delayRemaining = %7.2fs\n",
                 (double)*(float *)&this_ptr->field_0x40);
    }
    *(uint *)&this_ptr->field_0x6c = *(uint *)&this_ptr->field_0x3c;
    if (*(int *)&this_ptr->field_0x108 == 1) {
      engine_console_cpp_FUN_00441ff0
                (g_CConsolePtr,"  freq = %5.2f\n",(double)*(float *)&this_ptr->field_0x6c);
    }
    if ((this_ptr->field_0x4c & 1) == 0) {
      fVar8 = (float10)*(double *)&this_ptr->field_0x4 -
              (float10)*(double *)(&DAT_02cf2828 + _DAT_02cf28b8 * 8);
      fVar9 = (float10)*(double *)&this_ptr->field_0xc -
              (float10)*(double *)(&DAT_02cf2838 + _DAT_02cf28b8 * 8);
      fVar10 = (float10)*(double *)&this_ptr->field_0x14 -
               (float10)*(double *)(&DAT_02cf2848 + _DAT_02cf28b8 * 8);
      fVar1 = (float)SQRT(fVar10 * (float10)(double)fVar10 +
                          fVar9 * (float10)(double)fVar9 + fVar8 * (float10)(double)fVar8);
      if (*(int *)&this_ptr->field_0x108 == 1) {
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"  distToEar = %7.2fs\n",(double)fVar1);
      }
      fVar2 = *(float *)(_DAT_02cf28b8 * 4 + 0x2cf2858) - *(float *)&this_ptr->field_0x24;
      fVar3 = *(float *)(_DAT_02cf28b8 * 4 + 0x2cf2860) - *(float *)&this_ptr->field_0x28;
      fVar4 = *(float *)(_DAT_02cf28b8 * 4 + 0x2cf2868) - *(float *)&this_ptr->field_0x2c;
      if (fVar1 <= 0.0) {
        fVar1 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      }
      else {
        fVar1 = (fVar4 * (float)fVar10 + fVar3 * (float)fVar9 + fVar2 * (float)fVar8) / fVar1;
      }
      local_28 = (fVar1 * DAT_00604240 + _DAT_005e4844) / _DAT_005e4844;
      if (*(int *)&this_ptr->field_0x108 == 1) {
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"  doppler = %5.2f\n",(double)local_28);
      }
      if (local_28 < 1.0 / 0x40800000) {
        local_28 = 1.0 / 0x40800000;
      }
      if (0x40800000 < local_28) {
        local_28 = 0x40800000;
      }
      if (*(int *)&this_ptr->field_0x108 == 1) {
        engine_console_cpp_FUN_00441ff0
                  (g_CConsolePtr,"  doppler (clamped) = %5.2f\n",(double)local_28);
      }
      *(float *)&this_ptr->field_0x6c = *(float *)&this_ptr->field_0x6c * local_28;
    }
    else if (*(int *)&this_ptr->field_0x108 == 1) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
    }
    sound_sndmain_cpp_FUN_005540d0(this_ptr);
    sound_sndmain_cpp_FUN_00554140(this_ptr);
    if (*(int *)&this_ptr->field_0x108 == 1) {
      engine_console_cpp_FUN_00441ff0
                (g_CConsolePtr,"  vol = %5.2f\n",(double)*(float *)&this_ptr->field_0x38);
    }
    sound_sndmain_cpp_FUN_00554250(this_ptr);
    if ((*(int *)&this_ptr->field_0x108 == 1) && (iVar5 = 0, pCVar7 = this_ptr, 0 < DAT_0060422c)) {
      do {
        iVar6 = iVar5 + 1;
        engine_console_cpp_FUN_00441ff0
                  (g_CConsolePtr,"  channelVol[%d] = %5.2f\n",iVar5,
                   (double)((float)(1 << ((char)*(uint *)
                                                 (*(int *)&this_ptr->field_0x68 + 0x104) - 1U & 0x1f
                                         )) * *(float *)&pCVar7->field_0x90));
        iVar5 = iVar6;
        pCVar7 = (CSfxSlot *)&pCVar7->field_0x4;
      } while (iVar6 < DAT_0060422c);
    }
    if (*(float *)&this_ptr->field_0x6c < 1.0 / 0x41A00000) {
      *(float *)&this_ptr->field_0x6c = 1.0 / 0x41A00000;
    }
    if (0x41A00000 < *(float *)&this_ptr->field_0x6c) {
      *(float *)&this_ptr->field_0x6c = 0x41A00000;
    }
    if (*(int *)&this_ptr->field_0x108 == 1) {
      engine_console_cpp_FUN_00441ff0
                (g_CConsolePtr,"  effFreq = %5.2f\n",(double)*(float *)&this_ptr->field_0x6c);
    }
    return 1;
  }
  engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"Killing %s in compute()\n");
LAB_00554712:
  sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270(this_ptr);
  return 0;
}
