// Name: core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040
// Address: 0043c040
// Address Range: [[0043c040, 0043c1f6]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040(CDemonCamera *this_ptr)

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
    _DAT_01d046a0 = "..\\core\\dcamera.cpp";
    _DAT_01d046a4 = 0x432;
    core_main_c_FUN_004e4500("CDemonCamera::beginBackgroundScene - Scene not open");
  }
  _DAT_01467158 = _DAT_01467158 + 1;
  if (_DAT_01467158 == 1) {
    _DAT_0146715c = DAT_006141c0;
    _DAT_01467160 = _DAT_01c37788;
    puVar4 = (uint *)&DAT_01c2a38c;
    puVar5 = (uint *)&DAT_01467164;
    for (uVar1 = DAT_006141bc & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)puVar5 = *(byte *)puVar4;
      puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
      puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
    }
    _DAT_01468424 = _DAT_01c35814;
    DAT_006141c0 = 0x20;
    _DAT_01c37788 = 0;
    _DAT_01468428 = _DAT_01c35820;
    _DAT_01c35820 = 8;
    _DAT_0146842c = _DAT_01c3582c;
    _DAT_01c3582c = 0;
    _DAT_01c35814 = 0x10;
    iVar2 = 0;
    if (0 < *(int *)&this_ptr->field_0x148) {
      iVar3 = 0;
      do {
        *(int *)(&DAT_01c2a38c + iVar3) =
             *(int *)&this_ptr->field_0x158 + *(int *)&this_ptr->field_0x144 * iVar2 * 4;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < *(int *)&this_ptr->field_0x148);
    }
    engine_matrix_c_FUN_0046b710
              (DAT_0060b280,0,0,*(int *)&this_ptr->field_0x144 + -1,
               *(int *)&this_ptr->field_0x148 + -1);
    this_ptr_00 = DAT_0060b280;
    *(uint *)&this_ptr->field_0x1c0 = _DAT_01c35e38;
    *(uint *)&this_ptr->field_0x1c4 = _DAT_01c35e3c;
    *(uint *)&this_ptr->field_0x1c8 = _DAT_01c35e40;
    *(uint *)&this_ptr->field_0x1cc = _DAT_01c35e44;
    engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046cca0
              (this_ptr_00,(SCameraViewportState *)0x1468440);
    engine_drender_cpp_FUN_0046afb0(DAT_0060b280,(CVector3f *)&this_ptr->field_0x4);
    engine_matrix_c_FUN_0046b4b0(DAT_0060b280,*(uint *)&this_ptr->field_0x38);
    engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060
              (DAT_0060b280,(CMatrix3x3f *)&this_ptr->field_0x10);
  }
  return;
}
