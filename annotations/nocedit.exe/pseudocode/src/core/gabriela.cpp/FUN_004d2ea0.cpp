// Name: core_gabriela.cpp_FUN_004d2ea0
// Address: 004d2ea0
// Address Range: [[004d2ea0, 004d418f]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d2ea0()
// Globals:
//   void* switchdataD_004d2e8c = 004d400d
//   TerminatedCString s_s_confused_while_walking_0062ae13
//   TerminatedCString s_flashlit_wav_0062ae3d
//   TerminatedCString s_draw_f_wav_1_5_0062ae4a
//   TerminatedCString s_undraw_s_wav_7_0062ae5b
//   double DOUBLE_0062ae6d = 12.5663706140000
//   double DOUBLE_0062ae75 = 0.333333333333333
//   float FLOAT_0062ae7d = 0.5
//   double DOUBLE_0062ae85 = 3
//   double DOUBLE_0062ae8d = 5
//   double DOUBLE_0062ae95 = 0.785398163375000
//   double DOUBLE_0062ae9d = 3.14159265350000
//   double DOUBLE_0062aea5 = -1.57079632675000
//   float FLOAT_0062aead = 3.141593
//   double DOUBLE_0062aeb5 = 1.57079632675000
//   float FLOAT_0062aebd = -3.141593
//   double DOUBLE_0062aec5 = 0.0100000000000000
//   double DOUBLE_0062aecd = 32
//   double DOUBLE_0062aed5 = 2
//   double DOUBLE_0062aedd = 0.140000000000000
//   double DOUBLE_0062aee5 = -0.150000000000000
//   double DOUBLE_0062aeed = 0.900000000000000
//   double DOUBLE_0062aef5 = 25
//   undefined4 DAT_0065e7a8
//   undefined4 DAT_0065e7ac
//   undefined4 DAT_0065e7b4
//   undefined4 DAT_0065e7bc
//   undefined4 DAT_0065e7e8
//   undefined4 DAT_0065e7ec
//   undefined4 DAT_0065e7f0
//   CConsole* g_CConsolePtr = 0083b1a4
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 g_CAmmoBoxClassInfo.name_hash
//   undefined4 g_CBoxActorClassInfo.name_hash
//   undefined4 g_CLightActorClassInfo.name_hash
//   CConsole g_ConsolePtr
//   undefined4 g_CDynamiteClassInfo.name_hash
//   undefined4 DAT_02d7b808
//   undefined4 DAT_02d7b80c
//   undefined4 DAT_02d7b810
//   CGame g_CGameInstance
//   undefined4 DAT_02d81cc4
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_ammobox.cpp_LogConsoleOpenPCTFile_FUN_00411690
//   core_boxactor.cpp_FUN_00422390
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042ca70
//   core_cloth.cpp_FUN_0043ab80
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_gabriela.cpp_FUN_004d4190
//   core_gabriela.cpp_FUN_004d4890
//   core_gabriela.cpp_FUN_004d4c90
//   core_gabriela.cpp_FUN_004d4ce0
//   core_gabriela.cpp_FUN_004d4cf0
//   core_gabriela.cpp_FUN_004d4d80
//   core_gabriela.cpp_FUN_004d5550
//   core_gabriela.cpp_FUN_004d5c60
//   core_gabriela.cpp_FUN_004d5f70
//   core_gabriela.cpp_FUN_004d5fe0
//   core_gabriela.cpp_FUN_004d6050
//   core_gabriela.cpp_FUN_004d6540
//   core_gabriela.cpp_FUN_004d6d40
//   core_gabriela.cpp_PickupSomething_FUN_004d5870
//   core_game.cpp_CGame_FUN_004e0bb0
//   core_hero.cpp_FUN_004f2af0
//   core_hero.cpp_FUN_004f2c40
//   core_hero.cpp_FUN_004f2d70
//   core_hero.cpp_FUN_004f2ed0
//   core_hero.cpp_FUN_004f2f50
//   core_hero.cpp_FUN_004f30f0
//   core_hero.cpp_FUN_004f3120
//   core_hero.cpp_FUN_004f3350
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_FUN_0052dd20
//   core_motion.cpp_CMotionController_FUN_0052e2b0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d2ea0(undefined4 param_1, undefined4
   param_2) */

void core_gabriela_cpp_FUN_004d2ea0(void)

{
  CLocation *pCVar1;
  CDeformableModelInstance *this_ptr;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  CGame *pCVar9;
  SCollisionInfo *pSVar10;
  int iVar11;
  CVector3f *pCVar12;
  CVector3f *pCVar13;
  CDemonActor *pCVar14;
  float fVar15;
  int iVar16;
  BADSPACEBASE *in_ESP;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  CCharacter *pCVar21;
  char *sound_name;
  SCollisionInfo *in_stack_fffffe24;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  CVector3f local_190;
  CVector3f local_184;
  float local_178;
  float local_174;
  float local_170;
  CVector3f local_16c;
  float local_160;
  float local_15c;
  float local_158;
  CVector3f local_154;
  CVector3f local_148;
  CVector3f local_13c;
  CVector3f local_130;
  CVector3f local_124;
  CVector3f local_118 [2];
  CVector3f local_100;
  CVector3f local_f4;
  CVector3f local_e8;
  CVector3f local_dc;
  CVector3f local_d0;
  CVector3f local_c4;
  CVector3f local_b8;
  float local_ac;
  undefined4 local_a8;
  float local_a4;
  CVector3f local_a0;
  CVector3f local_94;
  float local_88;
  float local_84;
  float local_80;
  CVector3f local_7c;
  CVector3f local_70;
  double local_64;
  CDemonActor *local_54;
  int local_50;
  CDemonActor_vtable *local_4c;
  float local_48;
  float local_44;
  float local_40;
  CMotionController *local_3c;
  float local_38;
  float local_34;
  float local_30;
  CDemonActor *local_2c;
  float local_28;
  CDemonActor_vtable *local_24;
  float local_20;
  CDemonActor_vtable *local_1c;
  float local_18;
  CDemonActor_vtable *local_14;
  
  iVar11 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar11 == 0) {
    return;
  }
  if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) == 2) {
    core_gabriela_cpp_FUN_004d4190();
  }
  fVar15 = *(float *)in_stack_00000004[1].base_actor.actor_name - in_stack_00000008;
  *(float *)in_stack_00000004[1].base_actor.actor_name = fVar15;
  if (fVar15 < 0.0) {
    in_stack_00000004[1].base_actor.actor_name[0] = '\0';
    in_stack_00000004[1].base_actor.actor_name[1] = '\0';
    in_stack_00000004[1].base_actor.actor_name[2] = '\0';
    in_stack_00000004[1].base_actor.actor_name[3] = '\0';
  }
  pCVar12 = (CVector3f *)core_gabriela_cpp_FUN_004d4cf0();
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&in_stack_00000004->base_actor,&local_184,pCVar12);
  (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
  (in_stack_00000004->model).accumulated_root_motion.y =
       (in_stack_00000004->model).accumulated_root_motion.z;
  (in_stack_00000004->model).accumulated_root_motion.x =
       (in_stack_00000004->model).accumulated_root_motion.y;
  core_gabriela_cpp_FUN_004d4890();
  bVar4 = 0.0 < in_stack_00000004->hit_points;
  bVar17 = in_stack_00000004->grabbed_by == (CDemonActor *)0x0;
  bVar18 = *(int *)(in_stack_00000004[2].cloth_data + 0x54c4) == 0;
  bVar19 = *(int *)(in_stack_00000004[2].cloth_data + 0x54cc) == 0;
  local_14 = (CDemonActor_vtable *)
             core_motion_cpp_CMotionController_FUN_0052dd20
                       (&(in_stack_00000004->model).motion_controller);
  bVar5 = (float)local_14 <= 0.0;
  local_14 = (CDemonActor_vtable *)
             core_motion_cpp_CMotionController_FUN_0052dd20
                       (&(in_stack_00000004->model).motion_controller);
  bVar6 = (float)local_14 <= 0.0;
  local_14 = (CDemonActor_vtable *)
             core_motion_cpp_CMotionController_FUN_0052dd20
                       (&(in_stack_00000004->model).motion_controller);
  bVar7 = (float)local_14 <= 0.0;
  local_14 = (CDemonActor_vtable *)
             core_motion_cpp_CMotionController_FUN_0052dd20
                       (&(in_stack_00000004->model).motion_controller);
  bVar8 = (float)local_14 <= 0.0;
  in_stack_00000004->field2_0x240c[0x2c] = '\0';
  in_stack_00000004->field2_0x240c[0x2d] = '\0';
  in_stack_00000004->field2_0x240c[0x2e] = '\0';
  in_stack_00000004->field2_0x240c[0x2f] = '\0';
  iVar11 = *(int *)(in_stack_00000004->field2_0x240c + 4);
  in_stack_00000004->field2_0x240c[0x28] = '\0';
  in_stack_00000004->field2_0x240c[0x29] = '\0';
  in_stack_00000004->field2_0x240c[0x2a] = '\0';
  in_stack_00000004->field2_0x240c[0x2b] = '\0';
  local_20 = 0.0;
  if (iVar11 != 0) {
    this_ptr = &in_stack_00000004->model;
    local_14 = (CDemonActor_vtable *)
               core_motion_cpp_CMotionController_FUN_0052dd20(&this_ptr->motion_controller);
    *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
         (float)local_14 * _DAT_02d7b808 + *(float *)(in_stack_00000004->field2_0x240c + 0x28);
    local_14 = (CDemonActor_vtable *)
               core_motion_cpp_CMotionController_FUN_0052dd20(&this_ptr->motion_controller);
    *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
         (float)local_14 * _DAT_02d7b80c + *(float *)(in_stack_00000004->field2_0x240c + 0x28);
    local_14 = (CDemonActor_vtable *)
               core_motion_cpp_CMotionController_FUN_0052dd20(&this_ptr->motion_controller);
    *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x28) - (float)local_14 * _DAT_02d7b810;
    local_14 = (CDemonActor_vtable *)
               core_motion_cpp_CMotionController_FUN_0052dd20(&this_ptr->motion_controller);
    local_20 = 0.0 - (float)local_14 * _DAT_0065e7e8;
    local_14 = (CDemonActor_vtable *)
               core_motion_cpp_CMotionController_FUN_0052dd20(&this_ptr->motion_controller);
    pCVar9 = g_CGamePtr;
    fVar15 = (float)local_14 * _DAT_0065e7e8;
    *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * (float)DOUBLE_0062ae6d
    ;
    local_20 = fVar15 + local_20;
    if (pCVar9->letterbox_mode != 0) {
      *(float *)(in_stack_00000004->field2_0x240c + 0x2c) =
           *(float *)(in_stack_00000004->field2_0x240c + 0x2c) * (float)DOUBLE_0062ae75;
    }
  }
  local_20 = local_20 * in_stack_00000008;
  iVar11 = *(int *)(in_stack_00000004[2].cloth_data + 0x54cc);
  *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
       *(float *)(in_stack_00000004->field2_0x240c + 0x28) * in_stack_00000008;
  if (iVar11 == 0) {
    if (in_stack_00000004->grabbed_by != (CDemonActor *)0x0) {
      if (in_stack_00000004->grabbed_type == 0) {
        pCVar12 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                            (&in_stack_00000004->base_actor,&local_124,
                             &(in_stack_00000004->grabbed_by->location).position);
        pCVar12 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                            (local_118,pCVar12);
        local_14 = (CDemonActor_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar12->y);
        local_18 = (float)local_14;
        if ((float)local_14 < (float)DOUBLE_0062aea5) {
          local_18 = (float)local_14 + FLOAT_0062aead;
        }
        if ((float)DOUBLE_0062aeb5 < local_18) {
          local_18 = local_18 + FLOAT_0062aebd;
        }
        local_28 = in_stack_00000008 * (float)DOUBLE_0062ae9d;
        local_34 = -local_28;
        if (local_18 < local_34) {
          local_18 = local_34;
        }
        if (local_28 < local_18) {
          local_18 = local_28;
        }
        (in_stack_00000004->base_actor).orient.bank =
             (in_stack_00000004->base_actor).orient.bank + local_18;
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
                  (&in_stack_00000004->base_actor);
      }
      local_54 = in_stack_00000004->grabbed_by;
      local_14 = local_54->vtable;
      pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                          (&in_stack_00000004->model,&local_13c,0);
      pCVar14 = local_54;
      pCVar21 = in_stack_00000004;
      fVar15 = (*local_14[1].cylinderGroundCheck)(local_54,(float)in_stack_00000004,pCVar12);
      if (fVar15 == 0.0) {
        in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
      }
      else if (in_stack_00000004->grabbed_by != (CDemonActor *)0x0) {
        pSVar10 = (SCollisionInfo *)&in_stack_00000004->model;
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0) goto LAB_004d3215;
        goto LAB_004d321d;
      }
LAB_004d385a:
      pCVar12 = (CVector3f *)&DAT_00000001;
      pCVar21 = (CCharacter *)0x0;
      goto LAB_004d320e;
    }
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x54c4) == 0) {
      iVar11 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
      pCVar14 = (CDemonActor *)&in_stack_00000004->model;
      if (iVar11 == 0) {
        if (bVar8 && (bVar7 && (bVar6 && (bVar5 && (bVar19 && (bVar18 && (bVar17 && bVar4))))))) {
          iVar11 = core_motion_cpp_CMotionController_FUN_0052dab0((CMotionController *)pCVar14);
          uVar3 = *(uint *)(iVar11 + 0x24);
          if (uVar3 < 0xe) {
            if ((((uVar3 == 0) || (uVar3 < 2)) || (uVar3 < 3)) || (uVar3 == 3)) goto LAB_004d3af9;
          }
          else if (uVar3 < 0xf) {
            local_2c = core_actor_cpp_castToClassHash_FUN_0040c790
                                 (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c0),
                                  g_CAmmoBoxClassInfo.name_hash);
            if (local_2c != (CDemonActor *)0x0) {
              local_14 = (CDemonActor_vtable *)core_motion_cpp_CMotionController_FUN_0052e2b0();
              core_ammobox_cpp_LogConsoleOpenPCTFile_FUN_00411690();
            }
          }
          else if (uVar3 < 0x11) {
            if (uVar3 == 0x10) {
LAB_004d3af9:
              if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
                iVar11 = 0;
                if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 8) != 0) {
                  if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x10) == 0) {
                    iVar11 = 1;
                  }
                  else {
                    iVar11 = 2;
                  }
                }
                if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0xc) != 0) {
                  iVar11 = 3;
                }
                local_3c = &(in_stack_00000004->model).motion_controller;
                *(float *)(in_stack_00000004->field2_0x240c + 0xc) =
                     (float)in_stack_00000004[1].base_actor.location.area_id *
                     *(float *)(in_stack_00000004->field2_0x240c + 0x2c);
                *(float *)(in_stack_00000004->field2_0x240c + 0x18) =
                     *(float *)(in_stack_00000004->field2_0x240c + 0x28) +
                     *(float *)(in_stack_00000004->field2_0x240c + 0x18);
                *(float *)(in_stack_00000004->field2_0x240c + 0x10) =
                     *(float *)(in_stack_00000004->field2_0x240c + 0x10) + local_20;
                iVar16 = core_motion_cpp_CMotionController_FUN_0052dab0(local_3c);
                if (iVar11 != *(int *)(iVar16 + 0x24)) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_3c,iVar11,1);
                }
                if ((*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18) != 0) &&
                   (iVar11 = core_gabriela_cpp_PickupSomething_FUN_004d5870(), iVar11 == 0)) {
                  core_gabriela_cpp_FUN_004d6050();
                }
              }
            }
          }
          else if ((uVar3 < 0x12) || ((0x13 < uVar3 && ((uVar3 < 0x15 || (uVar3 == 0x15))))))
          goto LAB_004d3af9;
        }
        goto LAB_004d321d;
      }
      uVar3 = *(uint *)(in_stack_00000004->field11_0x25a0 + 0x10);
      pSVar10 = in_stack_fffffe24;
      if (uVar3 < 2) {
        if (uVar3 != 1) goto LAB_004d385a;
        pCVar21 = (CCharacter *)&DAT_00000001;
        pCVar12 = (CVector3f *)&DAT_00000001;
      }
      else {
        if (2 < uVar3) {
          if (uVar3 != 3) {
            pCVar12 = (CVector3f *)&DAT_00000001;
            pCVar21 = (CCharacter *)0x0;
            goto LAB_004d320e;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    ((CMotionController *)pCVar14,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
          goto LAB_004d321d;
        }
        pCVar12 = (CVector3f *)&DAT_00000001;
        pCVar21 = (CCharacter *)&DAT_00000002;
      }
      goto LAB_004d3215;
    }
    local_50 = iVar11;
    if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0) {
      (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54c4) + 0x154) + 0x14))();
      local_a0.x = (local_1b4 + local_1a8) * FLOAT_0062ae7d;
      local_a0.y = (local_1b0 + local_1a4) * FLOAT_0062ae7d;
      local_a0.z = (local_1ac + local_1a0) * FLOAT_0062ae7d;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c4),&local_148,&local_a0);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                (&in_stack_00000004->base_actor,&local_b8,&local_148);
      pCVar12 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                          (&local_dc,&local_b8);
      local_14 = (CDemonActor_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar12->y);
      local_88 = local_1a8 - local_1b4;
      local_80 = local_1a0 - local_1ac;
      local_ac = local_88 * FLOAT_0062ae7d;
      local_a4 = local_80 * FLOAT_0062ae7d;
      local_a8 = 0;
      local_84 = local_1a4 - local_1b0;
      local_1c = local_14;
      if ((((local_b8.z - SQRT(local_a4 * local_a4 + local_ac * local_ac) < (float)DOUBLE_0062ae85)
           && (local_64 = (double)local_b8.y, 1.0 < local_64)) && (local_64 < DOUBLE_0062ae8d)) &&
         (ABS((float)local_14) < (float)DOUBLE_0062ae95)) {
        local_24 = (CDemonActor_vtable *)(in_stack_00000008 * (float)DOUBLE_0062ae9d);
        if ((float)local_14 < -(float)local_24) {
          local_1c = (CDemonActor_vtable *)-(float)local_24;
        }
        if ((float)local_24 < (float)local_1c) {
          local_1c = local_24;
        }
        (in_stack_00000004->base_actor).orient.bank =
             (in_stack_00000004->base_actor).orient.bank + (float)local_1c;
        goto LAB_004d321d;
      }
    }
    if (local_50 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,0,1);
      core_hero_cpp_FUN_004f3350();
    }
  }
  else {
    pCVar12 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54cc),&local_130,
                         (CVector3f *)(iVar11 + 0x2d4));
    if ((in_stack_00000004->base_actor).location.position.y <= pCVar12->y) goto LAB_004d321d;
    in_stack_00000004[2].cloth_data[0x54cc] = '\0';
    in_stack_00000004[2].cloth_data[0x54cd] = '\0';
    in_stack_00000004[2].cloth_data[0x54ce] = '\0';
    in_stack_00000004[2].cloth_data[0x54cf] = '\0';
    local_f4.x = 0.0;
    local_f4.y = 0.5;
    local_f4.z = 4.0;
    pCVar13 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        (&in_stack_00000004->base_actor,&local_c4,&local_f4);
    pCVar1 = &(in_stack_00000004->base_actor).location;
    (pCVar1->position).x = pCVar13->x + (pCVar1->position).x;
    (in_stack_00000004->base_actor).location.position.y =
         pCVar13->y + (in_stack_00000004->base_actor).location.position.y;
    pCVar12 = (CVector3f *)0x0;
    (in_stack_00000004->base_actor).location.position.z =
         pCVar13->z + (in_stack_00000004->base_actor).location.position.z;
    pCVar21 = *(CCharacter **)(in_stack_00000004->cloth_data + 0x344);
    local_14 = (CDemonActor_vtable *)
               (*((in_stack_00000004->base_actor).vtable)->cylinderGroundCheck)
                         (&in_stack_00000004->base_actor,(float)pCVar21,(CVector3f *)0x0);
    *(CDemonActor_vtable **)(in_stack_00000004->field2_0x240c + 8) = local_14;
    *(uint *)(in_stack_00000004->field2_0x240c + 4) =
         (uint)((in_stack_00000004->base_actor).location.position.y <
               *(float *)(in_stack_00000004->field2_0x240c + 8) + (float)DOUBLE_0062aec5);
