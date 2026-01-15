// Name: core_gabriela.cpp_FUN_004d2ea0
// Address: 004d2ea0
// Address Range: [[004d2ea0, 004d418f]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d2ea0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_hero_gabriella.cpp_FUN_004d2ea0(uint param_1, uint
   param_2) */

void core_gabriela_cpp_FUN_004d2ea0(void)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  CCharacter *pCVar10;
  CGame *pCVar11;
  int iVar12;
  CVector3f *pCVar13;
  CVector3f *pCVar14;
  CDemonActor *pCVar15;
  float fVar16;
  SMotion *pSVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  char *sound_name;
  SCollisionInfo *in_stack_fffffdaa;
  CMatrix3x3f local_1dc;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
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
  uint local_a8;
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
  
  iVar12 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar12 == 0) {
    return;
  }
  if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) == 2) {
    core_gabriela_cpp_FUN_004d4190();
  }
  fVar16 = *(float *)in_stack_00000004[1].base_actor.actor_name - in_stack_00000008;
  *(float *)in_stack_00000004[1].base_actor.actor_name = fVar16;
  if (fVar16 < 0.0) {
    in_stack_00000004[1].base_actor.actor_name[0] = '\0';
    in_stack_00000004[1].base_actor.actor_name[1] = '\0';
    in_stack_00000004[1].base_actor.actor_name[2] = '\0';
    in_stack_00000004[1].base_actor.actor_name[3] = '\0';
  }
  pCVar13 = (CVector3f *)core_gabriela_cpp_FUN_004d4cf0();
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&in_stack_00000004->base_actor,&local_184,pCVar13);
  (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
  (in_stack_00000004->model).accumulated_root_motion.y =
       (in_stack_00000004->model).accumulated_root_motion.z;
  (in_stack_00000004->model).accumulated_root_motion.x =
       (in_stack_00000004->model).accumulated_root_motion.y;
  core_gabriela_cpp_FUN_004d4890();
  bVar5 = 0.0 < in_stack_00000004->hit_points;
  bVar18 = in_stack_00000004->grabbed_by == (CDemonActor *)0x0;
  bVar19 = *(int *)(in_stack_00000004[2].cloth_data + 0x54c4) == 0;
  bVar20 = *(int *)(in_stack_00000004[2].cloth_data + 0x54cc) == 0;
  local_14 = (CDemonActor_vtable *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(in_stack_00000004->model).motion_controller,8);
  bVar6 = (float)local_14 <= 0.0;
  local_14 = (CDemonActor_vtable *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(in_stack_00000004->model).motion_controller,0xb);
  bVar7 = (float)local_14 <= 0.0;
  local_14 = (CDemonActor_vtable *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(in_stack_00000004->model).motion_controller,0xc);
  bVar8 = (float)local_14 <= 0.0;
  local_14 = (CDemonActor_vtable *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(in_stack_00000004->model).motion_controller,0x12);
  bVar9 = (float)local_14 <= 0.0;
  in_stack_00000004->field2_0x240c[0x2c] = '\0';
  in_stack_00000004->field2_0x240c[0x2d] = '\0';
  in_stack_00000004->field2_0x240c[0x2e] = '\0';
  in_stack_00000004->field2_0x240c[0x2f] = '\0';
  iVar12 = *(int *)(in_stack_00000004->field2_0x240c + 4);
  in_stack_00000004->field2_0x240c[0x28] = '\0';
  in_stack_00000004->field2_0x240c[0x29] = '\0';
  in_stack_00000004->field2_0x240c[0x2a] = '\0';
  in_stack_00000004->field2_0x240c[0x2b] = '\0';
  local_20 = 0.0;
  if (iVar12 != 0) {
    pCVar2 = &in_stack_00000004->model;
    local_14 = (CDemonActor_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&pCVar2->motion_controller,1);
    *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
         (float)local_14 * _DAT_02d7b808 + *(float *)(in_stack_00000004->field2_0x240c + 0x28);
    local_14 = (CDemonActor_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&pCVar2->motion_controller,2);
    *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
         (float)local_14 * _DAT_02d7b80c + *(float *)(in_stack_00000004->field2_0x240c + 0x28);
    local_14 = (CDemonActor_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&pCVar2->motion_controller,3);
    *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x28) - (float)local_14 * _DAT_02d7b810;
    local_14 = (CDemonActor_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&pCVar2->motion_controller,0x14);
    local_20 = 0.0 - (float)local_14 * _DAT_0065e7e8;
    local_14 = (CDemonActor_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&pCVar2->motion_controller,0x15);
    pCVar11 = g_CGamePtr;
    fVar16 = (float)local_14 * _DAT_0065e7e8;
    *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * (float)12.566370614
    ;
    local_20 = fVar16 + local_20;
    if (pCVar11->letterbox_mode != 0) {
      *(float *)(in_stack_00000004->field2_0x240c + 0x2c) =
           *(float *)(in_stack_00000004->field2_0x240c + 0x2c) * (float)0.33333333333333298;
    }
  }
  local_20 = local_20 * in_stack_00000008;
  iVar12 = *(int *)(in_stack_00000004[2].cloth_data + 0x54cc);
  *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
       *(float *)(in_stack_00000004->field2_0x240c + 0x28) * in_stack_00000008;
  if (iVar12 == 0) {
    if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) {
      if (*(int *)(in_stack_00000004[2].cloth_data + 0x54c4) == 0) {
        iVar12 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
        pCVar2 = &in_stack_00000004->model;
        if (iVar12 != 0) {
          uVar4 = *(uint *)(in_stack_00000004->field11_0x25a0 + 0x10);
          if (uVar4 < 2) {
            if (uVar4 != 1) goto LAB_004d385a;
            fVar16 = 1.4013e-45;
            iVar12 = 1;
          }
          else if (uVar4 < 3) {
            iVar12 = 1;
            fVar16 = 2.8026e-45;
          }
          else {
            if (uVar4 == 3) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,0,1);
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
              goto LAB_004d321d;
            }
            iVar12 = 1;
            fVar16 = 0.0;
          }
          goto LAB_004d3215;
        }
        if (bVar9 && (bVar8 && (bVar7 && (bVar6 && (bVar20 && (bVar19 && (bVar18 && bVar5))))))) {
          pSVar17 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                              (&pCVar2->motion_controller);
          uVar4 = pSVar17->state_index;
          if (uVar4 < 0xe) {
            if ((((uVar4 == 0) || (uVar4 < 2)) || (uVar4 < 3)) || (uVar4 == 3)) goto LAB_004d3af9;
          }
          else if (uVar4 < 0xf) {
            local_2c = core_actor_cpp_castToClassHash_FUN_0040c790
                                 (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c0),
                                  g_CAmmoBoxClassInfo.name_hash);
            if (local_2c != (CDemonActor *)0x0) {
              local_14 = (CDemonActor_vtable *)
                         core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                                   (&pCVar2->motion_controller);
              core_ammobox_cpp_LogConsoleOpenPCTFile_FUN_00411690();
            }
          }
          else if (uVar4 < 0x11) {
            if (uVar4 == 0x10) {
LAB_004d3af9:
              if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
                iVar12 = 0;
                if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 8) != 0) {
                  if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x10) == 0) {
                    iVar12 = 1;
                  }
                  else {
                    iVar12 = 2;
                  }
                }
                if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0xc) != 0) {
                  iVar12 = 3;
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
                pSVar17 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(local_3c);
                if (iVar12 != pSVar17->state_index) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_3c,iVar12,1);
                }
                if ((*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18) != 0) &&
                   (iVar12 = core_gabriela_cpp_PickupSomething_FUN_004d5870(), iVar12 == 0)) {
                  core_gabriela_cpp_FUN_004d6050();
                }
              }
            }
          }
          else if ((uVar4 < 0x12) || ((0x13 < uVar4 && ((uVar4 < 0x15 || (uVar4 == 0x15))))))
          goto LAB_004d3af9;
        }
      }
      else {
        local_50 = iVar12;
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0) {
          (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54c4) + 0x154) + 0x14))
                    ();
          local_19c = local_1b4 + local_1a8;
          local_198 = local_1b0 + local_1a4;
          local_a0.x = local_19c * 0.5f;
          local_a0.y = local_198 * 0.5f;
          local_194 = local_1ac + local_1a0;
          local_a0.z = local_194 * 0.5f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c4),&local_148,
                     &local_a0);
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (&in_stack_00000004->base_actor,&local_b8,&local_148);
          pCVar13 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              (&local_dc,&local_b8);
          local_14 = (CDemonActor_vtable *)
                     core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar13->y);
          local_88 = local_1a8 - local_1b4;
          local_80 = local_1a0 - local_1ac;
          local_ac = local_88 * 0.5f;
          local_a4 = local_80 * 0.5f;
          local_a8 = 0;
          local_84 = local_1a4 - local_1b0;
          local_1c = local_14;
          if ((((local_b8.z - SQRT(local_a4 * local_a4 + local_ac * local_ac) <
                 (float)3) && (local_64 = (double)local_b8.y, 1.0 < local_64)) &&
              (local_64 < 5)) && (ABS((float)local_14) < (float)0.78539816337500001)) {
            local_24 = (CDemonActor_vtable *)(in_stack_00000008 * (float)3.1415926535000001);
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
    }
    else {
      if (in_stack_00000004->grabbed_type == 0) {
        pCVar13 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                            (&in_stack_00000004->base_actor,&local_124,
                             &(in_stack_00000004->grabbed_by->location).position);
        pCVar13 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                            (local_118,pCVar13);
        local_14 = (CDemonActor_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar13->y);
        local_18 = (float)local_14;
        if ((float)local_14 < (float)-1.57079632675) {
          local_18 = (float)local_14 + 3.141593f;
        }
        if ((float)1.57079632675 < local_18) {
          local_18 = local_18 + -3.141593f;
        }
        local_28 = in_stack_00000008 * (float)3.1415926535000001;
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
      pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                          (&in_stack_00000004->model,&local_13c,0);
      fVar16 = (*local_14[1].cylinderGroundCheck)(local_54,(float)in_stack_00000004,pCVar13);
      if (fVar16 == 0.0) {
        in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
      }
      else if (in_stack_00000004->grabbed_by != (CDemonActor *)0x0) {
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0) {
          iVar12 = 1;
          fVar16 = 9.80909e-45;
          goto LAB_004d3215;
        }
        goto LAB_004d321d;
      }
LAB_004d385a:
      iVar12 = 1;
      fVar16 = 0.0;
LAB_004d3215:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,(int)fVar16,iVar12);
    }
  }
  else {
    pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54cc),&local_130,
                         (CVector3f *)(iVar12 + 0x2d4));
    if (pCVar13->y < (in_stack_00000004->base_actor).location.position.y) {
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
      iVar12 = 0;
      (in_stack_00000004->base_actor).location.position.z =
           pCVar13->z + (in_stack_00000004->base_actor).location.position.z;
      fVar16 = *(float *)(in_stack_00000004->cloth_data + 0x344);
      local_14 = (CDemonActor_vtable *)
                 (*((in_stack_00000004->base_actor).vtable)->cylinderGroundCheck)
                           (&in_stack_00000004->base_actor,fVar16,(CVector3f *)0x0);
      *(CDemonActor_vtable **)(in_stack_00000004->field2_0x240c + 8) = local_14;
      *(uint *)(in_stack_00000004->field2_0x240c + 4) =
           (uint)((in_stack_00000004->base_actor).location.position.y <
                 *(float *)(in_stack_00000004->field2_0x240c + 8) + (float)0.01);
      goto LAB_004d3215;
    }
  }
