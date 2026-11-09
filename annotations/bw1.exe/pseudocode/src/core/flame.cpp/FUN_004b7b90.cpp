// Name: core_flame.cpp_FUN_004b7b90
// Address: 004b7b90
// Address Range: [[004b7b90, 004b80f9]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_FUN_004b7b90(CFlame *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flame_cpp_FUN_004b7b90(CFlame *this_ptr,float delta_time)

{
  CCharacter *this_ptr_00;
  int iVar1;
  uint uVar2;
  CCharacter *this_ptr_01;
  CVector3f *position;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  float afStackY_1044 [962];
  byte local_110 [100];
  byte local_ac [28];
  float fStack_90;
  byte auStack_84 [28];
  float fStack_68;
  float fStack_5c;
  float afStack_58 [4];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  float local_14;
  
  bVar3 = 0;
  if (((this_ptr->field_0x1b8 != '\0') && (*(int *)&this_ptr->field_0x1b4 == 0)) &&
     (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,&this_ptr->field_0x1b8), iVar1 != 0)) {
    if ((*(int *)&this_ptr->field_0x1a8 != 1) && (*(int *)&this_ptr->field_0x1a8 != 3)) {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                  (0x01C57074,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)0x0,0x4000,0x10000,1
                   ,0xffff);
      } while (iVar1 < 10);
    }
    *(uint *)&this_ptr->field_0x290 = 1;
    *(uint *)&this_ptr->field_0x1b4 = 1;
  }
  if (((this_ptr->field_0x21c != '\0') && (*(int *)&this_ptr->field_0x1b4 != 0)) &&
     ((iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                         (0x01C51D80,&this_ptr->field_0x21c), iVar1 != 0 &&
      (*(uint *)&this_ptr->field_0x1b4 = 0, *(int *)&this_ptr->field_0x1a8 != 3)))) {
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
              (0x01C57074,(CVector3f *)&this_ptr->field_0x20,
               *(float *)&this_ptr->field_0x15c * (float)_DAT_005df69f,(CVector3f *)0x0,0xffff);
  }
  if (*(int *)&this_ptr->field_0x1b4 != 0) {
    *(float *)&this_ptr->field_0x164 =
         delta_time * (float)_DAT_005df6a7 + *(float *)&this_ptr->field_0x164;
    if (0x40ffffff < *(int *)&this_ptr->field_0x164) {
      *(float *)&this_ptr->field_0x164 = *(float *)&this_ptr->field_0x164 + _DAT_005df6af;
    }
    *(uint *)&this_ptr->field_0x30 = 0;
    *(uint *)&this_ptr->field_0x38 = 0;
    *(uint *)&this_ptr->field_0x34 = 0;
    core_flame_cpp_FUN_004b8e40(this_ptr);
    if (*(int *)&this_ptr->field_0x2a0 == 0) {
      if (*(uint *)&this_ptr->field_0x1b0 != 0) {
        core_sound_cpp_FUN_0057d9d0(0x02C82A60,*(uint *)&this_ptr->field_0x1b0);
        *(uint *)&this_ptr->field_0x1b0 = 0;
      }
    }
    else {
      iVar1 = core_sound_cpp_FUN_0057d9c0(0x02C82A60,*(uint *)&this_ptr->field_0x1b0);
      if (iVar1 == 0) {
        local_14 = (float)core_actor_cpp_FUN_0040cc00(0x3f733333,0x3f866666);
        FUN_005bfb40(local_110,"torch.wav * %f",(double)local_14);
        sound_sndmain_cpp_FUN_00572ac0();
        iVar1 = 2;
        local_14 = (float)core_actor_cpp_FUN_0040cc00(0,0x3f800000);
        sound_sndmain_cpp_FUN_00572a50((double)local_14,iVar1);
        uVar2 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,local_110);
        *(uint *)&this_ptr->field_0x1b0 = uVar2;
        sound_sndmain_cpp_FUN_00572b40();
      }
    }
    if (*(int *)&this_ptr->field_0x288 != 0) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_005593c0((SCollisionInfo *)local_ac);
      iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x3c))(iVar1,local_ac);
      if (iVar1 == 2) {
        iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        afStack_58[2] = *(float *)(iVar1 + 0x20) - *(float *)&this_ptr->field_0x20;
        afStack_58[3] = *(float *)(iVar1 + 0x24) - *(float *)&this_ptr->field_0x24;
        fStack_48 = *(float *)(iVar1 + 0x28) - *(float *)&this_ptr->field_0x28;
        fStack_5c = afStack_58[2];
        afStack_58[(uint)bVar3 * -2] = afStack_58[(uint)bVar3 * -2 + 3];
        afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
             afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
        if (((float)_DAT_005df6b7 < afStack_58[0]) && (afStack_58[0] < (float)local_ac._24_4_)) {
          fVar4 = ((float10)*(float *)&this_ptr->field_0x158 +
                  (float10)*(float *)&this_ptr->field_0x160) * (float10)_DAT_005df6bf;
          round();
          fStack_20 = (float)(int)ROUND(fVar4);
          fStack_24 = (float)(int)fStack_20;
          local_14 = fStack_20;
          if ((ABS(fStack_5c) < fStack_90 + fStack_24) &&
             (ABS(afStack_58[1]) < fStack_90 + fStack_24)) {
            core_charactr_cpp_FUN_004308a0(this_ptr_01,(CVector3f *)&this_ptr->field_0x20,0,0,2.0,1)
            ;
          }
        }
      }
    }
    if (*(int *)&this_ptr->field_0x28c != 0) {
      if (*(int *)&this_ptr->field_0x29c < 0) {
        *(uint *)&this_ptr->field_0x29c = 0;
      }
      if (*(int *)&g_CDemonSetPtr->field_0x150fec <= *(int *)&this_ptr->field_0x29c) {
        *(uint *)&this_ptr->field_0x29c = 0;
      }
      if (0 < *(int *)&g_CDemonSetPtr->field_0x150fec) {
        this_ptr_00 = *(CCharacter **)
                       (&g_CDemonSetPtr->field_0x150ff0 + *(int *)&this_ptr->field_0x29c * 4);
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_005593c0((SCollisionInfo *)auStack_84);
        iVar1 = (**(code **)(*(int *)&this_ptr_00->field_0x154 + 0x3c))(this_ptr_00,auStack_84);
        if (iVar1 == 2) {
          fStack_44 = *(float *)&this_ptr_00->field_0x20 - *(float *)&this_ptr->field_0x20;
          fStack_40 = *(float *)&this_ptr_00->field_0x24 - *(float *)&this_ptr->field_0x24;
          fStack_3c = *(float *)&this_ptr_00->field_0x28 - *(float *)&this_ptr->field_0x28;
          fStack_38 = fStack_44;
          afStack_58[(uint)bVar3 * -2 + 9] = afStack_58[(uint)bVar3 * -2 + 6];
          afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10] =
               afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7];
          fVar5 = ((float10)*(float *)&this_ptr->field_0x158 +
                  (float10)*(float *)&this_ptr->field_0x160) * (float10)_DAT_005df6bf;
          fVar4 = (float10)fStack_34;
          round();
          iStack_1c = (int)ROUND(fVar5);
          if (((float10)_DAT_005df6b7 < fVar4) && (fStack_34 < (float)auStack_84._24_4_)) {
            fStack_18 = (float)iStack_1c;
            if ((ABS(fStack_38) < fStack_68 + fStack_18) && (ABS(fStack_30) < fStack_68 + fStack_18)
               ) {
              local_14 = (float)iStack_1c;
              core_charactr_cpp_FUN_004308a0(this_ptr_00,position,0,0,2.0,0);
            }
          }
        }
        *(int *)&this_ptr->field_0x29c = *(int *)&this_ptr->field_0x29c + 1;
        return;
      }
    }
  }
  return;
}
