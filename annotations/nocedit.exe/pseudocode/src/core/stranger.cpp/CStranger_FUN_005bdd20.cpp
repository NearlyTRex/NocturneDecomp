// Name: core_stranger.cpp_CStranger_FUN_005bdd20
// Address: 005bdd20
// Address Range: [[005bdd20, 005be191] [005be262, 005be428]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005bdd20()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bbb4b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_actionPending_d_stranger_00653690
//   TerminatedCString s_actionPending_d_stranger_006536b8
//   TerminatedCString s_Object_to_pick_up_is_now_006536e0
//   TerminatedCString s_actionPending_d_stranger_00653713
//   TerminatedCString s_actionPending_d_stranger_0065373b
//   TerminatedCString s_hit_gh_4_7_wav_0065376d
//   TerminatedCString s_fall_1_wav_0065377d
//   TerminatedCString s_actionPending_d_stranger_00653788
//   TerminatedCString s_doorToOpen_NULL_stranger_006537b0
//   double DOUBLE_006537e4 = 0.400000000000000
//   undefined4 DAT_00663750
//   undefined4 DAT_00663758
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   undefined4 g_CEnemyClassInfo.name_hash
//   undefined4 DAT_03f6bae8
//   undefined4 DAT_03f6baec
//   undefined4 DAT_03f6bafc
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_charactr.cpp_CCharacter_FUN_0042ec40
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_hero.cpp_FUN_004f2ed0
//   core_hero.cpp_FUN_004f30f0
//   core_hero.cpp_FUN_004f3890
//   core_hero.cpp_FUN_004f38d0
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_FUN_0052dd20
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   core_stranger.cpp_CStranger_FUN_005c1f00
//   core_stranger.cpp_CStranger_FUN_005c1f80
//   shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005bdd20(undefined4 param_1,
   undefined4 param_2) */

void core_stranger_cpp_CStranger_FUN_005bdd20(void)

{
  CDeformableModelInstance *this_ptr;
  CDemonActor_vtable *pCVar1;
  uint uVar2;
  int iVar3;
  CVector3f *pCVar4;
  int iVar5;
  CDemonActor *pCVar6;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  double dVar7;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_ffffff34;
  float in_stack_ffffff48;
  float fStack_a0;
  CVector3f local_94 [2];
  CCharacter *local_7c;
  undefined1 local_78 [12];
  CVector3f CStack_6c;
  CVector3f local_5c;
  CVector3f local_50;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [8];
  int iStack_24;
  CVector3f *local_20;
  CVector3f *local_1c;
  CDemonActor *local_18;
  CDemonActor_vtable *local_14;
  
  this_ptr = &in_stack_00000004->model;
  local_1c = (CVector3f *)(in_stack_00000004[2].cloth_data + 0x54e4);
  local_20 = (CVector3f *)(in_stack_00000004[2].cloth_data + 0x54d8);
  do {
    uVar2 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&this_ptr->motion_controller);
    if (uVar2 < 0x12) {
      if (uVar2 < 6) {
        if (uVar2 < 2) {
          if (uVar2 == 1) {
LAB_005bdd93:
            core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20(this_ptr);
            if (*(int *)(in_stack_00000004[2].cloth_data + 0x54cc) == 0) {
              if (*(int *)(in_stack_00000004[2].cloth_data + 0x5548) == 0) {
                if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
                  local_14 = (CDemonActor_vtable *)
                             core_motion_cpp_CMotionController_FUN_0052dd20
                                       (&this_ptr->motion_controller);
                  if ((float)DOUBLE_006537e4 < (float)local_14) {
                    (*((in_stack_00000004->base_actor).vtable)->processFootstepAtOffset)
                              (&in_stack_00000004->base_actor,&local_5c,1.7);
                  }
                  else {
                    local_14 = (CDemonActor_vtable *)
                               core_motion_cpp_CMotionController_FUN_0052dd20
                                         (&this_ptr->motion_controller);
                    if ((float)local_14 <= (float)DOUBLE_006537e4) {
                      local_14 = (CDemonActor_vtable *)
                                 core_motion_cpp_CMotionController_FUN_0052dd20
                                           (&this_ptr->motion_controller);
                      if ((float)DOUBLE_006537e4 < (float)local_14) {
                        (*((in_stack_00000004->base_actor).vtable)->processFootstepAtOffset)
                                  (&in_stack_00000004->base_actor,&local_5c,1.0);
                      }
                    }
                    else {
                      (*((in_stack_00000004->base_actor).vtable)->processFootstepAtOffset)
                                (&in_stack_00000004->base_actor,&local_5c,1.0);
                    }
                  }
                }
              }
              else {
                pCVar1 = (in_stack_00000004->base_actor).vtable;
                iVar3 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5548) +
                                             0x154) + 0x3c))();
                pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                   (&in_stack_00000004->base_actor,(CVector3f *)auStack_3c,
                                    &CStack_6c);
                (*pCVar1->handleFootstep)
                          (&in_stack_00000004->base_actor,pCVar4,iVar3,in_stack_ffffff34);
              }
            }
            else {
              local_14 = (in_stack_00000004->base_actor).vtable;
              iVar3 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54cc) +
                                           0x154) + 0x3c))();
              pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 (&in_stack_00000004->base_actor,(CVector3f *)local_78,&CStack_6c);
              (**(code **)(iStack_24 + 0x20))
                        (&in_stack_00000004->base_actor,pCVar4,iVar3,in_stack_ffffff34);
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
            in_stack_ffffff34 = 8.437039e-39;
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
                 (iVar5 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54c0) +
                                               0x154) + 0x7c))(), iVar5 == 4)) {
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
                  in_stack_ffffff34 = 8.437154e-39;
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
              (*pCVar6->vtable->setPositionAndOrientation)(pCVar6,local_20,local_1c);
            }
