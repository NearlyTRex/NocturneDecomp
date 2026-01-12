// Name: core_stranger.cpp_CStranger_FUN_005bdd20
// Address: 005bdd20
// Address Range: [[005bdd20, 005be191] [005be262, 005be428]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005bdd20()

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005bdd20(uint param_1,
   uint param_2) */

void core_stranger_cpp_CStranger_FUN_005bdd20(void)

{
  CDeformableModelInstance *this_ptr;
  CDemonActor_vtable *pCVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  CVector3f *pCVar5;
  CDemonActor *pCVar6;
  BADSPACEBASE *in_ESP;
  int unaff_EDI;
  double dVar7;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  CCharacter *in_stack_ffffff48;
  char *in_stack_ffffff4c;
  byte local_b0 [16];
  float fStack_a0;
  CVector3f local_94 [2];
  CCharacter *local_7c;
  CCharacter *local_78;
  CVector3f local_74;
  byte auStack_64 [12];
  byte auStack_58 [20];
  CVector3f local_44;
  CVector3f local_38;
  CVector3f CStack_28;
  CVector3f *local_1c;
  CDemonActor *local_18;
  CDemonActor_vtable *local_14;
  
  this_ptr = &in_stack_00000004->model;
  local_1c = (CVector3f *)(in_stack_00000004[2].cloth_data + 0x54e4);
  CStack_28.z = (float)(in_stack_00000004[2].cloth_data + 0x54d8);
  do {
    uVar2 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&this_ptr->motion_controller);
    if (uVar2 < 0x12) {
      if (uVar2 < 6) {
        if (uVar2 < 2) {
          if (uVar2 == 1) {
LAB_005bdd85:
            iVar3 = DAT_03f6bae8;
            if (uVar2 == 7) {
              iVar3 = DAT_03f6baec;
            }
            core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                      (this_ptr,(CVector3f *)(auStack_64 + 8),iVar3);
            if (*(int *)(in_stack_00000004[2].cloth_data + 0x54cc) == 0) {
              if (*(int *)(in_stack_00000004[2].cloth_data + 0x5548) == 0) {
                if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
                  local_14 = (CDemonActor_vtable *)
                             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                       (&this_ptr->motion_controller,3);
                  if ((float)0.40000000000000002 < (float)local_14) {
                    (*((in_stack_00000004->base_actor).vtable)->processFootstepAtOffset)
                              (&in_stack_00000004->base_actor,(CVector3f *)(auStack_64 + 8),1.7);
                  }
                  else {
                    local_14 = (CDemonActor_vtable *)
                               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                         (&this_ptr->motion_controller,1);
                    if ((float)local_14 <= (float)0.40000000000000002) {
                      local_14 = (CDemonActor_vtable *)
                                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                           (&this_ptr->motion_controller,2);
                      if ((float)0.40000000000000002 < (float)local_14) {
                        (*((in_stack_00000004->base_actor).vtable)->processFootstepAtOffset)
                                  (&in_stack_00000004->base_actor,(CVector3f *)(auStack_64 + 8),1.0)
                        ;
                      }
                    }
                    else {
                      (*((in_stack_00000004->base_actor).vtable)->processFootstepAtOffset)
                                (&in_stack_00000004->base_actor,(CVector3f *)(auStack_64 + 8),1.0);
                    }
                  }
                }
              }
              else {
                pCVar1 = (in_stack_00000004->base_actor).vtable;
                (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5548) + 0x154) +
                            0x3c))();
                pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                   (&in_stack_00000004->base_actor,&CStack_28,
                                    (CVector3f *)auStack_58);
                (*pCVar1->handleFootstep)
                          (&in_stack_00000004->base_actor,pCVar5,(int)in_stack_ffffff48,
                           (float)in_stack_ffffff4c);
              }
            }
            else {
              local_14 = (in_stack_00000004->base_actor).vtable;
              (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54cc) + 0x154) +
                          0x3c))();
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        (&in_stack_00000004->base_actor,(CVector3f *)auStack_64,
                         (CVector3f *)auStack_58);
              (**(code **)(unaff_EDI + 0x20))();
            }
          }
          else {
LAB_005be41a:
            core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
          }
        }
        else if (uVar2 < 3) {
          if (*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 4) {
            in_stack_00000004[2].cloth_data[0x5558] = '\0';
            in_stack_00000004[2].cloth_data[0x5559] = '\0';
            in_stack_00000004[2].cloth_data[0x555a] = '\0';
            in_stack_00000004[2].cloth_data[0x555b] = '\0';
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       *(int *)(in_stack_00000004[2].cloth_data + 0x5558),0x785);
          }
          if (*(int *)(in_stack_00000004[2].cloth_data + 0x54c0) == 0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\nstranger.cpp line %d",0x78b);
          }
          else {
            iVar3 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54c0) + 0x154
                                         ) + 0x7c))();
            if (iVar3 == 0) {
              in_stack_00000004[2].cloth_data[0x54c0] = '\0';
              in_stack_00000004[2].cloth_data[0x54c1] = '\0';
              in_stack_00000004[2].cloth_data[0x54c2] = '\0';
              in_stack_00000004[2].cloth_data[0x54c3] = '\0';
            }
            else {
              if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54c0) != 0) &&
                 (iVar4 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54c0) +
                                               0x154) + 0x7c))(), iVar4 == 4)) {
                in_stack_00000004->field13_0x2620[0x470] = '\0';
                in_stack_00000004->field13_0x2620[0x471] = '\0';
                in_stack_00000004->field13_0x2620[0x472] = '\0';
                in_stack_00000004->field13_0x2620[0x473] = '\0';
                in_stack_00000004->field13_0x2620[0x46c] = '\x0e';
                in_stack_00000004->field13_0x2620[0x46d] = '\0';
                in_stack_00000004->field13_0x2620[0x46e] = '\0';
                in_stack_00000004->field13_0x2620[0x46f] = '\0';
              }
              if (iVar3 == 2) {
                if (*(int *)(in_stack_00000004[2].cloth_data + 0x5558) != 0) {
                  shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                            (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                             *(int *)(in_stack_00000004[2].cloth_data + 0x5558),0x7a9);
                }
                in_stack_00000004[2].cloth_data[0x5558] = '\x01';
                in_stack_00000004[2].cloth_data[0x5559] = '\0';
                in_stack_00000004[2].cloth_data[0x555a] = '\0';
                in_stack_00000004[2].cloth_data[0x555b] = '\0';
              }
              core_hero_cpp_FUN_004f3890();
            }
          }
        }
        else {
          if (uVar2 != 3) goto LAB_005be41a;
          pCVar6 = in_stack_00000004->carry_hands[1].carry_actor;
          core_stranger_cpp_CStranger_FUN_005c1f80();
          iVar3 = *(int *)(in_stack_00000004[2].cloth_data + 0x5558);
          if (iVar3 == 2) {
            if (pCVar6 != (CDemonActor *)0x0) {
              (*pCVar6->vtable->setPositionAndOrientation)(pCVar6,(CVector3f *)CStack_28.z,local_1c)
              ;
            }
LAB_005bde44:
            in_stack_00000004[2].cloth_data[0x5558] = '\0';
            in_stack_00000004[2].cloth_data[0x5559] = '\0';
            in_stack_00000004[2].cloth_data[0x555a] = '\0';
            in_stack_00000004[2].cloth_data[0x555b] = '\0';
          }
          else {
            if (iVar3 == 6) goto LAB_005bde44;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",iVar3,0x767);
          }
          iVar3 = *(int *)(in_stack_00000004->field13_0x2620 + 0x46c);
          in_stack_00000004[2].cloth_data[0x54d4] = '\0';
          in_stack_00000004[2].cloth_data[0x54d5] = '\0';
          in_stack_00000004[2].cloth_data[0x54d6] = '\0';
          in_stack_00000004[2].cloth_data[0x54d7] = '\0';
          if (iVar3 == 0xe) {
            in_stack_00000004->field13_0x2620[0x470] = '\0';
            in_stack_00000004->field13_0x2620[0x471] = '\0';
            in_stack_00000004->field13_0x2620[0x472] = '\0';
            in_stack_00000004->field13_0x2620[0x473] = '\0';
            in_stack_00000004->field13_0x2620[0x46c] = '\0';
            in_stack_00000004->field13_0x2620[0x46d] = '\0';
            in_stack_00000004->field13_0x2620[0x46e] = '\0';
            in_stack_00000004->field13_0x2620[0x46f] = '\0';
          }
          if (pCVar6 == *(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x554c)) {
            in_stack_00000004[2].cloth_data[0x554c] = '\0';
            in_stack_00000004[2].cloth_data[0x554d] = '\0';
            in_stack_00000004[2].cloth_data[0x554e] = '\0';
            in_stack_00000004[2].cloth_data[0x554f] = '\0';
          }
        }
      }
      else if (uVar2 < 7) {
        pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (in_stack_00000004->grabbed_by,g_CEnemyClassInfo.name_hash);
        local_18 = pCVar6;
        if (pCVar6 != (CDemonActor *)0x0) {
          pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                             (this_ptr,&local_44,DAT_03f6bafc);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    (&in_stack_00000004->base_actor,&local_38,pCVar5);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)local_b0);
          local_14 = (CDemonActor_vtable *)core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
          local_b0._4_4_ = local_14;
          pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             (pCVar6,(CVector3f *)(auStack_58 + 8),&local_38);
          if (local_94 != pCVar5) {
            local_94[0].x = pCVar5->x;
            local_94[0].y = pCVar5->y;
            local_94[0].z = pCVar5->z;
          }
          local_7c = in_stack_00000004;
          local_78 = in_stack_00000004;
          (*local_18->vtable[1].playAmbientSoundWithVolume)
                    (local_18,local_b0,(float)in_stack_ffffff48);
          local_b0._4_8_ = (ulonglong)fStack_a0;
          if (0.0 < (double)local_b0._4_8_) {
            local_b0._0_4_ = 0x5be225;
            dVar7 = crt_math_c_round_FUN_005fe6b0((double)local_b0._4_8_ * 0.20000000000000001);
            unaff_EDI = (int)ROUND(dVar7);
            core_gore_cpp_FUN_004edbb0();
            in_stack_ffffff4c = "kick1.wav";
            in_stack_ffffff48 = in_stack_00000004;
            (*((in_stack_00000004->base_actor).vtable)->playSound)
                      (&in_stack_00000004->base_actor,"kick1.wav");
          }
        }
        in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
      }
      else if (uVar2 < 0xf) {
        if (uVar2 == 7) goto LAB_005bdd85;
        core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
      }
      else if (uVar2 < 0x10) {
        if ((in_stack_00000004->grabbed_by != (CDemonActor *)0x0) &&
           (pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                               (&in_stack_00000004->base_actor,&local_74,
                                &(in_stack_00000004->grabbed_by->location).position),
           0.0 < pCVar5->z)) {
          (*((in_stack_00000004->base_actor).vtable)->playSound)
                    (&in_stack_00000004->base_actor,"hit-gh[4,7].wav");
        }
      }
      else if (uVar2 == 0x11) {
        (*((in_stack_00000004->base_actor).vtable)->playSound)
                  (&in_stack_00000004->base_actor,"fall-1.wav");
      }
      else {
        core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
      }
    }
    else if (0x12 < uVar2) {
      if (uVar2 < 0x17) {
        if (uVar2 < 0x15) {
          if (uVar2 != 0x13) goto LAB_005be41a;
          core_stranger_cpp_CStranger_FUN_005c1f00();
        }
        else if (uVar2 < 0x16) {
          if (in_stack_00000004->carry_hands[1].carry_actor ==
              *(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x554c)) {
            in_stack_00000004[2].cloth_data[0x554c] = '\0';
            in_stack_00000004[2].cloth_data[0x554d] = '\0';
            in_stack_00000004[2].cloth_data[0x554e] = '\0';
            in_stack_00000004[2].cloth_data[0x554f] = '\0';
          }
          core_hero_cpp_FUN_004f38d0();
          if (*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 1) {
            in_stack_00000004[2].cloth_data[0x5558] = '\0';
            in_stack_00000004[2].cloth_data[0x5559] = '\0';
            in_stack_00000004[2].cloth_data[0x555a] = '\0';
            in_stack_00000004[2].cloth_data[0x555b] = '\0';
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       *(int *)(in_stack_00000004[2].cloth_data + 0x5558),0x7c9);
          }
        }
        else {
          if (*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 5) {
            in_stack_00000004[2].cloth_data[0x5558] = '\0';
            in_stack_00000004[2].cloth_data[0x5559] = '\0';
            in_stack_00000004[2].cloth_data[0x555a] = '\0';
            in_stack_00000004[2].cloth_data[0x555b] = '\0';
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       *(int *)(in_stack_00000004[2].cloth_data + 0x5558),0x81c);
          }
          if (*(int *)(in_stack_00000004[2].cloth_data + 0x54bc) == 0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"doorToOpen == NULL\nstranger.cpp line %d",0x822);
          }
          iVar3 = core_hero_cpp_FUN_004f2ed0();
          if (iVar3 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&this_ptr->motion_controller,0,1);
          }
        }
      }
      else if (uVar2 < 0x18) {
        core_hero_cpp_FUN_004f30f0();
      }
      else if (uVar2 < 0x29a) {
        if (uVar2 != 0x18) goto LAB_005be41a;
      }
      else if (uVar2 < 0x29b) {
        *(uint *)(in_stack_00000004->field2_0x240c + 0x20) = DAT_00663750;
      }
      else {
        if (uVar2 != 0x29b) goto LAB_005be41a;
        *(uint *)(in_stack_00000004->field2_0x240c + 0x20) = DAT_00663758;
      }
    }
    if (in_stack_00000008 <= 0.0) {
      return;
    }
  } while( true );
}
