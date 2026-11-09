// Name: core_dlight.cpp_CDemonLight_endScene_FUN_0045c7e0
// Address: 0045c7e0
// Address Range: [[0045c7e0, 0045c8e1]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_endScene_FUN_0045c7e0(CDemonLight *this_ptr,int restore_viewport_state)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_endScene_FUN_0045c7e0(CDemonLight *this_ptr,int restore_viewport_state)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  CDemonLight *pCVar4;
  ushort uVar5;
  
  if (*(int *)&this_ptr->field_0x11e4 == 0) {
    _DAT_01d71de0 = "..\\core\\dlight.cpp";
    _DAT_01d71de4 = 0x164;
    core_main_c_FUN_004e4330("CDemonLight::endScene - Scene not open");
  }
  if (*(int *)&this_ptr->field_0x168 == 0) {
    puVar2 = *(ushort **)&this_ptr->field_0x2f94;
    uVar5 = 0;
    for (iVar3 = *(int *)&this_ptr->field_0x1cc0 * *(int *)&this_ptr->field_0x1cc4; 0 < iVar3;
        iVar3 = iVar3 + -1) {
      uVar1 = *puVar2;
      if ((uVar1 != 0xffff) && (uVar5 < uVar1)) {
        uVar5 = uVar1;
      }
      puVar2 = puVar2 + 1;
    }
    *(float *)&this_ptr->field_0x140 = (float)uVar5 * (float)_DAT_005bb394;
  }
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(DAT_005f2afc,0);
  engine_matrix_c_popViewport_FUN_0046d320();
  iVar3 = 0;
  pCVar4 = this_ptr;
  if (0 < *(int *)&this_ptr->field_0x1cc4) {
    do {
      *(uint *)(&DAT_01c5faec + iVar3 * 4) = *(uint *)&pCVar4->field_0x1cd4;
      iVar3 = iVar3 + 1;
      pCVar4 = (CDemonLight *)&pCVar4->field_0x4;
    } while (iVar3 < *(int *)&this_ptr->field_0x1cc4);
  }
  core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_00448fd0((CDemonCamera *)this_ptr);
  *(uint *)&this_ptr->field_0x11e4 = 0;
  return;
}
