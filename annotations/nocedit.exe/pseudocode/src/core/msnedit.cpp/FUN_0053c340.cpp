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
  float in_stack_00000010;
  ulonglong local_4c;
  byte local_44 [28];
  byte local_28 [20];
  float local_14;
  
  if ((((in_stack_00000004[5] < in_stack_00000008) && (in_stack_00000004[6] < in_stack_0000000c)) &&
      (in_stack_00000008 < in_stack_00000004[7] + -1)) &&
     (in_stack_0000000c < in_stack_00000004[8] + -1)) {
    local_28._0_4_ = g_CDemonCameraInstance.base.position.x;
    local_28._4_4_ = g_CDemonCameraInstance.base.position.y;
    local_28._8_4_ = g_CDemonCameraInstance.base.position.z;
    core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
              (&g_CDemonCameraInstance,(CVector3f *)&local_4c,in_stack_00000008,in_stack_0000000c);
    local_14 = (float)1000 /
               SQRT((float)local_44._4_4_ * (float)local_44._4_4_ +
                    local_4c._4_4_ * local_4c._4_4_ + (float)local_44._0_4_ * (float)local_44._0_4_)
    ;
    local_44._0_4_ = (float)local_44._0_4_ * local_14;
    local_44._4_4_ = (float)local_44._4_4_ * local_14;
    pCVar2 = (CDemonActor *)0x0;
    local_4c = (double)CONCAT44 /* combine 2-byte values */(local_4c._4_4_ * local_14,(float)local_4c);
    for (actor_ptr = (CDemonActor *)in_stack_00000004[0x152]; actor_ptr != (CDemonActor *)0x0;
        actor_ptr = actor_ptr->next_actor) {
      if (((*in_stack_00000004 == (actor_ptr->location).area_id) && (actor_ptr->field26_0x148 == 0))
         && ((g_DisableMouseHitOnBarrier == 0 ||
             (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CBarrier"),
             iVar1 == 0)))) {
        (*actor_ptr->vtable->getBoundingBox)(actor_ptr,(CBoundingBox3D *)&stack0xffffffa0);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (actor_ptr,(CVector3f *)local_28,(CVector3f *)&stack0xfffffff0);
        core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                  (actor_ptr,(CVector3f *)(local_28 + 0x10),(CVector3f *)(local_44 + 0x14));
        local_44._0_4_ =
             core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                       ((CBoundingBox3D *)local_44,(CVector3f *)(local_28 + 8),
                        (CVector3f *)&local_14,(CVector3f *)0x0);
        local_4c = (double)(float)local_44._0_4_;
        if (((0.0 < local_4c) && ((float)local_44._0_4_ <= in_stack_00000010)) && (local_4c <= 1.0))
        {
          pCVar2 = actor_ptr;
          in_stack_00000010 = (float)local_44._0_4_;
        }
      }
    }
    return pCVar2;
  }
  return (CDemonActor *)0x0;
}
