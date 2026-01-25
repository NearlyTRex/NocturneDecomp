// Name: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40
// Address: 0050ad40
// Address Range: [[0050ad40, 0050adee]]
// Convention: __cdecl
// Signature: void core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40(CMansionPuzzleCircle * this_ptr)

#include "nocturne.h"

void __cdecl
core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40(CMansionPuzzleCircle *this_ptr)

{
  char *pcVar1;
  int iVar2;
  int in_stack_00000008;
  
  pcVar1 = this_ptr->field6_0x5f4 + in_stack_00000008 * 100 + -4;
  iVar2 = core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050aee0(this_ptr);
  if ((((*(int *)pcVar1 == 0) || (*(int *)(this_ptr->field6_0x5f4 + iVar2 * 100 + -4) != 0)) ||
      ((*(uint *)(pcVar1 + 4) & 0x7fffffff) != 0)) || ((*(uint *)(pcVar1 + 8) & 0x7fffffff) != 0)) {
    g_CurrentFilename = "..\\core\\manpuz.cpp";
    g_CurrentLineNumber = 0x57d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMansionPuzzleCircle::shiftPanelRight - fubared.");
  }
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = -0x80;
  pcVar1[0xb] = '?';
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940((CVector3f *)(pcVar1 + 0x58));
  sound_sndmain_cpp_startSfx_FUN_005a8e90("manpuz-doorslide.wav");
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return;
}
