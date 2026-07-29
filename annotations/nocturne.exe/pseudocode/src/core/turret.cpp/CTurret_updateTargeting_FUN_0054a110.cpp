// Name: core_turret.cpp_CTurret_updateTargeting_FUN_0054a110
// Address: 0054a110
// Address Range: [[0054a110, 0054a633]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_updateTargeting_FUN_0054a110(CTurret *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_updateTargeting_FUN_0054a110(CTurret *this_ptr,float delta_time)

{
  CDemonActor *actor_ptr;
  CVector3f *pCVar1;
  int iVar2;
  CBoundingBox3D *pCVar3;
  uint corner_index;
  int iVar4;
  int iVar5;
  float in_stack_00000010;
  CDemonActor *in_stack_fffffeac;
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
  char acStack_94 [12];
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f aCStack_64 [2];
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f aCStack_34 [2];
  CVector3f CStack_1c;
  CDemonActor *pCVar6;
  
  pCVar6 = this_ptr->guard_zone_box_trigger;
  if (pCVar6 == (CDemonActor *)0x0) {
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s has no guard trigger!\n",this_ptr);
    return;
  }
  (*((pCVar6->vtable)._ub)->getBoundingBox)(pCVar6,(CBoundingBox3D *)local_b4);
  corner_index = 0;
  core_box_cpp_CBoundingBox3D_reset_FUN_0041dbc0((CBoundingBox3D *)(auStack_d0 + 0xc));
  do {
    pCVar1 = core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70
                       ((CBoundingBox3D *)(local_b4 + 8),&CStack_70,corner_index);
    pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                       (this_ptr->guard_zone_box_trigger,aCStack_64,pCVar1);
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00((CBoundingBox3D *)(auStack_d0 + 0xc),pCVar1);
  } while ((int)corner_index < 8);
  pCVar6 = (CDemonActor *)this_ptr->allowed_victim_types;
  acStack_94[0] = '\0';
  acStack_94[1] = '\0';
  acStack_94[2] = 'p';
  acStack_94[3] = 'A';
  acStack_94[4] = '\0';
  acStack_94[5] = '\0';
  acStack_94[6] = 'p';
  acStack_94[7] = 'A';
  acStack_94[8] = '\0';
  acStack_94[9] = '\0';
  acStack_94[10] = 'p';
  acStack_94[0xb] = 'A';
  CStack_88.x = 999.0;
  CStack_88.y = 999.0;
  CStack_88.z = 999.0;
  auStack_d0._12_4_ = (float)auStack_d0._12_4_ + -15.0f;
  fStack_c0 = fStack_c0 + -15.0f;
  fStack_bc = fStack_bc + -15.0f;
  fStack_b8 = fStack_b8 + 15.0f;
  local_b4._0_4_ = (float)local_b4._0_4_ + 15.0f;
  local_b4._4_4_ = (float)local_b4._4_4_ + 15.0f;
  iVar5 = 0;
  iVar4 = 0;
  do {
    while( true ) {
      if (*(int *)(0x01E57284 + 0x14cd6c) <= iVar5) {
        if ((int)CStack_88.y < 0x42c60001) {
          core_turret_cpp_CTurret_aimAtTarget_FUN_0054a640(this_ptr,aCStack_34,in_stack_00000010);
          if ((this_ptr->base).fire_cooldown_timer <= 0.0) {
            (*(((this_ptr->base).base.vtable._uc)->_uc).isGrabbable)
                      ((CCharacter *)this_ptr,in_stack_fffffeac);
          }
          this_ptr->fire_sound_timer = 1.0;
          return;
        }
        core_turret_cpp_CTurret_updatePatrol_FUN_0054a920(this_ptr,in_stack_00000010);
        return;
      }
      actor_ptr = *(CDemonActor **)(0x01E57284 + 0x14cd70 + iVar4);
      iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0(actor_ptr,pCVar6->actor_name);
      if ((((iVar2 != 0) && ((float)auStack_d0._12_4_ <= (actor_ptr->location).position.x)) &&
          (fStack_c0 <= (actor_ptr->location).position.y)) &&
         (((fStack_bc <= (actor_ptr->location).position.z &&
           ((actor_ptr->location).position.x <= fStack_b8)) &&
          (((actor_ptr->location).position.y <= (float)local_b4._0_4_ &&
           ((actor_ptr->location).position.z <= (float)local_b4._4_4_)))))) break;
LAB_0054a296:
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    }
    iVar2 = (*((actor_ptr->vtable)._ub)->canLookAt)(actor_ptr);
    if (iVar2 == 0) goto LAB_0054a296;
    __arrinit(&stack0xfffffeb0,10,&g_CVectorTypeInfo_005993b0);
    in_stack_fffffeac = (CDemonActor *)&stack0xfffffeb0;
    iVar2 = (*((actor_ptr->vtable)._ub)->getTargetPoints)(actor_ptr,(CVector3f *)&stack0xfffffeb0);
    if (iVar2 < 1) {
      in_stack_fffffeac = (CDemonActor *)0x54a36c;
      pCVar3 = (*((actor_ptr->vtable)._ub)->getBoundingBox)(actor_ptr,(CBoundingBox3D *)auStack_d0);
      CStack_1c.z = (pCVar3->min).x + (pCVar3->max).x;
      CStack_4c.z = CStack_1c.z * 0.5f;
      pCVar6 = (CDemonActor *)((pCVar3->min).z + (pCVar3->max).z);
      CStack_40.x = ((pCVar3->min).y + (pCVar3->max).y) * 0.5f;
      CStack_40.y = (float)pCVar6 * 0.5f;
      if (&fStack_140 != &CStack_4c.z) {
        fStack_140 = CStack_4c.z;
        fStack_13c = CStack_40.x;
        fStack_138 = CStack_40.y;
      }
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              (actor_ptr,&CStack_4c,(CVector3f *)&stack0xfffffeac);
    pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                       (this_ptr->guard_zone_box_trigger,&CStack_1c,&CStack_4c);
    if (((pCVar1->x < (float)local_b4._8_4_) || (pCVar1->y < fStack_a8)) ||
       ((pCVar1->z < fStack_a4 ||
        (((fStack_a0 < pCVar1->x || (fStack_9c < pCVar1->y)) || (fStack_98 < pCVar1->z))))))
    goto LAB_0054a296;
    pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                       ((CDemonActor *)this_ptr,&CStack_7c,&CStack_4c);
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&CStack_40,pCVar1);
    if (((CStack_40.x < -0.5235988f) || (1.22173f < CStack_40.x)) ||
       (SQRT(CStack_88.z * CStack_88.z + CStack_88.x * CStack_88.x + CStack_88.y * CStack_88.y) <
        SQRT(CStack_40.z * CStack_40.z + CStack_40.x * CStack_40.x + CStack_40.y * CStack_40.y)))
    goto LAB_0054a296;
    if (&CStack_88 != &CStack_40) {
      CStack_88.x = CStack_40.x;
      CStack_88.y = CStack_40.y;
      CStack_88.z = CStack_40.z;
    }
    if (aCStack_34 == &CStack_4c) goto LAB_0054a296;
    aCStack_34[0].z = CStack_4c.z;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
  } while( true );
}
