// Name: core_turret.cpp_FUN_0057f0b0
// Address: 0057f0b0
// Address Range: [[0057f0b0, 0057f6fd]]
// Convention: unknown
// Signature: void core_turret_cpp_FUN_0057f0b0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_turret_cpp_FUN_0057f0b0(CCharacter *param_1,float param_2)

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
  float afStackY_10cc [24];
  CDemonActor *apCStackY_106c [9];
  float afStackY_1048 [9];
  CDemonActor *pCStackY_1024;
  float afStackY_1020 [905];
  CBoundingBox3D *in_stack_fffffe10;
  CBoundingBox3D *this_ptr;
  CDemonActor **ppCVar9;
  CVector3f *point;
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
  void *pvStack_e4;
  CVector3f CStack_e0;
  float afStack_d4 [5];
  float fStack_c0;
  float afStack_bc [4];
  byte auStack_ac [12];
  float afStack_a0 [4];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  CDemonActor *apCStack_80 [8];
  float fStack_60;
  float afStack_5c [2];
  void *pvStack_54;
  float afStack_50 [3];
  CDemonActor *pCStack_44;
  CDemonActor *pCStack_40;
  float fStack_3c;
  CDemonActor *apCStack_38 [2];
  float fStack_30;
  CVector3f CStack_2c;
  float *pfStack_20;
  int iStack_18;
  uint *puStack_14;
  void *pvVar10;
  
  bVar8 = 0;
  pCVar1 = (CDemonActor *)(param_1->model).rest_bone_scales[0x45];
  if (pCVar1 == (CDemonActor *)0x0) {
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s has no guard trigger!\n",param_1);
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
  core_box_cpp_CBoundingBox3D_reset_FUN_0041b600(&CStack_110);
  do {
    core_box_cpp_FUN_0041a600(auStack_170,iVar3);
    ppCVar9 = apCStack_80;
    apCStack_80[0] = apCStack_38[0];
    apCStack_80[(uint)bVar8 * -2 + 1] = apCStack_38[(uint)bVar8 * -2 + 1];
    apCStack_80[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 2] =
         (CDemonActor *)(&fStack_30)[(uint)bVar8 * -2 + (uint)bVar8 * -2];
    core_actor_cpp_FUN_00408d70((param_1->model).rest_bone_scales[0x45],ppCVar9);
    point = &CStack_2c;
    this_ptr = &CStack_110;
    iVar3 = iVar3 + 1;
    CStack_2c.x = fStack_8c;
    *(float *)((int)&CStack_2c + (uint)bVar8 * -8 + 4) = afStack_a0[(uint)bVar8 * -2 + 6];
    *(float *)((int)&CStack_2c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
    core_box_cpp_CBoundingBox3D_expand_FUN_0041a590(this_ptr,point);
  } while (iVar3 < 8);
  afStack_5c[0] = 999.0;
  afStack_5c[1] = 999.0;
  pvStack_54 = (void *)0x4479c000;
  pvVar10 = (void *)0x0;
  puStack_14 = auStack_134;
  iStack_18 = 0;
  CStack_110.min.x = CStack_110.min.x + _DAT_005ed804;
  CStack_110.min.y = CStack_110.min.y + _DAT_005ed804;
  CStack_110.min.z = CStack_110.min.z + _DAT_005ed804;
  CStack_110.max.x = CStack_110.max.x + _DAT_005ed808;
  CStack_110.max.y = CStack_110.max.y + _DAT_005ed808;
  CStack_110.max.z = CStack_110.max.z + _DAT_005ed808;
  pfStack_20 = (param_1->model).rest_bone_scales + 0x46;
  while( true ) {
    if (g_CDemonSetPtr->actor_count <= (int)pvVar10) break;
    pCVar1 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_18);
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c840(pCVar1,(char *)pfStack_20);
    if ((((iVar2 != 0) && (CStack_110.min.x <= (pCVar1->location).position.x)) &&
        (CStack_110.min.y <= (pCVar1->location).position.y)) &&
       (((CStack_110.min.z <= (pCVar1->location).position.z &&
         ((pCVar1->location).position.x <= CStack_110.max.x)) &&
        (((pCVar1->location).position.y <= CStack_110.max.y &&
         ((pCVar1->location).position.z <= CStack_110.max.z)))))) {
      iVar2 = (*((pCVar1->vtable)._ub)->canLookAt)(pCVar1);
      if (iVar2 != 0) {
        __arrinit(&fStack_1e4,10,&g_CVectorTypeInfo);
        in_stack_fffffe18 = (CDemonActor *)&fStack_1e4;
        iVar2 = (*((pCVar1->vtable)._ub)->getTargetPoints)(pCVar1,(CVector3f *)&fStack_1e4);
        if (iVar2 < 1) {
          fStack_1e4 = 8.077047e-39;
          (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,in_stack_fffffe24);
          puVar5 = auStack_144;
          puVar7 = auStack_134;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
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
          fStack_c0 = fStack_60 * _DAT_005ed80c;
          afStack_bc[0] = afStack_5c[0] * _DAT_005ed80c;
          afStack_bc[1] = afStack_5c[1] * _DAT_005ed80c;
          afStack_bc[2] = fStack_60 * _DAT_005ed80c;
          afStack_bc[(uint)bVar8 * -2 + 3] = afStack_bc[(uint)bVar8 * -2];
          *(float *)(auStack_ac + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          if (&fStack_1d4 != afStack_bc + 2) {
            fStack_1d4 = afStack_bc[2];
            fStack_1d0 = afStack_bc[3];
            fStack_1cc = (float)auStack_ac._0_4_;
          }
        }
        core_actor_cpp_FUN_00408d70();
        afStack_a0[1] = fStack_30;
        afStack_a0[(uint)bVar8 * 0xfffffffe + 2] =
             (float)*(uint *)((int)&CStack_2c + (uint)bVar8 * -8);
        afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 3] =
             (float)*(uint *)((int)&CStack_2c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 4);
        in_stack_fffffe24 = (CBoundingBox3D *)(param_1->model).rest_bone_scales[0x45];
        core_actor_cpp_FUN_00408de0();
        fStack_90 = fStack_3c;
        afStack_a0[(uint)bVar8 * -2 + 5] = (float)apCStack_38[(uint)bVar8 * -2];
        afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 6] =
             (float)apCStack_38[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        if (((fStack_15c <= fStack_90) && (fStack_158 <= fStack_8c)) &&
           ((fStack_154 <= fStack_88 &&
            (((fStack_90 <= fStack_150 && (fStack_8c <= fStack_14c)) && (fStack_88 <= fStack_148))))
           )) {
          core_actor_cpp_FUN_00408de0();
          pvStack_54 = pvStack_e4;
          afStack_50[(uint)bVar8 * -2] = *(float *)((int)&CStack_e0 + (uint)bVar8 * -8);
          afStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               afStack_d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -2];
          in_stack_fffffe24 = (CBoundingBox3D *)0x57f581;
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
          fStack_84 = CStack_e0.z;
          apCStack_80[(uint)bVar8 * -2] = (CDemonActor *)afStack_d4[(uint)bVar8 * -2];
          apCStack_80[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               (CDemonActor *)afStack_d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          if (((0xBF060A92 <= fStack_84) && (fStack_84 <= 0x3F9C61AA)) &&
             (SQRT((float)apCStack_80[1] * (float)apCStack_80[1] +
                   fStack_84 * fStack_84 + (float)apCStack_80[0] * (float)apCStack_80[0]) <=
              SQRT((float)pCStack_40 * (float)pCStack_40 +
                   afStack_50[2] * afStack_50[2] + (float)pCStack_44 * (float)pCStack_44))) {
            if (afStack_50 + 2 != &fStack_84) {
              afStack_50[2] = fStack_84;
              pCStack_44 = apCStack_80[0];
              pCStack_40 = apCStack_80[1];
            }
            if (afStack_d4 + 2 != afStack_a0 + 1) {
              afStack_d4[2] = afStack_a0[1];
            }
          }
        }
      }
    }
    pvVar10 = (void *)((int)pvVar10 + 1);
    iStack_18 = iStack_18 + 4;
  }
  if ((int)afStack_5c[1] < 0x42c60001) {
    core_turret_cpp_CTurret_aimAtTarget_FUN_0057f700((CTurret *)param_1,&CStack_e0,param_2);
    if ((param_1->model).bone_origins[0x1c].x <= 0.0) {
      (*(((param_1->base).vtable._uc)->_uc).isGrabbable)(param_1,in_stack_fffffe18);
    }
    (param_1->model).bone_transform.pose_data.bone_rotations[6].x = 1.0;
    return;
  }
  core_turret_cpp_CTurret_updatePatrol_FUN_0057fa00((CTurret *)param_1,param_2);
  return;
}
