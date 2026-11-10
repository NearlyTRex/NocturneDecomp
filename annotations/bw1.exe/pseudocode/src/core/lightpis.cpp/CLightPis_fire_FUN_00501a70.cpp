// Name: core_lightpis.cpp_CLightPis_fire_FUN_00501a70
// Address: 00501a70
// Address Range: [[00501a70, 0050247b]]
// Convention: __cdecl
// Signature: int __cdecl core_lightpis_cpp_CLightPis_fire_FUN_00501a70(CLightPis *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_lightpis_cpp_CLightPis_fire_FUN_00501a70(CLightPis *this_ptr)

{
  UOrientationVector *orientation;
  bool bVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  CDemonActor *pCVar5;
  CCharacter *pCVar6;
  int iVar7;
  uint unaff_EBX;
  CLocation *position;
  CDemonActor *unaff_ESI;
  float *pfVar8;
  CVector3f *pCVar9;
  float *pfVar10;
  byte bVar11;
  float afStackY_111c [60];
  CCharacter *apCStackY_102c [5];
  CDemonActor *apCStackY_1018 [891];
  CDemonSet *pCVar12;
  CBoundingBox3D *out_box;
  double dVar13;
  CBoundingBox3D *in_stack_fffffdf4;
  uint uStack_204;
  SDamageInfo aSStack_200 [40];
  uint auStack_1d8 [7];
  SDamageInfo aSStack_1bc [4];
  uint uStack_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a0;
  uint uStack_18c;
  CLightPis *apCStack_188 [2];
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float afStack_168 [4];
  CVector3f CStack_158;
  CVector3f CStack_14c;
  float afStack_140 [3];
  float fStack_134;
  float afStack_130 [5];
  float fStack_11c;
  float fStack_118;
  CVector3f CStack_114;
  float afStack_108 [4];
  float fStack_f8;
  float afStack_f4 [5];
  float fStack_e0;
  float afStack_dc [7];
  CVector3f CStack_c0;
  float afStack_b4 [4];
  CVector3f CStack_a4;
  float afStack_98 [6];
  float afStack_80 [11];
  float fStack_54;
  float afStack_50 [4];
  float fStack_40;
  CCharacter *apCStack_3c [4];
  CDemonActor *apCStack_2c [2];
  int iStack_24;
  int iStack_20;
  float *pfStack_18;
  float fStack_14;
  
  bVar11 = 0;
  iVar4 = core_weapon_cpp_CWeapon_fire_FUN_005adde0((CWeapon *)this_ptr);
  if (iVar4 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_0057d8a0
              (0x02C82A60,(CDemonActor *)this_ptr,"shotgun-noammo.wav",
               (CVector3f *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x20));
  }
  else if (_DAT_00603170 <= *(float *)&this_ptr->field_0x580) {
    *(uint *)&this_ptr->field_0x580 = 0;
    *(uint *)&this_ptr->field_0x594 = *(uint *)&this_ptr->field_0x2e8;
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe0))(this_ptr);
    CStack_c0.y = CStack_114.y;
    afStack_b4[(uint)bVar11 * -2 + -1] = afStack_108[(uint)bVar11 * -2 + -1];
    afStack_b4[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
         afStack_108[(uint)bVar11 * -2 + (uint)bVar11 * -2];
    afStack_b4[0] = afStack_b4[0] + _DAT_005e6fee;
    core_actor_cpp_FUN_00408b40(this_ptr,&CStack_c0.y);
    CStack_a4.x = fStack_134;
    afStack_98[(uint)bVar11 * -2 + -2] = afStack_130[(uint)bVar11 * -2];
    afStack_98[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1] =
         afStack_130[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    afStack_98[2] = *(float *)&this_ptr->field_0x2e8;
    afStack_98[0] = 0.0;
    afStack_98[1] = 0.0;
    apCStack_3c[1] = (CCharacter *)afStack_98[2];
    core_actor_cpp_FUN_00408ac0(this_ptr,afStack_98);
    fVar2 = CStack_a4.x;
    fStack_f8 = afStack_80[0];
    afStack_f4[(uint)bVar11 * -2] = afStack_80[(uint)bVar11 * -2 + 1];
    afStack_f4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_80[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2];
    fStack_e0 = fVar2 + fStack_f8;
    afStack_dc[0] = CStack_a4.y + afStack_f4[0];
    afStack_dc[1] = CStack_a4.z + afStack_f4[1];
    afStack_80[3] = fVar2 + fStack_f8;
    afStack_80[(uint)bVar11 * -2 + 4] = afStack_dc[(uint)bVar11 * -2];
    afStack_80[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5] =
         afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    fStack_11c = CStack_a4.x;
    (&fStack_118)[(uint)bVar11 * -2] = afStack_98[(uint)bVar11 * -2 + -2];
    pCVar12 = g_CDemonSetPtr;
    *(float *)((int)&CStack_114 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
         afStack_98[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1];
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(pCVar12);
    core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00559310(g_CDemonSetPtr,1,0xff,0xff,0xff);
    core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_00559210(g_CDemonSetPtr);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
    if (*(CDemonActor **)&this_ptr->field_0x304 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0x304);
    }
    core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00558eb0(g_CDemonSetPtr);
    iVar4 = 0;
    do {
      fStack_14 = (float)core_setcolid_cpp_FUN_00557300(g_CDemonSetPtr,&fStack_11c,afStack_80 + 3);
      uVar3 = g_CCharacterClassInfo.name_hash;
      dVar13 = (double)fStack_14;
      if ((dVar13 < 0.0) || (1.0 < dVar13)) break;
      *(float *)&this_ptr->field_0x594 = *(float *)&this_ptr->field_0x2e8 * fStack_14;
      iStack_20 = core_actor_cpp_castToClassHash_FUN_0040c600(g_CDemonSetPtr->collision_actor,uVar3)
      ;
      if ((iStack_20 != 0) &&
         (iVar7 = (**(code **)(*(int *)(iStack_20 + 0x154) + 0x10c))(iStack_20), 0 < iVar7)) {
        iStack_20 = 0;
      }
      pCVar5 = (CDemonActor *)
               core_actor_cpp_castToClassHash_FUN_0040c600
                         (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
      pCVar6 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c600
                         (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
      apCStack_3c[3] = pCVar6;
      if (iStack_20 != 0) {
        iVar7 = (**(code **)(*(int *)(iStack_20 + 0x154) + 0xe0))(iStack_20);
        pCVar12 = g_CDemonSetPtr;
        if ((iVar7 != 0) && (iVar4 == 0)) {
          *(float *)&this_ptr->field_0x580 = _DAT_00603170;
          core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00559060(pCVar12);
          core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
          return 0;
        }
        break;
      }
      if (pCVar5 == (CDemonActor *)0x0) {
        if (pCVar6 != (CCharacter *)0x0) {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_0059bdd0((CTrigger *)pCVar6);
          iVar4 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0
                            ((CTrigger *)pCVar6,(CDemonActor *)this_ptr);
          if (iVar4 != 0) {
            fStack_14 = (float)(**(code **)(*(int *)&this_ptr->field_0x154 + 0xec))(this_ptr);
            core_trigger_cpp_CTrigger_applyDamage_FUN_0059be30((CTrigger *)pCVar6,fStack_14);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,&apCStack_3c[3]->base);
          break;
        }
      }
      else {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCVar5);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 1);
    core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00559060(g_CDemonSetPtr);
    core_lightpis_cpp_FUN_005017f0(this_ptr);
    iStack_24 = 0;
    apCStack_2c[0] = (CDemonActor *)apCStack_188;
    apCStack_2c[1] = (CDemonActor *)0x0;
    do {
      out_box = (CBoundingBox3D *)((ulonglong)dVar13 >> 0x20);
      if (g_CDemonSetPtr->character_count <= iStack_24) {
        core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
        core_sound_cpp_CSound_playActorSound_FUN_0057d8a0
                  (0x02C82A60,(CDemonActor *)this_ptr,"ecre.wav",&CStack_a4);
        sound_sndmain_cpp_FUN_00573950(*(uint *)&this_ptr->field_0x57c,0x40000000);
        fVar2 = _DAT_00603170;
        *(uint *)&this_ptr->field_0x578 = 1;
        *(uint *)&this_ptr->field_0x588 = 1;
        *(float *)&this_ptr->field_0x300 = fVar2;
        return 1;
      }
      apCStack_3c[2] =
           *(CCharacter **)
            (apCStack_2c[1][0xf95].create_event + (int)(g_CDemonSetPtr->cameras + -1) + 0x19c);
      iVar4 = (*(((apCStack_3c[2]->base).vtable._uc)->_uc).isInvulnerable)(apCStack_3c[2]);
      pCVar6 = apCStack_3c[3];
      if ((iVar4 == 0) &&
         ((((iVar4 = core_actor_cpp_isOfClass_FUN_0040c550(&apCStack_3c[3]->base,"CGhoul"),
            iVar4 != 0 ||
            (iVar4 = core_actor_cpp_isOfClass_FUN_0040c550(&pCVar6->base,"CTVBat"),
            iVar4 != 0)) ||
           (iVar4 = core_actor_cpp_isOfClass_FUN_0040c550(&pCVar6->base,"CBatCreature"),
           iVar4 != 0)) ||
          ((iVar4 = core_actor_cpp_isOfClass_FUN_0040c550(&pCVar6->base,"CWerewolf"),
           iVar4 != 0 ||
           (iVar4 = core_actor_cpp_isOfClass_FUN_0040c550(&pCVar6->base,"CSvetlana"),
           iVar4 != 0)))))) {
LAB_00501f69:
        pCVar6 = apCStack_3c[3];
        (*((apCStack_3c[3]->base).vtable._ub)->getBoundingBox)(&apCStack_3c[3]->base,out_box);
        orientation = &(pCVar6->base).orient;
        dVar13 = __BITCAST_DOUBLE(CONCAT44(&CStack_158,orientation));
        position = &(pCVar6->base).location;
        pfVar8 = afStack_140;
        pCVar9 = &CStack_158;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          pCVar9->x = *pfVar8;
          pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
          pCVar9 = (CVector3f *)((int)pCVar9 + ((uint)bVar11 * -2 + 1) * 4);
        }
        iVar4 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452de0
                          (&g_CDemonLightInstance.base,&position->position,&orientation->vec,
                           &CStack_158,&CStack_14c);
        if (iVar4 != 0) {
          engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s in volume\n",apCStack_2c[1]);
          iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          CStack_c0.y = *(float *)(iVar4 + 0x20) - (position->position).x;
          CStack_c0.z = *(float *)(iVar4 + 0x24) - (pCVar6->base).location.position.y;
          afStack_b4[0] = *(float *)(iVar4 + 0x28) - (pCVar6->base).location.position.z;
          afStack_50[3] = CStack_c0.y;
          afStack_50[(uint)bVar11 * -2 + 4] = afStack_b4[(uint)bVar11 * -2 + -1];
          apCStack_3c[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
               (CCharacter *)afStack_b4[(uint)bVar11 * -2 + (uint)bVar11 * -2];
          if (SQRT((float)apCStack_3c[0] * (float)apCStack_3c[0] +
                   afStack_50[3] * afStack_50[3] + fStack_40 * fStack_40) < (float)_DAT_005e6ffa) {
            core_actor_cpp_FUN_00408bb0();
            afStack_80[0] = fStack_f8;
            afStack_80[(uint)bVar11 * -2 + 1] = afStack_f4[(uint)bVar11 * -2];
            afStack_80[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2] =
                 afStack_f4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
            afStack_80[1] = 0.0;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_80);
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_200);
            uStack_204 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0xec))(this_ptr);
            auStack_1d8[0] = 0x6c;
            (*(((apCStack_3c[3]->base).vtable._uc)->_uc).processDamage)
                      (apCStack_3c[3],(SDamageInfo *)&stack0xfffffdf8);
          }
          core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00558eb0(g_CDemonSetPtr);
          (*((apCStack_2c[1]->vtable)._ub)->getBoundingBox)(apCStack_2c[1],in_stack_fffffdf4);
          pfVar8 = afStack_168;
          pfVar10 = &fStack_180;
          for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pfVar10 = *pfVar8;
            pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
            pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
          }
          core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(&CStack_114);
          CStack_114.x = fStack_180 + *pfStack_18;
          CStack_114.y = fStack_17c + pfStack_18[1];
          pCVar9 = &CStack_c0;
          CStack_114.z = fStack_178 + pfStack_18[2];
          afStack_50[2] = fStack_180 + *pfStack_18;
          afStack_50[(uint)bVar11 * -2 + 3] = afStack_108[(uint)bVar11 * -2 + -2];
          afStack_50[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
               afStack_108[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1];
          core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(pCVar9);
          iVar4 = iStack_20;
          CStack_c0.x = afStack_50[2] * _DAT_005e6ff2;
          CStack_c0.y = afStack_50[3] * _DAT_005e6ff2;
          CStack_c0.z = fStack_40 * _DAT_005e6ff2;
          fStack_54 = afStack_50[2] * _DAT_005e6ff2;
          afStack_50[(uint)bVar11 * -2] = afStack_b4[(uint)bVar11 * -2 + -2];
          afStack_50[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               afStack_b4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1];
          core_actor_cpp_FUN_00408b40(iVar4);
          apCStack_3c[3] = (CCharacter *)CStack_a4.z;
          apCStack_2c[(uint)bVar11 * -2] = (CDemonActor *)afStack_98[(uint)bVar11 * -2];
          apCStack_2c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               (CDemonActor *)afStack_98[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          iVar4 = 0;
          bVar1 = false;
          do {
            dVar13 = 3.589520547291137e-307;
            core_setcolid_cpp_FUN_00557300(g_CDemonSetPtr,unaff_EBX);
            pCVar5 = g_CDemonSetPtr->collision_actor;
            if (pCVar5 == (CDemonActor *)0x0) break;
            if (pCVar5 == unaff_ESI) {
              bVar1 = true;
              break;
            }
            iVar7 = core_actor_cpp_isOfClass_FUN_0040c550(pCVar5,"CTrigger || CGlass");
            if (iVar7 == 0) break;
            iVar4 = iVar4 + 1;
            core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                      (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
          } while (iVar4 < 3);
          in_stack_fffffdf4 = (CBoundingBox3D *)0x5021f6;
          core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00559060(g_CDemonSetPtr);
          if (bVar1) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_1bc);
            iVar4 = core_lightpis_cpp_FUN_005016d0();
            if (iVar4 == 0) {
              uStack_1b8 = 0x3dcccccd;
            }
            else {
              uStack_1b8 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0xec))();
            }
            uStack_18c = 0x6c;
            uStack_1b4 = 0;
            uStack_1a8 = 0;
            uStack_1ac = 0;
            uStack_1b0 = 0;
            apCStack_188[0] = this_ptr;
            in_stack_fffffdf4 = (CBoundingBox3D *)0x502280;
            uStack_1a0 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x94))();
            (*(((apCStack_3c[0]->base).vtable._uc)->_uc).processDamage)
                      (apCStack_3c[0],(SDamageInfo *)auStack_1d8);
          }
        }
      }
      else {
        dVar13 = __BITCAST_DOUBLE(CONCAT44(out_box,apCStack_3c[3]));
        iVar4 = core_lightpis_cpp_FUN_005016d0(apCStack_3c[3]);
        out_box = (CBoundingBox3D *)((ulonglong)dVar13 >> 0x20);
        if (iVar4 != 0) goto LAB_00501f69;
      }
      iStack_24 = iStack_24 + 1;
      apCStack_2c[1] = (CDemonActor *)(apCStack_2c[1]->actor_name + 4);
    } while( true );
  }
  return 0;
}
