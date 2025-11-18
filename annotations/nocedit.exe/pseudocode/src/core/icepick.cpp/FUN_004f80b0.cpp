// Name: core_icepick.cpp_FUN_004f80b0
// Address: 004f80b0
// Address Range: [[004f80b0, 004f8807]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f80b0()
// Globals:
//   void* switchdataD_004f8098 = 004f8632
//   TerminatedCString s_s_confused_while_walking_0062f6b3
//   TerminatedCString s_icepick_miss_wav_0062f6dd
//   double DOUBLE_0062f6f3 = 12.5663706140000
//   double DOUBLE_0062f6fb = 32
//   double DOUBLE_0062f703 = -1.57079632675000
//   float FLOAT_0062f70b = 3.141593
//   double DOUBLE_0062f713 = 1.57079632675000
//   float FLOAT_0062f71b = -3.141593
//   double DOUBLE_0062f723 = 3.14159265350000
//   CConsole* g_CConsolePtr = 0083b1a4
//   CConsole g_ConsolePtr
//   undefined4 DAT_02db8970
//   undefined4 g_CWeaponClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042ca70
//   core_hero.cpp_FUN_004f2af0
//   core_hero.cpp_FUN_004f2c40
//   core_hero.cpp_FUN_004f2d70
//   core_hero.cpp_FUN_004f2ed0
//   core_hero.cpp_FUN_004f2f50
//   core_hero.cpp_FUN_004f30f0
//   core_icepick.cpp_FUN_004f8810
//   core_icepick.cpp_FUN_004f8970
//   core_icepick.cpp_FUN_004f8ad0
//   core_icepick.cpp_FUN_004f8c70
//   core_icepick.cpp_FUN_004f93a0
//   core_inv.cpp_CInventory_updateInventory_FUN_004ffad0
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004f86be) */
/* Signature: undefined1 actors_hero_icepick.cpp_FUN_004f80b0(undefined4 param_1, undefined4
   param_2) */

void core_icepick_cpp_FUN_004f80b0(void)

{
  bool bVar1;
  float fVar2;
  CCharacter *pCVar3;
  int iVar4;
  CVector3f *pCVar5;
  float fVar6;
  CDemonActor *pCVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  SMotion *pSVar11;
  BADSPACEBASE *in_ESP;
  byte bVar12;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  CDeformableModelInstance *in_stack_0000002c;
  float afStackY_1824 [1503];
  CCharacter *in_stack_ffffff9c;
  code *bone_index;
  CDeformableModel_MotionBlendWeightFunc *in_stack_ffffffb0;
  float local_48;
  float local_44;
  float fStack_40;
  undefined1 auStack_3c [8];
  float local_34 [4];
  float local_24;
  float fStack_20;
  float local_1c;
  int local_18;
  
  bVar12 = 0;
  iVar4 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar4 == 0) {
    return;
  }
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 4) {
    return;
  }
  if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) == 2) {
    core_icepick_cpp_FUN_004f8c70();
  }
  fVar2 = (float)DOUBLE_0062f6f3;
  fVar6 = *(float *)in_stack_00000004[1].base_actor.actor_name;
  *(uint *)(in_stack_00000004[2].cloth_data + 0x5514) =
       (uint)(in_stack_00000004->carry_hands[1].carry_actor != (CDemonActor *)0x0);
  fVar6 = fVar6 - in_stack_00000008;
  *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * fVar2;
  *(float *)in_stack_00000004[1].base_actor.actor_name = fVar6;
  if (fVar6 < 0.0) {
    in_stack_00000004[1].base_actor.actor_name[0] = '\0';
    in_stack_00000004[1].base_actor.actor_name[1] = '\0';
    in_stack_00000004[1].base_actor.actor_name[2] = '\0';
    in_stack_00000004[1].base_actor.actor_name[3] = '\0';
  }
  pCVar5 = &(in_stack_00000004->model).accumulated_root_motion;
  (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
  (in_stack_00000004->model).accumulated_root_motion.y =
       (in_stack_00000004->model).accumulated_root_motion.z;
  pCVar5->x = (in_stack_00000004->model).accumulated_root_motion.y;
  core_icepick_cpp_FUN_004f93a0();
  *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
       (in_stack_00000004->model).accumulated_root_motion.z;
  iVar4 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
  if (iVar4 == 0) {
    pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&(in_stack_00000004->model).motion_controller);
    uVar8 = pSVar11->state_index;
    if (uVar8 < 9) {
      if ((((uVar8 == 0) || (uVar8 < 2)) || (uVar8 < 3)) || (uVar8 == 3)) goto LAB_004f8427;
    }
    else {
      if (uVar8 < 10) {
        return;
      }
      if (uVar8 < 0xf) {
        if (uVar8 < 0xb) {
LAB_004f8427:
          if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
            iVar4 = 0;
            if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) &&
               (*(int *)(in_stack_00000004[2].cloth_data + 0x5514) == 0)) {
              iVar4 = 10;
            }
            if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 8) != 0) {
              if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x10) == 0) {
                iVar4 = 1;
              }
              else {
                iVar4 = 2;
              }
            }
            if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0xc) != 0) {
              iVar4 = 3;
            }
            if (in_stack_00000004[1].base_actor.location.position.x != 0.0) {
              iVar4 = *(int *)(in_stack_00000004[2].cloth_data + 0x54f4);
              in_stack_00000004[1].base_actor.location.position.x = 0.0;
              uVar8 = (uint)(iVar4 == 0);
              *(uint *)(in_stack_00000004[2].cloth_data + 0x54f4) = uVar8;
              if ((uVar8 == 0) || (*(int *)(in_stack_00000004[2].cloth_data + 0x5514) != 0)) {
                iVar4 = 0;
              }
              else {
                iVar4 = 10;
              }
            }
            if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0) {
              bVar1 = true;
              if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) &&
                 (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) != 2)) {
                iVar9 = core_hero_cpp_FUN_004f2af0();
                bVar1 = false;
                if (iVar9 != 0) goto LAB_004f84cc;
                local_1c = (float)core_hero_cpp_FUN_004f2d70();
                if ((local_1c != 0.0) && (local_1c != 1.4013e-45)) {
                  core_hero_cpp_FUN_004f2ed0();
                }
                if ((local_18 != 0) || (iVar9 = core_hero_cpp_FUN_004f2c40(), iVar9 != 0))
                goto LAB_004f84cc;
                iVar9 = core_hero_cpp_FUN_004f2f50();
                if (iVar9 != 0) {
                  core_hero_cpp_FUN_004f30f0();
                  goto LAB_004f84cc;
                }
              }
              else {
LAB_004f84cc:
                if (!bVar1) goto switchD_004f8665_default;
              }
              if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) {
                if (*(int *)(in_stack_00000004[2].cloth_data + 0x5514) == 0) {
                  pCVar3 = in_stack_00000004 + 1;
                  (pCVar3->base_actor).actor_name[0x14] = '\0';
                  (pCVar3->base_actor).actor_name[0x15] = '\0';
                  (pCVar3->base_actor).actor_name[0x16] = '\0';
                  (pCVar3->base_actor).actor_name[0x17] = '\0';
                  switch(*(undefined4 *)(in_stack_00000004[2].cloth_data + 0x54f8)) {
                  case 0:
                  case 2:
                    iVar4 = 0xe;
                    break;
                  case 1:
                  case 3:
                    iVar4 = 0xf;
                    break;
                  case 4:
                    iVar4 = 0x10;
                  }
                }
                else {
                  pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                                     (in_stack_00000004->carry_hands[1].carry_actor,
                                      g_CWeaponClassInfo.name_hash);
                  if (pCVar7 != (CDemonActor *)0x0) {
                    (*pCVar7->vtable[1].renderTransparent)(pCVar7);
                  }
                }
              }
            }
