// Name: core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_004e68c0
// Address: 004e68c0
// Address Range: [[004e68c0, 004e6a4c]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_processPanel_FUN_004e68c0(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_processPanel_FUN_004e68c0(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time)

{
  float fVar1;
  int iVar2;
  SPanel *pSVar3;
  SPanel *pSVar4;
  
  pSVar3 = this_ptr->panels + panel_index;
  if (*(int *)pSVar3 != 0) {
    fVar1 = (*(float *)&pSVar3->field_0x8 * delta_time) / _DAT_005f98c0 +
            *(float *)&pSVar3->field_0x4;
    *(float *)&pSVar3->field_0x4 = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)&pSVar3->field_0x8 = 0;
      *(uint *)&pSVar3->field_0x4 = 0;
    }
    if (1.0 <= *(float *)&pSVar3->field_0x4) {
      iVar2 = core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004e7560
                        (this_ptr,panel_index);
      pSVar4 = this_ptr->panels + iVar2;
      if (*(int *)pSVar4 != 0) {
        _DAT_01d046a0 = "..\\core\\manpuz.cpp";
        _DAT_01d046a4 = 0x45d;
        core_main_c_FUN_004e4500("CMansionPuzzleCircle::processPanel - Panel collision!");
      }
      *(int *)pSVar4 = *(int *)pSVar3;
      *(uint *)&pSVar4->field_0x4 = *(uint *)&pSVar3->field_0x4;
      *(uint *)&pSVar4->field_0x8 = *(uint *)&pSVar3->field_0x8;
      if (&pSVar4->field_0xc != &pSVar3->field_0xc) {
        *(uint *)&pSVar4->field_0xc = *(uint *)&pSVar3->field_0xc;
        *(uint *)&pSVar4->field_0x10 = *(uint *)&pSVar3->field_0x10;
        *(uint *)&pSVar4->field_0x14 = *(uint *)&pSVar3->field_0x14;
      }
      if (&pSVar4->field_0x18 != &pSVar3->field_0x18) {
        *(uint *)&pSVar4->field_0x18 = *(uint *)&pSVar3->field_0x18;
        *(uint *)&pSVar4->field_0x1c = *(uint *)&pSVar3->field_0x1c;
        *(uint *)&pSVar4->field_0x20 = *(uint *)&pSVar3->field_0x20;
      }
      *(uint *)&pSVar4->field_0x24 = *(uint *)&pSVar3->field_0x24;
      *(uint *)&pSVar4->field_0x28 = *(uint *)&pSVar3->field_0x28;
      *(uint *)&pSVar4->field_0x2c = *(uint *)&pSVar3->field_0x2c;
      *(uint *)&pSVar4->field_0x30 = *(uint *)&pSVar3->field_0x30;
      *(uint *)&pSVar4->field_0x34 = *(uint *)&pSVar3->field_0x34;
      *(uint *)&pSVar4->field_0x38 = *(uint *)&pSVar3->field_0x38;
      *(uint *)&pSVar4->field_0x3c = *(uint *)&pSVar3->field_0x3c;
      *(uint *)&pSVar4->field_0x40 = *(uint *)&pSVar3->field_0x40;
      *(uint *)&pSVar4->field_0x44 = *(uint *)&pSVar3->field_0x44;
      *(uint *)&pSVar4->field_0x48 = *(uint *)&pSVar3->field_0x48;
      *(uint *)&pSVar4->field_0x4c = *(uint *)&pSVar3->field_0x4c;
      *(uint *)&pSVar4->field_0x50 = *(uint *)&pSVar3->field_0x50;
      *(uint *)&pSVar4->field_0x54 = *(uint *)&pSVar3->field_0x54;
      if (&pSVar4->field_0x58 != &pSVar3->field_0x58) {
        *(uint *)&pSVar4->field_0x58 = *(uint *)&pSVar3->field_0x58;
        *(uint *)&pSVar4->field_0x5c = *(uint *)&pSVar3->field_0x5c;
        *(uint *)&pSVar4->field_0x60 = *(uint *)&pSVar3->field_0x60;
      }
      *(uint *)&pSVar4->field_0x8 = 0;
      *(uint *)&pSVar4->field_0x4 = 0;
      *(int *)pSVar3 = 0;
      goto LAB_004e6a3b;
    }
  }
  if (*(int *)pSVar3 != 0) {
    return;
  }
LAB_004e6a3b:
  *(uint *)&pSVar3->field_0x8 = 0;
  *(uint *)&pSVar3->field_0x4 = 0;
  return;
}
