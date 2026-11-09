// Name: core_bodypart.cpp_FUN_00419280
// Address: 00419280
// Address Range: [[00419280, 00419344]]
// Convention: unknown
// Signature: undefined4 core_bodypart_cpp_FUN_00419280(CBodyPart *param_1)

#include "nocturne.h"

uint core_bodypart_cpp_FUN_00419280(CBodyPart *param_1)

{
  int iVar1;
  CFlame *this_ptr;
  
  if ((*(int *)&param_1->field_0xf30 != 0) &&
     ((*(int *)&param_1->field_0x158 < 2 || (*(int *)&param_1->field_0x74c != 0)))) {
    if (*(int *)&param_1->field_0xcb4 != 0) {
      *(uint *)&g_CDemonSetPtr->field_0x15ac98 = *(uint *)&param_1->field_0xcb0;
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)param_1);
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
                (DAT_00612560,*(int *)&param_1->field_0xcc0);
      core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00418e50(param_1,0x2e7);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)param_1);
      *(uint *)&g_CDemonSetPtr->field_0x15ac98 = 0;
    }
    iVar1 = 0;
    if (0 < *(int *)&param_1->field_0x74c) {
      this_ptr = (CFlame *)&param_1->field_0x75c;
      do {
        core_flame_cpp_CFlame_renderTransparent_FUN_004b8100(this_ptr);
        iVar1 = iVar1 + 1;
        this_ptr = (CFlame *)&this_ptr[1].field_0xc;
      } while (iVar1 < *(int *)&param_1->field_0x74c);
    }
    return 1;
  }
  return 0;
}
