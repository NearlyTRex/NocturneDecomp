// Name: core_turret.cpp_CTurret_updateTargeting_FUN_005e2d50
// Address: 005e2d50
// MANUAL RECONSTRUCTION
// Address Range: [[005e2d50, 005e3273]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_updateTargeting_FUN_005e2d50(CTurret *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_updateTargeting_FUN_005e2d50(CTurret *this_ptr,float delta_time)

{
  CDemonActor *actor_ptr;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  int iVar3;
  int iVar4;
  CBoundingBox3D *pCVar4;
  uint corner_index;
  int iVar5;
  int iVar6;
  CVector3f aCStack_15c [10];
  CBoundingBox3D CStack_e4;
  CBoundingBox3D CStack_cc;
  CBoundingBox3D local_b4;
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_24;
  CDemonActor *pCVar1;
  
  pCVar1 = this_ptr->guard_zone_box_trigger;
  if (pCVar1 == (CDemonActor *)0x0) {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s has no guard trigger!\n",this_ptr->base.base.actor_name);
    return;
  }
  (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,&local_b4);
  corner_index = 0;
  core_box_cpp_CBoundingBox3D_reset_FUN_00420fb0(&CStack_cc);
  do {
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(&local_b4,&CStack_78,corner_index);
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (this_ptr->guard_zone_box_trigger,&CStack_6c,pCVar2);
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&CStack_cc,pCVar3);
  } while ((int)corner_index < 8);
  CStack_90.x = 999.0;
  CStack_90.y = 999.0;
  CStack_90.z = 999.0;
  CStack_cc.min.x = CStack_cc.min.x + -15.0f;
  CStack_cc.min.y = CStack_cc.min.y + -15.0f;
  CStack_cc.min.z = CStack_cc.min.z + -15.0f;
  CStack_cc.max.x = CStack_cc.max.x + 15.0f;
  CStack_cc.max.y = CStack_cc.max.y + 15.0f;
  CStack_cc.max.z = CStack_cc.max.z + 15.0f;
  iVar6 = 0;
  iVar5 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->actor_count <= iVar6) {
        if ((int)CStack_90.y < 0x42c60001) {
          core_turret_cpp_CTurret_aimAtTarget_FUN_005e3280(this_ptr,&CStack_3c,delta_time);
          if ((this_ptr->base).fire_cooldown_timer <= 0.0) {
            (*(((this_ptr->base).base.vtable._uw)->_uw).fire)(&this_ptr->base);
          }
          this_ptr->fire_sound_timer = 1.0;
          return;
        }
        core_turret_cpp_CTurret_updatePatrol_FUN_005e3560(this_ptr,delta_time);
        return;
      }
      actor_ptr = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar5);
      iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,this_ptr->allowed_victim_types);
      if ((((iVar3 != 0) && (CStack_cc.min.x <= (actor_ptr->location).position.x)) &&
          (CStack_cc.min.y <= (actor_ptr->location).position.y)) &&
         (((CStack_cc.min.z <= (actor_ptr->location).position.z &&
           ((actor_ptr->location).position.x <= CStack_cc.max.x)) &&
          (((actor_ptr->location).position.y <= CStack_cc.max.y &&
           ((actor_ptr->location).position.z <= CStack_cc.max.z)))))) break;
LAB_005e2ed6:
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    }
    iVar4 = (*((actor_ptr->vtable)._ub)->canLookAt)(actor_ptr);
    if (iVar4 == 0) goto LAB_005e2ed6;
    __arrinit(aCStack_15c,10,&g_CVectorTypeInfo);
    iVar4 = (*((actor_ptr->vtable)._ub)->getTargetPoints)(actor_ptr,aCStack_15c);
    if (iVar4 < 1) {
      pCVar4 = (*((actor_ptr->vtable)._ub)->getBoundingBox)(actor_ptr,&CStack_e4);
      fStack_60 = ((pCVar4->min).x + (pCVar4->max).x) * 0.5f;
      fStack_5c = ((pCVar4->min).y + (pCVar4->max).y) * 0.5f;
      fStack_58 = ((pCVar4->min).z + (pCVar4->max).z) * 0.5f;
      if (aCStack_15c != (CVector3f *)&fStack_60) {
        aCStack_15c[0].x = fStack_60;
        aCStack_15c[0].y = fStack_5c;
        aCStack_15c[0].z = fStack_58;
      }
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(actor_ptr,&CStack_54,aCStack_15c);
    pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       (this_ptr->guard_zone_box_trigger,&CStack_24,&CStack_54);
    if (((pCVar3->x < local_b4.min.x) || (pCVar3->y < local_b4.min.y)) ||
       ((pCVar3->z < local_b4.min.z ||
        (((local_b4.max.x < pCVar3->x || (local_b4.max.y < pCVar3->y)) ||
         (local_b4.max.z < pCVar3->z)))))) goto LAB_005e2ed6;
    pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       ((CDemonActor *)this_ptr,&CStack_84,&CStack_54);
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_48,pCVar3);
    if (((CStack_48.x < -0.5235988f) || (1.22173f < CStack_48.x)) ||
       (SQRT(CStack_90.z * CStack_90.z + CStack_90.x * CStack_90.x + CStack_90.y * CStack_90.y) <
        SQRT(CStack_48.z * CStack_48.z + CStack_48.x * CStack_48.x + CStack_48.y * CStack_48.y)))
    goto LAB_005e2ed6;
    if (&CStack_90 != &CStack_48) {
      CStack_90.x = CStack_48.x;
      CStack_90.y = CStack_48.y;
      CStack_90.z = CStack_48.z;
    }
    if (&CStack_3c == &CStack_54) goto LAB_005e2ed6;
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 4;
  } while( true );
}