switchD_004f8665_default:
            *(float *)(in_stack_00000004->field2_0x240c + 0xc) =
                 (float)in_stack_00000004[1].base_actor.location.area_id *
                 *(float *)(in_stack_00000004->field2_0x240c + 0x2c);
            pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                (&(in_stack_00000004->model).motion_controller);
            if (iVar4 != pSVar11->state_index) {
              if ((((iVar4 == 0xe) || (iVar4 == 0xf)) || (iVar4 == 0x10)) &&
                 (iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                    (*(uint *)(in_stack_00000004[2].cloth_data + 0x54fc)),
                 iVar9 == 0)) {
                uVar10 = (*((in_stack_00000004->base_actor).vtable)->playSound)
                                   (&in_stack_00000004->base_actor,"icepick-miss?.wav");
                *(undefined4 *)(in_stack_00000004[2].cloth_data + 0x54fc) = uVar10;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->model).motion_controller,iVar4,1);
            }
            if ((*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18) != 0) &&
               (iVar4 = core_icepick_cpp_FUN_004f8970(), iVar4 == 0)) {
              in_stack_ffffff9c = in_stack_00000004;
              core_icepick_cpp_FUN_004f8ad0();
            }
          }
        }
      }
      else if (((0xf < uVar8) && (0x10 < uVar8)) && (uVar8 == 0x15)) goto LAB_004f8427;
    }
  }
  else {
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    pCVar5->x = (in_stack_00000004->model).accumulated_root_motion.y;
    uVar8 = *(uint *)(in_stack_00000004->field11_0x25a0 + 0x10);
    if (uVar8 < 2) {
      if (uVar8 == 1) {
        iVar4 = 1;
      }
      else {
LAB_004f8417:
        iVar4 = 0;
      }
    }
    else {
      if (2 < uVar8) {
        if (uVar8 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
          goto LAB_004f81b6;
        }
        goto LAB_004f8417;
      }
      iVar4 = 2;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->model).motion_controller,iVar4,1);
  }
LAB_004f81b6:
  if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) {
    local_24 = (in_stack_00000004->model).accumulated_root_motion.x;
    fStack_20 = (in_stack_00000004->model).accumulated_root_motion.y;
    local_1c = (in_stack_00000004->model).accumulated_root_motion.z;
    *(float *)(in_stack_00000004->field2_0x240c + 0x20) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
         in_stack_00000008 * (float)DOUBLE_0062f6fb;
    auStack_3c._0_4_ = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
    auStack_3c._4_4_ = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
    local_34[0] = in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x24);
    local_48 = (float)auStack_3c._0_4_ + *(float *)(in_stack_00000004->field2_0x240c + 0x10);
    local_44 = (float)auStack_3c._4_4_ + *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    local_24 = local_24 + local_48;
    fStack_40 = local_34[0] + *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    fStack_20 = fStack_20 + local_44;
    local_1c = local_1c + fStack_40;
    core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
    goto LAB_004f82f8;
  }
  if (in_stack_00000004->grabbed_type == 0) {
    pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       (&in_stack_00000004->base_actor,(CVector3f *)&stack0xffffffac,
                        &(in_stack_00000004->grabbed_by->location).position);
    pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       ((CVector3f *)auStack_3c,pCVar5);
    fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar5->y);
    if (fVar6 < (float)DOUBLE_0062f703) {
      fVar6 = fVar6 + FLOAT_0062f70b;
    }
    if ((float)DOUBLE_0062f713 < fVar6) {
      fVar6 = fVar6 + FLOAT_0062f71b;
    }
    in_stack_00000008 = in_stack_00000008 * (float)DOUBLE_0062f723;
    if (fVar6 < -in_stack_00000008) {
      fVar6 = -in_stack_00000008;
    }
    if (in_stack_00000008 < fVar6) {
      fVar6 = in_stack_00000008;
    }
    (in_stack_00000004->base_actor).orient.bank =
         (in_stack_00000004->base_actor).orient.bank + fVar6;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&in_stack_00000004->base_actor);
  }
  pCVar7 = in_stack_00000004->grabbed_by;
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&in_stack_00000004->model,(CVector3f *)&stack0xffffffa0,0);
  fVar6 = (**(code **)(local_18 + 0x124))(pCVar7,(float)in_stack_00000004,pCVar5);
  if (fVar6 == 0.0) {
    in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
LAB_004f82e5:
    iVar4 = 0;
  }
  else {
    if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) goto LAB_004f82e5;
    if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) == 0) goto LAB_004f82f8;
    iVar4 = 0x11;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(in_stack_00000004->model).motion_controller,iVar4,1);
