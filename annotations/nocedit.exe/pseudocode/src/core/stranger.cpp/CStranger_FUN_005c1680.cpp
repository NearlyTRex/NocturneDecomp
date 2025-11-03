// Name: core_stranger.cpp_CStranger_FUN_005c1680
// Address: 005c1680
// Address Range: [[005c1680, 005c1ef9]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c1680()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005c5b90 (005c5b90) at 005c5d36 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_005c165c = 005c19c1
//   void* switchdataD_005c166c = 005c1c12
//   TerminatedCString s_Picking_up_heavy_s_shelf_006539a0
//   TerminatedCString s_Picking_up_heavy_s_crate_006539bb
//   TerminatedCString s_s_out_of_reach_canceling_006539d6
//   TerminatedCString s_Picking_up_s_waist_level_006539fa
//   TerminatedCString s_Picking_up_s_off_ground_00653a15
//   TerminatedCString s_Rummaging_s_00653a2f
//   TerminatedCString s_core_stranger_cpp_00653a3d
//   TerminatedCString s_Hell_froze_invalid_pickU_00653a52
//   double DOUBLE_00653a7c = 0.990000000000000
//   float FLOAT_00653a84 = 0.5
//   double DOUBLE_00653a8c = 2.5
//   double DOUBLE_00653a94 = 2
//   double DOUBLE_00653a9c = 20
//   double DOUBLE_00653aa4 = 5
//   CConsole* g_CConsolePtr = 0083b1a4
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CConsole g_ConsolePtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 DAT_032613d4
//   undefined4 DAT_03f6badc
//   undefined4 DAT_03f6bb04
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_charactr.cpp_CCharacter_FUN_0042e840
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_motion.cpp_CMotionController_FUN_0052dd20
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005c1680(CStranger* param_1,
   undefined4 param_2) */

