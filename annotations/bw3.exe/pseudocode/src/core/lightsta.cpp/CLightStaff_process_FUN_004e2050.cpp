// Name: core_lightsta.cpp_CLightStaff_process_FUN_004e2050
// Address: 004e2050
// Address Range: [[004e2050, 004e2d4e] [004e2eb9, 004e3daf]]
// Convention: __cdecl
// Signature: void __cdecl core_lightsta_cpp_CLightStaff_process_FUN_004e2050(CLightStaff *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_lightsta_cpp_CLightStaff_process_FUN_004e2050(CLightStaff *this_ptr,float delta_time)

{
  CDemonGlobe *this_ptr_00;
  CDemonSet *this_ptr_01;
  CDemonActor *pCVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  CCharacter *pCVar5;
  EDeathState EVar6;
  CSkeleton *this_ptr_02;
  int iVar7;
  CLightStaff *pCVar8;
  uint *puVar9;
  CDeformableModelInstance *this_ptr_03;
  CCharacter *unaff_EDI;
  CDemonActor **ppCVar10;
  byte bVar11;
  double dVar12;
  float afStackY_16f0 [967];
  CBoundingBox3D *in_stack_fffff848;
  CVector3f *pCVar13;
  CBoundingBox3D *pCVar14;
  CDemonActor *in_stack_fffff850;
  float in_stack_fffff854;
  byte auStack_774 [52];
  CDemonActor *apCStack_740 [2];
  float fStack_738;
  CLightStaff *pCStack_734;
  float fStack_730;
  CDemonActor *pCStack_72c;
  float fStack_728;
  float fStack_724;
  uint auStack_720 [6];
  uint uStack_708;
  float afStack_704 [4];
  CVector3f CStack_6f4;
  float fStack_6e4;
  float afStack_6e0 [5];
  CVector3f CStack_6cc;
  CVector3f CStack_6c0;
  float afStack_6b4 [2];
  CVector3f aCStack_6ac [2];
  byte auStack_68c [12];
  float fStack_680;
  float fStack_67c;
  CVector3f CStack_678;
  float afStack_66c [2];
  CVector3f CStack_664;
  float fStack_654;
  float fStack_650;
  float fStack_64c;
  float fStack_648;
  float afStack_644 [2];
  byte auStack_63c [12];
  uint uStack_630;
  float fStack_62c;
  float fStack_61c;
  float afStack_618 [5];
  float fStack_604;
  uint uStack_600;
  float afStack_5fc [5];
  CVector3f aCStack_5e8 [2];
  float fStack_5d0;
  float fStack_5cc;
  float afStack_5c8 [4];
  CVector3f CStack_5b8;
  float fStack_5ac;
  CVector3f CStack_5a8;
  byte auStack_598 [8];
  float afStack_590 [4];
  CVector3f aCStack_580 [2];
  CVector3f CStack_568;
  CVector3f CStack_55c;
  float fStack_550;
  float fStack_54c;
  float afStack_548 [4];
  float fStack_538;
  float fStack_534;
  CVector3f CStack_530;
  float afStack_524 [2];
  CVector3f CStack_51c;
  float fStack_508;
  float afStack_504 [5];
  CVector3f CStack_4f0;
  float afStack_4e4 [4];
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  CVector3f CStack_49c;
  float fStack_488;
  float afStack_484 [4];
  float fStack_474;
  float fStack_470;
  CVector3f CStack_46c;
  float fStack_460;
  float afStack_45c [4];
  float fStack_44c;
  CVector3f CStack_440;
  float afStack_434 [2];
  CVector3f CStack_42c;
  float fStack_41c;
  float afStack_418 [4];
  float fStack_408;
  CVector3f CStack_400;
  CVector3f CStack_3f4;
  float fStack_3e8;
  float fStack_3e4;
  float afStack_3e0 [4];
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  CVector3f CStack_3c4;
  float fStack_3b8;
  float afStack_3b4 [4];
  uint uStack_3a4;
  float afStack_3a0 [9];
  uint uStack_37c;
  float afStack_378 [4];
  CVector3f CStack_368;
  float afStack_35c [4];
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  CVector3f CStack_33c;
  float fStack_330;
  float fStack_32c;
  float afStack_328 [4];
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_308;
  float fStack_304;
  float afStack_300 [2];
  CVector3f CStack_2f8;
  uint uStack_2e4;
  float afStack_2e0 [2];
  CVector3f CStack_2d8;
  float fStack_2c8;
  float afStack_2c4 [5];
  CVector3f aCStack_2b0 [2];
  CVector3f CStack_294;
  CVector3f CStack_288;
  float fStack_27c;
  float fStack_278;
  float afStack_274 [7];
  CVector3f CStack_258;
  float fStack_244;
  float afStack_240 [5];
  float fStack_22c;
  float afStack_228 [4];
  uint uStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  CVector3f CStack_204;
  float fStack_1f4;
  float fStack_1f0;
  CVector3f CStack_1ec;
  CVector3f CStack_1e0;
  float fStack_1cc;
  float afStack_1c8 [4];
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  CVector3f CStack_194;
  float fStack_184;
  float fStack_180;
  float afStack_17c [7];
  float fStack_160;
  CVector3f CStack_15c;
  uint uStack_14c;
  uint uStack_144;
  float fStack_140;
  CVector3f aCStack_13c [2];
  byte auStack_124 [8];
  float afStack_11c [4];
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f8;
  float fStack_f4;
  CVector3f CStack_f0;
  byte auStack_e4 [12];
  float afStack_d8 [4];
  float fStack_c8;
  float afStack_c4 [2];
  CVector3f CStack_bc;
  float afStack_b0 [2];
  CVector3f CStack_a8;
  float afStack_9c [2];
  CVector3f CStack_94;
  float fStack_84;
  float fStack_80;
  float afStack_7c [4];
  float afStack_6c [4];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  CCharacter *pCStack_44;
  int iStack_40;
  CCharacter *pCStack_3c;
  float fStack_38;
  CDemonActor *pCStack_34;
  CCharacter *pCStack_30;
  CCharacter *pCStack_2c;
  CCharacter *pCStack_28;
  float fStack_24;
  CCharacter *pCStack_1c;
  int iStack_18;
  CVector3f *pCStack_14;
  
  bVar11 = 0;
  iStack_40 = 1;
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                     ((this_ptr->base).carried_by_actor,g_CHeroClassInfo.name_hash);
  if ((pCVar1 == (CDemonActor *)0x0) ||
     ((this_ptr->base).ammo_per_shot <= *(int *)(pCVar1[0x185].create_event + 0x50))) {
    if (iStack_40 != 0) goto LAB_004e20c0;
  }
  else {
    iStack_40 = 0;
  }
  sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
  this_ptr->sfx_handle = 0;
LAB_004e20c0:
  core_weapon_cpp_CWeapon_process_FUN_0057b160(&this_ptr->base,delta_time);
  if ((fStack_38 != 0.0) &&
     (((this_ptr->base).weapon_state == WEAPON_STATE_IN_HAND ||
      (pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                          ((this_ptr->base).carried_by_actor,g_CEnemyClassInfo.name_hash),
      pCVar1 != (CDemonActor *)0x0)))) {
    fStack_4c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
    pCStack_44 = (CCharacter *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
    fStack_50 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
    pCStack_3c = pCStack_44;
    fStack_48 = fStack_4c;
    (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
    pCVar13 = &CStack_3c4;
    fStack_3c8 = afStack_590[1];
    *(float *)((int)&CStack_3c4 + (uint)bVar11 * -8) = afStack_590[(uint)bVar11 * -2 + 2];
    *(float *)((int)&CStack_3c4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 4) =
         afStack_590[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3];
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
              ((CDemonActor *)this_ptr,pCVar13,aCStack_580);
    fStack_4c0 = aCStack_580[0].x;
    afStack_4e4[(uint)bVar11 * -2 + 10] = *(float *)((int)aCStack_580 + (uint)bVar11 * -8 + 4);
    afStack_4e4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xb] =
         *(float *)((int)aCStack_580 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    fStack_3d0 = fStack_4c0 + fStack_4c;
    fStack_3cc = fStack_4bc + fStack_38;
    fStack_3c8 = fStack_4b8 + (float)pCStack_44;
    fStack_604 = fStack_4c0 + fStack_4c;
    afStack_5fc[(uint)bVar11 * -2 + -1] = afStack_3e0[(uint)bVar11 * -2 + 5];
    afStack_5fc[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
         afStack_3e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 6];
    if ((float *)(auStack_63c + 8) != &fStack_604) {
      auStack_63c._8_4_ = fStack_604;
      uStack_630 = uStack_600;
      fStack_62c = afStack_5fc[0];
    }
    this_ptr_00 = &this_ptr->globe;
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0(this_ptr_00,(CVector3f *)(auStack_63c + 8))
    ;
    fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.5,8.5);
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(this_ptr_00,fVar2);
    fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(20000.0,40000.0);
    in_stack_fffff848 = (CBoundingBox3D *)0x4e22ae;
    dVar12 = round((double)fVar2);
    unaff_EDI = (CCharacter *)(int)ROUND(dVar12);
    (this_ptr->globe).intensity_multiplier = (int)unaff_EDI;
    this_ptr_01 = g_CDemonSetPtr;
    iVar3 = (int)unaff_EDI +
            (((int)unaff_EDI >> 0x1f) * -0x100 - (uint)(((int)unaff_EDI >> 0x1f) << 7 < 0));
    iVar7 = iVar3 >> 0x1f;
    (this_ptr->globe).intensity.bytes[0] =
         (uchar)((int)(((iVar3 >> 8) + iVar7 * -4) - (uint)(iVar7 << 1 < 0)) >> 2);
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(this_ptr_01,this_ptr_00);
    if ((this_ptr->chain_active == 0) &&
       (iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handle), iVar3 == 0)) {
      uVar4 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                        (0x02CF5680,(CDemonActor *)this_ptr,"wp_lightningstaff_loop.wav",
                         &(this_ptr->base).base.location.position);
      this_ptr->sfx_handle = uVar4;
    }
  }
  if (this_ptr->chain_active == 0) {
    if (fStack_38 != 0.0) {
      if (((this_ptr->base).weapon_state != WEAPON_STATE_IN_HAND) &&
         (pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                             ((this_ptr->base).carried_by_actor,g_CEnemyClassInfo.name_hash),
         pCVar1 == (CDemonActor *)0x0)) {
        return;
      }
      this_ptr->flicker_timer = this_ptr->flicker_timer - delta_time;
      if (this_ptr->flicker_timer <= 0.0) {
        this_ptr->flicker_timer = 0.1;
        iVar3 = this_ptr->flicker_frame + 1;
        this_ptr->flicker_frame = iVar3;
        if (4 < iVar3) {
          this_ptr->flicker_frame = 1;
        }
      }
      switch(this_ptr->flicker_frame) {
      case 0:
        (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
        pCVar13 = &CStack_55c;
        CStack_568.z = CStack_2f8.x;
        *(uint *)((int)&CStack_55c + (uint)bVar11 * -8) =
             *(uint *)((int)&CStack_2f8 + (uint)bVar11 * -8 + 4);
        *(uint *)((int)&CStack_55c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 4) =
             *(uint *)((int)&CStack_2f8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar13,&CStack_94);
        CStack_bc.y = CStack_94.x;
        afStack_b0[(uint)bVar11 * -2 + -1] = *(float *)((int)&CStack_94 + (uint)bVar11 * -8 + 4);
        afStack_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
             *(float *)((int)&CStack_94 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        if (afStack_5c8 + 3 != &CStack_bc.y) {
          afStack_5c8[3] = CStack_bc.y;
          CStack_5b8.x = CStack_bc.z;
          CStack_5b8.y = afStack_b0[0];
        }
        (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
        pCVar13 = &CStack_51c;
        fStack_10c = CStack_530.z;
        afStack_11c[(uint)bVar11 * -2 + 5] = afStack_524[(uint)bVar11 * -2];
        afStack_11c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 6] =
             afStack_524[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        fStack_84 = fStack_108 + _DAT_005c6a8a;
        fStack_80 = fStack_104 + _DAT_005c6a8e;
        afStack_7c[0] = fStack_100 + _DAT_005c6a92;
        CStack_51c.x = fStack_108 + _DAT_005c6a8a;
        *(float *)((int)&CStack_51c + (uint)bVar11 * -8 + 4) = afStack_7c[(uint)bVar11 * -2 + -1];
        *(float *)((int)&CStack_51c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             afStack_7c[(uint)bVar11 * -2 + (uint)bVar11 * -2];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar13,(CVector3f *)(auStack_124 + 4));
        CStack_4f0.y = (float)auStack_124._4_4_;
        afStack_4e4[(uint)bVar11 * -2 + -1] = afStack_11c[(uint)bVar11 * -2];
        afStack_4e4[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
             afStack_11c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        if (&CStack_33c != (CVector3f *)&CStack_4f0.y) {
          CStack_33c.x = CStack_4f0.y;
          CStack_33c.y = CStack_4f0.z;
          CStack_33c.z = afStack_4e4[0];
        }
        break;
      case 1:
        (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
        pCVar13 = (CVector3f *)(auStack_e4 + 8);
        afStack_45c[1] = fStack_61c;
        afStack_45c[(uint)bVar11 * -2 + 2] = afStack_618[(uint)bVar11 * -2];
        afStack_45c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3] =
             afStack_618[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        fStack_3e8 = afStack_45c[2] + _DAT_005c6a8a;
        fStack_3e4 = afStack_45c[3] + _DAT_005c6a8e;
        afStack_3e0[0] = fStack_44c + _DAT_005c6a92;
        auStack_e4._8_4_ = afStack_45c[2] + _DAT_005c6a8a;
        afStack_d8[(uint)bVar11 * -2] = afStack_3e0[(uint)bVar11 * -2 + -1];
        afStack_d8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_3e0[(uint)bVar11 * -2 + (uint)bVar11 * -2];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar13,&CStack_6f4);
        afStack_4e4[3] = CStack_6f4.x;
        afStack_4e4[(uint)bVar11 * -2 + 4] = *(float *)((int)&CStack_6f4 + (uint)bVar11 * -8 + 4);
        afStack_4e4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5] =
             *(float *)((int)&CStack_6f4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        if (afStack_5c8 + 3 != afStack_4e4 + 3) {
          afStack_5c8[3] = afStack_4e4[3];
          CStack_5b8.x = fStack_4d4;
          CStack_5b8.y = fStack_4d0;
        }
        (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
        pCVar13 = &CStack_a8;
        afStack_11c[1] = (float)uStack_708;
        afStack_11c[(uint)bVar11 * -2 + 2] = afStack_704[(uint)bVar11 * -2];
        afStack_11c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3] =
             afStack_704[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        fStack_5d0 = afStack_11c[2] + _DAT_005c6a9e;
        fStack_5cc = afStack_11c[3] + _DAT_005c6aa2;
        afStack_5c8[0] = fStack_10c + _DAT_005c6a92;
        CStack_a8.x = afStack_11c[2] + _DAT_005c6a9e;
        afStack_9c[(uint)bVar11 * -2 + -2] = afStack_5c8[(uint)bVar11 * -2 + -1];
        afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1] =
             afStack_5c8[(uint)bVar11 * -2 + (uint)bVar11 * -2];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar13,aCStack_5e8);
        CStack_258.x = aCStack_5e8[0].x;
        *(uint *)((int)&CStack_258 + ((uint)bVar11 * -2 + -1) * 4 + 8) =
             *(uint *)((int)aCStack_5e8 + (uint)bVar11 * -8 + 4);
        *(uint *)((int)&CStack_258 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8) =
             *(uint *)((int)aCStack_5e8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        if (&CStack_33c != (CVector3f *)(afStack_274 + 7)) {
          CStack_33c.x = CStack_258.x;
          CStack_33c.y = CStack_258.y;
          CStack_33c.z = CStack_258.z;
        }
        break;
      case 2:
        (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
        pCVar13 = &CStack_46c;
        fStack_1ac = afStack_274[3];
        afStack_1c8[(uint)bVar11 * -2 + 8] = afStack_274[(uint)bVar11 * -2 + 4];
        afStack_1c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 9] =
             afStack_274[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5];
        fStack_34c = fStack_1a8 + _DAT_005c6a9e;
        fStack_348 = fStack_1a4 + _DAT_005c6aa2;
        fStack_344 = fStack_1a0 + _DAT_005c6a92;
        CStack_46c.x = fStack_1a8 + _DAT_005c6a9e;
        *(float *)((int)&CStack_46c + (uint)bVar11 * -8 + 4) = afStack_35c[(uint)bVar11 * -2 + 5];
        *(float *)((int)&CStack_46c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             afStack_35c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 6];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar13,&CStack_49c);
        fStack_460 = CStack_49c.x;
        afStack_45c[(uint)bVar11 * -2] = *(float *)((int)&CStack_49c + (uint)bVar11 * -8 + 4);
        afStack_45c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             *(float *)((int)&CStack_49c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        if (afStack_5c8 + 3 != &fStack_460) {
          afStack_5c8[3] = fStack_460;
          CStack_5b8.x = afStack_45c[0];
          CStack_5b8.y = afStack_45c[1];
        }
        (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
        pCVar13 = &CStack_42c;
        afStack_328[3] = afStack_6e0[2];
        afStack_328[(uint)bVar11 * -2 + 4] = afStack_6e0[(uint)bVar11 * -2 + 3];
        afStack_328[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5] =
             afStack_6e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        fStack_6e4 = fStack_318 + _DAT_005c6a96;
        afStack_6e0[0] = fStack_314 + _DAT_005c6a9a;
        afStack_6e0[1] = fStack_310 + _DAT_005c6a92;
        CStack_42c.x = fStack_318 + _DAT_005c6a96;
        *(float *)((int)&CStack_42c + (uint)bVar11 * -8 + 4) = afStack_6e0[(uint)bVar11 * -2];
        *(float *)((int)&CStack_42c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             afStack_6e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar13,&CStack_6cc);
        CStack_1e0.x = CStack_6cc.x;
        *(uint *)((int)&CStack_1e0 + ((uint)bVar11 * -2 + -1) * 4 + 8) =
             *(uint *)((int)&CStack_6cc + (uint)bVar11 * -8 + 4);
        *(uint *)((int)&CStack_1e0 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8) =
             *(uint *)((int)&CStack_6cc + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        if (&CStack_33c != &CStack_1e0) {
          CStack_33c.x = CStack_1e0.x;
          CStack_33c.y = CStack_1e0.y;
          CStack_33c.z = CStack_1e0.z;
        }
        break;
      case 3:
        (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
        pCVar13 = &CStack_3f4;
        fStack_4b8 = CStack_6c0.z;
        afStack_4e4[(uint)bVar11 * -2 + 0xc] = afStack_6b4[(uint)bVar11 * -2];
        afStack_4e4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
             afStack_6b4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        CStack_400.x = fStack_4b4 + _DAT_005c6a96;
        CStack_400.y = fStack_4b0 + _DAT_005c6a9a;
        CStack_400.z = fStack_4ac + _DAT_005c6a92;
        CStack_3f4.x = fStack_4b4 + _DAT_005c6a96;
        *(uint *)((int)&CStack_3f4 + (uint)bVar11 * -8 + 4) =
             *(uint *)((int)&CStack_400 + (uint)bVar11 * -8 + 4);
        *(uint *)((int)&CStack_3f4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             *(uint *)((int)&CStack_400 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar13,aCStack_6ac);
        fStack_184 = aCStack_6ac[0].x;
        afStack_17c[(uint)bVar11 * -2 + -1] = *(float *)((int)aCStack_6ac + (uint)bVar11 * -8 + 4);
        afStack_17c[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
             *(float *)((int)aCStack_6ac + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        if (afStack_5c8 + 3 != &fStack_184) {
          afStack_5c8[3] = fStack_184;
          CStack_5b8.x = fStack_180;
          CStack_5b8.y = afStack_17c[0];
        }
        (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
        pCVar13 = &CStack_f0;
        fStack_3b8 = CStack_568.y;
        afStack_3b4[(uint)bVar11 * -2] = *(float *)((int)&CStack_568 + (uint)bVar11 * -8 + 8);
        afStack_3b4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             *(float *)((int)&CStack_55c + (uint)bVar11 * -8 + (uint)bVar11 * -8);
        afStack_240[0] = afStack_3b4[0] + _DAT_005c6a7e;
        afStack_240[1] = afStack_3b4[1] + _DAT_005c6a82;
        afStack_240[2] = afStack_3b4[2] + _DAT_005c6a86;
        CStack_f0.x = afStack_3b4[0] + _DAT_005c6a7e;
        *(float *)((int)&CStack_f0 + (uint)bVar11 * -8 + 4) = afStack_240[(uint)bVar11 * -2 + 1];
        *(float *)((int)&CStack_f0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             afStack_240[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar13,&CStack_204);
        CStack_15c.x = CStack_204.x;
        *(uint *)((int)&CStack_15c + ((uint)bVar11 * -2 + -1) * 4 + 8) =
             *(uint *)((int)&CStack_204 + (uint)bVar11 * -8 + 4);
        *(uint *)((int)&CStack_15c + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8) =
             *(uint *)((int)&CStack_204 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        if (&CStack_33c != &CStack_15c) {
          CStack_33c.x = CStack_15c.x;
          CStack_33c.y = CStack_15c.y;
          CStack_33c.z = CStack_15c.z;
        }
        break;
      case 4:
        (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
        pCVar13 = aCStack_13c;
        afStack_484[2] = CStack_678.z;
        afStack_484[(uint)bVar11 * -2 + 3] = afStack_66c[(uint)bVar11 * -2];
        afStack_484[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
             afStack_66c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        CStack_440.y = afStack_484[3] + _DAT_005c6a7e;
        CStack_440.z = fStack_474 + _DAT_005c6a82;
        afStack_434[0] = fStack_470 + _DAT_005c6a86;
        aCStack_13c[0].x = afStack_484[3] + _DAT_005c6a7e;
        *(float *)((int)aCStack_13c + (uint)bVar11 * -8 + 4) = afStack_434[(uint)bVar11 * -2 + -1];
        *(float *)((int)aCStack_13c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             afStack_434[(uint)bVar11 * -2 + (uint)bVar11 * -2];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar13,&CStack_664);
        CStack_368.y = CStack_664.x;
        afStack_35c[(uint)bVar11 * -2 + -1] = *(float *)((int)&CStack_664 + (uint)bVar11 * -8 + 4);
        afStack_35c[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
             *(float *)((int)&CStack_664 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        if (afStack_5c8 + 3 != &CStack_368.y) {
          afStack_5c8[3] = CStack_368.y;
          CStack_5b8.x = CStack_368.z;
          CStack_5b8.y = afStack_35c[0];
        }
        (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
        pCVar13 = (CVector3f *)(auStack_598 + 4);
        CStack_a8.z = fStack_648;
        afStack_9c[(uint)bVar11 * -2] = afStack_644[(uint)bVar11 * -2];
        afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_644[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        afStack_3e0[2] = afStack_9c[0] + _DAT_005c6a8a;
        afStack_3e0[3] = afStack_9c[1] + _DAT_005c6a8e;
        fStack_3d0 = CStack_94.x + _DAT_005c6a92;
        auStack_598._4_4_ = afStack_9c[0] + _DAT_005c6a8a;
        afStack_590[(uint)bVar11 * -2] = afStack_3e0[(uint)bVar11 * -2 + 3];
        afStack_590[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_3e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar13,(CVector3f *)auStack_63c);
        auStack_e4._0_4_ = auStack_63c._0_4_;
        *(uint *)(auStack_e4 + (uint)bVar11 * -8 + 4) =
             *(uint *)(auStack_63c + (uint)bVar11 * -8 + 4);
        *(uint *)(auStack_e4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             *(uint *)(auStack_63c + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8);
        if (&CStack_33c != (CVector3f *)auStack_e4) {
          CStack_33c.x = (float)auStack_e4._0_4_;
          CStack_33c.y = (float)auStack_e4._4_4_;
          CStack_33c.z = (float)auStack_e4._8_4_;
        }
      }
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                (0x01C73654,&CStack_5b8,&CStack_33c,0,0.25,0.25,3,0.01,0xffff);
      iVar3 = this_ptr->flicker_frame;
      if ((iVar3 == 1) || (iVar3 - 1U < 5)) {
        switch(iVar3) {
        case 2:
          (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
          pCVar13 = &CStack_5a8;
          uStack_144 = uStack_14c;
          *(uint *)((int)&CStack_15c + ((uint)bVar11 * -2 + 5) * 4 + 8) =
               *(uint *)((int)&CStack_15c + ((uint)bVar11 * -2 + 3) * 4 + 8);
          *(uint *)((int)aCStack_13c + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4) =
               *(uint *)
                ((int)&CStack_15c + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 4) * 4 + 8);
          fStack_308 = fStack_140 + _DAT_005c6a8a;
          fStack_304 = aCStack_13c[0].x + _DAT_005c6a8e;
          afStack_300[0] = aCStack_13c[0].y + _DAT_005c6a92;
          CStack_5a8.x = fStack_140 + _DAT_005c6a8a;
          *(float *)((int)&CStack_5a8 + (uint)bVar11 * -8 + 4) = afStack_300[(uint)bVar11 * -2 + -1]
          ;
          *(float *)((int)&CStack_5a8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
               afStack_300[(uint)bVar11 * -2 + (uint)bVar11 * -2];
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    ((CDemonActor *)this_ptr,pCVar13,&CStack_368);
          afStack_228[1] = CStack_368.x;
          afStack_228[(uint)bVar11 * -2 + 2] = afStack_35c[(uint)bVar11 * -2 + -2];
          afStack_228[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3] =
               afStack_35c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1];
          if (&CStack_5b8.y != afStack_228 + 1) {
            CStack_5b8.y = afStack_228[1];
            CStack_5b8.z = afStack_228[2];
            fStack_5ac = afStack_228[3];
          }
          (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
          pCVar13 = &CStack_568;
          uStack_218 = uStack_37c;
          afStack_228[(uint)bVar11 * -2 + 5] = afStack_378[(uint)bVar11 * -2];
          afStack_228[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 6] =
               afStack_378[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          fStack_508 = fStack_214 + _DAT_005c6a9e;
          afStack_504[0] = fStack_210 + _DAT_005c6aa2;
          afStack_504[1] = fStack_20c + _DAT_005c6a92;
          CStack_568.x = fStack_214 + _DAT_005c6a9e;
          *(float *)((int)&CStack_568 + (uint)bVar11 * -8 + 4) = afStack_504[(uint)bVar11 * -2];
          *(float *)((int)&CStack_568 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
               afStack_504[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    ((CDemonActor *)this_ptr,pCVar13,(CVector3f *)auStack_598);
          fStack_538 = (float)auStack_598._0_4_;
          (&fStack_534)[(uint)bVar11 * -2] = afStack_590[(uint)bVar11 * -2 + -1];
          afStack_524[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -3] =
               afStack_590[(uint)bVar11 * -2 + (uint)bVar11 * -2];
          if (&CStack_33c.z != &fStack_538) {
            CStack_33c.z = fStack_538;
            fStack_330 = fStack_534;
            fStack_32c = CStack_530.x;
          }
          break;
        case 3:
          (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
          pCVar13 = &CStack_530;
          fStack_1b0 = fStack_32c;
          afStack_1c8[(uint)bVar11 * -2 + 7] = afStack_328[(uint)bVar11 * -2];
          afStack_1c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 8] =
               afStack_328[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          fStack_1f4 = fStack_1ac + _DAT_005c6a9e;
          fStack_1f0 = fStack_1a8 + _DAT_005c6aa2;
          CStack_1ec.x = fStack_1a4 + _DAT_005c6a92;
          CStack_530.x = fStack_1ac + _DAT_005c6a9e;
          afStack_524[(uint)bVar11 * -2 + -2] = (&fStack_1f0)[(uint)bVar11 * -2];
          afStack_524[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1] =
               *(float *)((int)&CStack_1ec + (uint)bVar11 * -8 + (uint)bVar11 * -8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    ((CDemonActor *)this_ptr,pCVar13,&CStack_194);
          afStack_504[1] = CStack_194.x;
          afStack_504[(uint)bVar11 * -2 + 2] = *(float *)((int)&CStack_194 + (uint)bVar11 * -8 + 4);
          afStack_504[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3] =
               *(float *)((int)&CStack_194 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          if (&CStack_5b8.y != afStack_504 + 1) {
            CStack_5b8.y = afStack_504[1];
            CStack_5b8.z = afStack_504[2];
            fStack_5ac = afStack_504[3];
          }
          (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
          pCVar13 = &CStack_4f0;
          fStack_5c = fStack_160;
          afStack_6c[(uint)bVar11 * -2 + 5] = *(float *)((int)&CStack_15c + (uint)bVar11 * -8);
          afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 6] =
               *(float *)((int)&CStack_15c + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + -1) * 4 + 8);
          fStack_22c = fStack_58 + _DAT_005c6a96;
          afStack_228[0] = fStack_54 + _DAT_005c6a9a;
          afStack_228[1] = fStack_50 + _DAT_005c6a92;
          CStack_4f0.x = fStack_58 + _DAT_005c6a96;
          afStack_4e4[(uint)bVar11 * -2 + -2] = afStack_228[(uint)bVar11 * -2];
          afStack_4e4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1] =
               afStack_228[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    ((CDemonActor *)this_ptr,pCVar13,&CStack_2f8);
          afStack_6c[2] = CStack_2f8.x;
          afStack_6c[(uint)bVar11 * -2 + 3] = *(float *)((int)&CStack_2f8 + (uint)bVar11 * -8 + 4);
          afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
               *(float *)((int)&CStack_2f8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          if (&CStack_33c.z != afStack_6c + 2) {
            CStack_33c.z = afStack_6c[2];
            fStack_330 = afStack_6c[3];
            fStack_32c = fStack_5c;
          }
          break;
        case 4:
          (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
          pCVar13 = &CStack_bc;
          afStack_1c8[3] = (float)uStack_2e4;
          afStack_1c8[(uint)bVar11 * -2 + 4] = afStack_2e0[(uint)bVar11 * -2];
          afStack_1c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5] =
               afStack_2e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          afStack_418[2] = fStack_1b8 + _DAT_005c6a96;
          afStack_418[3] = fStack_1b4 + _DAT_005c6a9a;
          fStack_408 = fStack_1b0 + _DAT_005c6a92;
          CStack_bc.x = fStack_1b8 + _DAT_005c6a96;
          afStack_b0[(uint)bVar11 * -2 + -2] = afStack_418[(uint)bVar11 * -2 + 3];
          afStack_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1] =
               afStack_418[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    ((CDemonActor *)this_ptr,pCVar13,&CStack_2d8);
          fStack_488 = CStack_2d8.x;
          afStack_484[(uint)bVar11 * -2] = *(float *)((int)&CStack_2d8 + (uint)bVar11 * -8 + 4);
          afStack_484[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               *(float *)((int)&CStack_2d8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          if (&CStack_5b8.y != &fStack_488) {
            CStack_5b8.y = fStack_488;
            CStack_5b8.z = afStack_484[0];
            fStack_5ac = afStack_484[1];
          }
          (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
          pCVar13 = (CVector3f *)auStack_124;
          uStack_3a4 = afStack_2c4[2];
          afStack_3a0[(uint)bVar11 * -2] = afStack_2c4[(uint)bVar11 * -2 + 3];
          afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               afStack_2c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
          fStack_244 = afStack_3a0[0] + _DAT_005c6a7e;
          afStack_240[0] = afStack_3a0[1] + _DAT_005c6a82;
          afStack_240[1] = afStack_3a0[2] + _DAT_005c6a86;
          auStack_124._0_4_ = afStack_3a0[0] + _DAT_005c6a7e;
          afStack_11c[(uint)bVar11 * -2 + -1] = afStack_240[(uint)bVar11 * -2];
          afStack_11c[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
               afStack_240[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    ((CDemonActor *)this_ptr,pCVar13,aCStack_2b0);
          afStack_7c[3] = aCStack_2b0[0].x;
          afStack_6c[(uint)bVar11 * -2] = *(float *)((int)aCStack_2b0 + (uint)bVar11 * -8 + 4);
          afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               *(float *)((int)aCStack_2b0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          if (&CStack_33c.z != afStack_7c + 3) {
            CStack_33c.z = afStack_7c[3];
            fStack_330 = afStack_6c[0];
            fStack_32c = afStack_6c[1];
          }
          break;
        default:
          (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
          pCVar13 = &CStack_440;
          CStack_288.x = fStack_f8;
          *(float *)((int)&CStack_288 + (uint)bVar11 * -8 + 4) = (&fStack_f4)[(uint)bVar11 * -2];
          *(uint *)((int)&CStack_288 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8) =
               *(uint *)((int)&CStack_f0 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
          fStack_278 = CStack_288.y + _DAT_005c6a7e;
          afStack_274[0] = CStack_288.z + _DAT_005c6a82;
          afStack_274[1] = fStack_27c + _DAT_005c6a86;
          CStack_440.x = CStack_288.y + _DAT_005c6a7e;
          afStack_434[(uint)bVar11 * -2 + -2] = afStack_274[(uint)bVar11 * -2];
          afStack_434[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1] =
               afStack_274[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    ((CDemonActor *)this_ptr,pCVar13,(CVector3f *)auStack_68c);
          fStack_41c = (float)auStack_68c._0_4_;
          afStack_418[(uint)bVar11 * -2] = *(float *)(auStack_68c + (uint)bVar11 * -8 + 4);
          afStack_418[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               *(float *)(auStack_68c + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8);
          if (&CStack_5b8.y != &fStack_41c) {
            CStack_5b8.y = fStack_41c;
            CStack_5b8.z = afStack_418[0];
            fStack_5ac = afStack_418[1];
          }
          (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
          pCVar13 = &CStack_400;
          fStack_c8 = CStack_294.z;
          afStack_c4[(uint)bVar11 * -2] = *(float *)((int)&CStack_288 + (uint)bVar11 * -8);
          afStack_c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               *(float *)((int)&CStack_288 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 4);
          fStack_2c8 = afStack_c4[0] + _DAT_005c6a8a;
          afStack_2c4[0] = afStack_c4[1] + _DAT_005c6a8e;
          afStack_2c4[1] = CStack_bc.x + _DAT_005c6a92;
          CStack_400.x = afStack_c4[0] + _DAT_005c6a8a;
          *(float *)((int)&CStack_400 + (uint)bVar11 * -8 + 4) = afStack_2c4[(uint)bVar11 * -2];
          *(float *)((int)&CStack_400 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8) =
               afStack_2c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    ((CDemonActor *)this_ptr,pCVar13,&CStack_6f4);
          fStack_1cc = CStack_6f4.x;
          afStack_1c8[(uint)bVar11 * -2] = *(float *)((int)&CStack_6f4 + (uint)bVar11 * -8 + 4);
          afStack_1c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               *(float *)((int)&CStack_6f4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          if (&CStack_33c.z != &fStack_1cc) {
            CStack_33c.z = fStack_1cc;
            fStack_330 = afStack_1c8[0];
            fStack_32c = afStack_1c8[1];
          }
        }
      }
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                (0x01C73654,&CStack_5b8,&CStack_33c,0,0.25,0.25,3,0.01,0xffff);
      return;
    }
  }
  else {
    this_ptr->chain_timer = this_ptr->chain_timer - delta_time;
    if (this_ptr->chain_timer <= 0.0) {
      if (2 < this_ptr->chain_count) {
        this_ptr->chain_active = 0;
        return;
      }
      pCStack_14 = &this_ptr->chain_pos;
      this_ptr->chain_timer = 0.1;
      pCStack_2c = (CCharacter *)0x41700000;
      pCStack_34 = (CDemonActor *)0x0;
      pCStack_1c = (CCharacter *)0x0;
      iStack_18 = 0;
      this_ptr->chain_count = this_ptr->chain_count + 1;
      for (; (int)pCStack_1c < g_CDemonSetPtr->actor_count;
          pCStack_1c = (CCharacter *)((pCStack_1c->base).actor_name + 1)) {
        pCVar5 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_18),
                            g_CCharacterClassInfo.name_hash);
        pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                           ((CDemonActor *)pCVar5,g_CTVBatClassInfo.name_hash);
        if (((pCVar1 == (CDemonActor *)0x0) && (pCVar5 != (CCharacter *)0x0)) &&
           (EVar6 = (*(((pCVar5->base).vtable._uc)->_uc).getDeathState)(pCVar5),
           EVar6 == DEATH_STATE_ALIVE)) {
          in_stack_fffff848 = (CBoundingBox3D *)g_CEnemyClassInfo.name_hash;
          pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                             ((CDemonActor *)pCVar5,g_CEnemyClassInfo.name_hash);
          pCVar14 = (CBoundingBox3D *)&stack0xfffff84c;
          if (pCVar1 != (CDemonActor *)0x0) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffff84c);
            fStack_550 = *(float *)(pCVar5->base).actor_name - (pCVar5->base).location.position.x;
            fStack_54c = *(float *)((pCVar5->base).actor_name + 4) -
                         (pCVar5->base).location.position.y;
            afStack_548[0] =
                 *(float *)((pCVar5->base).actor_name + 8) - (pCVar5->base).location.position.z;
            afStack_484[0] = fStack_550;
            afStack_484[(uint)bVar11 * -2 + 1] = afStack_548[(uint)bVar11 * -2 + -1];
            afStack_484[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2] =
                 afStack_548[(uint)bVar11 * -2 + (uint)bVar11 * -2];
            if (afStack_4e4 + 0xf != afStack_484) {
              fStack_4a8 = afStack_484[0];
              fStack_4a4 = afStack_484[1];
              fStack_4a0 = afStack_484[2];
            }
            pCStack_3c = (CCharacter *)
                         SQRT(fStack_4a0 * fStack_4a0 +
                              fStack_4a8 * fStack_4a8 + fStack_4a4 * fStack_4a4);
            iVar3 = 0;
            pCVar8 = this_ptr;
            in_stack_fffff848 = pCVar14;
            pCStack_2c = pCStack_3c;
            if (0 < this_ptr->chain_count) {
              do {
                if (unaff_EDI == pCVar8->chain_targets[0]) goto LAB_004e25da;
                iVar3 = iVar3 + 1;
                pCVar8 = (CLightStaff *)((pCVar8->base).base.actor_name + 4);
              } while (iVar3 < this_ptr->chain_count);
            }
            if ((float)pCStack_3c < (float)pCStack_28) {
              pCStack_30 = unaff_EDI;
              pCStack_28 = pCStack_3c;
            }
          }
        }
LAB_004e25da:
        iStack_18 = iStack_18 + 4;
      }
      if (pCStack_34 == (CDemonActor *)0x0) {
        this_ptr->chain_active = 0;
      }
      else {
        (*((pCStack_34->vtable)._ub)->getBoundingBox)(pCStack_34,in_stack_fffff848);
        puVar9 = auStack_720;
        ppCVar10 = apCStack_740;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppCVar10 = (CDemonActor *)*puVar9;
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          ppCVar10 = ppCVar10 + (uint)bVar11 * -2 + 1;
        }
        afStack_274[1] = fStack_738 + (float)pCStack_72c;
        afStack_274[2] = (float)pCStack_734 + fStack_728;
        afStack_274[3] = fStack_730 + fStack_724;
        afStack_4e4[1] = fStack_738 + (float)pCStack_72c;
        afStack_4e4[(uint)bVar11 * -2 + 2] = afStack_274[(uint)bVar11 * -2 + 2];
        afStack_4e4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3] =
             afStack_274[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3];
        fStack_4c8 = afStack_4e4[1] * _DAT_005c6aa2;
        fStack_4c4 = afStack_4e4[2] * _DAT_005c6aa2;
        fStack_4c0 = afStack_4e4[3] * _DAT_005c6aa2;
        afStack_378[0] = afStack_4e4[1] * _DAT_005c6aa2;
        afStack_378[(uint)bVar11 * -2 + 1] = afStack_4e4[(uint)bVar11 * -2 + 8];
        afStack_378[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2] =
             afStack_4e4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 9];
        if (&fStack_654 != afStack_378) {
          fStack_654 = afStack_378[0];
          fStack_650 = afStack_378[1];
          fStack_64c = afStack_378[2];
        }
        afStack_1c8[0] = (pCStack_2c->base).location.position.x + fStack_654;
        afStack_1c8[1] = (pCStack_2c->base).location.position.y + fStack_650;
        afStack_1c8[2] = (pCStack_2c->base).location.position.z + fStack_64c;
        afStack_35c[2] = afStack_1c8[0];
        afStack_35c[(uint)bVar11 * -2 + 3] = afStack_1c8[(uint)bVar11 * -2 + 1];
        afStack_35c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
             afStack_1c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2];
        if ((float *)(auStack_68c + 8) != afStack_35c + 2) {
          auStack_68c._8_4_ = afStack_35c[2];
          fStack_680 = afStack_35c[3];
          fStack_67c = fStack_34c;
        }
        fStack_680 = fStack_650 * _DAT_005c6aa2 + fStack_680;
        this_ptr_03 = &pCStack_2c->model;
        if ((((pCStack_2c->model).model_name[0] != '\0') &&
            (this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                                     (this_ptr_03), this_ptr_02 != (CSkeleton *)0x0)) &&
           (iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                              (this_ptr_02,"Bip01 Head",1), -1 < iVar3)) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                    (this_ptr_03,iVar3,&CStack_1ec);
          pCVar5 = pCStack_2c;
          pCVar13 = &CStack_6c0;
          CStack_6c0.x = CStack_1ec.x;
          afStack_6b4[(uint)bVar11 * -2 + -2] = *(float *)((int)&CStack_1ec + (uint)bVar11 * -8 + 4)
          ;
          afStack_6b4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1] =
               *(float *)((int)&CStack_1ec + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    (&pCVar5->base,pCVar13,&CStack_678);
          fStack_210 = CStack_678.x;
          afStack_228[(uint)bVar11 * -2 + 7] = afStack_66c[(uint)bVar11 * -2 + -2];
          afStack_228[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 8] =
               afStack_66c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1];
          if (afStack_328 + 1 != &fStack_210) {
            afStack_328[1] = fStack_210;
            afStack_328[2] = fStack_20c;
            afStack_328[3] = fStack_208;
          }
          if ((afStack_328[2] < fStack_680) && ((float *)(auStack_68c + 8) != afStack_328 + 1)) {
            auStack_68c._8_4_ = afStack_328[1];
            fStack_680 = afStack_328[2];
            fStack_67c = afStack_328[3];
          }
        }
        pCVar13 = &this_ptr->chain_pos;
        core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                  (0x01C73654,pCVar13,(CVector3f *)(auStack_68c + 8),0,0.75,0.75,3,0.25,0xffff);
        core_sound_cpp_CSound_playActorSound_FUN_005609d0
                  (0x02CF5680,(CDemonActor *)this_ptr,"wp_lightningstaff_arc.wav",pCVar13)
        ;
        pCStack_2c->bind_time = 1.0;
        pCStack_2c->bind_type = 1;
        this_ptr->chain_targets[this_ptr->chain_count] = pCStack_2c;
        if (pCVar13 != (CVector3f *)(auStack_68c + 8)) {
          pCVar13->x = (float)auStack_68c._8_4_;
          (this_ptr->chain_pos).y = fStack_680;
          (this_ptr->chain_pos).z = fStack_67c;
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)auStack_774);
        auStack_774._16_4_ =
             (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                       ((CCharacter *)this_ptr,in_stack_fffff850,(int)in_stack_fffff854);
        apCStack_740[0] = (CDemonActor *)(this_ptr->base).ammo_type;
        pCStack_734 = this_ptr;
        pCStack_72c = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
        (*(((pCStack_1c->base).vtable._uc)->_uc).processDamage)
                  (pCStack_1c,(SDamageInfo *)(auStack_774 + 0x10));
        iVar3 = 0;
        do {
          fStack_24 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
          pCStack_2c = (CCharacter *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,10.0);
          CStack_15c.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
          CStack_15c.y = (float)pCStack_2c;
          CStack_15c.z = fStack_24;
          if (&CStack_288 != &CStack_15c) {
            CStack_288.y = (float)pCStack_2c;
            CStack_288.z = fStack_24;
            CStack_288.x = CStack_15c.x;
          }
          iVar3 = iVar3 + 1;
          core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                    (0x01C73654,&CStack_294,&CStack_288,0x20000,0x10000,1,0xffff);
        } while (iVar3 < 0x10);
      }
    }
  }
  return;
}
