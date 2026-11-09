// Name: core_passngr.cpp_FUN_00511980
// Address: 00511980
// Address Range: [[00511980, 00511a61]]
// Convention: unknown
// Signature: int core_passngr_cpp_FUN_00511980(CCharacter *param_1)

#include "nocturne.h"

int core_passngr_cpp_FUN_00511980(CCharacter *param_1)

{
  byte *this_ptr;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if ((*(float *)&param_1[2].field_0x3bc0 <= 1.0) && (*(int *)&param_1->field_0x2568 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)param_1);
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
    puVar2 = auStack_34;
    puVar3 = auStack_1c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_0041a840(auStack_1c);
    if (iVar1 != 0) {
      if ((*(uint *)&param_1[2].field_0x3bc0 & 0x7fffffff) != 0) {
        this_ptr = &param_1[2].field_0x2f94;
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_005b7150
                  ((CMorph *)this_ptr,0,(CDeformableModelInstance *)&param_1->field_0x2b4,0);
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_005b7150
                  ((CMorph *)this_ptr,1,
                   (CDeformableModelInstance *)(*(int *)&param_1[2].field_0x2f90 + 0x2b4),0);
        core_morph_cpp_CMorph_render_FUN_005b76a0
                  ((CMorph *)this_ptr,*(float *)&param_1[2].field_0x3bc0);
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)param_1);
        return iVar1;
      }
      core_charactr_cpp_FUN_00424bd0(param_1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)param_1);
    return iVar1;
  }
  return 0;
}
