// Name: core_prye.cpp_FUN_00523800
// Address: 00523800
// Address Range: [[00523800, 00523e45]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_00523800(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_prye_cpp_FUN_00523800(CDemonActor *param_1)

{
  float fVar1;
  float fVar2;
  UActorVTable UVar3;
  byte bVar4;
  float10 fVar5;
  UActorVTable aUStackY_112c [1000];
  CDemonSet *this_ptr;
  int laser_type;
  int color_r;
  int color_g;
  int color_b;
  UActorVTable *pUVar6;
  CDemonActor_vtable *pCStack_150;
  float fStack_144;
  UActorVTable aUStack_140 [2];
  float fStack_138;
  UActorVTable UStack_134;
  float fStack_130;
  UActorVTable UStack_12c;
  uint uStack_128;
  uint uStack_124;
  UActorVTable UStack_120;
  UActorVTable aUStack_11c [2];
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  CDemonActor *pCStack_108;
  UActorVTable aUStack_104 [2];
  CDemonActor *pCStack_fc;
  UActorVTable aUStack_f8 [3];
  float fStack_ec;
  float fStack_e8;
  UActorVTable UStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  float fStack_d8;
  UActorVTable UStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  CDemonActor *pCStack_90;
  UActorVTable aUStack_8c [2];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float local_6c;
  UActorVTable UStack_60;
  uint uStack_5c;
  uint uStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  UActorVTable UStack_34;
  UActorVTable UStack_30;
  uint uStack_2c;
  float fStack_28;
  CDemonActor *pCStack_24;
  int *piStack_20;
  UActorVTable UStack_1c;
  CDemonActor *pCStack_18;
  
  bVar4 = 0;
  if (*(int *)(param_1[0x186].actor_name + 0x14) == 0) {
    _DAT_01d71de0 = "..\\core\\prye.cpp";
    _DAT_01d71de4 = 0x1405;
    core_main_c_FUN_004e4330("CPrye::aimLeftPistol - no weapon?");
  }
  (**(code **)(*(int *)(*(int *)(param_1[0x186].actor_name + 0x14) + 0x154) + 0xe0))
            (*(int *)(param_1[0x186].actor_name + 0x14));
  piStack_20 = &param_1[0x185].is_editor_hidden;
  uStack_2c = _DAT_01ed36e8;
  UStack_120 = (UActorVTable)local_6c;
  aUStack_11c[(uint)bVar4 * -2] = aUStack_8c[(uint)bVar4 * -2 + 9];
  aUStack_f8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -8] =
       aUStack_8c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  UStack_30._ub = (CDemonActor_vtable *)0x3f060a92;
  UStack_34._ub = (CDemonActor_vtable *)0xbfa78d36;
  core_actor_cpp_FUN_00408b80(*(uint *)(param_1[0x186].actor_name + 0x14),&UStack_120);
  aUStack_f8[2] = (UActorVTable)fStack_9c;
  aUStack_f8[(uint)bVar4 * -2 + 3] = aUStack_f8[(uint)bVar4 * -2 + 0x18];
  aUStack_f8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       aUStack_f8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19];
  UStack_12c = (UActorVTable)0x0;
  uStack_128 = 0;
  uStack_124 = 0x447a0000;
  core_actor_cpp_FUN_00408b00(*(uint *)(param_1[0x186].actor_name + 0x14),&UStack_12c);
  fVar1 = fStack_e8;
  fVar2 = fStack_ec;
  UVar3 = aUStack_f8[2];
  fStack_54 = fStack_144;
  aUStack_8c[(uint)bVar4 * -2 + 0xf] = aUStack_140[(uint)bVar4 * -2];
  aUStack_8c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
       aUStack_140[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1];
  color_b = 0;
  color_g = 0;
  color_r = 0xff;
  fStack_48 = (float)UVar3 + fStack_54;
  fStack_44 = fVar2 + fStack_50;
  laser_type = 1;
  fStack_40 = fVar1 + fStack_4c;
  UStack_60 = (UActorVTable)((float)UVar3 + fStack_54);
  aUStack_8c[(uint)bVar4 * -2 + 0xc] = aUStack_8c[(uint)bVar4 * -2 + 0x12];
  this_ptr = g_CDemonSetPtr;
  aUStack_8c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
       aUStack_8c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
  core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_0053ecd0
            (this_ptr,laser_type,color_r,color_g,color_b);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
            (g_CDemonSetPtr,*(CDemonActor **)(param_1[0x186].actor_name + 0x14));
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,param_1);
  pCStack_150 = (CDemonActor_vtable *)
                core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr,aUStack_f8 + 2,aUStack_8c + 0xb);
  pCStack_18 = (CDemonActor *)pCStack_150;
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  UVar3 = aUStack_f8[2];
  if (((float)pCStack_150 < 0.0) || (1.0 < (float)pCStack_150)) {
    pCStack_150 = (CDemonActor_vtable *)0x3f800000;
  }
  fStack_a8 = fStack_54 * (float)pCStack_150;
  fStack_a4 = fStack_50 * (float)pCStack_150;
  fStack_a0 = fStack_4c * (float)pCStack_150;
  fStack_138 = fStack_54 * (float)pCStack_150;
  (&UStack_134)[(uint)bVar4 * -2] = aUStack_f8[(uint)bVar4 * -2 + 0x15];
  (&UStack_134)[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1] =
       aUStack_f8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16];
  fStack_78 = (float)UVar3 + fStack_138;
  fStack_74 = fStack_ec + (float)UStack_134;
  fStack_70 = fStack_e8 + fStack_130;
  UStack_e4 = (UActorVTable)((float)UVar3 + fStack_138);
  aUStack_f8[(uint)bVar4 * -2 + 6] = aUStack_8c[(uint)bVar4 * -2 + 6];
  aUStack_f8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       aUStack_8c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  if (aUStack_8c + 0xb != aUStack_f8 + 5) {
    UStack_60 = UStack_e4;
    uStack_5c = uStack_e0;
    uStack_58 = uStack_dc;
  }
  core_skeleton_cpp_FUN_0054dbd0(param_1 + 1,uStack_2c);
  pUVar6 = aUStack_8c + 0xb;
  fStack_114 = fStack_d8;
  aUStack_f8[(uint)bVar4 * -2 + -6] = aUStack_f8[(uint)bVar4 * -2 + 9];
  aUStack_f8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -5] =
       aUStack_f8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  core_actor_cpp_FUN_00408bf0(param_1,pUVar6);
  fStack_b4 = fStack_c0;
  aUStack_f8[(uint)bVar4 * -2 + 0x12] = aUStack_f8[(uint)bVar4 * -2 + 0xf];
  aUStack_f8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13] =
       aUStack_f8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
  fStack_84 = fStack_b4 - fStack_114;
  fStack_80 = fStack_b0 - fStack_110;
  fStack_7c = fStack_ac - fStack_10c;
  UStack_cc = (UActorVTable)(fStack_b4 - fStack_114);
  aUStack_f8[(uint)bVar4 * -2 + 0xc] = aUStack_8c[(uint)bVar4 * -2 + 3];
  aUStack_f8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
       aUStack_8c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(aUStack_f8 + 0xb);
  fVar2 = SQRT(fStack_c4 * fStack_c4 + (float)UStack_cc * (float)UStack_cc + fStack_c8 * fStack_c8);
  pCStack_90 = pCStack_fc;
  aUStack_8c[(uint)bVar4 * -2] = aUStack_f8[(uint)bVar4 * -2];
  aUStack_8c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       aUStack_f8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  if ((float)_DAT_005cd727 < fVar2) {
    fStack_28 = -(float)UStack_120;
    if ((((float)_DAT_005cd727 <= fVar2) &&
        (fVar1 = SQRT(fVar2 * fVar2 - fStack_28 * fStack_28) / fVar2, fVar1 < 1.0)) &&
       (0.0 <= fVar1)) {
      fVar5 = (float10)fVar1;
      acos();
      fStack_38 = (float)fVar5;
      if (0.0 <= fStack_28) {
        aUStack_8c[0]._ub = (CDemonActor_vtable *)(aUStack_8c[0]._ub + fStack_38);
      }
      else {
        aUStack_8c[0]._ub = (CDemonActor_vtable *)(aUStack_8c[0]._ub - fStack_38);
      }
      pCStack_18 = (CDemonActor *)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(aUStack_8c[0]._ub);
      aUStack_8c[0]._ub = (CDemonActor_vtable *)pCStack_18;
    }
    if ((((float)_DAT_005cd727 <= fVar2) &&
        (fVar2 = SQRT(fVar2 * fVar2 - (float)aUStack_11c[0] * (float)aUStack_11c[0]) / fVar2,
        fVar2 < 1.0)) && (0.0 <= fVar2)) {
      fVar5 = (float10)fVar2;
      acos();
      fStack_3c = (float)fVar5;
      if (0.0 <= (float)aUStack_11c[0]) {
        pCStack_90 = (CDemonActor *)((float)pCStack_90 + fStack_3c);
      }
      else {
        pCStack_90 = (CDemonActor *)((float)pCStack_90 - fStack_3c);
      }
      pCStack_18 = (CDemonActor *)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(pCStack_90);
      pCStack_90 = pCStack_18;
    }
  }
  pCStack_108 = pCStack_90;
  aUStack_104[(uint)bVar4 * -2] = aUStack_8c[(uint)bVar4 * -2];
  aUStack_104[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       aUStack_8c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  UStack_1c = aUStack_104[0];
  pCStack_24 = pCStack_108;
  if ((float)pCStack_108 < (float)0xBF490FDB) {
    pCStack_24 = 0xBF490FDB;
  }
  if ((float)0x3F490FDB < (float)pCStack_24) {
    pCStack_24 = 0x3F490FDB;
  }
  if ((float)aUStack_104[0] < (float)UStack_34) {
    UStack_1c = UStack_34;
  }
  if ((float)UStack_30 < (float)UStack_1c) {
    UStack_1c = UStack_30;
  }
  piStack_20[5] = 0x3f800000;
  *(UActorVTable *)(piStack_20 + 3) = UStack_1c;
  piStack_20[2] = (int)pCStack_24;
  *(UActorVTable *)(piStack_20 + 1) = UStack_1c;
  *piStack_20 = (int)pCStack_24;
  return;
}
