// Name: core_gabriela.cpp_CGabriella_process_FUN_004d2ea0
// Address: 004d2ea0
// Address Range: [[004d2ea0, 004d418f]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_process_FUN_004d2ea0(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl
core_gabriela_cpp_CGabriella_process_FUN_004d2ea0(CGabriella *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  CWeapon *this_ptr_00;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  CHero *pCVar12;
  CGame *pCVar13;
  int iVar14;
  CVector3f *pCVar15;
  CVector3f *pCVar16;
  CDemonActor *pCVar17;
  CBoxActor *this_ptr_01;
  SMotion *pSVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  float fVar23;
  char *sound_name;
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
  CCharacter_full_vtable *local_4c;
  float local_48;
  float local_44;
  float local_40;
  CMotionController *local_3c;
  float local_38;
  float local_34;
  float local_30;
  CAmmoBox *local_2c;
  float local_28;
  CCharacter_full_vtable *local_24;
  float local_20;
  CCharacter_full_vtable *local_1c;
  float local_18;
  CCharacter_full_vtable *local_14;
  
  iVar14 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar14 == 0) {
    return;
  }
  if ((this_ptr->base).control_type == 2) {
    core_gabriela_cpp_FUN_004d4190();
  }
  fVar23 = (float)(this_ptr->base).unk1 - delta_time;
  (this_ptr->base).unk1 = (int)fVar23;
  if (fVar23 < 0.0) {
    (this_ptr->base).unk1 = 0;
  }
  pCVar15 = (CVector3f *)core_gabriela_cpp_FUN_004d4cf0();
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&local_184,pCVar15);
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_gabriela_cpp_CGabriella_FUN_004d4890(this_ptr);
  bVar7 = 0.0 < (float)(this_ptr->base).base.hit_points;
  bVar19 = (this_ptr->base).base.grabbed_by == (CDemonActor *)0x0;
  bVar20 = *(int *)((this_ptr->base).unk4 + 8) == 0;
  bVar21 = *(int *)((this_ptr->base).unk4 + 0x10) == 0;
  local_14 = (CCharacter_full_vtable *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,8);
  bVar8 = (float)local_14 <= 0.0;
  local_14 = (CCharacter_full_vtable *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,0xb);
  bVar9 = (float)local_14 <= 0.0;
  local_14 = (CCharacter_full_vtable *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,0xc);
  bVar10 = (float)local_14 <= 0.0;
  local_14 = (CCharacter_full_vtable *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,0x12);
  bVar11 = (float)local_14 <= 0.0;
  pCVar12 = &this_ptr->base;
  (pCVar12->base).unk1[0x2c] = '\0';
  (pCVar12->base).unk1[0x2d] = '\0';
  (pCVar12->base).unk1[0x2e] = '\0';
  (pCVar12->base).unk1[0x2f] = '\0';
  iVar14 = *(int *)((this_ptr->base).base.unk1 + 4);
  pCVar12 = &this_ptr->base;
  (pCVar12->base).unk1[0x28] = '\0';
  (pCVar12->base).unk1[0x29] = '\0';
  (pCVar12->base).unk1[0x2a] = '\0';
  (pCVar12->base).unk1[0x2b] = '\0';
  local_20 = 0.0;
  if (iVar14 != 0) {
    pCVar2 = &(this_ptr->base).base.model;
    local_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&pCVar2->motion_controller,1);
    *(float *)((this_ptr->base).base.unk1 + 0x28) =
         (float)local_14 * FLOAT_02d7b808 + *(float *)((this_ptr->base).base.unk1 + 0x28);
    local_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&pCVar2->motion_controller,2);
    *(float *)((this_ptr->base).base.unk1 + 0x28) =
         (float)local_14 * FLOAT_02d7b80c + *(float *)((this_ptr->base).base.unk1 + 0x28);
    local_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&pCVar2->motion_controller,3);
    *(float *)((this_ptr->base).base.unk1 + 0x28) =
         *(float *)((this_ptr->base).base.unk1 + 0x28) - (float)local_14 * FLOAT_02d7b810;
    local_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&pCVar2->motion_controller,0x14);
    local_20 = 0.0 - (float)local_14 * 2.0f;
    local_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&pCVar2->motion_controller,0x15);
    pCVar13 = g_CGamePtr;
    fVar23 = (float)local_14 * 2.0f;
    *(float *)((this_ptr->base).base.unk1 + 0x2c) = delta_time * (float)12.566370614;
    local_20 = fVar23 + local_20;
    if (pCVar13->letterbox_mode != 0) {
      *(float *)((this_ptr->base).base.unk1 + 0x2c) =
           *(float *)((this_ptr->base).base.unk1 + 0x2c) * (float)0.33333333333333298;
    }
  }
  local_20 = local_20 * delta_time;
  iVar14 = *(int *)((this_ptr->base).unk4 + 0x10);
  *(float *)((this_ptr->base).base.unk1 + 0x28) =
       *(float *)((this_ptr->base).base.unk1 + 0x28) * delta_time;
  if (iVar14 == 0) {
    pCVar17 = (this_ptr->base).base.grabbed_by;
    if (pCVar17 == (CDemonActor *)0x0) {
      if (*(int *)((this_ptr->base).unk4 + 8) == 0) {
        iVar14 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
        pCVar2 = &(this_ptr->base).base.model;
        if (iVar14 != 0) {
          uVar6 = *(uint *)((this_ptr->base).base.unk2 + 0x10);
          if (uVar6 < 2) {
            if (uVar6 != 1) goto LAB_004d385a;
            fVar23 = 1.4013e-45;
            iVar14 = 1;
          }
          else if (uVar6 < 3) {
            iVar14 = 1;
            fVar23 = 2.8026e-45;
          }
          else {
            if (uVar6 == 3) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,0,1);
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
              goto LAB_004d321d;
            }
            iVar14 = 1;
            fVar23 = 0.0;
          }
          goto LAB_004d3215;
        }
        if (bVar11 && (bVar10 && (bVar9 && (bVar8 && (bVar21 && (bVar20 && (bVar19 && bVar7))))))) {
          pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                              (&pCVar2->motion_controller);
          uVar6 = pSVar18->state_index;
          if (uVar6 < 0xe) {
            if ((((uVar6 == 0) || (uVar6 < 2)) || (uVar6 < 3)) || (uVar6 == 3)) goto LAB_004d3af9;
          }
          else if (uVar6 < 0xf) {
            local_2c = (CAmmoBox *)
                       core_actor_cpp_castToClassHash_FUN_0040c790
                                 (*(CDemonActor **)((this_ptr->base).unk4 + 4),
                                  g_CAmmoBoxClassInfo.name_hash);
            if (local_2c != (CAmmoBox *)0x0) {
              local_14 = (CCharacter_full_vtable *)
                         core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                                   (&pCVar2->motion_controller);
              core_ammobox_cpp_CAmmoBox_FUN_00411690(local_2c);
            }
          }
          else if (uVar6 < 0x11) {
            if (uVar6 == 0x10) {
LAB_004d3af9:
              if (*(int *)((this_ptr->base).base.unk1 + 4) != 0) {
                iVar14 = 0;
                if (*(int *)(this_ptr->base).unk2 != 0) {
                  if (*(int *)((this_ptr->base).unk2 + 8) == 0) {
                    iVar14 = 1;
                  }
                  else {
                    iVar14 = 2;
                  }
                }
                if (*(int *)((this_ptr->base).unk2 + 4) != 0) {
                  iVar14 = 3;
                }
                fVar23 = *(float *)((this_ptr->base).base.unk1 + 0x28);
                fVar3 = *(float *)((this_ptr->base).base.unk1 + 0x10);
                local_3c = &(this_ptr->base).base.model.motion_controller;
                fVar4 = *(float *)((this_ptr->base).base.unk1 + 0x18);
                *(float *)((this_ptr->base).base.unk1 + 0xc) =
                     *(float *)((this_ptr->base).unk2 + 0x24) *
                     *(float *)((this_ptr->base).base.unk1 + 0x2c);
                *(float *)((this_ptr->base).base.unk1 + 0x18) = fVar23 + fVar4;
                *(float *)((this_ptr->base).base.unk1 + 0x10) = fVar3 + local_20;
                pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(local_3c);
                if (iVar14 != pSVar18->state_index) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_3c,iVar14,1);
                }
                if ((*(int *)((this_ptr->base).unk2 + 0x10) != 0) &&
                   (iVar14 = core_gabriela_cpp_PickupSomething_FUN_004d5870(), iVar14 == 0)) {
                  core_gabriela_cpp_FUN_004d6050();
                }
              }
            }
          }
          else if ((uVar6 < 0x12) || ((0x13 < uVar6 && ((uVar6 < 0x15 || (uVar6 == 0x15))))))
          goto LAB_004d3af9;
        }
      }
      else {
        local_50 = iVar14;
        if (*(int *)((this_ptr->base).unk2 + 0xc) != 0) {
          (**(code **)(*(int *)(*(int *)((this_ptr->base).unk4 + 8) + 0x154) + 0x14))();
          local_a0.x = (local_1b4 + local_1a8) * 0.5f;
          local_a0.y = (local_1b0 + local_1a4) * 0.5f;
          local_a0.z = (local_1ac + local_1a0) * 0.5f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    (*(CDemonActor **)((this_ptr->base).unk4 + 8),&local_148,&local_a0);
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    ((CDemonActor *)this_ptr,&local_b8,&local_148);
          pCVar15 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              (&local_dc,&local_b8);
          local_14 = (CCharacter_full_vtable *)
                     core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar15->y);
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
            local_24 = (CCharacter_full_vtable *)(delta_time * (float)3.1415926535000001);
            if ((float)local_14 < -(float)local_24) {
              local_1c = (CCharacter_full_vtable *)-(float)local_24;
            }
            if ((float)local_24 < (float)local_1c) {
              local_1c = local_24;
            }
            (this_ptr->base).base.base.orient.bank =
                 (this_ptr->base).base.base.orient.bank + (float)local_1c;
            goto LAB_004d321d;
          }
        }
        if (local_50 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
          core_hero_cpp_CHero_FUN_004f3350(&this_ptr->base);
        }
      }
    }
    else {
      if ((this_ptr->base).base.grabbed_type == 0) {
        pCVar15 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                            ((CDemonActor *)this_ptr,&local_124,&(pCVar17->location).position);
        pCVar15 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                            (local_118,pCVar15);
        local_14 = (CCharacter_full_vtable *)
                   core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar15->y);
        local_18 = (float)local_14;
        if ((float)local_14 < (float)-1.57079632675) {
          local_18 = (float)local_14 + 3.141593f;
        }
        if ((float)1.57079632675 < local_18) {
          local_18 = local_18 + -3.141593f;
        }
        local_28 = delta_time * (float)3.1415926535000001;
        local_34 = -local_28;
        if (local_18 < local_34) {
          local_18 = local_34;
        }
        if (local_28 < local_18) {
          local_18 = local_28;
        }
        (this_ptr->base).base.base.orient.bank = (this_ptr->base).base.base.orient.bank + local_18;
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
      }
      local_54 = (this_ptr->base).base.grabbed_by;
      local_14 = (local_54->vtable)._uc;
      core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                (&(this_ptr->base).base.model,&local_13c,0);
      iVar14 = (*(local_14->_uc).cfunc15)();
      if (iVar14 == 0) {
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
      }
      else if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
        if (*(int *)((this_ptr->base).unk2 + 0xc) != 0) {
          iVar14 = 1;
          fVar23 = 9.80909e-45;
          goto LAB_004d3215;
        }
        goto LAB_004d321d;
      }
