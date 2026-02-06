// Name: core_elephant.cpp_CElephantGun_fire_FUN_004a7160
// Address: 004a7160
// Address Range: [[004a7160, 004a71ff] [004a7406, 004a74a4]]
// Convention: __cdecl
// Signature: int __cdecl core_elephant_cpp_CElephantGun_fire_FUN_004a7160(CElephantGun *this_ptr)

#include "nocturne.h"

int __cdecl core_elephant_cpp_CElephantGun_fire_FUN_004a7160(CElephantGun *this_ptr)

{
  CVector3f *pCVar1;
  int iVar2;
  CCharacter *this_ptr_00;
  CDemonActor *pCVar3;
  float fVar4;
  int extraout_EAX;
  float10 fVar5;
  float10 fVar6;
  byte auStack_128 [8];
  float fStack_120;
  CVector3f CStack_11c;
  CVector3f CStack_10c;
  int iStack_100;
  float fStack_fc;
  int iStack_f8;
  CElephantGun *pCStack_f4;
  CVector3f aCStack_ec [2];
  CVector3f CStack_d4;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_48;
  float fStack_44;
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  CDemonActor *pCStack_34;
  CCrate *pCStack_30;
  CFlameCan *pCStack_2c;
  float fStack_28;
  int iStack_24;
  CGlass *pCStack_20;
  float fStack_18;
  
  pCVar1 = (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).cfunc3)();
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_80,pCVar1);
  iVar2 = core_weapon_cpp_CWeapon_FUN_005ee6e0(&this_ptr->base);
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005b3a40
              (g_CSoundPtr,(CDemonActor *)this_ptr,"shotgun-noammo.wav",&CStack_80);
    return 0;
  }
  fVar5 = (float10)fptan((float10)*(float *)this_ptr->unk * (float10)3.1415926535000001 *
                         (float10)0.0055555555555555497);
  fStack_44 = (float)(fVar5 * (float10)(this_ptr->base).bolt_velocity);
  fStack_38 = (float)core_actor_cpp_getRandomInt_FUN_0040cc70(10,0xf);
  iStack_40 = 0;
  if (0 < (int)fStack_38) {
    do {
      fStack_48 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
      fStack_18 = fStack_48;
      fStack_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,fStack_44);
      fVar5 = (float10)fcos((float10)fStack_48);
      fVar6 = (float10)fsin((float10)fStack_48);
      CStack_bc.x = (float)(fVar5 * (float10)fStack_18);
      CStack_bc.y = (float)(fVar6 * (float10)fStack_18);
      CStack_bc.z = (this_ptr->base).bolt_velocity;
      pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         ((CDemonActor *)this_ptr,&CStack_b0,&CStack_bc);
      if (&CStack_bc != pCVar1) {
        CStack_bc.x = pCVar1->x;
        CStack_bc.y = pCVar1->y;
        CStack_bc.z = pCVar1->z;
      }
      CStack_d4.x = CStack_80.x + CStack_bc.x;
      CStack_d4.y = CStack_80.y + CStack_bc.y;
      CStack_d4.z = CStack_80.z + CStack_bc.z;
      fStack_3c = (float)1.5 / (this_ptr->base).bolt_velocity;
      fStack_74 = CStack_bc.x * fStack_3c;
      fStack_70 = CStack_bc.y * fStack_3c;
      fStack_6c = CStack_bc.z * fStack_3c;
      CStack_8c.x = CStack_80.x - fStack_74;
      CStack_8c.y = CStack_80.y - fStack_70;
      CStack_8c.z = CStack_80.z - fStack_6c;
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      pCVar3 = *(CDemonActor **)&(this_ptr->base).carried_by_actor;
      if (pCVar3 != (CDemonActor *)0x0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar3);
      }
      iStack_24 = 0;
      do {
        fStack_120 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                               (g_CDemonSetPtr,&CStack_8c,&CStack_d4);
        auStack_128 = (byte  [8])(double)fStack_120;
        fStack_18 = fStack_120;
        if (((double)auStack_128 < 0.0) || (1.0 < (double)auStack_128)) break;
        this_ptr_00 = (CCharacter *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
        if ((this_ptr_00 != (CCharacter *)0x0) &&
           (iVar2 = (*(((this_ptr_00->base).vtable._uc)->_uc).isDamageable)(this_ptr_00), 0 < iVar2)
           ) {
          this_ptr_00 = (CCharacter *)0x0;
        }
        pCStack_20 = (CGlass *)
                     core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
        pCStack_34 = pCVar3;
        pCStack_30 = (CCrate *)
                     core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
        pCStack_2c = (CFlameCan *)
                     core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
        fVar4 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).cfunc6)();
        fStack_18 = fStack_38;
        fStack_28 = ((1.0 - fStack_120) * fVar4) / (float)(int)fStack_38;
        if (this_ptr_00 == (CCharacter *)0x0) {
          if (pCStack_20 == (CGlass *)0x0) {
            if (pCVar3 == (CDemonActor *)0x0) {
              if (pCStack_30 == (CCrate *)0x0) {
                if (pCStack_2c == (CFlameCan *)0x0) {
                  core_fire_cpp_CFireEffect_FUN_004c76a0(g_CFireEffectPtr);
                  break;
                }
                core_flamecan_cpp_CFlameCan_FUN_004cb340(pCStack_2c);
              }
              else {
                core_crate_cpp_CCrate_FUN_00448a70(pCStack_30);
              }
            }
            else {
              core_trigger_cpp_FUN_005e0aa0();
              iVar2 = core_trigger_cpp_FUN_005e0ac0();
              if (iVar2 != 0) {
                core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
              }
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_34);
            }
          }
          else {
            core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_20);
            if (extraout_EAX == 0) break;
            core_glass_cpp_CGlass_shatter_FUN_004eaef0
                      (pCStack_20,&g_CDemonSetPtr->collision_impact_position);
          }
        }
        else {
          iVar2 = (*(((this_ptr_00->base).vtable._uc)->_uc).cfunc3)();
          if (iVar2 != 0) break;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_128);
          auStack_128._4_4_ = pCStack_34;
          auStack_128._0_4_ = g_CDemonSetPtr->unk1;
          fStack_120 = 0.4;
          fStack_a4 = (g_CDemonSetPtr->collision_result_vec2).x -
                      (g_CDemonSetPtr->collision_result_vec1).x;
          fStack_a0 = (g_CDemonSetPtr->collision_result_vec2).y -
                      (g_CDemonSetPtr->collision_result_vec1).y;
          fStack_9c = (g_CDemonSetPtr->collision_result_vec2).z -
                      (g_CDemonSetPtr->collision_result_vec1).z;
          fStack_28 = (float)10 /
                      SQRT(fStack_9c * fStack_9c + fStack_a4 * fStack_a4 + fStack_a0 * fStack_a0);
          CStack_b0.x = fStack_a4 * fStack_28;
          CStack_b0.y = fStack_a0 * fStack_28;
          CStack_b0.z = fStack_9c * fStack_28;
          if (&CStack_11c != &CStack_b0) {
            CStack_11c.x = CStack_b0.x;
            CStack_11c.y = CStack_b0.y;
            CStack_11c.z = CStack_b0.z;
          }
          pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             (&this_ptr_00->base,aCStack_ec,
                              &g_CDemonSetPtr->collision_impact_position);
          if (&CStack_10c != pCVar1) {
            CStack_10c.x = pCVar1->x;
            CStack_10c.y = pCVar1->y;
            CStack_10c.z = pCVar1->z;
          }
          iStack_100 = (this_ptr->base).ammo_type;
          iStack_f8 = 0x6b;
          fStack_fc = 1.0;
          pCStack_f4 = this_ptr;
          aCStack_ec[0].x =
               (float)(*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
          (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)
                    (this_ptr_00,(SDamageInfo *)(auStack_128 + 4));
          if (*(int *)((this_ptr->base).unk1 + 0xc) == 0) break;
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        }
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 < 4);
      iStack_40 = iStack_40 + 1;
    } while (iStack_40 < (int)fStack_38);
  }
  fStack_c8 = CStack_80.x;
  fStack_c0 = CStack_80.z;
  fStack_c4 = CStack_80.y + -0.125f;
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,(CDemonActor *)this_ptr,"elephantgun.wav",&CStack_80);
  (this_ptr->base).unk2[0xc] = '\0';
  (this_ptr->base).unk2[0xd] = '\0';
  (this_ptr->base).unk2[0xe] = -0x80;
  (this_ptr->base).unk2[0xf] = '?';
  return 1;
}