undefined4 core_stranger_cpp_CStranger_FUN_005c1680(void)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  CDemonActor *this_ptr_00;
  CDemonActor *pCVar2;
  CBoundingBox3D *pCVar3;
  CVector3f *pCVar4;
  int iVar5;
  undefined4 *puVar6;
  CVector3f *pCVar7;
  BADSPACEBASE *in_ESP;
  CVector3f *unaff_EBP;
  CDemonActor *in_stack_00000004;
  char *in_stack_00000008;
  char *format;
  CBoundingBox3D CStack_148;
  CVector3f CStack_130;
  float fStack_124;
  float fStack_120;
  undefined1 auStack_11c [28];
  CVector3f CStack_100;
  CVector3f CStack_f4;
  CVector3f CStack_e8;
  CVector3f aCStack_dc [2];
  float fStack_bc;
  CVector3f CStack_b8;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_8c [24];
  undefined1 auStack_74 [8];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_44 [8];
  float fStack_3c;
  float afStack_38 [4];
  undefined4 local_28;
  CLocation *local_24;
  int iStack_20;
  CVector3f *local_1c;
  CVector3f *local_18;
  float local_14;
  
  if ((((0.0 < in_stack_00000004[0x17a].orient_matrix.m[1].z) ||
       (in_stack_00000004[0x179].scale.x != 0)) ||
      (local_14 = (float)core_charactr_cpp_CCharacter_FUN_0042e840(),
      local_14 < (float)DOUBLE_00653a7c)) ||
     (((local_14 = core_motion_cpp_CMotionController_FUN_0052dd20
                             ((CMotionController *)(in_stack_00000004 + 1)), local_14 < 1.0 ||
       (in_stack_00000004[0x1b].field7_0x6c != 0)) ||
      (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) != 0)))) {
    return 0;
  }
  local_24 = &in_stack_00000004->location;
  local_28 = 0x40800000;
  local_18 = (CVector3f *)0x0;
  for (local_1c = (CVector3f *)0x0; (int)local_1c < (int)g_CDemonSetPtr->actor_list_ptr;
      local_1c = (CVector3f *)((int)&local_1c->x + 1)) {
    this_ptr_00 = *(CDemonActor **)((int)&local_18[0x1bc1c].y + (int)g_CDemonSetPtr->cameras);
    pCVar2 = (*this_ptr_00->vtable->getCarrier)(this_ptr_00);
    if (pCVar2 == (CDemonActor *)0x0) {
      iStack_20 = (*this_ptr_00->vtable->canPickup)(this_ptr_00,in_stack_00000004);
      switch(iStack_20) {
      case 1:
        if (in_stack_00000004[0x1b].field7_0x6c == 0) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (this_ptr_00,(CVector3f *)(auStack_74 + 4),local_18);
          fVar1 = SQRT(fStack_68 * fStack_68 +
                       (float)auStack_74._4_4_ * (float)auStack_74._4_4_ + fStack_6c * fStack_6c);
          if (fVar1 <= 0.0) {
            fStack_6c = 0.0;
            auStack_74._4_4_ = 0.0;
            fStack_68 = 0.0;
          }
          else {
            fVar1 = 1.0 / fVar1;
            auStack_74._4_4_ = (float)auStack_74._4_4_ * fVar1;
            fStack_6c = fStack_6c * fVar1;
            fStack_68 = fStack_68 * fVar1;
          }
          if (fStack_68 <= 0.0) {
            CStack_b8.y = 3.0;
            CStack_b8.z = 2.0;
            CStack_b8.x = 0.0;
            if (&CStack_130 != &CStack_b8) {
              CStack_130.x = 0.0;
              CStack_130.z = 2.0;
              CStack_130.y = 3.0;
            }
            goto LAB_005c17d2;
          }
        }
        break;
      case 2:
        if (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) == 0) {
          CStack_100.y = 3.0;
          CStack_100.z = 2.0;
          CStack_100.x = 0.0;
          if (&CStack_130 != &CStack_100) {
            CStack_130.z = 2.0;
            CStack_130.y = 3.0;
            CStack_130.x = 0.0;
          }
LAB_005c17d2:
          pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (in_stack_00000004,(CVector3f *)(auStack_8c + 4),&CStack_130);
          pCVar3 = (*this_ptr_00->vtable->getBoundingBox)(this_ptr_00,&CStack_148);
          fStack_bc = (pCVar3->min).x + (pCVar3->max).x;
          CStack_b8.x = (pCVar3->min).y + (pCVar3->max).y;
          auStack_44._0_4_ = fStack_bc * FLOAT_00653a84;
          auStack_44._4_4_ = CStack_b8.x * FLOAT_00653a84;
          CStack_b8.y = (pCVar3->min).z + (pCVar3->max).z;
          fStack_3c = CStack_b8.y * FLOAT_00653a84;
          pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (this_ptr_00,(CVector3f *)auStack_11c,(CVector3f *)auStack_44);
          CStack_f4.z = pCVar4->x - pCVar7->x;
          CStack_e8.x = pCVar4->y - pCVar7->y;
          CStack_e8.y = pCVar4->z - pCVar7->z;
          if (((ABS(CStack_e8.x) <= (float)DOUBLE_00653aa4) &&
              (fVar1 = CStack_f4.z * CStack_f4.z + CStack_e8.y * CStack_e8.y, fVar1 <= local_14)) &&
             (iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(this_ptr_00,in_stack_00000008),
             iVar5 != 0)) {
            local_1c = local_18;
            in_stack_00000004[0x179].scale.x = (int)this_ptr_00;
            local_14 = fVar1;
          }
        }
        break;
      case 3:
      case 4:
        if ((*(int *)(in_stack_00000004[0x1b].create_event + 0x38) == 0) &&
           ((iVar5 = (*this_ptr_00->vtable->canPickup)(this_ptr_00,in_stack_00000004), iVar5 != 4 ||
            ((core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        (this_ptr_00,(CVector3f *)auStack_8c,unaff_EBP),
             ABS((float)auStack_8c._0_4_) <= 1.0 &&
             (pCVar7 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                 ((CVector3f *)auStack_74,(CVector3f *)auStack_8c),
             ABS(pCVar7->y) <= (float)DOUBLE_00653a9c)))))) {
          afStack_38[0] = 0.0;
          afStack_38[1] = 3.0;
          afStack_38[2] = 2.0;
          if (&CStack_130.z != afStack_38) {
            fStack_124 = 3.0;
            fStack_120 = 2.0;
            CStack_130.z = 0.0;
          }
          goto LAB_005c17d2;
        }
      }
    }
    local_18 = (CVector3f *)&local_18->y;
  }
  iVar5 = in_stack_00000004[0x179].scale.x;
  if (iVar5 == 0) {
    return 0;
  }
  puVar6 = (undefined4 *)(**(code **)(*(int *)(iVar5 + 0x154) + 0x14))();
  if (in_stack_00000004[0x17a].create_event + 0x3c != (char *)puVar6) {
    *(undefined4 *)(in_stack_00000004[0x17a].create_event + 0x3c) = *puVar6;
    *(undefined4 *)(in_stack_00000004[0x17a].create_event + 0x40) = puVar6[1];
    *(undefined4 *)(in_stack_00000004[0x17a].create_event + 0x44) = puVar6[2];
  }
  if (in_stack_00000004[0x17a].create_event + 0x48 != (char *)(puVar6 + 3)) {
    *(undefined4 *)(in_stack_00000004[0x17a].create_event + 0x48) = puVar6[3];
    *(undefined4 *)(in_stack_00000004[0x17a].create_event + 0x4c) = puVar6[4];
    *(undefined4 *)(in_stack_00000004[0x17a].create_event + 0x50) = puVar6[5];
  }
  auStack_74._4_4_ =
       *(float *)(in_stack_00000004[0x17a].create_event + 0x3c) +
       *(float *)(in_stack_00000004[0x17a].create_event + 0x48);
  fStack_6c = *(float *)(in_stack_00000004[0x17a].create_event + 0x40) +
              *(float *)(in_stack_00000004[0x17a].create_event + 0x4c);
  auStack_44._4_4_ = (float)auStack_74._4_4_ * FLOAT_00653a84;
  fStack_68 = *(float *)(in_stack_00000004[0x17a].create_event + 0x44) +
              *(float *)(in_stack_00000004[0x17a].create_event + 0x50);
  fStack_3c = fStack_6c * FLOAT_00653a84;
  afStack_38[0] = fStack_68 * FLOAT_00653a84;
  pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     ((CDemonActor *)in_stack_00000004[0x179].scale.x,&CStack_e8,
                      (CVector3f *)(auStack_44 + 4));
  pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (in_stack_00000004,aCStack_dc,pCVar7);
  if ((CVector3f *)(in_stack_00000004[0x17a].create_event + 0x30) != pCVar7) {
    ((CVector3f *)(in_stack_00000004[0x17a].create_event + 0x30))->x = pCVar7->x;
    *(float *)(in_stack_00000004[0x17a].create_event + 0x34) = pCVar7->y;
    *(float *)(in_stack_00000004[0x17a].create_event + 0x38) = pCVar7->z;
  }
  switch(afStack_38[2]) {
  case 1.4013e-45:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)(in_stack_00000004 + 1));
    iVar5 = in_stack_00000004[0x179].scale.x;
    format = "Rummaging %s\n";
    break;
  case 2.8026e-45:
  case 4.2039e-45:
  case 5.60519e-45:
    iVar5 = in_stack_00000004[0x179].scale.x;
    if ((iVar5 == 0) || (iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x7c))(), iVar5 != 4)) {
      this_ptr = (CDeformableModelInstance *)(in_stack_00000004 + 1);
      if (*(float *)(in_stack_00000004[0x17a].create_event + 0x34) <= (float)DOUBLE_00653a94) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)this_ptr);
        iVar5 = in_stack_00000004[0x179].scale.x;
        format = "Picking up %s off ground\n";
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20(this_ptr);
        core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20(this_ptr);
        fStack_60 = CStack_b8.y - fStack_a8;
        fStack_64 = CStack_b8.x - fStack_ac;
        fStack_5c = CStack_b8.z - fStack_a4;
        fStack_124 = fStack_ac - *(float *)(in_stack_00000004[0x17a].create_event + 0x30);
        fStack_120 = fStack_a8 - *(float *)(in_stack_00000004[0x17a].create_event + 0x34);
        auStack_11c._0_4_ = fStack_a4 - *(float *)(in_stack_00000004[0x17a].create_event + 0x38);
        if ((float)DOUBLE_00653a94 <
            ABS(SQRT(fStack_5c * fStack_5c + fStack_64 * fStack_64 + fStack_60 * fStack_60) -
                SQRT((float)auStack_11c._0_4_ * (float)auStack_11c._0_4_ +
                     fStack_124 * fStack_124 + fStack_120 * fStack_120))) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s out of reach - canceling pickup\n",
                     in_stack_00000004[0x179].scale.x);
          in_stack_00000004[0x179].scale.x = 0;
          return 0;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)this_ptr);
        iVar5 = in_stack_00000004[0x179].scale.x;
        format = "Picking up %s waist level\n";
      }
    }
    else {
      pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         ((CDemonActor *)in_stack_00000004[0x179].scale.x,&CStack_f4,
                          &(in_stack_00000004->location).position);
      fVar1 = *(float *)(in_stack_00000004[0x17a].create_event + 0x34);
      *(uint *)(in_stack_00000004[0x17a].create_event + 0x20) = (uint)(0.0 < pCVar7->z);
      if ((float)DOUBLE_00653a8c < fVar1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(in_stack_00000004 + 1));
        pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (in_stack_00000004,(CVector3f *)(auStack_11c + 4),
                            (CVector3f *)(in_stack_00000004[0x179].scale.x + 0x20));
        if ((CVector3f *)(in_stack_00000004[0x17a].create_event + 0x30) != pCVar7) {
          ((CVector3f *)(in_stack_00000004[0x17a].create_event + 0x30))->x = pCVar7->x;
          *(float *)(in_stack_00000004[0x17a].create_event + 0x34) = pCVar7->y;
          *(float *)(in_stack_00000004[0x17a].create_event + 0x38) = pCVar7->z;
        }
        iVar5 = in_stack_00000004[0x179].scale.x;
        format = "Picking up heavy %s shelf\n";
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(in_stack_00000004 + 1));
        iVar5 = in_stack_00000004[0x179].scale.x;
        format = "Picking up heavy %s crate\n";
      }
    }
    break;
  default:
    g_CurrentFilename = "..\\core\\stranger.cpp";
    g_CurrentLineNumber = 0xd3a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze - invalid pickUpType: %d",afStack_38[2]);
    goto LAB_005c1c40;
  }
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,format,iVar5);
LAB_005c1c40:
  in_stack_00000004[0x17a].orient_matrix.m[1].z = 4.0;
  in_stack_00000004[0x17a].orient_matrix.m[1].x = 5.60519e-45;
  return 1;
}


