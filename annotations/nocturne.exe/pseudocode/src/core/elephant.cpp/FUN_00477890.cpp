// Name: core_elephant.cpp_FUN_00477890
// Address: 00477890
// Address Range: [[00477890, 00477fcd]]
// Convention: unknown
// Signature: undefined4 core_elephant_cpp_FUN_00477890(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_elephant_cpp_FUN_00477890(CCharacter *param_1)

{
  CDemonActor_vtable *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  CDemonActor *pCVar4;
  CDemonSet *this_ptr;
  EDeathState EVar5;
  CTrigger *this_ptr_00;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  CDemonActor *in_stack_fffffec0;
  CDemonSet *in_stack_fffffec4;
  byte auStack_124 [8];
  float fStack_11c;
  CVector3f CStack_118;
  CVector3f CStack_108;
  float fStack_fc;
  float fStack_f8;
  EDamageType EStack_f4;
  CCharacter *pCStack_f0;
  CDemonActor *pCStack_e8;
  CVector3f CStack_dc;
  CVector3f aCStack_d0 [2];
  CVector3f aCStack_b8 [2];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  CVector3f CStack_94;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f aCStack_70 [3];
  CTrigger *pCStack_4c;
  CDemonActor *pCStack_48;
  float fStack_44;
  CDemonActor *pCStack_40;
  CFlameCan *pCStack_3c;
  CDemonActor *pCStack_38;
  CCrate *pCStack_34;
  CDemonSet *pCStack_2c;
  float fStack_24;
  int iStack_20;
  CDemonActor *pCStack_14;
  
  pCVar2 = (CVector3f *)(*(((param_1->base).vtable._uc)->_uc).canWalk)(param_1);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(&param_1->base,aCStack_d0,pCVar2);
  iVar3 = core_weapon_cpp_CWeapon_fire_FUN_00554600((CWeapon *)param_1);
  if (iVar3 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_0052ea60
              (g_CSound_PTR_005bed68,&param_1->base,"shotgun-noammo.wav",aCStack_d0);
    return 0;
  }
  fVar7 = (float10)fptan((float10)(param_1->model).transformed_vertices[0x50].z *
                         (float10)3.1415926535000001 * (float10)0.0055555555555555497);
  pCStack_40 = (CDemonActor *)
               (float)(fVar7 * (float10)(param_1->model).transformed_vertices[0x1a].x);
  pCStack_34 = (CCrate *)core_actor_cpp_getRandomInt_FUN_0040de00(10,0xf);
  pCStack_3c = (CFlameCan *)0x0;
  if (0 < (int)pCStack_34) {
    do {
      pCStack_48 = (CDemonActor *)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,6.2831855)
      ;
      pCStack_14 = pCStack_48;
      pCStack_14 = (CDemonActor *)
                   core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,(float)pCStack_40);
      fVar7 = (float10)fcos((float10)(float)pCStack_48);
      fVar8 = (float10)fsin((float10)(float)pCStack_48);
      CStack_dc.x = (float)(fVar7 * (float10)(float)pCStack_14);
      CStack_dc.y = (float)(fVar8 * (float10)(float)pCStack_14);
      CStack_dc.z = (param_1->model).transformed_vertices[0x1a].x;
      pCVar2 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                         (&param_1->base,&CStack_88,&CStack_dc);
      if (&CStack_dc != pCVar2) {
        CStack_dc.x = pCVar2->x;
        CStack_dc.y = pCVar2->y;
        CStack_dc.z = pCVar2->z;
      }
      aCStack_b8[0].x = aCStack_d0[0].x + CStack_dc.x;
      aCStack_b8[0].y = aCStack_d0[0].y + CStack_dc.y;
      aCStack_b8[0].z = aCStack_d0[0].z + CStack_dc.z;
      pCStack_38 = (CDemonActor *)
                   ((float)1.5 / (param_1->model).transformed_vertices[0x1a].x);
      fStack_a0 = CStack_dc.x * (float)pCStack_38;
      fStack_9c = CStack_dc.y * (float)pCStack_38;
      fStack_98 = CStack_dc.z * (float)pCStack_38;
      CStack_94.x = aCStack_d0[0].x - fStack_a0;
      CStack_94.y = aCStack_d0[0].y - fStack_9c;
      CStack_94.z = aCStack_d0[0].z - fStack_98;
      core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(g_CDemonSet_PTR_005be368,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(g_CDemonSet_PTR_005be368,&param_1->base);
      pCVar4 = (CDemonActor *)(param_1->model).transformed_vertices[0x1c].y;
      if (pCVar4 != (CDemonActor *)0x0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(g_CDemonSet_PTR_005be368,pCVar4);
      }
      iStack_20 = 0;
      do {
        fStack_11c = core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                               (g_CDemonSet_PTR_005be368,&CStack_94,aCStack_b8);
        auStack_124 = (byte  [8])(double)fStack_11c;
        pCStack_14 = (CDemonActor *)fStack_11c;
        if (((double)auStack_124 < 0.0) || (1.0 < (double)auStack_124)) break;
        pCVar4 = g_CDemonSet_PTR_005be368->collision_actor;
        this_ptr = (CDemonSet *)
                   core_actor_cpp_castToClassHash_FUN_0040d890
                             (pCVar4,g_CCharacterActorType_00765a60.name_hash);
        if (this_ptr != (CDemonSet *)0x0) {
          pCVar4 = (CDemonActor *)0x477c42;
          EVar5 = (**(code **)(this_ptr->cameras[0].camera_group + 0x104))((CCharacter *)this_ptr);
          if (0 < (int)EVar5) {
            this_ptr = (CDemonSet *)0x0;
          }
        }
        pCStack_38 = core_actor_cpp_castToClassHash_FUN_0040d890
                               (g_CDemonSet_PTR_005be368->collision_actor,
                                g_CGlassActorType_01c78c40.name_hash);
        this_ptr_00 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040d890
                                (g_CDemonSet_PTR_005be368->collision_actor,
                                 g_CTriggerActorType_02dd1084.name_hash);
        pCStack_4c = this_ptr_00;
        pCStack_40 = core_actor_cpp_castToClassHash_FUN_0040d890
                               (g_CDemonSet_PTR_005be368->collision_actor,
                                g_CCrateActorType_0077bd40.name_hash);
        pCStack_48 = core_actor_cpp_castToClassHash_FUN_0040d890
                               (g_CDemonSet_PTR_005be368->collision_actor,
                                g_CFlameCanActorType_01c70654.name_hash);
        fVar6 = (float)(*(((param_1->base).vtable._uc)->_uc).getGrabbed)
                                 (param_1,in_stack_fffffec0,(int)in_stack_fffffec4);
        fStack_24 = fStack_44;
        pCStack_38 = (CDemonActor *)(((1.0 - (float)pCVar4) * fVar6) / (float)(int)fStack_44);
        if (this_ptr == (CDemonSet *)0x0) {
          if (pCStack_2c == (CDemonSet *)0x0) {
            if (this_ptr_00 == (CTrigger *)0x0) {
              if (pCStack_34 == (CCrate *)0x0) {
                if (pCStack_3c == (CFlameCan *)0x0) {
                  in_stack_fffffec4 = (CDemonSet *)g_CDemonSet_PTR_005be368->ground_type;
                  in_stack_fffffec0 = (CDemonActor *)&g_CDemonSet_PTR_005be368->collision_normal;
                  core_fire_cpp_CFireEffect_createBulletImpact_FUN_0048ab60
                            (g_CFireEffect_PTR_005b80f0,
                             &g_CDemonSet_PTR_005be368->collision_impact_position,
                             (CVector3f *)in_stack_fffffec0,(int)in_stack_fffffec4,
                             g_CDemonSet_PTR_005be368->collision_actor);
                  break;
                }
                in_stack_fffffec4 = (CDemonSet *)0x477f6f;
                core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(pCStack_3c);
              }
              else {
                in_stack_fffffec4 = (CDemonSet *)0x477f7a;
                core_crate_cpp_CCrate_explode_FUN_0043cdb0(pCStack_34);
              }
            }
            else {
              core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(this_ptr_00);
              iVar3 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005485a0
                                (this_ptr_00,&param_1->base);
              if (iVar3 != 0) {
                core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(this_ptr_00,(float)pCStack_38);
              }
              in_stack_fffffec0 = (CDemonActor *)0x477d6e;
              in_stack_fffffec4 = g_CDemonSet_PTR_005be368;
              core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(g_CDemonSet_PTR_005be368,pCStack_40);
            }
          }
          else {
            in_stack_fffffec4 = (CDemonSet *)0x477f2b;
            iVar3 = core_glass_cpp_FUN_004aded0((CGlass *)pCStack_2c);
            if (iVar3 == 0) break;
            in_stack_fffffec0 = (CDemonActor *)0x477f4e;
            in_stack_fffffec4 = pCStack_2c;
            core_glass_cpp_CGlass_shatter_FUN_004ada20
                      ((CGlass *)pCStack_2c,&g_CDemonSet_PTR_005be368->collision_impact_position);
          }
        }
        else {
          in_stack_fffffec4 = (CDemonSet *)0x477d83;
          iVar3 = (**(code **)(this_ptr->cameras[0].camera_group + 0xd8))((CCharacter *)this_ptr);
          if (iVar3 != 0) break;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)auStack_124);
          auStack_124._4_4_ = pCStack_34;
          auStack_124._0_4_ = g_CDemonSet_PTR_005be368->collision_part_index;
          fStack_11c = 0.4;
          CStack_7c.x = (g_CDemonSet_PTR_005be368->ray_target).x -
                        (g_CDemonSet_PTR_005be368->ray_origin).x;
          CStack_7c.y = (g_CDemonSet_PTR_005be368->ray_target).y -
                        (g_CDemonSet_PTR_005be368->ray_origin).y;
          CStack_7c.z = (g_CDemonSet_PTR_005be368->ray_target).z -
                        (g_CDemonSet_PTR_005be368->ray_origin).z;
          fStack_24 = (float)10 /
                      SQRT(CStack_7c.z * CStack_7c.z +
                           CStack_7c.x * CStack_7c.x + CStack_7c.y * CStack_7c.y);
          aCStack_d0[0].x = CStack_7c.x * fStack_24;
          aCStack_d0[0].y = CStack_7c.y * fStack_24;
          aCStack_d0[0].z = CStack_7c.z * fStack_24;
          if (&CStack_118 != aCStack_d0) {
            CStack_118.x = aCStack_d0[0].x;
            CStack_118.y = aCStack_d0[0].y;
            CStack_118.z = aCStack_d0[0].z;
          }
          in_stack_fffffec0 = (CDemonActor *)0x477e96;
          in_stack_fffffec4 = this_ptr;
          pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                             ((CDemonActor *)this_ptr,aCStack_70,
                              &g_CDemonSet_PTR_005be368->collision_impact_position);
          if (&CStack_108 != pCVar2) {
            CStack_108.x = pCVar2->x;
            CStack_108.y = pCVar2->y;
            CStack_108.z = pCVar2->z;
          }
          fStack_fc = (param_1->model).transformed_vertices[0x4f].z;
          EStack_f4 = DAMAGE_TYPE_PIERCING;
          fStack_f8 = 1.0;
          pCStack_f0 = param_1;
          pCStack_e8 = (*((param_1->base).vtable._ub)->getCarrier)(&param_1->base);
          (**(code **)(this_ptr->cameras[0].camera_group + 0x100))
                    ((CCharacter *)this_ptr,(SDamageInfo *)(auStack_124 + 4));
          if ((param_1->model).transformed_vertices[0x19].z == 0.0) break;
          core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                    (g_CDemonSet_PTR_005be368,g_CDemonSet_PTR_005be368->collision_actor);
        }
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < 4);
      pCStack_3c = (CFlameCan *)((pCStack_3c->base).actor_name + 1);
    } while ((int)pCStack_3c < (int)pCStack_34);
  }
  CStack_7c.x = aCStack_d0[0].x;
  CStack_7c.z = aCStack_d0[0].z;
  CStack_7c.y = aCStack_d0[0].y + 1.574918751107038e-314._0_4_;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0048af20
            (g_CFireEffect_PTR_005b80f0,&CStack_7c,&(param_1->base).orient_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_0052ea60
            (g_CSound_PTR_005bed68,&param_1->base,"elephantgun.wav",aCStack_d0);
  pCVar1 = (param_1->base).vtable._ub;
  (param_1->model).transformed_vertices[0x1c].x = 1.0;
  pCVar4 = (*pCVar1->getCarrier)(&param_1->base);
  if (pCVar4 == *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    auStack_124._0_4_ = PTR_DAT_005b9284;
    xxx_unk_c_FUN_004940d0();
  }
  return 1;
}
