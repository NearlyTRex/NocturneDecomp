// Name: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40
// Address: 0050ad40
// Address Range: [[0050ad40, 0050adee]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40()

#include "nocturne.h"

/* Signature: byte actors_other_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight(uint
   param_1, uint param_2) */

void core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40(void)

{
  int *piVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  
  piVar1 = (int *)(in_stack_00000004 + 0x5f0 + in_stack_00000008 * 100);
  iVar2 = core_manpuz_cpp_FUN_0050aee0();
  if ((((*piVar1 == 0) || (*(int *)(in_stack_00000004 + 0x5f0 + iVar2 * 100) != 0)) ||
      ((piVar1[1] & 0x7fffffffU) != 0)) || ((piVar1[2] & 0x7fffffffU) != 0)) {
    g_CurrentFilename = "..\\core\\manpuz.cpp";
    g_CurrentLineNumber = 0x57d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMansionPuzzleCircle::shiftPanelRight - fubared.");
  }
  piVar1[2] = 0x3f800000;
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940((CVector3f *)(piVar1 + 0x16));
  sound_sndmain_cpp_startSfx_FUN_005a8e90("manpuz-doorslide.wav");
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return;
}
