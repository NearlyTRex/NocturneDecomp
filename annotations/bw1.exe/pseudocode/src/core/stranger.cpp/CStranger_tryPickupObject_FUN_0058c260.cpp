// Name: core_stranger.cpp_CStranger_tryPickupObject_FUN_0058c260
// Address: 0058c260
// Address Range: [[0058c260, 0058cd9a]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_tryPickupObject_FUN_0058c260(CStranger *this_ptr,char *class_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_stranger_cpp_CStranger_tryPickupObject_FUN_0058c260(CStranger *this_ptr,char *class_name)

{
  CVector3f *pCVar1;
  CDeformableModelInstance *pCVar2;
  float fVar3;
  CDemonActor *pCVar4;
  CDemonActor *pCVar5;
  int iVar6;
  uint *puVar7;
  float *unaff_EDI;
  uint *puVar8;
  byte bVar9;
  float afStackY_1200 [118];
  CLocation *apCStackY_1028 [870];
  CStranger *in_stack_fffffd78;
  float *pfVar10;
  CConsole *this_ptr_00;
  char *in_stack_fffffd80;
  CDemonActor *in_stack_fffffd84;
  uint uVar11;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  uint auStack_250 [7];
  uint auStack_234 [2];
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_218;
  float fStack_214;
  float afStack_210 [8];
  uint uStack_1f0;
  float afStack_1ec [4];
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float afStack_1cc [5];
  float fStack_1b8;
  float afStack_1b4 [4];
  float fStack_1a4;
  float fStack_1a0;
  float afStack_19c [4];
  float fStack_18c;
  float fStack_188;
  float afStack_180 [6];
  float fStack_168;
  float afStack_164 [4];
  float afStack_154 [6];
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_128;
  float fStack_118;
  float fStack_114;
  float afStack_110 [4];
  float afStack_100 [4];
  float fStack_f0;
  float fStack_ec;
  float fStack_dc;
  float afStack_d8 [4];
  uint uStack_c8;
  uint uStack_c4;
  float fStack_b8;
  float afStack_b4 [5];
  float fStack_a0;
  float afStack_9c [4];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float afStack_60 [8];
  float fStack_40;
  CLocation *apCStack_3c [4];
  int iStack_2c;
  char *pcStack_28;
  char *local_24;
  uint *local_20;
  int local_1c;
  float local_18;
  uint *puStack_14;
  
  bVar9 = 0;
  if (((((0.0 < this_ptr->action_timer) ||
        ((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0)) ||
       (local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                             ((CCharacter *)this_ptr,0), local_18 < (float)_DAT_005f6cc1)) ||
      ((local_18 = (float)core_motion_cpp_FUN_00524a40(&(this_ptr->base).base.model,0),
       local_18 < 1.0 || ((this_ptr->base).base.carry_hands[0].carry_actor != (CDemonActor *)0x0))))
     || ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0)) {
    return 0;
  }
  local_20 = auStack_234;
  apCStack_3c[3] = &(this_ptr->base).base.base.location;
  apCStack_3c[2] = (CLocation *)0x40800000;
  local_24 = (char *)0x0;
  for (local_1c = 0; local_1c < g_CDemonSetPtr->actor_count; local_1c = local_1c + 1) {
    pCVar4 = *(CDemonActor **)((int)(g_CDemonSetPtr->cameras + 0xcb0) + (int)(local_24 + 0xa4));
    pCVar5 = (*((pCVar4->vtable)._ub)->getCarrier)(pCVar4);
    if (pCVar5 == (CDemonActor *)0x0) {
      in_stack_fffffd78 = this_ptr;
      iStack_2c = (*((pCVar4->vtable)._ub)->canPickup)(pCVar4,(CDemonActor *)this_ptr);
      switch(iStack_2c) {
      case 1:
        if ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0) {
          in_stack_fffffd78 = (CStranger *)0x58c6eb;
          in_stack_fffffd80 = local_24;
          core_actor_cpp_FUN_00408bb0(pCVar4);
          afStack_b4[0] = fStack_1d4;
          afStack_b4[(uint)bVar9 * -2 + 1] = afStack_1ec[(uint)bVar9 * -2 + 7];
          afStack_b4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 2] =
               afStack_1ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 8];
          local_20 = (uint *)
                     SQRT(afStack_b4[2] * afStack_b4[2] +
                          afStack_b4[0] * afStack_b4[0] + afStack_b4[1] * afStack_b4[1]);
          if ((float)local_20 <= 0.0) {
            afStack_b4[1] = 0.0;
            afStack_b4[0] = 0.0;
            afStack_b4[2] = 0.0;
          }
          else {
            fVar3 = 1.0 / (float)local_20;
            afStack_b4[0] = afStack_b4[0] * fVar3;
            afStack_b4[1] = afStack_b4[1] * fVar3;
            afStack_b4[2] = afStack_b4[2] * fVar3;
          }
          if (afStack_b4[2] <= 0.0) {
            afStack_60[1] = 3.0;
            afStack_60[2] = 2.0;
            afStack_60[0] = 0.0;
            if (afStack_1b4 + 0xd != afStack_9c + 0xf) {
              afStack_180[0] = 0.0;
              afStack_180[1] = 3.0;
              afStack_180[2] = 2.0;
            }
            goto LAB_0058c3de;
          }
        }
        break;
      case 2:
        if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
          uStack_c8 = 0x40400000;
          uStack_c4 = 0x40000000;
          afStack_d8[3] = 0.0;
          if (afStack_1b4 + 0xd != afStack_d8 + 3) {
            afStack_180[1] = 3.0;
            afStack_180[2] = 2.0;
            afStack_180[0] = 0.0;
          }
LAB_0058c3de:
          in_stack_fffffd78 = (CStranger *)0x58c3fd;
          core_actor_cpp_FUN_00408b40(this_ptr,afStack_1b4 + 0xd);
          afStack_1b4[1] = fStack_138;
          afStack_1b4[(uint)bVar9 * -2 + 2] = afStack_154[(uint)bVar9 * -2 + 8];
          afStack_1b4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 3] =
               afStack_154[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9];
          (*((pCVar4->vtable)._ub)->getBoundingBox)(pCVar4,(CBoundingBox3D *)in_stack_fffffd84);
          puVar7 = (uint *)&stack0xfffffd8c;
          puVar8 = auStack_234;
          for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
          }
          fStack_dc = fStack_22c + *unaff_EDI;
          afStack_d8[0] = fStack_228 + unaff_EDI[1];
          afStack_d8[1] = fStack_224 + unaff_EDI[2];
          fStack_88 = fStack_22c + *unaff_EDI;
          afStack_9c[(uint)bVar9 * -2 + 6] = afStack_d8[(uint)bVar9 * -2];
          afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
               afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          pfVar10 = &fStack_40;
          afStack_9c[2] = fStack_88 * _DAT_005f6cc9;
          afStack_9c[3] = fStack_84 * _DAT_005f6cc9;
          fStack_8c = fStack_80 * _DAT_005f6cc9;
          fStack_40 = fStack_88 * _DAT_005f6cc9;
          apCStack_3c[(uint)bVar9 * -2] = (CLocation *)afStack_9c[(uint)bVar9 * -2 + 3];
          apCStack_3c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
               (CLocation *)afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
          in_stack_fffffd80 = (char *)0x58c4da;
          in_stack_fffffd84 = pCVar4;
          core_actor_cpp_FUN_00408b40(pCVar4,pfVar10);
          afStack_180[5] = fStack_a0;
          afStack_164[(uint)bVar9 * -2 + -1] = afStack_9c[(uint)bVar9 * -2];
          afStack_164[(uint)bVar9 * -2 + (uint)bVar9 * -2] =
               afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          fStack_13c = afStack_180[5] - afStack_1b4[3];
          fStack_138 = fStack_168 - fStack_1a4;
          fStack_134 = afStack_164[0] - fStack_1a0;
          fStack_118 = afStack_180[5] - afStack_1b4[3];
          afStack_110[(uint)bVar9 * -2 + -1] = afStack_154[(uint)bVar9 * -2 + 7];
          afStack_110[(uint)bVar9 * -2 + (uint)bVar9 * -2] =
               afStack_154[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 8];
          if ((ABS(fStack_114) <= (float)_DAT_005f6ce9) &&
             (puStack_14 = (uint *)(fStack_118 * fStack_118 + afStack_110[0] * afStack_110[0])
             , (float)puStack_14 <= (float)local_20)) {
            in_stack_fffffd80 = (char *)0x58c58e;
            in_stack_fffffd84 = pCVar4;
            iVar6 = core_actor_cpp_isOfClass_FUN_0040c550(pCVar4,class_name);
            if (iVar6 != 0) {
              (this_ptr->base).object_to_pick_up = pCVar4;
              local_20 = puStack_14;
              pcStack_28 = local_24;
            }
          }
        }
        break;
      case 3:
      case 4:
        if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
          in_stack_fffffd78 = (CStranger *)0x58c5e4;
          iVar6 = (*((pCVar4->vtable)._ub)->canPickup)(pCVar4,(CDemonActor *)this_ptr);
          if (iVar6 != 4) {
LAB_0058c66a:
            afStack_19c[2] = 2.0;
            afStack_19c[0] = 0.0;
            afStack_19c[1] = 3.0;
            if (afStack_1b4 + 0xf != afStack_1b4 + 6) {
              afStack_180[3] = 3.0;
              afStack_180[4] = 2.0;
              afStack_180[2] = 0.0;
            }
            goto LAB_0058c3de;
          }
          in_stack_fffffd80 = (char *)0x58c60d;
          in_stack_fffffd84 = pCVar4;
          core_actor_cpp_FUN_00408bb0(pCVar4,local_1c);
          afStack_210[2] = fStack_b8;
          afStack_210[(uint)bVar9 * -2 + 3] = afStack_b4[(uint)bVar9 * -2];
          afStack_210[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
               afStack_b4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          if (ABS(afStack_210[2]) <= 1.0) {
            in_stack_fffffd84 = (CDemonActor *)0x58c645;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_210 + 2);
            uStack_1f0 = afStack_d8[2];
            afStack_1ec[(uint)bVar9 * -2] = afStack_d8[(uint)bVar9 * -2 + 3];
            afStack_1ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                 afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
            if (ABS(afStack_1ec[0]) <= (float)_DAT_005f6ce1) goto LAB_0058c66a;
          }
        }
      }
    }
    local_24 = local_24 + 4;
  }
  pCVar4 = (this_ptr->base).object_to_pick_up;
  if (pCVar4 == (CDemonActor *)0x0) {
    return 0;
  }
  (*((pCVar4->vtable)._ub)->getBoundingBox)(pCVar4,(CBoundingBox3D *)in_stack_fffffd78);
  puVar7 = auStack_250;
  puVar8 = (uint *)&stack0xfffffd90;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  if (&this_ptr->carry_object_bbox != (CBoundingBox3D *)&fStack_268) {
    (this_ptr->carry_object_bbox).min.x = fStack_268;
    (this_ptr->carry_object_bbox).min.y = fStack_264;
    (this_ptr->carry_object_bbox).min.z = fStack_260;
  }
  pCVar1 = &(this_ptr->carry_object_bbox).max;
  if (pCVar1 != (CVector3f *)&fStack_25c) {
    pCVar1->x = fStack_25c;
    (this_ptr->carry_object_bbox).max.y = fStack_258;
    (this_ptr->carry_object_bbox).max.z = fStack_254;
  }
  fStack_118 = (this_ptr->carry_object_bbox).min.x + (this_ptr->carry_object_bbox).max.x;
  fStack_114 = (this_ptr->carry_object_bbox).min.y + (this_ptr->carry_object_bbox).max.y;
  afStack_110[0] = (this_ptr->carry_object_bbox).min.z + (this_ptr->carry_object_bbox).max.z;
  afStack_180[5] = fStack_118;
  afStack_164[(uint)bVar9 * -2 + -1] = afStack_110[(uint)bVar9 * -2 + -1];
  afStack_164[(uint)bVar9 * -2 + (uint)bVar9 * -2] =
       afStack_110[(uint)bVar9 * -2 + (uint)bVar9 * -2];
  afStack_100[3] = afStack_180[5] * _DAT_005f6cc9;
  fStack_f0 = fStack_168 * _DAT_005f6cc9;
  fStack_ec = afStack_164[0] * _DAT_005f6cc9;
  afStack_1cc[0] = afStack_180[5] * _DAT_005f6cc9;
  afStack_1ec[(uint)bVar9 * -2 + 9] = afStack_100[(uint)bVar9 * -2 + 4];
  afStack_1ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
       afStack_100[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
  core_actor_cpp_FUN_00408b40((this_ptr->base).object_to_pick_up,afStack_1ec + 8);
  pfVar10 = afStack_210 + 2;
  afStack_210[2] = afStack_60[2];
  afStack_210[(uint)bVar9 * -2 + 3] = afStack_9c[(uint)bVar9 * -2 + 0x12];
  afStack_210[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
       afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
  core_actor_cpp_FUN_00408bb0(this_ptr,pfVar10);
  afStack_19c[3] = afStack_19c[0];
  afStack_1b4[(uint)bVar9 * -2 + 10] = afStack_1b4[(uint)bVar9 * -2 + 7];
  afStack_1b4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xb] =
       afStack_1b4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 8];
  if (&this_ptr->carry_object_world_center != (CVector3f *)(afStack_1b4 + 9)) {
    (this_ptr->carry_object_world_center).x = afStack_19c[3];
    (this_ptr->carry_object_world_center).y = fStack_18c;
    (this_ptr->carry_object_world_center).z = fStack_188;
  }
  switch(apCStack_3c[2]) {
  case (CLocation *)0x1:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,0x26,1);
    this_ptr_00 = (CConsole *)(this_ptr->base).object_to_pick_up;
    break;
  case (CLocation *)0x2:
  case (CLocation *)0x3:
  case (CLocation *)0x4:
    pCVar4 = (this_ptr->base).object_to_pick_up;
    if ((pCVar4 == (CDemonActor *)0x0) ||
       (iVar6 = (*((pCVar4->vtable)._ub)->canPickup)(pCVar4,(CDemonActor *)this_ptr), iVar6 != 4)) {
      pCVar2 = &(this_ptr->base).base.model;
      if ((this_ptr->carry_object_world_center).y <= (float)_DAT_005f6cd9) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0x1e,1);
        in_stack_fffffd80 = "Picking up %s off ground\n";
        this_ptr_00 = g_CConsolePtr;
      }
      else {
        core_skeleton_cpp_FUN_00569040(pCVar2,_DAT_02c83638);
        fStack_74 = afStack_110[3];
        afStack_9c[(uint)bVar9 * -2 + 0xb] = afStack_100[(uint)bVar9 * -2];
        uVar11 = _DAT_02c83610;
        afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xc] =
             afStack_100[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        core_skeleton_cpp_FUN_00569040(pCVar2,uVar11);
        fVar3 = fStack_74;
        afStack_1ec[1] = fStack_1b8;
        afStack_1ec[(uint)bVar9 * -2 + 2] = afStack_1b4[(uint)bVar9 * -2];
        afStack_1ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 3] =
             afStack_1b4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        fStack_218 = fVar3 - afStack_1ec[1];
        fStack_214 = fStack_70 - afStack_1ec[2];
        afStack_210[0] = fStack_6c - afStack_1ec[3];
        fStack_80 = fVar3 - afStack_1ec[1];
        afStack_9c[(uint)bVar9 * -2 + 8] = afStack_210[(uint)bVar9 * -2 + -1];
        afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9] =
             afStack_210[(uint)bVar9 * -2 + (uint)bVar9 * -2];
        fVar3 = fStack_80 * fStack_80;
        fStack_1dc = afStack_1ec[1] - (this_ptr->carry_object_world_center).x;
        fStack_1d8 = afStack_1ec[2] - (this_ptr->carry_object_world_center).y;
        fStack_1d4 = afStack_1ec[3] - (this_ptr->carry_object_world_center).z;
        afStack_100[2] = fStack_1dc;
        afStack_100[(uint)bVar9 * -2 + 3] = afStack_1ec[(uint)bVar9 * -2 + 5];
        afStack_100[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             afStack_1ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 6];
        if ((float)_DAT_005f6cd9 <
            ABS(SQRT(fStack_78 * fStack_78 + fVar3 + fStack_7c * fStack_7c) -
                SQRT(fStack_f0 * fStack_f0 +
                     afStack_100[2] * afStack_100[2] + afStack_100[3] * afStack_100[3]))) {
          engine_console_cpp_CConsole_printf_FUN_00445430
                    (g_CConsolePtr,"%s out of reach - canceling pickup\n");
          (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
          return 0;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0x20,1);
        in_stack_fffffd80 = "Picking up %s waist level\n";
        this_ptr_00 = g_CConsolePtr;
      }
    }
    else {
      core_actor_cpp_FUN_00408bb0
                ((this_ptr->base).object_to_pick_up,&(this_ptr->base).base.base.location);
      afStack_164[3] = afStack_154[2];
      afStack_154[(uint)bVar9 * -2] = afStack_154[(uint)bVar9 * -2 + 3];
      afStack_154[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_154[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      fVar3 = (this_ptr->carry_object_world_center).y;
      pCVar2 = &(this_ptr->base).base.model;
      this_ptr->pickup_facing_reversed = (uint)(0.0 < afStack_154[1]);
      if (fVar3 <= (float)_DAT_005f6cd1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0x22,1);
        in_stack_fffffd80 = "Picking up heavy %s crate\n";
        this_ptr_00 = g_CConsolePtr;
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0x23,1);
        core_actor_cpp_FUN_00408bb0(this_ptr,&((this_ptr->base).object_to_pick_up)->location);
        fStack_68 = fStack_128;
        afStack_9c[(uint)bVar9 * -2 + 0xe] = afStack_154[(uint)bVar9 * -2 + 0xc];
        afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xf] =
             afStack_154[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
        if (&this_ptr->carry_object_world_center != (CVector3f *)(afStack_9c + 0xd)) {
          (this_ptr->carry_object_world_center).x = fStack_68;
          (this_ptr->carry_object_world_center).y = fStack_64;
          (this_ptr->carry_object_world_center).z = afStack_60[0];
        }
        in_stack_fffffd80 = ">Picking up heavy %s shelf\n" + 1;
        this_ptr_00 = g_CConsolePtr;
      }
    }
    break;
  default:
    _DAT_01d1d400 = "..\\core\\stranger.cpp";
    _DAT_01d1d404 = 0xda2;
    core_main_c_FUN_005030e0("Hell froze - invalid pickUpType: %d",apCStack_3c[2]);
    goto LAB_0058ca05;
  }
  engine_console_cpp_CConsole_printf_FUN_00445430(this_ptr_00,in_stack_fffffd80);
LAB_0058ca05:
  this_ptr->action_timer = 4.0;
  (this_ptr->base).action_pending = 4;
  return 1;
}
