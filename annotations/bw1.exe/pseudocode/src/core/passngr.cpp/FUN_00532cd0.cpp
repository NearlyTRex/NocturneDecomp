// Name: core_passngr.cpp_FUN_00532cd0
// Address: 00532cd0
// Address Range: [[00532cd0, 00532db1]]
// Convention: unknown
// Signature: int core_passngr_cpp_FUN_00532cd0(CCharacter *param_1)

#include "nocturne.h"

int core_passngr_cpp_FUN_00532cd0(CCharacter *param_1)

{
  byte *this_ptr;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if ((*(float *)&param_1[2].field_0x8450 <= 1.0) && (*(int *)&param_1->field_0x24fc == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)param_1);
    (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
    puVar2 = auStack_34;
    puVar3 = auStack_1c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_004207b0(auStack_1c);
    if (iVar1 != 0) {
      if ((*(uint *)&param_1[2].field_0x8450 & 0x7fffffff) != 0) {
        this_ptr = &param_1[2].field_0x7824;
        core_morph_cpp_FUN_00523290
                  ((CMorph *)this_ptr,0,(CDeformableModelInstance *)&param_1->field_0x158,0);
        core_morph_cpp_FUN_00523290
                  ((CMorph *)this_ptr,1,
                   (CDeformableModelInstance *)(*(int *)&param_1[2].field_0x7820 + 0x158),0);
        core_morph_cpp_CMorph_render_FUN_005237e0
                  ((CMorph *)this_ptr,*(float *)&param_1[2].field_0x8450);
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)param_1);
        return iVar1;
      }
      core_charactr_cpp_CCharacter_renderCharacter_FUN_0042e960(param_1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)param_1);
    return iVar1;
  }
  return 0;
}
