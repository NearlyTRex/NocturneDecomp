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
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  byte auStack_d0 [16];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  byte local_b4 [12];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f aCStack_64 [2];
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f aCStack_34 [2];
  CVector3f CStack_1c;
  char *class_name;
  
  pCVar1 = this_ptr->guard_zone_box_trigger;
  if (pCVar1 == (CDemonActor *)0x0) {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s has no guard trigger!\n",this_ptr);
    return;
  }
  (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,(CBoundingBox3D *)local_b4);
  corner_index = 0;
  core_box_cpp_CBoundingBox3D_reset_FUN_00420fb0((CBoundingBox3D *)(auStack_d0 + 0xc));
  do {
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       ((CBoundingBox3D *)(local_b4 + 8),&CStack_70,corner_index);
    pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (this_ptr->guard_zone_box_trigger,aCStack_64,pCVar2);
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)(auStack_d0 + 0xc),pCVar2);
  } while ((int)corner_index < 8);
  class_name = this_ptr->allowed_victim_types;
  uStack_94 = 0x41700000;
  uStack_90 = 0x41700000;
  uStack_8c = 0x41700000;
  CStack_88.x = 999.0;
  CStack_88.y = 999.0;
  CStack_88.z = 999.0;
  auStack_d0._12_4_ = (float)auStack_d0._12_4_ + -15.0f;
  fStack_c0 = fStack_c0 + -15.0f;
  fStack_bc = fStack_bc + -15.0f;
  fStack_b8 = fStack_b8 + 15.0f;
  local_b4._0_4_ = (float)local_b4._0_4_ + 15.0f;
  local_b4._4_4_ = (float)local_b4._4_4_ + 15.0f;
  iVar6 = 0;
  iVar5 = 0;
  do {
    while( true ) {
      if ((int)g_CDemonSetPtr->actor_list_ptr <= iVar6) {
        if ((int)CStack_88.y < 0x42c60001) {
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
      pCVar1 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar5);
      iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar1,class_name);
      if ((((iVar3 != 0) && ((float)auStack_d0._12_4_ <= (pCVar1->location).position.x)) &&
          (fStack_c0 <= (pCVar1->location).position.y)) &&
         (((fStack_bc <= (pCVar1->location).position.z &&
           ((pCVar1->location).position.x <= fStack_b8)) &&
          (((pCVar1->location).position.y <= (float)local_b4._0_4_ &&
           ((pCVar1->location).position.z <= (float)local_b4._4_4_)))))) break;
LAB_005e2ed6:
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    }
    iVar3 = (*((pCVar1->vtable)._ub)->canLookAt)(pCVar1);
    if (iVar3 == 0) goto LAB_005e2ed6;
    __arrinit(&stack0xfffffeb0,10,&g_CVectorTypeInfo);
    iVar3 = (*((pCVar1->vtable)._ub)->getTargetPoints)(pCVar1,(CVector3f *)&stack0xfffffeb0);
    if (iVar3 < 1) {
      pCVar4 = (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,(CBoundingBox3D *)auStack_d0);
      CStack_1c.z = (pCVar4->min).x + (pCVar4->max).x;
      CStack_4c.z = CStack_1c.z * 0.5f;
      class_name = (char *)((pCVar4->min).z + (pCVar4->max).z);
      CStack_40.x = ((pCVar4->min).y + (pCVar4->max).y) * 0.5f;
      CStack_40.y = (float)class_name * 0.5f;
      if (&fStack_140 != &CStack_4c.z) {
        fStack_140 = CStack_4c.z;
        fStack_13c = CStack_40.x;
        fStack_138 = CStack_40.y;
      }
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (pCVar1,&CStack_4c,(CVector3f *)&stack0xfffffeac);
    pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       (this_ptr->guard_zone_box_trigger,&CStack_1c,&CStack_4c);
    if (((pCVar2->x < (float)local_b4._8_4_) || (pCVar2->y < fStack_a8)) ||
       ((pCVar2->z < fStack_a4 ||
        (((fStack_a0 < pCVar2->x || (fStack_9c < pCVar2->y)) || (fStack_98 < pCVar2->z))))))
    goto LAB_005e2ed6;
    pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       ((CDemonActor *)this_ptr,&CStack_7c,&CStack_4c);
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_40,pCVar2);
    if (((CStack_40.x < -0.5235988f) || (1.22173f < CStack_40.x)) ||
       (SQRT(CStack_88.z * CStack_88.z + CStack_88.x * CStack_88.x + CStack_88.y * CStack_88.y) <
        SQRT(CStack_40.z * CStack_40.z + CStack_40.x * CStack_40.x + CStack_40.y * CStack_40.y)))
    goto LAB_005e2ed6;
    if (&CStack_88 != &CStack_40) {
      CStack_88.x = CStack_40.x;
      CStack_88.y = CStack_40.y;
      CStack_88.z = CStack_40.z;
    }
    if (aCStack_34 == &CStack_4c) goto LAB_005e2ed6;
    aCStack_34[0].z = CStack_4c.z;
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 4;
  } while( true );
}
