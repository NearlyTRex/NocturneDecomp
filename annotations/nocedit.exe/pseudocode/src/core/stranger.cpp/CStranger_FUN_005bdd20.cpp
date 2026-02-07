// Name: core_stranger.cpp_CStranger_FUN_005bdd20
// Address: 005bdd20
// Address Range: [[005bdd20, 005be191] [005be262, 005be428]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005bdd20(void)

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005bdd20(uint param_1,
   uint param_2) */

void __cdecl core_stranger_cpp_CStranger_FUN_005bdd20(void)

{
  CDeformableModelInstance *this_ptr;
  CDemonActor_vtable *pCVar1;
  uint uVar2;
  int iVar3;
  CVector3f *pCVar4;
  int iVar5;
  CCharacter *this_ptr_00;
  int unaff_EBP;
  double dVar6;
  CStranger *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_ffffff34;
  char *in_stack_ffffff48;
  CDemonActor *pCVar7;
  float fStack_a4;
  CVector3f local_94 [2];
  byte local_74 [16];
  byte auStack_64 [12];
  byte auStack_58 [20];
  byte local_44 [12];
  CVector3f local_38 [2];
  CVector3f *local_20;
  CVector3f *local_1c;
  CCharacter *local_18;
  UActorVTable local_14;
  
  this_ptr = &(in_stack_00000004->base).base.model;
  local_1c = (CVector3f *)((in_stack_00000004->base).unk3 + 0x14);
  local_20 = (CVector3f *)((in_stack_00000004->base).unk3 + 8);
  do {
    uVar2 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&this_ptr->motion_controller);
    if (uVar2 < 0x12) {
      if (uVar2 < 6) {
        if (uVar2 < 2) {
          if (uVar2 == 1) {
LAB_005bdd85:
            iVar3 = INT_03f6bae8;
            if (uVar2 == 7) {
              iVar3 = INT_03f6baec;
            }
            core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                      (this_ptr,(CVector3f *)(auStack_64 + 8),iVar3);
            pCVar7 = (in_stack_00000004->base).ladder_to_climb;
            if (pCVar7 == (CDemonActor *)0x0) {
              if (*(int *)(in_stack_00000004->unk1 + 0x50) == 0) {
                if ((in_stack_00000004->base).base.field3_0x2410 != 0) {
                  local_14 = (UActorVTable)
                             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                       (&this_ptr->motion_controller,3);
                  if ((float)0.40000000000000002 < (float)local_14) {
                    (*((in_stack_00000004->base).base.base.vtable._ub)->processFootstepAtOffset)
                              ((CDemonActor *)in_stack_00000004,(CVector3f *)(auStack_64 + 8),1.7);
                  }
                  else {
                    local_14 = (UActorVTable)
                               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                         (&this_ptr->motion_controller,1);
                    if ((float)local_14 <= (float)0.40000000000000002) {
                      local_14 = (UActorVTable)
                                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                           (&this_ptr->motion_controller,2);
                      if ((float)0.40000000000000002 < (float)local_14) {
                        (*((in_stack_00000004->base).base.base.vtable._ub)->processFootstepAtOffset)
                                  ((CDemonActor *)in_stack_00000004,(CVector3f *)(auStack_64 + 8),
                                   1.0);
                      }
                    }
                    else {
                      (*((in_stack_00000004->base).base.base.vtable._ub)->processFootstepAtOffset)
                                ((CDemonActor *)in_stack_00000004,(CVector3f *)(auStack_64 + 8),1.0)
                      ;
                    }
                  }
                }
              }
              else {
                pCVar1 = (in_stack_00000004->base).base.base.vtable._ub;
                iVar3 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk1 + 0x50) + 0x154) +
                                    0x3c))();
                pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                   ((CDemonActor *)in_stack_00000004,(CVector3f *)(local_44 + 8),
                                    (CVector3f *)(local_74 + 8));
                (*pCVar1->handleFootstep)
                          ((CDemonActor *)in_stack_00000004,pCVar4,iVar3,in_stack_ffffff34);
              }
            }
            else {
              local_14 = (in_stack_00000004->base).base.base.vtable;
              iVar3 = (*((pCVar7->vtable)._ub)->getGroundType)(pCVar7);
              in_stack_ffffff34 = 8.436624e-39;
              pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 ((CDemonActor *)in_stack_00000004,(CVector3f *)auStack_64,
                                  (CVector3f *)auStack_58);
              (**(code **)(unaff_EBP + 0x20))
                        ((CDemonActor *)in_stack_00000004,pCVar4,iVar3,(float)in_stack_ffffff48);
            }
          }
          else {
LAB_005be41a:
            core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)in_stack_00000004);
          }
        }
        else if (uVar2 < 3) {
          if (in_stack_00000004->action_pending == 4) {
            in_stack_00000004->action_pending = 0;
          }
          else {
            in_stack_ffffff34 = 8.437039e-39;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       in_stack_00000004->action_pending,0x785);
          }
          pCVar7 = (in_stack_00000004->base).object_to_pick_up;
          if (pCVar7 == (CDemonActor *)0x0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\nstranger.cpp line %d",0x78b);
          }
          else {
            iVar3 = (*((pCVar7->vtable)._ub)->canPickup)(pCVar7,(CDemonActor *)in_stack_00000004);
            if (iVar3 == 0) {
              (in_stack_00000004->base).object_to_pick_up = (CDemonActor *)0x0;
            }
            else {
              pCVar7 = (in_stack_00000004->base).object_to_pick_up;
              if ((pCVar7 != (CDemonActor *)0x0) &&
                 (iVar5 = (*((pCVar7->vtable)._ub)->canPickup)
                                    (pCVar7,(CDemonActor *)in_stack_00000004),
                 in_stack_ffffff48 = pCVar7->actor_name, iVar5 == 4)) {
                (in_stack_00000004->base).base.field48_0x2a90 = 0;
                (in_stack_00000004->base).base.field47_0x2a8c = 0xe;
              }
              if (iVar3 == 2) {
                if (in_stack_00000004->action_pending != 0) {
                  in_stack_ffffff48 = &g_CEditorToolsPtr->unk;
                  shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                            (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d");
                }
                in_stack_00000004->action_pending = 1;
              }
              core_hero_cpp_CHero_FUN_004f3890(&in_stack_00000004->base);
            }
          }
        }
        else {
          if (uVar2 != 3) goto LAB_005be41a;
          pCVar7 = (in_stack_00000004->base).base.carry_hands[1].carry_actor;
          core_stranger_cpp_CStranger_FUN_005c1f80(in_stack_00000004);
          iVar3 = in_stack_00000004->action_pending;
          if (iVar3 == 2) {
            if (pCVar7 != (CDemonActor *)0x0) {
              (*((pCVar7->vtable)._ub)->setPositionAndOrientation)(pCVar7,local_20,local_1c);
            }
LAB_005bde44:
            in_stack_00000004->action_pending = 0;
          }
          else {
            if (iVar3 == 6) goto LAB_005bde44;
            in_stack_ffffff34 = 8.436913e-39;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",iVar3,0x767);
          }
          iVar3 = (in_stack_00000004->base).base.field47_0x2a8c;
          (in_stack_00000004->base).unk3[4] = '\0';
          (in_stack_00000004->base).unk3[5] = '\0';
          (in_stack_00000004->base).unk3[6] = '\0';
          (in_stack_00000004->base).unk3[7] = '\0';
          if (iVar3 == 0xe) {
            (in_stack_00000004->base).base.field48_0x2a90 = 0;
            (in_stack_00000004->base).base.field47_0x2a8c = 0;
          }
          if (pCVar7 == *(CDemonActor **)(in_stack_00000004->unk1 + 0x54)) {
            in_stack_00000004->unk1[0x54] = '\0';
            in_stack_00000004->unk1[0x55] = '\0';
            in_stack_00000004->unk1[0x56] = '\0';
            in_stack_00000004->unk1[0x57] = '\0';
          }
        }
      }
      else if (uVar2 < 7) {
        this_ptr_00 = (CCharacter *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                ((in_stack_00000004->base).base.grabbed_by,
                                 g_CEnemyClassInfo.name_hash);
        local_18 = this_ptr_00;
        if (this_ptr_00 != (CCharacter *)0x0) {
          pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                             (this_ptr,(CVector3f *)local_44,INT_03f6bafc);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)in_stack_00000004,local_38,pCVar4);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff50);
          local_14 = (UActorVTable)core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
          pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             ((CDemonActor *)this_ptr_00,(CVector3f *)(auStack_58 + 8),local_38);
          if (local_94 != pCVar4) {
            local_94[0].x = pCVar4->x;
            local_94[0].y = pCVar4->y;
            local_94[0].z = pCVar4->z;
          }
          (*(((local_18->base).vtable._uc)->_uc).processDamage)
                    (local_18,(SDamageInfo *)&stack0xffffff50);
          if (0.0 < (double)fStack_a4) {
            dVar6 = round((double)fStack_a4 * 0.20000000000000001);
            unaff_EBP = (int)ROUND(dVar6);
            in_stack_ffffff34 = 8.438212e-39;
            core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
            in_stack_ffffff48 = "kick1.wav";
            (*((in_stack_00000004->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)in_stack_00000004,"kick1.wav");
          }
        }
        (in_stack_00000004->base).base.grabbed_by = (CDemonActor *)0x0;
      }
      else if (uVar2 < 0xf) {
        if (uVar2 == 7) goto LAB_005bdd85;
        core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)in_stack_00000004);
      }
      else if (uVar2 < 0x10) {
        pCVar7 = (in_stack_00000004->base).base.grabbed_by;
        if ((pCVar7 != (CDemonActor *)0x0) &&
           (pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                               ((CDemonActor *)in_stack_00000004,(CVector3f *)local_74,
                                &(pCVar7->location).position), 0.0 < pCVar4->z)) {
          (*((in_stack_00000004->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)in_stack_00000004,"hit-gh[4,7].wav");
        }
      }
      else if (uVar2 == 0x11) {
        (*((in_stack_00000004->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)in_stack_00000004,"fall-1.wav");
      }
      else {
        core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)in_stack_00000004);
      }
    }
    else if (0x12 < uVar2) {
      if (uVar2 < 0x17) {
        if (uVar2 < 0x15) {
          if (uVar2 != 0x13) goto LAB_005be41a;
          core_stranger_cpp_CStranger_FUN_005c1f00(in_stack_00000004);
        }
        else if (uVar2 < 0x16) {
          if ((in_stack_00000004->base).base.carry_hands[1].carry_actor ==
              *(CDemonActor **)(in_stack_00000004->unk1 + 0x54)) {
            in_stack_00000004->unk1[0x54] = '\0';
            in_stack_00000004->unk1[0x55] = '\0';
            in_stack_00000004->unk1[0x56] = '\0';
            in_stack_00000004->unk1[0x57] = '\0';
          }
          core_hero_cpp_CHero_FUN_004f38d0(&in_stack_00000004->base);
          if (in_stack_00000004->action_pending == 1) {
            in_stack_00000004->action_pending = 0;
          }
          else {
            in_stack_ffffff34 = 8.43738e-39;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       in_stack_00000004->action_pending,0x7c9);
          }
        }
        else {
          if (in_stack_00000004->action_pending == 5) {
            in_stack_00000004->action_pending = 0;
          }
          else {
            in_stack_ffffff34 = 8.438443e-39;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       in_stack_00000004->action_pending,0x81c);
          }
          if ((in_stack_00000004->base).door_to_open == (CDemonActor *)0x0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"doorToOpen == NULL\nstranger.cpp line %d",0x822);
          }
          iVar3 = core_hero_cpp_CHero_FUN_004f2ed0(&in_stack_00000004->base);
          if (iVar3 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&this_ptr->motion_controller,0,1);
          }
        }
      }
      else if (uVar2 < 0x18) {
        core_hero_cpp_CHero_FUN_004f30f0(&in_stack_00000004->base);
      }
      else if (uVar2 < 0x29a) {
        if (uVar2 != 0x18) goto LAB_005be41a;
      }
      else if (uVar2 < 0x29b) {
        (in_stack_00000004->base).base.field7_0x2428.y = 10.0f;
      }
      else {
        if (uVar2 != 0x29b) goto LAB_005be41a;
        (in_stack_00000004->base).base.field7_0x2428.y = 8.0f;
      }
    }
    if (in_stack_00000008 <= 0.0) {
      return;
    }
  } while( true );
}
