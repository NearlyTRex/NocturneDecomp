// Name: core_stranger.cpp_CStranger_FUN_005c2850
// Address: 005c2850
// Address Range: [[005c2850, 005c2fdb]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c2850()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005c5b90 (005c5b90) at 005c5c37 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_actionPending_d_stranger_00653b64
//   TerminatedCString s_Delta_to_dest_3_2f_3_2f__00653b8c
//   double DOUBLE_00653bb4 = 0.990000000000000
//   double DOUBLE_00653bbc = 3
//   double DOUBLE_00653bc4 = 2
//   double DOUBLE_00653bcc = 4
//   CConsole* g_CConsolePtr = 0083b1a4
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CConsole g_ConsolePtr
//   undefined4 g_CCrateClassInfo.name_hash
//   undefined4 g_CActorDestinationClassInfo.name_hash
//   CEditorTools g_CEditorToolsPtr
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 DAT_032613d4
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_charactr.cpp_CCharacter_FUN_0042e840
//   core_dest.cpp_FUN_0046fd50
//   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
//   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470
//   core_stranger.cpp_FUN_005bb010
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005c2850(CStranger* param_1) */

undefined4 core_stranger_cpp_CStranger_FUN_005c2850(void)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CDemonActor *pCVar5;
  int iVar6;
  CVector3f *pCVar7;
  CVector3f *pCVar8;
  float *pfVar9;
  BADSPACEBASE *in_ESP;
  CLocation *input_world_point;
  int iVar10;
  CDemonActor *in_stack_00000004;
  CVector3f local_d4;
  CVector3f local_c8;
  CVector3f local_bc;
  CVector3f CStack_b0;
  CVector3f local_a4;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  CVector3f local_8c;
  CVector3f local_80;
  float local_74;
  float local_70;
  float local_6c;
  CVector3f CStack_68;
  CVector3f local_5c;
  float local_50;
  float local_4c;
  float local_48;
  CVector3f CStack_44;
  CDemonActor *local_38;
  CDemonActor *pCStack_34;
  float local_30;
  int iStack_2c;
  int local_28;
  int local_24;
  int iStack_20;
  float fStack_1c;
  float local_18;
  
  if (in_stack_00000004[0x179].scale.x != 0) {
    return 0;
  }
  if (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) == 0) {
    return 0;
  }
  if ((in_stack_00000004[0x1f].field12_0xe0.y != 1.96182e-44) &&
     (local_18 = (float)core_charactr_cpp_CCharacter_FUN_0042e840(),
     local_18 < (float)DOUBLE_00653bb4)) {
    return 0;
  }
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       ((CMotionController *)(in_stack_00000004 + 1),0);
  if (local_18 < 1.0) {
    return 0;
  }
  if ((*(int *)(in_stack_00000004[0x1b].create_event + 0x38) == 0) ||
     (iVar6 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[0x1b].create_event + 0x38) + 0x154) +
                          0x7c))(), iVar6 != 4)) {
    local_24 = 0;
    for (local_28 = 0; local_28 < (int)g_CDemonSetPtr->actor_list_ptr; local_28 = local_28 + 1) {
      pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_24),
                          g_CActorDestinationClassInfo.name_hash);
      local_38 = pCVar5;
      if ((pCVar5 != (CDemonActor *)0x0) && (iVar6 = core_dest_cpp_FUN_0046fd50(), iVar6 != 0)) {
        pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (in_stack_00000004,&local_c8,
                            (CVector3f *)
                            (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) + 0x20));
        input_world_point = &pCVar5->location;
        pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (in_stack_00000004,&local_8c,&input_world_point->position);
        fVar2 = pCVar8->x - pCVar7->x;
        fVar3 = pCVar8->y - pCVar7->y;
        fVar4 = pCVar8->z - pCVar7->z;
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"Delta to dest : %3.2f,%3.2f,%3.2f\n",(double)fVar2,(double)fVar3,
                   (double)fVar4);
        if ((((0.0 < fVar4) &&
             ((fVar4 < (float)DOUBLE_00653bbc && (ABS(fVar2) < (float)DOUBLE_00653bc4)))) &&
            (dVar1 = (double)fVar3, 0.0 < dVar1)) && (dVar1 < DOUBLE_00653bcc)) {
          in_stack_00000004[0x17a].orient_matrix.m[1].x = 2.8026e-45;
          if ((CLocation *)&in_stack_00000004[0x179].field22_0x120 != input_world_point) {
            in_stack_00000004[0x179].field22_0x120 = (int)(input_world_point->position).x;
            in_stack_00000004[0x179].field23_0x124 = (int)(pCVar5->location).position.y;
            in_stack_00000004[0x179].previous_transform_state.position.x =
                 (pCVar5->location).position.z;
          }
          pfVar9 = &in_stack_00000004[0x179].previous_transform_state.position.y;
          if ((COrientation *)pfVar9 != &local_38->orient) {
            *pfVar9 = (local_38->orient).pitch;
            in_stack_00000004[0x179].previous_transform_state.position.z = (local_38->orient).bank;
            in_stack_00000004[0x179].previous_transform_state.orientation.x =
                 (local_38->orient).heading;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    ((CMotionController *)(in_stack_00000004 + 1),0x16,1);
          return 1;
        }
      }
      local_24 = local_24 + 4;
    }
  }
  else {
    iStack_20 = 0;
    for (iStack_2c = 0; iStack_2c < (int)g_CDemonSetPtr->actor_list_ptr; iStack_2c = iStack_2c + 1)
    {
      pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iStack_20),
                          g_CActorDestinationClassInfo.name_hash);
      pCStack_34 = pCVar5;
      if ((pCVar5 != (CDemonActor *)0x0) && (iVar6 = core_dest_cpp_FUN_0046fd50(), iVar6 != 0)) {
        pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (in_stack_00000004,&CStack_b0,
                            (CVector3f *)
                            (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) + 0x20));
        pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (in_stack_00000004,&CStack_44,&(pCVar5->location).position);
        fStack_98 = pCVar8->x - pCVar7->x;
        fStack_94 = pCVar8->y - pCVar7->y;
        fStack_90 = pCVar8->z - pCVar7->z;
        if ((0.0 < fStack_90) &&
           ((((fStack_90 < (float)DOUBLE_00653bbc && (ABS(fStack_98) < (float)DOUBLE_00653bc4)) &&
             (0.0 < (double)fStack_94)) && ((double)fStack_94 < DOUBLE_00653bcc)))) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    ((CMotionController *)(in_stack_00000004 + 1),0x1a,1);
          pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             (in_stack_00000004,&CStack_68,&(pCVar5->location).position);
          if ((CVector3f *)(in_stack_00000004[0x17a].create_event + 0x30) != pCVar7) {
            ((CVector3f *)(in_stack_00000004[0x17a].create_event + 0x30))->x = pCVar7->x;
            *(float *)(in_stack_00000004[0x17a].create_event + 0x34) = pCVar7->y;
            *(float *)(in_stack_00000004[0x17a].create_event + 0x38) = pCVar7->z;
          }
          fStack_1c = *(float *)(in_stack_00000004[0x17a].create_event + 0x4c) -
                      *(float *)(in_stack_00000004[0x17a].create_event + 0x40);
          local_18 = (float)core_stranger_cpp_FUN_005bb010();
          fVar2 = in_stack_00000004[0x17a].orient_matrix.m[1].x;
          *(float *)(in_stack_00000004[0x17a].create_event + 0x34) =
               (fStack_1c - local_18) + *(float *)(in_stack_00000004[0x17a].create_event + 0x34);
          if (fVar2 != 0.0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",fVar2,0xe78);
          }
          in_stack_00000004[0x17a].orient_matrix.m[1].x = 2.8026e-45;
          if ((CLocation *)&in_stack_00000004[0x179].field22_0x120 != &pCStack_34->location) {
            in_stack_00000004[0x179].field22_0x120 = (int)(pCStack_34->location).position.x;
            in_stack_00000004[0x179].field23_0x124 = (int)(pCStack_34->location).position.y;
            in_stack_00000004[0x179].previous_transform_state.position.x =
                 (pCStack_34->location).position.z;
          }
          pfVar9 = &in_stack_00000004[0x179].previous_transform_state.position.y;
          if ((COrientation *)pfVar9 != &pCStack_34->orient) {
            *pfVar9 = (pCStack_34->orient).pitch;
            in_stack_00000004[0x179].previous_transform_state.position.z = (pCStack_34->orient).bank
            ;
            in_stack_00000004[0x179].previous_transform_state.orientation.x =
                 (pCStack_34->orient).heading;
          }
          return 1;
        }
      }
      iStack_20 = iStack_20 + 4;
    }
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
            (g_CDemonSetPtr,*(CDemonActor **)(in_stack_00000004[0x1b].create_event + 0x38));
  iVar6 = *(int *)(in_stack_00000004[0x1b].create_event + 0x38);
  local_74 = *(float *)(iVar6 + 0x20);
  local_70 = *(float *)(iVar6 + 0x24);
  local_6c = *(float *)(iVar6 + 0x28);
  local_bc.x = 0.0;
  local_bc.y = 0.0;
  local_bc.z = 1.0;
  pCVar7 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (in_stack_00000004,&local_a4,&local_bc);
  local_74 = local_74 + pCVar7->x;
  local_6c = local_6c + pCVar7->z;
  local_70 = (in_stack_00000004->location).position.y;
  local_5c.x = 0.0;
  local_5c.y = 0.0;
  local_5c.z = 1.5;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(in_stack_00000004,&local_80,&local_5c);
  local_18 = core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470
                       (g_CDemonSetPtr,local_74,local_6c,local_80.x,local_80.z,1.0,
                        (void *)0x3dcccccd,(void *)0x40400000);
  if (local_18 < 1.0) {
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    return 0;
  }
  local_d4.x = local_74 + local_80.x;
  local_d4.y = local_70 + local_80.y;
  local_d4.z = local_6c + local_80.z;
  local_30 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                       (g_CDemonSetPtr,&local_d4,0.5);
  local_18 = local_30;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  if (ABS(local_30 - (in_stack_00000004->location).position.y) <= 1.0) {
    iVar6 = 0;
    iVar10 = 0;
    do {
      if ((int)g_CDemonSetPtr->actor_list_ptr <= iVar6) {
        iVar6 = *(int *)(in_stack_00000004[0x1b].create_event + 0x38);
        in_stack_00000004[0x17a].orient_matrix.m[1].x = 8.40779e-45;
        if ((iVar6 == 0) || (iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x7c))(), iVar6 != 4)) {
          iVar6 = 0x14;
        }
        else {
          iVar6 = 0x19;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(in_stack_00000004 + 1),iVar6,1);
        in_stack_00000004[0x17a].orient_matrix.m[1].z = 4.0;
        return 1;
      }
      pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar10),
                          g_CCrateClassInfo.name_hash);
      if (pCVar5 != (CDemonActor *)0x0) {
        local_50 = (pCVar5->location).position.x - local_74;
        local_4c = (pCVar5->location).position.y - local_70;
        local_48 = (pCVar5->location).position.z - local_6c;
        if (SQRT(local_48 * local_48 + local_50 * local_50 + local_4c * local_4c) <
            (float)DOUBLE_00653bc4) {
          return 0;
        }
      }
      iVar6 = iVar6 + 1;
      iVar10 = iVar10 + 4;
    } while( true );
  }
  return 0;
}


