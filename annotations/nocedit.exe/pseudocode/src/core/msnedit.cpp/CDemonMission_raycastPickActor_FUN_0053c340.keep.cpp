// Name: core_msnedit.cpp_CDemonMission_raycastPickActor_FUN_0053c340
// Address: 0053c340
// MANUAL RECONSTRUCTION
// Address Range: [[0053c340, 0053c4e7]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_msnedit_cpp_CDemonMission_raycastPickActor_FUN_0053c340(CDemonMission *this_ptr,int screen_x,int screen_y)

#include "nocturne.h"

CDemonActor * __cdecl core_msnedit_cpp_CDemonMission_raycastPickActor_FUN_0053c340(CDemonMission *this_ptr,int screen_x,int screen_y)

{
  int iVar1;
  float fVar1;
  CDemonActor *pCVar2;
  CBoundingBox3D local_64;
  CVector3f local_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  CVector3f local_28;
  float local_14;
  CDemonActor *actor_ptr;
  
  if (((((this_ptr->viewport).left < screen_x) && ((this_ptr->viewport).top < screen_y)) &&
      (screen_x < (this_ptr->viewport).right + -1)) && (screen_y < (this_ptr->viewport).bottom + -1)
     ) {
    local_28 = g_CDemonCameraInstance.base.position.f;
    core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
              (&g_CDemonCameraInstance,&local_4c,screen_x,screen_y);
    fVar1 = (float)1000 /
            SQRT(local_4c.z * local_4c.z + local_4c.x * local_4c.x + local_4c.y * local_4c.y);
    local_4c.x = local_4c.x * fVar1;
    local_4c.y = local_4c.y * fVar1;
    local_4c.z = local_4c.z * fVar1;
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
        fVar1 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                          (&local_64,&CStack_40,&CStack_34,(CVector3f *)0x0);
        if (((0.0 < fVar1) && (fVar1 <= local_14)) && (fVar1 <= 1.0)) {
          pCVar2 = actor_ptr;
          local_14 = fVar1;
        }
      }
    }
    return pCVar2;
  }
  return (CDemonActor *)0x0;
}
