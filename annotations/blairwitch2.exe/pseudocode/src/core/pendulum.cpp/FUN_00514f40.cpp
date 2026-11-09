// Name: core_pendulum.cpp_FUN_00514f40
// Address: 00514f40
// Address Range: [[00514f40, 005155da]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_FUN_00514f40(CPendulum *this_ptr,CDemonActor *actor,CDemonActor *left_hand_actor,CDemonActor *right_hand_actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_pendulum_cpp_FUN_00514f40(CPendulum *this_ptr,CDemonActor *actor,CDemonActor *left_hand_actor,CDemonActor *right_hand_actor)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_10f8 [967];
  byte auStack_1c8 [24];
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float afStack_188 [6];
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float afStack_158 [6];
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float afStack_128 [6];
  float fStack_110;
  float afStack_10c [4];
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float afStack_50 [3];
  byte auStack_44 [8];
  float fStack_3c;
  float fStack_38;
  float afStack_34 [2];
  byte *puStack_2c;
  int iStack_28;
  float fStack_24;
  float *pfStack_20;
  float *pfStack_1c;
  int *piStack_18;
  int iStack_14;
  
  bVar5 = 0;
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0((SCollisionInfo *)auStack_1c8);
  if ((((left_hand_actor == (CDemonActor *)0x0) ||
       (iVar1 = (**(code **)(*(int *)&left_hand_actor->field_0x2b0 + 0x114))(left_hand_actor),
       iVar1 == 0)) &&
      ((right_hand_actor == (CDemonActor *)0x0 ||
       (iVar1 = (**(code **)(*(int *)&right_hand_actor->field_0x2b0 + 0x114))(right_hand_actor),
       iVar1 == 0)))) &&
     (iVar1 = (**(code **)(*(int *)&actor->field_0x2b0 + 0x44))(actor,auStack_1c8), iVar1 == 2)) {
    (**(code **)(*(int *)&actor->field_0x2b0 + 0x24))(actor);
    pfVar3 = afStack_128;
    pfVar4 = &fStack_1a0;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar4 = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
      pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
    }
    fStack_c8 = fStack_1a0 + fStack_194;
    fStack_c4 = fStack_19c + fStack_190;
    fStack_c0 = fStack_198 + fStack_18c;
    fStack_5c = fStack_1a0 + fStack_194;
    afStack_10c[(uint)bVar5 * -2 + 0x2d] = afStack_10c[(uint)bVar5 * -2 + 0x12];
    afStack_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x2e] =
         afStack_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
    fStack_38 = fStack_5c * _DAT_005e1a26;
    afStack_34[0] = fStack_58 * _DAT_005e1a26;
    afStack_34[1] = fStack_54 * _DAT_005e1a26;
    fStack_f8 = fStack_5c * _DAT_005e1a26;
    afStack_10c[(uint)bVar5 * -2 + 6] = afStack_34[(uint)bVar5 * -2];
    afStack_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
         afStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    fStack_68 = *(float *)&actor->field_0x20 + fStack_f8;
    fStack_64 = *(float *)&actor->field_0x24 + fStack_f4;
    fStack_60 = *(float *)&actor->field_0x28 + fStack_f0;
    fStack_ec = fStack_68;
    afStack_10c[(uint)bVar5 * -2 + 9] = afStack_10c[(uint)bVar5 * -2 + 0x2a];
    afStack_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
         afStack_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x2b];
    fStack_bc = fStack_ec - *(float *)&this_ptr->field_0x20;
    fStack_b8 = fStack_e8 - *(float *)&this_ptr->field_0x24;
    pfVar3 = afStack_10c + 0x2f;
    fStack_b4 = fStack_e4 - *(float *)&this_ptr->field_0x28;
    afStack_50[0] = fStack_bc;
    afStack_10c[(uint)bVar5 * -2 + 0x30] = afStack_10c[(uint)bVar5 * -2 + 0x15];
    afStack_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x31] =
         afStack_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16];
    core_dirmat_cpp_FUN_004495a0(&this_ptr->field_0x3c,pfVar3);
    fStack_e0 = fStack_74;
    afStack_10c[(uint)bVar5 * -2 + 0xc] = afStack_10c[(uint)bVar5 * -2 + 0x27];
    afStack_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
         afStack_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x28];
    if (afStack_10c + 8 != afStack_10c + 0xb) {
      fStack_ec = fStack_e0;
      fStack_e8 = fStack_dc;
      fStack_e4 = fStack_d8;
    }
    (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x24))(this_ptr);
    pfVar3 = afStack_158;
    pfVar4 = &fStack_170;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar4 = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
      pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
    }
    if (((((fStack_170 <= fStack_ec) && (fStack_16c <= fStack_e8)) && (fStack_168 <= fStack_e4)) &&
        ((fStack_ec <= fStack_164 && (fStack_e8 <= fStack_160)))) && (fStack_e4 <= fStack_15c)) {
      pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                         ((CKeyFramedModelInstance *)&this_ptr->field_0x2b4);
      fStack_24 = fStack_1ac * fStack_1ac;
      iStack_28 = *(int *)&pCVar2->field_0x104;
      piStack_18 = *(int **)&pCVar2->field_0x10c;
      iStack_14 = 0;
      if (0 < iStack_28) {
        pfStack_20 = (float *)&this_ptr->field_0x20;
        puStack_2c = &this_ptr->field_0x3c;
        pfStack_1c = (float *)&actor->field_0x20;
        while( true ) {
          auStack_44._0_4_ = (float)*piStack_18 * _DAT_005faae8;
          auStack_44._4_4_ = (float)piStack_18[1] * _DAT_005faae8;
          fStack_3c = (float)piStack_18[2] * _DAT_005faae8;
          core_dirmat_cpp_FUN_00449530(puStack_2c,auStack_44);
          fStack_d4 = fStack_b0;
          afStack_10c[(uint)bVar5 * -2 + 0xf] = afStack_10c[(uint)bVar5 * -2 + 0x18];
          afStack_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
               afStack_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19];
          if ((float *)auStack_44 != afStack_10c + 0xe) {
            auStack_44._0_4_ = fStack_d4;
            auStack_44._4_4_ = fStack_d0;
            fStack_3c = fStack_cc;
          }
          auStack_44._0_4_ = ((float)auStack_44._0_4_ + *pfStack_20) - *pfStack_1c;
          auStack_44._4_4_ = ((float)auStack_44._4_4_ + pfStack_20[1]) - pfStack_1c[1];
          fStack_3c = (fStack_3c + pfStack_20[2]) - pfStack_1c[2];
          if ((((float)auStack_1c8._20_4_ <= (float)auStack_44._4_4_) &&
              ((float)auStack_44._4_4_ <= fStack_1b0 + 1.0)) &&
             ((float)auStack_44._0_4_ * (float)auStack_44._0_4_ + fStack_3c * fStack_3c <= fStack_24
             )) break;
          iStack_14 = iStack_14 + 1;
          piStack_18 = piStack_18 + 3;
          if (iStack_28 <= iStack_14) {
            return;
          }
        }
        if (left_hand_actor != (CDemonActor *)0x0) {
          (**(code **)(*(int *)&left_hand_actor->field_0x2b0 + 0xe4))
                    (left_hand_actor,7,0,0xbf800000);
        }
        if (right_hand_actor != (CDemonActor *)0x0) {
          (**(code **)(*(int *)&right_hand_actor->field_0x2b0 + 0xe4))
                    (right_hand_actor,7,0,0xbf800000);
        }
        (**(code **)(*(int *)&actor->field_0x2b0 + 0x24))(actor);
        pfVar3 = afStack_188;
        pfVar4 = &fStack_140;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *pfVar4 = *pfVar3;
          pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
          pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
        }
        fStack_98 = fStack_140 + fStack_134;
        fStack_94 = fStack_13c + fStack_130;
        fStack_90 = fStack_138 + fStack_12c;
        fStack_80 = fStack_140 + fStack_134;
        afStack_10c[(uint)bVar5 * -2 + 0x24] = afStack_10c[(uint)bVar5 * -2 + 0x1e];
        afStack_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x25] =
             afStack_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1f];
        fStack_a4 = fStack_80 * _DAT_005e1a26;
        fStack_a0 = fStack_7c * _DAT_005e1a26;
        fStack_9c = fStack_78 * _DAT_005e1a26;
        afStack_10c[2] = fStack_80 * _DAT_005e1a26;
        afStack_10c[(uint)bVar5 * -2 + 3] = afStack_10c[(uint)bVar5 * -2 + 0x1b];
        afStack_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
             afStack_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1c];
        fStack_110 = *(float *)&actor->field_0x20 + afStack_10c[2];
        afStack_10c[0] = *(float *)&actor->field_0x24 + afStack_10c[3];
        afStack_10c[1] = *(float *)&actor->field_0x28 + fStack_fc;
        fStack_8c = fStack_110;
        afStack_10c[(uint)bVar5 * -2 + 0x21] = afStack_10c[(uint)bVar5 * -2];
        afStack_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x22] =
             afStack_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        if ((float *)auStack_44 != afStack_10c + 0x20) {
          auStack_44._0_4_ = fStack_8c;
          auStack_44._4_4_ = fStack_88;
          fStack_3c = fStack_84;
        }
        core_gore_cpp_FUN_004c9850
                  (g_CGorePtr,(CVector3f *)auStack_44,(CVector3f *)0x0,200,BLOOD_TYPE_RED);
        return;
      }
    }
  }
  return;
}
