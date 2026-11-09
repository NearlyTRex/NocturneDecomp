// Name: core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_00449840
// Address: 00449840
// Address Range: [[00449840, 004499f6]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00449840(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00449840(CDemonCamera *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (*(int *)&this_ptr->field_0x11e4 == 0) {
    _DAT_01d71de0 = "..\\core\\dcamera.cpp";
    _DAT_01d71de4 = 0x436;
    core_main_c_FUN_004e4330("CDemonCamera::beginBackgroundScene - Scene not open");
  }
  _DAT_0149ef08 = _DAT_0149ef08 + 1;
  if (_DAT_0149ef08 == 1) {
    _DAT_0149ef0c = DAT_005fba20;
    _DAT_0149ef10 = _DAT_01c6cee8;
    puVar4 = (uint *)&DAT_01c5faec;
    puVar5 = (uint *)&DAT_0149ef14;
    for (uVar1 = DAT_005fba1c & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)puVar5 = *(byte *)puVar4;
      puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
      puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
    }
    _DAT_014a01d4 = _DAT_01c6af74;
    DAT_005fba20 = 0x20;
    _DAT_01c6cee8 = 0;
    _DAT_014a01d8 = _DAT_01c6af80;
    _DAT_01c6af80 = 8;
    _DAT_014a01dc = _DAT_01c6af8c;
    _DAT_01c6af8c = 0;
    _DAT_01c6af74 = 0x10;
    iVar2 = 0;
    if (0 < *(int *)&this_ptr->field_0x148) {
      iVar3 = 0;
      do {
        *(int *)(&DAT_01c5faec + iVar3) =
             *(int *)&this_ptr->field_0x158 + *(int *)&this_ptr->field_0x144 * iVar2 * 4;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < *(int *)&this_ptr->field_0x148);
    }
    engine_matrix_c_FUN_0046d2f0
              (DAT_005f2afc,0,0,*(int *)&this_ptr->field_0x144 + -1,
               *(int *)&this_ptr->field_0x148 + -1);
    this_ptr_00 = DAT_005f2afc;
    *(uint *)&this_ptr->field_0x1c0 = _DAT_01c6b598;
    *(uint *)&this_ptr->field_0x1c4 = _DAT_01c6b59c;
    *(uint *)&this_ptr->field_0x1c8 = _DAT_01c6b5a0;
    *(uint *)&this_ptr->field_0x1cc = _DAT_01c6b5a4;
    engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046e880
              (this_ptr_00,(SCameraViewportState *)0x14a01f0);
    engine_drender_cpp_FUN_0046cb90(DAT_005f2afc,(CVector3f *)&this_ptr->field_0x4);
    engine_matrix_c_FUN_0046d090(DAT_005f2afc,*(uint *)&this_ptr->field_0x38);
    engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40
              (DAT_005f2afc,(CMatrix3x3f *)&this_ptr->field_0x10);
  }
  return;
}
