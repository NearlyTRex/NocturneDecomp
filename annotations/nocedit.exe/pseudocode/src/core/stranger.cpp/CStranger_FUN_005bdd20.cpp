// Name: core_stranger.cpp_CStranger_FUN_005bdd20
// Address: 005bdd20
// Address Range: [[005bdd20, 005be191] [005be262, 005be428]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005bdd20(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005bdd20(CStranger *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor_vtable *pCVar1;
  uint uVar2;
  int iVar3;
  CVector3f *pCVar4;
  int iVar5;
  CCharacter *this_ptr_01;
  int unaff_EBP;
  double dVar6;
  float in_stack_00000008;
  char *in_stack_ffffff48;
  CDemonActor *pCVar7;
  float fStack_a4;
  CVector3f local_94 [2];
  CStranger *local_7c;
  CStranger *local_78;
  CVector3f local_74;
  byte auStack_64 [12];
  byte auStack_58 [20];
  CVector3f local_44;
  CVector3f local_38;
  CVector3f CStack_28;
  CVector3f *local_1c;
  CCharacter *local_18;
  UActorVTable local_14;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  local_1c = (CVector3f *)((this_ptr->base).unk3 + 0x14);
  CStack_28.z = (float)((this_ptr->base).unk3 + 8);
  do {
    uVar2 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&this_ptr_00->motion_controller);
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
                      (this_ptr_00,(CVector3f *)(auStack_64 + 8),iVar3);
            pCVar7 = (this_ptr->base).ladder_to_climb;
            if (pCVar7 == (CDemonActor *)0x0) {
              if (this_ptr->ladder_to_descend == (CDemonActor *)0x0) {
                if ((this_ptr->base).base.field3_0x2410 != 0) {
                  local_14 = (UActorVTable)
                             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                       (&this_ptr_00->motion_controller,3);
                  if ((float)0.40000000000000002 < (float)local_14) {
                    (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                              ((CDemonActor *)this_ptr,(CVector3f *)(auStack_64 + 8),1.7);
                  }
                  else {
                    local_14 = (UActorVTable)
                               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                         (&this_ptr_00->motion_controller,1);
                    if ((float)local_14 <= (float)0.40000000000000002) {
                      local_14 = (UActorVTable)
                                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                           (&this_ptr_00->motion_controller,2);
                      if ((float)0.40000000000000002 < (float)local_14) {
                        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                                  ((CDemonActor *)this_ptr,(CVector3f *)(auStack_64 + 8),1.0);
                      }
                    }
                    else {
                      (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                                ((CDemonActor *)this_ptr,(CVector3f *)(auStack_64 + 8),1.0);
                    }
                  }
                }
              }
              else {
                pCVar1 = (this_ptr->base).base.base.vtable._ub;
                iVar3 = (*((this_ptr->ladder_to_descend->vtable)._ub)->getGroundType)
                                  (this_ptr->ladder_to_descend);
                pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                   ((CDemonActor *)this_ptr,&CStack_28,(CVector3f *)auStack_58);
                (*pCVar1->handleFootstep)
                          ((CDemonActor *)this_ptr,pCVar4,iVar3,(float)in_stack_ffffff48);
              }
            }
            else {
              local_14 = (this_ptr->base).base.base.vtable;
              iVar3 = (*((pCVar7->vtable)._ub)->getGroundType)(pCVar7);
              pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 ((CDemonActor *)this_ptr,(CVector3f *)auStack_64,
                                  (CVector3f *)auStack_58);
              (**(code **)(unaff_EBP + 0x20))
                        ((CDemonActor *)this_ptr,pCVar4,iVar3,(float)in_stack_ffffff48);
            }
          }
          else {
LAB_005be41a:
            core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
          }
        }
        else if (uVar2 < 3) {
          if (this_ptr->action_pending == 4) {
            this_ptr->action_pending = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       this_ptr->action_pending,0x785);
          }
          pCVar7 = (this_ptr->base).object_to_pick_up;
          if (pCVar7 == (CDemonActor *)0x0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\nstranger.cpp line %d",0x78b);
          }
          else {
            iVar3 = (*((pCVar7->vtable)._ub)->canPickup)(pCVar7,(CDemonActor *)this_ptr);
            if (iVar3 == 0) {
              (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
            }
            else {
              pCVar7 = (this_ptr->base).object_to_pick_up;
              if ((pCVar7 != (CDemonActor *)0x0) &&
                 (iVar5 = (*((pCVar7->vtable)._ub)->canPickup)(pCVar7,(CDemonActor *)this_ptr),
                 in_stack_ffffff48 = pCVar7->actor_name, iVar5 == 4)) {
                (this_ptr->base).base.layer_action_t = 0.0;
                (this_ptr->base).base.layer_action_index = 0xe;
              }
              if (iVar3 == 2) {
                if (this_ptr->action_pending != 0) {
                  in_stack_ffffff48 = &g_CEditorToolsPtr->unk;
                  shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                            (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d");
                }
                this_ptr->action_pending = 1;
              }
              core_hero_cpp_CHero_FUN_004f3890(&this_ptr->base);
            }
          }
        }
        else {
          if (uVar2 != 3) goto LAB_005be41a;
          pCVar7 = (this_ptr->base).base.carry_hands[1].carry_actor;
          core_stranger_cpp_CStranger_FUN_005c1f80(this_ptr);
          iVar3 = this_ptr->action_pending;
          if (iVar3 == 2) {
            if (pCVar7 != (CDemonActor *)0x0) {
              (*((pCVar7->vtable)._ub)->setPositionAndOrientation)
                        (pCVar7,(CVector3f *)CStack_28.z,local_1c);
            }
LAB_005bde44:
            this_ptr->action_pending = 0;
          }
          else {
            if (iVar3 == 6) goto LAB_005bde44;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",iVar3,0x767);
          }
          iVar3 = (this_ptr->base).base.layer_action_index;
          (this_ptr->base).unk3[4] = '\0';
          (this_ptr->base).unk3[5] = '\0';
          (this_ptr->base).unk3[6] = '\0';
          (this_ptr->base).unk3[7] = '\0';
          if (iVar3 == 0xe) {
            (this_ptr->base).base.layer_action_t = 0.0;
            (this_ptr->base).base.layer_action_index = 0;
          }
          if (pCVar7 == this_ptr->weapon) {
            this_ptr->weapon = (CDemonActor *)0x0;
          }
        }
      }
      else if (uVar2 < 7) {
        this_ptr_01 = (CCharacter *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                ((this_ptr->base).base.grabbed_by,g_CEnemyClassInfo.name_hash);
        local_18 = this_ptr_01;
        if (this_ptr_01 != (CCharacter *)0x0) {
          pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                             (this_ptr_00,&local_44,INT_03f6bafc);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_38,pCVar4);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff50);
          local_14 = (UActorVTable)core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
          pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             ((CDemonActor *)this_ptr_01,(CVector3f *)(auStack_58 + 8),&local_38);
          if (local_94 != pCVar4) {
            local_94[0].x = pCVar4->x;
            local_94[0].y = pCVar4->y;
            local_94[0].z = pCVar4->z;
          }
          local_7c = this_ptr;
          local_78 = this_ptr;
          (*(((local_18->base).vtable._uc)->_uc).processDamage)
                    (local_18,(SDamageInfo *)&stack0xffffff50);
          if (0.0 < (double)fStack_a4) {
            dVar6 = round((double)fStack_a4 * 0.20000000000000001);
            unaff_EBP = (int)ROUND(dVar6);
            core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
            in_stack_ffffff48 = "kick1.wav";
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"kick1.wav");
          }
        }
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
      }
      else if (uVar2 < 0xf) {
        if (uVar2 == 7) goto LAB_005bdd85;
        core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
      }
      else if (uVar2 < 0x10) {
        pCVar7 = (this_ptr->base).base.grabbed_by;
        if ((pCVar7 != (CDemonActor *)0x0) &&
           (pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                               ((CDemonActor *)this_ptr,&local_74,&(pCVar7->location).position),
           0.0 < pCVar4->z)) {
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"hit-gh[4,7].wav");
        }
      }
      else if (uVar2 == 0x11) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"fall-1.wav");
      }
      else {
        core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
      }
    }
    else if (0x12 < uVar2) {
      if (uVar2 < 0x17) {
        if (uVar2 < 0x15) {
          if (uVar2 != 0x13) goto LAB_005be41a;
          core_stranger_cpp_CStranger_FUN_005c1f00(this_ptr);
        }
        else if (uVar2 < 0x16) {
          if ((this_ptr->base).base.carry_hands[1].carry_actor == this_ptr->weapon) {
            this_ptr->weapon = (CDemonActor *)0x0;
          }
          core_hero_cpp_CHero_FUN_004f38d0(&this_ptr->base);
          if (this_ptr->action_pending == 1) {
            this_ptr->action_pending = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       this_ptr->action_pending,0x7c9);
          }
        }
        else {
          if (this_ptr->action_pending == 5) {
            this_ptr->action_pending = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       this_ptr->action_pending,0x81c);
          }
          if ((this_ptr->base).door_to_open == (CDemonActor *)0x0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"doorToOpen == NULL\nstranger.cpp line %d",0x822);
          }
          iVar3 = core_hero_cpp_CHero_FUN_004f2ed0(&this_ptr->base);
          if (iVar3 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&this_ptr_00->motion_controller,0,1);
          }
        }
      }
      else if (uVar2 < 0x18) {
        core_hero_cpp_CHero_FUN_004f30f0(&this_ptr->base);
      }
      else if (uVar2 < 0x29a) {
        if (uVar2 != 0x18) goto LAB_005be41a;
      }
      else if (uVar2 < 0x29b) {
        (this_ptr->base).base.field7_0x2428.y = 10.0f;
      }
      else {
        if (uVar2 != 0x29b) goto LAB_005be41a;
        (this_ptr->base).base.field7_0x2428.y = 8.0f;
      }
    }
    if (in_stack_00000008 <= 0.0) {
      return;
    }
  } while( true );
}
