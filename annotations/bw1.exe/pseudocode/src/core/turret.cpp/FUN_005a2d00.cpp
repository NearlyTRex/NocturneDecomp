// Name: core_turret.cpp_FUN_005a2d00
// Address: 005a2d00
// Address Range: [[005a2d00, 005a334d]]
// Convention: unknown
// Signature: void core_turret_cpp_FUN_005a2d00(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_turret_cpp_FUN_005a2d00(CCharacter *param_1,float param_2)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  uint *puVar5;
  float *pfVar6;
  uint *puVar7;
  byte bVar8;
  float *unaff_retaddr;
  float afStackY_10cc [3];
  UActorVTable aUStackY_10c0 [6];
  float afStackY_10a8 [9];
  UActorVTable aUStackY_1084 [15];
  float afStackY_1048 [9];
  UActorVTable aUStackY_1024 [906];
  CBoundingBox3D *in_stack_fffffe10;
  CBoundingBox3D *this_ptr;
  UActorVTable *point;
  CDemonActor *in_stack_fffffe18;
  float fStack_1e4;
  CBoundingBox3D *in_stack_fffffe24;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_178 [2];
  byte auStack_170 [20];
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  uint auStack_144 [4];
  uint auStack_134 [2];
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  CBoundingBox3D CStack_110;
  int iStack_e4;
  CVector3f CStack_e0;
  UActorVTable aUStack_d4 [2];
  float afStack_cc [3];
  float fStack_c0;
  float afStack_bc [4];
  byte auStack_ac [12];
  float afStack_a0 [2];
  UActorVTable aUStack_98 [4];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_60;
  float afStack_5c [2];
  int iStack_54;
  float afStack_50 [4];
  float fStack_40;
  UActorVTable UStack_3c;
  UActorVTable aUStack_38 [2];
  uint uStack_30;
  UActorVTable aUStack_2c [3];
  float *pfStack_20;
  int iStack_18;
  uint *puStack_14;
  
  bVar8 = 0;
  pCVar1 = (CDemonActor *)(param_1->model).rest_bone_scales[0x45];
  if (pCVar1 == (CDemonActor *)0x0) {
    engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"%s has no guard trigger!\n")
    ;
    return;
  }
  (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,in_stack_fffffe10);
  iVar3 = 0;
  pfVar4 = &fStack_128;
  pfVar6 = local_178;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar6 = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
    pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
  }
  core_box_cpp_CBoundingBox3D_reset_FUN_00421570(&CStack_110);
  do {
    core_box_cpp_FUN_00420570(auStack_170,iVar3);
    pfVar4 = &fStack_80;
    fStack_80 = (float)aUStack_38[0];
    aUStack_98[(uint)bVar8 * -2 + 7] = aUStack_38[(uint)bVar8 * -2 + 1];
    aUStack_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 8] =
         aUStack_38[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 2];
    core_actor_cpp_FUN_00408b40((param_1->model).rest_bone_scales[0x45],pfVar4);
    point = aUStack_2c;
    this_ptr = &CStack_110;
    iVar3 = iVar3 + 1;
    aUStack_2c[0] = aUStack_98[3];
    aUStack_2c[(uint)bVar8 * -2 + 1] = aUStack_98[(uint)bVar8 * -2 + 4];
    aUStack_2c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 2] =
         aUStack_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 5];
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500(this_ptr,(CVector3f *)point);
  } while (iVar3 < 8);
  afStack_5c[0] = 999.0;
  afStack_5c[1] = 999.0;
  iStack_54 = 0x4479c000;
  iVar2 = 0;
  puStack_14 = auStack_134;
  iStack_18 = 0;
  CStack_110.min.x = CStack_110.min.x + _DAT_005f8b60;
  CStack_110.min.y = CStack_110.min.y + _DAT_005f8b60;
  CStack_110.min.z = CStack_110.min.z + _DAT_005f8b60;
  CStack_110.max.x = CStack_110.max.x + _DAT_005f8b64;
  CStack_110.max.y = CStack_110.max.y + _DAT_005f8b64;
  CStack_110.max.z = CStack_110.max.z + _DAT_005f8b64;
  pfStack_20 = (param_1->model).rest_bone_scales + 0x46;
  while( true ) {
    if (g_CDemonSetPtr->actor_count <= iVar2) break;
    pCVar1 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_18);
    iVar3 = core_actor_cpp_isOfClass_FUN_0040c550(pCVar1,(char *)pfStack_20);
    if ((((iVar3 != 0) && (CStack_110.min.x <= (pCVar1->location).position.x)) &&
        (CStack_110.min.y <= (pCVar1->location).position.y)) &&
       (((CStack_110.min.z <= (pCVar1->location).position.z &&
         ((pCVar1->location).position.x <= CStack_110.max.x)) &&
        (((pCVar1->location).position.y <= CStack_110.max.y &&
         ((pCVar1->location).position.z <= CStack_110.max.z)))))) {
      iVar3 = (*((pCVar1->vtable)._ub)->canLookAt)(pCVar1);
      if (iVar3 != 0) {
        __arrinit(&fStack_1e4,10,&g_CVectorTypeInfo);
        in_stack_fffffe18 = (CDemonActor *)&fStack_1e4;
        iVar3 = (*((pCVar1->vtable)._ub)->getTargetPoints)(pCVar1,(CVector3f *)&fStack_1e4);
        if (iVar3 < 1) {
          fStack_1e4 = 8.282354e-39;
          (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,in_stack_fffffe24);
          puVar5 = auStack_144;
          puVar7 = auStack_134;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
          }
          auStack_ac._4_4_ = fStack_12c + *unaff_retaddr;
          auStack_ac._8_4_ = fStack_128 + unaff_retaddr[1];
          afStack_a0[0] = fStack_124 + unaff_retaddr[2];
          fStack_60 = fStack_12c + *unaff_retaddr;
          afStack_5c[(uint)bVar8 * -2] = *(float *)(auStack_ac + (uint)bVar8 * -8 + 8);
          afStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2];
          fStack_c0 = fStack_60 * _DAT_005f8b68;
          afStack_bc[0] = afStack_5c[0] * _DAT_005f8b68;
          afStack_bc[1] = afStack_5c[1] * _DAT_005f8b68;
          afStack_bc[2] = fStack_60 * _DAT_005f8b68;
          afStack_bc[(uint)bVar8 * -2 + 3] = afStack_bc[(uint)bVar8 * -2];
          *(float *)(auStack_ac + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          if (&fStack_1d4 != afStack_bc + 2) {
            fStack_1d4 = afStack_bc[2];
            fStack_1d0 = afStack_bc[3];
            fStack_1cc = (float)auStack_ac._0_4_;
          }
        }
        core_actor_cpp_FUN_00408b40();
        afStack_a0[1] = (float)uStack_30;
        aUStack_98[(uint)bVar8 * -2] = aUStack_2c[(uint)bVar8 * -2];
        aUStack_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             aUStack_2c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        in_stack_fffffe24 = (CBoundingBox3D *)(param_1->model).rest_bone_scales[0x45];
        core_actor_cpp_FUN_00408bb0();
        aUStack_98[2] = UStack_3c;
        aUStack_98[(uint)bVar8 * -2 + 3] = aUStack_38[(uint)bVar8 * -2];
        aUStack_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             aUStack_38[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        if (((fStack_15c <= (float)aUStack_98[2]) && (fStack_158 <= (float)aUStack_98[3])) &&
           ((fStack_154 <= fStack_88 &&
            ((((float)aUStack_98[2] <= fStack_150 && ((float)aUStack_98[3] <= fStack_14c)) &&
             (fStack_88 <= fStack_148)))))) {
          core_actor_cpp_FUN_00408bb0();
          iStack_54 = iStack_e4;
          afStack_50[(uint)bVar8 * -2] = *(float *)((int)&CStack_e0 + (uint)bVar8 * -8);
          afStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               *(float *)(aUStack_d4 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + -2);
          in_stack_fffffe24 = (CBoundingBox3D *)0x5a31d1;
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
          fStack_84 = CStack_e0.z;
          aUStack_98[(uint)bVar8 * -2 + 6] = aUStack_d4[(uint)bVar8 * -2];
          aUStack_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
               aUStack_d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          if (((0xBF060A92 <= fStack_84) && (fStack_84 <= 0x3F9C61AA)) &&
             (SQRT(fStack_7c * fStack_7c + fStack_84 * fStack_84 + fStack_80 * fStack_80) <=
              SQRT(fStack_40 * fStack_40 +
                   afStack_50[2] * afStack_50[2] + afStack_50[3] * afStack_50[3]))) {
            if (afStack_50 + 2 != &fStack_84) {
              afStack_50[2] = fStack_84;
              afStack_50[3] = fStack_80;
              fStack_40 = fStack_7c;
            }
            if (aUStack_d4 + 2 != (UActorVTable *)(afStack_a0 + 1)) {
              afStack_cc[0] = afStack_a0[1];
            }
          }
        }
      }
    }
    iVar2 = iVar2 + 1;
    iStack_18 = iStack_18 + 4;
  }
  if ((int)afStack_5c[1] < 0x42c60001) {
    core_turret_cpp_CTurret_aimAtTarget_FUN_005a3350((CTurret *)param_1,&CStack_e0,param_2);
    if ((param_1->model).bone_origins[0x1c].x <= 0.0) {
      (*(((param_1->base).vtable._uc)->_uc).isGrabbable)(param_1,in_stack_fffffe18);
    }
    (param_1->model).bone_transform.pose_data.bone_rotations[6].x = 1.0;
    return;
  }
  core_turret_cpp_CTurret_updatePatrol_FUN_005a3650((CTurret *)param_1,param_2);
  return;
}