LAB_004d320e:
    pCVar14 = (CDemonActor *)&in_stack_00000004->model;
    pSVar10 = in_stack_fffffe24;
LAB_004d3215:
    in_stack_fffffe24 = pSVar10;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)pCVar14,(int)pCVar21,(int)pCVar12);
  }
LAB_004d321d:
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54cc) == 0) {
    if (((bVar8 && (bVar7 && (bVar6 && (bVar5 && (bVar19 && (bVar18 && (bVar17 && bVar4))))))) ||
        (iVar11 = core_motion_cpp_CMotionController_FUN_0052dab0
                            (&(in_stack_00000004->model).motion_controller),
        *(int *)(iVar11 + 0x24) == 0xd)) || ((in_stack_00000004->base_actor).field11_0xdc != 0)) {
      local_178 = *(float *)(in_stack_00000004->field2_0x240c + 0x10);
      local_174 = *(float *)(in_stack_00000004->field2_0x240c + 0x14);
      local_170 = *(float *)(in_stack_00000004->field2_0x240c + 0x18);
      iVar11 = core_motion_cpp_CMotionController_FUN_0052dab0
                         (&(in_stack_00000004->model).motion_controller);
      uVar3 = *(uint *)(iVar11 + 0x24);
      if (uVar3 < 3) {
        if (uVar3 == 0) {
          bVar20 = true;
LAB_004d3cb2:
          if (!bVar20) {
LAB_004d3cb4:
            local_178 = local_178 + (in_stack_00000004->model).accumulated_root_motion.x;
            local_174 = local_174 + (in_stack_00000004->model).accumulated_root_motion.y;
            local_170 = local_170 + (in_stack_00000004->model).accumulated_root_motion.z;
          }
        }
      }
      else if (3 < uVar3) {
        if (uVar3 < 0x11) {
          bVar20 = uVar3 == 0x10;
          goto LAB_004d3cb2;
        }
        if (0x11 < uVar3) {
          if (uVar3 < 0x14) goto LAB_004d3cb4;
          if (0x14 < uVar3) {
            bVar20 = uVar3 == 0x15;
            goto LAB_004d3cb2;
          }
        }
      }
      *(float *)(in_stack_00000004->field2_0x240c + 0x20) =
           *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
           in_stack_00000008 * (float)DOUBLE_0062aecd;
      local_160 = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
      local_15c = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
      local_158 = in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x24);
      local_178 = local_178 + local_160;
      local_174 = local_174 + local_15c;
      local_170 = local_170 + local_158;
      core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
    }
  }
  else {
    pCVar12 = &(in_stack_00000004->model).accumulated_root_motion;
    pCVar13 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        (&in_stack_00000004->base_actor,&local_70,pCVar12);
    pCVar1 = &(in_stack_00000004->base_actor).location;
    (pCVar1->position).x = pCVar13->x + (pCVar1->position).x;
    (in_stack_00000004->base_actor).location.position.y =
         pCVar13->y + (in_stack_00000004->base_actor).location.position.y;
    (in_stack_00000004->base_actor).location.position.z =
         pCVar13->z + (in_stack_00000004->base_actor).location.position.z;
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    pCVar12->x = (in_stack_00000004->model).accumulated_root_motion.y;
  }
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  if (((bVar8 && (bVar7 && (bVar6 && (bVar5 && (bVar19 && (bVar18 && (bVar17 && bVar4))))))) &&
      (in_stack_00000004[1].base_actor.location.position.x != 0.0)) &&
     (*(int *)(in_stack_00000004[2].cloth_data + 0x5388) != 0)) {
    bVar2 = in_stack_00000004[2].cloth_data[0x54f4];
    if ((bVar2 & 3) == 0) {
      in_stack_00000004[2].cloth_data[0x54f4] = bVar2 | 2;
    }
    else {
      in_stack_00000004[2].cloth_data[0x54f4] = bVar2 & 0xfc;
    }
  }
  pCVar14 = core_actor_cpp_castToClassHash_FUN_0040c790
                      (in_stack_00000004->carry_hands[0].carry_actor,
                       g_CLightActorClassInfo.name_hash);
  if (pCVar14 != (CDemonActor *)0x0) {
    if (((*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x1c) != 0) &&
        (bVar8 && (bVar7 && (bVar6 && (bVar5 && (bVar19 && (bVar18 && (bVar17 && bVar4)))))))) &&
       (pCVar14[0x1a].orient.bank = (float)(uint)(pCVar14[0x1a].orient.bank == 0.0),
       pCVar14[4].scale.y == 1)) {
      (*((in_stack_00000004->base_actor).vtable)->playSound)
                (&in_stack_00000004->base_actor,"flashlit.wav");
    }
    if (pCVar14[0x1a].orient.bank != 0.0) {
      *(float *)(in_stack_00000004[2].cloth_data + 0x5508) =
           in_stack_00000004[1].base_actor.orient.pitch * (float)DOUBLE_0062ae9d *
           (float)DOUBLE_0062aed5 * in_stack_00000008 +
           *(float *)(in_stack_00000004[2].cloth_data + 0x5508);
      local_48 = (float)core_gabriela_cpp_FUN_004d4c90();
      local_14 = (CDemonActor_vtable *)local_48;
      local_4c = (CDemonActor_vtable *)core_gabriela_cpp_FUN_004d4ce0();
      if (*(float *)(in_stack_00000004[2].cloth_data + 0x5508) < local_48) {
        *(float *)(in_stack_00000004[2].cloth_data + 0x5508) = local_48;
      }
      local_14 = local_4c;
      if ((float)local_4c < *(float *)(in_stack_00000004[2].cloth_data + 0x5508)) {
        *(CDemonActor_vtable **)(in_stack_00000004[2].cloth_data + 0x5508) = local_4c;
      }
    }
  }
  if ((in_stack_00000004[2].cloth_data[0x54f4] & 1U) == 0) {
    fVar15 = *(float *)(in_stack_00000004[2].cloth_data + 0x54f8) -
             in_stack_00000008 / _DAT_0065e7ac;
    *(float *)(in_stack_00000004[2].cloth_data + 0x54f8) = fVar15;
    if (fVar15 < 0.0) {
      in_stack_00000004[2].cloth_data[0x54f8] = '\0';
      in_stack_00000004[2].cloth_data[0x54f9] = '\0';
      in_stack_00000004[2].cloth_data[0x54fa] = '\0';
      in_stack_00000004[2].cloth_data[0x54fb] = '\0';
    }
  }
  else {
    fVar15 = in_stack_00000008 / _DAT_0065e7a8 +
             *(float *)(in_stack_00000004[2].cloth_data + 0x54f8);
    *(float *)(in_stack_00000004[2].cloth_data + 0x54f8) = fVar15;
    if (1.0 < fVar15) {
      in_stack_00000004[2].cloth_data[0x54f8] = '\0';
      in_stack_00000004[2].cloth_data[0x54f9] = '\0';
      in_stack_00000004[2].cloth_data[0x54fa] = -0x80;
      in_stack_00000004[2].cloth_data[0x54fb] = '?';
    }
  }
  if ((in_stack_00000004[2].cloth_data[0x54f4] & 2U) == 0) {
    local_30 = *(float *)(in_stack_00000004[2].cloth_data + 0x54fc);
    fVar15 = local_30 - in_stack_00000008 / _DAT_0065e7ac;
    *(float *)(in_stack_00000004[2].cloth_data + 0x54fc) = fVar15;
    if (fVar15 < 0.0) {
      in_stack_00000004[2].cloth_data[0x54fc] = '\0';
      in_stack_00000004[2].cloth_data[0x54fd] = '\0';
      in_stack_00000004[2].cloth_data[0x54fe] = '\0';
      in_stack_00000004[2].cloth_data[0x54ff] = '\0';
    }
    local_38 = _DAT_0065e7b4 + (float)DOUBLE_0062aedd;
    if ((local_38 <= local_30) && (*(float *)(in_stack_00000004[2].cloth_data + 0x54fc) < local_38))
    {
      sound_name = "undraw-s.wav @ .7";
      goto LAB_004d33ec;
    }
  }
  else {
    local_44 = *(float *)(in_stack_00000004[2].cloth_data + 0x54fc);
    fVar15 = in_stack_00000008 / _DAT_0065e7a8 + local_44;
    *(float *)(in_stack_00000004[2].cloth_data + 0x54fc) = fVar15;
    if (1.0 < fVar15) {
      in_stack_00000004[2].cloth_data[0x54fc] = '\0';
      in_stack_00000004[2].cloth_data[0x54fd] = '\0';
      in_stack_00000004[2].cloth_data[0x54fe] = -0x80;
      in_stack_00000004[2].cloth_data[0x54ff] = '?';
    }
    local_40 = _DAT_0065e7b4 + (float)DOUBLE_0062aee5;
    if ((local_44 <= local_40) && (local_40 < *(float *)(in_stack_00000004[2].cloth_data + 0x54fc)))
    {
      core_game_cpp_CGame_FUN_004e0bb0(g_CGamePtr);
      sound_name = "draw-f.wav @ 1.5";
LAB_004d33ec:
      (*((in_stack_00000004->base_actor).vtable)->playSound)
                (&in_stack_00000004->base_actor,sound_name);
    }
  }
  if ((in_stack_00000004[2].cloth_data[0x54f4] & 3U) == 0) {
    fVar15 = *(float *)(in_stack_00000004[2].cloth_data + 0x5500) -
             in_stack_00000008 / _DAT_0065e7ac;
    *(float *)(in_stack_00000004[2].cloth_data + 0x5500) = fVar15;
    if (fVar15 < 0.0) {
      in_stack_00000004[2].cloth_data[0x5500] = '\0';
      in_stack_00000004[2].cloth_data[0x5501] = '\0';
      in_stack_00000004[2].cloth_data[0x5502] = '\0';
      in_stack_00000004[2].cloth_data[0x5503] = '\0';
    }
  }
  else {
    fVar15 = in_stack_00000008 / _DAT_0065e7a8 +
             *(float *)(in_stack_00000004[2].cloth_data + 0x5500);
    *(float *)(in_stack_00000004[2].cloth_data + 0x5500) = fVar15;
    if (1.0 < fVar15) {
      in_stack_00000004[2].cloth_data[0x5500] = '\0';
      in_stack_00000004[2].cloth_data[0x5501] = '\0';
      in_stack_00000004[2].cloth_data[0x5502] = -0x80;
      in_stack_00000004[2].cloth_data[0x5503] = '?';
    }
  }
  if (bVar8 && (bVar7 && (bVar6 && (bVar5 && (bVar19 && (bVar18 && (bVar17 && bVar4))))))) {
    if (((pCVar14 == (CDemonActor *)0x0) || (pCVar14[0x1a].orient.bank == 0.0)) ||
       (iVar11 = core_motion_cpp_CMotionController_FUN_0052dab0
                           (&(in_stack_00000004->model).motion_controller),
       *(int *)(iVar11 + 0x24) == 5)) {
      fVar15 = in_stack_00000008 / _DAT_0065e7ac;
      goto LAB_004d344b;
    }
    fVar15 = in_stack_00000008 / _DAT_0065e7a8 +
             *(float *)(in_stack_00000004[2].cloth_data + 0x5504);
  }
  else {
    fVar15 = (in_stack_00000008 / _DAT_0065e7ac) * (float)DOUBLE_0062ae85;
LAB_004d344b:
    fVar15 = *(float *)(in_stack_00000004[2].cloth_data + 0x5504) - fVar15;
  }
  *(float *)(in_stack_00000004[2].cloth_data + 0x5504) = fVar15;
  if (*(float *)(in_stack_00000004[2].cloth_data + 0x5504) < 0.0) {
    in_stack_00000004[2].cloth_data[0x5504] = '\0';
    in_stack_00000004[2].cloth_data[0x5505] = '\0';
    in_stack_00000004[2].cloth_data[0x5506] = '\0';
    in_stack_00000004[2].cloth_data[0x5507] = '\0';
  }
  if ((float)DOUBLE_0062aeed < *(float *)(in_stack_00000004[2].cloth_data + 0x5504)) {
    in_stack_00000004[2].cloth_data[0x5504] = 'f';
    in_stack_00000004[2].cloth_data[0x5505] = 'f';
    in_stack_00000004[2].cloth_data[0x5506] = 'f';
    in_stack_00000004[2].cloth_data[0x5507] = '?';
  }
  core_gabriela_cpp_FUN_004d6540();
  fVar15 = *(float *)(in_stack_00000004[2].cloth_data + 0x552c) - in_stack_00000008 / _DAT_0065e7bc;
  *(float *)(in_stack_00000004[2].cloth_data + 0x552c) = fVar15;
  if (((fVar15 <= 0.0) &&
      (in_stack_00000004[2].cloth_data[0x552c] = '\0',
      in_stack_00000004[2].cloth_data[0x552d] = '\0', in_stack_00000004[2].cloth_data[0x552e] = '\0'
      , in_stack_00000004[2].cloth_data[0x552f] = '\0',
      bVar8 && (bVar7 && (bVar6 && (bVar5 && (bVar19 && (bVar18 && (bVar17 && bVar4)))))))) &&
     ((*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0 &&
      (*(int *)(in_stack_00000004[2].cloth_data + 0x550c) == 0)))) {
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) {
      if ((*(float *)(in_stack_00000004[2].cloth_data + 0x54fc) <= 0.0) &&
         (iVar11 = core_hero_cpp_FUN_004f2af0(), iVar11 == 0)) {
        iVar11 = core_hero_cpp_FUN_004f2d70();
        switch(iVar11) {
        case 0:
        case 1:
          break;
        case 2:
        case 3:
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,0x12,1);
          break;
        default:
          core_hero_cpp_FUN_004f2ed0();
        }
        if ((iVar11 == 0) && (iVar11 = core_hero_cpp_FUN_004f2c40(), iVar11 == 0)) {
          iVar11 = core_hero_cpp_FUN_004f3120();
          if (iVar11 == 0) {
            iVar11 = core_hero_cpp_FUN_004f2f50();
            if (iVar11 == 0) {
              core_gabriela_cpp_FUN_004d5c60();
            }
            else {
              core_hero_cpp_FUN_004f30f0();
            }
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->model).motion_controller,0xd,1);
          }
        }
      }
    }
    else {
      in_stack_00000004[2].cloth_data[0x550c] = '\x03';
      in_stack_00000004[2].cloth_data[0x550d] = '\0';
      in_stack_00000004[2].cloth_data[0x550e] = '\0';
      in_stack_00000004[2].cloth_data[0x550f] = '\0';
    }
  }
  core_gabriela_cpp_FUN_004d4d80();
  core_gabriela_cpp_FUN_004d6d40();
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
  local_14 = (CDemonActor_vtable *)
             core_motion_cpp_CMotionController_FUN_0052dd20
                       (&(in_stack_00000004->model).motion_controller);
  if ((float)local_14 <= 0.0) {
    core_hero_cpp_FUN_004f3350();
  }
  else {
    local_14 = (CDemonActor_vtable *)core_motion_cpp_CMotionController_FUN_0052e2b0();
    if ((1.0 < (float)local_14) &&
       (pCVar14 = core_actor_cpp_castToClassHash_FUN_0040c790
                            (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c4),
                             g_CBoxActorClassInfo.name_hash), pCVar14 != (CDemonActor *)0x0)) {
      core_gabriela_cpp_FUN_004d4cf0();
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&in_stack_00000004->base_actor,&local_16c,&local_7c);
      local_190.x = local_16c.x - local_184.x;
      local_190.z = local_16c.z - local_184.z;
      local_190.y = 0.0;
      pCVar12 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                          (&in_stack_00000004->base_actor,&local_154,&local_190);
      if (0.0 < pCVar12->z) {
        core_boxactor_cpp_FUN_00422390();
      }
    }
  }
  core_gabriela_cpp_FUN_004d5550();
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x550c) == 3) {
    pCVar14 = core_actor_cpp_castToClassHash_FUN_0040c790
                        (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x5388),
                         g_CDynamiteClassInfo.name_hash);
    if (pCVar14 != (CDemonActor *)0x0) {
      if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) == 0) {
        in_stack_00000004[2].cloth_data[0x550c] = '\x02';
        in_stack_00000004[2].cloth_data[0x550d] = '\0';
        in_stack_00000004[2].cloth_data[0x550e] = '\0';
        in_stack_00000004[2].cloth_data[0x550f] = '\0';
      }
      else {
        fVar15 = in_stack_00000008 * (float)DOUBLE_0062aef5 +
                 in_stack_00000004[8].model.bone_transform.bone_rotations[0x15].z;
        in_stack_00000004[8].model.bone_transform.bone_rotations[0x15].z = fVar15;
        if (DAT_0065e7f0 < fVar15) {
          pCVar21 = in_stack_00000004 + 1;
          (pCVar21->base_actor).actor_name[0x14] = '\0';
          (pCVar21->base_actor).actor_name[0x15] = '\0';
          (pCVar21->base_actor).actor_name[0x16] = '\0';
          (pCVar21->base_actor).actor_name[0x17] = '\0';
          in_stack_00000004[2].cloth_data[0x550c] = '\x02';
          in_stack_00000004[2].cloth_data[0x550d] = '\0';
          in_stack_00000004[2].cloth_data[0x550e] = '\0';
          in_stack_00000004[2].cloth_data[0x550f] = '\0';
          in_stack_00000004[8].model.bone_transform.bone_rotations[0x15].z = DAT_0065e7f0;
        }
      }
      local_e8.x = *(float *)(in_stack_00000004[2].cloth_data + 0x5524);
      local_e8.z = 0.0;
      local_e8.y = 0.0;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                ((CMatrix3x3f *)&stack0xfffffe24,&local_e8);
      local_d0.z = in_stack_00000004[8].model.bone_transform.bone_rotations[0x15].z;
      local_d0.x = 0.0;
      local_d0.y = 0.0;
      pCVar12 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                          ((CMatrix3x3f *)&stack0xfffffe24,&local_100,&local_d0);
      pCVar12 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                          (&in_stack_00000004->base_actor,&local_94,pCVar12);
      if ((CVector3f *)(pCVar14[4].actor_name + 0x1c) != pCVar12) {
        ((CVector3f *)(pCVar14[4].actor_name + 0x1c))->x = pCVar12->x;
        pCVar14[4].location.position.x = pCVar12->y;
        pCVar14[4].location.position.y = pCVar12->z;
      }
      goto LAB_004d4145;
    }
    in_stack_00000004[2].cloth_data[0x550c] = '\x02';
    in_stack_00000004[2].cloth_data[0x550d] = '\0';
    in_stack_00000004[2].cloth_data[0x550e] = '\0';
    in_stack_00000004[2].cloth_data[0x550f] = '\0';
