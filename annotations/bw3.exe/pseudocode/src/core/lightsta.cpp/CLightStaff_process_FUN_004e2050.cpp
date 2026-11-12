// Name: core_lightsta.cpp_CLightStaff_process_FUN_004e2050
// Address: 004e2050
// Address Range: [[004e2050, 004e2b8d] [004e2cff, 004e2d4e] [004e2eb9, 004e2f51] [004e367a, 004e3daf]]
// Convention: __cdecl
// Signature: void __cdecl core_lightsta_cpp_CLightStaff_process_FUN_004e2050(CLightStaff *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_lightsta_cpp_CLightStaff_process_FUN_004e2050(CLightStaff *this_ptr,float delta_time)

{
  CVector3f *position;
  CDemonSet *this_ptr_00;
  CDemonActor *pCVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  CCharacter *pCVar5;
  EDeathState EVar6;
  CSkeleton *this_ptr_01;
  int iVar7;
  CLightStaff *pCVar8;
  uint *puVar9;
  CDeformableModelInstance *this_ptr_02;
  CCharacter *unaff_EDI;
  CDemonActor **ppCVar10;
  byte bVar11;
  float10 fVar12;
  float afStackY_16f0 [965];
  CBoundingBox3D *in_stack_fffff848;
  float *pfVar13;
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
  float fStack_6f4;
  float fStack_6e4;
  float fStack_6e0;
  float fStack_6dc;
  float fStack_6d8;
  float fStack_6cc;
  uint uStack_6c0;
  float fStack_6b8;
  float fStack_6ac;
  float fStack_694;
  float afStack_690 [3];
  CVector3f CStack_684;
  float fStack_678;
  float afStack_674 [4];
  float fStack_664;
  float fStack_654;
  float fStack_650;
  float fStack_64c;
  uint uStack_648;
  float afStack_644 [4];
  CVector3f aCStack_634 [2];
  uint uStack_61c;
  float afStack_618 [5];
  CVector3f aCStack_604 [2];
  float fStack_5e8;
  float afStack_5e4 [5];
  float fStack_5d0;
  float afStack_5cc [3];
  byte auStack_5c0 [4];
  float fStack_5bc;
  float fStack_5b8;
  uint uStack_5b4;
  float fStack_5b0;
  float afStack_5ac [6];
  float fStack_594;
  uint uStack_58c;
  float fStack_580;
  float fStack_570;
  uint uStack_564;
  uint uStack_560;
  float afStack_55c [3];
  float fStack_550;
  float fStack_54c;
  float fStack_548;
  float fStack_540;
  CCharacter *pCStack_53c;
  float afStack_538 [4];
  float fStack_528;
  float fStack_51c;
  float fStack_510;
  float fStack_50c;
  float fStack_508;
  float fStack_504;
  uint uStack_500;
  float fStack_4f8;
  float fStack_4ec;
  CCharacter *pCStack_4e8;
  float afStack_4e4 [4];
  float fStack_4d4;
  uint uStack_4d0;
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
  float fStack_49c;
  float afStack_498 [4];
  uint uStack_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float fStack_478;
  float fStack_474;
  float fStack_470;
  float afStack_46c [3];
  float fStack_460;
  float fStack_45c;
  uint uStack_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float afStack_448 [3];
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  float fStack_42c;
  float fStack_424;
  float fStack_420;
  uint uStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_408;
  float fStack_400;
  float fStack_3fc;
  float fStack_3f8;
  float afStack_3f4 [3];
  float fStack_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float afStack_3c4 [4];
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  uint uStack_384;
  float afStack_380 [4];
  float fStack_370;
  float fStack_364;
  float fStack_360;
  uint uStack_35c;
  CVector3f CStack_354;
  float fStack_348;
  float afStack_344 [2];
  float fStack_33c;
  CCharacter *pCStack_338;
  float fStack_334;
  float afStack_330 [3];
  CVector3f CStack_324;
  float afStack_318 [4];
  float fStack_308;
  float fStack_300;
  uint uStack_2f8;
  uint uStack_2ec;
  float fStack_2e0;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2b8;
  CVector3f CStack_294;
  CVector3f CStack_288;
  float afStack_27c [4];
  float fStack_26c;
  float fStack_268;
  float fStack_258;
  CCharacter *pCStack_254;
  float afStack_250 [4];
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  uint uStack_224;
  uint uStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  uint uStack_1ec;
  float fStack_1e0;
  CCharacter *pCStack_1dc;
  float afStack_1d8 [2];
  CCharacter *pCStack_1d0;
  float afStack_1cc [4];
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_184;
  float afStack_180 [6];
  float fStack_168;
  float afStack_164 [2];
  CVector3f CStack_15c;
  float afStack_150 [4];
  float fStack_140;
  float afStack_13c [4];
  float fStack_12c;
  float fStack_120;
  uint uStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f0;
  float fStack_e4;
  CCharacter *pCStack_e0;
  float afStack_dc [4];
  float fStack_cc;
  float fStack_c8;
  float afStack_c4 [3];
  float fStack_b8;
  float fStack_b4;
  uint uStack_b0;
  float fStack_a8;
  uint uStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  CCharacter *pCStack_74;
  float afStack_70 [2];
  CCharacter *pCStack_68;
  float afStack_64 [5];
  CCharacter *pCStack_50;
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
    unaff_EDI = (CCharacter *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
    pCStack_3c = pCStack_44;
    fStack_48 = fStack_4c;
    pCStack_50 = unaff_EDI;
    (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
    pfVar13 = afStack_3c4;
    fStack_3c8 = (float)uStack_58c;
    afStack_3c4[(uint)bVar11 * -2] = afStack_5ac[(uint)bVar11 * -2 + 9];
    afStack_3c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_5ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
    core_actor_cpp_FUN_00408b80(this_ptr,pfVar13);
    fStack_4c0 = fStack_580;
    afStack_4e4[(uint)bVar11 * -2 + 10] = afStack_5ac[(uint)bVar11 * -2 + 0xc];
    afStack_4e4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xb] =
         afStack_5ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
    fStack_3d0 = fStack_4c0 + fStack_4c;
    fStack_3cc = fStack_4bc + fStack_38;
    fStack_3c8 = fStack_4b8 + (float)pCStack_44;
    aCStack_604[0].x = fStack_4c0 + fStack_4c;
    *(float *)((int)aCStack_604 + (uint)bVar11 * -8 + 4) = afStack_498[(uint)bVar11 * -2 + 0x33];
    *(float *)((int)aCStack_604 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         afStack_3c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1];
    if (aCStack_634 != aCStack_604) {
      aCStack_634[0].x = aCStack_604[0].x;
      aCStack_634[0].y = aCStack_604[0].y;
      aCStack_634[0].z = aCStack_604[0].z;
    }
    in_stack_fffff848 = (CBoundingBox3D *)&this_ptr->globe;
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0
              ((CDemonGlobe *)in_stack_fffff848,aCStack_634);
    fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.5,8.5);
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30
              ((CDemonGlobe *)in_stack_fffff848,fVar2);
    fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(20000.0,40000.0);
    fVar12 = (float10)fVar2;
    round();
    iVar3 = (int)ROUND(fVar12);
    (this_ptr->globe).intensity_multiplier = iVar3;
    this_ptr_00 = g_CDemonSetPtr;
    iVar3 = (iVar3 + (iVar3 >> 0x1f) * -0x100) - (uint)((iVar3 >> 0x1f) << 7 < 0);
    iVar7 = iVar3 >> 0x1f;
    (this_ptr->globe).intensity.bytes[0] =
         (uchar)((int)(((iVar3 >> 8) + iVar7 * -4) - (uint)(iVar7 << 1 < 0)) >> 2);
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(this_ptr_00,(CDemonGlobe *)in_stack_fffff848)
    ;
    if (this_ptr->chain_active == 0) {
      in_stack_fffff848 = (CBoundingBox3D *)this_ptr->sfx_handle;
      iVar3 = sound_sndmain_cpp_FUN_00556700((uint)in_stack_fffff848);
      if (iVar3 == 0) {
        in_stack_fffff848 = (CBoundingBox3D *)&(this_ptr->base).base.location;
        uVar4 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                          (0x02CF5680,(CDemonActor *)this_ptr,"wp_lightningstaff_loop.wav",
                           (CVector3f *)in_stack_fffff848);
        this_ptr->sfx_handle = uVar4;
      }
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
        pfVar13 = afStack_5ac + 0x14;
        uStack_560 = uStack_2f8;
        afStack_5ac[(uint)bVar11 * -2 + 0x14] = afStack_318[(uint)bVar11 * -2 + 9];
        afStack_5ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x15] =
             afStack_318[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar13);
        fStack_b8 = fStack_94;
        afStack_dc[(uint)bVar11 * -2 + 10] = afStack_dc[(uint)bVar11 * -2 + 0x13];
        afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xb] =
             afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x14];
        if (&fStack_5bc != afStack_dc + 9) {
          fStack_5bc = fStack_b8;
          fStack_5b8 = fStack_b4;
          uStack_5b4 = uStack_b0;
        }
        (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
        fStack_10c = fStack_528;
        afStack_150[(uint)bVar11 * -2 + 0x12] = afStack_538[(uint)bVar11 * -2 + 5];
        afStack_150[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
             afStack_538[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 6];
        fStack_84 = fStack_108 + _DAT_005c6a8a;
        fStack_80 = fStack_104 + _DAT_005c6a8e;
        fStack_7c = fStack_100 + _DAT_005c6a92;
        fStack_51c = fStack_108 + _DAT_005c6a8a;
        afStack_538[(uint)bVar11 * -2 + 8] = afStack_dc[(uint)bVar11 * -2 + 0x17];
        afStack_538[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 9] =
             afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x18];
        core_actor_cpp_FUN_00408b80(this_ptr);
        fStack_4ec = fStack_120;
        (&pCStack_4e8)[(uint)bVar11 * -2] = (CCharacter *)afStack_150[(uint)bVar11 * -2 + 0xd];
        afStack_4e4[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
             afStack_150[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xe];
        if (afStack_380 + 0x11 != afStack_538 + 0x13) {
          fStack_33c = fStack_4ec;
          pCStack_338 = pCStack_4e8;
          fStack_334 = afStack_4e4[0];
        }
        break;
      case 1:
        (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
        pfVar13 = afStack_dc;
        uStack_458 = uStack_61c;
        afStack_498[(uint)bVar11 * -2 + 0x11] = afStack_618[(uint)bVar11 * -2];
        afStack_498[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x12] =
             afStack_618[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        fStack_3e8 = fStack_454 + _DAT_005c6a8a;
        fStack_3e4 = fStack_450 + _DAT_005c6a8e;
        fStack_3e0 = fStack_44c + _DAT_005c6a92;
        afStack_dc[0] = fStack_454 + _DAT_005c6a8a;
        afStack_dc[(uint)bVar11 * -2 + 1] = afStack_498[(uint)bVar11 * -2 + 0x2d];
        afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2] =
             afStack_498[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2e];
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar13);
        afStack_4e4[3] = fStack_6f4;
        afStack_4e4[(uint)bVar11 * -2 + 4] = afStack_704[(uint)bVar11 * -2 + 5];
        afStack_4e4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5] =
             afStack_704[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 6];
        if (&fStack_5bc != afStack_4e4 + 3) {
          fStack_5bc = afStack_4e4[3];
          fStack_5b8 = fStack_4d4;
          uStack_5b4 = uStack_4d0;
        }
        (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
        uStack_118 = uStack_708;
        afStack_150[(uint)bVar11 * -2 + 0xf] = afStack_704[(uint)bVar11 * -2];
        afStack_150[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
             afStack_704[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        fStack_5d0 = fStack_114 + _DAT_005c6a9e;
        afStack_5cc[0] = fStack_110 + _DAT_005c6aa2;
        afStack_5cc[1] = fStack_10c + _DAT_005c6a92;
        fStack_a8 = fStack_114 + _DAT_005c6a9e;
        afStack_dc[(uint)bVar11 * -2 + 0xe] = afStack_5cc[(uint)bVar11 * -2];
        afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xf] =
             afStack_5cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        core_actor_cpp_FUN_00408b80(this_ptr);
        fStack_258 = fStack_5e8;
        (&pCStack_254)[(uint)bVar11 * -2] = (CCharacter *)afStack_5e4[(uint)bVar11 * -2];
        afStack_250[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
             afStack_5e4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        if (afStack_380 + 0x11 != afStack_27c + 9) {
          fStack_33c = fStack_258;
          pCStack_338 = pCStack_254;
          fStack_334 = afStack_250[0];
        }
        break;
      case 2:
        (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
        pfVar13 = afStack_498 + 0xb;
        fStack_1ac = fStack_268;
        afStack_1cc[(uint)bVar11 * -2 + 9] = afStack_27c[(uint)bVar11 * -2 + 6];
        afStack_1cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
             afStack_27c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
        CStack_354.z = fStack_1a8 + _DAT_005c6a9e;
        fStack_348 = fStack_1a4 + _DAT_005c6aa2;
        afStack_344[0] = fStack_1a0 + _DAT_005c6a92;
        afStack_46c[0] = fStack_1a8 + _DAT_005c6a9e;
        afStack_498[(uint)bVar11 * -2 + 0xc] = afStack_380[(uint)bVar11 * -2 + 0xe];
        afStack_498[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
             afStack_380[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xf];
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar13);
        fStack_460 = fStack_49c;
        afStack_498[(uint)bVar11 * -2 + 0xf] = afStack_498[(uint)bVar11 * -2];
        afStack_498[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
             afStack_498[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        if (&fStack_5bc != afStack_498 + 0xe) {
          fStack_5bc = fStack_460;
          fStack_5b8 = fStack_45c;
          uStack_5b4 = uStack_458;
        }
        (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
        CStack_324.z = fStack_6d8;
        afStack_318[(uint)bVar11 * -2] = afStack_704[(uint)bVar11 * -2 + 0xc];
        afStack_318[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_704[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
        fStack_6e4 = afStack_318[0] + _DAT_005c6a96;
        fStack_6e0 = afStack_318[1] + _DAT_005c6a9a;
        fStack_6dc = afStack_318[2] + _DAT_005c6a92;
        fStack_42c = afStack_318[0] + _DAT_005c6a96;
        afStack_498[(uint)bVar11 * -2 + 0x1c] = afStack_704[(uint)bVar11 * -2 + 9];
        afStack_498[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1d] =
             afStack_704[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
        core_actor_cpp_FUN_00408b80(this_ptr);
        fStack_1e0 = fStack_6cc;
        (&pCStack_1dc)[(uint)bVar11 * -2] = (CCharacter *)afStack_704[(uint)bVar11 * -2 + 0xf];
        afStack_1d8[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
             afStack_704[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
        if (afStack_380 + 0x11 != afStack_250 + 0x1c) {
          fStack_33c = fStack_1e0;
          pCStack_338 = pCStack_1dc;
          fStack_334 = afStack_1d8[0];
        }
        break;
      case 3:
        (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
        pfVar13 = afStack_498 + 0x29;
        fStack_4b8 = fStack_6b8;
        afStack_4e4[(uint)bVar11 * -2 + 0xc] = afStack_704[(uint)bVar11 * -2 + 0x14];
        afStack_4e4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
             afStack_704[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x15];
        fStack_400 = fStack_4b4 + _DAT_005c6a96;
        fStack_3fc = fStack_4b0 + _DAT_005c6a9a;
        fStack_3f8 = fStack_4ac + _DAT_005c6a92;
        afStack_3f4[0] = fStack_4b4 + _DAT_005c6a96;
        afStack_498[(uint)bVar11 * -2 + 0x2a] = afStack_498[(uint)bVar11 * -2 + 0x27];
        afStack_498[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2b] =
             afStack_498[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x28];
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar13);
        fStack_184 = fStack_6ac;
        afStack_180[(uint)bVar11 * -2] = afStack_704[(uint)bVar11 * -2 + 0x17];
        afStack_180[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_704[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x18];
        if (&fStack_5bc != &fStack_184) {
          fStack_5bc = fStack_184;
          fStack_5b8 = afStack_180[0];
          uStack_5b4 = afStack_180[1];
        }
        (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
        afStack_3c4[3] = (float)uStack_564;
        afStack_3c4[(uint)bVar11 * -2 + 4] = afStack_5ac[(uint)bVar11 * -2 + 0x13];
        afStack_3c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5] =
             afStack_5ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x14];
        fStack_240 = fStack_3b4 + _DAT_005c6a7e;
        fStack_23c = fStack_3b0 + _DAT_005c6a82;
        fStack_238 = fStack_3ac + _DAT_005c6a86;
        fStack_f0 = fStack_3b4 + _DAT_005c6a7e;
        afStack_150[(uint)bVar11 * -2 + 0x19] = afStack_250[(uint)bVar11 * -2 + 5];
        afStack_150[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1a] =
             afStack_250[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 6];
        core_actor_cpp_FUN_00408b80(this_ptr);
        CStack_15c.x = fStack_204;
        afStack_150[(uint)bVar11 * -2 + -2] = afStack_250[(uint)bVar11 * -2 + 0x14];
        afStack_150[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1] =
             afStack_250[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x15];
        if (afStack_380 + 0x11 != afStack_164 + 2) {
          fStack_33c = CStack_15c.x;
          pCStack_338 = (CCharacter *)CStack_15c.y;
          fStack_334 = CStack_15c.z;
        }
        break;
      case 4:
        (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
        pfVar13 = afStack_150 + 5;
        fStack_47c = afStack_674[1];
        afStack_498[(uint)bVar11 * -2 + 8] = afStack_674[(uint)bVar11 * -2 + 2];
        afStack_498[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 9] =
             afStack_674[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3];
        fStack_43c = fStack_478 + _DAT_005c6a7e;
        fStack_438 = fStack_474 + _DAT_005c6a82;
        fStack_434 = fStack_470 + _DAT_005c6a86;
        afStack_13c[0] = fStack_478 + _DAT_005c6a7e;
        afStack_150[(uint)bVar11 * -2 + 6] = afStack_498[(uint)bVar11 * -2 + 0x18];
        afStack_150[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
             afStack_498[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19];
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar13);
        fStack_364 = fStack_664;
        afStack_380[(uint)bVar11 * -2 + 8] = afStack_674[(uint)bVar11 * -2 + 5];
        afStack_380[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 9] =
             afStack_674[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 6];
        if (&fStack_5bc != afStack_380 + 7) {
          fStack_5bc = fStack_364;
          fStack_5b8 = fStack_360;
          uStack_5b4 = uStack_35c;
        }
        (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
        uStack_a0 = uStack_648;
        afStack_dc[(uint)bVar11 * -2 + 0x10] = afStack_644[(uint)bVar11 * -2];
        afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x11] =
             afStack_644[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        fStack_3d8 = fStack_9c + _DAT_005c6a8a;
        fStack_3d4 = fStack_98 + _DAT_005c6a8e;
        fStack_3d0 = fStack_94 + _DAT_005c6a92;
        fStack_594 = fStack_9c + _DAT_005c6a8a;
        afStack_5ac[(uint)bVar11 * -2 + 7] = afStack_498[(uint)bVar11 * -2 + 0x31];
        afStack_5ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 8] =
             afStack_498[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x32];
        core_actor_cpp_FUN_00408b80(this_ptr);
        fStack_e4 = afStack_644[2];
        (&pCStack_e0)[(uint)bVar11 * -2] = (CCharacter *)afStack_644[(uint)bVar11 * -2 + 3];
        afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
             *(float *)((int)aCStack_634 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
        if (afStack_380 + 0x11 != afStack_150 + 0x1b) {
          fStack_33c = fStack_e4;
          pCStack_338 = pCStack_e0;
          fStack_334 = afStack_dc[0];
        }
      }
      core_fire_cpp_FUN_004a3c50
                (0x01C73654,auStack_5c0,afStack_380 + 0xf,0,0x3e800000,0x3e800000,3,0x3c23d70a,
                 0xffff);
      iVar3 = this_ptr->flicker_frame;
      if ((iVar3 == 1) || (iVar3 - 1U < 5)) {
        switch(iVar3) {
        case 2:
          (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
          pfVar13 = &fStack_5b0;
          afStack_150[1] = CStack_15c.z;
          afStack_150[(uint)bVar11 * -2 + 2] = afStack_150[(uint)bVar11 * -2];
          afStack_150[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3] =
               afStack_150[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          afStack_318[2] = afStack_150[2] + _DAT_005c6a8a;
          afStack_318[3] = afStack_150[3] + _DAT_005c6a8e;
          fStack_308 = fStack_140 + _DAT_005c6a92;
          fStack_5b0 = afStack_150[2] + _DAT_005c6a8a;
          afStack_5ac[(uint)bVar11 * -2] = afStack_318[(uint)bVar11 * -2 + 3];
          afStack_5ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               afStack_318[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
          core_actor_cpp_FUN_00408b80(this_ptr,pfVar13);
          fStack_22c = fStack_370;
          afStack_250[(uint)bVar11 * -2 + 10] = afStack_380[(uint)bVar11 * -2 + 5];
          afStack_250[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xb] =
               afStack_380[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 6];
          if (&fStack_5bc != afStack_250 + 9) {
            fStack_5bc = fStack_22c;
            fStack_5b8 = fStack_228;
            uStack_5b4 = uStack_224;
          }
          (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
          uStack_220 = uStack_384;
          afStack_250[(uint)bVar11 * -2 + 0xd] = afStack_380[(uint)bVar11 * -2];
          afStack_250[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xe] =
               afStack_380[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          fStack_510 = fStack_21c + _DAT_005c6a9e;
          fStack_50c = fStack_218 + _DAT_005c6aa2;
          fStack_508 = fStack_214 + _DAT_005c6a92;
          fStack_570 = fStack_21c + _DAT_005c6a9e;
          afStack_5ac[(uint)bVar11 * -2 + 0x10] = afStack_538[(uint)bVar11 * -2 + 0xb];
          afStack_5ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x11] =
               afStack_538[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xc];
          core_actor_cpp_FUN_00408b80(this_ptr);
          fStack_540 = afStack_5ac[3];
          (&pCStack_53c)[(uint)bVar11 * -2] = (CCharacter *)afStack_5ac[(uint)bVar11 * -2 + 4];
          afStack_538[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
               afStack_5ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5];
          if (afStack_380 + 0x11 != &fStack_540) {
            fStack_33c = fStack_540;
            pCStack_338 = pCStack_53c;
            fStack_334 = afStack_538[0];
          }
          break;
        case 3:
          (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
          pfVar13 = afStack_538;
          fStack_1b8 = fStack_334;
          afStack_1cc[(uint)bVar11 * -2 + 6] = afStack_330[(uint)bVar11 * -2];
          afStack_1cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
               afStack_330[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          fStack_1fc = fStack_1b4 + _DAT_005c6a9e;
          fStack_1f8 = fStack_1b0 + _DAT_005c6aa2;
          fStack_1f4 = fStack_1ac + _DAT_005c6a92;
          afStack_538[0] = fStack_1b4 + _DAT_005c6a9e;
          afStack_538[(uint)bVar11 * -2 + 1] = afStack_250[(uint)bVar11 * -2 + 0x16];
          afStack_538[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2] =
               afStack_250[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x17];
          core_actor_cpp_FUN_00408b80(this_ptr,pfVar13);
          fStack_508 = fStack_19c;
          afStack_538[(uint)bVar11 * -2 + 0xd] = afStack_1cc[(uint)bVar11 * -2 + 0xd];
          afStack_538[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xe] =
               afStack_1cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xe];
          if (&fStack_5bc != afStack_538 + 0xc) {
            fStack_5bc = fStack_508;
            fStack_5b8 = fStack_504;
            uStack_5b4 = uStack_500;
          }
          (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
          afStack_64[0] = fStack_168;
          afStack_64[(uint)bVar11 * -2 + 1] = afStack_164[(uint)bVar11 * -2];
          afStack_64[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2] =
               afStack_164[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          fStack_234 = afStack_64[1] + _DAT_005c6a96;
          fStack_230 = afStack_64[2] + _DAT_005c6a9a;
          fStack_22c = afStack_64[3] + _DAT_005c6a92;
          fStack_4f8 = afStack_64[1] + _DAT_005c6a96;
          afStack_538[(uint)bVar11 * -2 + 0x11] = afStack_250[(uint)bVar11 * -2 + 8];
          afStack_538[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x12] =
               afStack_250[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 9];
          core_actor_cpp_FUN_00408b80(this_ptr);
          afStack_70[1] = fStack_300;
          (&pCStack_68)[(uint)bVar11 * -2] = (CCharacter *)afStack_318[(uint)bVar11 * -2 + 7];
          afStack_64[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
               afStack_318[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 8];
          if (afStack_380 + 0x11 != afStack_70 + 1) {
            fStack_33c = afStack_70[1];
            pCStack_338 = pCStack_68;
            fStack_334 = afStack_64[0];
          }
          break;
        case 4:
          (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
          pfVar13 = afStack_dc + 6;
          afStack_1cc[2] = (float)uStack_2ec;
          afStack_1cc[(uint)bVar11 * -2 + 3] = afStack_318[(uint)bVar11 * -2 + 0xc];
          afStack_1cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
               afStack_318[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
          fStack_418 = afStack_1cc[3] + _DAT_005c6a96;
          fStack_414 = fStack_1bc + _DAT_005c6a9a;
          fStack_410 = fStack_1b8 + _DAT_005c6a92;
          afStack_c4[0] = afStack_1cc[3] + _DAT_005c6a96;
          afStack_dc[(uint)bVar11 * -2 + 7] = afStack_498[(uint)bVar11 * -2 + 0x21];
          afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 8] =
               afStack_498[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x22];
          core_actor_cpp_FUN_00408b80(this_ptr,pfVar13);
          afStack_498[2] = fStack_2e0;
          afStack_498[(uint)bVar11 * -2 + 3] = afStack_318[(uint)bVar11 * -2 + 0xf];
          afStack_498[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
               afStack_318[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
          if (&fStack_5bc != afStack_498 + 2) {
            fStack_5bc = afStack_498[2];
            fStack_5b8 = afStack_498[3];
            uStack_5b4 = uStack_488;
          }
          (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
          fStack_3ac = fStack_2c4;
          afStack_3c4[(uint)bVar11 * -2 + 7] = afStack_318[(uint)bVar11 * -2 + 0x16];
          afStack_3c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 8] =
               afStack_318[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x17];
          afStack_250[1] = fStack_3a8 + _DAT_005c6a7e;
          afStack_250[2] = fStack_3a4 + _DAT_005c6a82;
          afStack_250[3] = fStack_3a0 + _DAT_005c6a86;
          fStack_12c = fStack_3a8 + _DAT_005c6a7e;
          afStack_150[(uint)bVar11 * -2 + 10] = afStack_250[(uint)bVar11 * -2 + 2];
          afStack_150[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xb] =
               afStack_250[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3];
          core_actor_cpp_FUN_00408b80(this_ptr);
          fStack_78 = fStack_2b8;
          (&pCStack_74)[(uint)bVar11 * -2] = (CCharacter *)afStack_318[(uint)bVar11 * -2 + 0x19];
          afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
               afStack_318[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1a];
          if (afStack_380 + 0x11 != afStack_dc + 0x19) {
            fStack_33c = fStack_78;
            pCStack_338 = pCStack_74;
            fStack_334 = afStack_70[0];
          }
          break;
        default:
          (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
          pfVar13 = afStack_498 + 0x14;
          CStack_294.y = fStack_100;
          *(float *)((int)&CStack_294 + (uint)bVar11 * -8 + 8) =
               afStack_150[(uint)bVar11 * -2 + 0x15];
          *(float *)((int)&CStack_288 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
               afStack_150[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16];
          CStack_288.z = CStack_294.z + _DAT_005c6a7e;
          afStack_27c[0] = CStack_288.x + _DAT_005c6a82;
          afStack_27c[1] = CStack_288.y + _DAT_005c6a86;
          afStack_448[0] = CStack_294.z + _DAT_005c6a7e;
          afStack_498[(uint)bVar11 * -2 + 0x15] = afStack_27c[(uint)bVar11 * -2];
          afStack_498[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16] =
               afStack_27c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          core_actor_cpp_FUN_00408b80(this_ptr,pfVar13);
          fStack_424 = fStack_694;
          afStack_498[(uint)bVar11 * -2 + 0x1e] = afStack_690[(uint)bVar11 * -2];
          afStack_498[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f] =
               afStack_690[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          if (&fStack_5bc != afStack_498 + 0x1d) {
            fStack_5bc = fStack_424;
            fStack_5b8 = fStack_420;
            uStack_5b4 = uStack_41c;
          }
          (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
          afStack_dc[3] = CStack_294.x;
          afStack_dc[(uint)bVar11 * -2 + 4] = *(float *)((int)&CStack_294 + (uint)bVar11 * -8 + 4);
          afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5] =
               *(float *)((int)&CStack_294 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          fStack_2d0 = fStack_cc + _DAT_005c6a8a;
          fStack_2cc = fStack_c8 + _DAT_005c6a8e;
          fStack_2c8 = afStack_c4[0] + _DAT_005c6a92;
          fStack_408 = fStack_cc + _DAT_005c6a8a;
          afStack_498[(uint)bVar11 * -2 + 0x25] = afStack_318[(uint)bVar11 * -2 + 0x13];
          afStack_498[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x26] =
               afStack_318[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x14];
          core_actor_cpp_FUN_00408b80(this_ptr);
          afStack_1d8[1] = afStack_704[2];
          (&pCStack_1d0)[(uint)bVar11 * -2] = (CCharacter *)afStack_704[(uint)bVar11 * -2 + 3];
          afStack_1cc[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
               afStack_704[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
          if (afStack_380 + 0x11 != afStack_1d8 + 1) {
            fStack_33c = afStack_1d8[1];
            pCStack_338 = pCStack_1d0;
            fStack_334 = afStack_1cc[0];
          }
        }
      }
      core_fire_cpp_FUN_004a3c50
                (0x01C73654,auStack_5c0,afStack_380 + 0xf,0,0x3e800000,0x3e800000,3,0x3c23d70a,
                 0xffff);
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
            fStack_548 = *(float *)((pCVar5->base).actor_name + 8) -
                         (pCVar5->base).location.position.z;
            fStack_484 = fStack_550;
            afStack_498[(uint)bVar11 * -2 + 6] = afStack_5ac[(uint)bVar11 * -2 + 0x18];
            afStack_498[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
                 afStack_5ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19];
            if (afStack_4e4 + 0xf != afStack_498 + 5) {
              fStack_4a8 = fStack_484;
              fStack_4a4 = fStack_480;
              fStack_4a0 = fStack_47c;
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
        afStack_27c[3] = fStack_738 + (float)pCStack_72c;
        fStack_26c = (float)pCStack_734 + fStack_728;
        fStack_268 = fStack_730 + fStack_724;
        afStack_4e4[1] = fStack_738 + (float)pCStack_72c;
        afStack_4e4[(uint)bVar11 * -2 + 2] = afStack_27c[(uint)bVar11 * -2 + 4];
        afStack_4e4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3] =
             afStack_27c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5];
        fStack_4c8 = afStack_4e4[1] * _DAT_005c6aa2;
        fStack_4c4 = afStack_4e4[2] * _DAT_005c6aa2;
        fStack_4c0 = afStack_4e4[3] * _DAT_005c6aa2;
        afStack_380[2] = afStack_4e4[1] * _DAT_005c6aa2;
        afStack_380[(uint)bVar11 * -2 + 3] = afStack_4e4[(uint)bVar11 * -2 + 8];
        afStack_380[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
             afStack_4e4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 9];
        if (afStack_674 + 8 != afStack_380 + 2) {
          fStack_654 = afStack_380[2];
          fStack_650 = afStack_380[3];
          fStack_64c = fStack_370;
        }
        afStack_1cc[1] = (pCStack_2c->base).location.position.x + fStack_654;
        afStack_1cc[2] = (pCStack_2c->base).location.position.y + fStack_650;
        afStack_1cc[3] = (pCStack_2c->base).location.position.z + fStack_64c;
        CStack_354.x = afStack_1cc[1];
        afStack_380[(uint)bVar11 * -2 + 0xc] = afStack_1cc[(uint)bVar11 * -2 + 2];
        afStack_380[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
             afStack_1cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3];
        if (&CStack_684 != (CVector3f *)(afStack_380 + 0xb)) {
          CStack_684.x = CStack_354.x;
          CStack_684.y = CStack_354.y;
          CStack_684.z = CStack_354.z;
        }
        CStack_684.y = fStack_650 * _DAT_005c6aa2 + CStack_684.y;
        this_ptr_02 = &pCStack_2c->model;
        if ((((pCStack_2c->model).model_name[0] != '\0') &&
            (this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                                     (this_ptr_02), this_ptr_01 != (CSkeleton *)0x0)) &&
           (iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                              (this_ptr_01,"Bip01 Head",1), -1 < iVar3)) {
          core_skeleton_cpp_FUN_0054dcc0(this_ptr_02);
          pCVar5 = pCStack_2c;
          uStack_6c0 = uStack_1ec;
          afStack_704[(uint)bVar11 * -2 + 0x12] = afStack_250[(uint)bVar11 * -2 + 0x1a];
          afStack_704[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
               afStack_250[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1b];
          core_actor_cpp_FUN_00408b80(pCVar5);
          fStack_210 = fStack_678;
          afStack_250[(uint)bVar11 * -2 + 0x11] = afStack_674[(uint)bVar11 * -2];
          afStack_250[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x12] =
               afStack_674[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          if (afStack_330 + 3 != afStack_250 + 0x10) {
            CStack_324.x = fStack_210;
            CStack_324.y = fStack_20c;
            CStack_324.z = fStack_208;
          }
          if ((CStack_324.y < CStack_684.y) && (&CStack_684 != (CVector3f *)(afStack_330 + 3))) {
            CStack_684.x = CStack_324.x;
            CStack_684.y = CStack_324.y;
            CStack_684.z = CStack_324.z;
          }
        }
        position = &this_ptr->chain_pos;
        core_fire_cpp_FUN_004a3c50
                  (0x01C73654,position,&CStack_684,0,0x3f400000,0x3f400000,3,0x3e800000);
        core_sound_cpp_CSound_playActorSound_FUN_005609d0
                  (0x02CF5680,(CDemonActor *)this_ptr,"wp_lightningstaff_arc.wav",position
                  );
        pCStack_2c->bind_time = 1.0;
        pCStack_2c->bind_type = 1;
        this_ptr->chain_targets[this_ptr->chain_count] = pCStack_2c;
        if (position != &CStack_684) {
          position->x = CStack_684.x;
          (this_ptr->chain_pos).y = CStack_684.y;
          (this_ptr->chain_pos).z = CStack_684.z;
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
          if (&CStack_288 != (CVector3f *)(afStack_164 + 2)) {
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
