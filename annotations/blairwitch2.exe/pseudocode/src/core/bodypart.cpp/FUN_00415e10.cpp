// Name: core_bodypart.cpp_FUN_00415e10
// Address: 00415e10
// Address Range: [[00415e10, 00415ed4]]
// Convention: unknown
// Signature: undefined4 core_bodypart_cpp_FUN_00415e10(CBodyPart *param_1)

#include "nocturne.h"

uint core_bodypart_cpp_FUN_00415e10(CBodyPart *param_1)

{
  int iVar1;
  CFlame *this_ptr;
  
  if ((*(int *)&param_1->field_0x1340 != 0) &&
     ((*(int *)&param_1->field_0x2b4 < 2 || (*(int *)&param_1->field_0x8a8 != 0)))) {
    if (*(int *)&param_1->field_0x10c8 != 0) {
      *(uint *)&g_CDemonSetPtr->field_0x15ac98 = *(uint *)&param_1->field_0x10c4;
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)param_1);
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
                (DAT_0060b280,*(int *)&param_1->field_0x10d4);
      core_bodypart_cpp_FUN_004159e0(param_1,0x2e7);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)param_1);
      *(uint *)&g_CDemonSetPtr->field_0x15ac98 = 0;
    }
    iVar1 = 0;
    if (0 < *(int *)&param_1->field_0x8a8) {
      this_ptr = (CFlame *)&param_1->field_0x8b8;
      do {
        core_flame_cpp_FUN_0049f850(this_ptr);
        iVar1 = iVar1 + 1;
        this_ptr = (CFlame *)&this_ptr[1].field_0xc;
      } while (iVar1 < *(int *)&param_1->field_0x8a8);
    }
    return 1;
  }
  return 0;
}