// Assembly code:
// 005c1680: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c1680
// 005c1681: PUSH ESI
// 005c1682: PUSH EDI
// 005c1683: PUSH EBP
// 005c1684: MOV EBP,ESP
// 005c1686: SUB ESP,0x160
// 005c168c: AND ESP,0xfffffff8
// 005c168f: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c1692: FLD float ptr [ESI + 0x1fc40]
// 005c1698: FLDZ
// 005c169a: FCOMPP
// 005c169c: FNSTSW AX
// 005c169e: SAHF
// 005c169f: JC 0x005c16ab
//   XREF to: 005c16ab (CONDITIONAL_JUMP)
// 005c16a1: MOV EDX,dword ptr [ESI + 0x1fba0]
// 005c16a7: TEST EDX,EDX
// 005c16a9: JZ 0x005c16b4
//   XREF to: 005c16b4 (CONDITIONAL_JUMP)
// 005c16ab: XOR EAX,EAX
//   Label: LAB_005c16ab
// 005c16ad: MOV ESP,EBP
// 005c16af: POP EBP
// 005c16b0: POP EDI
// 005c16b1: POP ESI
// 005c16b2: POP EBX
// 005c16b3: RET
// 005c16b4: PUSH EDX
//   Label: LAB_005c16b4
// 005c16b5: PUSH ESI
// 005c16b6: CALL core_charactr.cpp_CCharacter_FUN_0042e840
//   XREF to: 0042e840 (UNCONDITIONAL_CALL)
// 005c16bb: MOV dword ptr [ESP + 0x164],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005c16c2: FLD float ptr [ESP + 0x164]
//   XREF to: Stack[-0x14] (READ)
// 005c16c9: ADD ESP,0x8
// 005c16cc: FCOMP double ptr [0x00653a7c]
//   XREF to: 00653a7c (READ)
// 005c16d2: FNSTSW AX
// 005c16d4: SAHF
// 005c16d5: JC 0x005c16ab
//   XREF to: 005c16ab (CONDITIONAL_JUMP)
// 005c16d7: PUSH 0x0
// 005c16d9: LEA EAX,[ESI + 0x158]
// 005c16df: PUSH EAX
// 005c16e0: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005c16e5: MOV dword ptr [ESP + 0x164],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005c16ec: FLD float ptr [ESP + 0x164]
//   XREF to: Stack[-0x14] (READ)
// 005c16f3: FLD1
// 005c16f5: ADD ESP,0x8
// 005c16f8: FCOMPP
// 005c16fa: FNSTSW AX
// 005c16fc: SAHF
// 005c16fd: JA 0x005c16ab
//   XREF to: 005c16ab (CONDITIONAL_JUMP)
// 005c16ff: MOV ECX,dword ptr [ESI + 0x24b4]
// 005c1705: TEST ECX,ECX
// 005c1707: JNZ 0x005c16ab
//   XREF to: 005c16ab (CONDITIONAL_JUMP)
// 005c1709: CMP dword ptr [ESI + 0x24f8],0x0
// 005c1710: JNZ 0x005c16ab
//   XREF to: 005c16ab (CONDITIONAL_JUMP)
// 005c1712: MOV EDI,0x40800000
// 005c1717: MOV dword ptr [ESP + 0x154],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 005c171e: LEA EAX,[ESI + 0x20]
// 005c1721: MOV dword ptr [ESP + 0x158],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005c1728: MOV dword ptr [ESP + 0x148],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 005c172f: MOV dword ptr [ESP + 0x14c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005c1736: MOV EAX,[0x006810c8]
//   Label: LAB_005c1736
//   XREF to: 006810c8 (READ)
// 005c173b: MOV EDX,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x1c] (READ)
// 005c1742: CMP EDX,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 005c1748: JGE 0x005c1af5
//   XREF to: 005c1af5 (CONDITIONAL_JUMP)
// 005c174e: ADD EAX,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x18] (READ)
// 005c1755: MOV EBX,dword ptr [EAX + 0x14d158]
//   XREF to: 032613d0 (DATA)
//   XREF to: 032613d4 (DATA)
// 005c175b: PUSH EBX
// 005c175c: MOV EAX,dword ptr [EBX + 0x154]
// 005c1762: CALL dword ptr [EAX + 0x8c]
// 005c1768: ADD ESP,0x4
// 005c176b: TEST EAX,EAX
// 005c176d: JZ 0x005c1acf
//   XREF to: 005c1acf (CONDITIONAL_JUMP)
// 005c1773: MOV EBX,dword ptr [ESP + 0x154]
//   Label: default
// 005c177a: MOV ECX,dword ptr [ESP + 0x158]
// 005c1781: INC EBX
// 005c1782: ADD ECX,0x4
// 005c1785: MOV dword ptr [ESP + 0x154],EBX
// 005c178c: MOV dword ptr [ESP + 0x158],ECX
// 005c1793: JMP 0x005c1736
//   XREF to: 005c1736 (UNCONDITIONAL_JUMP)
// 005c1795: MOV EDI,dword ptr [ESI + 0x24f8]
//   Label: caseD_2
// 005c179b: TEST EDI,EDI
// 005c179d: JNZ 0x005c1773
//   XREF to: 005c1773 (CONDITIONAL_JUMP)
// 005c179f: MOV EDX,0x40400000
// 005c17a4: MOV ECX,0x40000000
// 005c17a9: LEA EAX,[ESP + 0x64]
// 005c17ad: MOV dword ptr [ESP + 0x64],EDI
// 005c17b1: MOV dword ptr [ESP + 0x68],EDX
// 005c17b5: LEA EDX,[ESP + 0x34]
// 005c17b9: MOV dword ptr [ESP + 0x6c],ECX
// 005c17bd: CMP EDX,EAX
// 005c17bf: JZ 0x005c17d2
//   XREF to: 005c17d2 (CONDITIONAL_JUMP)
// 005c17c1: MOV EAX,0x40400000
// 005c17c6: MOV dword ptr [ESP + 0x3c],ECX
// 005c17ca: MOV dword ptr [ESP + 0x34],EDI
// 005c17ce: MOV dword ptr [ESP + 0x38],EAX
// 005c17d2: LEA EAX,[ESP + 0x34]
//   Label: LAB_005c17d2
// 005c17d6: PUSH EAX
// 005c17d7: LEA EAX,[ESP + 0xe0]
// 005c17de: PUSH EAX
// 005c17df: PUSH ESI
// 005c17e0: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005c17e5: ADD ESP,0xc
// 005c17e8: LEA EDX,[ESP + 0x1c]
// 005c17ec: PUSH EDX
// 005c17ed: MOV EDI,EAX
// 005c17ef: MOV EAX,dword ptr [EBX + 0x154]
// 005c17f5: PUSH EBX
// 005c17f6: CALL dword ptr [EAX + 0x14]
// 005c17f9: LEA EDX,[EAX + 0xc]
// 005c17fc: FLD float ptr [EAX]
// 005c17fe: FADD float ptr [EDX]
// 005c1800: ADD ESP,0x8
// 005c1803: FST float ptr [ESP + 0xa0]
// 005c180a: FLD float ptr [EAX + 0x4]
// 005c180d: FADD float ptr [EDX + 0x4]
// 005c1810: FXCH
// 005c1812: FLD float ptr [0x00653a84]
//   XREF to: 00653a84 (READ)
// 005c1818: FXCH
// 005c181a: FMUL ST1
// 005c181c: FXCH ST2
// 005c181e: FST float ptr [ESP + 0xa4]
// 005c1825: FMUL ST1
// 005c1827: FLD float ptr [EAX + 0x8]
// 005c182a: FADD float ptr [EDX + 0x8]
// 005c182d: LEA EAX,[ESP + 0x118]
// 005c1834: FST float ptr [ESP + 0xa8]
// 005c183b: FMULP ST2
// 005c183d: PUSH EAX
// 005c183e: LEA EAX,[ESP + 0x44]
// 005c1842: FXCH ST2
// 005c1844: FSTP float ptr [ESP + 0x11c]
// 005c184b: PUSH EAX
// 005c184c: FXCH
// 005c184e: FSTP float ptr [ESP + 0x124]
// 005c1855: PUSH EBX
// 005c1856: FSTP float ptr [ESP + 0x12c]
// 005c185d: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005c1862: FLD float ptr [EAX]
// 005c1864: FSUB float ptr [EDI]
// 005c1866: ADD ESP,0xc
// 005c1869: FSTP float ptr [ESP + 0x70]
// 005c186d: FLD float ptr [EAX + 0x4]
// 005c1870: FSUB float ptr [EDI + 0x4]
// 005c1873: FST float ptr [ESP + 0x74]
// 005c1877: FLD float ptr [EAX + 0x8]
// 005c187a: FXCH
// 005c187c: FABS
// 005c187e: FXCH
// 005c1880: FSUB float ptr [EDI + 0x8]
// 005c1883: FSTP float ptr [ESP + 0x78]
// 005c1887: FCOMP double ptr [0x00653aa4]
//   XREF to: 00653aa4 (READ)
// 005c188d: FNSTSW AX
// 005c188f: SAHF
// 005c1890: JA 0x005c1773
//   XREF to: 005c1773 (CONDITIONAL_JUMP)
// 005c1896: FLD float ptr [ESP + 0x78]
// 005c189a: FMUL ST0
// 005c189c: FLD float ptr [ESP + 0x70]
// 005c18a0: FMUL ST0
// 005c18a2: FADDP
// 005c18a4: FST float ptr [ESP + 0x150]
// 005c18ab: FCOMP float ptr [ESP + 0x148]
// 005c18b2: FNSTSW AX
// 005c18b4: SAHF
// 005c18b5: JA 0x005c1773
//   XREF to: 005c1773 (CONDITIONAL_JUMP)
// 005c18bb: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005c18be: PUSH EDX
// 005c18bf: PUSH EBX
// 005c18c0: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005c18c5: ADD ESP,0x8
// 005c18c8: TEST EAX,EAX
// 005c18ca: JZ 0x005c1773
//   XREF to: 005c1773 (CONDITIONAL_JUMP)
// 005c18d0: MOV EAX,dword ptr [ESP + 0x150]
// 005c18d7: MOV dword ptr [ESP + 0x148],EAX
// 005c18de: MOV EAX,dword ptr [ESP + 0x144]
// 005c18e5: MOV dword ptr [ESI + 0x1fba0],EBX
// 005c18eb: MOV dword ptr [ESP + 0x140],EAX
// 005c18f2: JMP 0x005c1773
//   XREF to: 005c1773 (UNCONDITIONAL_JUMP)
// 005c18f7: CMP dword ptr [ESI + 0x24f8],0x0
//   Label: caseD_4
// 005c18fe: JNZ 0x005c1773
//   XREF to: 005c1773 (CONDITIONAL_JUMP)
// 005c1904: PUSH ESI
// 005c1905: MOV EAX,dword ptr [EBX + 0x154]
// 005c190b: PUSH EBX
// 005c190c: CALL dword ptr [EAX + 0x7c]
// 005c190f: ADD ESP,0x8
// 005c1912: CMP EAX,0x4
// 005c1915: SETZ AL
// 005c1918: AND EAX,0xff
// 005c191d: JZ 0x005c197a
//   XREF to: 005c197a (CONDITIONAL_JUMP)
// 005c191f: MOV EAX,dword ptr [ESP + 0x14c]
// 005c1926: PUSH EAX
// 005c1927: LEA EAX,[ESP + 0xd4]
// 005c192e: PUSH EAX
// 005c192f: PUSH EBX
// 005c1930: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005c1935: ADD ESP,0xc
// 005c1938: FLD float ptr [ESP + 0xd0]
// 005c193f: FABS
// 005c1941: FLD1
// 005c1943: FCOMPP
// 005c1945: FNSTSW AX
// 005c1947: SAHF
// 005c1948: JC 0x005c1773
//   XREF to: 005c1773 (CONDITIONAL_JUMP)
// 005c194e: LEA EAX,[ESP + 0xd0]
// 005c1955: PUSH EAX
// 005c1956: LEA EAX,[ESP + 0xec]
// 005c195d: PUSH EAX
// 005c195e: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005c1963: FLD float ptr [EAX + 0x4]
// 005c1966: FABS
// 005c1968: ADD ESP,0x8
// 005c196b: FCOMP double ptr [0x00653a9c]
//   XREF to: 00653a9c (READ)
// 005c1971: FNSTSW AX
// 005c1973: SAHF
// 005c1974: JA 0x005c1773
//   XREF to: 005c1773 (CONDITIONAL_JUMP)
// 005c197a: MOV ECX,0x40400000
//   Label: LAB_005c197a
// 005c197f: MOV EDI,0x40000000
// 005c1984: XOR EDX,EDX
// 005c1986: LEA EAX,[ESP + 0x124]
// 005c198d: MOV dword ptr [ESP + 0x124],EDX
// 005c1994: MOV dword ptr [ESP + 0x128],ECX
// 005c199b: LEA EDX,[ESP + 0x34]
// 005c199f: MOV dword ptr [ESP + 0x12c],EDI
// 005c19a6: CMP EDX,EAX
// 005c19a8: JZ 0x005c17d2
//   XREF to: 005c17d2 (CONDITIONAL_JUMP)
// 005c19ae: MOV dword ptr [ESP + 0x38],ECX
// 005c19b2: XOR EAX,EAX
// 005c19b4: MOV dword ptr [ESP + 0x3c],EDI
// 005c19b8: MOV dword ptr [ESP + 0x34],EAX
// 005c19bc: JMP 0x005c17d2
//   XREF to: 005c17d2 (UNCONDITIONAL_JUMP)
// 005c19c1: CMP dword ptr [ESI + 0x24b4],0x0
//   Label: caseD_1
// 005c19c8: JNZ 0x005c1773
//   XREF to: 005c1773 (CONDITIONAL_JUMP)
// 005c19ce: MOV EDI,dword ptr [ESP + 0x14c]
// 005c19d5: PUSH EDI
// 005c19d6: LEA EAX,[ESP + 0xf8]
// 005c19dd: PUSH EAX
// 005c19de: PUSH EBX
// 005c19df: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005c19e4: ADD ESP,0xc
// 005c19e7: FLD float ptr [ESP + 0xf8]
// 005c19ee: FMUL ST0
// 005c19f0: FLD float ptr [ESP + 0xf4]
// 005c19f7: FMUL ST0
// 005c19f9: FADDP
// 005c19fb: FLD float ptr [ESP + 0xfc]
// 005c1a02: FMUL ST0
// 005c1a04: FADDP
// 005c1a06: FSQRT
// 005c1a08: FST float ptr [ESP]
// 005c1a0b: FLDZ
// 005c1a0d: FCOMPP
// 005c1a0f: FNSTSW AX
// 005c1a11: SAHF
// 005c1a12: JNC 0x005c1ab6
//   XREF to: 005c1ab6 (CONDITIONAL_JUMP)
// 005c1a18: FLD1
// 005c1a1a: FLD float ptr [ESP + 0xf4]
// 005c1a21: FXCH
// 005c1a23: FDIV float ptr [ESP]
// 005c1a26: FXCH
// 005c1a28: FMUL ST1
// 005c1a2a: FLD float ptr [ESP + 0xf8]
// 005c1a31: FMUL ST2
// 005c1a33: FLD float ptr [ESP + 0xfc]
// 005c1a3a: FMULP ST3
// 005c1a3c: FXCH
// 005c1a3e: FSTP float ptr [ESP + 0xf4]
// 005c1a45: FSTP float ptr [ESP + 0xf8]
// 005c1a4c: FSTP float ptr [ESP + 0xfc]
// 005c1a53: FLD float ptr [ESP + 0xfc]
//   Label: LAB_005c1a53
// 005c1a5a: FLDZ
// 005c1a5c: FCOMPP
// 005c1a5e: FNSTSW AX
// 005c1a60: SAHF
// 005c1a61: JC 0x005c1773
//   XREF to: 005c1773 (CONDITIONAL_JUMP)
// 005c1a67: MOV EAX,0x40400000
// 005c1a6c: MOV EDX,0x40000000
// 005c1a71: XOR EDI,EDI
// 005c1a73: MOV dword ptr [ESP + 0xb0],EAX
// 005c1a7a: MOV dword ptr [ESP + 0xb4],EDX
// 005c1a81: LEA EDX,[ESP + 0xac]
// 005c1a88: LEA EAX,[ESP + 0x34]
// 005c1a8c: MOV dword ptr [ESP + 0xac],EDI
// 005c1a93: CMP EAX,EDX
// 005c1a95: JZ 0x005c17d2
//   XREF to: 005c17d2 (CONDITIONAL_JUMP)
// 005c1a9b: MOV EAX,0x40000000
// 005c1aa0: MOV dword ptr [ESP + 0x34],EDI
// 005c1aa4: MOV EDI,0x40400000
// 005c1aa9: MOV dword ptr [ESP + 0x3c],EAX
// 005c1aad: MOV dword ptr [ESP + 0x38],EDI
// 005c1ab1: JMP 0x005c17d2
//   XREF to: 005c17d2 (UNCONDITIONAL_JUMP)
// 005c1ab6: XOR EAX,EAX
//   Label: LAB_005c1ab6
// 005c1ab8: MOV dword ptr [ESP + 0xf8],EAX
// 005c1abf: MOV dword ptr [ESP + 0xf4],EAX
// 005c1ac6: MOV dword ptr [ESP + 0xfc],EAX
// 005c1acd: JMP 0x005c1a53
//   XREF to: 005c1a53 (UNCONDITIONAL_JUMP)
// 005c1acf: PUSH ESI
//   Label: LAB_005c1acf
// 005c1ad0: MOV EAX,dword ptr [EBX + 0x154]
// 005c1ad6: PUSH EBX
// 005c1ad7: CALL dword ptr [EAX + 0x7c]
// 005c1ada: ADD ESP,0x8
// 005c1add: MOV dword ptr [ESP + 0x144],EAX
// 005c1ae4: DEC EAX
// 005c1ae5: CMP EAX,0x3
// 005c1ae8: JA 0x005c1773
//   XREF to: 005c1773 (CONDITIONAL_JUMP)
// 005c1aee: JMP dword ptr [EAX*0x4 + 0x5c165c]
//   Label: switchD
//   XREF to: 005c1795 (COMPUTED_JUMP)
//   XREF to: 005c18f7 (COMPUTED_JUMP)
//   XREF to: 005c19c1 (COMPUTED_JUMP)
//   XREF to: 005c165c (DATA)
// 005c1af5: MOV EBX,dword ptr [ESI + 0x1fba0]
//   Label: LAB_005c1af5
// 005c1afb: TEST EBX,EBX
// 005c1afd: JZ 0x005c16ab
//   XREF to: 005c16ab (CONDITIONAL_JUMP)
// 005c1b03: LEA EDX,[ESP + 0x4]
//   XREF to: Stack[-0x16c] (DATA)
// 005c1b07: PUSH EDX
// 005c1b08: MOV EAX,EBX
// 005c1b0a: MOV EBX,dword ptr [EBX + 0x154]
// 005c1b10: PUSH EAX
// 005c1b11: CALL dword ptr [EBX + 0x14]
// 005c1b14: ADD ESP,0x8
// 005c1b17: LEA EDX,[ESI + 0x1fca4]
// 005c1b1d: MOV EBX,EAX
// 005c1b1f: MOV EDI,EDX
// 005c1b21: CMP EDX,EAX
// 005c1b23: JZ 0x005c1b35
//   XREF to: 005c1b35 (CONDITIONAL_JUMP)
// 005c1b25: MOV ECX,dword ptr [EAX]
// 005c1b27: MOV dword ptr [EDX],ECX
// 005c1b29: MOV ECX,dword ptr [EAX + 0x4]
// 005c1b2c: MOV dword ptr [EDX + 0x4],ECX
// 005c1b2f: MOV ECX,dword ptr [EAX + 0x8]
// 005c1b32: MOV dword ptr [EDX + 0x8],ECX
// 005c1b35: LEA EAX,[EBX + 0xc]
//   Label: LAB_005c1b35
// 005c1b38: LEA EDX,[EDI + 0xc]
// 005c1b3b: CMP EDX,EAX
// 005c1b3d: JZ 0x005c1b4f
//   XREF to: 005c1b4f (CONDITIONAL_JUMP)
// 005c1b3f: MOV ECX,dword ptr [EAX]
// 005c1b41: MOV dword ptr [EDX],ECX
// 005c1b43: MOV ECX,dword ptr [EAX + 0x4]
// 005c1b46: MOV dword ptr [EDX + 0x4],ECX
// 005c1b49: MOV ECX,dword ptr [EAX + 0x8]
// 005c1b4c: MOV dword ptr [EDX + 0x8],ECX
// 005c1b4f: LEA EDX,[ESI + 0x1fca4]
//   Label: LAB_005c1b4f
// 005c1b55: LEA EAX,[ESI + 0x1fcb0]
// 005c1b5b: FLD float ptr [EDX]
// 005c1b5d: FADD float ptr [EAX]
// 005c1b5f: FST float ptr [ESP + 0x100]
// 005c1b66: FLD float ptr [EDX + 0x4]
// 005c1b69: FADD float ptr [EAX + 0x4]
// 005c1b6c: FXCH
// 005c1b6e: FLD float ptr [0x00653a84]
//   XREF to: 00653a84 (READ)
// 005c1b74: FXCH
// 005c1b76: FMUL ST1
// 005c1b78: FXCH ST2
// 005c1b7a: FST float ptr [ESP + 0x104]
// 005c1b81: FLD float ptr [EDX + 0x8]
// 005c1b84: FADD float ptr [EAX + 0x8]
// 005c1b87: FXCH
// 005c1b89: FMUL ST2
// 005c1b8b: FXCH
// 005c1b8d: FST float ptr [ESP + 0x108]
// 005c1b94: FMULP ST2
// 005c1b96: LEA EAX,[ESP + 0x130]
// 005c1b9d: FXCH ST2
// 005c1b9f: FSTP float ptr [ESP + 0x130]
// 005c1ba6: PUSH EAX
// 005c1ba7: LEA EAX,[ESP + 0x8c]
// 005c1bae: FXCH
// 005c1bb0: FSTP float ptr [ESP + 0x138]
// 005c1bb7: PUSH EAX
// 005c1bb8: FSTP float ptr [ESP + 0x140]
// 005c1bbf: MOV EDI,dword ptr [ESI + 0x1fba0]
// 005c1bc5: PUSH EDI
// 005c1bc6: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005c1bcb: ADD ESP,0xc
// 005c1bce: PUSH EAX
// 005c1bcf: LEA EAX,[ESP + 0x98]
// 005c1bd6: PUSH EAX
// 005c1bd7: PUSH ESI
// 005c1bd8: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005c1bdd: LEA EDX,[ESI + 0x1fc98]
// 005c1be3: ADD ESP,0xc
// 005c1be6: CMP EDX,EAX
// 005c1be8: JZ 0x005c1bfa
//   XREF to: 005c1bfa (CONDITIONAL_JUMP)
// 005c1bea: MOV ECX,dword ptr [EAX]
// 005c1bec: MOV dword ptr [EDX],ECX
// 005c1bee: MOV ECX,dword ptr [EAX + 0x4]
// 005c1bf1: MOV dword ptr [EDX + 0x4],ECX
// 005c1bf4: MOV ECX,dword ptr [EAX + 0x8]
// 005c1bf7: MOV dword ptr [EDX + 0x8],ECX
// 005c1bfa: MOV EAX,dword ptr [ESP + 0x140]
//   Label: LAB_005c1bfa
// 005c1c01: DEC EAX
// 005c1c02: CMP EAX,0x3
// 005c1c05: JA 0x005c1ecb
//   XREF to: 005c1ecb (CONDITIONAL_JUMP)
// 005c1c0b: JMP dword ptr [EAX*0x4 + 0x5c166c]
//   Label: switchD
//   XREF to: 005c1c12 (COMPUTED_JUMP)
//   XREF to: 005c1c60 (COMPUTED_JUMP)
//   XREF to: 005c166c (DATA)
// 005c1c12: PUSH 0x1
//   Label: caseD_1
// 005c1c14: PUSH 0x1b
// 005c1c16: LEA EAX,[ESI + 0x158]
// 005c1c1c: PUSH EAX
// 005c1c1d: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c1c22: ADD ESP,0xc
// 005c1c25: MOV EDX,dword ptr [ESI + 0x1fba0]
// 005c1c2b: PUSH EDX
// 005c1c2c: PUSH 0x653a2f
//   XREF to: 00653a2f (DATA)
// 005c1c31: MOV ECX,dword ptr [0x0066e8e0]
//   Label: LAB_005c1c31
//   XREF to: 0066e8e0 (READ)
// 005c1c37: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 005c1c38: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   Label: LAB_005c1c38
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005c1c3d: ADD ESP,0xc
// 005c1c40: MOV dword ptr [ESI + 0x1fc40],0x40800000
//   Label: LAB_005c1c40
// 005c1c4a: MOV EAX,0x1
// 005c1c4f: MOV dword ptr [ESI + 0x1fc38],0x4
// 005c1c59: MOV ESP,EBP
// 005c1c5b: POP EBP
// 005c1c5c: POP EDI
// 005c1c5d: POP ESI
// 005c1c5e: POP EBX
// 005c1c5f: RET
// 005c1c60: MOV EAX,dword ptr [ESI + 0x1fba0]
//   Label: caseD_4
// 005c1c66: TEST EAX,EAX
// 005c1c68: JNZ 0x005c1d99
//   XREF to: 005c1d99 (CONDITIONAL_JUMP)
// 005c1c6e: FLD float ptr [ESI + 0x1fc9c]
//   Label: LAB_005c1c6e
// 005c1c74: LEA EBX,[ESI + 0x158]
// 005c1c7a: FCOMP double ptr [0x00653a94]
//   XREF to: 00653a94 (READ)
// 005c1c80: FNSTSW AX
// 005c1c82: SAHF
// 005c1c83: JBE 0x005c1ea6
//   XREF to: 005c1ea6 (CONDITIONAL_JUMP)
// 005c1c89: MOV EAX,[0x03f6bb04]
//   XREF to: 03f6bb04 (READ)
// 005c1c8e: PUSH EAX
// 005c1c8f: LEA EAX,[ESP + 0xbc]
// 005c1c96: PUSH EAX
// 005c1c97: PUSH EBX
// 005c1c98: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005c1c9d: ADD ESP,0xc
// 005c1ca0: MOV EDX,dword ptr [0x03f6badc]
//   XREF to: 03f6badc (READ)
// 005c1ca6: PUSH EDX
// 005c1ca7: LEA EAX,[ESP + 0xc8]
// 005c1cae: PUSH EAX
// 005c1caf: PUSH EBX
// 005c1cb0: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005c1cb5: ADD ESP,0xc
// 005c1cb8: FLD float ptr [ESP + 0xb8]
// 005c1cbf: FLD float ptr [ESP + 0xbc]
// 005c1cc6: FSUB float ptr [ESP + 0xc8]
// 005c1ccd: FXCH
// 005c1ccf: FSUB float ptr [ESP + 0xc4]
// 005c1cd6: FXCH
// 005c1cd8: FST float ptr [ESP + 0x110]
// 005c1cdf: FMUL float ptr [ESP + 0x110]
// 005c1ce6: FXCH
// 005c1ce8: FST float ptr [ESP + 0x10c]
// 005c1cef: FMUL float ptr [ESP + 0x10c]
// 005c1cf6: FLD float ptr [ESP + 0xc0]
// 005c1cfd: FSUB float ptr [ESP + 0xcc]
// 005c1d04: FXCH
// 005c1d06: FADDP ST2,ST0
// 005c1d08: FST float ptr [ESP + 0x114]
// 005c1d0f: FMUL float ptr [ESP + 0x114]
// 005c1d16: FADDP
// 005c1d18: FSQRT
// 005c1d1a: LEA EAX,[ESI + 0x1fc98]
// 005c1d20: FLD float ptr [ESP + 0xc4]
// 005c1d27: FSUB float ptr [EAX]
// 005c1d29: FLD float ptr [ESP + 0xc8]
// 005c1d30: FXCH
// 005c1d32: FSTP float ptr [ESP + 0x4c]
// 005c1d36: FSUB float ptr [EAX + 0x4]
// 005c1d39: FST float ptr [ESP + 0x50]
// 005c1d3d: FMUL float ptr [ESP + 0x50]
// 005c1d41: FLD float ptr [ESP + 0x4c]
// 005c1d45: FMUL ST0
// 005c1d47: FLD float ptr [ESP + 0xcc]
// 005c1d4e: FSUB float ptr [EAX + 0x8]
// 005c1d51: FXCH
// 005c1d53: FADDP ST2,ST0
// 005c1d55: FST float ptr [ESP + 0x54]
// 005c1d59: FMUL float ptr [ESP + 0x54]
// 005c1d5d: FADDP
// 005c1d5f: FSQRT
// 005c1d61: FSUBP
// 005c1d63: FABS
// 005c1d65: FCOMP double ptr [0x00653a94]
//   XREF to: 00653a94 (READ)
// 005c1d6b: FNSTSW AX
// 005c1d6d: SAHF
// 005c1d6e: JA 0x005c1e79
//   XREF to: 005c1e79 (CONDITIONAL_JUMP)
// 005c1d74: PUSH 0x1
// 005c1d76: PUSH 0x15
// 005c1d78: PUSH EBX
// 005c1d79: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c1d7e: ADD ESP,0xc
// 005c1d81: MOV ECX,dword ptr [ESI + 0x1fba0]
// 005c1d87: PUSH ECX
// 005c1d88: PUSH 0x6539fa
//   XREF to: 006539fa (DATA)
// 005c1d8d: MOV EBX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005c1d93: PUSH EBX
//   XREF to: 0083b1a4 (DATA)
// 005c1d94: JMP 0x005c1c38
//   XREF to: 005c1c38 (UNCONDITIONAL_JUMP)
// 005c1d99: PUSH ESI
//   Label: LAB_005c1d99
// 005c1d9a: MOV EDX,dword ptr [EAX + 0x154]
// 005c1da0: PUSH EAX
// 005c1da1: CALL dword ptr [EDX + 0x7c]
// 005c1da4: ADD ESP,0x8
// 005c1da7: CMP EAX,0x4
// 005c1daa: SETZ AL
// 005c1dad: AND EAX,0xff
// 005c1db2: JZ 0x005c1c6e
//   XREF to: 005c1c6e (CONDITIONAL_JUMP)
// 005c1db8: LEA EAX,[ESI + 0x20]
// 005c1dbb: PUSH EAX
// 005c1dbc: LEA EAX,[ESP + 0x80]
// 005c1dc3: PUSH EAX
// 005c1dc4: MOV EBX,dword ptr [ESI + 0x1fba0]
// 005c1dca: PUSH EBX
// 005c1dcb: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005c1dd0: FLD float ptr [EAX + 0x8]
// 005c1dd3: FLDZ
// 005c1dd5: ADD ESP,0xc
// 005c1dd8: FCOMPP
// 005c1dda: FNSTSW AX
// 005c1ddc: SAHF
// 005c1ddd: JNC 0x005c1e51
//   XREF to: 005c1e51 (CONDITIONAL_JUMP)
// 005c1ddf: MOV EAX,0x1
// 005c1de4: FLD float ptr [ESI + 0x1fc9c]
//   Label: LAB_005c1de4
// 005c1dea: LEA EDX,[ESI + 0x158]
// 005c1df0: MOV dword ptr [ESI + 0x1fc88],EAX
// 005c1df6: FCOMP double ptr [0x00653a8c]
//   XREF to: 00653a8c (READ)
// 005c1dfc: FNSTSW AX
// 005c1dfe: SAHF
// 005c1dff: JBE 0x005c1e55
//   XREF to: 005c1e55 (CONDITIONAL_JUMP)
// 005c1e01: PUSH 0x1
// 005c1e03: PUSH 0x18
// 005c1e05: PUSH EDX
// 005c1e06: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c1e0b: MOV EAX,dword ptr [ESI + 0x1fba0]
// 005c1e11: ADD ESP,0xc
// 005c1e14: ADD EAX,0x20
// 005c1e17: PUSH EAX
// 005c1e18: LEA EAX,[ESP + 0x5c]
// 005c1e1c: PUSH EAX
// 005c1e1d: PUSH ESI
// 005c1e1e: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005c1e23: LEA EDX,[ESI + 0x1fc98]
// 005c1e29: ADD ESP,0xc
// 005c1e2c: CMP EDX,EAX
// 005c1e2e: JZ 0x005c1e40
//   XREF to: 005c1e40 (CONDITIONAL_JUMP)
// 005c1e30: MOV ECX,dword ptr [EAX]
// 005c1e32: MOV dword ptr [EDX],ECX
// 005c1e34: MOV ECX,dword ptr [EAX + 0x4]
// 005c1e37: MOV dword ptr [EDX + 0x4],ECX
// 005c1e3a: MOV ECX,dword ptr [EAX + 0x8]
// 005c1e3d: MOV dword ptr [EDX + 0x8],ECX
// 005c1e40: MOV EDX,dword ptr [ESI + 0x1fba0]
//   Label: LAB_005c1e40
// 005c1e46: PUSH EDX
// 005c1e47: PUSH 0x6539a0
//   XREF to: 006539a0 (DATA)
// 005c1e4c: JMP 0x005c1c31
//   XREF to: 005c1c31 (UNCONDITIONAL_JUMP)
// 005c1e51: XOR EAX,EAX
//   Label: LAB_005c1e51
// 005c1e53: JMP 0x005c1de4
//   XREF to: 005c1de4 (UNCONDITIONAL_JUMP)
// 005c1e55: PUSH 0x1
//   Label: LAB_005c1e55
// 005c1e57: PUSH 0x17
// 005c1e59: PUSH EDX
// 005c1e5a: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c1e5f: ADD ESP,0xc
// 005c1e62: MOV EDI,dword ptr [ESI + 0x1fba0]
// 005c1e68: PUSH EDI
// 005c1e69: PUSH 0x6539bb
//   XREF to: 006539bb (DATA)
// 005c1e6e: MOV EAX,[0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005c1e73: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 005c1e74: JMP 0x005c1c38
//   XREF to: 005c1c38 (UNCONDITIONAL_JUMP)
// 005c1e79: MOV EDI,dword ptr [ESI + 0x1fba0]
//   Label: LAB_005c1e79
// 005c1e7f: PUSH EDI
// 005c1e80: PUSH 0x6539d6
//   XREF to: 006539d6 (DATA)
// 005c1e85: MOV EAX,[0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005c1e8a: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 005c1e8b: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005c1e90: ADD ESP,0xc
// 005c1e93: MOV dword ptr [ESI + 0x1fba0],0x0
// 005c1e9d: XOR EAX,EAX
// 005c1e9f: MOV ESP,EBP
// 005c1ea1: POP EBP
// 005c1ea2: POP EDI
// 005c1ea3: POP ESI
// 005c1ea4: POP EBX
// 005c1ea5: RET
// 005c1ea6: PUSH 0x1
//   Label: LAB_005c1ea6
// 005c1ea8: PUSH 0x13
// 005c1eaa: PUSH EBX
// 005c1eab: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c1eb0: ADD ESP,0xc
// 005c1eb3: MOV EBX,dword ptr [ESI + 0x1fba0]
// 005c1eb9: PUSH EBX
// 005c1eba: PUSH 0x653a15
//   XREF to: 00653a15 (DATA)
// 005c1ebf: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005c1ec5: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 005c1ec6: JMP 0x005c1c38
//   XREF to: 005c1c38 (UNCONDITIONAL_JUMP)
// 005c1ecb: MOV ECX,dword ptr [ESP + 0x140]
//   Label: default
// 005c1ed2: PUSH ECX
// 005c1ed3: MOV EAX,0x653a3d
//   XREF to: 00653a3d (PARAM)
// 005c1ed8: MOV EDX,0xd3a
// 005c1edd: PUSH 0x653a52
//   XREF to: 00653a52 (DATA)
// 005c1ee2: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005c1ee7: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005c1eed: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005c1ef2: ADD ESP,0x8
// 005c1ef5: JMP 0x005c1c40
//   XREF to: 005c1c40 (UNCONDITIONAL_JUMP)
