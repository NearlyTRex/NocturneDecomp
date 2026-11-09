// Name: core_flame.cpp_FUN_004a5b10
// Address: 004a5b10
// Address Range: [[004a5b10, 004a6083]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_FUN_004a5b10(CFlame *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flame_cpp_FUN_004a5b10(CFlame *this_ptr,float delta_time)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint extraout_EDX;
  uint extraout_EDX_00;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
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
  
  bVar4 = 0;
  if (((this_ptr->field_0x1b8 != '\0') && (*(int *)&this_ptr->field_0x1b4 == 0)) &&
     (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                        (0x01C6E360,&this_ptr->field_0x1b8), iVar1 != 0)) {
    if ((*(int *)&this_ptr->field_0x1a8 != 1) && (*(int *)&this_ptr->field_0x1a8 != 3)) {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                  (0x01C73654,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)0x0,0x4000,0x10000,1
                   ,0xffff);
      } while (iVar1 < 10);
    }
    *(uint *)&this_ptr->field_0x290 = 1;
    *(uint *)&this_ptr->field_0x1b4 = 1;
  }
  if (((this_ptr->field_0x21c != '\0') && (*(int *)&this_ptr->field_0x1b4 != 0)) &&
     ((iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                         (0x01C6E360,&this_ptr->field_0x21c), iVar1 != 0 &&
      (*(uint *)&this_ptr->field_0x1b4 = 0, *(int *)&this_ptr->field_0x1a8 != 3)))) {
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004a2560
              (0x01C73654,(CVector3f *)&this_ptr->field_0x20,
               *(float *)&this_ptr->field_0x15c * (float)_DAT_005c0bb4,(CVector3f *)0x0,0x4000);
  }
  if (*(int *)&this_ptr->field_0x1b4 != 0) {
    *(float *)&this_ptr->field_0x164 =
         delta_time * (float)_DAT_005c0bbc + *(float *)&this_ptr->field_0x164;
    if (0x40ffffff < *(int *)&this_ptr->field_0x164) {
      *(float *)&this_ptr->field_0x164 = *(float *)&this_ptr->field_0x164 + _DAT_005c0bc4;
    }
    *(uint *)&this_ptr->field_0x30 = 0;
    *(uint *)&this_ptr->field_0x38 = 0;
    *(uint *)&this_ptr->field_0x34 = 0;
    core_flame_cpp_FUN_004a6dd0(this_ptr);
    if (*(int *)&this_ptr->field_0x2a0 == 0) {
      if (*(uint *)&this_ptr->field_0x1b0 != 0) {
        core_sound_cpp_FUN_00560b00(0x02CF5680,*(uint *)&this_ptr->field_0x1b0);
        *(uint *)&this_ptr->field_0x1b0 = 0;
      }
    }
    else {
      iVar1 = core_sound_cpp_FUN_00560af0(0x02CF5680,*(uint *)&this_ptr->field_0x1b0);
      if (iVar1 == 0) {
        local_14 = (float)core_actor_cpp_FUN_0040ce40(0x3f733333,0x3f866666);
        FUN_005a28c0(local_110,"env-torch.wav * %f",(double)local_14);
        sound_sndmain_cpp_FUN_00555fd0();
        iVar1 = 2;
        local_14 = (float)core_actor_cpp_FUN_0040ce40(0,0x3f800000);
        sound_sndmain_cpp_FUN_00555f60((double)local_14,iVar1);
        uVar2 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,local_110);
        *(uint *)&this_ptr->field_0x1b0 = uVar2;
        sound_sndmain_cpp_FUN_00556050();
      }
    }
    if (*(int *)&this_ptr->field_0x288 != 0) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_0053ed80((SCollisionInfo *)local_ac);
      iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x3c))(iVar1,local_ac);
      if (iVar1 == 2) {
        iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        afStack_58[2] = *(float *)(iVar1 + 0x20) - *(float *)&this_ptr->field_0x20;
        afStack_58[3] = *(float *)(iVar1 + 0x24) - *(float *)&this_ptr->field_0x24;
        fStack_48 = *(float *)(iVar1 + 0x28) - *(float *)&this_ptr->field_0x28;
        fStack_5c = afStack_58[2];
        afStack_58[(uint)bVar4 * -2] = afStack_58[(uint)bVar4 * -2 + 3];
        afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
             afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
        if (((float)_DAT_005c0bcc < afStack_58[0]) && (afStack_58[0] < (float)local_ac._24_4_)) {
          fVar5 = ((float10)*(float *)&this_ptr->field_0x158 +
                  (float10)*(float *)&this_ptr->field_0x160) * (float10)_DAT_005c0bd4;
          round();
          fStack_20 = (float)(int)ROUND(fVar5);
          fStack_24 = (float)(int)fStack_20;
          local_14 = fStack_20;
          if ((ABS(fStack_5c) < fStack_90 + fStack_24) &&
             (ABS(afStack_58[1]) < fStack_90 + fStack_24)) {
            core_charactr_cpp_FUN_0042fbd0
                      (extraout_EDX,&this_ptr->field_0x20,0,0,0x40000000,1,0x40000000);
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
        iVar1 = *(int *)(&g_CDemonSetPtr->field_0x150ff0 + *(int *)&this_ptr->field_0x29c * 4);
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_0053ed80((SCollisionInfo *)auStack_84);
        iVar3 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x3c))(iVar1,auStack_84);
        if (iVar3 == 2) {
          fStack_44 = *(float *)(iVar1 + 0x20) - *(float *)&this_ptr->field_0x20;
          fStack_40 = *(float *)(iVar1 + 0x24) - *(float *)&this_ptr->field_0x24;
          fStack_3c = *(float *)(iVar1 + 0x28) - *(float *)&this_ptr->field_0x28;
          fStack_38 = fStack_44;
          afStack_58[(uint)bVar4 * -2 + 9] = afStack_58[(uint)bVar4 * -2 + 6];
          afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
               afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
          fVar6 = ((float10)*(float *)&this_ptr->field_0x158 +
                  (float10)*(float *)&this_ptr->field_0x160) * (float10)_DAT_005c0bd4;
          fVar5 = (float10)fStack_34;
          round();
          iStack_1c = (int)ROUND(fVar6);
          if (((float10)_DAT_005c0bcc < fVar5) && (fStack_34 < (float)auStack_84._24_4_)) {
            fStack_18 = (float)iStack_1c;
            if ((ABS(fStack_38) < fStack_68 + fStack_18) && (ABS(fStack_30) < fStack_68 + fStack_18)
               ) {
              local_14 = (float)iStack_1c;
              core_charactr_cpp_FUN_0042fbd0(iVar1,extraout_EDX_00,0,0,0x40000000,0,0x40000000);
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