LAB_004d363a:
    in_stack_00000004[8].model.bone_transform.bone_rotations[0x15].z = _DAT_0065e7ec;
    iVar11 = core_gabriela_cpp_FUN_004d5f70();
    if (iVar11 == 0) goto LAB_004d4152;
    in_stack_00000004[2].cloth_data[0x550c] = '\x01';
    in_stack_00000004[2].cloth_data[0x550d] = '\0';
    in_stack_00000004[2].cloth_data[0x550e] = '\0';
    in_stack_00000004[2].cloth_data[0x550f] = '\0';
  }
  else {
LAB_004d4145:
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x550c) == 2) goto LAB_004d363a;
LAB_004d4152:
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x550c) != 1) goto LAB_004d368e;
  }
  in_stack_00000004[2].cloth_data[0x550c] = '\0';
  in_stack_00000004[2].cloth_data[0x550d] = '\0';
  in_stack_00000004[2].cloth_data[0x550e] = '\0';
  in_stack_00000004[2].cloth_data[0x550f] = '\0';
  core_gabriela_cpp_FUN_004d5fe0();
  if (*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5388) + 0x2ec) == 0) {
    pCVar21 = in_stack_00000004 + 1;
    (pCVar21->base_actor).actor_name[0x14] = '\0';
    (pCVar21->base_actor).actor_name[0x15] = '\0';
    (pCVar21->base_actor).actor_name[0x16] = '\0';
    (pCVar21->base_actor).actor_name[0x17] = '\0';
  }
LAB_004d368e:
  iVar11 = (*(in_stack_00000004->base_actor).vtable[1].hasCollision)
                     (&in_stack_00000004->base_actor,in_stack_fffffe24);
  if (iVar11 != 2) {
    core_cloth_cpp_FUN_0043ab80();
  }
  (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5388) + 0x154) + 4))();
  if (*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5388) + 0xfc) == 0) {
    return;
  }
  (in_stack_00000004->base_actor).is_transparent = 1;
  return;
}


