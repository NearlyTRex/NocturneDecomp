// Name: core_msnedit.cpp_CDemonMission_FUN_0053c340
// Address: 0053c340
// Address Range: [[0053c340, 0053c4e7]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c340(CDemonMission *this_ptr,int param_2,int param_3)

#include "nocturne.h"

CDemonActor * __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c340(CDemonMission *this_ptr,int param_2,int param_3)

{
  CDemonActor *actor_ptr;
  int iVar1;
  CDemonActor *pCVar2;
  CBoundingBox3D local_64;
  CVector3f local_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  CVector3f local_28;
  float fStack_1c;
  float local_18;
  float local_14;
  
  if ((((this_ptr->unk1 < param_2) && (this_ptr->unk2 < param_3)) && (param_2 < this_ptr->unk3 + -1)
      ) && (param_3 < this_ptr->unk4 + -1)) {
    local_28.x = (float)g_CDemonCameraInstance.base.position.x;
    local_28.y = (float)g_CDemonCameraInstance.base.position.y;
    local_28.z = (float)g_CDemonCameraInstance.base.position.z;
    core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
              (&g_CDemonCameraInstance,&local_4c,param_2,param_3);
    local_18 = (float)1000 /
               SQRT(local_4c.z * local_4c.z + local_4c.x * local_4c.x + local_4c.y * local_4c.y);
    local_4c.x = local_4c.x * local_18;
    local_4c.y = local_4c.y * local_18;
    local_4c.z = local_4c.z * local_18;
    pCVar2 = (CDemonActor *)0x0;
    actor_ptr = this_ptr->first_actor;
    local_14 = 1.01;
    for (; actor_ptr != (CDemonActor *)0x0; actor_ptr = actor_ptr->next_actor) {
      if (((this_ptr->current_set_index == (actor_ptr->location).area_id) &&
          (actor_ptr->is_editor_hidden == 0)) &&
         ((g_DisableMouseHitOnBarrier == 0 ||
          (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CBarrier"), iVar1 == 0)
          ))) {
        (*((actor_ptr->vtable)._ub)->getBoundingBox)(actor_ptr,&local_64);
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