LAB_004d321d:
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54cc) == 0) {
    if (((bVar9 && (bVar8 && (bVar7 && (bVar6 && (bVar20 && (bVar19 && (bVar18 && bVar5))))))) ||
        (pSVar17 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             (&(in_stack_00000004->model).motion_controller),
        pSVar17->state_index == 0xd)) || ((in_stack_00000004->base_actor).field11_0xdc != 0)) {
      local_178 = *(float *)(in_stack_00000004->field2_0x240c + 0x10);
      local_174 = *(float *)(in_stack_00000004->field2_0x240c + 0x14);
      local_170 = *(float *)(in_stack_00000004->field2_0x240c + 0x18);
      pSVar17 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&(in_stack_00000004->model).motion_controller);
      uVar4 = pSVar17->state_index;
      if (uVar4 < 3) {
        if (uVar4 == 0) {
          bVar21 = true;
LAB_004d3cb2:
          if (!bVar21) {
LAB_004d3cb4:
            local_178 = local_178 + (in_stack_00000004->model).accumulated_root_motion.x;
            local_174 = local_174 + (in_stack_00000004->model).accumulated_root_motion.y;
            local_170 = local_170 + (in_stack_00000004->model).accumulated_root_motion.z;
          }
        }
      }
      else if (3 < uVar4) {
        if (uVar4 < 0x11) {
          bVar21 = uVar4 == 0x10;
          goto LAB_004d3cb2;
        }
        if (0x11 < uVar4) {
          if (uVar4 < 0x14) goto LAB_004d3cb4;
          if (0x14 < uVar4) {
            bVar21 = uVar4 == 0x15;
            goto LAB_004d3cb2;
          }
        }
      }
      *(float *)(in_stack_00000004->field2_0x240c + 0x20) =
           *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
           in_stack_00000008 * (float)32;
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
    pCVar13 = &(in_stack_00000004->model).accumulated_root_motion;
    pCVar14 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        (&in_stack_00000004->base_actor,&local_70,pCVar13);
    pCVar1 = &(in_stack_00000004->base_actor).location;
    (pCVar1->position).x = pCVar14->x + (pCVar1->position).x;
    (in_stack_00000004->base_actor).location.position.y =
         pCVar14->y + (in_stack_00000004->base_actor).location.position.y;
    (in_stack_00000004->base_actor).location.position.z =
         pCVar14->z + (in_stack_00000004->base_actor).location.position.z;
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    pCVar13->x = (in_stack_00000004->model).accumulated_root_motion.y;
  }
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  if (((bVar9 && (bVar8 && (bVar7 && (bVar6 && (bVar20 && (bVar19 && (bVar18 && bVar5))))))) &&
      (in_stack_00000004[1].base_actor.location.position.x != 0.0)) &&
     (*(int *)(in_stack_00000004[2].cloth_data + 0x5388) != 0)) {
    bVar3 = in_stack_00000004[2].cloth_data[0x54f4];
    if ((bVar3 & 3) == 0) {
      in_stack_00000004[2].cloth_data[0x54f4] = bVar3 | 2;
    }
    else {
      in_stack_00000004[2].cloth_data[0x54f4] = bVar3 & 0xfc;
    }
  }
  pCVar15 = core_actor_cpp_castToClassHash_FUN_0040c790
                      (in_stack_00000004->carry_hands[0].carry_actor,
                       g_CLightActorClassInfo.name_hash);
  if (pCVar15 != (CDemonActor *)0x0) {
    if (((*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x1c) != 0) &&
        (bVar9 && (bVar8 && (bVar7 && (bVar6 && (bVar20 && (bVar19 && (bVar18 && bVar5)))))))) &&
       (pCVar15[0x1a].orient.bank = (float)(uint)(pCVar15[0x1a].orient.bank == 0.0),
       pCVar15[4].scale.y == 1)) {
      (*((in_stack_00000004->base_actor).vtable)->playSound)
                (&in_stack_00000004->base_actor,"flashlit.wav");
    }
    if (pCVar15[0x1a].orient.bank != 0.0) {
      *(float *)(in_stack_00000004[2].cloth_data + 0x5508) =
           in_stack_00000004[1].base_actor.orient.pitch * (float)3.1415926535000001 *
           (float)2 * in_stack_00000008 +
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
    fVar16 = *(float *)(in_stack_00000004[2].cloth_data + 0x54f8) -
             in_stack_00000008 / _DAT_0065e7ac;
    *(float *)(in_stack_00000004[2].cloth_data + 0x54f8) = fVar16;
    if (fVar16 < 0.0) {
      in_stack_00000004[2].cloth_data[0x54f8] = '\0';
      in_stack_00000004[2].cloth_data[0x54f9] = '\0';
      in_stack_00000004[2].cloth_data[0x54fa] = '\0';
      in_stack_00000004[2].cloth_data[0x54fb] = '\0';
    }
  }
  else {
    fVar16 = in_stack_00000008 / _DAT_0065e7a8 +
             *(float *)(in_stack_00000004[2].cloth_data + 0x54f8);
    *(float *)(in_stack_00000004[2].cloth_data + 0x54f8) = fVar16;
    if (1.0 < fVar16) {
      in_stack_00000004[2].cloth_data[0x54f8] = '\0';
      in_stack_00000004[2].cloth_data[0x54f9] = '\0';
      in_stack_00000004[2].cloth_data[0x54fa] = -0x80;
      in_stack_00000004[2].cloth_data[0x54fb] = '?';
    }
  }
  if ((in_stack_00000004[2].cloth_data[0x54f4] & 2U) == 0) {
    local_30 = *(float *)(in_stack_00000004[2].cloth_data + 0x54fc);
    fVar16 = local_30 - in_stack_00000008 / _DAT_0065e7ac;
    *(float *)(in_stack_00000004[2].cloth_data + 0x54fc) = fVar16;
    if (fVar16 < 0.0) {
      in_stack_00000004[2].cloth_data[0x54fc] = '\0';
      in_stack_00000004[2].cloth_data[0x54fd] = '\0';
      in_stack_00000004[2].cloth_data[0x54fe] = '\0';
      in_stack_00000004[2].cloth_data[0x54ff] = '\0';
    }
    local_38 = _DAT_0065e7b4 + (float)0.14000000000000001;
    if ((local_38 <= local_30) && (*(float *)(in_stack_00000004[2].cloth_data + 0x54fc) < local_38))
    {
      sound_name = "undraw-s.wav @ .7";
      goto LAB_004d33ec;
    }
  }
  else {
    local_44 = *(float *)(in_stack_00000004[2].cloth_data + 0x54fc);
    fVar16 = in_stack_00000008 / _DAT_0065e7a8 + local_44;
    *(float *)(in_stack_00000004[2].cloth_data + 0x54fc) = fVar16;
    if (1.0 < fVar16) {
      in_stack_00000004[2].cloth_data[0x54fc] = '\0';
      in_stack_00000004[2].cloth_data[0x54fd] = '\0';
      in_stack_00000004[2].cloth_data[0x54fe] = -0x80;
      in_stack_00000004[2].cloth_data[0x54ff] = '?';
    }
    local_40 = _DAT_0065e7b4 + (float)-0.14999999999999999;
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
    fVar16 = *(float *)(in_stack_00000004[2].cloth_data + 0x5500) -
             in_stack_00000008 / _DAT_0065e7ac;
    *(float *)(in_stack_00000004[2].cloth_data + 0x5500) = fVar16;
    if (fVar16 < 0.0) {
      in_stack_00000004[2].cloth_data[0x5500] = '\0';
      in_stack_00000004[2].cloth_data[0x5501] = '\0';
      in_stack_00000004[2].cloth_data[0x5502] = '\0';
      in_stack_00000004[2].cloth_data[0x5503] = '\0';
    }
  }
  else {
    fVar16 = in_stack_00000008 / _DAT_0065e7a8 +
             *(float *)(in_stack_00000004[2].cloth_data + 0x5500);
    *(float *)(in_stack_00000004[2].cloth_data + 0x5500) = fVar16;
    if (1.0 < fVar16) {
      in_stack_00000004[2].cloth_data[0x5500] = '\0';
      in_stack_00000004[2].cloth_data[0x5501] = '\0';
      in_stack_00000004[2].cloth_data[0x5502] = -0x80;
      in_stack_00000004[2].cloth_data[0x5503] = '?';
    }
  }
  if (bVar9 && (bVar8 && (bVar7 && (bVar6 && (bVar20 && (bVar19 && (bVar18 && bVar5))))))) {
    if (((pCVar15 == (CDemonActor *)0x0) || (pCVar15[0x1a].orient.bank == 0.0)) ||
       (pSVar17 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                            (&(in_stack_00000004->model).motion_controller),
       pSVar17->state_index == 5)) {
      fVar16 = in_stack_00000008 / _DAT_0065e7ac;
      goto LAB_004d344b;
    }
    fVar16 = in_stack_00000008 / _DAT_0065e7a8 +
             *(float *)(in_stack_00000004[2].cloth_data + 0x5504);
  }
  else {
    fVar16 = (in_stack_00000008 / _DAT_0065e7ac) * (float)3;
LAB_004d344b:
    fVar16 = *(float *)(in_stack_00000004[2].cloth_data + 0x5504) - fVar16;
  }
  *(float *)(in_stack_00000004[2].cloth_data + 0x5504) = fVar16;
  if (*(float *)(in_stack_00000004[2].cloth_data + 0x5504) < 0.0) {
    in_stack_00000004[2].cloth_data[0x5504] = '\0';
    in_stack_00000004[2].cloth_data[0x5505] = '\0';
    in_stack_00000004[2].cloth_data[0x5506] = '\0';
    in_stack_00000004[2].cloth_data[0x5507] = '\0';
  }
  if ((float)0.90000000000000002 < *(float *)(in_stack_00000004[2].cloth_data + 0x5504)) {
    in_stack_00000004[2].cloth_data[0x5504] = 'f';
    in_stack_00000004[2].cloth_data[0x5505] = 'f';
    in_stack_00000004[2].cloth_data[0x5506] = 'f';
    in_stack_00000004[2].cloth_data[0x5507] = '?';
  }
  core_gabriela_cpp_FUN_004d6540();
  fVar16 = *(float *)(in_stack_00000004[2].cloth_data + 0x552c) - in_stack_00000008 / _DAT_0065e7bc;
  *(float *)(in_stack_00000004[2].cloth_data + 0x552c) = fVar16;
  if (((fVar16 <= 0.0) &&
      (in_stack_00000004[2].cloth_data[0x552c] = '\0',
      in_stack_00000004[2].cloth_data[0x552d] = '\0', in_stack_00000004[2].cloth_data[0x552e] = '\0'
      , in_stack_00000004[2].cloth_data[0x552f] = '\0',
      bVar9 && (bVar8 && (bVar7 && (bVar6 && (bVar20 && (bVar19 && (bVar18 && bVar5)))))))) &&
     ((*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0 &&
      (*(int *)(in_stack_00000004[2].cloth_data + 0x550c) == 0)))) {
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) {
      if ((*(float *)(in_stack_00000004[2].cloth_data + 0x54fc) <= 0.0) &&
         (iVar12 = core_hero_cpp_FUN_004f2af0(), iVar12 == 0)) {
        iVar12 = core_hero_cpp_FUN_004f2d70();
        switch(iVar12) {
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
        if ((iVar12 == 0) && (iVar12 = core_hero_cpp_FUN_004f2c40(), iVar12 == 0)) {
          iVar12 = core_hero_cpp_FUN_004f3120();
          if (iVar12 == 0) {
            iVar12 = core_hero_cpp_FUN_004f2f50();
            if (iVar12 == 0) {
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
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(in_stack_00000004->model).motion_controller,0xd);
  if ((float)local_14 <= 0.0) {
    core_hero_cpp_FUN_004f3350();
  }
  else {
    local_14 = (CDemonActor_vtable *)
               core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                         (&(in_stack_00000004->model).motion_controller);
    if ((1.0 < (float)local_14) &&
       (pCVar15 = core_actor_cpp_castToClassHash_FUN_0040c790
                            (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c4),
                             g_CBoxActorClassInfo.name_hash), pCVar15 != (CDemonActor *)0x0)) {
      core_gabriela_cpp_FUN_004d4cf0();
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&in_stack_00000004->base_actor,&local_16c,&local_7c);
      local_190.x = local_16c.x - local_184.x;
      local_190.z = local_16c.z - local_184.z;
      local_190.y = 0.0;
      pCVar13 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                          (&in_stack_00000004->base_actor,&local_154,&local_190);
      if (0.0 < pCVar13->z) {
        core_boxactor_cpp_FUN_00422390();
      }
    }
  }
  core_gabriela_cpp_FUN_004d5550();
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x550c) == 3) {
    pCVar15 = core_actor_cpp_castToClassHash_FUN_0040c790
                        (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x5388),
                         g_CDynamiteClassInfo.name_hash);
    if (pCVar15 != (CDemonActor *)0x0) {
      if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) == 0) {
        in_stack_00000004[2].cloth_data[0x550c] = '\x02';
        in_stack_00000004[2].cloth_data[0x550d] = '\0';
        in_stack_00000004[2].cloth_data[0x550e] = '\0';
        in_stack_00000004[2].cloth_data[0x550f] = '\0';
      }
      else {
        fVar16 = in_stack_00000008 * (float)25 +
                 in_stack_00000004[8].model.bone_transform.bone_rotations[0x15].z;
        in_stack_00000004[8].model.bone_transform.bone_rotations[0x15].z = fVar16;
        if (DAT_0065e7f0 < fVar16) {
          pCVar10 = in_stack_00000004 + 1;
          (pCVar10->base_actor).actor_name[0x14] = '\0';
          (pCVar10->base_actor).actor_name[0x15] = '\0';
          (pCVar10->base_actor).actor_name[0x16] = '\0';
          (pCVar10->base_actor).actor_name[0x17] = '\0';
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
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_1dc,&local_e8);
      local_d0.z = in_stack_00000004[8].model.bone_transform.bone_rotations[0x15].z;
      local_d0.x = 0.0;
      local_d0.y = 0.0;
      pCVar13 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                          (&local_1dc,&local_100,&local_d0);
      pCVar13 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                          (&in_stack_00000004->base_actor,&local_94,pCVar13);
      if ((CVector3f *)(pCVar15[4].actor_name + 0x1c) != pCVar13) {
        ((CVector3f *)(pCVar15[4].actor_name + 0x1c))->x = pCVar13->x;
        pCVar15[4].location.position.x = pCVar13->y;
        pCVar15[4].location.position.y = pCVar13->z;
      }
      goto LAB_004d4145;
    }
    in_stack_00000004[2].cloth_data[0x550c] = '\x02';
    in_stack_00000004[2].cloth_data[0x550d] = '\0';
    in_stack_00000004[2].cloth_data[0x550e] = '\0';
    in_stack_00000004[2].cloth_data[0x550f] = '\0';
LAB_004d363a:
    in_stack_00000004[8].model.bone_transform.bone_rotations[0x15].z = _DAT_0065e7ec;
    iVar12 = core_gabriela_cpp_FUN_004d5f70();
    if (iVar12 == 0) goto LAB_004d4152;
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
    pCVar10 = in_stack_00000004 + 1;
    (pCVar10->base_actor).actor_name[0x14] = '\0';
    (pCVar10->base_actor).actor_name[0x15] = '\0';
    (pCVar10->base_actor).actor_name[0x16] = '\0';
    (pCVar10->base_actor).actor_name[0x17] = '\0';
  }
LAB_004d368e:
  iVar12 = (*(in_stack_00000004->base_actor).vtable[1].hasCollision)
                     (&in_stack_00000004->base_actor,in_stack_fffffdaa);
  if (iVar12 != 2) {
    core_cloth_cpp_FUN_0043ab80();
  }
  (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5388) + 0x154) + 4))();
  if (*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5388) + 0xfc) == 0) {
    return;
  }
  (in_stack_00000004->base_actor).is_transparent = 1;
  return;
}
