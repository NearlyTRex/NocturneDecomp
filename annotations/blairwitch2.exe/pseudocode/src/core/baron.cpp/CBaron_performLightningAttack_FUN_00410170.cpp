// Name: core_baron.cpp_CBaron_performLightningAttack_FUN_00410170
// Address: 00410170
// Address Range: [[00410170, 0041058a]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_performLightningAttack_FUN_00410170(CBaron *this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_performLightningAttack_FUN_00410170(CBaron *this_ptr)

{
  CLocation *start_position;
  CEnemy *this_ptr_00;
  int iVar1;
  int iVar2;
  byte bVar3;
  float afStackY_10d4 [965];
  CFireEffect *this_ptr_01;
  CVector3f *start_position_00;
  CVector3f *pCVar4;
  float end_width;
  float end_spread;
  CVector3f local_1a0 [10];
  SDamageInfo local_128;
  CVector3f CStack_ec;
  CVector3f CStack_e0;
  float fStack_d4;
  float afStack_d0 [2];
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  CVector3f local_a4;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  float fStack_68;
  float fStack_64;
  uint uStack_60;
  CVector3f local_5c;
  CVector3f CStack_50;
  CVector3f local_44;
  CVector3f local_38;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  float local_14;
  int iStack_10;
  CMatrix3x4f *local_c;
  
  bVar3 = 0;
  this_ptr_00 = core_hero_cpp_CHero_closestEnemy_FUN_004d00c0(&this_ptr->base,&local_14);
  if (this_ptr_00 == (CEnemy *)0x0) {
    return;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
            ((CDemonActor *)this_ptr,&(this_ptr_00->base).base.location.position,&local_a4);
  local_44.x = local_a4.x;
  *(uint *)((int)&local_44 + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&local_a4 + (uint)bVar3 * -8 + 4);
  *(uint *)((int)&local_44 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       *(uint *)((int)&local_a4 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_44,&local_38);
  local_5c.x = local_38.x;
  *(uint *)((int)&local_5c + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&local_38 + (uint)bVar3 * -8 + 4);
  *(uint *)((int)&local_5c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       *(uint *)((int)&local_38 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  if (&local_44 != &local_5c) {
    local_44.x = local_5c.x;
    local_44.y = local_5c.y;
    local_44.z = local_5c.z;
  }
  local_44.y = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(local_44.y);
  local_c = (CMatrix3x4f *)local_44.y;
  if ((local_44.y < -0.7853982f) || (0x3f490fdb < (int)local_44.y)) {
    start_position = &(this_ptr_00->base).base.location;
    core_fire_cpp_CFireEffect_createLightningBolt_FUN_0049e6e0
              (g_CFireEffect_PTR_00614d30,&start_position->position,16.0,1,0.0);
    core_fire_cpp_CFireEffect_createCrater_FUN_0049e630
              (g_CFireEffect_PTR_00614d30,&start_position->position,4.0);
  }
  else {
    __arrinit(local_1a0,10,&g_CVectorTypeInfo);
    iVar1 = (*((this_ptr_00->base).base.vtable._ub)->getTargetPoints)
                      ((CDemonActor *)this_ptr_00,local_1a0);
    iStack_10 = iVar1;
    iVar2 = rand();
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              ((CDemonActor *)this_ptr_00,local_1a0 + iVar2 % iVar1,&CStack_80);
    CStack_bc.x = CStack_80.x;
    *(uint *)((int)&CStack_bc + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&CStack_80 + (uint)bVar3 * -8 + 4);
    *(uint *)((int)&CStack_bc + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&CStack_80 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    if (&CStack_50 != &CStack_bc) {
      CStack_50.x = CStack_bc.x;
      CStack_50.y = CStack_bc.y;
      CStack_50.z = CStack_bc.z;
    }
    iVar1 = rand();
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              ((CDemonActor *)this_ptr_00,local_1a0 + iVar1 % iStack_10,&CStack_20);
    fStack_d4 = CStack_20.x;
    afStack_d0[(uint)bVar3 * -2] = *(float *)((int)&CStack_20 + (uint)bVar3 * -8 + 4);
    afStack_d0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         *(float *)((int)&CStack_20 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    if (&fStack_68 != &fStack_d4) {
      fStack_68 = fStack_d4;
      fStack_64 = afStack_d0[0];
      uStack_60 = afStack_d0[1];
    }
    local_c = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
    core_xform_cpp_transformVector3x4_FUN_00591530
              (&g_CVector3f_0265370c,local_c + g_INT_ARRAY_007bc498[0xd],&CStack_2c);
    pCVar4 = &CStack_ec;
    CStack_ec.x = CStack_2c.x;
    *(uint *)((int)&CStack_ec + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&CStack_2c + (uint)bVar3 * -8 + 4);
    *(uint *)((int)&CStack_ec + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&CStack_2c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              ((CDemonActor *)this_ptr,pCVar4,&CStack_74);
    CStack_b0.x = CStack_74.x;
    *(uint *)((int)&CStack_b0 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&CStack_74 + (uint)bVar3 * -8 + 4);
    *(uint *)((int)&CStack_b0 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&CStack_74 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    core_xform_cpp_transformVector3x4_FUN_00591530
              (&g_CVector3f_0265370c,local_c + g_INT_ARRAY_007bc498[0xe],&CStack_c8);
    pCVar4 = &CStack_8c;
    CStack_8c.x = CStack_c8.x;
    *(uint *)((int)&CStack_8c + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&CStack_c8 + (uint)bVar3 * -8 + 4);
    *(uint *)((int)&CStack_8c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&CStack_c8 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              ((CDemonActor *)this_ptr,pCVar4,&CStack_e0);
    end_spread = 4.0;
    end_width = 0.5;
    iVar1 = 1;
    pCVar4 = &CStack_50;
    start_position_00 = &CStack_b0;
    CStack_98.x = CStack_e0.x;
    *(uint *)((int)&CStack_98 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&CStack_e0 + (uint)bVar3 * -8 + 4);
    this_ptr_01 = g_CFireEffect_PTR_00614d30;
    *(uint *)((int)&CStack_98 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&CStack_e0 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_0049e760
              (this_ptr_01,start_position_00,pCVar4,iVar1,end_width,end_spread);
    core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_0049e760
              (g_CFireEffect_PTR_00614d30,&CStack_98,&CStack_50,1,0.5,4.0);
    (*((this_ptr->base).base.base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,"baron-attack.wav");
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&local_128);
  local_128.damage_type = DAMAGE_TYPE_ELECTROCUTE;
  local_128.damage_amount = 100.0;
  local_128.attacker = (CDemonActor *)this_ptr;
  local_128.wielder = this_ptr->target_actor;
  if ((CBaron *)local_128.wielder == (CBaron *)0x0) {
    local_128.wielder = (CDemonActor *)this_ptr;
  }
  (*(((this_ptr_00->base).base.vtable._uc)->_uc).processDamage)(&this_ptr_00->base,&local_128);
  (this_ptr_00->base).stagger_amount = 3.0;
  return;
}
