// Name: core_icepick.cpp_FUN_004f80b0
// Address: 004f80b0
// Address Range: [[004f80b0, 004f8807]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f80b0()

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004f86be) */
/* Signature: byte actors_hero_icepick.cpp_FUN_004f80b0(uint param_1, uint
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
  uint uVar10;
  SMotion *pSVar11;
  byte bVar12;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  int aiStackY_1870 [1522];
  SCollisionInfo *in_stack_ffffff68;
  int in_stack_ffffff6c;
  CDeformableModel_MotionBlendWeightFunc *in_stack_ffffff70;
  int iStack_84;
  byte auStack_78 [16];
  CVector3f local_68;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  int local_24;
  CDeformableModelInstance *pCStack_20;
  SCollisionInfo *local_1c;
  SCollisionInfo *local_18;
  CDeformableModelInstance *local_14;
  
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
  fVar2 = (float)12.566370614;
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
                local_24 = core_hero_cpp_FUN_004f2d70();
                if ((local_24 != 0) && (local_24 != 1)) {
                  core_hero_cpp_FUN_004f2ed0();
                }
                if ((local_24 != 0) || (iVar9 = core_hero_cpp_FUN_004f2c40(), iVar9 != 0))
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
                  switch(*(uint *)(in_stack_00000004[2].cloth_data + 0x54f8)) {
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
                *(uint *)(in_stack_00000004[2].cloth_data + 0x54fc) = uVar10;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->model).motion_controller,iVar4,1);
            }
            if ((*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18) != 0) &&
               (iVar4 = core_icepick_cpp_FUN_004f8970(), iVar4 == 0)) {
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
    local_38 = (in_stack_00000004->model).accumulated_root_motion.x;
    local_34 = (in_stack_00000004->model).accumulated_root_motion.y;
    local_30 = (in_stack_00000004->model).accumulated_root_motion.z;
    *(float *)(in_stack_00000004->field2_0x240c + 0x20) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
         in_stack_00000008 * (float)32;
    local_50 = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
    local_4c = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
    local_48 = in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x24);
    local_5c = local_50 + *(float *)(in_stack_00000004->field2_0x240c + 0x10);
    local_58 = local_4c + *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    local_38 = local_38 + local_5c;
    local_54 = local_48 + *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    local_34 = local_34 + local_58;
    local_30 = local_30 + local_54;
    core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
    goto LAB_004f82f8;
  }
  if (in_stack_00000004->grabbed_type == 0) {
    pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       (&in_stack_00000004->base_actor,&local_68,
                        &(in_stack_00000004->grabbed_by->location).position);
    pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_44,pCVar5);
    local_14 = (CDeformableModelInstance *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar5->y)
    ;
    in_stack_ffffff68 = (SCollisionInfo *)local_14;
    if ((float)local_14 < (float)-1.57079632675) {
      in_stack_ffffff68 = (SCollisionInfo *)((float)local_14 + 3.141593f);
    }
    if ((float)1.57079632675 < (float)in_stack_ffffff68) {
      in_stack_ffffff68 = (SCollisionInfo *)((float)in_stack_ffffff68 + -3.141593f);
    }
    local_18 = (SCollisionInfo *)(in_stack_00000008 * (float)3.1415926535000001);
    local_1c = (SCollisionInfo *)-(float)local_18;
    if ((float)in_stack_ffffff68 < (float)local_1c) {
      in_stack_ffffff68 = local_1c;
    }
    if ((float)local_18 < (float)in_stack_ffffff68) {
      in_stack_ffffff68 = local_18;
    }
    (in_stack_00000004->base_actor).orient.bank =
         (in_stack_00000004->base_actor).orient.bank + (float)in_stack_ffffff68;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&in_stack_00000004->base_actor);
  }
  pCVar7 = in_stack_00000004->grabbed_by;
  local_14 = (CDeformableModelInstance *)pCVar7->vtable;
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&in_stack_00000004->model,(CVector3f *)(auStack_78 + 4),0);
  fVar6 = (*(code *)local_14->transformed_vertices[0x11].x)(pCVar7,(float)in_stack_00000004,pCVar5);
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
  pCStack_20 = &in_stack_00000004->model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCStack_20);
  iVar4 = (*(in_stack_00000004->base_actor).vtable[1].hasCollision)
                    (&in_stack_00000004->base_actor,in_stack_ffffff68);
  if (iVar4 == 0) {
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CQuaternion4f *)(in_stack_00000004[2].cloth_data + 0x5504),
               *(CVector3f **)(in_stack_00000004[2].cloth_data + 0x5510));
    iStack_84 = in_stack_ffffff6c;
    *(uint *)(&stack0xffffff80 + (uint)bVar12 * -8) =
         *(uint *)(auStack_78 + (uint)bVar12 * -8 + -0x18);
    *(uint *)(&stack0xffffff84 + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
         *(uint *)(&stack0xffffff74 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
    *(uint *)
     ((int)(&stack0xffffff84 + (uint)bVar12 * -8 + (uint)bVar12 * -8) + ((uint)bVar12 * -2 + 1) * 4)
         = *(uint *)
            ((int)(&stack0xffffff74 + (uint)bVar12 * -8 + (uint)bVar12 * -8) +
            ((uint)bVar12 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (local_14,(CQuaternion4f *)auStack_78,(float)in_stack_ffffff68,in_stack_ffffff6c,
               in_stack_ffffff70);
  }
  core_icepick_cpp_FUN_004f8810();
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
  return;
}
