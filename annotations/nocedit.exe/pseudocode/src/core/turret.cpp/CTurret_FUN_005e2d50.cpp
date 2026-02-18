// Name: core_turret.cpp_CTurret_FUN_005e2d50
// Address: 005e2d50
// Address Range: [[005e2d50, 005e3273]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_FUN_005e2d50(CTurret *this_ptr)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_FUN_005e2d50(CTurret *this_ptr)

{
  CDemonActor *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  CBoundingBox3D *pCVar4;
  uint corner_index;
  int iVar5;
  int iVar6;
  CVector3f aCStack_15c [10];
  CBoundingBox3D CStack_e4;
  CBoundingBox3D CStack_cc;
  CBoundingBox3D local_b4;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
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
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CVector3f CStack_24;
  char *pcStack_14;
  
  pCVar1 = this_ptr->guard_zone_box_trigger;
  if (pCVar1 == (CDemonActor *)0x0) {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s has no guard trigger!\n",this_ptr);
    return;
  }
  (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,&local_b4);
  corner_index = 0;
  core_box_cpp_CBoundingBox3D_reset_FUN_00420fb0(&CStack_cc);
  do {
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(&local_b4,&CStack_78,corner_index);
    pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (this_ptr->guard_zone_box_trigger,&CStack_6c,pCVar2);
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&CStack_cc,pCVar2);
  } while ((int)corner_index < 8);
  pcStack_14 = this_ptr->allowed_victim_types;
  uStack_9c = 0x41700000;
  uStack_98 = 0x41700000;
  uStack_94 = 0x41700000;
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
          core_turret_cpp_CTurret_FUN_005e3280(this_ptr);
          if ((this_ptr->base).fire_cooldown_timer <= 0.0) {
            (*(((this_ptr->base).base.vtable._uc)->_uc).isGrabbable)((CCharacter *)this_ptr);
          }
          this_ptr->unk5[0xc] = '\0';
          this_ptr->unk5[0xd] = '\0';
          this_ptr->unk5[0xe] = -0x80;
          this_ptr->unk5[0xf] = '?';
          return;
        }
        core_turret_cpp_CTurret_FUN_005e3560(this_ptr);
        return;
      }
      pCVar1 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar5);
      iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar1,pcStack_14);
      if ((((iVar3 != 0) && (CStack_cc.min.x <= (pCVar1->location).position.x)) &&
          (CStack_cc.min.y <= (pCVar1->location).position.y)) &&
         (((CStack_cc.min.z <= (pCVar1->location).position.z &&
           ((pCVar1->location).position.x <= CStack_cc.max.x)) &&
          (((pCVar1->location).position.y <= CStack_cc.max.y &&
           ((pCVar1->location).position.z <= CStack_cc.max.z)))))) break;
LAB_005e2ed6:
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    }
    iVar3 = (*((pCVar1->vtable)._ub)->canLookAt)(pCVar1);
    if (iVar3 == 0) goto LAB_005e2ed6;
    __arrinit(aCStack_15c,10,&g_CVectorTypeInfo);
    iVar3 = (*((pCVar1->vtable)._ub)->getTargetPoints)(pCVar1,aCStack_15c);
    if (iVar3 < 1) {
      pCVar4 = (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,&CStack_e4);
      fStack_30 = (pCVar4->min).x + (pCVar4->max).x;
      fStack_2c = (pCVar4->min).y + (pCVar4->max).y;
      fStack_60 = fStack_30 * 0.5f;
      fStack_28 = (pCVar4->min).z + (pCVar4->max).z;
      fStack_5c = fStack_2c * 0.5f;
      fStack_58 = fStack_28 * 0.5f;
      if (aCStack_15c != (CVector3f *)&fStack_60) {
        aCStack_15c[0].x = fStack_60;
        aCStack_15c[0].y = fStack_5c;
        aCStack_15c[0].z = fStack_58;
      }
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar1,&CStack_54,aCStack_15c);
    pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       (this_ptr->guard_zone_box_trigger,&CStack_24,&CStack_54);
    if (((pCVar2->x < local_b4.min.x) || (pCVar2->y < local_b4.min.y)) ||
       ((pCVar2->z < local_b4.min.z ||
        (((local_b4.max.x < pCVar2->x || (local_b4.max.y < pCVar2->y)) ||
         (local_b4.max.z < pCVar2->z)))))) goto LAB_005e2ed6;
    pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       ((CDemonActor *)this_ptr,&CStack_84,&CStack_54);
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_48,pCVar2);
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