LAB_005bde44:
            in_stack_00000004[2].cloth_data[0x5558] = '\0';
            in_stack_00000004[2].cloth_data[0x5559] = '\0';
            in_stack_00000004[2].cloth_data[0x555a] = '\0';
            in_stack_00000004[2].cloth_data[0x555b] = '\0';
          }
          else {
            if (iVar3 == 6) goto LAB_005bde44;
            in_stack_ffffff34 = 8.436913e-39;
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
          pCVar4 = core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20(this_ptr);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    (&in_stack_00000004->base_actor,(CVector3f *)(auStack_3c + 4),pCVar4);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff50);
          local_14 = (CDemonActor_vtable *)core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
          pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             (pCVar6,&local_50,(CVector3f *)(auStack_3c + 4));
          if (local_94 != pCVar4) {
            local_94[0].x = pCVar4->x;
            local_94[0].y = pCVar4->y;
            local_94[0].z = pCVar4->z;
          }
          local_7c = in_stack_00000004;
          local_78._0_4_ = in_stack_00000004;
          iVar3 = (*local_18->vtable[1].playAmbientSoundWithVolume)
                            (local_18,&stack0xffffff50,in_stack_ffffff48);
          if (0.0 < fStack_a0) {
            dVar7 = crt_math_c_round_FUN_005fe6b0
                              ((double)CONCAT44(extraout_EDX,
                                                CONCAT22((short)((uint)iVar3 >> 0x10),
                                                         (ushort)(0.0 < fStack_a0) << 8 |
                                                         (ushort)NAN(fStack_a0) << 10 |
                                                         (ushort)(fStack_a0 == 0.0) << 0xe)));
            core_gore_cpp_FUN_004edbb0(auStack_2c,(int)((ulonglong)dVar7 >> 0x20));
            in_stack_ffffff48 = 8.438237e-39;
            (*((in_stack_00000004->base_actor).vtable)->playSound)
                      (&in_stack_00000004->base_actor,"kick1.wav");
          }
        }
        in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
      }
      else if (uVar2 < 0xf) {
        if (uVar2 == 7) goto LAB_005bdd93;
        core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
      }
      else if (uVar2 < 0x10) {
        if ((in_stack_00000004->grabbed_by != (CDemonActor *)0x0) &&
           (pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                               (&in_stack_00000004->base_actor,(CVector3f *)(local_78 + 4),
                                &(in_stack_00000004->grabbed_by->location).position),
           0.0 < pCVar4->z)) {
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
            in_stack_ffffff34 = 8.43738e-39;
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
            in_stack_ffffff34 = 8.438443e-39;
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
                      (&this_ptr->motion_controller);
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
        *(undefined4 *)(in_stack_00000004->field2_0x240c + 0x20) = DAT_00663750;
      }
      else {
        if (uVar2 != 0x29b) goto LAB_005be41a;
        *(undefined4 *)(in_stack_00000004->field2_0x240c + 0x20) = DAT_00663758;
      }
    }
    if (in_stack_00000008 <= 0.0) {
      return;
    }
  } while( true );
}


