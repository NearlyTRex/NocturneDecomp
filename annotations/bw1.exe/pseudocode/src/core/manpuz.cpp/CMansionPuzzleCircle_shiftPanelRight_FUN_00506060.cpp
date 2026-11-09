// Name: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_00506060
// Address: 00506060
// Address Range: [[00506060, 0050610e]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_00506060(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_00506060(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(&this_ptr->field_0x5f0 + panel_index * 100);
  iVar2 = core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_00506200(this_ptr,panel_index);
  if ((((*piVar1 == 0) || (*(int *)(&this_ptr->field_0x5f0 + iVar2 * 100) != 0)) ||
      ((piVar1[1] & 0x7fffffffU) != 0)) || ((piVar1[2] & 0x7fffffffU) != 0)) {
    _DAT_01d1d400 = "..\\core\\manpuz.cpp";
    _DAT_01d1d404 = 0x57d;
    core_main_c_FUN_005030e0("CMansionPuzzleCircle::shiftPanelRight - fubared.");
  }
  piVar1[2] = 0x3f800000;
  sound_sndmain_cpp_FUN_00572ac0();
  sound_sndmain_cpp_FUN_005727e0((CVector3f *)(piVar1 + 0x16));
  sound_sndmain_cpp_startSfx_FUN_00572d20("manpuz-doorslide.wav");
  sound_sndmain_cpp_FUN_00572b40();
  return;
}
