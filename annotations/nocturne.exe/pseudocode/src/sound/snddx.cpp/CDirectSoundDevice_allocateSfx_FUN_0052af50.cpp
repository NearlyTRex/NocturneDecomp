// Name: sound_snddx.cpp_CDirectSoundDevice_allocateSfx_FUN_0052af50
// Address: 0052af50
// Address Range: [[0052af50, 0052b236]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSfx_FUN_0052af50(CDirectSoundDevice *this_ptr,int sample_buffer_id)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSfx_FUN_0052af50(CDirectSoundDevice *this_ptr,int sample_buffer_id)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  char acStack_650 [388];
  char acStack_4cc [400];
  char acStack_33c [400];
  char acStack_1ac [412];
  
  if (((sample_buffer_id < 1) || (0x18 < sample_buffer_id)) ||
     (*(int *)(&DAT_02dc9244 + sample_buffer_id * 4) == 0)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 702;
    core_main_c_displayErrorAndQuit_FUN_004c8440("DirectSoundDevice::allocateSfx - Invalid sample handle: %d");
  }
  if (_DAT_02dc9214 == (int *)0x0) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 703;
    core_main_c_displayErrorAndQuit_FUN_004c8440("DirectSoundDevice::allocateSfx - dSound not allocated?");
  }
  iVar7 = 1;
  iVar4 = 4;
  iVar1 = _DAT_02dc92ac;
  while (iVar1 != 0) {
    iVar7 = iVar7 + 1;
    if (0x7b < iVar4 + 4) break;
    iVar1 = *(int *)(&DAT_02dc92ac + iVar4);
    iVar4 = iVar4 + 4;
  }
  if (0x1e < iVar7) {
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"DirectSoundDevice::allocateSfx - no free buffers\n");
    return 0;
  }
  piVar2 = *(int **)(iVar7 * 4 + 0x2dc92a8);
  if (piVar2 != (int *)0x0) {
    uVar5 = (**(code **)(*piVar2 + 0x48))(piVar2);
    if (uVar5 != 0) {
      pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar5);
      _sprintf(acStack_650,"DirectSux: Unable to %s.  (%s)","Stop hardware sfx secondary buffer",
                 pcVar6);
      sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_650);
      goto LAB_0052b04d;
    }
  }
  piVar8 = (int *)(iVar7 * 4 + 0x2dc9324);
  piVar2 = (int *)*piVar8;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *piVar8 = 0;
  }
  piVar8 = (int *)(iVar7 * 4 + 0x2dc92a8);
  piVar2 = (int *)*piVar8;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *piVar8 = 0;
  }
LAB_0052b04d:
  iVar1 = iVar7 * 4;
  uVar5 = (**(code **)(*_DAT_02dc9214 + 0x14))
                    (_DAT_02dc9214,*(uint *)(&DAT_02dc9244 + sample_buffer_id * 4),
                     iVar1 + 0x2dc92a8);
  if (uVar5 == 0) {
    puVar3 = *(uint **)(iVar1 + 0x2dc92a8);
    if (puVar3 != (uint *)0x0) {
      uVar5 = (**(code **)*puVar3)(puVar3,&DAT_005c3918,iVar1 + 0x2dc9324);
      if (uVar5 == 0) {
        if (*(int *)(iVar1 + 0x2dc9324) != 0) {
          return iVar7;
        }
      }
      else {
        pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar5);
        _sprintf(acStack_4cc,"DirectSux: Unable to %s.  (%s)","get DirectSound3DBuffer interface from sfx secondary buffer"
                   ,pcVar6);
        sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_4cc);
      }
    }
  }
  else {
    pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar5);
    _sprintf(acStack_33c,"DirectSux: Unable to %s.  (%s)","Duplicate sound buffer",
               pcVar6);
    sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_33c);
  }
  piVar2 = *(int **)(iVar7 * 4 + 0x2dc92a8);
  if ((piVar2 != (int *)0x0) && (uVar5 = (**(code **)(*piVar2 + 0x48))(piVar2), uVar5 != 0)) {
    pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar5);
    _sprintf(acStack_1ac,"DirectSux: Unable to %s.  (%s)","Stop hardware sfx secondary buffer",
               pcVar6);
    sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_1ac);
    return 0;
  }
  piVar8 = (int *)(iVar7 * 4 + 0x2dc9324);
  piVar2 = (int *)*piVar8;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *piVar8 = 0;
  }
  piVar8 = (int *)(iVar7 * 4 + 0x2dc92a8);
  piVar2 = (int *)*piVar8;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *piVar8 = 0;
  }
  return 0;
}
