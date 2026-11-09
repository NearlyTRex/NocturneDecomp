// Name: core_manpuz.cpp_FUN_004e7220
// Address: 004e7220
// Address Range: [[004e7220, 004e73b7]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_FUN_004e7220(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_FUN_004e7220(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004e7570(this_ptr,panel_index);
  piVar1 = (int *)(&this_ptr->field_0x74c + panel_index * 100);
  piVar3 = (int *)(&this_ptr->field_0x74c + iVar2 * 100);
  if ((((*piVar1 == 0) || (*piVar3 != 0)) || ((piVar1[1] & 0x7fffffffU) != 0)) ||
     ((piVar1[2] & 0x7fffffffU) != 0)) {
    _DAT_01d046a0 = "..\\core\\manpuz.cpp";
    _DAT_01d046a4 = 0x554;
    core_main_c_FUN_004e4500("CMansionPuzzleCircle::shiftPanelLeft - fubared.");
  }
  *piVar3 = *piVar1;
  piVar3[1] = piVar1[1];
  piVar3[2] = piVar1[2];
  if (piVar3 + 3 != piVar1 + 3) {
    piVar3[3] = piVar1[3];
    piVar3[4] = piVar1[4];
    piVar3[5] = piVar1[5];
  }
  if (piVar3 + 6 != piVar1 + 6) {
    piVar3[6] = piVar1[6];
    piVar3[7] = piVar1[7];
    piVar3[8] = piVar1[8];
  }
  piVar3[9] = piVar1[9];
  piVar3[10] = piVar1[10];
  piVar3[0xb] = piVar1[0xb];
  piVar3[0xc] = piVar1[0xc];
  piVar3[0xd] = piVar1[0xd];
  piVar3[0xe] = piVar1[0xe];
  piVar3[0xf] = piVar1[0xf];
  piVar3[0x10] = piVar1[0x10];
  piVar3[0x11] = piVar1[0x11];
  piVar3[0x12] = piVar1[0x12];
  piVar3[0x13] = piVar1[0x13];
  piVar3[0x14] = piVar1[0x14];
  piVar3[0x15] = piVar1[0x15];
  if (piVar3 + 0x16 != piVar1 + 0x16) {
    piVar3[0x16] = piVar1[0x16];
    piVar3[0x17] = piVar1[0x17];
    piVar3[0x18] = piVar1[0x18];
  }
  *piVar1 = 0;
  piVar3[1] = 0x3f800000;
  piVar3[2] = -0x40800000;
  core_manpuz_cpp_FUN_004e6240(this_ptr,iVar2);
  sound_sndmain_cpp_FUN_00550450();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00550170((CVector3f *)(piVar3 + 0x16));
  sound_sndmain_cpp_FUN_005506b0("manpuz-doorslide.wav");
  sound_sndmain_cpp_FUN_005504d0();
  return;
}