// Assembly code:
// 004d2ea0: PUSH EBX
//   Label: core_gabriela.cpp_FUN_004d2ea0
// 004d2ea1: PUSH ESI
// 004d2ea2: PUSH EDI
// 004d2ea3: PUSH EBP
// 004d2ea4: MOV EBP,ESP
// 004d2ea6: SUB ESP,0x1cc
// 004d2eac: SUB EBP,0x7a
// 004d2eaf: MOV EBX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 004d2eb5: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004d2ebb: PUSH EBX
// 004d2ebc: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 004d2ec1: ADD ESP,0x8
// 004d2ec4: TEST EAX,EAX
// 004d2ec6: JZ 0x004d3700
//   XREF to: 004d3700 (CONDITIONAL_JUMP)
// 004d2ecc: CMP dword ptr [EBX + 0xbe28],0x2
// 004d2ed3: JZ 0x004d3708
//   XREF to: 004d3708 (CONDITIONAL_JUMP)
// 004d2ed9: FLD float ptr [EBX + 0xbe24]
//   Label: LAB_004d2ed9
// 004d2edf: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004d2ee5: FST float ptr [EBX + 0xbe24]
// 004d2eeb: FLDZ
// 004d2eed: FCOMPP
// 004d2eef: FNSTSW AX
// 004d2ef1: SAHF
// 004d2ef2: JBE 0x004d2efe
//   XREF to: 004d2efe (CONDITIONAL_JUMP)
// 004d2ef4: MOV dword ptr [EBX + 0xbe24],0x0
// 004d2efe: LEA EAX,[EBP + 0xffffff7e]
//   Label: LAB_004d2efe
//   XREF to: Stack[-0x10c] (DATA)
// 004d2f04: PUSH EAX
// 004d2f05: PUSH EBX
// 004d2f06: CALL core_gabriela.cpp_FUN_004d4cf0
//   XREF to: 004d4cf0 (UNCONDITIONAL_CALL)
// 004d2f0b: ADD ESP,0x8
// 004d2f0e: PUSH EAX
// 004d2f0f: LEA EAX,[EBP + 0xffffff06]
//   XREF to: Stack[-0x184] (DATA)
// 004d2f15: PUSH EAX
// 004d2f16: PUSH EBX
// 004d2f17: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004d2f1c: ADD ESP,0xc
// 004d2f1f: XOR ESI,ESI
// 004d2f21: LEA EAX,[EBX + 0x23ac]
// 004d2f27: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004d2f2d: MOV dword ptr [EAX + 0x8],0x0
// 004d2f34: PUSH EBX
// 004d2f35: MOV EDX,dword ptr [EAX + 0x8]
// 004d2f38: MOV dword ptr [EAX + 0x4],EDX
// 004d2f3b: MOV EDX,dword ptr [EAX + 0x4]
// 004d2f3e: MOV dword ptr [EAX],EDX
// 004d2f40: CALL core_gabriela.cpp_FUN_004d4890
//   XREF to: 004d4890 (UNCONDITIONAL_CALL)
// 004d2f45: FLD float ptr [EBX + 0x243c]
// 004d2f4b: FLDZ
// 004d2f4d: ADD ESP,0x8
// 004d2f50: FCOMPP
// 004d2f52: FNSTSW AX
// 004d2f54: SAHF
// 004d2f55: JC 0x004d2f5c
//   XREF to: 004d2f5c (CONDITIONAL_JUMP)
// 004d2f57: MOV ESI,0x1
// 004d2f5c: CMP dword ptr [EBX + 0x2598],0x0
//   Label: LAB_004d2f5c
// 004d2f63: JZ 0x004d2f6a
//   XREF to: 004d2f6a (CONDITIONAL_JUMP)
// 004d2f65: MOV ESI,0x1
// 004d2f6a: CMP dword ptr [EBX + 0x1fba4],0x0
//   Label: LAB_004d2f6a
// 004d2f71: JZ 0x004d2f78
//   XREF to: 004d2f78 (CONDITIONAL_JUMP)
// 004d2f73: MOV ESI,0x1
// 004d2f78: CMP dword ptr [EBX + 0x1fbac],0x0
//   Label: LAB_004d2f78
// 004d2f7f: JZ 0x004d2f86
//   XREF to: 004d2f86 (CONDITIONAL_JUMP)
// 004d2f81: MOV ESI,0x1
// 004d2f86: PUSH 0x8
//   Label: LAB_004d2f86
// 004d2f88: LEA EAX,[EBX + 0x158]
// 004d2f8e: PUSH EAX
// 004d2f8f: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 004d2f94: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d2f97: ADD ESP,0x8
// 004d2f9a: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004d2f9d: FLDZ
// 004d2f9f: FCOMPP
// 004d2fa1: FNSTSW AX
// 004d2fa3: SAHF
// 004d2fa4: JNC 0x004d2fab
//   XREF to: 004d2fab (CONDITIONAL_JUMP)
// 004d2fa6: MOV ESI,0x1
// 004d2fab: PUSH 0xb
//   Label: LAB_004d2fab
// 004d2fad: LEA EAX,[EBX + 0x158]
// 004d2fb3: PUSH EAX
// 004d2fb4: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 004d2fb9: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d2fbc: ADD ESP,0x8
// 004d2fbf: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004d2fc2: FLDZ
// 004d2fc4: FCOMPP
// 004d2fc6: FNSTSW AX
// 004d2fc8: SAHF
// 004d2fc9: JNC 0x004d2fd0
//   XREF to: 004d2fd0 (CONDITIONAL_JUMP)
// 004d2fcb: MOV ESI,0x1
// 004d2fd0: PUSH 0xc
//   Label: LAB_004d2fd0
// 004d2fd2: LEA EAX,[EBX + 0x158]
// 004d2fd8: PUSH EAX
// 004d2fd9: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 004d2fde: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d2fe1: ADD ESP,0x8
// 004d2fe4: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004d2fe7: FLDZ
// 004d2fe9: FCOMPP
// 004d2feb: FNSTSW AX
// 004d2fed: SAHF
// 004d2fee: JNC 0x004d2ff5
//   XREF to: 004d2ff5 (CONDITIONAL_JUMP)
// 004d2ff0: MOV ESI,0x1
// 004d2ff5: PUSH 0x12
//   Label: LAB_004d2ff5
// 004d2ff7: LEA EAX,[EBX + 0x158]
// 004d2ffd: PUSH EAX
// 004d2ffe: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 004d3003: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d3006: ADD ESP,0x8
// 004d3009: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004d300c: FLDZ
// 004d300e: FCOMPP
// 004d3010: FNSTSW AX
// 004d3012: SAHF
// 004d3013: JNC 0x004d301a
//   XREF to: 004d301a (CONDITIONAL_JUMP)
// 004d3015: MOV ESI,0x1
// 004d301a: MOV dword ptr [EBX + 0x2438],0x0
//   Label: LAB_004d301a
// 004d3024: MOV ECX,dword ptr [EBX + 0x2410]
// 004d302a: XOR EDX,EDX
// 004d302c: MOV dword ptr [EBX + 0x2434],0x0
// 004d3036: MOV dword ptr [EBP + 0x6a],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 004d3039: TEST ECX,ECX
// 004d303b: JZ 0x004d3120
//   XREF to: 004d3120 (CONDITIONAL_JUMP)
// 004d3041: PUSH 0x1
// 004d3043: LEA EDI,[EBX + 0x158]
// 004d3049: PUSH EDI
// 004d304a: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 004d304f: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d3052: ADD ESP,0x8
// 004d3055: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004d3058: FMUL float ptr [0x02d7b808]
//   XREF to: 02d7b808 (READ)
// 004d305e: PUSH 0x2
// 004d3060: FADD float ptr [EBX + 0x2434]
// 004d3066: PUSH EDI
// 004d3067: FSTP float ptr [EBX + 0x2434]
// 004d306d: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 004d3072: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d3075: ADD ESP,0x8
// 004d3078: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004d307b: FMUL float ptr [0x02d7b80c]
//   XREF to: 02d7b80c (READ)
// 004d3081: PUSH 0x3
// 004d3083: FADD float ptr [EBX + 0x2434]
// 004d3089: PUSH EDI
// 004d308a: FSTP float ptr [EBX + 0x2434]
// 004d3090: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 004d3095: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d3098: ADD ESP,0x8
// 004d309b: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004d309e: FMUL float ptr [0x02d7b810]
//   XREF to: 02d7b810 (READ)
// 004d30a4: PUSH 0x14
// 004d30a6: FSUBR float ptr [EBX + 0x2434]
// 004d30ac: PUSH EDI
// 004d30ad: FSTP float ptr [EBX + 0x2434]
// 004d30b3: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 004d30b8: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d30bb: ADD ESP,0x8
// 004d30be: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004d30c1: FMUL float ptr [0x0065e7e8]
//   XREF to: 0065e7e8 (READ)
// 004d30c7: PUSH 0x15
// 004d30c9: FLDZ
// 004d30cb: FSUBRP
// 004d30cd: PUSH EDI
// 004d30ce: FSTP float ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (WRITE)
// 004d30d1: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 004d30d6: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004d30dc: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d30df: FMUL double ptr [0x0062ae6d]
//   XREF to: 0062ae6d (READ)
// 004d30e5: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004d30e8: FMUL float ptr [0x0065e7e8]
//   XREF to: 0065e7e8 (READ)
// 004d30ee: ADD ESP,0x8
// 004d30f1: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004d30f6: FXCH
// 004d30f8: FSTP float ptr [EBX + 0x2438]
// 004d30fe: FADD float ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 004d3101: MOV EDI,dword ptr [EAX + 0x228]
//   XREF to: 02d81cc4 (READ)
// 004d3107: FSTP float ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (WRITE)
// 004d310a: TEST EDI,EDI
// 004d310c: JZ 0x004d3120
//   XREF to: 004d3120 (CONDITIONAL_JUMP)
// 004d310e: FLD float ptr [EBX + 0x2438]
// 004d3114: FMUL double ptr [0x0062ae75]
//   XREF to: 0062ae75 (READ)
// 004d311a: FSTP float ptr [EBX + 0x2438]
// 004d3120: FLD float ptr [EBP + 0x92]
//   Label: LAB_004d3120
//   XREF to: Stack[0x8] (READ)
// 004d3126: FLD float ptr [EBX + 0x2434]
// 004d312c: FMUL ST1
// 004d312e: FLD float ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 004d3131: FMULP ST2
// 004d3133: MOV EAX,dword ptr [EBX + 0x1fbac]
// 004d3139: FXCH
// 004d313b: FSTP float ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (WRITE)
// 004d313e: FSTP float ptr [EBX + 0x2434]
// 004d3144: TEST EAX,EAX
// 004d3146: JZ 0x004d3723
//   XREF to: 004d3723 (CONDITIONAL_JUMP)
// 004d314c: ADD EAX,0x2d4
// 004d3151: PUSH EAX
// 004d3152: LEA EAX,[EBP + 0xffffff5a]
//   XREF to: Stack[-0x130] (DATA)
// 004d3158: PUSH EAX
// 004d3159: MOV EDI,dword ptr [EBX + 0x1fbac]
// 004d315f: PUSH EDI
// 004d3160: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004d3165: FLD float ptr [EBX + 0x24]
// 004d3168: ADD ESP,0xc
// 004d316b: FCOMP float ptr [EAX + 0x4]
// 004d316e: FNSTSW AX
// 004d3170: SAHF
// 004d3171: JBE 0x004d321d
//   XREF to: 004d321d (CONDITIONAL_JUMP)
// 004d3177: XOR EAX,EAX
// 004d3179: MOV dword ptr [EBX + 0x1fbac],0x0
// 004d3183: MOV dword ptr [EBP + -0x6a],EAX
//   XREF to: Stack[-0xf4] (WRITE)
// 004d3186: LEA EAX,[EBP + -0x6a]
//   XREF to: Stack[-0xf4] (DATA)
// 004d3189: MOV EDX,0x3f000000
// 004d318e: PUSH EAX
// 004d318f: LEA EAX,[EBP + -0x3a]
//   XREF to: Stack[-0xc4] (DATA)
// 004d3192: MOV ECX,0x40800000
// 004d3197: PUSH EAX
// 004d3198: PUSH EBX
// 004d3199: MOV dword ptr [EBP + -0x66],EDX
//   XREF to: Stack[-0xf0] (WRITE)
// 004d319c: MOV dword ptr [EBP + -0x62],ECX
//   XREF to: Stack[-0xec] (WRITE)
// 004d319f: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 004d31a4: MOV EDX,EAX
// 004d31a6: LEA EAX,[EBX + 0x20]
// 004d31a9: FLD float ptr [EDX]
// 004d31ab: FADD float ptr [EAX]
// 004d31ad: FSTP float ptr [EAX]
// 004d31af: FLD float ptr [EDX + 0x4]
// 004d31b2: FADD float ptr [EAX + 0x4]
// 004d31b5: ADD ESP,0xc
// 004d31b8: FSTP float ptr [EAX + 0x4]
// 004d31bb: FLD float ptr [EDX + 0x8]
// 004d31be: FADD float ptr [EAX + 0x8]
// 004d31c1: PUSH 0x0
// 004d31c3: FSTP float ptr [EAX + 0x8]
// 004d31c6: PUSH dword ptr [EBX + 0x2ddc]
// 004d31cc: MOV EDX,dword ptr [EBX + 0x154]
// 004d31d2: PUSH EBX
// 004d31d3: CALL dword ptr [EDX + 0x38]
// 004d31d6: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d31d9: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004d31dc: MOV dword ptr [EBX + 0x2414],EAX
// 004d31e2: FLD float ptr [EBX + 0x2414]
// 004d31e8: FADD double ptr [0x0062aec5]
//   XREF to: 0062aec5 (READ)
// 004d31ee: ADD ESP,0xc
// 004d31f1: FLD float ptr [EBX + 0x24]
// 004d31f4: FCOMPP
// 004d31f6: FNSTSW AX
// 004d31f8: SAHF
// 004d31f9: JNC 0x004d371c
//   XREF to: 004d371c (CONDITIONAL_JUMP)
// 004d31ff: MOV EAX,0x1
// 004d3204: PUSH 0x1
//   Label: LAB_004d3204
// 004d3206: PUSH 0x0
// 004d3208: MOV dword ptr [EBX + 0x2410],EAX
// 004d320e: LEA EAX,[EBX + 0x158]
//   Label: LAB_004d320e
// 004d3214: PUSH EAX
// 004d3215: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   Label: LAB_004d3215
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004d321a: ADD ESP,0xc
//   Label: LAB_004d321a
// 004d321d: CMP dword ptr [EBX + 0x1fbac],0x0
//   Label: LAB_004d321d
// 004d3224: JZ 0x004d3c64
//   XREF to: 004d3c64 (CONDITIONAL_JUMP)
// 004d322a: LEA EDI,[EBX + 0x23ac]
// 004d3230: PUSH EDI
// 004d3231: LEA EAX,[EBP + 0x1a]
//   XREF to: Stack[-0x70] (DATA)
// 004d3234: PUSH EAX
// 004d3235: PUSH EBX
// 004d3236: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 004d323b: MOV EDX,EAX
// 004d323d: LEA EAX,[EBX + 0x20]
// 004d3240: FLD float ptr [EDX]
// 004d3242: FADD float ptr [EAX]
// 004d3244: FSTP float ptr [EAX]
// 004d3246: FLD float ptr [EDX + 0x4]
// 004d3249: FADD float ptr [EAX + 0x4]
// 004d324c: FSTP float ptr [EAX + 0x4]
// 004d324f: FLD float ptr [EDX + 0x8]
// 004d3252: FADD float ptr [EAX + 0x8]
// 004d3255: FSTP float ptr [EAX + 0x8]
// 004d3258: MOV dword ptr [EDI + 0x8],0x0
// 004d325f: ADD ESP,0xc
// 004d3262: MOV EAX,dword ptr [EDI + 0x8]
// 004d3265: MOV dword ptr [EDI + 0x4],EAX
// 004d3268: MOV EAX,dword ptr [EDI + 0x4]
// 004d326b: MOV dword ptr [EDI],EAX
// 004d326d: PUSH EBX
//   Label: LAB_004d326d
// 004d326e: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 004d3273: ADD ESP,0x4
// 004d3276: TEST ESI,ESI
// 004d3278: JZ 0x004d3ddc
//   XREF to: 004d3ddc (CONDITIONAL_JUMP)
// 004d327e: MOV ECX,dword ptr [0x00822c84]
//   Label: LAB_004d327e
//   XREF to: 00822c84 (READ)
// 004d3284: PUSH ECX
// 004d3285: MOV EDI,dword ptr [EBX + 0x24b4]
// 004d328b: PUSH EDI
// 004d328c: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004d3291: ADD ESP,0x8
// 004d3294: MOV EDI,EAX
// 004d3296: TEST EAX,EAX
// 004d3298: JZ 0x004d3338
//   XREF to: 004d3338 (CONDITIONAL_JUMP)
// 004d329e: CMP dword ptr [EBX + 0xbe40],0x0
// 004d32a5: JZ 0x004d32af
//   XREF to: 004d32af (CONDITIONAL_JUMP)
// 004d32a7: TEST ESI,ESI
// 004d32a9: JZ 0x004d3e28
//   XREF to: 004d3e28 (CONDITIONAL_JUMP)
// 004d32af: CMP dword ptr [EDI + 0x2324],0x0
//   Label: LAB_004d32af
// 004d32b6: JZ 0x004d3338
//   XREF to: 004d3338 (CONDITIONAL_JUMP)
// 004d32bc: FLD float ptr [EBX + 0xbe54]
// 004d32c2: FMUL double ptr [0x0062ae9d]
//   XREF to: 0062ae9d (READ)
// 004d32c8: FMUL double ptr [0x0062aed5]
//   XREF to: 0062aed5 (READ)
// 004d32ce: FMUL float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004d32d4: FLD float ptr [EBX + 0x1fbe8]
// 004d32da: FXCH
// 004d32dc: FADD ST0,ST1
// 004d32de: PUSH EBX
// 004d32df: FSTP ST1
// 004d32e1: FSTP float ptr [EBX + 0x1fbe8]
// 004d32e7: CALL core_gabriela.cpp_FUN_004d4c90
//   XREF to: 004d4c90 (UNCONDITIONAL_CALL)
// 004d32ec: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d32ef: ADD ESP,0x4
// 004d32f2: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004d32f5: PUSH EBX
// 004d32f6: FSTP float ptr [EBP + 0x42]
//   XREF to: Stack[-0x48] (WRITE)
// 004d32f9: CALL core_gabriela.cpp_FUN_004d4ce0
//   XREF to: 004d4ce0 (UNCONDITIONAL_CALL)
// 004d32fe: FLD float ptr [EBX + 0x1fbe8]
// 004d3304: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d3307: ADD ESP,0x4
// 004d330a: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004d330d: MOV dword ptr [EBP + 0x3e],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 004d3310: FCOMP float ptr [EBP + 0x42]
//   XREF to: Stack[-0x48] (READ)
// 004d3313: FNSTSW AX
// 004d3315: SAHF
// 004d3316: JNC 0x004d3321
//   XREF to: 004d3321 (CONDITIONAL_JUMP)
// 004d3318: MOV EAX,dword ptr [EBP + 0x42]
//   XREF to: Stack[-0x48] (READ)
// 004d331b: MOV dword ptr [EBX + 0x1fbe8],EAX
// 004d3321: FLD float ptr [EBX + 0x1fbe8]
//   Label: LAB_004d3321
// 004d3327: FCOMP float ptr [EBP + 0x3e]
//   XREF to: Stack[-0x4c] (READ)
// 004d332a: FNSTSW AX
// 004d332c: SAHF
// 004d332d: JBE 0x004d3338
//   XREF to: 004d3338 (CONDITIONAL_JUMP)
// 004d332f: MOV EAX,dword ptr [EBP + 0x3e]
//   XREF to: Stack[-0x4c] (READ)
// 004d3332: MOV dword ptr [EBX + 0x1fbe8],EAX
// 004d3338: TEST byte ptr [EBX + 0x1fbd4],0x1
//   Label: LAB_004d3338
// 004d333f: JZ 0x004d3e61
//   XREF to: 004d3e61 (CONDITIONAL_JUMP)
// 004d3345: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004d334b: FDIV float ptr [0x0065e7a8]
//   XREF to: 0065e7a8 (READ)
// 004d3351: FADD float ptr [EBX + 0x1fbd8]
// 004d3357: FST float ptr [EBX + 0x1fbd8]
// 004d335d: FLD1
// 004d335f: FCOMPP
// 004d3361: FNSTSW AX
// 004d3363: SAHF
// 004d3364: JNC 0x004d3370
//   XREF to: 004d3370 (CONDITIONAL_JUMP)
// 004d3366: MOV dword ptr [EBX + 0x1fbd8],0x3f800000
// 004d3370: TEST byte ptr [EBX + 0x1fbd4],0x2
//   Label: LAB_004d3370
// 004d3377: JZ 0x004d3e95
//   XREF to: 004d3e95 (CONDITIONAL_JUMP)
// 004d337d: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004d3383: FDIV float ptr [0x0065e7a8]
//   XREF to: 0065e7a8 (READ)
// 004d3389: MOV EAX,dword ptr [EBX + 0x1fbdc]
// 004d338f: MOV dword ptr [EBP + 0x46],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004d3392: FADD float ptr [EBP + 0x46]
//   XREF to: Stack[-0x44] (READ)
// 004d3395: FST float ptr [EBX + 0x1fbdc]
// 004d339b: FLD1
// 004d339d: FCOMPP
// 004d339f: FNSTSW AX
// 004d33a1: SAHF
// 004d33a2: JNC 0x004d33ae
//   XREF to: 004d33ae (CONDITIONAL_JUMP)
// 004d33a4: MOV dword ptr [EBX + 0x1fbdc],0x3f800000
// 004d33ae: FLD float ptr [0x0065e7b4]
//   Label: LAB_004d33ae
//   XREF to: 0065e7b4 (READ)
// 004d33b4: FADD double ptr [0x0062aee5]
//   XREF to: 0062aee5 (READ)
// 004d33ba: FLD float ptr [EBP + 0x46]
//   XREF to: Stack[-0x44] (READ)
// 004d33bd: FXCH
// 004d33bf: FSTP float ptr [EBP + 0x4a]
//   XREF to: Stack[-0x40] (WRITE)
// 004d33c2: FCOMP float ptr [EBP + 0x4a]
//   XREF to: Stack[-0x40] (READ)
// 004d33c5: FNSTSW AX
// 004d33c7: SAHF
// 004d33c8: JA 0x004d33f9
//   XREF to: 004d33f9 (CONDITIONAL_JUMP)
// 004d33ca: FLD float ptr [EBX + 0x1fbdc]
// 004d33d0: FCOMP float ptr [EBP + 0x4a]
//   XREF to: Stack[-0x40] (READ)
// 004d33d3: FNSTSW AX
// 004d33d5: SAHF
// 004d33d6: JBE 0x004d33f9
//   XREF to: 004d33f9 (CONDITIONAL_JUMP)
// 004d33d8: MOV ECX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004d33de: PUSH ECX
//   XREF to: 02d81a9c (DATA)
// 004d33df: CALL core_game.cpp_CGame_FUN_004e0bb0
//   XREF to: 004e0bb0 (UNCONDITIONAL_CALL)
// 004d33e4: ADD ESP,0x4
// 004d33e7: PUSH 0x62ae4a
//   XREF to: 0062ae4a (DATA)
// 004d33ec: MOV EAX,dword ptr [EBX + 0x154]
//   Label: LAB_004d33ec
// 004d33f2: PUSH EBX
// 004d33f3: CALL dword ptr [EAX + 0x24]
// 004d33f6: ADD ESP,0x8
// 004d33f9: TEST byte ptr [EBX + 0x1fbd4],0x3
//   Label: LAB_004d33f9
// 004d3400: JZ 0x004d3f02
//   XREF to: 004d3f02 (CONDITIONAL_JUMP)
// 004d3406: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004d340c: FDIV float ptr [0x0065e7a8]
//   XREF to: 0065e7a8 (READ)
// 004d3412: FADD float ptr [EBX + 0x1fbe0]
// 004d3418: FST float ptr [EBX + 0x1fbe0]
// 004d341e: FLD1
// 004d3420: FCOMPP
// 004d3422: FNSTSW AX
// 004d3424: SAHF
// 004d3425: JNC 0x004d3431
//   XREF to: 004d3431 (CONDITIONAL_JUMP)
// 004d3427: MOV dword ptr [EBX + 0x1fbe0],0x3f800000
// 004d3431: TEST ESI,ESI
//   Label: LAB_004d3431
// 004d3433: JZ 0x004d3f36
//   XREF to: 004d3f36 (CONDITIONAL_JUMP)
// 004d3439: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004d343f: FDIV float ptr [0x0065e7ac]
//   XREF to: 0065e7ac (READ)
// 004d3445: FMUL double ptr [0x0062ae85]
//   XREF to: 0062ae85 (READ)
// 004d344b: FSUBR float ptr [EBX + 0x1fbe4]
//   Label: LAB_004d344b
// 004d3451: FSTP float ptr [EBX + 0x1fbe4]
//   Label: LAB_004d3451
// 004d3457: FLD float ptr [EBX + 0x1fbe4]
// 004d345d: FLDZ
// 004d345f: FCOMPP
// 004d3461: FNSTSW AX
// 004d3463: SAHF
// 004d3464: JBE 0x004d3470
//   XREF to: 004d3470 (CONDITIONAL_JUMP)
// 004d3466: MOV dword ptr [EBX + 0x1fbe4],0x0
// 004d3470: FLD float ptr [EBX + 0x1fbe4]
//   Label: LAB_004d3470
// 004d3476: FCOMP double ptr [0x0062aeed]
//   XREF to: 0062aeed (READ)
// 004d347c: FNSTSW AX
// 004d347e: SAHF
// 004d347f: JBE 0x004d348b
//   XREF to: 004d348b (CONDITIONAL_JUMP)
// 004d3481: MOV dword ptr [EBX + 0x1fbe4],0x3f666666
// 004d348b: PUSH ESI
//   Label: LAB_004d348b
// 004d348c: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004d3492: PUSH EBX
// 004d3493: CALL core_gabriela.cpp_FUN_004d6540
//   XREF to: 004d6540 (UNCONDITIONAL_CALL)
// 004d3498: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004d349e: FDIV float ptr [0x0065e7bc]
//   XREF to: 0065e7bc (READ)
// 004d34a4: FSUBR float ptr [EBX + 0x1fc0c]
// 004d34aa: ADD ESP,0xc
// 004d34ad: FST float ptr [EBX + 0x1fc0c]
// 004d34b3: FLDZ
// 004d34b5: FCOMPP
// 004d34b7: FNSTSW AX
// 004d34b9: SAHF
// 004d34ba: JC 0x004d34ce
//   XREF to: 004d34ce (CONDITIONAL_JUMP)
// 004d34bc: MOV dword ptr [EBX + 0x1fc0c],0x0
// 004d34c6: TEST ESI,ESI
// 004d34c8: JZ 0x004d3f82
//   XREF to: 004d3f82 (CONDITIONAL_JUMP)
// 004d34ce: PUSH EBX
//   Label: LAB_004d34ce
// 004d34cf: CALL core_gabriela.cpp_FUN_004d4d80
//   XREF to: 004d4d80 (UNCONDITIONAL_CALL)
// 004d34d4: ADD ESP,0x4
// 004d34d7: TEST ESI,ESI
// 004d34d9: SETZ AL
// 004d34dc: AND EAX,0xff
// 004d34e1: PUSH EAX
// 004d34e2: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004d34e8: PUSH EBX
// 004d34e9: CALL core_gabriela.cpp_FUN_004d6d40
//   XREF to: 004d6d40 (UNCONDITIONAL_CALL)
// 004d34ee: ADD ESP,0xc
// 004d34f1: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004d34f7: PUSH EBX
// 004d34f8: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 004d34fd: ADD ESP,0x8
// 004d3500: PUSH 0xd
// 004d3502: LEA ESI,[EBX + 0x158]
// 004d3508: PUSH ESI
// 004d3509: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 004d350e: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d3511: ADD ESP,0x8
// 004d3514: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004d3517: FLDZ
// 004d3519: FCOMPP
// 004d351b: FNSTSW AX
// 004d351d: SAHF
// 004d351e: JNC 0x004d4074
//   XREF to: 004d4074 (CONDITIONAL_JUMP)
// 004d3524: PUSH ESI
// 004d3525: CALL core_motion.cpp_CMotionController_FUN_0052e2b0
//   XREF to: 0052e2b0 (UNCONDITIONAL_CALL)
// 004d352a: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d352d: ADD ESP,0x4
// 004d3530: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004d3533: FLD1
// 004d3535: FCOMPP
// 004d3537: FNSTSW AX
// 004d3539: SAHF
// 004d353a: JNC 0x004d35ec
//   XREF to: 004d35ec (CONDITIONAL_JUMP)
// 004d3540: MOV EAX,[0x008229e8]
//   XREF to: 008229e8 (READ)
// 004d3545: PUSH EAX
// 004d3546: MOV EDX,dword ptr [EBX + 0x1fba4]
// 004d354c: PUSH EDX
// 004d354d: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004d3552: MOV ESI,EAX
// 004d3554: ADD ESP,0x8
// 004d3557: TEST EAX,EAX
// 004d3559: JZ 0x004d35ec
//   XREF to: 004d35ec (CONDITIONAL_JUMP)
// 004d355f: LEA EAX,[EBP + 0xe]
//   XREF to: Stack[-0x7c] (DATA)
// 004d3562: PUSH EAX
// 004d3563: PUSH EBX
// 004d3564: CALL core_gabriela.cpp_FUN_004d4cf0
//   XREF to: 004d4cf0 (UNCONDITIONAL_CALL)
// 004d3569: ADD ESP,0x8
// 004d356c: LEA EAX,[EBP + 0xe]
//   XREF to: Stack[-0x7c] (DATA)
// 004d356f: PUSH EAX
// 004d3570: LEA EAX,[EBP + 0xffffff1e]
//   XREF to: Stack[-0x16c] (DATA)
// 004d3576: PUSH EAX
// 004d3577: PUSH EBX
// 004d3578: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004d357d: FLD float ptr [EBP + 0xffffff1e]
//   XREF to: Stack[-0x16c] (READ)
// 004d3583: FLD float ptr [EBP + 0xffffff26]
//   XREF to: Stack[-0x164] (READ)
// 004d3589: LEA EAX,[EBP + 0xfffffefa]
//   XREF to: Stack[-0x190] (DATA)
// 004d358f: ADD ESP,0xc
// 004d3592: XOR ECX,ECX
// 004d3594: FXCH
// 004d3596: FSUB float ptr [EBP + 0xffffff06]
//   XREF to: Stack[-0x184] (READ)
// 004d359c: PUSH EAX
// 004d359d: FXCH
// 004d359f: FSUB float ptr [EBP + 0xffffff0e]
//   XREF to: Stack[-0x17c] (READ)
// 004d35a5: LEA EAX,[EBP + 0xffffff36]
//   XREF to: Stack[-0x154] (DATA)
// 004d35ab: MOV dword ptr [EBP + 0xfffffefe],ECX
//   XREF to: Stack[-0x18c] (WRITE)
// 004d35b1: PUSH EAX
// 004d35b2: FXCH
// 004d35b4: FSTP float ptr [EBP + 0xfffffefa]
//   XREF to: Stack[-0x190] (WRITE)
// 004d35ba: PUSH EBX
// 004d35bb: FSTP float ptr [EBP + 0xffffff02]
//   XREF to: Stack[-0x188] (WRITE)
// 004d35c1: CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   XREF to: 00408ea0 (UNCONDITIONAL_CALL)
// 004d35c6: FLD float ptr [EAX + 0x8]
// 004d35c9: FLDZ
// 004d35cb: ADD ESP,0xc
// 004d35ce: FCOMPP
// 004d35d0: FNSTSW AX
// 004d35d2: SAHF
// 004d35d3: JNC 0x004d35ec
//   XREF to: 004d35ec (CONDITIONAL_JUMP)
// 004d35d5: LEA EAX,[EBP + 0xfffffefa]
//   XREF to: Stack[-0x190] (DATA)
// 004d35db: PUSH EAX
// 004d35dc: LEA EAX,[EBP + 0xffffff06]
//   XREF to: Stack[-0x184] (DATA)
// 004d35e2: PUSH EAX
// 004d35e3: PUSH ESI
// 004d35e4: CALL core_boxactor.cpp_FUN_00422390
//   XREF to: 00422390 (UNCONDITIONAL_CALL)
// 004d35e9: ADD ESP,0xc
// 004d35ec: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_004d35ec
//   XREF to: Stack[0x8] (READ)
// 004d35f2: PUSH EBX
// 004d35f3: CALL core_gabriela.cpp_FUN_004d5550
//   XREF to: 004d5550 (UNCONDITIONAL_CALL)
// 004d35f8: MOV ESI,dword ptr [EBX + 0x1fbec]
// 004d35fe: ADD ESP,0x8
// 004d3601: CMP ESI,0x3
// 004d3604: JNZ 0x004d4145
//   XREF to: 004d4145 (CONDITIONAL_JUMP)
// 004d360a: MOV EDI,dword ptr [0x02ceed20]
//   XREF to: 02ceed20 (READ)
// 004d3610: LEA EAX,[EBX + 0x1f738]
// 004d3616: PUSH EDI
// 004d3617: MOV EAX,dword ptr [EAX + 0x330]
// 004d361d: PUSH EAX
// 004d361e: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004d3623: ADD ESP,0x8
// 004d3626: MOV ESI,EAX
// 004d3628: TEST EAX,EAX
// 004d362a: JNZ 0x004d4082
//   XREF to: 004d4082 (CONDITIONAL_JUMP)
// 004d3630: MOV dword ptr [EBX + 0x1fbec],0x2
// 004d363a: FLD float ptr [0x0065e7ec]
//   Label: LAB_004d363a
//   XREF to: 0065e7ec (READ)
// 004d3640: PUSH EBX
// 004d3641: FSTP float ptr [EBX + 0x5fa84]
// 004d3647: CALL core_gabriela.cpp_FUN_004d5f70
//   XREF to: 004d5f70 (UNCONDITIONAL_CALL)
// 004d364c: ADD ESP,0x4
// 004d364f: TEST EAX,EAX
// 004d3651: JZ 0x004d4152
//   XREF to: 004d4152 (CONDITIONAL_JUMP)
// 004d3657: MOV dword ptr [EBX + 0x1fbec],0x1
// 004d3661: PUSH EBX
//   Label: LAB_004d3661
// 004d3662: MOV dword ptr [EBX + 0x1fbec],0x0
// 004d366c: CALL core_gabriela.cpp_FUN_004d5fe0
//   XREF to: 004d5fe0 (UNCONDITIONAL_CALL)
// 004d3671: LEA EAX,[EBX + 0x1f738]
// 004d3677: MOV EAX,dword ptr [EAX + 0x330]
// 004d367d: MOV ESI,dword ptr [EAX + 0x2ec]
// 004d3683: ADD ESP,0x4
// 004d3686: TEST ESI,ESI
// 004d3688: JZ 0x004d4173
//   XREF to: 004d4173 (CONDITIONAL_JUMP)
// 004d368e: PUSH EBX
//   Label: LAB_004d368e
// 004d368f: MOV EAX,dword ptr [EBX + 0x154]
// 004d3695: CALL dword ptr [EAX + 0x120]
// 004d369b: ADD ESP,0x4
// 004d369e: CMP EAX,0x2
// 004d36a1: JZ 0x004d36cd
//   XREF to: 004d36cd (CONDITIONAL_JUMP)
// 004d36a3: LEA EAX,[EBX + 0x158]
// 004d36a9: PUSH EAX
// 004d36aa: PUSH dword ptr [EBX + 0x2414]
// 004d36b0: LEA EAX,[EBX + 0x30]
// 004d36b3: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004d36b9: PUSH EAX
// 004d36ba: LEA EAX,[EBX + 0x20]
// 004d36bd: PUSH EAX
// 004d36be: LEA EAX,[EBX + 0x1fc14]
// 004d36c4: PUSH EAX
// 004d36c5: CALL core_cloth.cpp_FUN_0043ab80
//   XREF to: 0043ab80 (UNCONDITIONAL_CALL)
// 004d36ca: ADD ESP,0x18
// 004d36cd: LEA ESI,[EBX + 0x1f738]
//   Label: LAB_004d36cd
// 004d36d3: MOV EAX,dword ptr [ESI + 0x330]
// 004d36d9: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004d36df: PUSH EAX
// 004d36e0: MOV EDX,dword ptr [EAX + 0x154]
// 004d36e6: CALL dword ptr [EDX + 0x4]
// 004d36e9: MOV EAX,dword ptr [ESI + 0x330]
// 004d36ef: MOV EDI,dword ptr [EAX + 0xfc]
// 004d36f5: ADD ESP,0x8
// 004d36f8: TEST EDI,EDI
// 004d36fa: JNZ 0x004d417e
//   XREF to: 004d417e (CONDITIONAL_JUMP)
// 004d3700: LEA ESP,[EBP + 0x7a]
//   Label: LAB_004d3700
//   XREF to: Stack[-0x10] (DATA)
// 004d3703: POP EBP
// 004d3704: POP EDI
// 004d3705: POP ESI
// 004d3706: POP EBX
// 004d3707: RET
// 004d3708: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_004d3708
//   XREF to: Stack[0x8] (READ)
// 004d370e: PUSH EBX
// 004d370f: CALL core_gabriela.cpp_FUN_004d4190
//   XREF to: 004d4190 (UNCONDITIONAL_CALL)
// 004d3714: ADD ESP,0x8
// 004d3717: JMP 0x004d2ed9
//   XREF to: 004d2ed9 (UNCONDITIONAL_JUMP)
// 004d371c: XOR EAX,EAX
//   Label: LAB_004d371c
// 004d371e: JMP 0x004d3204
//   XREF to: 004d3204 (UNCONDITIONAL_JUMP)
// 004d3723: MOV EDX,dword ptr [EBX + 0x2598]
//   Label: LAB_004d3723
// 004d3729: TEST EDX,EDX
// 004d372b: JZ 0x004d3863
//   XREF to: 004d3863 (CONDITIONAL_JUMP)
// 004d3731: CMP dword ptr [EBX + 0x259c],0x0
// 004d3738: JNZ 0x004d37f4
//   XREF to: 004d37f4 (CONDITIONAL_JUMP)
// 004d373e: LEA EAX,[EDX + 0x20]
// 004d3741: PUSH EAX
// 004d3742: LEA EAX,[EBP + 0xffffff66]
//   XREF to: Stack[-0x124] (DATA)
// 004d3748: PUSH EAX
// 004d3749: PUSH EBX
// 004d374a: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004d374f: ADD ESP,0xc
// 004d3752: PUSH EAX
// 004d3753: LEA EAX,[EBP + 0xffffff72]
//   XREF to: Stack[-0x118] (DATA)
// 004d3759: PUSH EAX
// 004d375a: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004d375f: ADD ESP,0x8
// 004d3762: PUSH dword ptr [EAX + 0x4]
// 004d3765: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004d376a: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d376d: ADD ESP,0x4
// 004d3770: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004d3773: MOV dword ptr [EBP + 0x72],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004d3776: FLD float ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 004d3779: FCOMP double ptr [0x0062aea5]
//   XREF to: 0062aea5 (READ)
// 004d377f: FNSTSW AX
// 004d3781: SAHF
// 004d3782: JNC 0x004d3790
//   XREF to: 004d3790 (CONDITIONAL_JUMP)
// 004d3784: FLD float ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 004d3787: FADD float ptr [0x0062aead]
//   XREF to: 0062aead (READ)
// 004d378d: FSTP float ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (WRITE)
// 004d3790: FLD float ptr [EBP + 0x72]
//   Label: LAB_004d3790
//   XREF to: Stack[-0x18] (READ)
// 004d3793: FCOMP double ptr [0x0062aeb5]
//   XREF to: 0062aeb5 (READ)
// 004d3799: FNSTSW AX
// 004d379b: SAHF
// 004d379c: JBE 0x004d37aa
//   XREF to: 004d37aa (CONDITIONAL_JUMP)
// 004d379e: FLD float ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 004d37a1: FADD float ptr [0x0062aebd]
//   XREF to: 0062aebd (READ)
// 004d37a7: FSTP float ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (WRITE)
// 004d37aa: FLD float ptr [EBP + 0x92]
//   Label: LAB_004d37aa
//   XREF to: Stack[0x8] (READ)
// 004d37b0: FMUL double ptr [0x0062ae9d]
//   XREF to: 0062ae9d (READ)
// 004d37b6: FLD float ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 004d37b9: FXCH
// 004d37bb: FST float ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (WRITE)
// 004d37be: FCHS
// 004d37c0: FSTP float ptr [EBP + 0x56]
//   XREF to: Stack[-0x34] (WRITE)
// 004d37c3: FCOMP float ptr [EBP + 0x56]
//   XREF to: Stack[-0x34] (READ)
// 004d37c6: FNSTSW AX
// 004d37c8: SAHF
// 004d37c9: JNC 0x004d37d1
//   XREF to: 004d37d1 (CONDITIONAL_JUMP)
// 004d37cb: MOV EAX,dword ptr [EBP + 0x56]
//   XREF to: Stack[-0x34] (READ)
// 004d37ce: MOV dword ptr [EBP + 0x72],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004d37d1: FLD float ptr [EBP + 0x72]
//   Label: LAB_004d37d1
//   XREF to: Stack[-0x18] (READ)
// 004d37d4: FCOMP float ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (READ)
// 004d37d7: FNSTSW AX
// 004d37d9: SAHF
// 004d37da: JBE 0x004d37e2
//   XREF to: 004d37e2 (CONDITIONAL_JUMP)
// 004d37dc: MOV EAX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (READ)
// 004d37df: MOV dword ptr [EBP + 0x72],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004d37e2: FLD float ptr [EBX + 0x34]
//   Label: LAB_004d37e2
// 004d37e5: FADD float ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 004d37e8: PUSH EBX
// 004d37e9: FSTP float ptr [EBX + 0x34]
// 004d37ec: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 004d37f1: ADD ESP,0x4
// 004d37f4: MOV EAX,dword ptr [EBX + 0x2598]
//   Label: LAB_004d37f4
// 004d37fa: MOV dword ptr [EBP + 0x36],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 004d37fd: MOV EAX,dword ptr [EAX + 0x154]
// 004d3803: PUSH 0x0
// 004d3805: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d3808: LEA EAX,[EBP + 0xffffff4e]
//   XREF to: Stack[-0x13c] (DATA)
// 004d380e: PUSH EAX
// 004d380f: LEA EDI,[EBX + 0x158]
// 004d3815: PUSH EDI
// 004d3816: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004d381b: ADD ESP,0xc
// 004d381e: PUSH EAX
// 004d381f: PUSH EBX
// 004d3820: MOV EAX,dword ptr [EBP + 0x36]
//   XREF to: Stack[-0x54] (READ)
// 004d3823: PUSH EAX
// 004d3824: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004d3827: CALL dword ptr [EAX + 0x124]
// 004d382d: ADD ESP,0xc
// 004d3830: TEST EAX,EAX
// 004d3832: JZ 0x004d3854
//   XREF to: 004d3854 (CONDITIONAL_JUMP)
// 004d3834: CMP dword ptr [EBX + 0x2598],0x0
// 004d383b: JZ 0x004d385a
//   XREF to: 004d385a (CONDITIONAL_JUMP)
// 004d383d: CMP dword ptr [EBX + 0xbe38],0x0
// 004d3844: JZ 0x004d321d
//   XREF to: 004d321d (CONDITIONAL_JUMP)
// 004d384a: PUSH 0x1
// 004d384c: PUSH 0x7
// 004d384e: PUSH EDI
// 004d384f: JMP 0x004d3215
//   XREF to: 004d3215 (UNCONDITIONAL_JUMP)
// 004d3854: MOV dword ptr [EBX + 0x2598],EAX
//   Label: LAB_004d3854
// 004d385a: PUSH 0x1
//   Label: LAB_004d385a
// 004d385c: PUSH 0x0
// 004d385e: JMP 0x004d320e
//   XREF to: 004d320e (UNCONDITIONAL_JUMP)
// 004d3863: CMP dword ptr [EBX + 0x1fba4],0x0
//   Label: LAB_004d3863
// 004d386a: JZ 0x004d3a59
//   XREF to: 004d3a59 (CONDITIONAL_JUMP)
// 004d3870: MOV ECX,dword ptr [EBX + 0xbe38]
// 004d3876: MOV dword ptr [EBP + 0x3a],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 004d3879: TEST ECX,ECX
// 004d387b: JNZ 0x004d38a8
//   XREF to: 004d38a8 (CONDITIONAL_JUMP)
// 004d387d: MOV EDX,dword ptr [EBP + 0x3a]
//   Label: LAB_004d387d
//   XREF to: Stack[-0x50] (READ)
// 004d3880: TEST EDX,EDX
// 004d3882: JNZ 0x004d321d
//   XREF to: 004d321d (CONDITIONAL_JUMP)
// 004d3888: PUSH 0x1
// 004d388a: PUSH EDX
// 004d388b: LEA EAX,[EBX + 0x158]
// 004d3891: PUSH EAX
// 004d3892: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004d3897: ADD ESP,0xc
// 004d389a: PUSH EBX
// 004d389b: CALL core_hero.cpp_FUN_004f3350
//   XREF to: 004f3350 (UNCONDITIONAL_CALL)
// 004d38a0: ADD ESP,0x4
// 004d38a3: JMP 0x004d321d
//   XREF to: 004d321d (UNCONDITIONAL_JUMP)
// 004d38a8: LEA EDX,[EBP + 0xfffffed6]
//   Label: LAB_004d38a8
//   XREF to: Stack[-0x1b4] (DATA)
// 004d38ae: MOV EAX,dword ptr [EBX + 0x1fba4]
// 004d38b4: PUSH EDX
// 004d38b5: MOV EDI,dword ptr [EAX + 0x154]
// 004d38bb: PUSH EAX
// 004d38bc: CALL dword ptr [EDI + 0x14]
// 004d38bf: FLD float ptr [EBP + 0xfffffeda]
//   XREF to: Stack[-0x1b0] (READ)
// 004d38c5: FLD float ptr [EBP + 0xfffffed6]
//   XREF to: Stack[-0x1b4] (READ)
// 004d38cb: FADD float ptr [EBP + 0xfffffee2]
//   XREF to: Stack[-0x1a8] (READ)
// 004d38d1: FXCH
// 004d38d3: FADD float ptr [EBP + 0xfffffee6]
//   XREF to: Stack[-0x1a4] (READ)
// 004d38d9: FXCH
// 004d38db: FST float ptr [EBP + 0xfffffeee]
//   XREF to: Stack[-0x19c] (WRITE)
// 004d38e1: FMUL float ptr [0x0062ae7d]
//   XREF to: 0062ae7d (READ)
// 004d38e7: FXCH
// 004d38e9: FST float ptr [EBP + 0xfffffef2]
//   XREF to: Stack[-0x198] (WRITE)
// 004d38ef: FMUL float ptr [0x0062ae7d]
//   XREF to: 0062ae7d (READ)
// 004d38f5: FLD float ptr [EBP + 0xfffffede]
//   XREF to: Stack[-0x1ac] (READ)
// 004d38fb: LEA EAX,[EBP + -0x16]
//   XREF to: Stack[-0xa0] (DATA)
// 004d38fe: ADD ESP,0x8
// 004d3901: FADD float ptr [EBP + 0xfffffeea]
//   XREF to: Stack[-0x1a0] (READ)
// 004d3907: PUSH EAX
// 004d3908: FST float ptr [EBP + 0xfffffef6]
//   XREF to: Stack[-0x194] (WRITE)
// 004d390e: LEA EAX,[EBP + 0xffffff42]
//   XREF to: Stack[-0x148] (DATA)
// 004d3914: FMUL float ptr [0x0062ae7d]
//   XREF to: 0062ae7d (READ)
// 004d391a: PUSH EAX
// 004d391b: FXCH ST2
// 004d391d: FSTP float ptr [EBP + -0x16]
//   XREF to: Stack[-0xa0] (WRITE)
// 004d3920: FSTP float ptr [EBP + -0x12]
//   XREF to: Stack[-0x9c] (WRITE)
// 004d3923: FSTP float ptr [EBP + -0xe]
//   XREF to: Stack[-0x98] (WRITE)
// 004d3926: MOV EDI,dword ptr [EBX + 0x1fba4]
// 004d392c: PUSH EDI
// 004d392d: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004d3932: ADD ESP,0xc
// 004d3935: LEA EAX,[EBP + 0xffffff42]
//   XREF to: Stack[-0x148] (DATA)
// 004d393b: PUSH EAX
// 004d393c: LEA EAX,[EBP + -0x2e]
//   XREF to: Stack[-0xb8] (DATA)
// 004d393f: PUSH EAX
// 004d3940: PUSH EBX
// 004d3941: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004d3946: ADD ESP,0xc
// 004d3949: LEA EAX,[EBP + -0x2e]
//   XREF to: Stack[-0xb8] (DATA)
// 004d394c: PUSH EAX
// 004d394d: LEA EAX,[EBP + -0x52]
//   XREF to: Stack[-0xdc] (DATA)
// 004d3950: PUSH EAX
// 004d3951: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004d3956: ADD ESP,0x8
// 004d3959: PUSH dword ptr [EAX + 0x4]
// 004d395c: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004d3961: FLD float ptr [EBP + 0xfffffeea]
//   XREF to: Stack[-0x1a0] (READ)
// 004d3967: FLD float ptr [EBP + 0xfffffee2]
//   XREF to: Stack[-0x1a8] (READ)
// 004d396d: FSUB float ptr [EBP + 0xfffffed6]
//   XREF to: Stack[-0x1b4] (READ)
// 004d3973: FXCH
// 004d3975: FSUB float ptr [EBP + 0xfffffede]
//   XREF to: Stack[-0x1ac] (READ)
// 004d397b: FXCH
// 004d397d: FST float ptr [EBP + 0x2]
//   XREF to: Stack[-0x88] (WRITE)
// 004d3980: FMUL float ptr [0x0062ae7d]
//   XREF to: 0062ae7d (READ)
// 004d3986: FXCH
// 004d3988: FST float ptr [EBP + 0xa]
//   XREF to: Stack[-0x80] (WRITE)
// 004d398b: FMUL float ptr [0x0062ae7d]
//   XREF to: 0062ae7d (READ)
// 004d3991: FXCH
// 004d3993: FST float ptr [EBP + -0x22]
//   XREF to: Stack[-0xac] (WRITE)
// 004d3996: FMUL float ptr [EBP + -0x22]
//   XREF to: Stack[-0xac] (READ)
// 004d3999: FXCH
// 004d399b: FST float ptr [EBP + -0x1a]
//   XREF to: Stack[-0xa4] (WRITE)
// 004d399e: FMUL float ptr [EBP + -0x1a]
//   XREF to: Stack[-0xa4] (READ)
// 004d39a1: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d39a4: XOR EAX,EAX
// 004d39a6: FADDP
// 004d39a8: MOV dword ptr [EBP + -0x1e],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 004d39ab: FSQRT
// 004d39ad: FLD float ptr [EBP + 0xfffffee6]
//   XREF to: Stack[-0x1a4] (READ)
// 004d39b3: ADD ESP,0x4
// 004d39b6: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004d39b9: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004d39bc: FSUB float ptr [EBP + 0xfffffeda]
//   XREF to: Stack[-0x1b0] (READ)
// 004d39c2: FXCH
// 004d39c4: FSUBR float ptr [EBP + -0x26]
//   XREF to: Stack[-0xb0] (READ)
// 004d39c7: FXCH
// 004d39c9: FSTP float ptr [EBP + 0x6]
//   XREF to: Stack[-0x84] (WRITE)
// 004d39cc: FCOMP double ptr [0x0062ae85]
//   XREF to: 0062ae85 (READ)
// 004d39d2: FNSTSW AX
// 004d39d4: SAHF
// 004d39d5: JNC 0x004d387d
//   XREF to: 004d387d (CONDITIONAL_JUMP)
// 004d39db: FLD float ptr [EBP + -0x2a]
//   XREF to: Stack[-0xb4] (READ)
// 004d39de: FLD1
// 004d39e0: FXCH
// 004d39e2: FSTP double ptr [EBP + 0x26]
//   XREF to: Stack[-0x64] (WRITE)
// 004d39e5: FCOMP double ptr [EBP + 0x26]
//   XREF to: Stack[-0x64] (READ)
// 004d39e8: FNSTSW AX
// 004d39ea: SAHF
// 004d39eb: JNC 0x004d387d
//   XREF to: 004d387d (CONDITIONAL_JUMP)
// 004d39f1: FLD double ptr [EBP + 0x26]
//   XREF to: Stack[-0x64] (READ)
// 004d39f4: FCOMP double ptr [0x0062ae8d]
//   XREF to: 0062ae8d (READ)
// 004d39fa: FNSTSW AX
// 004d39fc: SAHF
// 004d39fd: JNC 0x004d387d
//   XREF to: 004d387d (CONDITIONAL_JUMP)
// 004d3a03: FLD float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 004d3a06: FABS
// 004d3a08: FCOMP double ptr [0x0062ae95]
//   XREF to: 0062ae95 (READ)
// 004d3a0e: FNSTSW AX
// 004d3a10: SAHF
// 004d3a11: JNC 0x004d387d
//   XREF to: 004d387d (CONDITIONAL_JUMP)
// 004d3a17: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004d3a1d: FMUL double ptr [0x0062ae9d]
//   XREF to: 0062ae9d (READ)
// 004d3a23: FST float ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (WRITE)
// 004d3a26: FCHS
// 004d3a28: FCOMP float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 004d3a2b: FNSTSW AX
// 004d3a2d: SAHF
// 004d3a2e: JA 0x004d3a4f
//   XREF to: 004d3a4f (CONDITIONAL_JUMP)
// 004d3a30: FLD float ptr [EBP + 0x6e]
//   Label: LAB_004d3a30
//   XREF to: Stack[-0x1c] (READ)
// 004d3a33: FCOMP float ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 004d3a36: FNSTSW AX
// 004d3a38: SAHF
// 004d3a39: JBE 0x004d3a41
//   XREF to: 004d3a41 (CONDITIONAL_JUMP)
// 004d3a3b: MOV EAX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 004d3a3e: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004d3a41: FLD float ptr [EBX + 0x34]
//   Label: LAB_004d3a41
// 004d3a44: FADD float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 004d3a47: FSTP float ptr [EBX + 0x34]
// 004d3a4a: JMP 0x004d321d
//   XREF to: 004d321d (UNCONDITIONAL_JUMP)
// 004d3a4f: FLD float ptr [EBP + 0x66]
//   Label: LAB_004d3a4f
//   XREF to: Stack[-0x24] (READ)
// 004d3a52: FCHS
// 004d3a54: FSTP float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (WRITE)
// 004d3a57: JMP 0x004d3a30
//   XREF to: 004d3a30 (UNCONDITIONAL_JUMP)
// 004d3a59: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_004d3a59
//   XREF to: Stack[0x8] (READ)
// 004d3a5f: PUSH EBX
// 004d3a60: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 004d3a65: ADD ESP,0x8
// 004d3a68: LEA EDI,[EBX + 0x158]
// 004d3a6e: TEST EAX,EAX
// 004d3a70: JZ 0x004d3acb
//   XREF to: 004d3acb (CONDITIONAL_JUMP)
// 004d3a72: MOV EAX,dword ptr [EBX + 0x25b0]
// 004d3a78: CMP EAX,0x2
// 004d3a7b: JNC 0x004d3abb
//   XREF to: 004d3abb (CONDITIONAL_JUMP)
// 004d3a7d: CMP EAX,0x1
// 004d3a80: JNZ 0x004d385a
//   XREF to: 004d385a (CONDITIONAL_JUMP)
// 004d3a86: PUSH EAX
// 004d3a87: PUSH EAX
// 004d3a88: PUSH EDI
// 004d3a89: JMP 0x004d3215
//   XREF to: 004d3215 (UNCONDITIONAL_JUMP)
// 004d3a8e: PUSH 0x1
//   Label: LAB_004d3a8e
// 004d3a90: PUSH 0x0
// 004d3a92: PUSH EDI
// 004d3a93: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004d3a98: ADD ESP,0xc
// 004d3a9b: PUSH EBX
// 004d3a9c: PUSH 0x62ae13
//   XREF to: 0062ae13 (DATA)
// 004d3aa1: MOV EAX,[0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 004d3aa6: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 004d3aa7: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004d3aac: JMP 0x004d321a
//   XREF to: 004d321a (UNCONDITIONAL_JUMP)
// 004d3ab1: PUSH 0x1
//   Label: LAB_004d3ab1
// 004d3ab3: PUSH 0x2
// 004d3ab5: PUSH EDI
// 004d3ab6: JMP 0x004d3215
//   XREF to: 004d3215 (UNCONDITIONAL_JUMP)
// 004d3abb: JBE 0x004d3ab1
//   Label: LAB_004d3abb
//   XREF to: 004d3ab1 (CONDITIONAL_JUMP)
// 004d3abd: CMP EAX,0x3
// 004d3ac0: JZ 0x004d3a8e
//   XREF to: 004d3a8e (CONDITIONAL_JUMP)
// 004d3ac2: PUSH 0x1
// 004d3ac4: PUSH 0x0
// 004d3ac6: JMP 0x004d320e
//   XREF to: 004d320e (UNCONDITIONAL_JUMP)
// 004d3acb: TEST ESI,ESI
//   Label: LAB_004d3acb
// 004d3acd: JNZ 0x004d321d
//   XREF to: 004d321d (CONDITIONAL_JUMP)
// 004d3ad3: PUSH EDI
// 004d3ad4: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004d3ad9: MOV EAX,dword ptr [EAX + 0x24]
// 004d3adc: ADD ESP,0x4
// 004d3adf: CMP EAX,0xe
// 004d3ae2: JNC 0x004d3c0f
//   XREF to: 004d3c0f (CONDITIONAL_JUMP)
// 004d3ae8: CMP EAX,0x1
// 004d3aeb: JNC 0x004d3c47
//   XREF to: 004d3c47 (CONDITIONAL_JUMP)
// 004d3af1: TEST EAX,EAX
// 004d3af3: JNZ 0x004d321d
//   XREF to: 004d321d (CONDITIONAL_JUMP)
// 004d3af9: CMP dword ptr [EBX + 0x2410],0x0
//   Label: LAB_004d3af9
// 004d3b00: JZ 0x004d321d
//   XREF to: 004d321d (CONDITIONAL_JUMP)
// 004d3b06: MOV EDX,dword ptr [EBX + 0xbe2c]
// 004d3b0c: XOR EDI,EDI
// 004d3b0e: TEST EDX,EDX
// 004d3b10: JZ 0x004d3b24
//   XREF to: 004d3b24 (CONDITIONAL_JUMP)
// 004d3b12: CMP dword ptr [EBX + 0xbe34],0x0
// 004d3b19: JZ 0x004d3bbf
//   XREF to: 004d3bbf (CONDITIONAL_JUMP)
// 004d3b1f: MOV EDI,0x2
// 004d3b24: CMP dword ptr [EBX + 0xbe30],0x0
//   Label: LAB_004d3b24
// 004d3b2b: JZ 0x004d3b32
//   XREF to: 004d3b32 (CONDITIONAL_JUMP)
// 004d3b2d: MOV EDI,0x3
// 004d3b32: FLD float ptr [EBX + 0xbe50]
//   Label: LAB_004d3b32
// 004d3b38: FMUL float ptr [EBX + 0x2438]
// 004d3b3e: FLD float ptr [EBX + 0x2434]
// 004d3b44: FLD float ptr [EBX + 0x241c]
// 004d3b4a: LEA EAX,[EBX + 0x158]
// 004d3b50: FADD float ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 004d3b53: MOV dword ptr [EBP + 0x4e],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004d3b56: PUSH EAX
// 004d3b57: FXCH
// 004d3b59: FADD float ptr [EBX + 0x2424]
// 004d3b5f: FXCH ST2
// 004d3b61: FSTP float ptr [EBX + 0x2418]
// 004d3b67: FXCH
// 004d3b69: FSTP float ptr [EBX + 0x2424]
// 004d3b6f: FSTP float ptr [EBX + 0x241c]
// 004d3b75: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004d3b7a: MOV EAX,dword ptr [EAX + 0x24]
// 004d3b7d: ADD ESP,0x4
// 004d3b80: CMP EDI,EAX
// 004d3b82: JZ 0x004d3b93
//   XREF to: 004d3b93 (CONDITIONAL_JUMP)
// 004d3b84: PUSH 0x1
// 004d3b86: PUSH EDI
// 004d3b87: MOV ECX,dword ptr [EBP + 0x4e]
//   XREF to: Stack[-0x3c] (READ)
// 004d3b8a: PUSH ECX
// 004d3b8b: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004d3b90: ADD ESP,0xc
// 004d3b93: CMP dword ptr [EBX + 0xbe3c],0x0
//   Label: LAB_004d3b93
// 004d3b9a: JZ 0x004d321d
//   XREF to: 004d321d (CONDITIONAL_JUMP)
// 004d3ba0: PUSH EBX
// 004d3ba1: CALL core_gabriela.cpp_PickupSomething_FUN_004d5870
//   XREF to: 004d5870 (UNCONDITIONAL_CALL)
// 004d3ba6: ADD ESP,0x4
// 004d3ba9: TEST EAX,EAX
// 004d3bab: JNZ 0x004d321d
//   XREF to: 004d321d (CONDITIONAL_JUMP)
// 004d3bb1: PUSH EBX
// 004d3bb2: CALL core_gabriela.cpp_FUN_004d6050
//   XREF to: 004d6050 (UNCONDITIONAL_CALL)
// 004d3bb7: ADD ESP,0x4
// 004d3bba: JMP 0x004d321d
//   XREF to: 004d321d (UNCONDITIONAL_JUMP)
// 004d3bbf: MOV EDI,0x1
//   Label: LAB_004d3bbf
// 004d3bc4: JMP 0x004d3b24
//   XREF to: 004d3b24 (UNCONDITIONAL_JUMP)
// 004d3bc9: MOV EAX,[0x008223e0]
//   Label: LAB_004d3bc9
//   XREF to: 008223e0 (READ)
// 004d3bce: PUSH EAX
// 004d3bcf: MOV EDX,dword ptr [EBX + 0x1fba0]
// 004d3bd5: PUSH EDX
// 004d3bd6: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004d3bdb: MOV dword ptr [EBP + 0x5e],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004d3bde: ADD ESP,0x8
// 004d3be1: TEST EAX,EAX
// 004d3be3: JZ 0x004d321d
//   XREF to: 004d321d (CONDITIONAL_JUMP)
// 004d3be9: PUSH EDI
// 004d3bea: CALL core_motion.cpp_CMotionController_FUN_0052e2b0
//   XREF to: 0052e2b0 (UNCONDITIONAL_CALL)
// 004d3bef: MOV EDI,dword ptr [EBP + 0x5e]
//   XREF to: Stack[-0x2c] (READ)
// 004d3bf2: ADD ESP,0x4
// 004d3bf5: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d3bf8: SUB ESP,0x4
// 004d3bfb: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004d3bfe: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1e0] (DATA)
// 004d3c01: PUSH EDI
// 004d3c02: CALL core_ammobox.cpp_LogConsoleOpenPCTFile_FUN_00411690
//   XREF to: 00411690 (UNCONDITIONAL_CALL)
// 004d3c07: ADD ESP,0x8
// 004d3c0a: JMP 0x004d321d
//   XREF to: 004d321d (UNCONDITIONAL_JUMP)
// 004d3c0f: JBE 0x004d3bc9
//   Label: LAB_004d3c0f
//   XREF to: 004d3bc9 (CONDITIONAL_JUMP)
// 004d3c11: CMP EAX,0x11
// 004d3c14: JNC 0x004d3c24
//   XREF to: 004d3c24 (CONDITIONAL_JUMP)
// 004d3c16: CMP EAX,0x10
// 004d3c19: JZ 0x004d3af9
//   XREF to: 004d3af9 (CONDITIONAL_JUMP)
// 004d3c1f: JMP 0x004d321d
//   XREF to: 004d321d (UNCONDITIONAL_JUMP)
// 004d3c24: JBE 0x004d3af9
//   Label: LAB_004d3c24
//   XREF to: 004d3af9 (CONDITIONAL_JUMP)
// 004d3c2a: CMP EAX,0x14
// 004d3c2d: JC 0x004d321d
//   XREF to: 004d321d (CONDITIONAL_JUMP)
// 004d3c33: JBE 0x004d3af9
//   XREF to: 004d3af9 (CONDITIONAL_JUMP)
// 004d3c39: CMP EAX,0x15
// 004d3c3c: JZ 0x004d3af9
//   XREF to: 004d3af9 (CONDITIONAL_JUMP)
// 004d3c42: JMP 0x004d321d
//   XREF to: 004d321d (UNCONDITIONAL_JUMP)
// 004d3c47: JBE 0x004d3af9
//   Label: LAB_004d3c47
//   XREF to: 004d3af9 (CONDITIONAL_JUMP)
// 004d3c4d: CMP EAX,0x2
// 004d3c50: JBE 0x004d3af9
//   XREF to: 004d3af9 (CONDITIONAL_JUMP)
// 004d3c56: CMP EAX,0x3
// 004d3c59: JZ 0x004d3af9
//   XREF to: 004d3af9 (CONDITIONAL_JUMP)
// 004d3c5f: JMP 0x004d321d
//   XREF to: 004d321d (UNCONDITIONAL_JUMP)
// 004d3c64: TEST ESI,ESI
//   Label: LAB_004d3c64
// 004d3c66: JNZ 0x004d3d7f
//   XREF to: 004d3d7f (CONDITIONAL_JUMP)
// 004d3c6c: LEA EDX,[EBX + 0x241c]
//   Label: LAB_004d3c6c
// 004d3c72: MOV EAX,dword ptr [EDX]
// 004d3c74: MOV dword ptr [EBP + 0xffffff12],EAX
//   XREF to: Stack[-0x178] (WRITE)
// 004d3c7a: LEA EAX,[EDX + 0x4]
// 004d3c7d: MOV EAX,dword ptr [EAX]
// 004d3c7f: MOV dword ptr [EBP + 0xffffff16],EAX
//   XREF to: Stack[-0x174] (WRITE)
// 004d3c85: LEA EAX,[EDX + 0x8]
// 004d3c88: MOV EAX,dword ptr [EAX]
// 004d3c8a: MOV dword ptr [EBP + 0xffffff1a],EAX
//   XREF to: Stack[-0x170] (WRITE)
// 004d3c90: LEA EAX,[EBX + 0x158]
// 004d3c96: PUSH EAX
// 004d3c97: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004d3c9c: MOV EAX,dword ptr [EAX + 0x24]
// 004d3c9f: ADD ESP,0x4
// 004d3ca2: CMP EAX,0x3
// 004d3ca5: JNC 0x004d3dac
//   XREF to: 004d3dac (CONDITIONAL_JUMP)
// 004d3cab: CMP EAX,0x1
// 004d3cae: JNC 0x004d3cea
//   XREF to: 004d3cea (CONDITIONAL_JUMP)
// 004d3cb0: TEST EAX,EAX
// 004d3cb2: JZ 0x004d3cea
//   Label: LAB_004d3cb2
//   XREF to: 004d3cea (CONDITIONAL_JUMP)
// 004d3cb4: LEA EAX,[EBX + 0x23ac]
//   Label: LAB_004d3cb4
// 004d3cba: FLD float ptr [EBP + 0xffffff12]
//   XREF to: Stack[-0x178] (READ)
// 004d3cc0: FADD float ptr [EAX]
// 004d3cc2: FLD float ptr [EBP + 0xffffff16]
//   XREF to: Stack[-0x174] (READ)
// 004d3cc8: FXCH
// 004d3cca: FSTP float ptr [EBP + 0xffffff12]
//   XREF to: Stack[-0x178] (WRITE)
// 004d3cd0: FADD float ptr [EAX + 0x4]
// 004d3cd3: FLD float ptr [EBP + 0xffffff1a]
//   XREF to: Stack[-0x170] (READ)
// 004d3cd9: FXCH
// 004d3cdb: FSTP float ptr [EBP + 0xffffff16]
//   XREF to: Stack[-0x174] (WRITE)
// 004d3ce1: FADD float ptr [EAX + 0x8]
// 004d3ce4: FSTP float ptr [EBP + 0xffffff1a]
//   XREF to: Stack[-0x170] (WRITE)
// 004d3cea: FLD float ptr [EBP + 0x92]
//   Label: LAB_004d3cea
//   XREF to: Stack[0x8] (READ)
// 004d3cf0: FLD ST0
// 004d3cf2: FMUL double ptr [0x0062aecd]
//   XREF to: 0062aecd (READ)
// 004d3cf8: FLD float ptr [EBX + 0x242c]
// 004d3cfe: FXCH
// 004d3d00: FSUBR ST0,ST1
// 004d3d02: LEA EAX,[EBX + 0x2428]
// 004d3d08: FSTP ST1
// 004d3d0a: FSTP float ptr [EBX + 0x242c]
// 004d3d10: FLD float ptr [EAX]
// 004d3d12: FMUL ST1
// 004d3d14: FSTP float ptr [EBP + 0xffffff2a]
//   XREF to: Stack[-0x160] (WRITE)
// 004d3d1a: FLD float ptr [EAX + 0x4]
// 004d3d1d: FMUL ST1
// 004d3d1f: FSTP float ptr [EBP + 0xffffff2e]
//   XREF to: Stack[-0x15c] (WRITE)
// 004d3d25: FMUL float ptr [EAX + 0x8]
// 004d3d28: FLD float ptr [EBP + 0xffffff16]
//   XREF to: Stack[-0x174] (READ)
// 004d3d2e: FLD float ptr [EBP + 0xffffff12]
//   XREF to: Stack[-0x178] (READ)
// 004d3d34: FADD float ptr [EBP + 0xffffff2a]
//   XREF to: Stack[-0x160] (READ)
// 004d3d3a: FLD float ptr [EBP + 0xffffff1a]
//   XREF to: Stack[-0x170] (READ)
// 004d3d40: FXCH
// 004d3d42: FSTP float ptr [EBP + 0xffffff12]
//   XREF to: Stack[-0x178] (WRITE)
// 004d3d48: FXCH
// 004d3d4a: FADD float ptr [EBP + 0xffffff2e]
//   XREF to: Stack[-0x15c] (READ)
// 004d3d50: LEA EAX,[EBP + 0xffffff12]
//   XREF to: Stack[-0x178] (DATA)
// 004d3d56: FSTP float ptr [EBP + 0xffffff16]
//   XREF to: Stack[-0x174] (WRITE)
// 004d3d5c: FXCH
// 004d3d5e: FSTP float ptr [EBP + 0xffffff32]
//   XREF to: Stack[-0x158] (WRITE)
// 004d3d64: PUSH EAX
// 004d3d65: FADD float ptr [EBP + 0xffffff32]
//   XREF to: Stack[-0x158] (READ)
// 004d3d6b: PUSH EBX
// 004d3d6c: FSTP float ptr [EBP + 0xffffff1a]
//   XREF to: Stack[-0x170] (WRITE)
// 004d3d72: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 004d3d77: ADD ESP,0x8
// 004d3d7a: JMP 0x004d326d
//   XREF to: 004d326d (UNCONDITIONAL_JUMP)
// 004d3d7f: LEA EAX,[EBX + 0x158]
//   Label: LAB_004d3d7f
// 004d3d85: PUSH EAX
// 004d3d86: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004d3d8b: MOV EAX,dword ptr [EAX + 0x24]
// 004d3d8e: ADD ESP,0x4
// 004d3d91: CMP EAX,0xd
// 004d3d94: JZ 0x004d3c6c
//   XREF to: 004d3c6c (CONDITIONAL_JUMP)
// 004d3d9a: CMP dword ptr [EBX + 0xdc],0x0
// 004d3da1: JNZ 0x004d3c6c
//   XREF to: 004d3c6c (CONDITIONAL_JUMP)
// 004d3da7: JMP 0x004d326d
//   XREF to: 004d326d (UNCONDITIONAL_JUMP)
// 004d3dac: JBE 0x004d3cea
//   Label: LAB_004d3dac
//   XREF to: 004d3cea (CONDITIONAL_JUMP)
// 004d3db2: CMP EAX,0x11
// 004d3db5: JNC 0x004d3dbf
//   XREF to: 004d3dbf (CONDITIONAL_JUMP)
// 004d3db7: CMP EAX,0x10
// 004d3dba: JMP 0x004d3cb2
//   XREF to: 004d3cb2 (UNCONDITIONAL_JUMP)
// 004d3dbf: JBE 0x004d3cea
//   Label: LAB_004d3dbf
//   XREF to: 004d3cea (CONDITIONAL_JUMP)
// 004d3dc5: CMP EAX,0x14
// 004d3dc8: JC 0x004d3cb4
//   XREF to: 004d3cb4 (CONDITIONAL_JUMP)
// 004d3dce: JBE 0x004d3cea
//   XREF to: 004d3cea (CONDITIONAL_JUMP)
// 004d3dd4: CMP EAX,0x15
// 004d3dd7: JMP 0x004d3cb2
//   XREF to: 004d3cb2 (UNCONDITIONAL_JUMP)
// 004d3ddc: CMP dword ptr [EBX + 0xbe44],0x0
//   Label: LAB_004d3ddc
// 004d3de3: JZ 0x004d327e
//   XREF to: 004d327e (CONDITIONAL_JUMP)
// 004d3de9: LEA EAX,[EBX + 0x1f738]
// 004d3def: MOV EAX,dword ptr [EAX + 0x330]
// 004d3df5: TEST EAX,EAX
// 004d3df7: JZ 0x004d327e
//   XREF to: 004d327e (CONDITIONAL_JUMP)
// 004d3dfd: MOV AH,byte ptr [EBX + 0x1fbd4]
// 004d3e03: TEST AH,0x3
// 004d3e06: JZ 0x004d3e18
//   XREF to: 004d3e18 (CONDITIONAL_JUMP)
// 004d3e08: MOV DH,AH
// 004d3e0a: AND DH,0xfc
// 004d3e0d: MOV byte ptr [EBX + 0x1fbd4],DH
// 004d3e13: JMP 0x004d327e
//   XREF to: 004d327e (UNCONDITIONAL_JUMP)
// 004d3e18: MOV DL,AH
//   Label: LAB_004d3e18
// 004d3e1a: OR DL,0x2
// 004d3e1d: MOV byte ptr [EBX + 0x1fbd4],DL
// 004d3e23: JMP 0x004d327e
//   XREF to: 004d327e (UNCONDITIONAL_JUMP)
// 004d3e28: CMP dword ptr [EAX + 0x2324],0x0
//   Label: LAB_004d3e28
// 004d3e2f: SETZ AL
// 004d3e32: AND EAX,0xff
// 004d3e37: MOV dword ptr [EDI + 0x2324],EAX
// 004d3e3d: CMP dword ptr [EDI + 0x66c],0x1
// 004d3e44: JNZ 0x004d32af
//   XREF to: 004d32af (CONDITIONAL_JUMP)
// 004d3e4a: PUSH 0x62ae3d
//   XREF to: 0062ae3d (DATA)
// 004d3e4f: MOV EAX,dword ptr [EBX + 0x154]
// 004d3e55: PUSH EBX
// 004d3e56: CALL dword ptr [EAX + 0x24]
// 004d3e59: ADD ESP,0x8
// 004d3e5c: JMP 0x004d32af
//   XREF to: 004d32af (UNCONDITIONAL_JUMP)
// 004d3e61: FLD float ptr [EBP + 0x92]
//   Label: LAB_004d3e61
//   XREF to: Stack[0x8] (READ)
// 004d3e67: FDIV float ptr [0x0065e7ac]
//   XREF to: 0065e7ac (READ)
// 004d3e6d: FSUBR float ptr [EBX + 0x1fbd8]
// 004d3e73: FST float ptr [EBX + 0x1fbd8]
// 004d3e79: FLDZ
// 004d3e7b: FCOMPP
// 004d3e7d: FNSTSW AX
// 004d3e7f: SAHF
// 004d3e80: JBE 0x004d3370
//   XREF to: 004d3370 (CONDITIONAL_JUMP)
// 004d3e86: MOV dword ptr [EBX + 0x1fbd8],0x0
// 004d3e90: JMP 0x004d3370
//   XREF to: 004d3370 (UNCONDITIONAL_JUMP)
// 004d3e95: FLD float ptr [EBP + 0x92]
//   Label: LAB_004d3e95
//   XREF to: Stack[0x8] (READ)
// 004d3e9b: FDIV float ptr [0x0065e7ac]
//   XREF to: 0065e7ac (READ)
// 004d3ea1: MOV EAX,dword ptr [EBX + 0x1fbdc]
// 004d3ea7: MOV dword ptr [EBP + 0x5a],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004d3eaa: FSUBR float ptr [EBP + 0x5a]
//   XREF to: Stack[-0x30] (READ)
// 004d3ead: FST float ptr [EBX + 0x1fbdc]
// 004d3eb3: FLDZ
// 004d3eb5: FCOMPP
// 004d3eb7: FNSTSW AX
// 004d3eb9: SAHF
// 004d3eba: JBE 0x004d3ec6
//   XREF to: 004d3ec6 (CONDITIONAL_JUMP)
// 004d3ebc: MOV dword ptr [EBX + 0x1fbdc],0x0
// 004d3ec6: FLD float ptr [0x0065e7b4]
//   Label: LAB_004d3ec6
//   XREF to: 0065e7b4 (READ)
// 004d3ecc: FADD double ptr [0x0062aedd]
//   XREF to: 0062aedd (READ)
// 004d3ed2: FLD float ptr [EBP + 0x5a]
//   XREF to: Stack[-0x30] (READ)
// 004d3ed5: FXCH
// 004d3ed7: FSTP float ptr [EBP + 0x52]
//   XREF to: Stack[-0x38] (WRITE)
// 004d3eda: FCOMP float ptr [EBP + 0x52]
//   XREF to: Stack[-0x38] (READ)
// 004d3edd: FNSTSW AX
// 004d3edf: SAHF
// 004d3ee0: JC 0x004d33f9
//   XREF to: 004d33f9 (CONDITIONAL_JUMP)
// 004d3ee6: FLD float ptr [EBX + 0x1fbdc]
// 004d3eec: FCOMP float ptr [EBP + 0x52]
//   XREF to: Stack[-0x38] (READ)
// 004d3eef: FNSTSW AX
// 004d3ef1: SAHF
// 004d3ef2: JNC 0x004d33f9
//   XREF to: 004d33f9 (CONDITIONAL_JUMP)
// 004d3ef8: PUSH 0x62ae5b
//   XREF to: 0062ae5b (DATA)
// 004d3efd: JMP 0x004d33ec
//   XREF to: 004d33ec (UNCONDITIONAL_JUMP)
// 004d3f02: FLD float ptr [EBP + 0x92]
//   Label: LAB_004d3f02
//   XREF to: Stack[0x8] (READ)
// 004d3f08: FDIV float ptr [0x0065e7ac]
//   XREF to: 0065e7ac (READ)
// 004d3f0e: FSUBR float ptr [EBX + 0x1fbe0]
// 004d3f14: FST float ptr [EBX + 0x1fbe0]
// 004d3f1a: FLDZ
// 004d3f1c: FCOMPP
// 004d3f1e: FNSTSW AX
// 004d3f20: SAHF
// 004d3f21: JBE 0x004d3431
//   XREF to: 004d3431 (CONDITIONAL_JUMP)
// 004d3f27: MOV dword ptr [EBX + 0x1fbe0],0x0
// 004d3f31: JMP 0x004d3431
//   XREF to: 004d3431 (UNCONDITIONAL_JUMP)
// 004d3f36: TEST EDI,EDI
//   Label: LAB_004d3f36
// 004d3f38: JZ 0x004d3f71
//   XREF to: 004d3f71 (CONDITIONAL_JUMP)
// 004d3f3a: CMP dword ptr [EDI + 0x2324],0x0
// 004d3f41: JZ 0x004d3f71
//   XREF to: 004d3f71 (CONDITIONAL_JUMP)
// 004d3f43: LEA EAX,[EBX + 0x158]
// 004d3f49: PUSH EAX
// 004d3f4a: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004d3f4f: MOV EAX,dword ptr [EAX + 0x24]
// 004d3f52: ADD ESP,0x4
// 004d3f55: CMP EAX,0x5
// 004d3f58: JZ 0x004d3f71
//   XREF to: 004d3f71 (CONDITIONAL_JUMP)
// 004d3f5a: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004d3f60: FDIV float ptr [0x0065e7a8]
//   XREF to: 0065e7a8 (READ)
// 004d3f66: FADD float ptr [EBX + 0x1fbe4]
// 004d3f6c: JMP 0x004d3451
//   XREF to: 004d3451 (UNCONDITIONAL_JUMP)
// 004d3f71: FLD float ptr [EBP + 0x92]
//   Label: LAB_004d3f71
//   XREF to: Stack[0x8] (READ)
// 004d3f77: FDIV float ptr [0x0065e7ac]
//   XREF to: 0065e7ac (READ)
// 004d3f7d: JMP 0x004d344b
//   XREF to: 004d344b (UNCONDITIONAL_JUMP)
// 004d3f82: CMP dword ptr [EBX + 0xbe38],0x0
//   Label: LAB_004d3f82
// 004d3f89: JZ 0x004d34ce
//   XREF to: 004d34ce (CONDITIONAL_JUMP)
// 004d3f8f: CMP dword ptr [EBX + 0x1fbec],0x0
// 004d3f96: JNZ 0x004d34ce
//   XREF to: 004d34ce (CONDITIONAL_JUMP)
// 004d3f9c: CMP dword ptr [EBX + 0x1fbd4],0x0
// 004d3fa3: JZ 0x004d3fb4
//   XREF to: 004d3fb4 (CONDITIONAL_JUMP)
// 004d3fa5: MOV dword ptr [EBX + 0x1fbec],0x3
// 004d3faf: JMP 0x004d34ce
//   XREF to: 004d34ce (UNCONDITIONAL_JUMP)
// 004d3fb4: FLD float ptr [EBX + 0x1fbdc]
//   Label: LAB_004d3fb4
// 004d3fba: FLDZ
// 004d3fbc: FCOMPP
// 004d3fbe: FNSTSW AX
// 004d3fc0: SAHF
// 004d3fc1: JC 0x004d34ce
//   XREF to: 004d34ce (CONDITIONAL_JUMP)
// 004d3fc7: PUSH EBX
// 004d3fc8: CALL core_hero.cpp_FUN_004f2af0
//   XREF to: 004f2af0 (UNCONDITIONAL_CALL)
// 004d3fcd: ADD ESP,0x4
// 004d3fd0: TEST EAX,EAX
// 004d3fd2: JNZ 0x004d34ce
//   XREF to: 004d34ce (CONDITIONAL_JUMP)
// 004d3fd8: PUSH EBX
// 004d3fd9: CALL core_hero.cpp_FUN_004f2d70
//   XREF to: 004f2d70 (UNCONDITIONAL_CALL)
// 004d3fde: ADD ESP,0x4
// 004d3fe1: MOV EDI,EAX
// 004d3fe3: CMP EAX,0x3
// 004d3fe6: JA 0x004d4004
//   XREF to: 004d4004 (CONDITIONAL_JUMP)
// 004d3fe8: JMP dword ptr [EAX*0x4 + 0x4d2e8c]
//   Label: switchD
//   XREF to: 004d3fef (COMPUTED_JUMP)
//   XREF to: 004d400d (COMPUTED_JUMP)
//   XREF to: 004d2e8c (DATA)
// 004d3fef: PUSH 0x1
//   Label: caseD_3
// 004d3ff1: PUSH 0x12
// 004d3ff3: LEA EAX,[EBX + 0x158]
// 004d3ff9: PUSH EAX
// 004d3ffa: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004d3fff: ADD ESP,0xc
// 004d4002: JMP 0x004d400d
//   XREF to: 004d400d (UNCONDITIONAL_JUMP)
// 004d4004: PUSH EBX
//   Label: default
// 004d4005: CALL core_hero.cpp_FUN_004f2ed0
//   XREF to: 004f2ed0 (UNCONDITIONAL_CALL)
// 004d400a: ADD ESP,0x4
// 004d400d: TEST EDI,EDI
//   Label: caseD_1
// 004d400f: JNZ 0x004d34ce
//   XREF to: 004d34ce (CONDITIONAL_JUMP)
// 004d4015: PUSH EBX
// 004d4016: CALL core_hero.cpp_FUN_004f2c40
//   XREF to: 004f2c40 (UNCONDITIONAL_CALL)
// 004d401b: ADD ESP,0x4
// 004d401e: TEST EAX,EAX
// 004d4020: JNZ 0x004d34ce
//   XREF to: 004d34ce (CONDITIONAL_JUMP)
// 004d4026: PUSH EBX
// 004d4027: CALL core_hero.cpp_FUN_004f3120
//   XREF to: 004f3120 (UNCONDITIONAL_CALL)
// 004d402c: ADD ESP,0x4
// 004d402f: TEST EAX,EAX
// 004d4031: JNZ 0x004d404e
//   XREF to: 004d404e (CONDITIONAL_JUMP)
// 004d4033: PUSH EBX
// 004d4034: CALL core_hero.cpp_FUN_004f2f50
//   XREF to: 004f2f50 (UNCONDITIONAL_CALL)
// 004d4039: ADD ESP,0x4
// 004d403c: TEST EAX,EAX
// 004d403e: JZ 0x004d4066
//   XREF to: 004d4066 (CONDITIONAL_JUMP)
// 004d4040: PUSH EBX
// 004d4041: CALL core_hero.cpp_FUN_004f30f0
//   XREF to: 004f30f0 (UNCONDITIONAL_CALL)
// 004d4046: ADD ESP,0x4
// 004d4049: JMP 0x004d34ce
//   XREF to: 004d34ce (UNCONDITIONAL_JUMP)
// 004d404e: PUSH 0x1
//   Label: LAB_004d404e
// 004d4050: PUSH 0xd
// 004d4052: LEA EAX,[EBX + 0x158]
// 004d4058: PUSH EAX
// 004d4059: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004d405e: ADD ESP,0xc
// 004d4061: JMP 0x004d34ce
//   XREF to: 004d34ce (UNCONDITIONAL_JUMP)
// 004d4066: PUSH EBX
//   Label: LAB_004d4066
// 004d4067: CALL core_gabriela.cpp_FUN_004d5c60
//   XREF to: 004d5c60 (UNCONDITIONAL_CALL)
// 004d406c: ADD ESP,0x4
// 004d406f: JMP 0x004d34ce
//   XREF to: 004d34ce (UNCONDITIONAL_JUMP)
// 004d4074: PUSH EBX
//   Label: LAB_004d4074
// 004d4075: CALL core_hero.cpp_FUN_004f3350
//   XREF to: 004f3350 (UNCONDITIONAL_CALL)
// 004d407a: ADD ESP,0x4
// 004d407d: JMP 0x004d35ec
//   XREF to: 004d35ec (UNCONDITIONAL_JUMP)
// 004d4082: CMP dword ptr [EBX + 0xbe38],0x0
//   Label: LAB_004d4082
// 004d4089: JZ 0x004d4164
//   XREF to: 004d4164 (CONDITIONAL_JUMP)
// 004d408f: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004d4095: FMUL double ptr [0x0062aef5]
//   XREF to: 0062aef5 (READ)
// 004d409b: FADD float ptr [EBX + 0x5fa84]
// 004d40a1: FST float ptr [EBX + 0x5fa84]
// 004d40a7: FCOMP float ptr [0x0065e7f0]
//   XREF to: 0065e7f0 (READ)
// 004d40ad: FNSTSW AX
// 004d40af: SAHF
// 004d40b0: JBE 0x004d40d1
//   XREF to: 004d40d1 (CONDITIONAL_JUMP)
// 004d40b2: MOV dword ptr [EBX + 0xbe38],0x0
// 004d40bc: MOV dword ptr [EBX + 0x1fbec],0x2
// 004d40c6: MOV EAX,[0x0065e7f0]
//   XREF to: 0065e7f0 (READ)
// 004d40cb: MOV dword ptr [EBX + 0x5fa84],EAX
// 004d40d1: MOV EAX,dword ptr [EBX + 0x1fc04]
//   Label: LAB_004d40d1
// 004d40d7: MOV dword ptr [EBP + -0x5e],EAX
//   XREF to: Stack[-0xe8] (WRITE)
// 004d40da: LEA EAX,[EBP + -0x5e]
//   XREF to: Stack[-0xe8] (DATA)
// 004d40dd: PUSH EAX
// 004d40de: LEA EAX,[EBP + 0xfffffeae]
//   XREF to: Stack[-0x1dc] (DATA)
// 004d40e4: XOR EDX,EDX
// 004d40e6: PUSH EAX
// 004d40e7: MOV dword ptr [EBP + -0x56],EDX
//   XREF to: Stack[-0xe0] (WRITE)
// 004d40ea: MOV dword ptr [EBP + -0x5a],EDX
//   XREF to: Stack[-0xe4] (WRITE)
// 004d40ed: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 004d40f2: MOV EAX,dword ptr [EBX + 0x5fa84]
// 004d40f8: ADD ESP,0x8
// 004d40fb: MOV dword ptr [EBP + -0x3e],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 004d40fe: LEA EAX,[EBP + -0x46]
//   XREF to: Stack[-0xd0] (DATA)
// 004d4101: PUSH EAX
// 004d4102: LEA EAX,[EBP + -0x76]
//   XREF to: Stack[-0x100] (DATA)
// 004d4105: PUSH EAX
// 004d4106: LEA EAX,[EBP + 0xfffffeae]
//   XREF to: Stack[-0x1dc] (DATA)
// 004d410c: XOR EDI,EDI
// 004d410e: PUSH EAX
// 004d410f: MOV dword ptr [EBP + -0x46],EDI
//   XREF to: Stack[-0xd0] (WRITE)
// 004d4112: MOV dword ptr [EBP + -0x42],EDI
//   XREF to: Stack[-0xcc] (WRITE)
// 004d4115: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 004d411a: ADD ESP,0xc
// 004d411d: PUSH EAX
// 004d411e: LEA EAX,[EBP + -0xa]
//   XREF to: Stack[-0x94] (DATA)
// 004d4121: PUSH EAX
// 004d4122: PUSH EBX
// 004d4123: ADD ESI,0x57c
// 004d4129: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 004d412e: ADD ESP,0xc
// 004d4131: CMP ESI,EAX
// 004d4133: JZ 0x004d4145
//   XREF to: 004d4145 (CONDITIONAL_JUMP)
// 004d4135: MOV EDX,dword ptr [EAX]
// 004d4137: MOV dword ptr [ESI],EDX
// 004d4139: MOV EDX,dword ptr [EAX + 0x4]
// 004d413c: MOV dword ptr [ESI + 0x4],EDX
// 004d413f: MOV EDX,dword ptr [EAX + 0x8]
// 004d4142: MOV dword ptr [ESI + 0x8],EDX
// 004d4145: CMP dword ptr [EBX + 0x1fbec],0x2
//   Label: LAB_004d4145
// 004d414c: JZ 0x004d363a
//   XREF to: 004d363a (CONDITIONAL_JUMP)
// 004d4152: CMP dword ptr [EBX + 0x1fbec],0x1
//   Label: LAB_004d4152
// 004d4159: JZ 0x004d3661
//   XREF to: 004d3661 (CONDITIONAL_JUMP)
// 004d415f: JMP 0x004d368e
//   XREF to: 004d368e (UNCONDITIONAL_JUMP)
// 004d4164: MOV dword ptr [EBX + 0x1fbec],0x2
//   Label: LAB_004d4164
// 004d416e: JMP 0x004d40d1
//   XREF to: 004d40d1 (UNCONDITIONAL_JUMP)
// 004d4173: MOV dword ptr [EBX + 0xbe38],ESI
//   Label: LAB_004d4173
// 004d4179: JMP 0x004d368e
//   XREF to: 004d368e (UNCONDITIONAL_JUMP)
// 004d417e: MOV dword ptr [EBX + 0xfc],0x1
//   Label: LAB_004d417e
// 004d4188: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 004d418b: POP EBP
// 004d418c: POP EDI
// 004d418d: POP ESI
// 004d418e: POP EBX
// 004d418f: RET