// Assembly code:
// 005c2850: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c2850
// 005c2851: PUSH ESI
// 005c2852: PUSH EDI
// 005c2853: PUSH EBP
// 005c2854: MOV EBP,ESP
// 005c2856: SUB ESP,0xdc
// 005c285c: AND ESP,0xfffffff8
// 005c285f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c2862: MOV EDX,dword ptr [EBX + 0x1fba0]
// 005c2868: TEST EDX,EDX
// 005c286a: JNZ 0x005c2fab
//   XREF to: 005c2fab (CONDITIONAL_JUMP)
// 005c2870: CMP dword ptr [EBX + 0x24f8],0x0
// 005c2877: JZ 0x005c2fab
//   XREF to: 005c2fab (CONDITIONAL_JUMP)
// 005c287d: CMP dword ptr [EBX + 0x2a8c],0xe
// 005c2884: JZ 0x005c28ad
//   XREF to: 005c28ad (CONDITIONAL_JUMP)
// 005c2886: PUSH EDX
// 005c2887: PUSH EBX
// 005c2888: CALL core_charactr.cpp_CCharacter_FUN_0042e840
//   XREF to: 0042e840 (UNCONDITIONAL_CALL)
// 005c288d: MOV dword ptr [ESP + 0xe0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005c2894: FLD float ptr [ESP + 0xe0]
//   XREF to: Stack[-0x18] (READ)
// 005c289b: ADD ESP,0x8
// 005c289e: FCOMP double ptr [0x00653bb4]
//   XREF to: 00653bb4 (READ)
// 005c28a4: FNSTSW AX
// 005c28a6: SAHF
// 005c28a7: JC 0x005c2fab
//   XREF to: 005c2fab (CONDITIONAL_JUMP)
// 005c28ad: PUSH 0x0
//   Label: LAB_005c28ad
// 005c28af: LEA EAX,[EBX + 0x158]
// 005c28b5: PUSH EAX
// 005c28b6: CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005c28bb: MOV dword ptr [ESP + 0xe0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005c28c2: FLD float ptr [ESP + 0xe0]
//   XREF to: Stack[-0x18] (READ)
// 005c28c9: FLD1
// 005c28cb: ADD ESP,0x8
// 005c28ce: FCOMPP
// 005c28d0: FNSTSW AX
// 005c28d2: SAHF
// 005c28d3: JA 0x005c2fab
//   XREF to: 005c2fab (CONDITIONAL_JUMP)
// 005c28d9: MOV EAX,dword ptr [EBX + 0x24f8]
// 005c28df: TEST EAX,EAX
// 005c28e1: JNZ 0x005c2961
//   XREF to: 005c2961 (CONDITIONAL_JUMP)
// 005c28e7: XOR EDX,EDX
//   Label: LAB_005c28e7
// 005c28e9: MOV dword ptr [ESP + 0xc8],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 005c28f0: MOV dword ptr [ESP + 0xcc],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005c28f7: MOV EAX,[0x006810c8]
//   Label: LAB_005c28f7
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005c28fc: MOV ESI,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x28] (READ)
// 005c2903: CMP ESI,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 005c2909: JGE 0x005c2d0c
//   XREF to: 005c2d0c (CONDITIONAL_JUMP)
// 005c290f: MOV ESI,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x24] (READ)
// 005c2916: MOV ECX,dword ptr [0x020a4874]
//   XREF to: 020a4874 (READ)
// 005c291c: ADD EAX,ESI
// 005c291e: PUSH ECX
// 005c291f: MOV EDI,dword ptr [EAX + 0x14d158]
//   XREF to: 032613d0 (DATA)
//   XREF to: 032613d4 (DATA)
// 005c2925: PUSH EDI
// 005c2926: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005c292b: ADD ESP,0x8
// 005c292e: MOV ESI,EAX
// 005c2930: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005c2937: TEST EAX,EAX
// 005c2939: JNZ 0x005c2bb4
//   XREF to: 005c2bb4 (CONDITIONAL_JUMP)
// 005c293f: MOV ESI,dword ptr [ESP + 0xc8]
//   Label: LAB_005c293f
//   XREF to: Stack[-0x28] (READ)
// 005c2946: MOV ECX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x24] (READ)
// 005c294d: INC ESI
// 005c294e: ADD ECX,0x4
// 005c2951: MOV dword ptr [ESP + 0xc8],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 005c2958: MOV dword ptr [ESP + 0xcc],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 005c295f: JMP 0x005c28f7
//   XREF to: 005c28f7 (UNCONDITIONAL_JUMP)
// 005c2961: PUSH EBX
//   Label: LAB_005c2961
// 005c2962: MOV ESI,dword ptr [EAX + 0x154]
// 005c2968: PUSH EAX
// 005c2969: CALL dword ptr [ESI + 0x7c]
// 005c296c: ADD ESP,0x8
// 005c296f: CMP EAX,0x4
// 005c2972: SETZ AL
// 005c2975: AND EAX,0xff
// 005c297a: JZ 0x005c28e7
//   XREF to: 005c28e7 (CONDITIONAL_JUMP)
// 005c2980: XOR EDI,EDI
// 005c2982: MOV dword ptr [ESP + 0xc4],EDI
// 005c2989: MOV dword ptr [ESP + 0xd0],EDI
//   Label: LAB_005c2989
// 005c2990: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005c2995: MOV ESI,dword ptr [ESP + 0xc4]
// 005c299c: CMP ESI,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 005c29a2: JGE 0x005c2d0c
//   XREF to: 005c2d0c (CONDITIONAL_JUMP)
// 005c29a8: MOV ECX,dword ptr [ESP + 0xd0]
// 005c29af: MOV EDX,dword ptr [0x020a4874]
//   XREF to: 020a4874 (READ)
// 005c29b5: ADD EAX,ECX
// 005c29b7: PUSH EDX
// 005c29b8: MOV ESI,dword ptr [EAX + 0x14d158]
//   XREF to: 032613d0 (DATA)
//   XREF to: 032613d4 (DATA)
// 005c29be: PUSH ESI
// 005c29bf: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005c29c4: ADD ESP,0x8
// 005c29c7: MOV ESI,EAX
// 005c29c9: MOV dword ptr [ESP + 0xbc],EAX
// 005c29d0: TEST EAX,EAX
// 005c29d2: JNZ 0x005c29ef
//   XREF to: 005c29ef (CONDITIONAL_JUMP)
// 005c29d4: MOV EAX,dword ptr [ESP + 0xc4]
//   Label: LAB_005c29d4
// 005c29db: MOV EDI,dword ptr [ESP + 0xd0]
// 005c29e2: INC EAX
// 005c29e3: ADD EDI,0x4
// 005c29e6: MOV dword ptr [ESP + 0xc4],EAX
// 005c29ed: JMP 0x005c2989
//   XREF to: 005c2989 (UNCONDITIONAL_JUMP)
// 005c29ef: MOV EDI,dword ptr [EBX + 0x24f8]
//   Label: LAB_005c29ef
// 005c29f5: PUSH EDI
// 005c29f6: PUSH EAX
// 005c29f7: CALL core_dest.cpp_FUN_0046fd50
//   XREF to: 0046fd50 (UNCONDITIONAL_CALL)
// 005c29fc: ADD ESP,0x8
// 005c29ff: TEST EAX,EAX
// 005c2a01: JZ 0x005c29d4
//   XREF to: 005c29d4 (CONDITIONAL_JUMP)
// 005c2a03: MOV EAX,dword ptr [EBX + 0x24f8]
// 005c2a09: ADD EAX,0x20
// 005c2a0c: PUSH EAX
// 005c2a0d: LEA EAX,[ESP + 0x44]
// 005c2a11: PUSH EAX
// 005c2a12: PUSH EBX
// 005c2a13: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005c2a18: ADD ESP,0xc
// 005c2a1b: ADD ESI,0x20
// 005c2a1e: PUSH ESI
// 005c2a1f: MOV EDI,EAX
// 005c2a21: LEA EAX,[ESP + 0xb0]
// 005c2a28: PUSH EAX
// 005c2a29: PUSH EBX
// 005c2a2a: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005c2a2f: FLD float ptr [EAX]
// 005c2a31: FSUB float ptr [EDI]
// 005c2a33: ADD ESP,0xc
// 005c2a36: FSTP float ptr [ESP + 0x58]
// 005c2a3a: FLD float ptr [EAX + 0x4]
// 005c2a3d: FSUB float ptr [EDI + 0x4]
// 005c2a40: FSTP float ptr [ESP + 0x5c]
// 005c2a44: FLD float ptr [EAX + 0x8]
// 005c2a47: FSUB float ptr [EDI + 0x8]
// 005c2a4a: FLDZ
// 005c2a4c: FXCH
// 005c2a4e: FSTP float ptr [ESP + 0x60]
// 005c2a52: FCOMP float ptr [ESP + 0x60]
// 005c2a56: FNSTSW AX
// 005c2a58: SAHF
// 005c2a59: JNC 0x005c29d4
//   XREF to: 005c29d4 (CONDITIONAL_JUMP)
// 005c2a5f: FLD float ptr [ESP + 0x60]
// 005c2a63: FCOMP double ptr [0x00653bbc]
//   XREF to: 00653bbc (READ)
// 005c2a69: FNSTSW AX
// 005c2a6b: SAHF
// 005c2a6c: JNC 0x005c29d4
//   XREF to: 005c29d4 (CONDITIONAL_JUMP)
// 005c2a72: FLD float ptr [ESP + 0x58]
// 005c2a76: FABS
// 005c2a78: FCOMP double ptr [0x00653bc4]
//   XREF to: 00653bc4 (READ)
// 005c2a7e: FNSTSW AX
// 005c2a80: SAHF
// 005c2a81: JNC 0x005c29d4
//   XREF to: 005c29d4 (CONDITIONAL_JUMP)
// 005c2a87: FLD float ptr [ESP + 0x5c]
// 005c2a8b: FLDZ
// 005c2a8d: FXCH
// 005c2a8f: FSTP double ptr [ESP]
// 005c2a92: FCOMP double ptr [ESP]
// 005c2a95: FNSTSW AX
// 005c2a97: SAHF
// 005c2a98: JNC 0x005c29d4
//   XREF to: 005c29d4 (CONDITIONAL_JUMP)
// 005c2a9e: FLD double ptr [ESP]
// 005c2aa1: FCOMP double ptr [0x00653bcc]
//   XREF to: 00653bcc (READ)
// 005c2aa7: FNSTSW AX
// 005c2aa9: SAHF
// 005c2aaa: JNC 0x005c29d4
//   XREF to: 005c29d4 (CONDITIONAL_JUMP)
// 005c2ab0: PUSH 0x1
// 005c2ab2: PUSH 0x1a
// 005c2ab4: LEA EAX,[EBX + 0x158]
// 005c2aba: PUSH EAX
// 005c2abb: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c2ac0: ADD ESP,0xc
// 005c2ac3: PUSH ESI
// 005c2ac4: LEA EAX,[ESP + 0x8c]
// 005c2acb: PUSH EAX
// 005c2acc: PUSH EBX
// 005c2acd: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005c2ad2: LEA ESI,[EBX + 0x1fc98]
// 005c2ad8: ADD ESP,0xc
// 005c2adb: CMP ESI,EAX
// 005c2add: JZ 0x005c2aef
//   XREF to: 005c2aef (CONDITIONAL_JUMP)
// 005c2adf: MOV EDX,dword ptr [EAX]
// 005c2ae1: MOV dword ptr [ESI],EDX
// 005c2ae3: MOV EDX,dword ptr [EAX + 0x4]
// 005c2ae6: MOV dword ptr [ESI + 0x4],EDX
// 005c2ae9: MOV EDX,dword ptr [EAX + 0x8]
// 005c2aec: MOV dword ptr [ESI + 0x8],EDX
// 005c2aef: FLD float ptr [EBX + 0x1fcb4]
//   Label: LAB_005c2aef
// 005c2af5: MOV EAX,dword ptr [EBX + 0x24f8]
// 005c2afb: FSUB float ptr [EBX + 0x1fca8]
// 005c2b01: PUSH EAX
// 005c2b02: FSTP float ptr [ESP + 0xd8]
// 005c2b09: CALL core_stranger.cpp_FUN_005bb010
//   XREF to: 005bb010 (UNCONDITIONAL_CALL)
// 005c2b0e: MOV dword ptr [ESP + 0xdc],EAX
// 005c2b15: FLD float ptr [ESP + 0xdc]
// 005c2b1c: ADD ESP,0x4
// 005c2b1f: FSUBR float ptr [ESP + 0xd4]
// 005c2b26: FADD float ptr [EBX + 0x1fc9c]
// 005c2b2c: MOV EDX,dword ptr [EBX + 0x1fc38]
// 005c2b32: FSTP float ptr [EBX + 0x1fc9c]
// 005c2b38: TEST EDX,EDX
// 005c2b3a: JZ 0x005c2b56
//   XREF to: 005c2b56 (CONDITIONAL_JUMP)
// 005c2b3c: PUSH 0xe78
// 005c2b41: PUSH EDX
// 005c2b42: PUSH 0x653b64
//   XREF to: 00653b64 (DATA)
// 005c2b47: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005c2b4d: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 005c2b4e: CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)
// 005c2b53: ADD ESP,0x10
// 005c2b56: MOV EAX,dword ptr [ESP + 0xbc]
//   Label: LAB_005c2b56
// 005c2b5d: LEA ESI,[EBX + 0x1fbb8]
// 005c2b63: ADD EAX,0x20
// 005c2b66: MOV dword ptr [EBX + 0x1fc38],0x2
// 005c2b70: CMP ESI,EAX
// 005c2b72: JZ 0x005c2b84
//   XREF to: 005c2b84 (CONDITIONAL_JUMP)
// 005c2b74: MOV EDX,dword ptr [EAX]
// 005c2b76: MOV dword ptr [ESI],EDX
// 005c2b78: MOV EDX,dword ptr [EAX + 0x4]
// 005c2b7b: MOV dword ptr [ESI + 0x4],EDX
// 005c2b7e: MOV EDX,dword ptr [EAX + 0x8]
// 005c2b81: MOV dword ptr [ESI + 0x8],EDX
// 005c2b84: MOV EAX,dword ptr [ESP + 0xbc]
//   Label: LAB_005c2b84
// 005c2b8b: ADD EBX,0x1fbc4
// 005c2b91: ADD EAX,0x30
// 005c2b94: CMP EBX,EAX
// 005c2b96: JZ 0x005c2ba8
//   XREF to: 005c2ba8 (CONDITIONAL_JUMP)
// 005c2b98: MOV EDX,dword ptr [EAX]
// 005c2b9a: MOV dword ptr [EBX],EDX
// 005c2b9c: MOV EDX,dword ptr [EAX + 0x4]
// 005c2b9f: MOV dword ptr [EBX + 0x4],EDX
// 005c2ba2: MOV EDX,dword ptr [EAX + 0x8]
// 005c2ba5: MOV dword ptr [EBX + 0x8],EDX
// 005c2ba8: MOV EAX,0x1
//   Label: LAB_005c2ba8
// 005c2bad: MOV ESP,EBP
// 005c2baf: POP EBP
// 005c2bb0: POP EDI
// 005c2bb1: POP ESI
// 005c2bb2: POP EBX
// 005c2bb3: RET
// 005c2bb4: MOV EAX,dword ptr [EBX + 0x24f8]
//   Label: LAB_005c2bb4
// 005c2bba: PUSH EAX
// 005c2bbb: PUSH ESI
// 005c2bbc: CALL core_dest.cpp_FUN_0046fd50
//   XREF to: 0046fd50 (UNCONDITIONAL_CALL)
// 005c2bc1: ADD ESP,0x8
// 005c2bc4: TEST EAX,EAX
// 005c2bc6: JZ 0x005c293f
//   XREF to: 005c293f (CONDITIONAL_JUMP)
// 005c2bcc: MOV EAX,dword ptr [EBX + 0x24f8]
// 005c2bd2: ADD EAX,0x20
// 005c2bd5: PUSH EAX
// 005c2bd6: LEA EAX,[ESP + 0x2c]
//   XREF to: Stack[-0xc8] (DATA)
// 005c2bda: PUSH EAX
// 005c2bdb: PUSH EBX
// 005c2bdc: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005c2be1: ADD ESP,0xc
// 005c2be4: ADD ESI,0x20
// 005c2be7: PUSH ESI
// 005c2be8: MOV EDI,EAX
// 005c2bea: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x8c] (DATA)
// 005c2bee: PUSH EAX
// 005c2bef: PUSH EBX
// 005c2bf0: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005c2bf5: FLD float ptr [EAX]
// 005c2bf7: FSUB float ptr [EDI]
// 005c2bf9: ADD ESP,0xc
// 005c2bfc: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0xe0] (WRITE)
// 005c2c00: FLD float ptr [EAX + 0x4]
// 005c2c03: FSUB float ptr [EDI + 0x4]
// 005c2c06: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0xdc] (WRITE)
// 005c2c0a: FLD float ptr [EAX + 0x8]
// 005c2c0d: FSUB float ptr [EDI + 0x8]
// 005c2c10: FST float ptr [ESP + 0x18]
//   XREF to: Stack[-0xd8] (WRITE)
// 005c2c14: SUB ESP,0x8
// 005c2c17: FSTP double ptr [ESP]
//   XREF to: Stack[-0xf8] (DATA)
// 005c2c1a: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xdc] (READ)
// 005c2c1e: SUB ESP,0x8
// 005c2c21: FSTP double ptr [ESP]
//   XREF to: Stack[-0x100] (DATA)
// 005c2c24: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0xe0] (READ)
// 005c2c28: SUB ESP,0x8
// 005c2c2b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x108] (DATA)
// 005c2c2e: PUSH 0x653b8c
//   XREF to: 00653b8c (DATA)
// 005c2c33: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005c2c39: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 005c2c3a: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005c2c3f: ADD ESP,0x20
// 005c2c42: FLDZ
// 005c2c44: FCOMP float ptr [ESP + 0x18]
//   XREF to: Stack[-0xd8] (READ)
// 005c2c48: FNSTSW AX
// 005c2c4a: SAHF
// 005c2c4b: JNC 0x005c293f
//   XREF to: 005c293f (CONDITIONAL_JUMP)
// 005c2c51: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0xd8] (READ)
// 005c2c55: FCOMP double ptr [0x00653bbc]
//   XREF to: 00653bbc (READ)
// 005c2c5b: FNSTSW AX
// 005c2c5d: SAHF
// 005c2c5e: JNC 0x005c293f
//   XREF to: 005c293f (CONDITIONAL_JUMP)
// 005c2c64: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0xe0] (READ)
// 005c2c68: FABS
// 005c2c6a: FCOMP double ptr [0x00653bc4]
//   XREF to: 00653bc4 (READ)
// 005c2c70: FNSTSW AX
// 005c2c72: SAHF
// 005c2c73: JNC 0x005c293f
//   XREF to: 005c293f (CONDITIONAL_JUMP)
// 005c2c79: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0xdc] (READ)
// 005c2c7d: FLDZ
// 005c2c7f: FXCH
// 005c2c81: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xe8] (WRITE)
// 005c2c85: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xe8] (READ)
// 005c2c89: FNSTSW AX
// 005c2c8b: SAHF
// 005c2c8c: JNC 0x005c293f
//   XREF to: 005c293f (CONDITIONAL_JUMP)
// 005c2c92: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xe8] (READ)
// 005c2c96: FCOMP double ptr [0x00653bcc]
//   XREF to: 00653bcc (READ)
// 005c2c9c: FNSTSW AX
// 005c2c9e: SAHF
// 005c2c9f: JNC 0x005c293f
//   XREF to: 005c293f (CONDITIONAL_JUMP)
// 005c2ca5: LEA EAX,[EBX + 0x1fbb8]
// 005c2cab: MOV dword ptr [EBX + 0x1fc38],0x2
// 005c2cb5: CMP EAX,ESI
// 005c2cb7: JZ 0x005c2cc9
//   XREF to: 005c2cc9 (CONDITIONAL_JUMP)
// 005c2cb9: MOV EDX,dword ptr [ESI]
// 005c2cbb: MOV dword ptr [EAX],EDX
// 005c2cbd: MOV EDX,dword ptr [ESI + 0x4]
// 005c2cc0: MOV dword ptr [EAX + 0x4],EDX
// 005c2cc3: MOV EDX,dword ptr [ESI + 0x8]
// 005c2cc6: MOV dword ptr [EAX + 0x8],EDX
// 005c2cc9: MOV ESI,dword ptr [ESP + 0xb8]
//   Label: LAB_005c2cc9
//   XREF to: Stack[-0x38] (READ)
// 005c2cd0: LEA EAX,[EBX + 0x1fbc4]
// 005c2cd6: ADD ESI,0x30
// 005c2cd9: CMP EAX,ESI
// 005c2cdb: JZ 0x005c2ced
//   XREF to: 005c2ced (CONDITIONAL_JUMP)
// 005c2cdd: MOV EDX,dword ptr [ESI]
// 005c2cdf: MOV dword ptr [EAX],EDX
// 005c2ce1: MOV EDX,dword ptr [ESI + 0x4]
// 005c2ce4: MOV dword ptr [EAX + 0x4],EDX
// 005c2ce7: MOV EDX,dword ptr [ESI + 0x8]
// 005c2cea: MOV dword ptr [EAX + 0x8],EDX
// 005c2ced: PUSH 0x1
//   Label: LAB_005c2ced
// 005c2cef: PUSH 0x16
// 005c2cf1: ADD EBX,0x158
// 005c2cf7: PUSH EBX
// 005c2cf8: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c2cfd: MOV EAX,0x1
// 005c2d02: ADD ESP,0xc
// 005c2d05: MOV ESP,EBP
// 005c2d07: POP EBP
// 005c2d08: POP EDI
// 005c2d09: POP ESI
// 005c2d0a: POP EBX
// 005c2d0b: RET
// 005c2d0c: PUSH EBX
//   Label: LAB_005c2d0c
// 005c2d0d: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005c2d13: PUSH EDI
//   XREF to: 03114278 (DATA)
// 005c2d14: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005c2d19: ADD ESP,0x8
// 005c2d1c: MOV EAX,dword ptr [EBX + 0x24f8]
// 005c2d22: PUSH EAX
// 005c2d23: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005c2d29: PUSH EDX
//   XREF to: 03114278 (DATA)
// 005c2d2a: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005c2d2f: MOV ESI,dword ptr [EBX + 0x24f8]
// 005c2d35: ADD ESP,0x8
// 005c2d38: MOV EAX,dword ptr [ESI + 0x20]
// 005c2d3b: ADD ESI,0x20
// 005c2d3e: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 005c2d42: LEA EAX,[ESI + 0x4]
// 005c2d45: MOV EAX,dword ptr [EAX]
// 005c2d47: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 005c2d4e: LEA EAX,[ESI + 0x8]
// 005c2d51: MOV EAX,dword ptr [EAX]
// 005c2d53: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 005c2d5a: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0xbc] (DATA)
// 005c2d5e: PUSH EAX
// 005c2d5f: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0xa4] (DATA)
// 005c2d63: XOR ECX,ECX
// 005c2d65: PUSH EAX
// 005c2d66: MOV EDI,0x3f800000
// 005c2d6b: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0xbc] (WRITE)
// 005c2d6f: PUSH EBX
// 005c2d70: MOV dword ptr [ESP + 0x44],ECX
//   XREF to: Stack[-0xb8] (WRITE)
// 005c2d74: MOV dword ptr [ESP + 0x48],EDI
//   XREF to: Stack[-0xb4] (WRITE)
// 005c2d78: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 005c2d7d: ADD ESP,0xc
// 005c2d80: FLD float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x74] (READ)
// 005c2d84: FADD float ptr [EAX]
// 005c2d86: FLD float ptr [ESP + 0x80]
//   XREF to: Stack[-0x70] (READ)
// 005c2d8d: FXCH
// 005c2d8f: FSTP float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x74] (WRITE)
// 005c2d93: FADD float ptr [EAX + 0x4]
// 005c2d96: FLD float ptr [ESP + 0x84]
//   XREF to: Stack[-0x6c] (READ)
// 005c2d9d: FXCH
// 005c2d9f: FSTP float ptr [ESP + 0x80]
//   XREF to: Stack[-0x70] (WRITE)
// 005c2da6: FADD float ptr [EAX + 0x8]
// 005c2da9: FSTP float ptr [ESP + 0x84]
//   XREF to: Stack[-0x6c] (WRITE)
// 005c2db0: MOV EAX,dword ptr [EBX + 0x24]
// 005c2db3: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 005c2dba: XOR EAX,EAX
// 005c2dbc: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005c2dc3: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005c2dca: LEA EAX,[ESP + 0x94]
//   XREF to: Stack[-0x5c] (DATA)
// 005c2dd1: PUSH EAX
// 005c2dd2: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x80] (DATA)
// 005c2dd6: PUSH EAX
// 005c2dd7: MOV ECX,0x3fc00000
// 005c2ddc: PUSH EBX
// 005c2ddd: MOV dword ptr [ESP + 0xa8],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 005c2de4: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 005c2de9: ADD ESP,0xc
// 005c2dec: PUSH 0x40400000
// 005c2df1: PUSH 0x3dcccccd
// 005c2df6: PUSH 0x3f800000
// 005c2dfb: PUSH dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x78] (READ)
// 005c2e02: PUSH dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x80] (READ)
// 005c2e09: PUSH dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x6c] (READ)
// 005c2e10: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005c2e16: PUSH dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x74] (READ)
// 005c2e1d: PUSH ESI
//   XREF to: 03114278 (DATA)
// 005c2e1e: CALL core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470
//   XREF to: 00573470 (UNCONDITIONAL_CALL)
// 005c2e23: MOV dword ptr [ESP + 0xf8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005c2e2a: FLD float ptr [ESP + 0xf8]
//   XREF to: Stack[-0x18] (READ)
// 005c2e31: FLD1
// 005c2e33: ADD ESP,0x20
// 005c2e36: FCOMPP
// 005c2e38: FNSTSW AX
// 005c2e3a: SAHF
// 005c2e3b: JA 0x005c2f1c
//   XREF to: 005c2f1c (CONDITIONAL_JUMP)
// 005c2e41: FLD float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x74] (READ)
// 005c2e45: FLD float ptr [ESP + 0x80]
//   XREF to: Stack[-0x70] (READ)
// 005c2e4c: FLD float ptr [ESP + 0x84]
//   XREF to: Stack[-0x6c] (READ)
// 005c2e53: PUSH 0x3f000000
// 005c2e58: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0xd4] (DATA)
// 005c2e5c: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005c2e62: FXCH ST2
// 005c2e64: FADD float ptr [ESP + 0x74]
//   XREF to: Stack[-0x80] (READ)
// 005c2e68: FXCH
// 005c2e6a: FADD float ptr [ESP + 0x78]
//   XREF to: Stack[-0x7c] (READ)
// 005c2e6e: FXCH ST2
// 005c2e70: FADD float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x78] (READ)
// 005c2e74: PUSH EAX
// 005c2e75: FXCH
// 005c2e77: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0xd4] (WRITE)
// 005c2e7b: FXCH
// 005c2e7d: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0xd0] (WRITE)
// 005c2e81: PUSH EDI
//   XREF to: 03114278 (DATA)
// 005c2e82: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0xcc] (WRITE)
// 005c2e86: CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
//   XREF to: 005716b0 (UNCONDITIONAL_CALL)
// 005c2e8b: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005c2e92: FLD float ptr [ESP + 0xe4]
//   XREF to: Stack[-0x18] (READ)
// 005c2e99: ADD ESP,0xc
// 005c2e9c: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005c2ea1: PUSH EAX
//   XREF to: 03114278 (DATA)
// 005c2ea2: FSTP float ptr [ESP + 0xc4]
//   XREF to: Stack[-0x30] (WRITE)
// 005c2ea9: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005c2eae: ADD ESP,0x4
// 005c2eb1: FLD float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x30] (READ)
// 005c2eb8: FSUB float ptr [EBX + 0x24]
// 005c2ebb: FABS
// 005c2ebd: FLD1
// 005c2ebf: FCOMPP
// 005c2ec1: FNSTSW AX
// 005c2ec3: SAHF
// 005c2ec4: JC 0x005c2fab
//   XREF to: 005c2fab (CONDITIONAL_JUMP)
// 005c2eca: XOR ESI,ESI
// 005c2ecc: XOR EDI,EDI
// 005c2ece: MOV EAX,[0x006810c8]
//   Label: LAB_005c2ece
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005c2ed3: CMP ESI,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 005c2ed9: JL 0x005c2f36
//   XREF to: 005c2f36 (CONDITIONAL_JUMP)
// 005c2edb: MOV EAX,dword ptr [EBX + 0x24f8]
// 005c2ee1: MOV dword ptr [EBX + 0x1fc38],0x6
// 005c2eeb: TEST EAX,EAX
// 005c2eed: JNZ 0x005c2fb4
//   XREF to: 005c2fb4 (CONDITIONAL_JUMP)
// 005c2ef3: PUSH 0x1
//   Label: LAB_005c2ef3
// 005c2ef5: PUSH 0x14
// 005c2ef7: LEA EAX,[EBX + 0x158]
//   Label: LAB_005c2ef7
// 005c2efd: PUSH EAX
// 005c2efe: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c2f03: ADD ESP,0xc
// 005c2f06: MOV EAX,0x1
// 005c2f0b: MOV dword ptr [EBX + 0x1fc40],0x40800000
// 005c2f15: MOV ESP,EBP
// 005c2f17: POP EBP
// 005c2f18: POP EDI
// 005c2f19: POP ESI
// 005c2f1a: POP EBX
// 005c2f1b: RET
// 005c2f1c: MOV EDX,dword ptr [0x006810c8]
//   Label: LAB_005c2f1c
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005c2f22: PUSH EDX
//   XREF to: 03114278 (DATA)
// 005c2f23: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005c2f28: ADD ESP,0x4
// 005c2f2b: JMP 0x005c2fab
//   XREF to: 005c2fab (UNCONDITIONAL_JUMP)
// 005c2f30: INC ESI
//   Label: LAB_005c2f30
// 005c2f31: ADD EDI,0x4
// 005c2f34: JMP 0x005c2ece
//   XREF to: 005c2ece (UNCONDITIONAL_JUMP)
// 005c2f36: MOV EDX,dword ptr [0x0088797c]
//   Label: LAB_005c2f36
//   XREF to: 0088797c (READ)
// 005c2f3c: PUSH EDX
// 005c2f3d: MOV ECX,dword ptr [EDI + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
// 005c2f44: PUSH ECX
// 005c2f45: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005c2f4a: ADD ESP,0x8
// 005c2f4d: TEST EAX,EAX
// 005c2f4f: JZ 0x005c2f30
//   XREF to: 005c2f30 (CONDITIONAL_JUMP)
// 005c2f51: FLD float ptr [EAX + 0x20]
// 005c2f54: FSUB float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x74] (READ)
// 005c2f58: FSTP float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x50] (WRITE)
// 005c2f5f: FLD float ptr [EAX + 0x24]
// 005c2f62: FSUB float ptr [ESP + 0x80]
//   XREF to: Stack[-0x70] (READ)
// 005c2f69: FST float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x4c] (WRITE)
// 005c2f70: FMUL float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x4c] (READ)
// 005c2f77: FLD float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x50] (READ)
// 005c2f7e: FMUL ST0
// 005c2f80: FLD float ptr [EAX + 0x28]
// 005c2f83: FSUB float ptr [ESP + 0x84]
//   XREF to: Stack[-0x6c] (READ)
// 005c2f8a: FXCH
// 005c2f8c: FADDP ST2,ST0
// 005c2f8e: FST float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x48] (WRITE)
// 005c2f95: FMUL float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x48] (READ)
// 005c2f9c: FADDP
// 005c2f9e: FSQRT
// 005c2fa0: FCOMP double ptr [0x00653bc4]
//   XREF to: 00653bc4 (READ)
// 005c2fa6: FNSTSW AX
// 005c2fa8: SAHF
// 005c2fa9: JNC 0x005c2f30
//   XREF to: 005c2f30 (CONDITIONAL_JUMP)
// 005c2fab: XOR EAX,EAX
//   Label: LAB_005c2fab
// 005c2fad: MOV ESP,EBP
// 005c2faf: POP EBP
// 005c2fb0: POP EDI
// 005c2fb1: POP ESI
// 005c2fb2: POP EBX
// 005c2fb3: RET
// 005c2fb4: PUSH EBX
//   Label: LAB_005c2fb4
// 005c2fb5: MOV ESI,dword ptr [EAX + 0x154]
// 005c2fbb: PUSH EAX
// 005c2fbc: CALL dword ptr [ESI + 0x7c]
// 005c2fbf: ADD ESP,0x8
// 005c2fc2: CMP EAX,0x4
// 005c2fc5: SETZ AL
// 005c2fc8: AND EAX,0xff
// 005c2fcd: JZ 0x005c2ef3
//   XREF to: 005c2ef3 (CONDITIONAL_JUMP)
// 005c2fd3: PUSH 0x1
// 005c2fd5: PUSH 0x19
// 005c2fd7: JMP 0x005c2ef7
//   XREF to: 005c2ef7 (UNCONDITIONAL_JUMP)
