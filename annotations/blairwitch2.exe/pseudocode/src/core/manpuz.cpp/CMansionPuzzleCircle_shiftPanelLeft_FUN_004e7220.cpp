// Name: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004e7220
// Address: 004e7220
// Address Range: [[004e7220, 004e73b7]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004e7220(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004e7220(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  SPanel *pSVar1;
  int iVar2;
  SPanel *pSVar3;
  
  iVar2 = core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004e7570(this_ptr,panel_index);
  pSVar1 = this_ptr->panels + panel_index;
  pSVar3 = this_ptr->panels + iVar2;
  if ((((*(int *)pSVar1 == 0) || (*(int *)pSVar3 != 0)) ||
      ((*(uint *)&pSVar1->field_0x4 & 0x7fffffff) != 0)) ||
     ((*(uint *)&pSVar1->field_0x8 & 0x7fffffff) != 0)) {
    _DAT_01d046a0 = "..\\core\\manpuz.cpp";
    _DAT_01d046a4 = 0x554;
    core_main_c_FUN_004e4500("CMansionPuzzleCircle::shiftPanelLeft - fubared.");
  }
  *(int *)pSVar3 = *(int *)pSVar1;
  *(uint *)&pSVar3->field_0x4 = *(uint *)&pSVar1->field_0x4;
  *(uint *)&pSVar3->field_0x8 = *(uint *)&pSVar1->field_0x8;
  if (&pSVar3->field_0xc != &pSVar1->field_0xc) {
    *(uint *)&pSVar3->field_0xc = *(uint *)&pSVar1->field_0xc;
    *(uint *)&pSVar3->field_0x10 = *(uint *)&pSVar1->field_0x10;
    *(uint *)&pSVar3->field_0x14 = *(uint *)&pSVar1->field_0x14;
  }
  if (&pSVar3->field_0x18 != &pSVar1->field_0x18) {
    *(uint *)&pSVar3->field_0x18 = *(uint *)&pSVar1->field_0x18;
    *(uint *)&pSVar3->field_0x1c = *(uint *)&pSVar1->field_0x1c;
    *(uint *)&pSVar3->field_0x20 = *(uint *)&pSVar1->field_0x20;
  }
  *(uint *)&pSVar3->field_0x24 = *(uint *)&pSVar1->field_0x24;
  *(uint *)&pSVar3->field_0x28 = *(uint *)&pSVar1->field_0x28;
  *(uint *)&pSVar3->field_0x2c = *(uint *)&pSVar1->field_0x2c;
  *(uint *)&pSVar3->field_0x30 = *(uint *)&pSVar1->field_0x30;
  *(uint *)&pSVar3->field_0x34 = *(uint *)&pSVar1->field_0x34;
  *(uint *)&pSVar3->field_0x38 = *(uint *)&pSVar1->field_0x38;
  *(uint *)&pSVar3->field_0x3c = *(uint *)&pSVar1->field_0x3c;
  *(uint *)&pSVar3->field_0x40 = *(uint *)&pSVar1->field_0x40;
  *(uint *)&pSVar3->field_0x44 = *(uint *)&pSVar1->field_0x44;
  *(uint *)&pSVar3->field_0x48 = *(uint *)&pSVar1->field_0x48;
  *(uint *)&pSVar3->field_0x4c = *(uint *)&pSVar1->field_0x4c;
  *(uint *)&pSVar3->field_0x50 = *(uint *)&pSVar1->field_0x50;
  *(uint *)&pSVar3->field_0x54 = *(uint *)&pSVar1->field_0x54;
  if (&pSVar3->field_0x58 != &pSVar1->field_0x58) {
    *(uint *)&pSVar3->field_0x58 = *(uint *)&pSVar1->field_0x58;
    *(uint *)&pSVar3->field_0x5c = *(uint *)&pSVar1->field_0x5c;
    *(uint *)&pSVar3->field_0x60 = *(uint *)&pSVar1->field_0x60;
  }
  *(int *)pSVar1 = 0;
  *(uint *)&pSVar3->field_0x4 = 0x3f800000;
  *(uint *)&pSVar3->field_0x8 = 0xbf800000;
  core_manpuz_cpp_FUN_004e6240(this_ptr,iVar2);
  sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00550170((CVector3f *)&pSVar3->field_0x58);
  sound_sndmain_cpp_FUN_005506b0("manpuz-doorslide.wav");
  sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
  return;
}
