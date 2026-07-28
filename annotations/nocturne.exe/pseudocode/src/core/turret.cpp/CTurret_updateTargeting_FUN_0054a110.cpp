// Name: core_turret.cpp_CTurret_updateTargeting_FUN_0054a110
// Address: 0054a110
// Address Range: [[0054a110, 0054a633]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_updateTargeting_FUN_0054a110(CTurret *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_updateTargeting_FUN_0054a110(CTurret *this_ptr,float delta_time)

{
  CDemonActor *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  CBoundingBox3D *pCVar4;
  uint corner_index;
  int iVar5;
  int iVar6;
  float in_stack_00000010;
  int *in_stack_fffffeac;
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
  float fStack_88;
  float fStack_84;
  float fStack_80;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f aCStack_64 [2];
  CVector3f CStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CVector3f aCStack_34 [2];
  CVector3f CStack_1c;
  char *class_name;
  
  pCVar1 = this_ptr->guard_zone_box_trigger;
  if (pCVar1 == (CDemonActor *)0x0) {
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s has no guard trigger!\n",this_ptr);
    return;
  }
  (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,(CBoundingBox3D *)local_b4);
  corner_index = 0;
  core_box_cpp_CBoundingBox3D_reset_FUN_0041dbc0((CBoundingBox3D *)(auStack_d0 + 0xc));
  do {
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70
                       ((CBoundingBox3D *)(local_b4 + 8),&CStack_70,corner_index);
    pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                       (this_ptr->guard_zone_box_trigger,aCStack_64,pCVar2);
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00((CBoundingBox3D *)(auStack_d0 + 0xc),pCVar2);
  } while ((int)corner_index < 8);
  class_name = this_ptr->allowed_victim_types;
  uStack_94 = 0x41700000;
  uStack_90 = 0x41700000;
  uStack_8c = 0x41700000;
  fStack_88 = 999.0;
  fStack_84 = 999.0;
  fStack_80 = 999.0;
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
      if (*(int *)(0x01E57284 + 0x14cd6c) <= iVar6) {
        if ((int)fStack_84 < 0x42c60001) {
          core_turret_cpp_CTurret_aimAtTarget_FUN_0054a640(this_ptr,aCStack_34,in_stack_00000010);
          if ((this_ptr->base).fire_cooldown_timer <= 0.0) {
            (*((this_ptr->base).base.vtable._ub)->showEditorHelp)
                      ((CDemonActor *)this_ptr,in_stack_fffffeac);
          }
          this_ptr->fire_sound_timer = 1.0;
          return;
        }
        core_turret_cpp_CTurret_updatePatrol_FUN_0054a920(this_ptr,in_stack_00000010);
        return;
      }
      pCVar1 = *(CDemonActor **)(0x01E57284 + 0x14cd70 + iVar5);
      iVar3 = core_actor_cpp_isOfClass_FUN_0040d7e0(pCVar1,class_name);
      if ((((iVar3 != 0) && ((float)auStack_d0._12_4_ <= (pCVar1->location).position.x)) &&
          (fStack_c0 <= (pCVar1->location).position.y)) &&
         (((fStack_bc <= (pCVar1->location).position.z &&
           ((pCVar1->location).position.x <= fStack_b8)) &&
          (((pCVar1->location).position.y <= (float)local_b4._0_4_ &&
           ((pCVar1->location).position.z <= (float)local_b4._4_4_)))))) break;
LAB_0054a296:
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    }
    iVar3 = (*((pCVar1->vtable)._ub)->canLookAt)(pCVar1);
    if (iVar3 == 0) goto LAB_0054a296;
    __arrinit(&stack0xfffffeb0,10,&g_CVectorTypeInfo_005993b0);
    in_stack_fffffeac = (int *)&stack0xfffffeb0;
    iVar3 = (*((pCVar1->vtable)._ub)->getTargetPoints)(pCVar1,(CVector3f *)&stack0xfffffeb0);
    if (iVar3 < 1) {
      in_stack_fffffeac = (int *)0x54a36c;
      pCVar4 = (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,(CBoundingBox3D *)auStack_d0);
      CStack_1c.z = (pCVar4->min).x + (pCVar4->max).x;
      CStack_4c.z = CStack_1c.z * 0.5f;
      class_name = (char *)((pCVar4->min).z + (pCVar4->max).z);
      fStack_40 = ((pCVar4->min).y + (pCVar4->max).y) * 0.5f;
      fStack_3c = (float)class_name * 0.5f;
      if (&fStack_140 != &CStack_4c.z) {
        fStack_140 = CStack_4c.z;
        fStack_13c = fStack_40;
        fStack_138 = fStack_3c;
      }
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              (pCVar1,&CStack_4c,(CVector3f *)&stack0xfffffeac);
    pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                       (this_ptr->guard_zone_box_trigger,&CStack_1c,&CStack_4c);
    if (((pCVar2->x < (float)local_b4._8_4_) || (pCVar2->y < fStack_a8)) ||
       ((pCVar2->z < fStack_a4 ||
        (((fStack_a0 < pCVar2->x || (fStack_9c < pCVar2->y)) || (fStack_98 < pCVar2->z))))))
    goto LAB_0054a296;
    pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                       ((CDemonActor *)this_ptr,&CStack_7c,&CStack_4c);
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&fStack_40,pCVar2);
    if (((fStack_40 < -0.5235988f) || (1.22173f < fStack_40)) ||
       (SQRT(fStack_80 * fStack_80 + fStack_88 * fStack_88 + fStack_84 * fStack_84) <
        SQRT(fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c)))
    goto LAB_0054a296;
    if (&fStack_88 != &fStack_40) {
      fStack_88 = fStack_40;
      fStack_84 = fStack_3c;
      fStack_80 = fStack_38;
    }
    if (aCStack_34 == &CStack_4c) goto LAB_0054a296;
    aCStack_34[0].z = CStack_4c.z;
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 4;
  } while( true );
}
