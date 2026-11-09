// Name: core_bodypart.cpp_FUN_00414e90
// Address: 00414e90
// Address Range: [[00414e90, 00414f54]]
// Convention: unknown
// Signature: undefined4 core_bodypart_cpp_FUN_00414e90(CBodyPart *param_1)

#include "nocturne.h"

uint core_bodypart_cpp_FUN_00414e90(CBodyPart *param_1)

{
  int iVar1;
  CFlame *this_ptr;
  
  if ((*(int *)&param_1->field_0xf30 != 0) &&
     ((*(int *)&param_1->field_0x158 < 2 || (*(int *)&param_1->field_0x74c != 0)))) {
    if (*(int *)&param_1->field_0xcb4 != 0) {
      *(uint *)&g_CDemonSetPtr->field_0x15ac98 = *(uint *)&param_1->field_0xcb0;
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)param_1);
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
                (DAT_005f2afc,*(int *)&param_1->field_0xcc0);
      core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00414a60(param_1,0x2e7);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)param_1);
      *(uint *)&g_CDemonSetPtr->field_0x15ac98 = 0;
    }
    iVar1 = 0;
    if (0 < *(int *)&param_1->field_0x74c) {
      this_ptr = (CFlame *)&param_1->field_0x75c;
      do {
        core_flame_cpp_FUN_004a6090(this_ptr);
        iVar1 = iVar1 + 1;
        this_ptr = (CFlame *)&this_ptr[1].field_0xc;
      } while (iVar1 < *(int *)&param_1->field_0x74c);
    }
    return 1;
  }
  return 0;
}
