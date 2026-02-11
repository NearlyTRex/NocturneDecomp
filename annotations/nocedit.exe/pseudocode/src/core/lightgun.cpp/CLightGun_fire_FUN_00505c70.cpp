// Name: core_lightgun.cpp_CLightGun_fire_FUN_00505c70
// Address: 00505c70
// Address Range: [[00505c70, 00506442]]
// Convention: __cdecl
// Signature: int __cdecl core_lightgun_cpp_CLightGun_fire_FUN_00505c70(CLightGun *this_ptr)

#include "nocturne.h"

int __cdecl core_lightgun_cpp_CLightGun_fire_FUN_00505c70(CLightGun *this_ptr)

{
  CCharacter *this_ptr_00;
  CCharacter *actor_ptr;
  bool bVar1;
  CDemonSet *this_ptr_01;
  CVector3f *input_local_point;
  float fVar2;
  CBoundingBox3D *pCVar3;
  CDemonActor *actor;
  CTrigger *this_ptr_02;
  int iVar4;
  int iVar5;
  CVector3f *unaff_retaddr;
  double dVar6;
  byte auStack_fc [8];
  int iStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  CBoundingBox3D CStack_d0;
  CBoundingBox3D CStack_b0;
  CVector3f CStack_98;
  CVector3f aCStack_8c [2];
  byte auStack_6c [8];
  float fStack_64;
  float fStack_60;
  byte auStack_50 [12];
  float fStack_44;
  float fStack_40;
  byte auStack_38 [12];
  float fStack_2c;
  CTrigger *pCStack_28;
  int iStack_20;
  int iStack_1c;
  CCharacter *pCStack_18;
  uint uStack_14;
  
  if (*(float *)(this_ptr->unk + 8) < 30.0f) {
    return 0;
  }
  fVar2 = (this_ptr->base).bolt_velocity;
  this_ptr->unk[8] = '\0';
  this_ptr->unk[9] = '\0';
  this_ptr->unk[10] = '\0';
  this_ptr->unk[0xb] = '\0';
  *(float *)(this_ptr->unk + 0x14) = fVar2;
  input_local_point =
       (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,(CVector3f *)(auStack_6c + 4),input_local_point);
  auStack_50._8_4_ = (this_ptr->base).bolt_velocity;
  auStack_50._0_4_ = 0.0;
  auStack_50._4_4_ = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,aCStack_8c,(CVector3f *)auStack_50);
  CStack_98.x = (float)auStack_6c._4_4_ + aCStack_8c[0].x;
  CStack_98.y = fStack_64 + aCStack_8c[0].y;
  CStack_98.z = fStack_60 + aCStack_8c[0].z;
  fStack_2c = (float)1.5 / (this_ptr->base).bolt_velocity;
  CStack_b0.max.x = aCStack_8c[0].x * fStack_2c;
  CStack_b0.max.y = aCStack_8c[0].y * fStack_2c;
  CStack_b0.max.z = aCStack_8c[0].z * fStack_2c;
  auStack_38._0_4_ = (float)auStack_6c._4_4_ - CStack_b0.max.x;
  auStack_38._4_4_ = fStack_64 - CStack_b0.max.y;
  auStack_38._8_4_ = fStack_60 - CStack_b0.max.z;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_FUN_00574170(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  if ((this_ptr->base).carried_by_actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
              (g_CDemonSetPtr,(this_ptr->base).carried_by_actor);
  }
  iVar5 = 0;
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
  do {
    fVar2 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                      (g_CDemonSetPtr,(CVector3f *)auStack_38,&CStack_98);
    dVar6 = (double)fVar2;
    if ((dVar6 < 0.0) || (1.0 < dVar6)) break;
    *(float *)(this_ptr->unk + 0x14) = (this_ptr->base).bolt_velocity * fVar2;
    pCStack_18 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((pCStack_18 != (CCharacter *)0x0) &&
       (iVar4 = (*(((pCStack_18->base).vtable._uc)->_uc).getDeathState)(pCStack_18), 0 < iVar4)) {
      uStack_14 = 0;
    }
    actor = core_actor_cpp_castToClassHash_FUN_0040c790
                      (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_28 = this_ptr_02;
    if (pCStack_18 != (CCharacter *)0x0) {
      iVar4 = (*(((pCStack_18->base).vtable._uc)->_uc).canWalk)(pCStack_18);
      this_ptr_01 = g_CDemonSetPtr;
      if ((iVar4 != 0) && (iVar5 == 0)) {
        *(float *)(this_ptr->unk + 8) = 30.0f;
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(this_ptr_01);
        core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
        return 0;
      }
      break;
    }
    if (actor == (CDemonActor *)0x0) {
      if (this_ptr_02 != (CTrigger *)0x0) {
        core_trigger_cpp_CTrigger_FUN_005e0aa0(this_ptr_02);
        iVar5 = core_trigger_cpp_CTrigger_FUN_005e0ac0(this_ptr_02);
        if (iVar5 != 0) {
          (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                    ((CCharacter *)this_ptr,SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
          core_trigger_cpp_CTrigger_FUN_005e0b00(this_ptr_02);
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&pCStack_28->base);
        break;
      }
    }
    else {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,actor);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 1);
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
  core_lightgun_cpp_CLightGun_FUN_00505ac0(this_ptr);
  iStack_1c = 0;
  iStack_20 = 0;
  do {
    if (g_CDemonSetPtr->damage_listener_count <= iStack_1c) {
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_sound_cpp_CSound_playActorSound_FUN_005b3a40
                (g_CSoundPtr,(CDemonActor *)this_ptr,"cre-fire.wav",
                 (CVector3f *)(auStack_6c + 4));
      sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0(*(uint *)(this_ptr->unk + 4),2.0f);
      this_ptr->unk[0] = '\x01';
      this_ptr->unk[1] = '\0';
      this_ptr->unk[2] = '\0';
      this_ptr->unk[3] = '\0';
      this_ptr->unk[0x10] = '\x01';
      this_ptr->unk[0x11] = '\0';
      this_ptr->unk[0x12] = '\0';
      this_ptr->unk[0x13] = '\0';
      return 1;
    }
    this_ptr_00 = *(CCharacter **)(g_CDemonSetPtr->unk4 + iStack_20 + -4);
    iVar5 = (*(((this_ptr_00->base).vtable._uc)->_uc).canWalk)(this_ptr_00);
    if (((iVar5 == 0) &&
        ((((iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr_00->base,"CGhoul"),
           iVar5 != 0 ||
           (iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr_00->base,"CTVBat"),
           iVar5 != 0)) ||
          (iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr_00->base,"CBatCreature")
          , iVar5 != 0)) ||
         ((iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr_00->base,"CWerewolf"),
          iVar5 != 0 ||
          (iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr_00->base,"CSvetlana"),
          iVar5 != 0)))))) ||
       ((iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr_00->base,"CDraculaBride"),
        iVar5 != 0 ||
        (((iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr_00->base,"CBatman"),
          iVar5 != 0 ||
          (iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr_00->base,"CBatCreature")
          , iVar5 != 0)) ||
         (iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr_00->base,"CBride"),
         iVar5 != 0)))))) {
      (*((this_ptr_00->base).vtable._ub)->getBoundingBox)(&this_ptr_00->base,&CStack_d0);
      iVar5 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
                        (&g_CDemonLightInstance.base,&(this_ptr_00->base).location.position,
                         &(this_ptr_00->base).orient.vec,(CVector3f *)&CStack_d0.min.z);
      if (iVar5 != 0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s in volume\n",this_ptr_00);
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
        pCVar3 = (*((this_ptr_00->base).vtable._ub)->getBoundingBox)(&this_ptr_00->base,&CStack_b0);
        this_ptr = (CLightGun *)&pCVar3->max;
        core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)(auStack_50 + 8));
        auStack_50._8_4_ = (pCVar3->min).x + ((CVector3f *)this_ptr)->x;
        fStack_44 = (pCVar3->min).y + (pCVar3->max).y;
        fStack_40 = (pCVar3->min).z + (pCVar3->max).z;
        core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)(auStack_38 + 8));
        auStack_38._8_4_ = (float)auStack_50._8_4_ * 0.5f;
        fStack_2c = fStack_44 * 0.5f;
        pCStack_28 = (CTrigger *)(fStack_40 * 0.5f);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  (&this_ptr_00->base,(CVector3f *)auStack_6c,(CVector3f *)(auStack_38 + 8));
        iVar5 = 0;
        bVar1 = false;
        do {
          core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                    (g_CDemonSetPtr,unaff_retaddr,(CVector3f *)auStack_6c);
          actor_ptr = (CCharacter *)g_CDemonSetPtr->collision_actor;
          if (actor_ptr == (CCharacter *)0x0) break;
          if (this_ptr_00 == actor_ptr) {
            bVar1 = true;
            break;
          }
          iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0
                            ((CDemonActor *)actor_ptr,"CTrigger || CGlass");
          if (iVar4 == 0) break;
          iVar5 = iVar5 + 1;
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        } while (iVar5 < 3);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
        if (bVar1) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_fc);
          auStack_fc._4_4_ = 0.1;
          CStack_d0.min.y = 1.5134e-43;
          iStack_f4 = 0;
          fStack_e8 = 0.0;
          fStack_ec = 0.0;
          fStack_f0 = 0.0;
          CStack_d0.min.z = (float)this_ptr;
          CStack_d0.max.y =
               (float)(**(code **)((int)pCVar3[0xe].max.y + 0x8c))((CDemonActor *)this_ptr);
          (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)
                    (this_ptr_00,(SDamageInfo *)(auStack_fc + 4));
        }
      }
    }
    iStack_1c = iStack_1c + 1;
    iStack_20 = iStack_20 + 4;
  } while( true );
}
