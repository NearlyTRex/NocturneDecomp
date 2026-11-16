// Name: core_doc.cpp_FUN_00458e80
// Address: 00458e80
// Address Range: [[00458e80, 0045979a]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_00458e80(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint core_doc_cpp_FUN_00458e80(void)

{
  double dVar1;
  double dVar2;
  CFlame *pCVar3;
  CLocation *pCVar4;
  UOrientationVector *pUVar5;
  int iVar6;
  CDemonActor *pCVar7;
  char *pcVar8;
  float *pfVar9;
  byte bVar10;
  CCharacter *in_stack_00000004;
  float afStackY_1158 [1002];
  float fVar11;
  CVector3f *input;
  float top_y;
  double in_stack_fffffe70;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  CVector3f CStack_14c;
  CVector3f CStack_140;
  float fStack_134;
  float afStack_130 [2];
  CVector3f CStack_128;
  float fStack_11c;
  float afStack_118 [4];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f0;
  CVector3f CStack_ec;
  float fStack_e0;
  float afStack_dc [4];
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  float fStack_98;
  float afStack_94 [2];
  CVector3f CStack_8c;
  float fStack_80;
  float afStack_7c [2];
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  float fStack_50;
  float afStack_4c [4];
  CActorDestination *pCStack_3c;
  CActorDestination *pCStack_38;
  CVector3f *pCStack_34;
  CLocation *pCStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  CActorDestination *pCStack_20;
  CActorDestination *pCStack_1c;
  int iStack_18;
  float fStack_14;
  int iVar12;
  
  bVar10 = 0;
  if (*(int *)(in_stack_00000004[2].flames[1].on_event + 0x14) != 0) {
    return 0;
  }
  if (in_stack_00000004->carry_hands[1].carry_actor == (CDemonActor *)0x0) {
    return 0;
  }
  if ((in_stack_00000004->layer_action_index != 9) &&
     (fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                            (in_stack_00000004,0), fStack_14 < (float)_DAT_005d0407)) {
    return 0;
  }
  fStack_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                        (&(in_stack_00000004->model).base,0);
  if (fStack_14 < 1.0) {
    return 0;
  }
  pCVar7 = in_stack_00000004->carry_hands[1].carry_actor;
  if ((pCVar7 == (CDemonActor *)0x0) ||
     (iVar12 = (*((pCVar7->vtable)._ub)->canPickup)(pCVar7,&in_stack_00000004->base), iVar12 != 4))
  {
    iVar12 = 0;
    for (fStack_14 = 0.0; (int)fStack_14 < g_CDemonSetPtr->actor_count;
        fStack_14 = (float)((int)fStack_14 + 1)) {
      pCStack_3c = (CActorDestination *)
                   core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar12),
                              g_CActorDestinationClassInfo.name_hash);
      pCStack_1c = pCStack_3c;
      if ((pCStack_3c != (CActorDestination *)0x0) &&
         (iVar6 = core_dest_cpp_CActorDestination_acceptsActor_FUN_004473f0
                            (pCStack_3c,in_stack_00000004->carry_hands[1].carry_actor), iVar6 != 0))
      {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                  (&in_stack_00000004->base,
                   &((in_stack_00000004->carry_hands[1].carry_actor)->location).position,&CStack_128
                  );
        pCVar4 = &(pCStack_1c->base).location;
        fStack_bc = CStack_128.x;
        afStack_dc[(uint)bVar10 * -2 + 9] = *(float *)((int)&CStack_128 + (uint)bVar10 * -8 + 4);
        afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
             *(float *)((int)&CStack_128 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        pCStack_30 = pCVar4;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                  (&in_stack_00000004->base,&pCVar4->position,&CStack_5c);
        afStack_dc[2] = CStack_5c.x;
        afStack_dc[(uint)bVar10 * -2 + 3] = *(float *)((int)&CStack_5c + (uint)bVar10 * -8 + 4);
        afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             *(float *)((int)&CStack_5c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        fStack_50 = afStack_dc[2] - fStack_bc;
        afStack_4c[0] = afStack_dc[3] - fStack_b8;
        afStack_4c[1] = fStack_cc - fStack_b4;
        fStack_104 = afStack_dc[2] - fStack_bc;
        afStack_118[(uint)bVar10 * -2 + 6] = afStack_4c[(uint)bVar10 * -2];
        afStack_118[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
             afStack_4c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        in_stack_fffffe70 = (double)fStack_fc;
        dVar1 = (double)fStack_100;
        dVar2 = (double)fStack_104;
        engine_console_cpp_CConsole_printf_FUN_00436710
                  (g_CConsolePtr,"Delta to dest : %3.2f,%3.2f,%3.2f\n");
        if ((((0.0 < fStack_fc) &&
             ((in_stack_fffffe70 < _DAT_005d040f && (ABS(dVar2) < _DAT_005d0417)))) && (0.0 < dVar1)
            ) && (dVar1 < _DAT_005d041f)) {
          pcVar8 = in_stack_00000004[2].flames[1].on_event + 0x2c;
          pCVar3 = in_stack_00000004[2].flames;
          pCVar3[1].off_event[0x4c] = '\x02';
          pCVar3[1].off_event[0x4d] = '\0';
          pCVar3[1].off_event[0x4e] = '\0';
          pCVar3[1].off_event[0x4f] = '\0';
          if ((CLocation *)pcVar8 != pCStack_30) {
            *(float *)pcVar8 = (pCStack_30->position).x;
            *(float *)(in_stack_00000004[2].flames[1].on_event + 0x30) = (pCStack_30->position).y;
            *(float *)(in_stack_00000004[2].flames[1].on_event + 0x34) = (pCStack_30->position).z;
          }
          pcVar8 = in_stack_00000004[2].flames[1].on_event + 0x38;
          pUVar5 = &(pCStack_3c->base).orient;
          if ((UOrientationVector *)pcVar8 != pUVar5) {
            *(float *)pcVar8 = (pUVar5->vec).x;
            *(float *)(in_stack_00000004[2].flames[1].on_event + 0x3c) =
                 (pCStack_3c->base).orient.vec.y;
            *(float *)(in_stack_00000004[2].flames[1].on_event + 0x40) =
                 (pCStack_3c->base).orient.vec.z;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(in_stack_00000004->model).base,0x16,1);
          return 1;
        }
      }
      iVar12 = iVar12 + 4;
    }
  }
  else {
    iStack_2c = 0;
    for (iStack_28 = 0; iStack_28 < g_CDemonSetPtr->actor_count; iStack_28 = iStack_28 + 1) {
      pCStack_38 = (CActorDestination *)
                   core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_2c),
                              g_CActorDestinationClassInfo.name_hash);
      pCStack_20 = pCStack_38;
      if ((pCStack_38 != (CActorDestination *)0x0) &&
         (iVar12 = core_dest_cpp_CActorDestination_acceptsActor_FUN_004473f0
                             (pCStack_38,in_stack_00000004->carry_hands[1].carry_actor), iVar12 != 0
         )) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                  (&in_stack_00000004->base,
                   &((in_stack_00000004->carry_hands[1].carry_actor)->location).position,&CStack_68)
        ;
        pCVar4 = &(pCStack_20->base).location;
        fStack_80 = CStack_68.x;
        afStack_7c[(uint)bVar10 * -2] = *(float *)((int)&CStack_68 + (uint)bVar10 * -8 + 4);
        afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             *(float *)((int)&CStack_68 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        pCStack_34 = &pCVar4->position;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                  (&in_stack_00000004->base,&pCVar4->position,&CStack_8c);
        afStack_118[2] = CStack_8c.x;
        afStack_118[(uint)bVar10 * -2 + 3] = *(float *)((int)&CStack_8c + (uint)bVar10 * -8 + 4);
        afStack_118[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             *(float *)((int)&CStack_8c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        fStack_16c = afStack_118[3] - afStack_7c[0];
        fStack_168 = fStack_108 - afStack_7c[1];
        fStack_164 = afStack_118[2] - fStack_80;
        *(uint *)((int)&stack0xfffffea0 + (uint)bVar10 * -8) =
             *(uint *)((int)&stack0xfffffe94 + (uint)bVar10 * -8);
        *(uint *)((int)&stack0xfffffea4 + ((uint)bVar10 * -2 + (uint)bVar10 * -2) * 4) =
             *(uint *)((int)&stack0xfffffe98 + ((uint)bVar10 * -2 + (uint)bVar10 * -2) * 4);
        if ((0.0 < fStack_15c) &&
           ((((fStack_15c < (float)_DAT_005d040f && (ABS(fStack_164) < (float)_DAT_005d0417)) &&
             (0.0 < (double)fStack_160)) && ((double)fStack_160 < _DAT_005d041f)))) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(in_stack_00000004->model).base,0x1a,1);
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                    (&in_stack_00000004->base,pCStack_34,&CStack_14c);
          fStack_158 = CStack_14c.x;
          (&stack0xfffffeac)[(uint)bVar10 * 0xfffffffe] =
               (float)*(uint *)((int)&CStack_14c + (uint)bVar10 * -8 + 4);
          (&stack0xfffffeac)[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               (float)*(uint *)((int)&CStack_14c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          pCVar4 = &in_stack_00000004[2].flames[2].base.location;
          if (pCVar4 != (CLocation *)&stack0xfffffea8) {
            (pCVar4->position).x = fStack_158;
            in_stack_00000004[2].flames[2].base.location.position.y = fStack_154;
            in_stack_00000004[2].flames[2].base.location.position.z = fStack_150;
          }
          afStack_4c[2] =
               in_stack_00000004[2].flames[2].base.orient_matrix.m[0].x -
               in_stack_00000004[2].flames[2].base.orient.vec.x;
          fVar11 = core_doc_cpp_getCarriedObjectVerticalOffset_FUN_0044ffd0
                             (in_stack_00000004->carry_hands[1].carry_actor);
          iVar12 = *(int *)(in_stack_00000004[2].flames[1].off_event + 0x4c);
          in_stack_00000004[2].flames[2].base.location.position.y =
               (afStack_4c[2] - fVar11) + in_stack_00000004[2].flames[2].base.location.position.y;
          if (iVar12 != 0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",iVar12,0x100f);
          }
          pcVar8 = in_stack_00000004[2].flames[1].on_event + 0x2c;
          pCVar4 = &(pCStack_38->base).location;
          pCVar3 = in_stack_00000004[2].flames;
          pCVar3[1].off_event[0x4c] = '\x02';
          pCVar3[1].off_event[0x4d] = '\0';
          pCVar3[1].off_event[0x4e] = '\0';
          pCVar3[1].off_event[0x4f] = '\0';
          if ((CLocation *)pcVar8 != pCVar4) {
            *(float *)pcVar8 = (pCVar4->position).x;
            *(float *)(in_stack_00000004[2].flames[1].on_event + 0x30) =
                 (pCStack_38->base).location.position.y;
            *(float *)(in_stack_00000004[2].flames[1].on_event + 0x34) =
                 (pCStack_38->base).location.position.z;
          }
          pcVar8 = in_stack_00000004[2].flames[1].on_event + 0x38;
          pUVar5 = &(pCStack_38->base).orient;
          if ((UOrientationVector *)pcVar8 != pUVar5) {
            *(float *)pcVar8 = (pUVar5->vec).x;
            *(float *)(in_stack_00000004[2].flames[1].on_event + 0x3c) =
                 (pCStack_38->base).orient.vec.y;
            *(float *)(in_stack_00000004[2].flames[1].on_event + 0x40) =
                 (pCStack_38->base).orient.vec.z;
          }
          return 1;
        }
      }
      iStack_2c = iStack_2c + 4;
    }
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,&in_stack_00000004->base);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
            (g_CDemonSetPtr,in_stack_00000004->carry_hands[1].carry_actor);
  pCVar7 = in_stack_00000004->carry_hands[1].carry_actor;
  input = &CStack_ec;
  pfVar9 = (float *)((int)pCVar7 + (uint)bVar10 * -8 + 0x24);
  fStack_134 = (pCVar7->location).position.x;
  afStack_130[(uint)bVar10 * -2] = *pfVar9;
  afStack_130[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] = pfVar9[(uint)bVar10 * -2 + 1];
  CStack_ec.x = 0.0;
  CStack_ec.y = 0.0;
  CStack_ec.z = 1.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
            (&in_stack_00000004->base,input,&CStack_140);
  fStack_f8 = CStack_140.x;
  afStack_118[(uint)bVar10 * -2 + 9] = *(float *)((int)&CStack_140 + (uint)bVar10 * -8 + 4);
  afStack_118[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
       *(float *)((int)&CStack_140 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  afStack_130[0] = (in_stack_00000004->base).location.position.y;
  fStack_134 = fStack_134 + fStack_f8;
  CStack_b0.x = 0.0;
  CStack_b0.y = 0.0;
  afStack_130[1] = afStack_130[1] + fStack_f0;
  CStack_b0.z = 1.5;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
            (&in_stack_00000004->base,&CStack_b0,&CStack_74);
  top_y = 3.0;
  fVar11 = 0.1;
  fStack_98 = CStack_74.x;
  afStack_94[(uint)bVar10 * -2] = *(float *)((int)&CStack_74 + (uint)bVar10 * -8 + 4);
  afStack_94[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       *(float *)((int)&CStack_74 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  fVar11 = core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00537030
                     (g_CDemonSetPtr,fStack_134,afStack_130[1],fStack_98,afStack_94[1],1.0,fVar11,
                      top_y);
  if (fVar11 < 1.0) {
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    return 0;
  }
  fVar11 = 0.5;
  fStack_e0 = fStack_134 + fStack_98;
  afStack_dc[0] = afStack_130[0] + afStack_94[0];
  afStack_dc[1] = afStack_130[1] + afStack_94[1];
  CStack_a4.x = fStack_134 + fStack_98;
  *(float *)((int)&CStack_a4 + (uint)bVar10 * -8 + 4) = afStack_dc[(uint)bVar10 * -2];
  *(float *)((int)&CStack_a4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
       afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  afStack_4c[3] =
       core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_00534ea0
                 (g_CDemonSetPtr,&CStack_a4,fVar11);
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  if (ABS(afStack_4c[3] - (in_stack_00000004->base).location.position.y) <= 1.0) {
    iStack_24 = 0;
    iStack_18 = 0;
    do {
      iVar12 = (int)((ulonglong)in_stack_fffffe70 >> 0x20);
      if (g_CDemonSetPtr->actor_count <= iStack_24) {
        pCVar7 = in_stack_00000004->carry_hands[1].carry_actor;
        pCVar3 = in_stack_00000004[2].flames;
        pCVar3[1].off_event[0x4c] = '\x06';
        pCVar3[1].off_event[0x4d] = '\0';
        pCVar3[1].off_event[0x4e] = '\0';
        pCVar3[1].off_event[0x4f] = '\0';
        if ((pCVar7 == (CDemonActor *)0x0) ||
           (iVar6 = (*((pCVar7->vtable)._ub)->canPickup)(pCVar7,&in_stack_00000004->base),
           iVar6 != 4)) {
          iVar6 = 0x14;
        }
        else {
          iVar12 = 1;
          iVar6 = 0x19;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(in_stack_00000004->model).base,iVar6,iVar12);
        return 1;
      }
      pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_18),
                          g_CCrateClassInfo.name_hash);
      if (pCVar7 != (CDemonActor *)0x0) {
        fStack_c8 = (pCVar7->location).position.x - fStack_134;
        fStack_c4 = (pCVar7->location).position.y - afStack_130[0];
        fStack_c0 = (pCVar7->location).position.z - afStack_130[1];
        fStack_11c = fStack_c8;
        afStack_118[(uint)bVar10 * -2] = afStack_dc[(uint)bVar10 * -2 + 6];
        afStack_118[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
        if (SQRT(afStack_118[1] * afStack_118[1] +
                 fStack_11c * fStack_11c + afStack_118[0] * afStack_118[0]) < (float)_DAT_005d0417)
        {
          return 0;
        }
      }
      iStack_24 = iStack_24 + 1;
      iStack_18 = iStack_18 + 4;
    } while( true );
  }
  return 0;
}
