// Name: core_turret.cpp_CTurret_updateTargeting_FUN_005a2d00
// Address: 005a2d00
// Address Range: [[005a2d00, 005a334d]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_updateTargeting_FUN_005a2d00(CTurret *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_turret_cpp_CTurret_updateTargeting_FUN_005a2d00(CTurret *this_ptr,float delta_time)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  uint corner_index;
  float *pfVar4;
  uint *puVar5;
  float *pfVar6;
  uint *puVar7;
  byte bVar8;
  float *unaff_retaddr;
  float afStackY_10cc [948];
  CBoundingBox3D *in_stack_fffffe10;
  CBoundingBox3D *this_ptr_00;
  CVector3f *pCVar9;
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
  UActorVTable UStack_90;
  CVector3f CStack_8c;
  CVector3f aCStack_80 [2];
  float fStack_60;
  float afStack_5c [5];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  UActorVTable UStack_3c;
  byte auStack_38 [12];
  CVector3f CStack_2c;
  char *pcStack_20;
  int iStack_18;
  uint *puStack_14;
  
  bVar8 = 0;
  pCVar1 = this_ptr->guard_zone_box_trigger;
  if (pCVar1 == (CDemonActor *)0x0) {
    engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"%s has no guard trigger!\n")
    ;
    return;
  }
  (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,in_stack_fffffe10);
  corner_index = 0;
  pfVar4 = &fStack_128;
  pfVar6 = local_178;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar6 = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
    pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
  }
  core_box_cpp_CBoundingBox3D_reset_FUN_00421570(&CStack_110);
  do {
    core_box_cpp_CBoundingBox3D_getCorner_FUN_00420570
              (&CStack_170,corner_index,(CVector3f *)auStack_38);
    pCVar9 = aCStack_80;
    aCStack_80[0].x = (float)auStack_38._0_4_;
    *(uint *)((int)aCStack_80 + (uint)bVar8 * -8 + 4) =
         *(uint *)(auStack_38 + (uint)bVar8 * -8 + 4);
    *(uint *)((int)aCStack_80 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         *(uint *)(auStack_38 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
              (this_ptr->guard_zone_box_trigger,pCVar9,&CStack_8c);
    pCVar9 = &CStack_2c;
    this_ptr_00 = &CStack_110;
    corner_index = corner_index + 1;
    CStack_2c.x = CStack_8c.x;
    *(uint *)((int)&CStack_2c + (uint)bVar8 * -8 + 4) =
         *(uint *)((int)aCStack_80 + (uint)bVar8 * -8 + -8);
    *(uint *)((int)&CStack_2c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         *(uint *)((int)aCStack_80 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -4);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500(this_ptr_00,pCVar9);
  } while ((int)corner_index < 8);
  afStack_5c[0] = 999.0;
  afStack_5c[1] = 999.0;
  afStack_5c[2] = 999.0;
  iVar3 = 0;
  puStack_14 = auStack_134;
  iStack_18 = 0;
  CStack_110.min.x = CStack_110.min.x + _DAT_005f8b60;
  CStack_110.min.y = CStack_110.min.y + _DAT_005f8b60;
  CStack_110.min.z = CStack_110.min.z + _DAT_005f8b60;
  CStack_110.max.x = CStack_110.max.x + _DAT_005f8b64;
  CStack_110.max.y = CStack_110.max.y + _DAT_005f8b64;
  CStack_110.max.z = CStack_110.max.z + _DAT_005f8b64;
  pcStack_20 = this_ptr->allowed_victim_types;
  while( true ) {
    if (g_CDemonSetPtr->actor_count <= iVar3) break;
    pCVar1 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_18);
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c550(pCVar1,pcStack_20);
    if ((((iVar2 != 0) && (CStack_110.min.x <= (pCVar1->location).position.x)) &&
        (CStack_110.min.y <= (pCVar1->location).position.y)) &&
       (((CStack_110.min.z <= (pCVar1->location).position.z &&
         ((pCVar1->location).position.x <= CStack_110.max.x)) &&
        (((pCVar1->location).position.y <= CStack_110.max.y &&
         ((pCVar1->location).position.z <= CStack_110.max.z)))))) {
      iVar2 = (*((pCVar1->vtable)._ub)->canLookAt)(pCVar1);
      if (iVar2 != 0) {
        __arrinit(&stack0xfffffe1c,10,&g_CVectorTypeInfo);
        in_stack_fffffe18 = (CDemonActor *)&stack0xfffffe1c;
        iVar2 = (*((pCVar1->vtable)._ub)->getTargetPoints)(pCVar1,(CVector3f *)&stack0xfffffe1c);
        if (iVar2 < 1) {
          fStack_1e4 = 8.282354e-39;
          (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,(CBoundingBox3D *)in_stack_fffffe24);
          puVar5 = auStack_144;
          puVar7 = auStack_134;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
          }
          auStack_ac._4_4_ = fStack_12c + *unaff_retaddr;
          auStack_ac._8_4_ = fStack_128 + unaff_retaddr[1];
          fStack_a0 = fStack_124 + unaff_retaddr[2];
          fStack_60 = fStack_12c + *unaff_retaddr;
          afStack_5c[(uint)bVar8 * -2] = *(float *)(auStack_ac + (uint)bVar8 * -8 + 8);
          afStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               (&fStack_a0)[(uint)bVar8 * -2 + (uint)bVar8 * -2];
          fStack_c0 = fStack_60 * _DAT_005f8b68;
          afStack_bc[0] = afStack_5c[0] * _DAT_005f8b68;
          afStack_bc[1] = afStack_5c[1] * _DAT_005f8b68;
          afStack_bc[2] = fStack_60 * _DAT_005f8b68;
          afStack_bc[(uint)bVar8 * -2 + 3] = afStack_bc[(uint)bVar8 * -2];
          *(float *)(auStack_ac + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          if (aCStack_1d4 != (CVector3f *)(afStack_bc + 2)) {
            aCStack_1d4[0].x = afStack_bc[2];
            aCStack_1d4[0].y = afStack_bc[3];
            aCStack_1d4[0].z = (float)auStack_ac._0_4_;
          }
        }
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  (pCVar1,aCStack_1d4,(CVector3f *)(auStack_38 + 8));
        pCVar9 = &CStack_9c;
        CStack_9c.x = (float)auStack_38._8_4_;
        *(uint *)((int)&CStack_9c + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_2c + (uint)bVar8 * -8);
        *(uint *)((int)&CStack_9c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             *(uint *)((int)&CStack_2c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 4);
        in_stack_fffffe24 = this_ptr->guard_zone_box_trigger;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                  (in_stack_fffffe24,pCVar9,(CVector3f *)&UStack_3c);
        UStack_90 = UStack_3c;
        *(uint *)((int)&CStack_8c + (uint)bVar8 * -8) =
             *(uint *)(auStack_38 + (uint)bVar8 * -8);
        *(uint *)((int)aCStack_80 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -8) =
             *(uint *)(auStack_38 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 4);
        if (((CStack_170.max.z <= (float)UStack_90) && (fStack_158 <= CStack_8c.x)) &&
           ((fStack_154 <= CStack_8c.y &&
            ((((float)UStack_90 <= fStack_150 && (CStack_8c.x <= fStack_14c)) &&
             (CStack_8c.y <= fStack_148)))))) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                    ((CDemonActor *)this_ptr,&CStack_9c,(CVector3f *)auStack_e4);
          afStack_5c[2] = (float)auStack_e4._0_4_;
          afStack_5c[(uint)bVar8 * -2 + 3] = *(float *)(auStack_e4 + (uint)bVar8 * -8 + 4);
          afStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
               afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2];
          in_stack_fffffe24 = (CDemonActor *)0x5a31d1;
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
          CStack_8c.z = afStack_dc[1];
          *(float *)((int)aCStack_80 + (uint)bVar8 * -8) = afStack_dc[(uint)bVar8 * -2 + 2];
          *(float *)((int)aCStack_80 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 4) =
               afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 3];
          if (((0xBF060A92 <= CStack_8c.z) && (CStack_8c.z <= 0x3F9C61AA)) &&
             (SQRT(aCStack_80[0].y * aCStack_80[0].y +
                   CStack_8c.z * CStack_8c.z + aCStack_80[0].x * aCStack_80[0].x) <=
              SQRT(fStack_40 * fStack_40 + fStack_48 * fStack_48 + fStack_44 * fStack_44))) {
            if (afStack_5c + 5 != &CStack_8c.z) {
              fStack_48 = CStack_8c.z;
              fStack_44 = aCStack_80[0].x;
              fStack_40 = aCStack_80[0].y;
            }
            if ((CVector3f *)(afStack_dc + 4) != &CStack_9c) {
              CStack_cc.x = CStack_9c.x;
            }
          }
        }
      }
    }
    iVar3 = iVar3 + 1;
    iStack_18 = iStack_18 + 4;
  }
  if ((int)afStack_5c[1] < 0x42c60001) {
    core_turret_cpp_CTurret_aimAtTarget_FUN_005a3350
              (this_ptr,(CVector3f *)(auStack_e4 + 4),delta_time);
    if ((this_ptr->base).fire_cooldown_timer <= 0.0) {
      (*(((this_ptr->base).base.vtable._uc)->_uc).isGrabbable)
                ((CCharacter *)this_ptr,in_stack_fffffe18);
    }
    this_ptr->fire_sound_timer = 1.0;
    return;
  }
  core_turret_cpp_CTurret_updatePatrol_FUN_005a3650(this_ptr,delta_time);
  return;
}
