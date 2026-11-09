// Name: core_manpuz.cpp_FUN_004e73c0
// Address: 004e73c0
// Address Range: [[004e73c0, 004e746e]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_FUN_004e73c0(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_FUN_004e73c0(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(&this_ptr->field_0x74c + panel_index * 100);
  iVar2 = core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004e7560(this_ptr,panel_index);
  if ((((*piVar1 == 0) || (*(int *)(&this_ptr->field_0x74c + iVar2 * 100) != 0)) ||
      ((piVar1[1] & 0x7fffffffU) != 0)) || ((piVar1[2] & 0x7fffffffU) != 0)) {
    _DAT_01d046a0 = "..\\core\\manpuz.cpp";
    _DAT_01d046a4 = 0x57d;
    core_main_c_FUN_004e4500("CMansionPuzzleCircle::shiftPanelRight - fubared.");
  }
  piVar1[2] = 0x3f800000;
  sound_sndmain_cpp_FUN_00550450();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00550170((CVector3f *)(piVar1 + 0x16));
  sound_sndmain_cpp_FUN_005506b0("manpuz-doorslide.wav");
  sound_sndmain_cpp_FUN_005504d0();
  return;
}