LAB_004f82f8:
  core_inv_cpp_CInventory_updateInventory_FUN_004ffad0
            ((CInventory *)(in_stack_00000004[2].cloth_data + 0x5058));
  pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004->carry_hands[1].carry_actor,g_CWeaponClassInfo.name_hash);
  if (pCVar7 != (CDemonActor *)0x0) {
    (*pCVar7->vtable->process)(pCVar7);
    pCVar7[4].actor_name[8] = 'd';
    pCVar7[4].actor_name[9] = '\0';
    pCVar7[4].actor_name[10] = '\0';
    pCVar7[4].actor_name[0xb] = '\0';
  }
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(&in_stack_00000004->model)
  ;
  iVar4 = (*(in_stack_00000004->base_actor).vtable[1].hasCollision)
                    (&in_stack_00000004->base_actor,(SCollisionInfo *)in_stack_ffffff9c);
  if (iVar4 == 0) {
    bone_index = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar6 = (float)DAT_02db8970;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CQuaternion4f *)(in_stack_00000004[2].cloth_data + 0x5504),
               *(CVector3f **)(in_stack_00000004[2].cloth_data + 0x5510));
    auStack_3c._0_4_ = local_48;
    *(undefined4 *)(auStack_3c + (uint)bVar12 * -8 + 4) =
         *(undefined4 *)((int)&stack0xffffffbc + (uint)bVar12 * -8);
    local_34[(uint)bVar12 * -2 + (uint)bVar12 * -2] =
         *(float *)((int)&stack0xffffffbc + ((uint)bVar12 * -2 + (uint)bVar12 * -2 + 1) * 4);
    (local_34 + (uint)bVar12 * -2 + (uint)bVar12 * -2)[(uint)bVar12 * -2 + 1] =
         ((float *)((int)&stack0xffffffbc + ((uint)bVar12 * -2 + (uint)bVar12 * -2 + 1) * 4))
         [(uint)bVar12 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (in_stack_0000002c,(CQuaternion4f *)(auStack_3c + 4),fVar6,(int)bone_index,
               in_stack_ffffffb0);
  }
  core_icepick_cpp_FUN_004f8810();
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
  return;
}