// Assembly code:
// 005bdd20: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005bdd20
// 005bdd21: PUSH ESI
// 005bdd22: PUSH EDI
// 005bdd23: PUSH EBP
// 005bdd24: MOV EBP,ESP
// 005bdd26: SUB ESP,0xa8
// 005bdd2c: AND ESP,0xfffffff8
// 005bdd2f: MOV EBX,dword ptr [EBP + 0x14]
// 005bdd32: LEA ESI,[EBX + 0x158]
// 005bdd38: LEA EAX,[EBX + 0x1fbc4]
// 005bdd3e: MOV dword ptr [ESP + 0x9c],EAX
// 005bdd45: LEA EAX,[EBX + 0x1fbb8]
// 005bdd4b: MOV dword ptr [ESP + 0x98],EAX
// 005bdd52: LEA EAX,[EBP + 0x18]
//   Label: LAB_005bdd52
// 005bdd55: PUSH EAX
// 005bdd56: PUSH ESI
// 005bdd57: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 005bdd5c: ADD ESP,0x8
// 005bdd5f: MOV EDI,EAX
// 005bdd61: CMP EAX,0x12
// 005bdd64: JNC 0x005be328
//   XREF to: 005be328 (CONDITIONAL_JUMP)
// 005bdd6a: CMP EAX,0x6
// 005bdd6d: JNC 0x005be3ca
//   XREF to: 005be3ca (CONDITIONAL_JUMP)
// 005bdd73: CMP EAX,0x2
// 005bdd76: JNC 0x005be40b
//   XREF to: 005be40b (CONDITIONAL_JUMP)
// 005bdd7c: CMP EAX,0x1
// 005bdd7f: JNZ 0x005be41a
//   XREF to: 005be41a (CONDITIONAL_JUMP)
// 005bdd85: CMP EDI,0x7
//   Label: LAB_005bdd85
// 005bdd88: JNZ 0x005be001
//   XREF to: 005be001 (CONDITIONAL_JUMP)
// 005bdd8e: MOV EAX,[0x03f6baec]
//   XREF to: 03f6baec (READ)
// 005bdd93: PUSH EAX
//   Label: LAB_005bdd93
// 005bdd94: LEA EAX,[ESP + 0x60]
// 005bdd98: PUSH EAX
// 005bdd99: PUSH ESI
// 005bdd9a: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005bdd9f: MOV ECX,dword ptr [EBX + 0x1fbac]
// 005bdda5: ADD ESP,0xc
// 005bdda8: TEST ECX,ECX
// 005bddaa: JZ 0x005be00b
//   XREF to: 005be00b (CONDITIONAL_JUMP)
// 005bddb0: PUSH 0x3f800000
// 005bddb5: MOV EAX,dword ptr [EBX + 0x154]
// 005bddbb: MOV EDI,dword ptr [ECX + 0x154]
// 005bddc1: PUSH ECX
// 005bddc2: MOV dword ptr [ESP + 0xac],EAX
// 005bddc9: CALL dword ptr [EDI + 0x3c]
// 005bddcc: ADD ESP,0x4
// 005bddcf: PUSH EAX
// 005bddd0: LEA EAX,[ESP + 0x64]
// 005bddd4: PUSH EAX
// 005bddd5: LEA EAX,[ESP + 0x5c]
// 005bddd9: PUSH EAX
// 005bddda: PUSH EBX
// 005bdddb: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005bdde0: ADD ESP,0xc
// 005bdde3: PUSH EAX
// 005bdde4: MOV EAX,dword ptr [ESP + 0xb0]
// 005bddeb: PUSH EBX
// 005bddec: CALL dword ptr [EAX + 0x20]
// 005bddef: ADD ESP,0x10
//   Label: LAB_005bddef
// 005bddf2: FLD float ptr [EBP + 0x18]
//   Label: LAB_005bddf2
// 005bddf5: FLDZ
// 005bddf7: FCOMPP
// 005bddf9: FNSTSW AX
// 005bddfb: SAHF
// 005bddfc: JC 0x005bdd52
//   XREF to: 005bdd52 (CONDITIONAL_JUMP)
// 005bde02: MOV ESP,EBP
// 005bde04: POP EBP
// 005bde05: POP EDI
// 005bde06: POP ESI
// 005bde07: POP EBX
// 005bde08: RET
// 005bde09: PUSH EBX
//   Label: LAB_005bde09
// 005bde0a: MOV EDI,dword ptr [EBX + 0x24f8]
// 005bde10: CALL core_stranger.cpp_CStranger_FUN_005c1f80
//   XREF to: 005c1f80 (UNCONDITIONAL_CALL)
// 005bde15: MOV EAX,dword ptr [EBX + 0x1fc38]
// 005bde1b: ADD ESP,0x4
// 005bde1e: CMP EAX,0x2
// 005bde21: JNZ 0x005bde92
//   XREF to: 005bde92 (CONDITIONAL_JUMP)
// 005bde23: TEST EDI,EDI
// 005bde25: JZ 0x005bde44
//   XREF to: 005bde44 (CONDITIONAL_JUMP)
// 005bde27: MOV EDX,dword ptr [ESP + 0x9c]
// 005bde2e: PUSH EDX
// 005bde2f: MOV ECX,dword ptr [ESP + 0x9c]
// 005bde36: PUSH ECX
// 005bde37: MOV EAX,dword ptr [EDI + 0x154]
// 005bde3d: PUSH EDI
// 005bde3e: CALL dword ptr [EAX + 0x60]
// 005bde41: ADD ESP,0xc
// 005bde44: MOV dword ptr [EBX + 0x1fc38],0x0
//   Label: LAB_005bde44
// 005bde4e: MOV EAX,dword ptr [EBX + 0x2a8c]
//   Label: LAB_005bde4e
// 005bde54: MOV dword ptr [EBX + 0x1fbb4],0x0
// 005bde5e: CMP EAX,0xe
// 005bde61: JNZ 0x005bde77
//   XREF to: 005bde77 (CONDITIONAL_JUMP)
// 005bde63: MOV dword ptr [EBX + 0x2a90],0x0
// 005bde6d: MOV dword ptr [EBX + 0x2a8c],0x0
// 005bde77: CMP EDI,dword ptr [EBX + 0x1fc2c]
//   Label: LAB_005bde77
// 005bde7d: JNZ 0x005bddf2
//   XREF to: 005bddf2 (CONDITIONAL_JUMP)
// 005bde83: MOV dword ptr [EBX + 0x1fc2c],0x0
// 005bde8d: JMP 0x005bddf2
//   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)
// 005bde92: CMP EAX,0x6
//   Label: LAB_005bde92
// 005bde95: JZ 0x005bde44
//   XREF to: 005bde44 (CONDITIONAL_JUMP)
// 005bde97: PUSH 0x767
// 005bde9c: PUSH EAX
// 005bde9d: MOV EAX,0x653690
//   XREF to: 00653690 (DATA)
// 005bdea2: PUSH EAX
//   XREF to: 00653690 (DATA)
// 005bdea3: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 005bdea8: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 005bdea9: CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)
// 005bdeae: ADD ESP,0x10
// 005bdeb1: JMP 0x005bde4e
//   XREF to: 005bde4e (UNCONDITIONAL_JUMP)
// 005bdeb3: MOV ECX,dword ptr [EBX + 0x1fc38]
//   Label: LAB_005bdeb3
// 005bdeb9: CMP ECX,0x4
// 005bdebc: JNZ 0x005bdef1
//   XREF to: 005bdef1 (CONDITIONAL_JUMP)
// 005bdebe: MOV dword ptr [EBX + 0x1fc38],0x0
// 005bdec8: MOV EDX,dword ptr [EBX + 0x1fba0]
//   Label: LAB_005bdec8
// 005bdece: TEST EDX,EDX
// 005bded0: JZ 0x005bdf0d
//   XREF to: 005bdf0d (CONDITIONAL_JUMP)
// 005bded2: PUSH EBX
// 005bded3: MOV EDI,dword ptr [EDX + 0x154]
// 005bded9: PUSH EDX
// 005bdeda: CALL dword ptr [EDI + 0x7c]
// 005bdedd: ADD ESP,0x8
// 005bdee0: MOV EDI,EAX
// 005bdee2: TEST EAX,EAX
// 005bdee4: JNZ 0x005bdf2b
//   XREF to: 005bdf2b (CONDITIONAL_JUMP)
// 005bdee6: MOV dword ptr [EBX + 0x1fba0],EAX
// 005bdeec: JMP 0x005bddf2
//   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)
// 005bdef1: PUSH 0x785
//   Label: LAB_005bdef1
// 005bdef6: PUSH ECX
// 005bdef7: MOV EAX,0x6536b8
//   XREF to: 006536b8 (DATA)
// 005bdefc: PUSH EAX
//   XREF to: 006536b8 (DATA)
// 005bdefd: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 005bdf02: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 005bdf03: CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)
// 005bdf08: ADD ESP,0x10
// 005bdf0b: JMP 0x005bdec8
//   XREF to: 005bdec8 (UNCONDITIONAL_JUMP)
// 005bdf0d: PUSH 0x78b
//   Label: LAB_005bdf0d
// 005bdf12: PUSH 0x6536e0
//   XREF to: 006536e0 (DATA)
// 005bdf17: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005bdf1d: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 005bdf1e: CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)
// 005bdf23: ADD ESP,0xc
// 005bdf26: JMP 0x005bddf2
//   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)
// 005bdf2b: MOV EAX,dword ptr [EBX + 0x1fba0]
//   Label: LAB_005bdf2b
// 005bdf31: TEST EAX,EAX
// 005bdf33: JNZ 0x005bdf77
//   XREF to: 005bdf77 (CONDITIONAL_JUMP)
// 005bdf35: CMP EDI,0x2
//   Label: LAB_005bdf35
// 005bdf38: JNZ 0x005bdf67
//   XREF to: 005bdf67 (CONDITIONAL_JUMP)
// 005bdf3a: MOV ECX,dword ptr [EBX + 0x1fc38]
// 005bdf40: TEST ECX,ECX
// 005bdf42: JZ 0x005bdf5d
//   XREF to: 005bdf5d (CONDITIONAL_JUMP)
// 005bdf44: PUSH 0x7a9
// 005bdf49: PUSH ECX
// 005bdf4a: PUSH 0x653713
//   XREF to: 00653713 (DATA)
// 005bdf4f: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 005bdf54: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 005bdf55: CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)
// 005bdf5a: ADD ESP,0x10
// 005bdf5d: MOV dword ptr [EBX + 0x1fc38],0x1
//   Label: LAB_005bdf5d
// 005bdf67: PUSH 0x1
//   Label: LAB_005bdf67
// 005bdf69: PUSH EBX
// 005bdf6a: CALL core_hero.cpp_FUN_004f3890
//   XREF to: 004f3890 (UNCONDITIONAL_CALL)
// 005bdf6f: ADD ESP,0x8
// 005bdf72: JMP 0x005bddf2
//   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)
// 005bdf77: PUSH EBX
//   Label: LAB_005bdf77
// 005bdf78: MOV EDX,dword ptr [EAX + 0x154]
// 005bdf7e: PUSH EAX
// 005bdf7f: CALL dword ptr [EDX + 0x7c]
// 005bdf82: ADD ESP,0x8
// 005bdf85: CMP EAX,0x4
// 005bdf88: SETZ AL
// 005bdf8b: AND EAX,0xff
// 005bdf90: JZ 0x005bdf35
//   XREF to: 005bdf35 (CONDITIONAL_JUMP)
// 005bdf92: MOV dword ptr [EBX + 0x2a90],0x0
// 005bdf9c: MOV dword ptr [EBX + 0x2a8c],0xe
// 005bdfa6: JMP 0x005bdf35
//   XREF to: 005bdf35 (UNCONDITIONAL_JUMP)
// 005bdfa8: MOV ECX,dword ptr [EBX + 0x24f8]
//   Label: LAB_005bdfa8
// 005bdfae: CMP ECX,dword ptr [EBX + 0x1fc2c]
// 005bdfb4: JNZ 0x005bdfc0
//   XREF to: 005bdfc0 (CONDITIONAL_JUMP)
// 005bdfb6: MOV dword ptr [EBX + 0x1fc2c],0x0
// 005bdfc0: PUSH 0x1
//   Label: LAB_005bdfc0
// 005bdfc2: PUSH EBX
// 005bdfc3: CALL core_hero.cpp_FUN_004f38d0
//   XREF to: 004f38d0 (UNCONDITIONAL_CALL)
// 005bdfc8: MOV EDI,dword ptr [EBX + 0x1fc38]
// 005bdfce: ADD ESP,0x8
// 005bdfd1: CMP EDI,0x1
// 005bdfd4: JNZ 0x005bdfe5
//   XREF to: 005bdfe5 (CONDITIONAL_JUMP)
// 005bdfd6: MOV dword ptr [EBX + 0x1fc38],0x0
// 005bdfe0: JMP 0x005bddf2
//   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)
// 005bdfe5: PUSH 0x7c9
//   Label: LAB_005bdfe5
// 005bdfea: PUSH EDI
// 005bdfeb: PUSH 0x65373b
//   XREF to: 0065373b (DATA)
// 005bdff0: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005bdff6: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 005bdff7: CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)
// 005bdffc: JMP 0x005bddef
//   XREF to: 005bddef (UNCONDITIONAL_JUMP)
// 005be001: MOV EAX,[0x03f6bae8]
//   Label: LAB_005be001
//   XREF to: 03f6bae8 (READ)
// 005be006: JMP 0x005bdd93
//   XREF to: 005bdd93 (UNCONDITIONAL_JUMP)
// 005be00b: CMP dword ptr [EBX + 0x1fc28],0x0
//   Label: LAB_005be00b
// 005be012: JNZ 0x005be089
//   XREF to: 005be089 (CONDITIONAL_JUMP)
// 005be014: CMP dword ptr [EBX + 0x2410],0x0
// 005be01b: JZ 0x005bddf2
//   XREF to: 005bddf2 (CONDITIONAL_JUMP)
// 005be021: PUSH 0x3
// 005be023: PUSH ESI
// 005be024: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005be029: MOV dword ptr [ESP + 0xac],EAX
// 005be030: FLD float ptr [ESP + 0xac]
// 005be037: ADD ESP,0x8
// 005be03a: FCOMP double ptr [0x006537e4]
//   XREF to: 006537e4 (READ)
// 005be040: FNSTSW AX
// 005be042: SAHF
// 005be043: JA 0x005be0c8
//   XREF to: 005be0c8 (CONDITIONAL_JUMP)
// 005be049: PUSH 0x1
// 005be04b: PUSH ESI
// 005be04c: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005be051: MOV dword ptr [ESP + 0xac],EAX
// 005be058: FLD float ptr [ESP + 0xac]
// 005be05f: ADD ESP,0x8
// 005be062: FCOMP double ptr [0x006537e4]
//   XREF to: 006537e4 (READ)
// 005be068: FNSTSW AX
// 005be06a: SAHF
// 005be06b: JBE 0x005be0e4
//   XREF to: 005be0e4 (CONDITIONAL_JUMP)
// 005be06d: LEA EAX,[ESP + 0x5c]
// 005be071: PUSH 0x3f800000
// 005be076: PUSH EAX
// 005be077: MOV EDX,dword ptr [EBX + 0x154]
// 005be07d: PUSH EBX
// 005be07e: CALL dword ptr [EDX + 0x1c]
// 005be081: ADD ESP,0xc
// 005be084: JMP 0x005bddf2
//   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)
// 005be089: MOV EAX,dword ptr [EBX + 0x1fc28]
//   Label: LAB_005be089
// 005be08f: PUSH 0x3f800000
// 005be094: PUSH EAX
// 005be095: MOV EDX,dword ptr [EAX + 0x154]
// 005be09b: MOV EDI,dword ptr [EBX + 0x154]
// 005be0a1: CALL dword ptr [EDX + 0x3c]
// 005be0a4: ADD ESP,0x4
// 005be0a7: PUSH EAX
// 005be0a8: LEA EAX,[ESP + 0x64]
// 005be0ac: PUSH EAX
// 005be0ad: LEA EAX,[ESP + 0x98]
// 005be0b4: PUSH EAX
// 005be0b5: PUSH EBX
// 005be0b6: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005be0bb: ADD ESP,0xc
// 005be0be: PUSH EAX
// 005be0bf: PUSH EBX
// 005be0c0: CALL dword ptr [EDI + 0x20]
// 005be0c3: JMP 0x005bddef
//   XREF to: 005bddef (UNCONDITIONAL_JUMP)
// 005be0c8: LEA EAX,[ESP + 0x5c]
//   Label: LAB_005be0c8
// 005be0cc: PUSH 0x3fd9999a
// 005be0d1: PUSH EAX
// 005be0d2: MOV EDI,dword ptr [EBX + 0x154]
// 005be0d8: PUSH EBX
// 005be0d9: CALL dword ptr [EDI + 0x1c]
// 005be0dc: ADD ESP,0xc
// 005be0df: JMP 0x005bddf2
//   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)
// 005be0e4: PUSH 0x2
//   Label: LAB_005be0e4
// 005be0e6: PUSH ESI
// 005be0e7: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005be0ec: MOV dword ptr [ESP + 0xac],EAX
// 005be0f3: FLD float ptr [ESP + 0xac]
// 005be0fa: ADD ESP,0x8
// 005be0fd: FCOMP double ptr [0x006537e4]
//   XREF to: 006537e4 (READ)
// 005be103: FNSTSW AX
// 005be105: SAHF
// 005be106: JBE 0x005bddf2
//   XREF to: 005bddf2 (CONDITIONAL_JUMP)
// 005be10c: LEA EAX,[ESP + 0x5c]
// 005be110: PUSH 0x3f800000
// 005be115: PUSH EAX
// 005be116: MOV EDX,dword ptr [EBX + 0x154]
// 005be11c: PUSH EBX
// 005be11d: CALL dword ptr [EDX + 0x1c]
// 005be120: ADD ESP,0xc
// 005be123: JMP 0x005bddf2
//   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)
// 005be128: MOV EDI,dword ptr [0x02cf2bf0]
//   Label: LAB_005be128
//   XREF to: 02cf2bf0 (READ)
// 005be12e: PUSH EDI
// 005be12f: MOV EAX,dword ptr [EBX + 0x2598]
// 005be135: PUSH EAX
// 005be136: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005be13b: ADD ESP,0x8
// 005be13e: MOV EDI,EAX
// 005be140: MOV dword ptr [ESP + 0xa0],EAX
// 005be147: TEST EAX,EAX
// 005be149: JZ 0x005be262
//   XREF to: 005be262 (CONDITIONAL_JUMP)
// 005be14f: MOV EDX,dword ptr [0x03f6bafc]
//   XREF to: 03f6bafc (READ)
// 005be155: PUSH EDX
// 005be156: LEA EAX,[ESP + 0x78]
// 005be15a: PUSH EAX
// 005be15b: PUSH ESI
// 005be15c: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005be161: ADD ESP,0xc
// 005be164: PUSH EAX
// 005be165: LEA EAX,[ESP + 0x84]
// 005be16c: PUSH EAX
// 005be16d: PUSH EBX
// 005be16e: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005be173: ADD ESP,0xc
// 005be176: LEA EAX,[ESP + 0x8]
// 005be17a: PUSH EAX
// 005be17b: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 005be180: ADD ESP,0x4
// 005be183: PUSH 0x41700000
// 005be188: PUSH 0x41200000
// 005be18d: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005be262: MOV dword ptr [EBX + 0x2598],0x0
//   Label: LAB_005be262
// 005be26c: JMP 0x005bddf2
//   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)
// 005be271: MOV ECX,dword ptr [EBX + 0x2598]
//   Label: LAB_005be271
// 005be277: TEST ECX,ECX
// 005be279: JZ 0x005bddf2
//   XREF to: 005bddf2 (CONDITIONAL_JUMP)
// 005be27f: LEA EAX,[ECX + 0x20]
// 005be282: PUSH EAX
// 005be283: LEA EAX,[ESP + 0x48]
// 005be287: PUSH EAX
// 005be288: PUSH EBX
// 005be289: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005be28e: FLDZ
// 005be290: ADD ESP,0xc
// 005be293: FCOMP float ptr [EAX + 0x8]
// 005be296: FNSTSW AX
// 005be298: SAHF
// 005be299: JNC 0x005bddf2
//   XREF to: 005bddf2 (CONDITIONAL_JUMP)
// 005be29f: PUSH 0x65376d
//   XREF to: 0065376d (DATA)
// 005be2a4: MOV EAX,dword ptr [EBX + 0x154]
// 005be2aa: PUSH EBX
// 005be2ab: CALL dword ptr [EAX + 0x24]
// 005be2ae: ADD ESP,0x8
// 005be2b1: JMP 0x005bddf2
//   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)
// 005be2b6: PUSH 0x65377d
//   Label: LAB_005be2b6
//   XREF to: 0065377d (DATA)
// 005be2bb: MOV EAX,dword ptr [EBX + 0x154]
// 005be2c1: PUSH EBX
// 005be2c2: CALL dword ptr [EAX + 0x24]
// 005be2c5: ADD ESP,0x8
// 005be2c8: JMP 0x005bddf2
//   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)
// 005be2cd: PUSH EBX
//   Label: LAB_005be2cd
// 005be2ce: CALL core_stranger.cpp_CStranger_FUN_005c1f00
//   XREF to: 005c1f00 (UNCONDITIONAL_CALL)
// 005be2d3: ADD ESP,0x4
// 005be2d6: JMP 0x005bddf2
//   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)
// 005be2db: PUSH 0x81c
//   Label: LAB_005be2db
// 005be2e0: PUSH EDX
// 005be2e1: PUSH 0x653788
//   XREF to: 00653788 (DATA)
// 005be2e6: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005be2ec: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 005be2ed: CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)
// 005be2f2: ADD ESP,0x10
// 005be2f5: JMP 0x005be386
//   XREF to: 005be386 (UNCONDITIONAL_JUMP)
// 005be2fa: PUSH EBX
//   Label: LAB_005be2fa
// 005be2fb: CALL core_hero.cpp_FUN_004f30f0
//   XREF to: 004f30f0 (UNCONDITIONAL_CALL)
// 005be300: ADD ESP,0x4
// 005be303: JMP 0x005bddf2
//   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)
// 005be308: MOV EAX,[0x00663750]
//   Label: LAB_005be308
//   XREF to: 00663750 (READ)
// 005be30d: MOV dword ptr [EBX + 0x242c],EAX
// 005be313: JMP 0x005bddf2
//   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)
// 005be318: MOV EAX,[0x00663758]
//   Label: LAB_005be318
//   XREF to: 00663758 (READ)
// 005be31d: MOV dword ptr [EBX + 0x242c],EAX
// 005be323: JMP 0x005bddf2
//   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)
// 005be328: JBE 0x005bddf2
//   Label: LAB_005be328
//   XREF to: 005bddf2 (CONDITIONAL_JUMP)
// 005be32e: CMP EAX,0x17
// 005be331: JNC 0x005be342
//   XREF to: 005be342 (CONDITIONAL_JUMP)
// 005be333: CMP EAX,0x15
// 005be336: JNC 0x005be367
//   XREF to: 005be367 (CONDITIONAL_JUMP)
// 005be338: CMP EAX,0x13
// 005be33b: JZ 0x005be2cd
//   XREF to: 005be2cd (CONDITIONAL_JUMP)
// 005be33d: JMP 0x005be41a
//   XREF to: 005be41a (UNCONDITIONAL_JUMP)
// 005be342: JBE 0x005be2fa
//   Label: LAB_005be342
//   XREF to: 005be2fa (CONDITIONAL_JUMP)
// 005be344: CMP EAX,0x29a
// 005be349: JNC 0x005be359
//   XREF to: 005be359 (CONDITIONAL_JUMP)
// 005be34b: CMP EAX,0x18
// 005be34e: JZ 0x005bddf2
//   XREF to: 005bddf2 (CONDITIONAL_JUMP)
// 005be354: JMP 0x005be41a
//   XREF to: 005be41a (UNCONDITIONAL_JUMP)
// 005be359: JBE 0x005be308
//   Label: LAB_005be359
//   XREF to: 005be308 (CONDITIONAL_JUMP)
// 005be35b: CMP EAX,0x29b
// 005be360: JZ 0x005be318
//   XREF to: 005be318 (CONDITIONAL_JUMP)
// 005be362: JMP 0x005be41a
//   XREF to: 005be41a (UNCONDITIONAL_JUMP)
// 005be367: JBE 0x005bdfa8
//   Label: LAB_005be367
//   XREF to: 005bdfa8 (CONDITIONAL_JUMP)
// 005be36d: MOV EDX,dword ptr [EBX + 0x1fc38]
// 005be373: CMP EDX,0x5
// 005be376: JNZ 0x005be2db
//   XREF to: 005be2db (CONDITIONAL_JUMP)
// 005be37c: MOV dword ptr [EBX + 0x1fc38],0x0
// 005be386: CMP dword ptr [EBX + 0x1fb9c],0x0
//   Label: LAB_005be386
// 005be38d: JNZ 0x005be3a8
//   XREF to: 005be3a8 (CONDITIONAL_JUMP)
// 005be38f: PUSH 0x822
// 005be394: PUSH 0x6537b0
//   XREF to: 006537b0 (DATA)
// 005be399: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005be39f: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 005be3a0: CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)
// 005be3a5: ADD ESP,0xc
// 005be3a8: PUSH EBX
//   Label: LAB_005be3a8
// 005be3a9: CALL core_hero.cpp_FUN_004f2ed0
//   XREF to: 004f2ed0 (UNCONDITIONAL_CALL)
// 005be3ae: ADD ESP,0x4
// 005be3b1: TEST EAX,EAX
// 005be3b3: JNZ 0x005bddf2
//   XREF to: 005bddf2 (CONDITIONAL_JUMP)
// 005be3b9: PUSH 0x1
// 005be3bb: PUSH EAX
// 005be3bc: PUSH ESI
// 005be3bd: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005be3c2: ADD ESP,0xc
// 005be3c5: JMP 0x005bddf2
//   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)
// 005be3ca: JBE 0x005be128
//   Label: LAB_005be3ca
//   XREF to: 005be128 (CONDITIONAL_JUMP)
// 005be3d0: CMP EAX,0xf
// 005be3d3: JNC 0x005be3ed
//   XREF to: 005be3ed (CONDITIONAL_JUMP)
// 005be3d5: CMP EAX,0x7
// 005be3d8: JZ 0x005bdd85
//   XREF to: 005bdd85 (CONDITIONAL_JUMP)
// 005be3de: PUSH EDI
// 005be3df: PUSH EBX
// 005be3e0: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 005be3e5: ADD ESP,0x8
// 005be3e8: JMP 0x005bddf2
//   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)
// 005be3ed: JBE 0x005be271
//   Label: LAB_005be3ed
//   XREF to: 005be271 (CONDITIONAL_JUMP)
// 005be3f3: CMP EAX,0x11
// 005be3f6: JZ 0x005be2b6
//   XREF to: 005be2b6 (CONDITIONAL_JUMP)
// 005be3fc: PUSH EDI
// 005be3fd: PUSH EBX
// 005be3fe: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 005be403: ADD ESP,0x8
// 005be406: JMP 0x005bddf2
//   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)
// 005be40b: JBE 0x005bdeb3
//   Label: LAB_005be40b
//   XREF to: 005bdeb3 (CONDITIONAL_JUMP)
// 005be411: CMP EAX,0x3
// 005be414: JZ 0x005bde09
//   XREF to: 005bde09 (CONDITIONAL_JUMP)
// 005be41a: PUSH EDI
//   Label: LAB_005be41a
// 005be41b: PUSH EBX
// 005be41c: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 005be421: ADD ESP,0x8
// 005be424: JMP 0x005bddf2
//   XREF to: 005bddf2 (UNCONDITIONAL_JUMP)