LAB_004d385a:
      iVar14 = 1;
      fVar23 = 0.0;
LAB_004d3215:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,(int)fVar23,iVar14);
    }
  }
  else {
    pCVar15 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        (*(CDemonActor **)((this_ptr->base).unk4 + 0x10),&local_130,
                         (CVector3f *)(iVar14 + 0x2d4));
    if (pCVar15->y < (this_ptr->base).base.base.location.position.y) {
      (this_ptr->base).unk4[0x10] = '\0';
      (this_ptr->base).unk4[0x11] = '\0';
      (this_ptr->base).unk4[0x12] = '\0';
      (this_ptr->base).unk4[0x13] = '\0';
      local_f4.x = 0.0;
      local_f4.y = 0.5;
      local_f4.z = 4.0;
      pCVar15 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                          ((CDemonActor *)this_ptr,&local_c4,&local_f4);
      pCVar1 = &(this_ptr->base).base.base.location;
      (pCVar1->position).x = pCVar15->x + (pCVar1->position).x;
      (this_ptr->base).base.base.location.position.y =
           pCVar15->y + (this_ptr->base).base.base.location.position.y;
      iVar14 = 0;
      (this_ptr->base).base.base.location.position.z =
           pCVar15->z + (this_ptr->base).base.base.location.position.z;
      fVar23 = *(float *)((this_ptr->base).base.cloth_data + 0x344);
      local_14 = (CCharacter_full_vtable *)
                 (*((this_ptr->base).base.base.vtable._ub)->cylinderGroundCheck)
                           ((CDemonActor *)this_ptr,fVar23,(CVector3f *)0x0);
      *(CCharacter_full_vtable **)((this_ptr->base).base.unk1 + 8) = local_14;
      *(uint *)((this_ptr->base).base.unk1 + 4) =
           (uint)((this_ptr->base).base.base.location.position.y <
                 *(float *)((this_ptr->base).base.unk1 + 8) + (float)0.01);
      goto LAB_004d3215;
    }
  }
