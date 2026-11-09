// Name: core_passngr.cpp_FUN_0050a9b0
// Address: 0050a9b0
// Address Range: [[0050a9b0, 0050aa91]]
// Convention: unknown
// Signature: int core_passngr_cpp_FUN_0050a9b0(CDemonActor *param_1)

#include "nocturne.h"

int core_passngr_cpp_FUN_0050a9b0(CDemonActor *param_1)

{
  byte *this_ptr;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if ((*(float *)&param_1[0x18b].field_0x138 <= 1.0) && (*(int *)&param_1[0x1b].field_0xb4 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(param_1);
    (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
    puVar2 = auStack_34;
    puVar3 = auStack_1c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_0041daf0(auStack_1c);
    if (iVar1 != 0) {
      if ((*(uint *)&param_1[0x18b].field_0x138 & 0x7fffffff) != 0) {
        this_ptr = &param_1[0x182].field_0x124;
        core_morph_cpp_FUN_004fab90
                  ((CMorph *)this_ptr,0,(CDeformableModelInstance *)(param_1 + 1),0);
        core_morph_cpp_FUN_004fab90
                  ((CMorph *)this_ptr,1,
                   (CDeformableModelInstance *)(*(int *)&param_1[0x182].field_0x120 + 0x158),0);
        core_morph_cpp_CMorph_render_FUN_004fb0e0
                  ((CMorph *)this_ptr,*(float *)&param_1[0x18b].field_0x138);
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
        return iVar1;
      }
      core_charactr_cpp_FUN_0042d8e0(param_1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
    return iVar1;
  }
  return 0;
}
