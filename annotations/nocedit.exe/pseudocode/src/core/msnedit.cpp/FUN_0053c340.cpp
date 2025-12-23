// Name: core_msnedit.cpp_FUN_0053c340
// Address: 0053c340
// Address Range: [[0053c340, 0053c4e7]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053c340()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_0053c340(uint param_1, uint param_2,
   uint param_3) */

CDemonActor * core_msnedit_cpp_FUN_0053c340(void)

{
  CDemonActor *actor_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CDemonActor *pCVar2;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  byte auStack_5c [16];
  byte local_4c [12];
  byte auStack_40 [16];
  byte auStack_30 [8];
  CVector3f local_28 [2];
  float fVar3;
  
  if ((((in_stack_00000004[5] < in_stack_00000008) && (in_stack_00000004[6] < in_stack_0000000c)) &&
      (in_stack_00000008 < in_stack_00000004[7] + -1)) &&
     (in_stack_0000000c < in_stack_00000004[8] + -1)) {
    local_28[0].x = (float)g_CDemonCameraInstance.base.position.x;
    local_28[0].y = (float)g_CDemonCameraInstance.base.position.y;
    local_28[0].z = (float)g_CDemonCameraInstance.base.position.z;
    core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
              (&g_CDemonCameraInstance,(CVector3f *)local_4c,in_stack_00000008,in_stack_0000000c);
    fVar3 = (float)1000 /
            SQRT((float)auStack_40._8_4_ * (float)auStack_40._8_4_ +
                 (float)auStack_40._0_4_ * (float)auStack_40._0_4_ +
                 (float)auStack_40._4_4_ * (float)auStack_40._4_4_);
    auStack_40._0_4_ = (float)auStack_40._0_4_ * fVar3;
    auStack_40._4_4_ = (float)auStack_40._4_4_ * fVar3;
    auStack_40._8_4_ = (float)auStack_40._8_4_ * fVar3;
    pCVar2 = (CDemonActor *)0x0;
    fVar3 = 1.01;
    for (actor_ptr = (CDemonActor *)in_stack_00000004[0x152]; actor_ptr != (CDemonActor *)0x0;
        actor_ptr = actor_ptr->next_actor) {
      if (((*in_stack_00000004 == (actor_ptr->location).area_id) && (actor_ptr->field26_0x148 == 0))
         && ((g_DisableMouseHitOnBarrier == 0 ||
             (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CBarrier"),
             iVar1 == 0)))) {
        (*actor_ptr->vtable->getBoundingBox)(actor_ptr,(CBoundingBox3D *)(auStack_5c + 4));
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (actor_ptr,(CVector3f *)auStack_40,local_28);
        core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                  (actor_ptr,(CVector3f *)auStack_30,(CVector3f *)(local_4c + 4));
        auStack_5c._0_4_ =
             core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                       ((CBoundingBox3D *)auStack_5c,(CVector3f *)(auStack_40 + 8),
                        (CVector3f *)(auStack_30 + 4),(CVector3f *)0x0);
        if (((0.0 < (float)auStack_5c._0_4_) && ((float)auStack_5c._0_4_ <= fVar3)) &&
           ((float)auStack_5c._0_4_ <= 1.0)) {
          pCVar2 = actor_ptr;
          fVar3 = (float)auStack_5c._0_4_;
        }
      }
    }
    return pCVar2;
  }
  return (CDemonActor *)0x0;
}
