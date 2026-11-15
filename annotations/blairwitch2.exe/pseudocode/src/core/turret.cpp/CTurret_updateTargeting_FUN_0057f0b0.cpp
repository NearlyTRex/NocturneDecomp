// Name: core_turret.cpp_CTurret_updateTargeting_FUN_0057f0b0
// Address: 0057f0b0
// Address Range: [[0057f0b0, 0057f6fd]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_updateTargeting_FUN_0057f0b0(CTurret *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_turret_cpp_CTurret_updateTargeting_FUN_0057f0b0(CTurret *this_ptr,float delta_time)

{
  CDemonActor *pCVar1;
  int iVar2;
  uint corner_index;
  float *pfVar3;
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  byte bVar7;
  float *unaff_retaddr;
  float afStackY_10cc [45];
  char *apcStackY_1018 [903];
  CBoundingBox3D *in_stack_fffffe10;
  CBoundingBox3D *this_ptr_00;
  CVector3f *pCVar8;
  CDemonActor *in_stack_fffffe18;
  float fStack_1e4;
  CDemonActor *in_stack_fffffe24;
  CVector3f aCStack_1d4 [7];
  float local_178 [2];
  CBoundingBox3D CStack_170;
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
  byte auStack_e4 [8];
  float afStack_dc [4];
  CVector3f CStack_cc;
  float fStack_c0;
  float afStack_bc [4];
  byte auStack_ac [12];
  float fStack_a0;
  CVector3f CStack_9c;
  float fStack_90;
  CVector3f CStack_8c;
  CVector3f aCStack_80 [2];
  float fStack_60;
  float afStack_5c [2];
  void *pvStack_54;
  float afStack_50 [3];
  CDemonActor *pCStack_44;
  CDemonActor *pCStack_40;
  byte auStack_3c [8];
  float fStack_34;
  byte auStack_30 [8];
  char *apcStack_28 [4];
  int iStack_18;
  uint *puStack_14;
  void *pvVar9;
  
  bVar7 = 0;
  pCVar1 = this_ptr->guard_zone_box_trigger;
  if (pCVar1 == (CDemonActor *)0x0) {
    engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"%s has no guard trigger!\n")
    ;
    return;
  }
  (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,in_stack_fffffe10);
  corner_index = 0;
  pfVar3 = &fStack_128;
  pfVar5 = local_178;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
    pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
  }
  core_box_cpp_CBoundingBox3D_reset_FUN_0041b600(&CStack_110);
  do {
    core_box_cpp_CBoundingBox3D_getCorner_FUN_0041a600
              (&CStack_170,corner_index,(CVector3f *)(auStack_3c + 4));
    pCVar8 = aCStack_80;
    aCStack_80[0].x = (float)auStack_3c._4_4_;
    *(float *)((int)aCStack_80 + (uint)bVar7 * -8 + 4) = (&fStack_34)[(uint)bVar7 * -2];
    *(uint *)((int)aCStack_80 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)(auStack_30 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              (this_ptr->guard_zone_box_trigger,pCVar8,&CStack_8c);
    pCVar8 = (CVector3f *)(auStack_30 + 4);
    this_ptr_00 = &CStack_110;
    corner_index = corner_index + 1;
    auStack_30._4_4_ = CStack_8c.x;
    apcStack_28[(uint)bVar7 * -2] = *(char **)((int)aCStack_80 + (uint)bVar7 * -8 + -8);
    apcStack_28[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         *(char **)((int)aCStack_80 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -4);
    core_box_cpp_CBoundingBox3D_expand_FUN_0041a590(this_ptr_00,pCVar8);
  } while ((int)corner_index < 8);
  afStack_5c[0] = 999.0;
  afStack_5c[1] = 999.0;
  pvStack_54 = (void *)0x4479c000;
  pvVar9 = (void *)0x0;
  puStack_14 = auStack_134;
  iStack_18 = 0;
  CStack_110.min.x = CStack_110.min.x + _DAT_005ed804;
  CStack_110.min.y = CStack_110.min.y + _DAT_005ed804;
  CStack_110.min.z = CStack_110.min.z + _DAT_005ed804;
  CStack_110.max.x = CStack_110.max.x + _DAT_005ed808;
  CStack_110.max.y = CStack_110.max.y + _DAT_005ed808;
  CStack_110.max.z = CStack_110.max.z + _DAT_005ed808;
  apcStack_28[2] = this_ptr->allowed_victim_types;
  while( true ) {
    if (g_CDemonSetPtr->actor_count <= (int)pvVar9) break;
    pCVar1 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_18);
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c840(pCVar1,apcStack_28[2]);
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
          (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,(CBoundingBox3D *)in_stack_fffffe24);
          puVar4 = auStack_144;
          puVar6 = auStack_134;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
          auStack_ac._4_4_ = fStack_12c + *unaff_retaddr;
          auStack_ac._8_4_ = fStack_128 + unaff_retaddr[1];
          fStack_a0 = fStack_124 + unaff_retaddr[2];
          fStack_60 = fStack_12c + *unaff_retaddr;
          afStack_5c[(uint)bVar7 * -2] = *(float *)(auStack_ac + (uint)bVar7 * -8 + 8);
          afStack_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               (&fStack_a0)[(uint)bVar7 * -2 + (uint)bVar7 * -2];
          fStack_c0 = fStack_60 * _DAT_005ed80c;
          afStack_bc[0] = afStack_5c[0] * _DAT_005ed80c;
          afStack_bc[1] = afStack_5c[1] * _DAT_005ed80c;
          afStack_bc[2] = fStack_60 * _DAT_005ed80c;
          afStack_bc[(uint)bVar7 * -2 + 3] = afStack_bc[(uint)bVar7 * -2];
          *(float *)(auStack_ac + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          if (aCStack_1d4 != (CVector3f *)(afStack_bc + 2)) {
            aCStack_1d4[0].x = afStack_bc[2];
            aCStack_1d4[0].y = afStack_bc[3];
            aCStack_1d4[0].z = (float)auStack_ac._0_4_;
          }
        }
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                  (pCVar1,aCStack_1d4,(CVector3f *)auStack_30);
        pCVar8 = &CStack_9c;
        CStack_9c.x = (float)auStack_30._0_4_;
        *(char **)((int)&CStack_9c + (uint)bVar7 * -8 + 4) = apcStack_28[(uint)bVar7 * -2 + -1];
        *(char **)((int)&CStack_9c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             apcStack_28[(uint)bVar7 * -2 + (uint)bVar7 * -2];
        in_stack_fffffe24 = this_ptr->guard_zone_box_trigger;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                  (in_stack_fffffe24,pCVar8,(CVector3f *)auStack_3c);
        fStack_90 = (float)auStack_3c._0_4_;
        *(uint *)((int)&CStack_8c + (uint)bVar7 * -8) =
             *(uint *)(auStack_3c + (uint)bVar7 * -8 + 4);
        *(float *)((int)aCStack_80 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -8) =
             (&fStack_34)[(uint)bVar7 * -2 + (uint)bVar7 * -2];
        if (((CStack_170.max.z <= fStack_90) && (fStack_158 <= CStack_8c.x)) &&
           ((fStack_154 <= CStack_8c.y &&
            (((fStack_90 <= fStack_150 && (CStack_8c.x <= fStack_14c)) &&
             (CStack_8c.y <= fStack_148)))))) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                    ((CDemonActor *)this_ptr,&CStack_9c,(CVector3f *)auStack_e4);
          pvStack_54 = (void *)auStack_e4._0_4_;
          afStack_50[(uint)bVar7 * -2] = *(float *)(auStack_e4 + (uint)bVar7 * -8 + 4);
          afStack_50[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_dc[(uint)bVar7 * -2 + (uint)bVar7 * -2];
          in_stack_fffffe24 = (CDemonActor *)0x57f581;
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
          CStack_8c.z = afStack_dc[1];
          *(float *)((int)aCStack_80 + (uint)bVar7 * -8) = afStack_dc[(uint)bVar7 * -2 + 2];
          *(float *)((int)aCStack_80 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 4) =
               afStack_dc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 3];
          if (((0xBF060A92 <= CStack_8c.z) && (CStack_8c.z <= 0x3F9C61AA)) &&
             (SQRT(aCStack_80[0].y * aCStack_80[0].y +
                   CStack_8c.z * CStack_8c.z + aCStack_80[0].x * aCStack_80[0].x) <=
              SQRT((float)pCStack_40 * (float)pCStack_40 +
                   afStack_50[2] * afStack_50[2] + (float)pCStack_44 * (float)pCStack_44))) {
            if (afStack_50 + 2 != &CStack_8c.z) {
              afStack_50[2] = CStack_8c.z;
              pCStack_44 = (CDemonActor *)aCStack_80[0].x;
              pCStack_40 = (CDemonActor *)aCStack_80[0].y;
            }
            if ((CVector3f *)(afStack_dc + 4) != &CStack_9c) {
              CStack_cc.x = CStack_9c.x;
            }
          }
        }
      }
    }
    pvVar9 = (void *)((int)pvVar9 + 1);
    iStack_18 = iStack_18 + 4;
  }
  if ((int)afStack_5c[1] < 0x42c60001) {
    core_turret_cpp_CTurret_aimAtTarget_FUN_0057f700
              (this_ptr,(CVector3f *)(auStack_e4 + 4),delta_time);
    if ((this_ptr->base).fire_cooldown_timer <= 0.0) {
      (*(((this_ptr->base).base.vtable._uc)->_uc).isGrabbable)
                ((CCharacter *)this_ptr,in_stack_fffffe18);
    }
    this_ptr->fire_sound_timer = 1.0;
    return;
  }
  core_turret_cpp_CTurret_updatePatrol_FUN_0057fa00(this_ptr,delta_time);
  return;
}