LAB_004d321d:
  if (*(int *)((this_ptr->base).unk4 + 0x10) == 0) {
    if (((bVar11 && (bVar10 && (bVar9 && (bVar8 && (bVar21 && (bVar20 && (bVar19 && bVar7))))))) ||
        (pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             (&(this_ptr->base).base.model.motion_controller),
        pSVar18->state_index == 0xd)) ||
       ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
      local_178 = *(float *)((this_ptr->base).base.unk1 + 0x10);
      local_174 = *(float *)((this_ptr->base).base.unk1 + 0x14);
      local_170 = *(float *)((this_ptr->base).base.unk1 + 0x18);
      pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&(this_ptr->base).base.model.motion_controller);
      uVar6 = pSVar18->state_index;
      if (uVar6 < 3) {
        if (uVar6 == 0) {
          bVar22 = true;
LAB_004d3cb2:
          if (!bVar22) {
LAB_004d3cb4:
            local_178 = local_178 + (this_ptr->base).base.model.accumulated_root_motion.x;
            local_174 = local_174 + (this_ptr->base).base.model.accumulated_root_motion.y;
            local_170 = local_170 + (this_ptr->base).base.model.accumulated_root_motion.z;
          }
        }
      }
      else if (3 < uVar6) {
        if (uVar6 < 0x11) {
          bVar22 = uVar6 == 0x10;
          goto LAB_004d3cb2;
        }
        if (0x11 < uVar6) {
          if (uVar6 < 0x14) goto LAB_004d3cb4;
          if (0x14 < uVar6) {
            bVar22 = uVar6 == 0x15;
            goto LAB_004d3cb2;
          }
        }
      }
      *(float *)((this_ptr->base).base.unk1 + 0x20) =
           *(float *)((this_ptr->base).base.unk1 + 0x20) - delta_time * (float)32;
      local_160 = *(float *)((this_ptr->base).base.unk1 + 0x1c) * delta_time;
      local_15c = *(float *)((this_ptr->base).base.unk1 + 0x20) * delta_time;
      local_158 = delta_time * *(float *)((this_ptr->base).base.unk1 + 0x24);
      local_178 = local_178 + local_160;
      local_174 = local_174 + local_15c;
      local_170 = local_170 + local_158;
      core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
    }
  }
  else {
    pCVar15 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar16 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        ((CDemonActor *)this_ptr,&local_70,pCVar15);
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = pCVar16->x + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         pCVar16->y + (this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.z =
         pCVar16->z + (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar15->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  if (((bVar11 && (bVar10 && (bVar9 && (bVar8 && (bVar21 && (bVar20 && (bVar19 && bVar7))))))) &&
      (*(int *)((this_ptr->base).unk2 + 0x18) != 0)) &&
     ((this_ptr->base).inventory.selected_weapon != (CWeapon *)0x0)) {
    bVar5 = this_ptr->unk[0];
    if ((bVar5 & 3) == 0) {
      this_ptr->unk[0] = bVar5 | 2;
    }
    else {
      this_ptr->unk[0] = bVar5 & 0xfc;
    }
  }
  pCVar17 = core_actor_cpp_castToClassHash_FUN_0040c790
                      ((this_ptr->base).base.carry_hands[0].carry_actor,
                       g_CLightActorClassInfo.name_hash);
  if (pCVar17 != (CDemonActor *)0x0) {
    if (((*(int *)((this_ptr->base).unk2 + 0x14) != 0) &&
        (bVar11 && (bVar10 && (bVar9 && (bVar8 && (bVar21 && (bVar20 && (bVar19 && bVar7)))))))) &&
       (pCVar17[0x1a].orient.bank = (float)(uint)(pCVar17[0x1a].orient.bank == 0.0),
       pCVar17[4].scale.y == 1)) {
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"flashlit.wav");
    }
    if (pCVar17[0x1a].orient.bank != 0.0) {
      *(float *)(this_ptr->unk + 0x14) =
           *(float *)((this_ptr->base).unk2 + 0x28) * (float)3.1415926535000001 *
           (float)2 * delta_time + *(float *)(this_ptr->unk + 0x14);
      local_48 = (float)core_gabriela_cpp_FUN_004d4c90();
      local_14 = (CCharacter_full_vtable *)local_48;
      local_4c = (CCharacter_full_vtable *)core_gabriela_cpp_FUN_004d4ce0();
      if (*(float *)(this_ptr->unk + 0x14) < local_48) {
        *(float *)(this_ptr->unk + 0x14) = local_48;
      }
      local_14 = local_4c;
      if ((float)local_4c < *(float *)(this_ptr->unk + 0x14)) {
        *(CCharacter_full_vtable **)(this_ptr->unk + 0x14) = local_4c;
      }
    }
  }
  if ((this_ptr->unk[0] & 1U) == 0) {
    fVar23 = *(float *)(this_ptr->unk + 4) - delta_time / 1.2f;
    *(float *)(this_ptr->unk + 4) = fVar23;
    if (fVar23 < 0.0) {
      this_ptr->unk[4] = '\0';
      this_ptr->unk[5] = '\0';
      this_ptr->unk[6] = '\0';
      this_ptr->unk[7] = '\0';
    }
  }
  else {
    fVar23 = delta_time / 1.1f + *(float *)(this_ptr->unk + 4);
    *(float *)(this_ptr->unk + 4) = fVar23;
    if (1.0 < fVar23) {
      this_ptr->unk[4] = '\0';
      this_ptr->unk[5] = '\0';
      this_ptr->unk[6] = -0x80;
      this_ptr->unk[7] = '?';
    }
  }
  if ((this_ptr->unk[0] & 2U) == 0) {
    local_30 = *(float *)(this_ptr->unk + 8);
    fVar23 = local_30 - delta_time / 1.2f;
    *(float *)(this_ptr->unk + 8) = fVar23;
    if (fVar23 < 0.0) {
      this_ptr->unk[8] = '\0';
      this_ptr->unk[9] = '\0';
      this_ptr->unk[10] = '\0';
      this_ptr->unk[0xb] = '\0';
    }
    local_38 = 0.64f + (float)0.14000000000000001;
    if ((local_38 <= local_30) && (*(float *)(this_ptr->unk + 8) < local_38)) {
      sound_name = "undraw-s.wav @ .7";
      goto LAB_004d33ec;
    }
  }
  else {
    local_44 = *(float *)(this_ptr->unk + 8);
    fVar23 = delta_time / 1.1f + local_44;
    *(float *)(this_ptr->unk + 8) = fVar23;
    if (1.0 < fVar23) {
      this_ptr->unk[8] = '\0';
      this_ptr->unk[9] = '\0';
      this_ptr->unk[10] = -0x80;
      this_ptr->unk[0xb] = '?';
    }
    local_40 = 0.64f + (float)-0.14999999999999999;
    if ((local_44 <= local_40) && (local_40 < *(float *)(this_ptr->unk + 8))) {
      core_game_cpp_CGame_FUN_004e0bb0(g_CGamePtr);
      sound_name = "draw-f.wav @ 1.5";
LAB_004d33ec:
      (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
    }
  }
  if ((this_ptr->unk[0] & 3U) == 0) {
    fVar23 = *(float *)(this_ptr->unk + 0xc) - delta_time / 1.2f;
    *(float *)(this_ptr->unk + 0xc) = fVar23;
    if (fVar23 < 0.0) {
      this_ptr->unk[0xc] = '\0';
      this_ptr->unk[0xd] = '\0';
      this_ptr->unk[0xe] = '\0';
      this_ptr->unk[0xf] = '\0';
    }
  }
  else {
    fVar23 = delta_time / 1.1f + *(float *)(this_ptr->unk + 0xc);
    *(float *)(this_ptr->unk + 0xc) = fVar23;
    if (1.0 < fVar23) {
      this_ptr->unk[0xc] = '\0';
      this_ptr->unk[0xd] = '\0';
      this_ptr->unk[0xe] = -0x80;
      this_ptr->unk[0xf] = '?';
    }
  }
  if (bVar11 && (bVar10 && (bVar9 && (bVar8 && (bVar21 && (bVar20 && (bVar19 && bVar7))))))) {
    if (((pCVar17 == (CDemonActor *)0x0) || (pCVar17[0x1a].orient.bank == 0.0)) ||
       (pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                            (&(this_ptr->base).base.model.motion_controller),
       pSVar18->state_index == 5)) {
      fVar23 = delta_time / 1.2f;
      goto LAB_004d344b;
    }
    fVar23 = delta_time / 1.1f + *(float *)(this_ptr->unk + 0x10);
  }
  else {
    fVar23 = (delta_time / 1.2f) * (float)3;
LAB_004d344b:
    fVar23 = *(float *)(this_ptr->unk + 0x10) - fVar23;
  }
  *(float *)(this_ptr->unk + 0x10) = fVar23;
  if (*(float *)(this_ptr->unk + 0x10) < 0.0) {
    this_ptr->unk[0x10] = '\0';
    this_ptr->unk[0x11] = '\0';
    this_ptr->unk[0x12] = '\0';
    this_ptr->unk[0x13] = '\0';
  }
  if ((float)0.90000000000000002 < *(float *)(this_ptr->unk + 0x10)) {
    builtin_strncpy(this_ptr->unk + 0x10,"fff?",4);
  }
  core_gabriela_cpp_FUN_004d6540();
  fVar23 = *(float *)(this_ptr->unk + 0x38) - delta_time / 0.2f;
  *(float *)(this_ptr->unk + 0x38) = fVar23;
  if (((fVar23 <= 0.0) &&
      (this_ptr->unk[0x38] = '\0', this_ptr->unk[0x39] = '\0', this_ptr->unk[0x3a] = '\0',
      this_ptr->unk[0x3b] = '\0',
      bVar11 && (bVar10 && (bVar9 && (bVar8 && (bVar21 && (bVar20 && (bVar19 && bVar7)))))))) &&
     ((*(int *)((this_ptr->base).unk2 + 0xc) != 0 && (*(int *)(this_ptr->unk + 0x18) == 0)))) {
    if (*(int *)this_ptr->unk == 0) {
      if ((*(float *)(this_ptr->unk + 8) <= 0.0) &&
         (iVar14 = core_hero_cpp_CHero_FUN_004f2af0(&this_ptr->base), iVar14 == 0)) {
        iVar14 = core_hero_cpp_CHero_FUN_004f2d70(&this_ptr->base);
        switch(iVar14) {
        case 0:
        case 1:
          break;
        case 2:
        case 3:
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0x12,1);
          break;
        default:
          core_hero_cpp_CHero_FUN_004f2ed0(&this_ptr->base);
        }
        if ((iVar14 == 0) &&
           (iVar14 = core_hero_cpp_CHero_FUN_004f2c40(&this_ptr->base), iVar14 == 0)) {
          iVar14 = core_hero_cpp_CHero_FUN_004f3120(&this_ptr->base);
          if (iVar14 == 0) {
            iVar14 = core_hero_cpp_CHero_FUN_004f2f50(&this_ptr->base);
            if (iVar14 == 0) {
              core_gabriela_cpp_FUN_004d5c60();
            }
            else {
              core_hero_cpp_CHero_FUN_004f30f0(&this_ptr->base);
            }
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0xd,1);
          }
        }
      }
    }
    else {
      this_ptr->unk[0x18] = '\x03';
      this_ptr->unk[0x19] = '\0';
      this_ptr->unk[0x1a] = '\0';
      this_ptr->unk[0x1b] = '\0';
    }
  }
  core_gabriela_cpp_FUN_004d4d80();
  core_gabriela_cpp_FUN_004d6d40();
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  pCVar2 = &(this_ptr->base).base.model;
  local_14 = (CCharacter_full_vtable *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&pCVar2->motion_controller,0xd);
  if ((float)local_14 <= 0.0) {
    core_hero_cpp_CHero_FUN_004f3350(&this_ptr->base);
  }
  else {
    local_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                         (&pCVar2->motion_controller);
    if ((1.0 < (float)local_14) &&
       (this_ptr_01 = (CBoxActor *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (*(CDemonActor **)((this_ptr->base).unk4 + 8),
                                 g_CBoxActorClassInfo.name_hash), this_ptr_01 != (CBoxActor *)0x0))
    {
      core_gabriela_cpp_FUN_004d4cf0();
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_16c,&local_7c);
      local_190.x = local_16c.x - local_184.x;
      local_190.z = local_16c.z - local_184.z;
      local_190.y = 0.0;
      pCVar15 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                          ((CDemonActor *)this_ptr,&local_154,&local_190);
      if (0.0 < pCVar15->z) {
        core_boxactor_cpp_CBoxActor_FUN_00422390(this_ptr_01);
      }
    }
  }
  core_gabriela_cpp_FUN_004d5550();
  if (*(int *)(this_ptr->unk + 0x18) == 3) {
    pCVar17 = core_actor_cpp_castToClassHash_FUN_0040c790
                        (&((this_ptr->base).inventory.selected_weapon)->base,
                         g_CDynamiteClassInfo.name_hash);
    if (pCVar17 != (CDemonActor *)0x0) {
      if (*(int *)((this_ptr->base).unk2 + 0xc) == 0) {
        this_ptr->unk[0x18] = '\x02';
        this_ptr->unk[0x19] = '\0';
        this_ptr->unk[0x1a] = '\0';
        this_ptr->unk[0x1b] = '\0';
      }
      else {
        fVar23 = delta_time * (float)25 + *(float *)(this_ptr->unk + 0x3feb0);
        *(float *)(this_ptr->unk + 0x3feb0) = fVar23;
        if (60.0f < fVar23) {
          (this_ptr->base).unk2[0xc] = '\0';
          (this_ptr->base).unk2[0xd] = '\0';
          (this_ptr->base).unk2[0xe] = '\0';
          (this_ptr->base).unk2[0xf] = '\0';
          this_ptr->unk[0x18] = '\x02';
          this_ptr->unk[0x19] = '\0';
          this_ptr->unk[0x1a] = '\0';
          this_ptr->unk[0x1b] = '\0';
          *(float *)(this_ptr->unk + 0x3feb0) = 60.0f;
        }
      }
      local_e8.x = *(float *)(this_ptr->unk + 0x30);
      local_e8.z = 0.0;
      local_e8.y = 0.0;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                ((CMatrix3x3f *)&stack0xfffffe24,&local_e8);
      local_d0.z = *(float *)(this_ptr->unk + 0x3feb0);
      local_d0.x = 0.0;
      local_d0.y = 0.0;
      pCVar15 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                          ((CMatrix3x3f *)&stack0xfffffe24,&local_100,&local_d0);
      pCVar15 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                          ((CDemonActor *)this_ptr,&local_94,pCVar15);
      if ((CVector3f *)(pCVar17[4].actor_name + 0x1c) != pCVar15) {
        ((CVector3f *)(pCVar17[4].actor_name + 0x1c))->x = pCVar15->x;
        pCVar17[4].location.position.x = pCVar15->y;
        pCVar17[4].location.position.y = pCVar15->z;
      }
      goto LAB_004d4145;
    }
    this_ptr->unk[0x18] = '\x02';
    this_ptr->unk[0x19] = '\0';
    this_ptr->unk[0x1a] = '\0';
    this_ptr->unk[0x1b] = '\0';
LAB_004d363a:
    *(float *)(this_ptr->unk + 0x3feb0) = 10.0f;
    iVar14 = core_gabriela_cpp_FUN_004d5f70();
    if (iVar14 == 0) goto LAB_004d4152;
    this_ptr->unk[0x18] = '\x01';
    this_ptr->unk[0x19] = '\0';
    this_ptr->unk[0x1a] = '\0';
    this_ptr->unk[0x1b] = '\0';
  }
  else {
LAB_004d4145:
    if (*(int *)(this_ptr->unk + 0x18) == 2) goto LAB_004d363a;
LAB_004d4152:
    if (*(int *)(this_ptr->unk + 0x18) != 1) goto LAB_004d368e;
  }
  this_ptr->unk[0x18] = '\0';
  this_ptr->unk[0x19] = '\0';
  this_ptr->unk[0x1a] = '\0';
  this_ptr->unk[0x1b] = '\0';
  core_gabriela_cpp_FUN_004d5fe0();
  if (((this_ptr->base).inventory.selected_weapon)->fire_cooldown == 0.0) {
    (this_ptr->base).unk2[0xc] = '\0';
    (this_ptr->base).unk2[0xd] = '\0';
    (this_ptr->base).unk2[0xe] = '\0';
    (this_ptr->base).unk2[0xf] = '\0';
  }
LAB_004d368e:
  iVar14 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).isDamageable)((CCharacter *)this_ptr);
  if (iVar14 != 2) {
    core_cloth_cpp_FUN_0043ab80();
  }
  this_ptr_00 = (this_ptr->base).inventory.selected_weapon;
  (*((this_ptr_00->base).vtable._ub)->process)(&this_ptr_00->base,delta_time);
  if ((((this_ptr->base).inventory.selected_weapon)->base).is_transparent == 0) {
    return;
  }
  (this_ptr->base).base.base.is_transparent = 1;
  return;
}
