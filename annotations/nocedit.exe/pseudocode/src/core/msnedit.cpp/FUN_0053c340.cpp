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
  CDemonActor *pCVar2;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  CBoundingBox3D local_64;
  CVector3f local_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  CVector3f local_28;
  float fStack_1c;
  float local_18;
  float local_14;
  
  if ((((in_stack_00000004[5] < in_stack_00000008) && (in_stack_00000004[6] < in_stack_0000000c)) &&
      (in_stack_00000008 < in_stack_00000004[7] + -1)) &&
     (in_stack_0000000c < in_stack_00000004[8] + -1)) {
    local_28.x = (float)g_CDemonCameraInstance.base.position.x;
    local_28.y = (float)g_CDemonCameraInstance.base.position.y;
    local_28.z = (float)g_CDemonCameraInstance.base.position.z;
    core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
              (&g_CDemonCameraInstance,&local_4c,in_stack_00000008,in_stack_0000000c);
    local_18 = (float)1000 /
               SQRT(local_4c.z * local_4c.z + local_4c.x * local_4c.x + local_4c.y * local_4c.y);
    local_4c.x = local_4c.x * local_18;
    local_4c.y = local_4c.y * local_18;
    local_4c.z = local_4c.z * local_18;
    pCVar2 = (CDemonActor *)0x0;
    actor_ptr = (CDemonActor *)in_stack_00000004[0x152];
    local_14 = 1.01;
    for (; actor_ptr != (CDemonActor *)0x0; actor_ptr = actor_ptr->next_actor) {
      if (((*in_stack_00000004 == (actor_ptr->location).area_id) && (actor_ptr->field26_0x148 == 0))
         && ((g_DisableMouseHitOnBarrier == 0 ||
             (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CBarrier"),
             iVar1 == 0)))) {
        (*actor_ptr->vtable->getBoundingBox)(actor_ptr,&local_64);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(actor_ptr,&CStack_40,&local_28);
        core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                  (actor_ptr,&CStack_34,&local_4c);
        fStack_1c = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                              (&local_64,&CStack_40,&CStack_34,(CVector3f *)0x0);
        if (((0.0 < fStack_1c) && (fStack_1c <= local_14)) && (fStack_1c <= 1.0)) {
          pCVar2 = actor_ptr;
          local_14 = fStack_1c;
        }
      }
    }
    return pCVar2;
  }
  return (CDemonActor *)0x0;
}
