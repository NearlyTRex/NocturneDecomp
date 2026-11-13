// Name: core_prye.cpp_FUN_00522b00
// Address: 00522b00
// Address Range: [[00522b00, 005237f0]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_00522b00(CDemonActor *param_1,int param_2,float param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_prye_cpp_FUN_00522b00(CDemonActor *param_1,int param_2,float param_3)

{
  UActorVTable UVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  CDemonActor *pCVar7;
  int iVar8;
  byte bVar9;
  float10 fVar10;
  UActorVTable aUStackY_1174 [18];
  float afStackY_112c [15];
  UActorVTable aUStackY_10f0 [15];
  float afStackY_10b4 [12];
  UActorVTable aUStackY_1084 [3];
  float afStackY_1078 [3];
  UActorVTable aUStackY_106c [894];
  float fStack_234;
  CVector3f aCStack_22c [10];
  CMatrix3x3f CStack_1b4;
  float fStack_18c;
  UActorVTable UStack_188;
  float fStack_184;
  UActorVTable UStack_180;
  UActorVTable UStack_17c;
  UActorVTable UStack_178;
  CVector3f CStack_174;
  UActorVTable UStack_168;
  UActorVTable UStack_164;
  UActorVTable UStack_160;
  UActorVTable UStack_15c;
  UActorVTable aUStack_158 [5];
  CVector3f CStack_144;
  float fStack_138;
  float afStack_134 [5];
  CVector3f CStack_120;
  CVector3f CStack_114;
  float fStack_108;
  UActorVTable aUStack_104 [2];
  float fStack_fc;
  float fStack_f8;
  float fStack_f0;
  UActorVTable UStack_e4;
  float fStack_e0;
  float fStack_dc;
  UActorVTable UStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float afStack_c8 [2];
  UActorVTable UStack_c0;
  float fStack_bc;
  float fStack_b8;
  UActorVTable UStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  UActorVTable aUStack_98 [2];
  float fStack_90;
  float afStack_8c [2];
  CVector3f aCStack_84 [2];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  int iStack_54;
  int iStack_50;
  float fStack_4c;
  UActorVTable UStack_48;
  CDemonActor *local_44;
  float local_40;
  int local_3c;
  int iStack_38;
  int *local_34;
  float fStack_30;
  CDemonActor *pCStack_2c;
  float fStack_28;
  float fStack_24;
  CVector3f *pCStack_20;
  int local_1c;
  float fStack_18;
  UActorVTable UStack_14;
  
  bVar9 = 0;
  local_34 = &param_1[0x185].render_needs_update;
  if (param_2 == 1) {
    local_34 = &param_1[0x185].dead2;
  }
  if (*(int *)(param_1[0x186].actor_name + 0x14) == 0) {
    ((UActorVTable *)(local_34 + 3))->_ub = (CDemonActor_vtable *)0x0;
    local_34[1] = 0;
    iVar8 = *(int *)(param_1[0x1c].actor_name + param_2 * 0x78 + 0x10);
    uVar5 = 0;
    if (iVar8 != 0) {
      uVar5 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x74))(iVar8);
    }
    if ((uVar5 & 4) == 0) {
      local_34[2] = 0;
      *local_34 = 0;
      return;
    }
    local_3c = 3;
  }
  else {
    local_3c = *(int *)(*(int *)(param_1[0x186].actor_name + 0x14) + 0x2e0);
  }
  iVar8 = _DAT_01ed3714;
  if (param_2 == 0) {
    local_34[2] = 0;
    *local_34 = 0;
    return;
  }
  local_1c = _DAT_01ed36ec;
  if ((local_3c == 0) || (local_3c == 5)) {
    local_44 = (CDemonActor *)0x3fa78d36;
  }
  else {
    local_44 = (CDemonActor *)0x3f060a92;
  }
  local_40 = -0.5235988;
  fVar3 = (float)param_1[0x99].direction_hint * _DAT_005cd6a7 * (float)_DAT_005cd6af * param_3 +
          (float)*local_34;
  local_34[1] = 0;
  *local_34 = (int)fVar3;
  if (fVar3 < 0xBF490FDB) {
    *local_34 = (int)0xBF490FDB;
  }
  if (0x3F490FDB < (float)*local_34) {
    *local_34 = (int)0x3F490FDB;
  }
  if ((float)*(UActorVTable *)(local_34 + 3) < -0.5235988) {
    ((UActorVTable *)(local_34 + 3))->_ub = (CDemonActor_vtable *)0xbf060a92;
  }
  if ((float)local_44 < (float)*(UActorVTable *)(local_34 + 3)) {
    ((UActorVTable *)(local_34 + 3))->_ub = (CDemonActor_vtable *)local_44;
  }
  if ((float)local_34[1] < -0.5235988) {
    local_34[1] = -0x40f9f56e;
  }
  if ((float)local_44 < (float)local_34[1]) {
    local_34[1] = (int)local_44;
  }
  local_34[7] = 0;
  UStack_48 = *(UActorVTable *)(local_34 + 1);
  fStack_4c = (float)*local_34;
  if ((local_3c == 3) ||
     (UVar1 = (UActorVTable)param_1[0x182].orient.vec.y, UVar1._ub != (CDemonActor_vtable *)0x0)) {
    *(UActorVTable *)(local_34 + 3) = UStack_48;
  }
  else {
    iVar6 = *(int *)(param_1[0x186].actor_name + 0x14);
    UStack_168 = UVar1;
    UStack_164 = UVar1;
    UStack_160 = UVar1;
    if (iVar6 != 0) {
      (**(code **)(*(int *)(iVar6 + 0x154) + 0xe0))(iVar6);
      UStack_180 = UStack_15c;
      (&UStack_188)[(uint)bVar9 * -2 + 3] = aUStack_158[(uint)bVar9 * -2];
      (&UStack_188)[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           aUStack_158[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      if (&UStack_168 != &UStack_180) {
        UStack_168 = UStack_180;
        UStack_164 = UStack_17c;
        UStack_160 = UStack_178;
      }
    }
    if ((local_3c == 0) || (local_3c == 5)) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                ((CDeformableModelInstance *)(param_1 + 1),local_1c,&CStack_144);
      UStack_c0 = (UActorVTable)CStack_144.x;
      afStack_c8[(uint)bVar9 * -2 + 3] = *(float *)((int)&CStack_144 + (uint)bVar9 * -8 + 4);
      afStack_c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           *(float *)((int)&CStack_144 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      if (aUStack_104 + 0xb != (UActorVTable *)(afStack_c8 + 2)) {
        UStack_d8 = UStack_c0;
        fStack_d4 = fStack_bc;
        fStack_d0 = fStack_b8;
      }
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                ((CDeformableModelInstance *)(param_1 + 1),iVar8,&CStack_120);
      UStack_b4 = (UActorVTable)CStack_120.x;
      afStack_c8[(uint)bVar9 * -2 + 6] = *(float *)((int)&CStack_120 + (uint)bVar9 * -8 + 4);
      afStack_c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
           *(float *)((int)&CStack_120 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      if (aUStack_104 + 0xb != (UActorVTable *)(afStack_c8 + 5)) {
        UStack_d8 = UStack_b4;
        fStack_d4 = fStack_b0;
        fStack_d0 = fStack_ac;
      }
    }
    core_actor_cpp_FUN_00408b80(param_1,aUStack_104 + 0xb);
    piVar4 = local_34;
    CStack_114.x = afStack_134[2];
    *(float *)((int)&CStack_114 + (uint)bVar9 * -8 + 4) = afStack_134[(uint)bVar9 * -2 + 3];
    *(float *)((int)&CStack_114 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_134[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    CStack_174.x = (float)*piVar4;
    CStack_174.z = 0.0;
    CStack_174.y = (float)local_34[1];
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(&CStack_1b4,&CStack_174);
    aUStack_158[2] = (UActorVTable)0x0;
    aUStack_158[4] = (UActorVTable)0x3f800000;
    aUStack_158[3] = (UActorVTable)0x0;
    core_dirmat_cpp_FUN_0045b800(&CStack_1b4,aUStack_158 + 2);
    fStack_a8 = fStack_90;
    afStack_c8[(uint)bVar9 * -2 + 9] = afStack_8c[(uint)bVar9 * -2];
    afStack_c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
         afStack_8c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    iStack_50 = 0;
    fStack_30 = 1e+30;
    for (iStack_54 = 0; iStack_54 < g_CDemonSetPtr->threat_count; iStack_54 = iStack_54 + 1) {
      pCStack_2c = *(CDemonActor **)((int)g_CDemonSetPtr->threats + iStack_50);
      __arrinit(aCStack_22c,10,&g_CVectorTypeInfo);
      iStack_38 = (*((pCStack_2c->vtable)._ub)->getTargetPoints)(pCStack_2c,aCStack_22c);
      if ((0 < iStack_38) && (iVar8 = 0, 0 < iStack_38)) {
        pCStack_20 = aCStack_22c;
        do {
          core_actor_cpp_FUN_00408b80(pCStack_2c,pCStack_20);
          aCStack_84[0].x = fStack_108;
          *(UActorVTable *)((int)aCStack_84 + (uint)bVar9 * -8 + 4) = aUStack_104[(uint)bVar9 * -2];
          *(UActorVTable *)((int)aCStack_84 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
               aUStack_104[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          core_actor_cpp_FUN_00408bf0(param_1,aCStack_84);
          fStack_cc = fStack_138;
          afStack_c8[(uint)bVar9 * -2] = afStack_134[(uint)bVar9 * -2];
          afStack_c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
               afStack_134[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          fStack_18c = fStack_cc - (float)UStack_d8;
          UStack_188 = (UActorVTable)(afStack_c8[0] - fStack_d4);
          fStack_184 = afStack_c8[1] - fStack_d0;
          UStack_e4 = (UActorVTable)(fStack_cc - (float)UStack_d8);
          aUStack_104[(uint)bVar9 * -2 + 9] = (&UStack_188)[(uint)bVar9 * -2];
          aUStack_104[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
               (&UStack_188)[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          if ((0.0 < (double)fStack_dc) && ((double)fStack_dc <= _DAT_005cd6d7)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(aUStack_104 + 8);
            fVar3 = SQRT(fStack_dc * fStack_dc +
                         (float)UStack_e4 * (float)UStack_e4 + fStack_e0 * fStack_e0);
            fStack_fc = fStack_f0;
            aUStack_104[(uint)bVar9 * -2 + 3] = aUStack_104[(uint)bVar9 * -2 + 6];
            aUStack_104[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
                 aUStack_104[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
            if ((float)_DAT_005cd6cf < fVar3) {
              fStack_18 = -(float)UStack_168;
              if ((((float)_DAT_005cd6cf <= fVar3) &&
                  (fVar2 = SQRT(fVar3 * fVar3 - fStack_18 * fStack_18) / fVar3, fVar2 < 1.0)) &&
                 (0.0 <= fVar2)) {
                fVar10 = (float10)fVar2;
                acos();
                fStack_28 = (float)fVar10;
                if (0.0 <= fStack_18) {
                  fStack_f8 = fStack_f8 + fStack_28;
                }
                else {
                  fStack_f8 = fStack_f8 - fStack_28;
                }
                UStack_14 = (UActorVTable)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(fStack_f8);
                fStack_f8 = (float)UStack_14;
              }
              if ((((float)_DAT_005cd6cf <= fVar3) &&
                  (fVar3 = SQRT(fVar3 * fVar3 - (float)UStack_164 * (float)UStack_164) / fVar3,
                  fVar3 < 1.0)) && (0.0 <= fVar3)) {
                fVar10 = (float10)fVar3;
                acos();
                fStack_24 = (float)fVar10;
                if (0.0 <= (float)UStack_164) {
                  fStack_fc = fStack_fc + fStack_24;
                }
                else {
                  fStack_fc = fStack_fc - fStack_24;
                }
                UStack_14 = (UActorVTable)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(fStack_fc);
                fStack_fc = (float)UStack_14;
              }
            }
            fStack_9c = fStack_fc;
            aUStack_98[(uint)bVar9 * -2] = aUStack_104[(uint)bVar9 * -2 + 3];
            aUStack_98[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                 aUStack_104[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
            if (local_3c == 1) {
              aUStack_98[0]._ub = (CDemonActor_vtable *)(aUStack_98[0]._ub + _DAT_005cd6df);
            }
            fStack_234 = 0.5235988;
            if (fStack_dc < (float)_DAT_005cd6e7) {
              fStack_234 = 1.5707964;
            }
            if (((ABS(fStack_9c) <= fStack_234) && (local_40 <= (float)aUStack_98[0])) &&
               ((float)aUStack_98[0] <= (float)local_44)) {
              fVar3 = SQRT(fStack_dc * fStack_dc +
                           (float)UStack_e4 * (float)UStack_e4 + fStack_e0 * fStack_e0);
              fVar2 = 1.0 / fVar3;
              fStack_e0 = fStack_e0 * fVar2;
              UStack_e4._ub = (CDemonActor_vtable *)(UStack_e4._ub * fVar2);
              fStack_dc = fStack_dc * fVar2;
              fVar3 = fVar3 * (float)_DAT_005cd6b7 +
                      ((float)_DAT_005cd6af -
                      (fStack_dc * fStack_a0 + (float)UStack_e4 * fStack_a8 + fStack_e0 * fStack_a4)
                      );
              if (fVar3 < fStack_30) {
                core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
                core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,2);
                core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,param_1);
                core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCStack_2c);
                iVar6 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0
                                  (g_CDemonSetPtr,&CStack_114,aCStack_84);
                core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
                if (iVar6 == 0) {
                  UStack_48 = aUStack_98[0];
                  fStack_4c = fStack_9c;
                  local_34[7] = 1;
                  param_1[0x186].orient.vec.x = 2.0;
                  fStack_30 = fVar3;
                }
              }
            }
          }
          pCStack_20 = pCStack_20 + 1;
          iVar8 = iVar8 + 1;
        } while (iVar8 < iStack_38);
      }
      iStack_50 = iStack_50 + 4;
    }
  }
  fVar3 = param_3 * _DAT_005cd6a7 * (float)_DAT_005cd6bf;
  fStack_58 = fVar3;
  if (0.0 < param_1[0x186].orient.vec.x) {
    param_3 = param_1[0x186].orient.vec.x - param_3;
    param_1[0x186].orient.vec.x = param_3;
    if (param_3 < 0.0) {
      param_1[0x186].orient.vec.x = 0.0;
    }
    fStack_58 = (fVar3 * (float)_DAT_005cd6c7) / param_1[0x186].orient.vec.x;
    if (fVar3 < fStack_58) {
      fStack_58 = fVar3;
    }
  }
  fStack_5c = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                        ((float)UStack_48 - (float)*(UActorVTable *)(local_34 + 3));
  UStack_14 = (UActorVTable)fStack_5c;
  UStack_14 = (UActorVTable)
              core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(fStack_4c - (float)local_34[2]);
  fStack_64 = -fStack_58;
  if (fStack_5c < fStack_64) {
    fStack_5c = fStack_64;
  }
  if (fStack_58 < fStack_5c) {
    fStack_5c = fStack_58;
  }
  fStack_68 = -fStack_58;
  fStack_60 = (float)UStack_14;
  if ((float)UStack_14 < fStack_68) {
    fStack_60 = fStack_68;
  }
  if (fStack_58 < fStack_60) {
    fStack_60 = fStack_58;
  }
  UStack_14 = (UActorVTable)
              core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                        ((float)*(UActorVTable *)(local_34 + 3) + fStack_5c);
  *(UActorVTable *)(local_34 + 3) = UStack_14;
  pCVar7 = (CDemonActor *)
           core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0((float)local_34[2] + fStack_60);
  local_34[2] = (int)pCVar7;
  local_34[5] = 0x3f800000;
  if ((((float)local_34[7] == 1.4013e-45) &&
      (ABS((float)*(UActorVTable *)(local_34 + 3) - (float)UStack_48) < (float)_DAT_005cd6cf)) &&
     (ABS((float)local_34[2] - fStack_4c) < (float)_DAT_005cd6cf)) {
    local_34[7] = 2;
    return;
  }
  return;
}
