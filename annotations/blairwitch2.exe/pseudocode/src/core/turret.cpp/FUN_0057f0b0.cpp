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
  float afStackY_10cc [948];
  CBoundingBox3D *in_stack_fffffe10;
  CBoundingBox3D *this_ptr;
  CVector3f *point;
  CDemonActor *in_stack_fffffe18;
  float fStack_1e4;
  CBoundingBox3D *in_stack_fffffe24;
  float fStack_1d4;
  char acStack_1d0 [4];
  char acStack_1cc [84];
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
  CBoundingBox3D aCStack_110 [2];
  CVector3f CStack_e0;
  float afStack_d4 [5];
  float fStack_c0;
  float afStack_bc [3];
  char acStack_b0 [4];
  float afStack_ac [2];
  float afStack_a4 [5];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_60;
  float afStack_5c [5];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float afStack_38 [3];
  CVector3f CStack_2c;
  char *pcStack_20;
  int iStack_18;
  uint *puStack_14;
  
  bVar8 = 0;
  pCVar1 = *(CDemonActor **)&(param_1->model).field_0x628;
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
  core_box_cpp_CBoundingBox3D_reset_FUN_0041b600(aCStack_110);
  do {
    core_box_cpp_FUN_0041a600(auStack_170,iVar3);
    pfVar4 = &fStack_80;
    fStack_80 = afStack_38[0];
    *(float *)(acStack_b0 + ((uint)bVar8 * -2 + 10) * 4 + 0xc) = afStack_38[(uint)bVar8 * -2 + 1];
    *(float *)(acStack_b0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xb) * 4 + 0xc) =
         afStack_38[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 2];
    core_actor_cpp_FUN_00408d70(*(uint *)&(param_1->model).field_0x628,pfVar4);
    point = &CStack_2c;
    this_ptr = aCStack_110;
    iVar3 = iVar3 + 1;
    CStack_2c.x = fStack_8c;
    *(uint *)((int)&CStack_2c + (uint)bVar8 * -8 + 4) =
         *(uint *)(acStack_b0 + ((uint)bVar8 * -2 + 7) * 4 + 0xc);
    *(uint *)((int)&CStack_2c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         *(uint *)(acStack_b0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 8) * 4 + 0xc);
    core_box_cpp_CBoundingBox3D_expand_FUN_0041a590(this_ptr,point);
  } while (iVar3 < 8);
  afStack_5c[0] = 999.0;
  afStack_5c[1] = 999.0;
  afStack_5c[2] = 999.0;
  iVar2 = 0;
  puStack_14 = auStack_134;
  iStack_18 = 0;
  aCStack_110[0].min.x = aCStack_110[0].min.x + _DAT_005ed804;
  aCStack_110[0].min.y = aCStack_110[0].min.y + _DAT_005ed804;
  aCStack_110[0].min.z = aCStack_110[0].min.z + _DAT_005ed804;
  aCStack_110[0].max.x = aCStack_110[0].max.x + _DAT_005ed808;
  aCStack_110[0].max.y = aCStack_110[0].max.y + _DAT_005ed808;
  aCStack_110[0].max.z = aCStack_110[0].max.z + _DAT_005ed808;
  pcStack_20 = &(param_1->model).field_0x62c;
  while( true ) {
    if (g_CDemonSetPtr->actor_count <= iVar2) break;
    pCVar1 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_18);
    iVar3 = core_actor_cpp_isOfClass_FUN_0040c840(pCVar1,pcStack_20);
    if ((((iVar3 != 0) && (aCStack_110[0].min.x <= *(float *)&pCVar1->field_0x20)) &&
        (aCStack_110[0].min.y <= *(float *)&pCVar1->field_0x24)) &&
       (((aCStack_110[0].min.z <= *(float *)&pCVar1->field_0x28 &&
         (*(float *)&pCVar1->field_0x20 <= aCStack_110[0].max.x)) &&
        ((*(float *)&pCVar1->field_0x24 <= aCStack_110[0].max.y &&
         (*(float *)&pCVar1->field_0x28 <= aCStack_110[0].max.z)))))) {
      iVar3 = (*((pCVar1->vtable)._ub)->canLookAt)(pCVar1);
      if (iVar3 != 0) {
        __arrinit(&stack0xfffffe1c,10,&g_CVectorTypeInfo);
        in_stack_fffffe18 = (CDemonActor *)&stack0xfffffe1c;
        iVar3 = (*((pCVar1->vtable)._ub)->getTargetPoints)(pCVar1,(CVector3f *)&stack0xfffffe1c);
        if (iVar3 < 1) {
          fStack_1e4 = 8.077047e-39;
          (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,in_stack_fffffe24);
          puVar5 = auStack_144;
          puVar7 = auStack_134;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
          }
          afStack_ac[1] = fStack_12c + *unaff_retaddr;
          afStack_a4[0] = fStack_128 + unaff_retaddr[1];
          afStack_a4[1] = fStack_124 + unaff_retaddr[2];
          fStack_60 = fStack_12c + *unaff_retaddr;
          afStack_5c[(uint)bVar8 * -2] = *(float *)(acStack_b0 + (uint)bVar8 * -8 + 0xc);
          afStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               *(float *)(acStack_b0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 1) * 4 + 0xc);
          fStack_c0 = fStack_60 * _DAT_005ed80c;
          afStack_bc[0] = afStack_5c[0] * _DAT_005ed80c;
          afStack_bc[1] = afStack_5c[1] * _DAT_005ed80c;
          afStack_bc[2] = fStack_60 * _DAT_005ed80c;
          afStack_bc[(uint)bVar8 * -2 + 3] = afStack_bc[(uint)bVar8 * -2];
          *(float *)(acStack_b0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4 + 4) =
               afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          if (&stack0xfffffe2c != afStack_bc + 2) {
            fStack_1d4 = afStack_bc[2];
            acStack_1d0[0] = acStack_b0[0];
            acStack_1d0[1] = acStack_b0[1];
            acStack_1d0[2] = acStack_b0[2];
            acStack_1d0[3] = acStack_b0[3];
            acStack_1cc._0_4_ = afStack_ac[0];
          }
        }
        core_actor_cpp_FUN_00408d70();
        afStack_a4[2] = afStack_38[2];
        *(uint *)(acStack_b0 + ((uint)bVar8 * -2 + 3) * 4 + 0xc) =
             *(uint *)((int)&CStack_2c + (uint)bVar8 * -8);
        *(uint *)(acStack_b0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 4) * 4 + 0xc) =
             *(uint *)((int)&CStack_2c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 4);
        in_stack_fffffe24 = *(CBoundingBox3D **)&(param_1->model).field_0x628;
        core_actor_cpp_FUN_00408de0();
        fStack_90 = fStack_3c;
        *(float *)(acStack_b0 + ((uint)bVar8 * -2 + 6) * 4 + 0xc) = afStack_38[(uint)bVar8 * -2];
        *(float *)(acStack_b0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 7) * 4 + 0xc) =
             afStack_38[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        if (((fStack_15c <= fStack_90) && (fStack_158 <= fStack_8c)) &&
           ((fStack_154 <= fStack_88 &&
            (((fStack_90 <= fStack_150 && (fStack_8c <= fStack_14c)) && (fStack_88 <= fStack_148))))
           )) {
          core_actor_cpp_FUN_00408de0();
          afStack_5c[2] = aCStack_110[1].max.z;
          afStack_5c[(uint)bVar8 * -2 + 3] = *(float *)((int)&CStack_e0 + (uint)bVar8 * -8);
          afStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
               afStack_d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -2];
          in_stack_fffffe24 = (CBoundingBox3D *)0x57f581;
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
          fStack_84 = CStack_e0.z;
          *(float *)(acStack_b0 + ((uint)bVar8 * -2 + 9) * 4 + 0xc) = afStack_d4[(uint)bVar8 * -2];
          *(float *)(acStack_b0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 10) * 4 + 0xc) =
               afStack_d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          if (((0xBF060A92 <= fStack_84) && (fStack_84 <= 0x3F9C61AA)) &&
             (SQRT(fStack_7c * fStack_7c + fStack_84 * fStack_84 + fStack_80 * fStack_80) <=
              SQRT(fStack_40 * fStack_40 + fStack_48 * fStack_48 + fStack_44 * fStack_44))) {
            if (afStack_5c + 5 != &fStack_84) {
              fStack_48 = fStack_84;
              fStack_44 = fStack_80;
              fStack_40 = fStack_7c;
            }
            if (afStack_d4 + 2 != afStack_a4 + 2) {
              afStack_d4[2] = afStack_a4[2];
            }
          }
        }
      }
    }
    iVar2 = iVar2 + 1;
    iStack_18 = iStack_18 + 4;
  }
  if ((int)afStack_5c[1] < 0x42c60001) {
    core_turret_cpp_CTurret_aimAtTarget_FUN_0057f700((CTurret *)param_1,&CStack_e0,param_2);
    if (*(float *)&(param_1->model).field_0x1a8 <= 0.0) {
      (*(((param_1->base).vtable._uc)->_uc).isGrabbable)(param_1,in_stack_fffffe18);
    }
    *(uint *)&(param_1->model).field_0x714 = 0x3f800000;
    return;
  }
  core_turret_cpp_CTurret_updatePatrol_FUN_0057fa00((CTurret *)param_1,param_2);
  return;
}
