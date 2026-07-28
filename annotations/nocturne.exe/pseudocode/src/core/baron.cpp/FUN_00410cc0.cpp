// Name: core_baron.cpp_FUN_00410cc0
// Address: 00410cc0
// Address Range: [[00410cc0, 0041100b]]
// Convention: unknown
// Signature: void core_baron_cpp_FUN_00410cc0(CDemonActor *param_1)

#include "nocturne.h"

void core_baron_cpp_FUN_00410cc0(CDemonActor *param_1)

{
  CLocation *start_position;
  CCharacter *this_ptr;
  float *pfVar1;
  int iVar2;
  int iVar3;
  CVector3f *pCVar4;
  float in_stack_fffffec0;
  byte auStack_c0 [52];
  CVector3f CStack_8c;
  CVector3f aCStack_80 [2];
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  byte auStack_44 [8];
  float local_3c;
  float local_38;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  float local_14;
  
  this_ptr = (CCharacter *)core_hero_cpp_CHero_closestEnemy_FUN_004b5d00(param_1,&CStack_20.y);
  if (this_ptr == (CCharacter *)0x0) {
    return;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
            (param_1,(CVector3f *)(auStack_44 + 4),&(this_ptr->base).location.position);
  pfVar1 = (float *)core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                              (&aCStack_80[0].y,auStack_44 + 4);
  if ((float *)(auStack_44 + 4) != pfVar1) {
    auStack_44._4_4_ = *pfVar1;
    local_3c = pfVar1[1];
    local_38 = pfVar1[2];
  }
  local_3c = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(local_3c);
  local_14 = local_3c;
  if ((local_3c < (float)-0.78539816337500001) || (0.78539816337500001 < (double)local_3c)) {
    start_position = &(this_ptr->base).location;
    core_fire_cpp_CFireEffect_createLightningBolt_FUN_0048c420
              (0x01C08D04,&start_position->position,16.0,1,0.0);
    core_fire_cpp_CFireEffect_createCrater_FUN_0048c370(0x01C08D04,&start_position->position,4.0);
  }
  else {
    __arrinit(&stack0xfffffeb8,10,&g_CVectorTypeInfo_005993b0);
    iVar2 = (*((this_ptr->base).vtable._ub)->getTargetPoints)
                      ((CDemonActor *)this_ptr,(CVector3f *)&stack0xfffffeb8);
    iVar3 = rand();
    pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                       ((CDemonActor *)this_ptr,&CStack_8c,
                        (CVector3f *)(&stack0xfffffec0 + (iVar3 % iVar2) * 0xc));
    if (&CStack_20 != pCVar4) {
      CStack_20.x = pCVar4->x;
      CStack_20.y = pCVar4->y;
      CStack_20.z = pCVar4->z;
    }
    iVar3 = rand();
    pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                       ((CDemonActor *)this_ptr,&CStack_50,
                        (CVector3f *)(&stack0xfffffec0 + (iVar3 % iVar2) * 0xc));
    if ((CVector3f *)auStack_44 != pCVar4) {
      auStack_44._0_4_ = pCVar4->x;
      auStack_44._4_4_ = pCVar4->y;
      local_3c = pCVar4->z;
    }
    pCVar4 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                       (&CStack_5c,(CVector3f *)&DAT_02dd1184,
                        (CMatrix3x4f *)(param_1[0xc].actor_name + DAT_0076431c * 0x30 + 0x10));
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&CStack_68,pCVar4);
    pCVar4 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                       (aCStack_80,(CVector3f *)&DAT_02dd1184,
                        (CMatrix3x4f *)(param_1[0xc].actor_name + DAT_00764320 * 0x30 + 0x10));
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&CStack_2c,pCVar4);
    core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_0048c4a0
              (0x01C08D04,&CStack_68,&CStack_20,1,0.5,4.0);
    core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_0048c4a0
              (0x01C08D04,&CStack_2c,&CStack_20,1,0.5,4.0);
    (*((param_1->vtable)._ub)->playSound)(param_1,"baron-attack.wav");
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)auStack_c0);
  auStack_c0._48_4_ = 8.40779e-45;
  auStack_c0._4_4_ = 100.0;
  CStack_8c.x = (float)param_1;
  CStack_8c.y = param_1[0x182].create_prob;
  if ((CDemonActor *)CStack_8c.y == (CDemonActor *)0x0) {
    CStack_8c.y = (float)param_1;
  }
  (*(((this_ptr->base).vtable._uc)->_uc).getGrabbed)
            (this_ptr,(CDemonActor *)auStack_c0,(int)in_stack_fffffec0);
  core_charactr_cpp_FUN_004286d0();
  return;
}