// Assembly code:
// 004f80b0: PUSH EBX
//   Label: core_icepick.cpp_FUN_004f80b0
// 004f80b1: PUSH ESI
// 004f80b2: PUSH EDI
// 004f80b3: PUSH EBP
// 004f80b4: MOV EBP,ESP
// 004f80b6: SUB ESP,0x88
// 004f80bc: AND ESP,0xfffffff8
// 004f80bf: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f80c2: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f80c5: PUSH EBX
// 004f80c6: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 004f80cb: ADD ESP,0x8
// 004f80ce: TEST EAX,EAX
// 004f80d0: JZ 0x004f83cb
//   XREF to: 004f83cb (CONDITIONAL_JUMP)
// 004f80d6: CMP dword ptr [EBX + 0x1fbd0],0x4
// 004f80dd: JZ 0x004f83cb
//   XREF to: 004f83cb (CONDITIONAL_JUMP)
// 004f80e3: CMP dword ptr [EBX + 0xbe28],0x2
// 004f80ea: JZ 0x004f83d2
//   XREF to: 004f83d2 (CONDITIONAL_JUMP)
// 004f80f0: CMP dword ptr [EBX + 0x24f8],0x0
//   Label: LAB_004f80f0
// 004f80f7: SETNZ AL
// 004f80fa: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f80fd: FLD ST0
// 004f80ff: FMUL double ptr [0x0062f6f3]
//   XREF to: 0062f6f3 (READ)
// 004f8105: AND EAX,0xff
// 004f810a: FLD float ptr [EBX + 0xbe24]
// 004f8110: MOV dword ptr [EBX + 0x1fbf4],EAX
// 004f8116: FSUBRP ST2,ST0
// 004f8118: FSTP float ptr [EBX + 0x2438]
// 004f811e: FST float ptr [EBX + 0xbe24]
// 004f8124: FLDZ
// 004f8126: FCOMPP
// 004f8128: FNSTSW AX
// 004f812a: SAHF
// 004f812b: JBE 0x004f8137
//   XREF to: 004f8137 (CONDITIONAL_JUMP)
// 004f812d: MOV dword ptr [EBX + 0xbe24],0x0
// 004f8137: LEA ESI,[EBX + 0x23ac]
//   Label: LAB_004f8137
// 004f813d: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f8140: MOV dword ptr [ESI + 0x8],0x0
// 004f8147: PUSH EBX
// 004f8148: MOV EAX,dword ptr [ESI + 0x8]
// 004f814b: MOV dword ptr [ESI + 0x4],EAX
// 004f814e: MOV EAX,dword ptr [ESI + 0x4]
// 004f8151: MOV dword ptr [ESI],EAX
// 004f8153: CALL core_icepick.cpp_FUN_004f93a0
//   XREF to: 004f93a0 (UNCONDITIONAL_CALL)
// 004f8158: ADD ESP,0x8
// 004f815b: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f815e: FLD float ptr [EBX + 0x23b4]
// 004f8164: PUSH EBX
// 004f8165: FSTP float ptr [EBX + 0x2434]
// 004f816b: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 004f8170: ADD ESP,0x8
// 004f8173: LEA EDX,[EBX + 0x158]
// 004f8179: TEST EAX,EAX
// 004f817b: JZ 0x004f86a0
//   XREF to: 004f86a0 (CONDITIONAL_JUMP)
// 004f8181: MOV dword ptr [ESI + 0x8],0x0
// 004f8188: MOV EAX,dword ptr [ESI + 0x8]
// 004f818b: MOV dword ptr [ESI + 0x4],EAX
// 004f818e: MOV EAX,dword ptr [ESI + 0x4]
// 004f8191: MOV dword ptr [ESI],EAX
// 004f8193: MOV EAX,dword ptr [EBX + 0x25b0]
// 004f8199: CMP EAX,0x2
// 004f819c: JNC 0x004f8410
//   XREF to: 004f8410 (CONDITIONAL_JUMP)
// 004f81a2: CMP EAX,0x1
// 004f81a5: JNZ 0x004f8417
//   XREF to: 004f8417 (CONDITIONAL_JUMP)
// 004f81ab: PUSH EAX
// 004f81ac: PUSH EAX
// 004f81ad: PUSH EDX
//   Label: LAB_004f81ad
// 004f81ae: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   Label: LAB_004f81ae
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f81b3: ADD ESP,0xc
//   Label: LAB_004f81b3
// 004f81b6: MOV ECX,dword ptr [EBX + 0x2598]
//   Label: LAB_004f81b6
// 004f81bc: TEST ECX,ECX
// 004f81be: JZ 0x004f8738
//   XREF to: 004f8738 (CONDITIONAL_JUMP)
// 004f81c4: CMP dword ptr [EBX + 0x259c],0x0
// 004f81cb: JNZ 0x004f8294
//   XREF to: 004f8294 (CONDITIONAL_JUMP)
// 004f81d1: LEA EAX,[ECX + 0x20]
// 004f81d4: PUSH EAX
// 004f81d5: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x68] (DATA)
// 004f81d9: PUSH EAX
// 004f81da: PUSH EBX
// 004f81db: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004f81e0: ADD ESP,0xc
// 004f81e3: PUSH EAX
// 004f81e4: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x44] (DATA)
// 004f81e8: PUSH EAX
// 004f81e9: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004f81ee: ADD ESP,0x8
// 004f81f1: PUSH dword ptr [EAX + 0x4]
// 004f81f4: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004f81f9: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004f8200: FLD float ptr [ESP + 0x88]
//   XREF to: Stack[-0x14] (READ)
// 004f8207: ADD ESP,0x4
// 004f820a: FST float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 004f820d: FCOMP double ptr [0x0062f703]
//   XREF to: 0062f703 (READ)
// 004f8213: FNSTSW AX
// 004f8215: SAHF
// 004f8216: JNC 0x004f8224
//   XREF to: 004f8224 (CONDITIONAL_JUMP)
// 004f8218: FLD float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 004f821b: FADD float ptr [0x0062f70b]
//   XREF to: 0062f70b (READ)
// 004f8221: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 004f8224: FLD float ptr [ESP]
//   Label: LAB_004f8224
//   XREF to: Stack[-0x98] (DATA)
// 004f8227: FCOMP double ptr [0x0062f713]
//   XREF to: 0062f713 (READ)
// 004f822d: FNSTSW AX
// 004f822f: SAHF
// 004f8230: JBE 0x004f823e
//   XREF to: 004f823e (CONDITIONAL_JUMP)
// 004f8232: FLD float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 004f8235: FADD float ptr [0x0062f71b]
//   XREF to: 0062f71b (READ)
// 004f823b: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 004f823e: FLD float ptr [EBP + 0x18]
//   Label: LAB_004f823e
//   XREF to: Stack[0x8] (READ)
// 004f8241: FMUL double ptr [0x0062f723]
//   XREF to: 0062f723 (READ)
// 004f8247: FLD float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 004f824a: FXCH
// 004f824c: FST float ptr [ESP + 0x80]
//   XREF to: Stack[-0x18] (WRITE)
// 004f8253: FCHS
// 004f8255: FSTP float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x1c] (WRITE)
// 004f8259: FCOMP float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x1c] (READ)
// 004f825d: FNSTSW AX
// 004f825f: SAHF
// 004f8260: JNC 0x004f8269
//   XREF to: 004f8269 (CONDITIONAL_JUMP)
// 004f8262: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x1c] (READ)
// 004f8266: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x98] (DATA)
// 004f8269: FLD float ptr [ESP]
//   Label: LAB_004f8269
//   XREF to: Stack[-0x98] (DATA)
// 004f826c: FCOMP float ptr [ESP + 0x80]
//   XREF to: Stack[-0x18] (READ)
// 004f8273: FNSTSW AX
// 004f8275: SAHF
// 004f8276: JBE 0x004f8282
//   XREF to: 004f8282 (CONDITIONAL_JUMP)
// 004f8278: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x18] (READ)
// 004f827f: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x98] (DATA)
// 004f8282: FLD float ptr [EBX + 0x34]
//   Label: LAB_004f8282
// 004f8285: FADD float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 004f8288: PUSH EBX
// 004f8289: FSTP float ptr [EBX + 0x34]
// 004f828c: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 004f8291: ADD ESP,0x4
// 004f8294: MOV ESI,dword ptr [EBX + 0x2598]
//   Label: LAB_004f8294
// 004f829a: MOV EAX,dword ptr [ESI + 0x154]
// 004f82a0: PUSH 0x0
// 004f82a2: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004f82a9: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x74] (DATA)
// 004f82ad: PUSH EAX
// 004f82ae: LEA EDI,[EBX + 0x158]
// 004f82b4: PUSH EDI
// 004f82b5: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004f82ba: ADD ESP,0xc
// 004f82bd: PUSH EAX
// 004f82be: PUSH EBX
// 004f82bf: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x14] (READ)
// 004f82c6: PUSH ESI
// 004f82c7: CALL dword ptr [EAX + 0x124]
// 004f82cd: ADD ESP,0xc
// 004f82d0: TEST EAX,EAX
// 004f82d2: JZ 0x004f8716
//   XREF to: 004f8716 (CONDITIONAL_JUMP)
// 004f82d8: CMP dword ptr [EBX + 0x2598],0x0
// 004f82df: JNZ 0x004f8721
//   XREF to: 004f8721 (CONDITIONAL_JUMP)
// 004f82e5: PUSH 0x1
//   Label: LAB_004f82e5
// 004f82e7: PUSH 0x0
// 004f82e9: LEA EAX,[EBX + 0x158]
// 004f82ef: PUSH EAX
// 004f82f0: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   Label: LAB_004f82f0
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f82f5: ADD ESP,0xc
// 004f82f8: LEA EAX,[EBX + 0x1f738]
//   Label: LAB_004f82f8
// 004f82fe: PUSH EAX
// 004f82ff: CALL core_inv.cpp_CInventory_updateInventory_FUN_004ffad0
//   XREF to: 004ffad0 (UNCONDITIONAL_CALL)
// 004f8304: ADD ESP,0x4
// 004f8307: MOV EDI,dword ptr [0x03f95d78]
//   XREF to: 03f95d78 (READ)
// 004f830d: PUSH EDI
// 004f830e: MOV EAX,dword ptr [EBX + 0x24f8]
// 004f8314: PUSH EAX
// 004f8315: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004f831a: MOV ESI,EAX
// 004f831c: ADD ESP,0x8
// 004f831f: TEST EAX,EAX
// 004f8321: JZ 0x004f833d
//   XREF to: 004f833d (CONDITIONAL_JUMP)
// 004f8323: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f8326: MOV EAX,dword ptr [EAX + 0x154]
// 004f832c: PUSH ESI
// 004f832d: CALL dword ptr [EAX + 0x4]
// 004f8330: ADD ESP,0x8
// 004f8333: MOV dword ptr [ESI + 0x568],0x64
// 004f833d: PUSH EBX
//   Label: LAB_004f833d
// 004f833e: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 004f8343: ADD ESP,0x4
// 004f8346: LEA EAX,[EBX + 0x158]
// 004f834c: PUSH EAX
// 004f834d: MOV dword ptr [ESP + 0x7c],EAX
// 004f8351: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 004f8356: ADD ESP,0x4
// 004f8359: MOV EAX,dword ptr [EBX + 0x154]
// 004f835f: PUSH EBX
// 004f8360: CALL dword ptr [EAX + 0x120]
// 004f8366: ADD ESP,0x4
// 004f8369: TEST EAX,EAX
// 004f836b: JNZ 0x004f83b3
//   XREF to: 004f83b3 (CONDITIONAL_JUMP)
// 004f836d: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 004f8372: MOV ECX,dword ptr [0x02db8970]
//   XREF to: 02db8970 (READ)
// 004f8378: PUSH ECX
// 004f8379: LEA EAX,[EBX + 0x1fbe4]
// 004f837f: PUSH dword ptr [EBX + 0x1fbf0]
// 004f8385: PUSH EAX
// 004f8386: LEA ESI,[ESP + 0x14]
// 004f838a: LEA EDI,[ESP + 0x24]
// 004f838e: CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   XREF to: 005f7b20 (UNCONDITIONAL_CALL)
// 004f8393: LEA ESI,[ESP + 0x14]
// 004f8397: ADD ESP,0x4
// 004f839a: LEA EAX,[ESP + 0x20]
// 004f839e: MOVSD ES:EDI,ESI
// 004f839f: MOVSD ES:EDI,ESI
// 004f83a0: MOVSD ES:EDI,ESI
// 004f83a1: MOVSD ES:EDI,ESI
// 004f83a2: PUSH EAX
// 004f83a3: MOV ESI,dword ptr [ESP + 0x88]
// 004f83aa: PUSH ESI
// 004f83ab: CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
//   XREF to: 0059f750 (UNCONDITIONAL_CALL)
// 004f83b0: ADD ESP,0x14
// 004f83b3: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_004f83b3
//   XREF to: Stack[0x8] (READ)
// 004f83b6: PUSH EBX
// 004f83b7: CALL core_icepick.cpp_FUN_004f8810
//   XREF to: 004f8810 (UNCONDITIONAL_CALL)
// 004f83bc: ADD ESP,0x8
// 004f83bf: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f83c2: PUSH EBX
// 004f83c3: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 004f83c8: ADD ESP,0x8
// 004f83cb: MOV ESP,EBP
//   Label: LAB_004f83cb
// 004f83cd: POP EBP
// 004f83ce: POP EDI
// 004f83cf: POP ESI
// 004f83d0: POP EBX
// 004f83d1: RET
// 004f83d2: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_004f83d2
//   XREF to: Stack[0x8] (READ)
// 004f83d5: PUSH EBX
// 004f83d6: CALL core_icepick.cpp_FUN_004f8c70
//   XREF to: 004f8c70 (UNCONDITIONAL_CALL)
// 004f83db: ADD ESP,0x8
// 004f83de: JMP 0x004f80f0
//   XREF to: 004f80f0 (UNCONDITIONAL_JUMP)
// 004f83e3: PUSH 0x1
//   Label: LAB_004f83e3
// 004f83e5: PUSH 0x0
// 004f83e7: PUSH EDX
// 004f83e8: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f83ed: ADD ESP,0xc
// 004f83f0: PUSH EBX
// 004f83f1: PUSH 0x62f6b3
//   XREF to: 0062f6b3 (DATA)
// 004f83f6: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 004f83fc: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 004f83fd: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004f8402: JMP 0x004f81b3
//   XREF to: 004f81b3 (UNCONDITIONAL_JUMP)
// 004f8407: PUSH 0x1
//   Label: LAB_004f8407
// 004f8409: PUSH 0x2
// 004f840b: JMP 0x004f81ad
//   XREF to: 004f81ad (UNCONDITIONAL_JUMP)
// 004f8410: JBE 0x004f8407
//   Label: LAB_004f8410
//   XREF to: 004f8407 (CONDITIONAL_JUMP)
// 004f8412: CMP EAX,0x3
// 004f8415: JZ 0x004f83e3
//   XREF to: 004f83e3 (CONDITIONAL_JUMP)
// 004f8417: PUSH 0x1
//   Label: LAB_004f8417
// 004f8419: PUSH 0x0
// 004f841b: LEA EAX,[EBX + 0x158]
// 004f8421: PUSH EAX
// 004f8422: JMP 0x004f81ae
//   XREF to: 004f81ae (UNCONDITIONAL_JUMP)
// 004f8427: CMP dword ptr [EBX + 0x2410],0x0
//   Label: LAB_004f8427
// 004f842e: JZ 0x004f81b6
//   XREF to: 004f81b6 (CONDITIONAL_JUMP)
// 004f8434: MOV EAX,dword ptr [EBX + 0x1fbd4]
// 004f843a: XOR ESI,ESI
// 004f843c: TEST EAX,EAX
// 004f843e: JZ 0x004f844d
//   XREF to: 004f844d (CONDITIONAL_JUMP)
// 004f8440: CMP dword ptr [EBX + 0x1fbf4],0x0
// 004f8447: JZ 0x004f8597
//   XREF to: 004f8597 (CONDITIONAL_JUMP)
// 004f844d: CMP dword ptr [EBX + 0xbe2c],0x0
//   Label: LAB_004f844d
// 004f8454: JZ 0x004f8468
//   XREF to: 004f8468 (CONDITIONAL_JUMP)
// 004f8456: CMP dword ptr [EBX + 0xbe34],0x0
// 004f845d: JZ 0x004f85a1
//   XREF to: 004f85a1 (CONDITIONAL_JUMP)
// 004f8463: MOV ESI,0x2
// 004f8468: CMP dword ptr [EBX + 0xbe30],0x0
//   Label: LAB_004f8468
// 004f846f: JZ 0x004f8476
//   XREF to: 004f8476 (CONDITIONAL_JUMP)
// 004f8471: MOV ESI,0x3
// 004f8476: CMP dword ptr [EBX + 0xbe44],0x0
//   Label: LAB_004f8476
// 004f847d: JZ 0x004f84b0
//   XREF to: 004f84b0 (CONDITIONAL_JUMP)
// 004f847f: MOV EDX,dword ptr [EBX + 0x1fbd4]
// 004f8485: MOV dword ptr [EBX + 0xbe44],0x0
// 004f848f: TEST EDX,EDX
// 004f8491: SETZ AL
// 004f8494: AND EAX,0xff
// 004f8499: MOV dword ptr [EBX + 0x1fbd4],EAX
// 004f849f: JZ 0x004f84ae
//   XREF to: 004f84ae (CONDITIONAL_JUMP)
// 004f84a1: CMP dword ptr [EBX + 0x1fbf4],0x0
// 004f84a8: JZ 0x004f85ab
//   XREF to: 004f85ab (CONDITIONAL_JUMP)
// 004f84ae: XOR ESI,ESI
//   Label: LAB_004f84ae
// 004f84b0: CMP dword ptr [EBX + 0xbe38],0x0
//   Label: LAB_004f84b0
// 004f84b7: JZ 0x004f8511
//   XREF to: 004f8511 (CONDITIONAL_JUMP)
// 004f84b9: MOV EAX,dword ptr [EBX + 0x1fbd4]
// 004f84bf: MOV EDI,0x1
// 004f84c4: TEST EAX,EAX
// 004f84c6: JZ 0x004f85b5
//   XREF to: 004f85b5 (CONDITIONAL_JUMP)
// 004f84cc: TEST EDI,EDI
//   Label: LAB_004f84cc
// 004f84ce: JZ 0x004f8511
//   XREF to: 004f8511 (CONDITIONAL_JUMP)
// 004f84d0: CMP dword ptr [EBX + 0x1fbd4],0x0
//   Label: LAB_004f84d0
// 004f84d7: JZ 0x004f8511
//   XREF to: 004f8511 (CONDITIONAL_JUMP)
// 004f84d9: MOV EAX,dword ptr [EBX + 0x1fbf4]
// 004f84df: TEST EAX,EAX
// 004f84e1: JZ 0x004f8650
//   XREF to: 004f8650 (CONDITIONAL_JUMP)
// 004f84e7: MOV EDX,dword ptr [0x03f95d78]
//   XREF to: 03f95d78 (READ)
// 004f84ed: PUSH EDX
// 004f84ee: MOV ECX,dword ptr [EBX + 0x24f8]
// 004f84f4: PUSH ECX
// 004f84f5: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004f84fa: ADD ESP,0x8
// 004f84fd: TEST EAX,EAX
// 004f84ff: JZ 0x004f8511
//   XREF to: 004f8511 (CONDITIONAL_JUMP)
// 004f8501: PUSH EAX
// 004f8502: MOV EDX,dword ptr [EAX + 0x154]
// 004f8508: CALL dword ptr [EDX + 0xf8]
// 004f850e: ADD ESP,0x4
// 004f8511: FLD float ptr [EBX + 0xbe50]
//   Label: default
// 004f8517: LEA EAX,[EBX + 0x158]
// 004f851d: FMUL float ptr [EBX + 0x2438]
// 004f8523: PUSH EAX
// 004f8524: FSTP float ptr [EBX + 0x2418]
// 004f852a: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004f852f: MOV EAX,dword ptr [EAX + 0x24]
// 004f8532: ADD ESP,0x4
// 004f8535: CMP ESI,EAX
// 004f8537: JZ 0x004f856b
//   XREF to: 004f856b (CONDITIONAL_JUMP)
// 004f8539: CMP ESI,0xe
// 004f853c: JNZ 0x004f866c
//   XREF to: 004f866c (CONDITIONAL_JUMP)
// 004f8542: MOV EDI,dword ptr [EBX + 0x1fbdc]
//   Label: LAB_004f8542
// 004f8548: PUSH EDI
// 004f8549: CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004f854e: ADD ESP,0x4
// 004f8551: TEST EAX,EAX
// 004f8553: JZ 0x004f8683
//   XREF to: 004f8683 (CONDITIONAL_JUMP)
// 004f8559: PUSH 0x1
//   Label: LAB_004f8559
// 004f855b: PUSH ESI
// 004f855c: LEA EAX,[EBX + 0x158]
// 004f8562: PUSH EAX
// 004f8563: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f8568: ADD ESP,0xc
// 004f856b: CMP dword ptr [EBX + 0xbe3c],0x0
//   Label: LAB_004f856b
// 004f8572: JZ 0x004f81b6
//   XREF to: 004f81b6 (CONDITIONAL_JUMP)
// 004f8578: PUSH EBX
// 004f8579: CALL core_icepick.cpp_FUN_004f8970
//   XREF to: 004f8970 (UNCONDITIONAL_CALL)
// 004f857e: ADD ESP,0x4
// 004f8581: TEST EAX,EAX
// 004f8583: JNZ 0x004f81b6
//   XREF to: 004f81b6 (CONDITIONAL_JUMP)
// 004f8589: PUSH EBX
// 004f858a: CALL core_icepick.cpp_FUN_004f8ad0
//   XREF to: 004f8ad0 (UNCONDITIONAL_CALL)
// 004f858f: ADD ESP,0x4
// 004f8592: JMP 0x004f81b6
//   XREF to: 004f81b6 (UNCONDITIONAL_JUMP)
// 004f8597: MOV ESI,0xa
//   Label: LAB_004f8597
// 004f859c: JMP 0x004f844d
//   XREF to: 004f844d (UNCONDITIONAL_JUMP)
// 004f85a1: MOV ESI,0x1
//   Label: LAB_004f85a1
// 004f85a6: JMP 0x004f8468
//   XREF to: 004f8468 (UNCONDITIONAL_JUMP)
// 004f85ab: MOV ESI,0xa
//   Label: LAB_004f85ab
// 004f85b0: JMP 0x004f84b0
//   XREF to: 004f84b0 (UNCONDITIONAL_JUMP)
// 004f85b5: CMP dword ptr [EBX + 0xbe28],0x2
//   Label: LAB_004f85b5
// 004f85bc: JZ 0x004f84cc
//   XREF to: 004f84cc (CONDITIONAL_JUMP)
// 004f85c2: PUSH EBX
// 004f85c3: CALL core_hero.cpp_FUN_004f2af0
//   XREF to: 004f2af0 (UNCONDITIONAL_CALL)
// 004f85c8: XOR EDI,EDI
// 004f85ca: ADD ESP,0x4
// 004f85cd: TEST EAX,EAX
// 004f85cf: JNZ 0x004f84cc
//   XREF to: 004f84cc (CONDITIONAL_JUMP)
// 004f85d5: PUSH EBX
// 004f85d6: CALL core_hero.cpp_FUN_004f2d70
//   XREF to: 004f2d70 (UNCONDITIONAL_CALL)
// 004f85db: ADD ESP,0x4
// 004f85de: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004f85e2: TEST EAX,EAX
// 004f85e4: JBE 0x004f85eb
//   XREF to: 004f85eb (CONDITIONAL_JUMP)
// 004f85e6: CMP EAX,0x1
// 004f85e9: JNZ 0x004f8619
//   XREF to: 004f8619 (CONDITIONAL_JUMP)
// 004f85eb: CMP dword ptr [ESP + 0x74],0x0
//   Label: LAB_004f85eb
//   XREF to: Stack[-0x24] (READ)
// 004f85f0: JNZ 0x004f84cc
//   XREF to: 004f84cc (CONDITIONAL_JUMP)
// 004f85f6: PUSH EBX
// 004f85f7: CALL core_hero.cpp_FUN_004f2c40
//   XREF to: 004f2c40 (UNCONDITIONAL_CALL)
// 004f85fc: ADD ESP,0x4
// 004f85ff: TEST EAX,EAX
// 004f8601: JNZ 0x004f84cc
//   XREF to: 004f84cc (CONDITIONAL_JUMP)
// 004f8607: PUSH EBX
// 004f8608: CALL core_hero.cpp_FUN_004f2f50
//   XREF to: 004f2f50 (UNCONDITIONAL_CALL)
// 004f860d: ADD ESP,0x4
// 004f8610: TEST EAX,EAX
// 004f8612: JNZ 0x004f8624
//   XREF to: 004f8624 (CONDITIONAL_JUMP)
// 004f8614: JMP 0x004f84d0
//   XREF to: 004f84d0 (UNCONDITIONAL_JUMP)
// 004f8619: PUSH EBX
//   Label: LAB_004f8619
// 004f861a: CALL core_hero.cpp_FUN_004f2ed0
//   XREF to: 004f2ed0 (UNCONDITIONAL_CALL)
// 004f861f: ADD ESP,0x4
// 004f8622: JMP 0x004f85eb
//   XREF to: 004f85eb (UNCONDITIONAL_JUMP)
// 004f8624: PUSH EBX
//   Label: LAB_004f8624
// 004f8625: CALL core_hero.cpp_FUN_004f30f0
//   XREF to: 004f30f0 (UNCONDITIONAL_CALL)
// 004f862a: ADD ESP,0x4
// 004f862d: JMP 0x004f84cc
//   XREF to: 004f84cc (UNCONDITIONAL_JUMP)
// 004f8632: MOV ESI,0xe
//   Label: caseD_2
// 004f8637: JMP 0x004f8511
//   XREF to: 004f8511 (UNCONDITIONAL_JUMP)
// 004f863c: MOV ESI,0xf
//   Label: caseD_3
// 004f8641: JMP 0x004f8511
//   XREF to: 004f8511 (UNCONDITIONAL_JUMP)
// 004f8646: MOV ESI,0x10
//   Label: caseD_4
// 004f864b: JMP 0x004f8511
//   XREF to: 004f8511 (UNCONDITIONAL_JUMP)
// 004f8650: MOV dword ptr [EBX + 0xbe38],EAX
//   Label: LAB_004f8650
// 004f8656: MOV EAX,dword ptr [EBX + 0x1fbd8]
// 004f865c: CMP EAX,0x4
// 004f865f: JA 0x004f8511
//   XREF to: 004f8511 (CONDITIONAL_JUMP)
// 004f8665: JMP dword ptr [EAX*0x4 + 0x4f8098]
//   Label: switchD
//   XREF to: 004f8632 (COMPUTED_JUMP)
//   XREF to: 004f863c (COMPUTED_JUMP)
//   XREF to: 004f8646 (COMPUTED_JUMP)
//   XREF to: 004f8098 (DATA)
// 004f866c: CMP ESI,0xf
//   Label: LAB_004f866c
// 004f866f: JZ 0x004f8542
//   XREF to: 004f8542 (CONDITIONAL_JUMP)
// 004f8675: CMP ESI,0x10
// 004f8678: JZ 0x004f8542
//   XREF to: 004f8542 (CONDITIONAL_JUMP)
// 004f867e: JMP 0x004f8559
//   XREF to: 004f8559 (UNCONDITIONAL_JUMP)
// 004f8683: PUSH 0x62f6dd
//   Label: LAB_004f8683
//   XREF to: 0062f6dd (DATA)
// 004f8688: MOV EAX,dword ptr [EBX + 0x154]
// 004f868e: PUSH EBX
// 004f868f: CALL dword ptr [EAX + 0x24]
// 004f8692: ADD ESP,0x8
// 004f8695: MOV dword ptr [EBX + 0x1fbdc],EAX
// 004f869b: JMP 0x004f8559
//   XREF to: 004f8559 (UNCONDITIONAL_JUMP)
// 004f86a0: PUSH EDX
//   Label: LAB_004f86a0
// 004f86a1: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004f86a6: MOV EAX,dword ptr [EAX + 0x24]
// 004f86a9: ADD ESP,0x4
// 004f86ac: CMP EAX,0x9
// 004f86af: JNC 0x004f86c3
//   XREF to: 004f86c3 (CONDITIONAL_JUMP)
// 004f86b1: CMP EAX,0x1
// 004f86b4: JNC 0x004f86f9
//   XREF to: 004f86f9 (CONDITIONAL_JUMP)
// 004f86b6: TEST EAX,EAX
// 004f86b8: JZ 0x004f8427
//   XREF to: 004f8427 (CONDITIONAL_JUMP)
// 004f86be: JMP 0x004f81b6
//   XREF to: 004f81b6 (UNCONDITIONAL_JUMP)
// 004f86c3: JBE 0x004f83cb
//   Label: LAB_004f86c3
//   XREF to: 004f83cb (CONDITIONAL_JUMP)
// 004f86c9: CMP EAX,0xf
// 004f86cc: JNC 0x004f86dc
//   XREF to: 004f86dc (CONDITIONAL_JUMP)
// 004f86ce: CMP EAX,0xa
// 004f86d1: JBE 0x004f8427
//   XREF to: 004f8427 (CONDITIONAL_JUMP)
// 004f86d7: JMP 0x004f81b6
//   XREF to: 004f81b6 (UNCONDITIONAL_JUMP)
// 004f86dc: JBE 0x004f81b6
//   Label: LAB_004f86dc
//   XREF to: 004f81b6 (CONDITIONAL_JUMP)
// 004f86e2: CMP EAX,0x10
// 004f86e5: JBE 0x004f81b6
//   XREF to: 004f81b6 (CONDITIONAL_JUMP)
// 004f86eb: CMP EAX,0x15
// 004f86ee: JZ 0x004f8427
//   XREF to: 004f8427 (CONDITIONAL_JUMP)
// 004f86f4: JMP 0x004f81b6
//   XREF to: 004f81b6 (UNCONDITIONAL_JUMP)
// 004f86f9: JBE 0x004f8427
//   Label: LAB_004f86f9
//   XREF to: 004f8427 (CONDITIONAL_JUMP)
// 004f86ff: CMP EAX,0x2
// 004f8702: JBE 0x004f8427
//   XREF to: 004f8427 (CONDITIONAL_JUMP)
// 004f8708: CMP EAX,0x3
// 004f870b: JZ 0x004f8427
//   XREF to: 004f8427 (CONDITIONAL_JUMP)
// 004f8711: JMP 0x004f81b6
//   XREF to: 004f81b6 (UNCONDITIONAL_JUMP)
// 004f8716: MOV dword ptr [EBX + 0x2598],EAX
//   Label: LAB_004f8716
// 004f871c: JMP 0x004f82e5
//   XREF to: 004f82e5 (UNCONDITIONAL_JUMP)
// 004f8721: CMP dword ptr [EBX + 0xbe38],0x0
//   Label: LAB_004f8721
// 004f8728: JZ 0x004f82f8
//   XREF to: 004f82f8 (CONDITIONAL_JUMP)
// 004f872e: PUSH 0x1
// 004f8730: PUSH 0x11
// 004f8732: PUSH EDI
// 004f8733: JMP 0x004f82f0
//   XREF to: 004f82f0 (UNCONDITIONAL_JUMP)
// 004f8738: MOV dword ptr [ESP + 0x60],ECX
//   Label: LAB_004f8738
//   XREF to: Stack[-0x38] (WRITE)
// 004f873c: MOV dword ptr [ESP + 0x64],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 004f8740: MOV dword ptr [ESP + 0x68],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 004f8744: LEA EDX,[EBX + 0x23ac]
// 004f874a: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f874d: FLD ST0
// 004f874f: MOV EAX,dword ptr [EDX]
// 004f8751: FMUL double ptr [0x0062f6fb]
//   XREF to: 0062f6fb (READ)
// 004f8757: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004f875b: MOV EAX,dword ptr [EDX + 0x4]
// 004f875e: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004f8762: MOV EAX,dword ptr [EDX + 0x8]
// 004f8765: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004f8769: FLD float ptr [EBX + 0x242c]
// 004f876f: FXCH
// 004f8771: FSUBR ST0,ST1
// 004f8773: LEA EDX,[EBX + 0x2428]
// 004f8779: FSTP ST1
// 004f877b: FSTP float ptr [EBX + 0x242c]
// 004f8781: FLD float ptr [EDX]
// 004f8783: FMUL ST1
// 004f8785: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x50] (WRITE)
// 004f8789: FLD float ptr [EDX + 0x4]
// 004f878c: FMUL ST1
// 004f878e: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x4c] (WRITE)
// 004f8792: FMUL float ptr [EDX + 0x8]
// 004f8795: LEA EAX,[EBX + 0x241c]
// 004f879b: FLD float ptr [ESP + 0x60]
//   XREF to: Stack[-0x38] (READ)
// 004f879f: FLD float ptr [ESP + 0x64]
//   XREF to: Stack[-0x34] (READ)
// 004f87a3: FLD float ptr [ESP + 0x68]
//   XREF to: Stack[-0x30] (READ)
// 004f87a7: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x50] (READ)
// 004f87ab: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x4c] (READ)
// 004f87af: FXCH ST5
// 004f87b1: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x48] (WRITE)
// 004f87b5: FADD float ptr [EAX]
// 004f87b7: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x48] (READ)
// 004f87bb: FXCH
// 004f87bd: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x5c] (WRITE)
// 004f87c1: FXCH ST4
// 004f87c3: FADD float ptr [EAX + 0x4]
// 004f87c6: FXCH ST3
// 004f87c8: FADD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x5c] (READ)
// 004f87cc: FXCH ST3
// 004f87ce: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x58] (WRITE)
// 004f87d2: FXCH ST3
// 004f87d4: FADD float ptr [EAX + 0x8]
// 004f87d7: FXCH
// 004f87d9: FADD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x58] (READ)
// 004f87dd: FXCH
// 004f87df: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x54] (WRITE)
// 004f87e3: FXCH
// 004f87e5: FSTP float ptr [ESP + 0x60]
//   XREF to: Stack[-0x38] (WRITE)
// 004f87e9: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x38] (DATA)
// 004f87ed: FSTP float ptr [ESP + 0x64]
//   XREF to: Stack[-0x34] (WRITE)
// 004f87f1: PUSH EAX
// 004f87f2: FADD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x54] (READ)
// 004f87f6: PUSH EBX
// 004f87f7: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x30] (WRITE)
// 004f87fb: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 004f8800: ADD ESP,0x8
// 004f8803: JMP 0x004f82f8
//   XREF to: 004f82f8 (UNCONDITIONAL_JUMP)
