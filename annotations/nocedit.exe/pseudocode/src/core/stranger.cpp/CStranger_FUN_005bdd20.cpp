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
  CDemonActor *pCVar1;
  CDemonActor_vtable *pCVar2;
  CHero *pCVar3;
  uint uVar4;
  int iVar5;
  CVector3f *pCVar6;
  int iVar7;
  CCharacter *this_ptr_00;
  CStranger *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_ffffff34;
  ulonglong local_b0;
  float fStack_a4;
  CVector3f local_94 [2];
  byte local_78 [12];
  CVector3f CStack_6c;
  CVector3f local_5c;
  CVector3f local_50;
  byte local_44 [12];
  CVector3f local_38;
  int iStack_24;
  CVector3f *local_20;
  CVector3f *local_1c;
  CCharacter *local_18;
  UActorVTable local_14;
  
  this_ptr = &(in_stack_00000004->base).base.model;
  local_1c = (CVector3f *)((in_stack_00000004->base).unk4 + 0x28);
  local_20 = (CVector3f *)((in_stack_00000004->base).unk4 + 0x1c);
  do {
    uVar4 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&this_ptr->motion_controller);
    if (uVar4 < 0x12) {
      if (uVar4 < 6) {
        if (uVar4 < 2) {
          if (uVar4 == 1) {
LAB_005bdd85:
            iVar5 = INT_03f6bae8;
            if (uVar4 == 7) {
              iVar5 = INT_03f6baec;
            }
            core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                      (this_ptr,&local_5c,iVar5);
            iVar5 = *(int *)((in_stack_00000004->base).unk4 + 0x10);
            if (iVar5 == 0) {
              if (*(int *)(in_stack_00000004->unk1 + 0x50) == 0) {
                if (*(int *)((in_stack_00000004->base).base.unk1 + 4) != 0) {
                  local_14 = (UActorVTable)
                             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                       (&this_ptr->motion_controller,3);
                  if ((float)0.40000000000000002 < (float)local_14) {
                    (*((in_stack_00000004->base).base.base.vtable._ub)->processFootstepAtOffset)
                              ((CDemonActor *)in_stack_00000004,&local_5c,1.7);
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
                                  ((CDemonActor *)in_stack_00000004,&local_5c,1.0);
                      }
                    }
                    else {
                      (*((in_stack_00000004->base).base.base.vtable._ub)->processFootstepAtOffset)
                                ((CDemonActor *)in_stack_00000004,&local_5c,1.0);
                    }
                  }
                }
              }
              else {
                pCVar2 = (in_stack_00000004->base).base.base.vtable._ub;
                iVar5 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk1 + 0x50) + 0x154) +
                                    0x3c))();
                pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                   ((CDemonActor *)in_stack_00000004,(CVector3f *)(local_44 + 8),
                                    &CStack_6c);
                (*pCVar2->handleFootstep)
                          ((CDemonActor *)in_stack_00000004,pCVar6,iVar5,in_stack_ffffff34);
              }
            }
            else {
              local_14 = (in_stack_00000004->base).base.base.vtable;
              iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x3c))();
              pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 ((CDemonActor *)in_stack_00000004,(CVector3f *)local_78,&CStack_6c)
              ;
              (**(code **)(iStack_24 + 0x20))
                        ((CDemonActor *)in_stack_00000004,pCVar6,iVar5,in_stack_ffffff34);
            }
          }
          else {
LAB_005be41a:
            core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)in_stack_00000004);
          }
        }
        else if (uVar4 < 3) {
          if (in_stack_00000004->action_pending == 4) {
            in_stack_00000004->action_pending = 0;
          }
          else {
            in_stack_ffffff34 = 8.437039e-39;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       in_stack_00000004->action_pending,0x785);
          }
          iVar5 = *(int *)((in_stack_00000004->base).unk4 + 4);
          if (iVar5 == 0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\nstranger.cpp line %d",0x78b);
          }
          else {
            iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x7c))();
            if (iVar5 == 0) {
              (in_stack_00000004->base).unk4[4] = '\0';
              (in_stack_00000004->base).unk4[5] = '\0';
              (in_stack_00000004->base).unk4[6] = '\0';
              (in_stack_00000004->base).unk4[7] = '\0';
            }
            else {
              iVar7 = *(int *)((in_stack_00000004->base).unk4 + 4);
              if ((iVar7 != 0) &&
                 (iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x7c))(), iVar7 == 4)) {
                pCVar3 = &in_stack_00000004->base;
                (pCVar3->base).unk3[0x470] = '\0';
                (pCVar3->base).unk3[0x471] = '\0';
                (pCVar3->base).unk3[0x472] = '\0';
                (pCVar3->base).unk3[0x473] = '\0';
                pCVar3 = &in_stack_00000004->base;
                (pCVar3->base).unk3[0x46c] = '\x0e';
                (pCVar3->base).unk3[0x46d] = '\0';
                (pCVar3->base).unk3[0x46e] = '\0';
                (pCVar3->base).unk3[0x46f] = '\0';
              }
              if (iVar5 == 2) {
                if (in_stack_00000004->action_pending != 0) {
                  in_stack_ffffff34 = 8.437154e-39;
                  shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                            (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                             in_stack_00000004->action_pending,0x7a9);
                }
                in_stack_00000004->action_pending = 1;
              }
              core_hero_cpp_CHero_FUN_004f3890(&in_stack_00000004->base);
            }
          }
        }
        else {
          if (uVar4 != 3) goto LAB_005be41a;
          pCVar1 = (in_stack_00000004->base).base.carry_hands[1].carry_actor;
          core_stranger_cpp_CStranger_FUN_005c1f80(in_stack_00000004);
          iVar5 = in_stack_00000004->action_pending;
          if (iVar5 == 2) {
            if (pCVar1 != (CDemonActor *)0x0) {
              (*((pCVar1->vtable)._ub)->setPositionAndOrientation)(pCVar1,local_20,local_1c);
            }
LAB_005bde44:
            in_stack_00000004->action_pending = 0;
          }
          else {
            if (iVar5 == 6) goto LAB_005bde44;
            in_stack_ffffff34 = 8.436913e-39;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",iVar5,0x767);
          }
          iVar5 = *(int *)((in_stack_00000004->base).base.unk3 + 0x46c);
          (in_stack_00000004->base).unk4[0x18] = '\0';
          (in_stack_00000004->base).unk4[0x19] = '\0';
          (in_stack_00000004->base).unk4[0x1a] = '\0';
          (in_stack_00000004->base).unk4[0x1b] = '\0';
          if (iVar5 == 0xe) {
            pCVar3 = &in_stack_00000004->base;
            (pCVar3->base).unk3[0x470] = '\0';
            (pCVar3->base).unk3[0x471] = '\0';
            (pCVar3->base).unk3[0x472] = '\0';
            (pCVar3->base).unk3[0x473] = '\0';
            pCVar3 = &in_stack_00000004->base;
            (pCVar3->base).unk3[0x46c] = '\0';
            (pCVar3->base).unk3[0x46d] = '\0';
            (pCVar3->base).unk3[0x46e] = '\0';
            (pCVar3->base).unk3[0x46f] = '\0';
          }
          if (pCVar1 == *(CDemonActor **)(in_stack_00000004->unk1 + 0x54)) {
            in_stack_00000004->unk1[0x54] = '\0';
            in_stack_00000004->unk1[0x55] = '\0';
            in_stack_00000004->unk1[0x56] = '\0';
            in_stack_00000004->unk1[0x57] = '\0';
          }
        }
      }
      else if (uVar4 < 7) {
        this_ptr_00 = (CCharacter *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                ((in_stack_00000004->base).base.grabbed_by,
                                 g_CEnemyClassInfo.name_hash);
        local_18 = this_ptr_00;
        if (this_ptr_00 != (CCharacter *)0x0) {
          pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                             (this_ptr,(CVector3f *)local_44,INT_03f6bafc);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)in_stack_00000004,&local_38,pCVar6);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&local_b0);
          local_14 = (UActorVTable)core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
          local_b0._4_4_ = (float)local_14._ub;
          pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             ((CDemonActor *)this_ptr_00,&local_50,&local_38);
          if (local_94 != pCVar6) {
            local_94[0].x = pCVar6->x;
            local_94[0].y = pCVar6->y;
            local_94[0].z = pCVar6->z;
          }
          (*(((local_18->base).vtable._uc)->_uc).processDamage)(local_18,(SDamageInfo *)&local_b0);
          local_b0 = (double)fStack_a4;
          if (0.0 < local_b0) {
            round(local_b0 * 0.20000000000000001);
            in_stack_ffffff34 = 8.438212e-39;
            core_gore_cpp_FUN_004edbb0();
            (*((in_stack_00000004->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)in_stack_00000004,"kick1.wav");
          }
        }
        (in_stack_00000004->base).base.grabbed_by = (CDemonActor *)0x0;
      }
      else if (uVar4 < 0xf) {
        if (uVar4 == 7) goto LAB_005bdd85;
        core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)in_stack_00000004);
      }
      else if (uVar4 < 0x10) {
        pCVar1 = (in_stack_00000004->base).base.grabbed_by;
        if ((pCVar1 != (CDemonActor *)0x0) &&
           (pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                               ((CDemonActor *)in_stack_00000004,(CVector3f *)(local_78 + 4),
                                &(pCVar1->location).position), 0.0 < pCVar6->z)) {
          (*((in_stack_00000004->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)in_stack_00000004,"hit-gh[4,7].wav");
        }
      }
      else if (uVar4 == 0x11) {
        (*((in_stack_00000004->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)in_stack_00000004,"fall-1.wav");
      }
      else {
        core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)in_stack_00000004);
      }
    }
    else if (0x12 < uVar4) {
      if (uVar4 < 0x17) {
        if (uVar4 < 0x15) {
          if (uVar4 != 0x13) goto LAB_005be41a;
          core_stranger_cpp_CStranger_FUN_005c1f00(in_stack_00000004);
        }
        else if (uVar4 < 0x16) {
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
          if (*(int *)(in_stack_00000004->base).unk4 == 0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"doorToOpen == NULL\nstranger.cpp line %d",0x822);
          }
          iVar5 = core_hero_cpp_CHero_FUN_004f2ed0(&in_stack_00000004->base);
          if (iVar5 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&this_ptr->motion_controller,0,1);
          }
        }
      }
      else if (uVar4 < 0x18) {
        core_hero_cpp_CHero_FUN_004f30f0(&in_stack_00000004->base);
      }
      else if (uVar4 < 0x29a) {
        if (uVar4 != 0x18) goto LAB_005be41a;
      }
      else if (uVar4 < 0x29b) {
        *(float *)((in_stack_00000004->base).base.unk1 + 0x20) = 10.0f;
      }
      else {
        if (uVar4 != 0x29b) goto LAB_005be41a;
        *(float *)((in_stack_00000004->base).base.unk1 + 0x20) = 8.0f;
      }
    }
    if (in_stack_00000008 <= 0.0) {
      return;
    }
  } while( true );
}
