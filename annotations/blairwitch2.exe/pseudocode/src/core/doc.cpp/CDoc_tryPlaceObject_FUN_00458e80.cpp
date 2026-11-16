// Name: core_doc.cpp_CDoc_tryPlaceObject_FUN_00458e80
// Address: 00458e80
// Address Range: [[00458e80, 0045979a]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_tryPlaceObject_FUN_00458e80(CDoc *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_doc_cpp_CDoc_tryPlaceObject_FUN_00458e80(CDoc *this_ptr)

{
  double dVar1;
  double dVar2;
  double dVar3;
  CLocation *pCVar4;
  UOrientationVector *pUVar5;
  int iVar6;
  CDemonActor *pCVar7;
  UOrientationVector *pUVar8;
  float *pfVar9;
  byte bVar10;
  float afStackY_1160 [1002];
  float fVar11;
  CVector3f *pCVar12;
  float top_y;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  CVector3f CStack_154;
  CVector3f CStack_148;
  float fStack_13c;
  float afStack_138 [2];
  CVector3f CStack_130;
  float fStack_124;
  float afStack_120 [4];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f8;
  CVector3f CStack_f4;
  float fStack_e8;
  float afStack_e4 [4];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  float fStack_a0;
  float afStack_9c [2];
  CVector3f CStack_94;
  float fStack_88;
  float afStack_84 [2];
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  float fStack_58;
  float afStack_54 [4];
  CActorDestination *pCStack_44;
  CActorDestination *pCStack_40;
  CVector3f *pCStack_3c;
  CLocation *pCStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  CActorDestination *pCStack_28;
  CActorDestination *pCStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar10 = 0;
  if ((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0) {
    return 0;
  }
  if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
    return 0;
  }
  if (((this_ptr->base).base.layer_action_index != 9) &&
     (fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                            ((CCharacter *)this_ptr,0), fStack_14 < (float)_DAT_005d0407)) {
    return 0;
  }
  fStack_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                        (&(this_ptr->base).base.model.base,0);
  if (fStack_14 < 1.0) {
    return 0;
  }
  pCVar7 = (this_ptr->base).base.carry_hands[1].carry_actor;
  if ((pCVar7 == (CDemonActor *)0x0) ||
     (iVar6 = (*((pCVar7->vtable)._ub)->canPickup)(pCVar7,(CDemonActor *)this_ptr), iVar6 != 4)) {
    iStack_18 = 0;
    for (iStack_1c = 0; iStack_1c < g_CDemonSetPtr->actor_count; iStack_1c = iStack_1c + 1) {
      pCStack_44 = (CActorDestination *)
                   core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_18),
                              g_CActorDestinationClassInfo.name_hash);
      pCStack_24 = pCStack_44;
      if ((pCStack_44 != (CActorDestination *)0x0) &&
         (iVar6 = core_dest_cpp_CActorDestination_acceptsActor_FUN_004473f0
                            (pCStack_44,(this_ptr->base).base.carry_hands[1].carry_actor),
         iVar6 != 0)) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                  ((CDemonActor *)this_ptr,
                   &(((this_ptr->base).base.carry_hands[1].carry_actor)->location).position,
                   &CStack_130);
        pCVar4 = &(pCStack_24->base).location;
        fStack_c4 = CStack_130.x;
        afStack_e4[(uint)bVar10 * -2 + 9] = *(float *)((int)&CStack_130 + (uint)bVar10 * -8 + 4);
        afStack_e4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
             *(float *)((int)&CStack_130 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        pCStack_38 = pCVar4;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                  ((CDemonActor *)this_ptr,&pCVar4->position,&CStack_64);
        afStack_e4[2] = CStack_64.x;
        afStack_e4[(uint)bVar10 * -2 + 3] = *(float *)((int)&CStack_64 + (uint)bVar10 * -8 + 4);
        afStack_e4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             *(float *)((int)&CStack_64 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        fStack_58 = afStack_e4[2] - fStack_c4;
        afStack_54[0] = afStack_e4[3] - fStack_c0;
        afStack_54[1] = fStack_d4 - fStack_bc;
        fStack_10c = afStack_e4[2] - fStack_c4;
        afStack_120[(uint)bVar10 * -2 + 6] = afStack_54[(uint)bVar10 * -2];
        afStack_120[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
             afStack_54[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        dVar1 = (double)fStack_104;
        dVar2 = (double)fStack_108;
        dVar3 = (double)fStack_10c;
        engine_console_cpp_CConsole_printf_FUN_00436710
                  (g_CConsolePtr,"Delta to dest : %3.2f,%3.2f,%3.2f\n");
        if ((((0.0 < fStack_104) && ((dVar1 < _DAT_005d040f && (ABS(dVar3) < _DAT_005d0417)))) &&
            (0.0 < dVar2)) && (dVar2 < _DAT_005d041f)) {
          pCVar12 = &(this_ptr->base).target_position;
          this_ptr->action_pending = 2;
          if ((CLocation *)pCVar12 != pCStack_38) {
            pCVar12->x = (pCStack_38->position).x;
            (this_ptr->base).target_position.y = (pCStack_38->position).y;
            (this_ptr->base).target_position.z = (pCStack_38->position).z;
          }
          pUVar5 = &(this_ptr->base).target_orientation;
          pUVar8 = &(pCStack_44->base).orient;
          if (pUVar5 != pUVar8) {
            (pUVar5->vec).x = (pUVar8->vec).x;
            (this_ptr->base).target_orientation.vec.y = (pCStack_44->base).orient.vec.y;
            (this_ptr->base).target_orientation.vec.z = (pCStack_44->base).orient.vec.z;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0x16,1);
          return 1;
        }
      }
      iStack_18 = iStack_18 + 4;
    }
  }
  else {
    iStack_34 = 0;
    for (iStack_30 = 0; iStack_30 < g_CDemonSetPtr->actor_count; iStack_30 = iStack_30 + 1) {
      pCStack_40 = (CActorDestination *)
                   core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_34),
                              g_CActorDestinationClassInfo.name_hash);
      pCStack_28 = pCStack_40;
      if ((pCStack_40 != (CActorDestination *)0x0) &&
         (iVar6 = core_dest_cpp_CActorDestination_acceptsActor_FUN_004473f0
                            (pCStack_40,(this_ptr->base).base.carry_hands[1].carry_actor),
         iVar6 != 0)) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                  ((CDemonActor *)this_ptr,
                   &(((this_ptr->base).base.carry_hands[1].carry_actor)->location).position,
                   &CStack_70);
        pCVar4 = &(pCStack_28->base).location;
        fStack_88 = CStack_70.x;
        afStack_84[(uint)bVar10 * -2] = *(float *)((int)&CStack_70 + (uint)bVar10 * -8 + 4);
        afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             *(float *)((int)&CStack_70 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        pCStack_3c = &pCVar4->position;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                  ((CDemonActor *)this_ptr,&pCVar4->position,&CStack_94);
        afStack_120[2] = CStack_94.x;
        afStack_120[(uint)bVar10 * -2 + 3] = *(float *)((int)&CStack_94 + (uint)bVar10 * -8 + 4);
        afStack_120[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             *(float *)((int)&CStack_94 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        fStack_174 = afStack_120[3] - afStack_84[0];
        fStack_170 = fStack_110 - afStack_84[1];
        fStack_16c = afStack_120[2] - fStack_88;
        *(uint *)((int)&stack0xfffffe98 + (uint)bVar10 * -8) =
             *(uint *)((int)&stack0xfffffe8c + (uint)bVar10 * -8);
        *(uint *)((int)&stack0xfffffe9c + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
             *(uint *)((int)&stack0xfffffe90 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
        if ((0.0 < fStack_164) &&
           ((((fStack_164 < (float)_DAT_005d040f && (ABS(fStack_16c) < (float)_DAT_005d0417)) &&
             (0.0 < (double)fStack_168)) && ((double)fStack_168 < _DAT_005d041f)))) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0x1a,1);
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                    ((CDemonActor *)this_ptr,pCStack_3c,&CStack_154);
          fStack_160 = CStack_154.x;
          (&stack0xfffffea4)[(uint)bVar10 * 0xfffffffe] =
               (float)*(uint *)((int)&CStack_154 + (uint)bVar10 * -8 + 4);
          afStack_138[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -8] =
               *(float *)((int)&CStack_154 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          if (&this_ptr->carry_object_world_center != (CVector3f *)&stack0xfffffea0) {
            (this_ptr->carry_object_world_center).x = fStack_160;
            (this_ptr->carry_object_world_center).y = fStack_15c;
            (this_ptr->carry_object_world_center).z = fStack_158;
          }
          afStack_54[2] = (this_ptr->carry_object_bbox).max.y - (this_ptr->carry_object_bbox).min.y;
          fStack_14 = core_doc_cpp_getCarriedObjectVerticalOffset_FUN_0044ffd0
                                ((this_ptr->base).base.carry_hands[1].carry_actor);
          iVar6 = this_ptr->action_pending;
          (this_ptr->carry_object_world_center).y =
               (afStack_54[2] - fStack_14) + (this_ptr->carry_object_world_center).y;
          if (iVar6 != 0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",iVar6,0x100f);
          }
          pCVar12 = &(this_ptr->base).target_position;
          pCVar4 = &(pCStack_40->base).location;
          this_ptr->action_pending = 2;
          if ((CLocation *)pCVar12 != pCVar4) {
            pCVar12->x = (pCVar4->position).x;
            (this_ptr->base).target_position.y = (pCStack_40->base).location.position.y;
            (this_ptr->base).target_position.z = (pCStack_40->base).location.position.z;
          }
          pUVar8 = &(this_ptr->base).target_orientation;
          pUVar5 = &(pCStack_40->base).orient;
          if (pUVar8 != pUVar5) {
            (pUVar8->vec).x = (pUVar5->vec).x;
            (this_ptr->base).target_orientation.vec.y = (pCStack_40->base).orient.vec.y;
            (this_ptr->base).target_orientation.vec.z = (pCStack_40->base).orient.vec.z;
          }
          return 1;
        }
      }
      iStack_34 = iStack_34 + 4;
    }
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
            (g_CDemonSetPtr,(this_ptr->base).base.carry_hands[1].carry_actor);
  pCVar7 = (this_ptr->base).base.carry_hands[1].carry_actor;
  pCVar12 = &CStack_f4;
  pfVar9 = (float *)((int)pCVar7 + (uint)bVar10 * -8 + 0x24);
  fStack_13c = (pCVar7->location).position.x;
  afStack_138[(uint)bVar10 * -2] = *pfVar9;
  afStack_138[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] = pfVar9[(uint)bVar10 * -2 + 1];
  CStack_f4.x = 0.0;
  CStack_f4.y = 0.0;
  CStack_f4.z = 1.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
            ((CDemonActor *)this_ptr,pCVar12,&CStack_148);
  fStack_100 = CStack_148.x;
  afStack_120[(uint)bVar10 * -2 + 9] = *(float *)((int)&CStack_148 + (uint)bVar10 * -8 + 4);
  afStack_120[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
       *(float *)((int)&CStack_148 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  afStack_138[0] = (this_ptr->base).base.base.location.position.y;
  fStack_13c = fStack_13c + fStack_100;
  CStack_b8.x = 0.0;
  CStack_b8.y = 0.0;
  afStack_138[1] = afStack_138[1] + fStack_f8;
  CStack_b8.z = 1.5;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
            ((CDemonActor *)this_ptr,&CStack_b8,&CStack_7c);
  top_y = 3.0;
  fVar11 = 0.1;
  fStack_a0 = CStack_7c.x;
  afStack_9c[(uint)bVar10 * -2] = *(float *)((int)&CStack_7c + (uint)bVar10 * -8 + 4);
  afStack_9c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       *(float *)((int)&CStack_7c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  fStack_14 = core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00537030
                        (g_CDemonSetPtr,fStack_13c,afStack_138[1],fStack_a0,afStack_9c[1],1.0,fVar11
                         ,top_y);
  if (fStack_14 < 1.0) {
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    return 0;
  }
  fVar11 = 0.5;
  fStack_e8 = fStack_13c + fStack_a0;
  afStack_e4[0] = afStack_138[0] + afStack_9c[0];
  afStack_e4[1] = afStack_138[1] + afStack_9c[1];
  CStack_ac.x = fStack_13c + fStack_a0;
  *(float *)((int)&CStack_ac + (uint)bVar10 * -8 + 4) = afStack_e4[(uint)bVar10 * -2];
  *(float *)((int)&CStack_ac + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
       afStack_e4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  afStack_54[3] =
       core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_00534ea0
                 (g_CDemonSetPtr,&CStack_ac,fVar11);
  fStack_14 = afStack_54[3];
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  if (ABS(afStack_54[3] - (this_ptr->base).base.base.location.position.y) <= 1.0) {
    iStack_2c = 0;
    iStack_20 = 0;
    do {
      if (g_CDemonSetPtr->actor_count <= iStack_2c) {
        pCVar7 = (this_ptr->base).base.carry_hands[1].carry_actor;
        this_ptr->action_pending = 6;
        if ((pCVar7 == (CDemonActor *)0x0) ||
           (iVar6 = (*((pCVar7->vtable)._ub)->canPickup)(pCVar7,(CDemonActor *)this_ptr), iVar6 != 4
           )) {
          iVar6 = 0x14;
        }
        else {
          iVar6 = 0x19;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,iVar6,1);
        return 1;
      }
      pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_20),
                          g_CCrateClassInfo.name_hash);
      if (pCVar7 != (CDemonActor *)0x0) {
        fStack_d0 = (pCVar7->location).position.x - fStack_13c;
        fStack_cc = (pCVar7->location).position.y - afStack_138[0];
        fStack_c8 = (pCVar7->location).position.z - afStack_138[1];
        fStack_124 = fStack_d0;
        afStack_120[(uint)bVar10 * -2] = afStack_e4[(uint)bVar10 * -2 + 6];
        afStack_120[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_e4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
        if (SQRT(afStack_120[1] * afStack_120[1] +
                 fStack_124 * fStack_124 + afStack_120[0] * afStack_120[0]) < (float)_DAT_005d0417)
        {
          return 0;
        }
      }
      iStack_2c = iStack_2c + 1;
      iStack_20 = iStack_20 + 4;
    } while( true );
  }
  return 0;
}
