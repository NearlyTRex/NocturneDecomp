// Name: core_stranger.cpp_CStranger_tryPickupObject_FUN_00569620
// Address: 00569620
// Address Range: [[00569620, 0056a15a]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_tryPickupObject_FUN_00569620(CStranger *this_ptr,char *class_name)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_stranger_cpp_CStranger_tryPickupObject_FUN_00569620(CStranger *this_ptr,char *class_name)

{
  CDeformableModelInstance *pCVar1;
  float fVar2;
  CDemonActor *pCVar3;
  CDemonActor *pCVar4;
  int iVar5;
  uint *puVar6;
  float *unaff_EDI;
  uint *puVar7;
  byte bVar8;
  float afStackY_1200 [988];
  CStranger *in_stack_fffffd78;
  CVector3f *pCVar9;
  CConsole *this_ptr_00;
  char *in_stack_fffffd80;
  CDemonActor *in_stack_fffffd84;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  CVector3f aCStack_208 [2];
  float fStack_1f0;
  float afStack_1ec [4];
  float fStack_1dc;
  float fStack_1d8;
  byte auStack_1d4 [12];
  float afStack_1c8 [4];
  CVector3f CStack_1b8;
  float afStack_1ac [4];
  CVector3f CStack_19c;
  float fStack_190;
  float fStack_18c;
  float afStack_188 [2];
  CVector3f CStack_180;
  uint uStack_174;
  uint uStack_170;
  float fStack_16c;
  float fStack_168;
  float afStack_164 [4];
  float afStack_154 [2];
  CVector3f CStack_14c;
  float fStack_13c;
  CVector3f CStack_138;
  CVector3f CStack_128;
  float fStack_118;
  float fStack_114;
  float afStack_110 [3];
  CVector3f CStack_104;
  float fStack_f8;
  float afStack_f4 [6];
  float fStack_dc;
  float afStack_d8 [2];
  CVector3f CStack_d0;
  uint uStack_c4;
  CVector3f CStack_b8;
  float afStack_ac [3];
  CVector3f CStack_a0;
  float fStack_94;
  float afStack_90 [4];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  byte auStack_60 [12];
  uint auStack_54 [5];
  CVector3f CStack_40;
  uint local_34;
  CLocation *local_30;
  int iStack_2c;
  CVector3f *pCStack_28;
  CVector3f *local_24;
  uint *local_20;
  CVector3f *local_1c;
  float local_18;
  uint *puStack_14;
  
  bVar8 = 0;
  if (((((0.0 < this_ptr->action_timer) ||
        ((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0)) ||
       (local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                             ((CCharacter *)this_ptr,0), local_18 < (float)0.98999999999999999)) ||
      ((local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                             (&(this_ptr->base).base.model.base,0), local_18 < 1.0 ||
       ((this_ptr->base).base.carry_hands[0].carry_actor != (CDemonActor *)0x0)))) ||
     ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0)) {
    return 0;
  }
  local_20 = (uint *)&stack0xfffffdcc;
  local_30 = &(this_ptr->base).base.base.location;
  local_34 = 0x40800000;
  local_24 = (CVector3f *)0x0;
  for (local_1c = (CVector3f *)0x0; (int)local_1c < g_CDemonSetPtr->actor_count;
      local_1c = (CVector3f *)((int)&local_1c->x + 1)) {
    pCVar3 = *(CDemonActor **)((int)&local_24[-1].x + (int)(g_CDemonSetPtr->cameras + 0xcb0) + 0xb0)
    ;
    pCVar4 = (*((pCVar3->vtable)._ub)->getCarrier)(pCVar3);
    if (pCVar4 == (CDemonActor *)0x0) {
      in_stack_fffffd78 = this_ptr;
      iStack_2c = (*((pCVar3->vtable)._ub)->canPickup)(pCVar3,(CDemonActor *)this_ptr);
      switch(iStack_2c) {
      case 1:
        if ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0) {
          in_stack_fffffd78 = (CStranger *)0x569aab;
          in_stack_fffffd80 = (char *)local_24;
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                    (pCVar3,local_24,(CVector3f *)auStack_1d4);
          CStack_b8.y = (float)auStack_1d4._0_4_;
          afStack_ac[(uint)bVar8 * -2 + -1] = *(float *)(auStack_1d4 + (uint)bVar8 * -8 + 4);
          afStack_ac[(uint)bVar8 * -2 + (uint)bVar8 * -2] =
               afStack_1c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -1];
          local_20 = (uint *)
                     SQRT(afStack_ac[0] * afStack_ac[0] +
                          CStack_b8.y * CStack_b8.y + CStack_b8.z * CStack_b8.z);
          if ((float)local_20 <= 0.0) {
            CStack_b8.z = 0.0;
            CStack_b8.y = 0.0;
            afStack_ac[0] = 0.0;
          }
          else {
            fVar2 = 1.0 / (float)local_20;
            CStack_b8.y = CStack_b8.y * fVar2;
            CStack_b8.z = CStack_b8.z * fVar2;
            afStack_ac[0] = afStack_ac[0] * fVar2;
          }
          if (afStack_ac[0] <= 0.0) {
            auStack_60._4_4_ = 0x40400000;
            auStack_60._8_4_ = 2.0;
            auStack_60._0_4_ = 0.0;
            if (&CStack_180 != (CVector3f *)(afStack_90 + 0xc)) {
              CStack_180.x = 0.0;
              CStack_180.y = 3.0;
              CStack_180.z = 2.0;
            }
            goto LAB_0056979e;
          }
        }
        break;
      case 2:
        if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
          CStack_d0.z = 3.0;
          uStack_c4 = 0x40000000;
          CStack_d0.y = 0.0;
          if (&CStack_180 != (CVector3f *)&CStack_d0.y) {
            CStack_180.y = 3.0;
            CStack_180.z = 2.0;
            CStack_180.x = 0.0;
          }
LAB_0056979e:
          in_stack_fffffd78 = (CStranger *)0x5697bd;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                    ((CDemonActor *)this_ptr,&CStack_180,&CStack_138);
          CStack_1b8.z = CStack_138.x;
          afStack_1ac[(uint)bVar8 * -2] = *(float *)((int)&CStack_138 + (uint)bVar8 * -8 + 4);
          afStack_1ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               *(float *)((int)&CStack_138 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          (*((pCVar3->vtable)._ub)->getBoundingBox)(pCVar3,(CBoundingBox3D *)in_stack_fffffd84);
          puVar6 = (uint *)&stack0xfffffd8c;
          puVar7 = (uint *)&stack0xfffffdcc;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
          }
          fStack_dc = fStack_22c + *unaff_EDI;
          afStack_d8[0] = fStack_228 + unaff_EDI[1];
          afStack_d8[1] = fStack_224 + unaff_EDI[2];
          afStack_90[2] = fStack_22c + *unaff_EDI;
          afStack_90[(uint)bVar8 * -2 + 3] = afStack_d8[(uint)bVar8 * -2];
          afStack_90[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
               afStack_d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          pCVar9 = &CStack_40;
          fStack_94 = afStack_90[2] * 0.5f;
          afStack_90[0] = afStack_90[3] * 0.5f;
          afStack_90[1] = fStack_80 * 0.5f;
          CStack_40.x = afStack_90[2] * 0.5f;
          *(float *)((int)&CStack_40 + (uint)bVar8 * -8 + 4) = afStack_90[(uint)bVar8 * -2];
          *(float *)((int)&CStack_40 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
               afStack_90[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          in_stack_fffffd80 = (char *)0x56989a;
          in_stack_fffffd84 = pCVar3;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(pCVar3,pCVar9,&CStack_a0);
          fStack_16c = CStack_a0.x;
          afStack_164[(uint)bVar8 * -2 + -1] = *(float *)((int)&CStack_a0 + (uint)bVar8 * -8 + 4);
          afStack_164[(uint)bVar8 * -2 + (uint)bVar8 * -2] =
               *(float *)((int)&CStack_a0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          fStack_13c = fStack_16c - afStack_1ac[1];
          CStack_138.x = fStack_168 - afStack_1ac[2];
          CStack_138.y = afStack_164[0] - afStack_1ac[3];
          fStack_118 = fStack_16c - afStack_1ac[1];
          afStack_110[(uint)bVar8 * -2 + -1] = *(float *)((int)&CStack_138 + (uint)bVar8 * -8);
          afStack_110[(uint)bVar8 * -2 + (uint)bVar8 * -2] =
               *(float *)((int)&CStack_138 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 4);
          if ((ABS(fStack_114) <= (float)5) &&
             (puStack_14 = (uint *)(fStack_118 * fStack_118 + afStack_110[0] * afStack_110[0])
             , (float)puStack_14 <= (float)local_20)) {
            in_stack_fffffd80 = (char *)0x56994e;
            in_stack_fffffd84 = pCVar3;
            iVar5 = core_actor_cpp_isOfClass_FUN_0040c840(pCVar3,class_name);
            if (iVar5 != 0) {
              (this_ptr->base).object_to_pick_up = pCVar3;
              local_20 = puStack_14;
              pCStack_28 = local_24;
            }
          }
        }
        break;
      case 3:
      case 4:
        if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
          in_stack_fffffd78 = (CStranger *)0x5699a4;
          iVar5 = (*((pCVar3->vtable)._ub)->canPickup)(pCVar3,(CDemonActor *)this_ptr);
          if (iVar5 != 4) {
LAB_00569a2a:
            CStack_19c.z = 2.0;
            CStack_19c.x = 0.0;
            CStack_19c.y = 3.0;
            if ((CVector3f *)&CStack_180.z != &CStack_19c) {
              uStack_174 = 0x40400000;
              uStack_170 = 0x40000000;
              CStack_180.z = 0.0;
            }
            goto LAB_0056979e;
          }
          in_stack_fffffd80 = (char *)0x5699cd;
          in_stack_fffffd84 = pCVar3;
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0(pCVar3,local_1c,&CStack_b8);
          aCStack_208[0].x = CStack_b8.x;
          *(float *)((int)aCStack_208 + (uint)bVar8 * -8 + 4) = afStack_ac[(uint)bVar8 * -2 + -2];
          *(float *)((int)aCStack_208 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
               afStack_ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -1];
          if (ABS(aCStack_208[0].x) <= 1.0) {
            in_stack_fffffd84 = (CDemonActor *)0x569a05;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(aCStack_208,&CStack_d0)
            ;
            fStack_1f0 = CStack_d0.x;
            afStack_1ec[(uint)bVar8 * -2] = *(float *)((int)&CStack_d0 + (uint)bVar8 * -8 + 4);
            afStack_1ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                 *(float *)((int)&CStack_d0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4 + 8);
            if (ABS(afStack_1ec[0]) <= (float)20) goto LAB_00569a2a;
          }
        }
      }
    }
    local_24 = (CVector3f *)&local_24->y;
  }
  pCVar3 = (this_ptr->base).object_to_pick_up;
  if (pCVar3 == (CDemonActor *)0x0) {
    return 0;
  }
  (*((pCVar3->vtable)._ub)->getBoundingBox)(pCVar3,(CBoundingBox3D *)in_stack_fffffd78);
  puVar6 = (uint *)&stack0xfffffdb0;
  puVar7 = (uint *)&stack0xfffffd90;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  if (&this_ptr->carry_object_bbox != (CBoundingBox3D *)&stack0xfffffd98) {
    (this_ptr->carry_object_bbox).min.x = fStack_268;
    (this_ptr->carry_object_bbox).min.y = fStack_264;
    (this_ptr->carry_object_bbox).min.z = fStack_260;
  }
  pCVar9 = &(this_ptr->carry_object_bbox).max;
  if (pCVar9 != (CVector3f *)&stack0xfffffda4) {
    pCVar9->x = fStack_25c;
    (this_ptr->carry_object_bbox).max.y = fStack_258;
    (this_ptr->carry_object_bbox).max.z = fStack_254;
  }
  fStack_118 = (this_ptr->carry_object_bbox).min.x + (this_ptr->carry_object_bbox).max.x;
  fStack_114 = (this_ptr->carry_object_bbox).min.y + (this_ptr->carry_object_bbox).max.y;
  afStack_110[0] = (this_ptr->carry_object_bbox).min.z + (this_ptr->carry_object_bbox).max.z;
  fStack_16c = fStack_118;
  afStack_164[(uint)bVar8 * -2 + -1] = afStack_110[(uint)bVar8 * -2 + -1];
  afStack_164[(uint)bVar8 * -2 + (uint)bVar8 * -2] =
       afStack_110[(uint)bVar8 * -2 + (uint)bVar8 * -2];
  afStack_f4[0] = fStack_16c * 0.5f;
  afStack_f4[1] = fStack_168 * 0.5f;
  afStack_f4[2] = afStack_164[0] * 0.5f;
  auStack_1d4._8_4_ = fStack_16c * 0.5f;
  afStack_1c8[(uint)bVar8 * -2] = afStack_f4[(uint)bVar8 * -2 + 1];
  afStack_1c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       afStack_f4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 2];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            ((this_ptr->base).object_to_pick_up,(CVector3f *)(auStack_1d4 + 8),
             (CVector3f *)(auStack_60 + 8));
  pCVar9 = aCStack_208;
  aCStack_208[0].x = (float)auStack_60._8_4_;
  *(uint *)((int)aCStack_208 + (uint)bVar8 * -8 + 4) = auStack_54[(uint)bVar8 * -2];
  *(uint *)((int)aCStack_208 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
       auStack_54[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
            ((CDemonActor *)this_ptr,pCVar9,&CStack_19c);
  fStack_190 = CStack_19c.x;
  afStack_188[(uint)bVar8 * -2 + -1] = *(float *)((int)&CStack_19c + (uint)bVar8 * -8 + 4);
  afStack_188[(uint)bVar8 * -2 + (uint)bVar8 * -2] =
       *(float *)((int)&CStack_19c + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4 + 8);
  if (&this_ptr->carry_object_world_center != (CVector3f *)&fStack_190) {
    (this_ptr->carry_object_world_center).x = fStack_190;
    (this_ptr->carry_object_world_center).y = fStack_18c;
    (this_ptr->carry_object_world_center).z = afStack_188[0];
  }
  switch(local_34) {
  case 1:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,0x1b,1);
    this_ptr_00 = (CConsole *)(this_ptr->base).object_to_pick_up;
    break;
  case 2:
  case 3:
  case 4:
    pCVar3 = (this_ptr->base).object_to_pick_up;
    if ((pCVar3 == (CDemonActor *)0x0) ||
       (iVar5 = (*((pCVar3->vtable)._ub)->canPickup)(pCVar3,(CDemonActor *)this_ptr), iVar5 != 4)) {
      pCVar1 = &(this_ptr->base).base.model;
      if ((this_ptr->carry_object_world_center).y <= (float)2) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,0x13,1);
        in_stack_fffffd80 = "Picking up %s off ground\n";
        this_ptr_00 = g_CConsolePtr;
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                  (pCVar1,g_StrangerIndices[0xe],&CStack_104);
        fStack_74 = CStack_104.x;
        afStack_90[(uint)bVar8 * -2 + 8] = *(float *)((int)&CStack_104 + (uint)bVar8 * -8 + 4);
        iVar5 = g_StrangerIndices[4];
        afStack_90[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 9] =
             *(float *)((int)&CStack_104 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                  (pCVar1,iVar5,&CStack_1b8);
        fVar2 = fStack_74;
        afStack_1ec[1] = CStack_1b8.x;
        afStack_1ec[(uint)bVar8 * -2 + 2] = afStack_1ac[(uint)bVar8 * -2 + -2];
        afStack_1ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 3] =
             afStack_1ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -1];
        fStack_218 = fVar2 - afStack_1ec[1];
        fStack_214 = fStack_70 - afStack_1ec[2];
        fStack_210 = fStack_6c - afStack_1ec[3];
        fStack_80 = fVar2 - afStack_1ec[1];
        afStack_90[(uint)bVar8 * -2 + 5] = (&stack0xfffffdf0)[(uint)bVar8 * -2 + -1];
        afStack_90[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 6] =
             (&stack0xfffffdf0)[(uint)bVar8 * -2 + (uint)bVar8 * -2];
        fVar2 = fStack_80 * fStack_80;
        fStack_1dc = afStack_1ec[1] - (this_ptr->carry_object_world_center).x;
        fStack_1d8 = afStack_1ec[2] - (this_ptr->carry_object_world_center).y;
        auStack_1d4._0_4_ = afStack_1ec[3] - (this_ptr->carry_object_world_center).z;
        fStack_f8 = fStack_1dc;
        afStack_f4[(uint)bVar8 * -2] = afStack_1ec[(uint)bVar8 * -2 + 5];
        afStack_f4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             *(float *)(auStack_1d4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        if ((float)2 <
            ABS(SQRT(fStack_78 * fStack_78 + fVar2 + fStack_7c * fStack_7c) -
                SQRT(afStack_f4[1] * afStack_f4[1] +
                     fStack_f8 * fStack_f8 + afStack_f4[0] * afStack_f4[0]))) {
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (g_CConsolePtr,"%s out of reach - canceling pickup\n");
          (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
          return 0;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,0x15,1);
        in_stack_fffffd80 = "Picking up %s waist level\n";
        this_ptr_00 = g_CConsolePtr;
      }
    }
    else {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                ((this_ptr->base).object_to_pick_up,&(this_ptr->base).base.base.location.position,
                 &CStack_14c);
      afStack_164[3] = CStack_14c.x;
      afStack_154[(uint)bVar8 * -2] = *(float *)((int)&CStack_14c + (uint)bVar8 * -8 + 4);
      afStack_154[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           *(float *)((int)&CStack_14c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      fVar2 = (this_ptr->carry_object_world_center).y;
      pCVar1 = &(this_ptr->base).base.model;
      this_ptr->pickup_facing_reversed = (uint)(0.0 < afStack_154[1]);
      if (fVar2 <= (float)2.5) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,0x17,1);
        in_stack_fffffd80 = "Picking up heavy %s crate\n";
        this_ptr_00 = g_CConsolePtr;
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,0x18,1);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                  ((CDemonActor *)this_ptr,
                   &(((this_ptr->base).object_to_pick_up)->location).position,&CStack_128);
        fStack_68 = CStack_128.x;
        afStack_90[(uint)bVar8 * -2 + 0xb] = *(float *)((int)&CStack_128 + (uint)bVar8 * -8 + 4);
        afStack_90[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xc] =
             *(float *)((int)&CStack_128 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        if (&this_ptr->carry_object_world_center != (CVector3f *)(afStack_90 + 10)) {
          (this_ptr->carry_object_world_center).x = fStack_68;
          (this_ptr->carry_object_world_center).y = fStack_64;
          (this_ptr->carry_object_world_center).z = (float)auStack_60._0_4_;
        }
        in_stack_fffffd80 = "Picking up heavy %s shelf\n";
        this_ptr_00 = g_CConsolePtr;
      }
    }
    break;
  default:
    g_CurrentFilename = "..\\core\\stranger.cpp";
    g_CurrentLineNumber = 3373;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Hell froze - invalid pickUpType: %d");
    goto LAB_00569dc5;
  }
  engine_console_cpp_CConsole_printf_FUN_00436710(this_ptr_00,in_stack_fffffd80);
LAB_00569dc5:
  this_ptr->action_timer = 4.0;
  this_ptr->action_pending = 4;
  return 1;
}
