// Name: core_lightgun.cpp_FUN_004c71a0
// Address: 004c71a0
// Address Range: [[004c71a0, 004c7999]]
// Convention: unknown
// Signature: undefined4 core_lightgun_cpp_FUN_004c71a0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_lightgun_cpp_FUN_004c71a0(CCharacter *param_1)

{
  CCharacter *this_ptr;
  bool bVar1;
  CDemonSet *this_ptr_00;
  CVector3f *input_local_point;
  float fVar2;
  CBoundingBox3D *pCVar3;
  EDeathState EVar4;
  CTrigger *this_ptr_01;
  int iVar5;
  CDemonActor *pCVar6;
  int iVar7;
  CDemonActor *unaff_retaddr;
  double dVar8;
  byte auStack_fc [8];
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  EDamageType EStack_cc;
  byte auStack_c8 [24];
  CVector3f CStack_b0;
  CVector3f aCStack_a4 [2];
  CVector3f CStack_8c;
  float fStack_80;
  float fStack_7c;
  byte auStack_6c [8];
  float fStack_64;
  CVector3f local_60;
  CVector3f CStack_50;
  byte auStack_44 [12];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CTrigger *pCStack_28;
  int iStack_20;
  int iStack_1c;
  CCharacter *pCStack_18;
  uint uStack_14;
  
  if ((param_1->model).transformed_vertices[0x51].y < 30.0f) {
    return 0;
  }
  fVar2 = (param_1->model).transformed_vertices[0x1a].x;
  (param_1->model).transformed_vertices[0x51].y = 0.0;
  (param_1->model).transformed_vertices[0x52].y = fVar2;
  input_local_point = (CVector3f *)(*(((param_1->base).vtable._uc)->_uc).canWalk)(param_1);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            (&param_1->base,aCStack_a4,input_local_point);
  local_60.x = (param_1->model).transformed_vertices[0x1a].x;
  auStack_6c._4_4_ = 0.0;
  fStack_64 = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
            (&param_1->base,&CStack_8c,(CVector3f *)(auStack_6c + 4));
  auStack_44._0_4_ = aCStack_a4[0].x + CStack_8c.x;
  auStack_44._4_4_ = aCStack_a4[0].y + CStack_8c.y;
  auStack_44._8_4_ = aCStack_a4[0].z + CStack_8c.z;
  fStack_2c = (float)1.5 / (param_1->model).transformed_vertices[0x1a].x;
  fStack_38 = CStack_8c.x * fStack_2c;
  fStack_34 = CStack_8c.y * fStack_2c;
  fStack_30 = CStack_8c.z * fStack_2c;
  CStack_50.x = aCStack_a4[0].x - fStack_38;
  CStack_50.y = aCStack_a4[0].y - fStack_34;
  CStack_50.z = aCStack_a4[0].z - fStack_30;
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(0x01E57284,1);
  core_setcolid_cpp_FUN_00511740(0x01E57284);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&param_1->base);
  if ((param_1->model).transformed_vertices[0x1c].y != 0.0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
              (0x01E57284,(CDemonActor *)(param_1->model).transformed_vertices[0x1c].y);
  }
  iVar7 = 0;
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_005113e0(0x01E57284);
  do {
    fVar2 = core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                      (0x01E57284,&CStack_50,(CVector3f *)auStack_44);
    dVar8 = (double)fVar2;
    if ((dVar8 < 0.0) || (1.0 < dVar8)) break;
    (param_1->model).transformed_vertices[0x52].y =
         (param_1->model).transformed_vertices[0x1a].x * fVar2;
    pCStack_18 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040d890
                           (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                            g_CCharacterActorType_00765a60.name_hash);
    if ((pCStack_18 != (CCharacter *)0x0) &&
       (EVar4 = (*(((pCStack_18->base).vtable._uc)->_uc).getDeathState)(pCStack_18), 0 < (int)EVar4)
       ) {
      uStack_14 = 0;
    }
    pCVar6 = core_actor_cpp_castToClassHash_FUN_0040d890
                       (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                        g_CGlassActorType_01c78c40.name_hash);
    this_ptr_01 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                             g_CTriggerActorType_02dd1084.name_hash);
    pCStack_28 = this_ptr_01;
    if (pCStack_18 != (CCharacter *)0x0) {
      iVar5 = (*(((pCStack_18->base).vtable._uc)->_uc).canWalk)(pCStack_18);
      this_ptr_00 = 0x01E57284;
      if ((iVar5 != 0) && (iVar7 == 0)) {
        (param_1->model).transformed_vertices[0x51].y = 30.0f;
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(this_ptr_00);
        core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
        return 0;
      }
      break;
    }
    if (pCVar6 == (CDemonActor *)0x0) {
      if (this_ptr_01 != (CTrigger *)0x0) {
        core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(this_ptr_01);
        iVar7 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005485a0(this_ptr_01,&param_1->base)
        ;
        if (iVar7 != 0) {
          fVar2 = (float)(*(((param_1->base).vtable._uc)->_uc).getGrabbed)
                                   (param_1,SUB84(__BITCAST_UINT64(dVar8),0),(int)((ulonglong)dVar8 >> 0x20));
          core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(this_ptr_01,fVar2);
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&pCStack_28->base);
        break;
      }
    }
    else {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,pCVar6);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 1);
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(0x01E57284);
  core_lightgun_cpp_CLightGun_updateBeamLight_FUN_004c6ff0((CLightGun *)param_1);
  iStack_1c = 0;
  iStack_20 = 0;
  do {
    if ((int)0x01E57284->actors[0x6d6] <= iStack_1c) {
      core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
      core_sound_cpp_CSound_playActorSound_FUN_0052ea60
                (0x02DC9450,&param_1->base,"cre-fire.wav",aCStack_a4);
      sound_sndmain_cpp_setSfxVolume_FUN_005270d0
                ((uint)(param_1->model).transformed_vertices[0x51].x,2.0f);
      pCVar6 = (*((param_1->base).vtable._ub)->getCarrier)(&param_1->base);
      if (pCVar6 == *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
        xxx_unk_c_FUN_004940d0(INT_005b9284);
      }
      (param_1->model).transformed_vertices[0x52].x = 1.4013e-45;
      (param_1->model).transformed_vertices[0x50].z = 1.4013e-45;
      return 1;
    }
    this_ptr = *(CCharacter **)((int)0x01E57284->actors + iStack_20 + 0x1b5c);
    iVar7 = (*(((this_ptr->base).vtable._uc)->_uc).canWalk)(this_ptr);
    if (((iVar7 == 0) &&
        ((((iVar7 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr->base,"CGhoul"),
           iVar7 != 0 ||
           (iVar7 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr->base,"CTVBat"),
           iVar7 != 0)) ||
          (iVar7 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr->base,"CBatCreature"),
          iVar7 != 0)) ||
         ((iVar7 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr->base,"CWerewolf"),
          iVar7 != 0 ||
          (iVar7 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr->base,"CSvetlana"),
          iVar7 != 0)))))) ||
       ((iVar7 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr->base,"CDraculaBride"),
        iVar7 != 0 ||
        (((iVar7 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr->base,"CBatman"),
          iVar7 != 0 ||
          (iVar7 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr->base,"CBatCreature"),
          iVar7 != 0)) ||
         (iVar7 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr->base,"CBride"),
         iVar7 != 0)))))) {
      (*((this_ptr->base).vtable._ub)->getBoundingBox)
                (&this_ptr->base,(CBoundingBox3D *)(auStack_c8 + 0x10));
      iVar7 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0
                        ((CDemonCamera *)&DAT_01c74640,&(this_ptr->base).location.position,
                         &(this_ptr->base).orient.vec,&CStack_b0,aCStack_a4);
      if (iVar7 != 0) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"%s in volume\n",this_ptr);
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_005113e0(0x01E57284);
        pCVar3 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                           (&this_ptr->base,(CBoundingBox3D *)auStack_c8);
        param_1 = (CCharacter *)&pCVar3->max;
        core_actor_cpp_CVector_ctor_FUN_0040e160(&CStack_8c.z);
        CStack_8c.z = (pCVar3->min).x + ((CVector3f *)param_1)->x;
        fStack_80 = (pCVar3->min).y + (pCVar3->max).y;
        fStack_7c = (pCVar3->min).z + (pCVar3->max).z;
        core_actor_cpp_CVector_ctor_FUN_0040e160(&local_60);
        local_60.x = CStack_8c.z * 0.5f;
        local_60.y = fStack_80 * 0.5f;
        local_60.z = fStack_7c * 0.5f;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  (&this_ptr->base,(CVector3f *)auStack_6c,&local_60);
        iVar7 = 0;
        bVar1 = false;
        do {
          core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                    (0x01E57284,(CVector3f *)(auStack_44 + 8),(CVector3f *)auStack_6c);
          pCVar6 = *(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18);
          if (pCVar6 == (CDemonActor *)0x0) break;
          if (pCVar6 == unaff_retaddr) {
            bVar1 = true;
            break;
          }
          iVar5 = core_actor_cpp_isOfClass_FUN_0040d7e0(pCVar6,"CTrigger || CGlass");
          if (iVar5 == 0) break;
          iVar7 = iVar7 + 1;
          core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                    (0x01E57284,
                     *(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18));
        } while (iVar7 < 3);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(0x01E57284);
        if (bVar1) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)auStack_fc);
          auStack_fc._4_4_ = 0.1;
          EStack_cc = DAMAGE_TYPE_BURN;
          fStack_f4 = 0.0;
          fStack_e8 = 0.0;
          fStack_ec = 0.0;
          fStack_f0 = 0.0;
          auStack_c8._0_4_ = param_1;
          auStack_c8._8_4_ = (**(code **)((int)pCVar3[0xe].min.z + 0x8c))((CDemonActor *)param_1);
          (*(((this_ptr->base).vtable._uc)->_uc).processDamage)
                    (this_ptr,(SDamageInfo *)(auStack_fc + 4));
        }
      }
    }
    iStack_1c = iStack_1c + 1;
    iStack_20 = iStack_20 + 4;
  } while( true );
}
