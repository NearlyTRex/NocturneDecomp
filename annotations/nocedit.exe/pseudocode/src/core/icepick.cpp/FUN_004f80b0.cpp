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
  CDemonActor_vtable *pCVar1;
  bool bVar2;
  float fVar3;
  CCharacter *pCVar4;
  int iVar5;
  CVector3f *pCVar6;
  float fVar7;
  CDemonActor *pCVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  SMotion *pSVar12;
  byte bVar13;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float afStackY_1864 [1520];
  CDeformableModelInstance *in_stack_ffffff6c;
  code *blend_callback;
  CQuaternion4f CStack_88;
  byte auStack_78 [20];
  CVector3f CStack_64;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  CVector3f CStack_40;
  float local_34;
  float local_30;
  float fStack_2c;
  int local_24;
  CDeformableModelInstance *local_1c;
  CDeformableModelInstance *local_18;
  CDeformableModelInstance *local_14;
  
  bVar13 = 0;
  iVar5 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar5 == 0) {
    return;
  }
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 4) {
    return;
  }
  if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) == 2) {
    core_icepick_cpp_FUN_004f8c70();
  }
  fVar3 = (float)12.566370614;
  fVar7 = *(float *)in_stack_00000004[1].base_actor.actor_name;
  *(uint *)(in_stack_00000004[2].cloth_data + 0x5514) =
       (uint)(in_stack_00000004->carry_hands[1].carry_actor != (CDemonActor *)0x0);
  fVar7 = fVar7 - in_stack_00000008;
  *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * fVar3;
  *(float *)in_stack_00000004[1].base_actor.actor_name = fVar7;
  if (fVar7 < 0.0) {
    in_stack_00000004[1].base_actor.actor_name[0] = '\0';
    in_stack_00000004[1].base_actor.actor_name[1] = '\0';
    in_stack_00000004[1].base_actor.actor_name[2] = '\0';
    in_stack_00000004[1].base_actor.actor_name[3] = '\0';
  }
  pCVar6 = &(in_stack_00000004->model).accumulated_root_motion;
  (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
  (in_stack_00000004->model).accumulated_root_motion.y =
       (in_stack_00000004->model).accumulated_root_motion.z;
  pCVar6->x = (in_stack_00000004->model).accumulated_root_motion.y;
  core_icepick_cpp_FUN_004f93a0();
  *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
       (in_stack_00000004->model).accumulated_root_motion.z;
  iVar5 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
  if (iVar5 == 0) {
    pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&(in_stack_00000004->model).motion_controller);
    uVar9 = pSVar12->state_index;
    if (uVar9 < 9) {
      if ((((uVar9 == 0) || (uVar9 < 2)) || (uVar9 < 3)) || (uVar9 == 3)) goto LAB_004f8427;
    }
    else {
      if (uVar9 < 10) {
        return;
      }
      if (uVar9 < 0xf) {
        if (uVar9 < 0xb) {
LAB_004f8427:
          if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
            iVar5 = 0;
            if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) &&
               (*(int *)(in_stack_00000004[2].cloth_data + 0x5514) == 0)) {
              iVar5 = 10;
            }
            if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 8) != 0) {
              if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x10) == 0) {
                iVar5 = 1;
              }
              else {
                iVar5 = 2;
              }
            }
            if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0xc) != 0) {
              iVar5 = 3;
            }
            if (in_stack_00000004[1].base_actor.location.position.x != 0.0) {
              iVar5 = *(int *)(in_stack_00000004[2].cloth_data + 0x54f4);
              in_stack_00000004[1].base_actor.location.position.x = 0.0;
              uVar9 = (uint)(iVar5 == 0);
              *(uint *)(in_stack_00000004[2].cloth_data + 0x54f4) = uVar9;
              if ((uVar9 == 0) || (*(int *)(in_stack_00000004[2].cloth_data + 0x5514) != 0)) {
                iVar5 = 0;
              }
              else {
                iVar5 = 10;
              }
            }
            if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0) {
              bVar2 = true;
              if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) &&
                 (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) != 2)) {
                iVar10 = core_hero_cpp_FUN_004f2af0();
                bVar2 = false;
                if (iVar10 != 0) goto LAB_004f84cc;
                local_24 = core_hero_cpp_FUN_004f2d70();
                if ((local_24 != 0) && (local_24 != 1)) {
                  core_hero_cpp_FUN_004f2ed0();
                }
                if ((local_24 != 0) || (iVar10 = core_hero_cpp_FUN_004f2c40(), iVar10 != 0))
                goto LAB_004f84cc;
                iVar10 = core_hero_cpp_FUN_004f2f50();
                if (iVar10 != 0) {
                  core_hero_cpp_FUN_004f30f0();
                  goto LAB_004f84cc;
                }
              }
              else {
LAB_004f84cc:
                if (!bVar2) goto switchD_004f8665_default;
              }
              if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) {
                if (*(int *)(in_stack_00000004[2].cloth_data + 0x5514) == 0) {
                  pCVar4 = in_stack_00000004 + 1;
                  (pCVar4->base_actor).actor_name[0x14] = '\0';
                  (pCVar4->base_actor).actor_name[0x15] = '\0';
                  (pCVar4->base_actor).actor_name[0x16] = '\0';
                  (pCVar4->base_actor).actor_name[0x17] = '\0';
                  switch(*(uint *)(in_stack_00000004[2].cloth_data + 0x54f8)) {
                  case 0:
                  case 2:
                    iVar5 = 0xe;
                    break;
                  case 1:
                  case 3:
                    iVar5 = 0xf;
                    break;
                  case 4:
                    iVar5 = 0x10;
                  }
                }
                else {
                  pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c790
                                     (in_stack_00000004->carry_hands[1].carry_actor,
                                      g_CWeaponClassInfo.name_hash);
                  if (pCVar8 != (CDemonActor *)0x0) {
                    (*pCVar8->vtable[1].renderTransparent)(pCVar8);
                  }
                }
              }
            }
switchD_004f8665_default:
            *(float *)(in_stack_00000004->field2_0x240c + 0xc) =
                 (float)in_stack_00000004[1].base_actor.location.area_id *
                 *(float *)(in_stack_00000004->field2_0x240c + 0x2c);
            pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                (&(in_stack_00000004->model).motion_controller);
            if (iVar5 != pSVar12->state_index) {
              if ((((iVar5 == 0xe) || (iVar5 == 0xf)) || (iVar5 == 0x10)) &&
                 (iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                     (*(uint *)(in_stack_00000004[2].cloth_data + 0x54fc)),
                 iVar10 == 0)) {
                uVar11 = (*((in_stack_00000004->base_actor).vtable)->playSound)
                                   (&in_stack_00000004->base_actor,"icepick-miss?.wav");
                *(uint *)(in_stack_00000004[2].cloth_data + 0x54fc) = uVar11;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->model).motion_controller,iVar5,1);
            }
            if ((*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18) != 0) &&
               (iVar5 = core_icepick_cpp_FUN_004f8970(), iVar5 == 0)) {
              core_icepick_cpp_FUN_004f8ad0();
            }
          }
        }
      }
      else if (((0xf < uVar9) && (0x10 < uVar9)) && (uVar9 == 0x15)) goto LAB_004f8427;
    }
  }
  else {
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    pCVar6->x = (in_stack_00000004->model).accumulated_root_motion.y;
    uVar9 = *(uint *)(in_stack_00000004->field11_0x25a0 + 0x10);
    if (uVar9 < 2) {
      if (uVar9 == 1) {
        iVar5 = 1;
      }
      else {
LAB_004f8417:
        iVar5 = 0;
      }
    }
    else {
      if (2 < uVar9) {
        if (uVar9 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
          goto LAB_004f81b6;
        }
        goto LAB_004f8417;
      }
      iVar5 = 2;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->model).motion_controller,iVar5,1);
  }
LAB_004f81b6:
  if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) {
    local_34 = (in_stack_00000004->model).accumulated_root_motion.x;
    local_30 = (in_stack_00000004->model).accumulated_root_motion.y;
    fStack_2c = (in_stack_00000004->model).accumulated_root_motion.z;
    *(float *)(in_stack_00000004->field2_0x240c + 0x20) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
         in_stack_00000008 * (float)32;
    local_4c = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
    local_48 = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
    local_44 = in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x24);
    local_58 = local_4c + *(float *)(in_stack_00000004->field2_0x240c + 0x10);
    local_54 = local_48 + *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    local_34 = local_34 + local_58;
    local_50 = local_44 + *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    local_30 = local_30 + local_54;
    fStack_2c = fStack_2c + local_50;
    core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
    goto LAB_004f82f8;
  }
  if (in_stack_00000004->grabbed_type == 0) {
    pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       (&in_stack_00000004->base_actor,&CStack_64,
                        &(in_stack_00000004->grabbed_by->location).position);
    pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_40,pCVar6);
    in_stack_ffffff6c =
         (CDeformableModelInstance *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar6->y);
    if ((float)in_stack_ffffff6c < (float)-1.57079632675) {
      in_stack_ffffff6c = (CDeformableModelInstance *)((float)in_stack_ffffff6c + 3.141593f);
    }
    if ((float)1.57079632675 < (float)in_stack_ffffff6c) {
      in_stack_ffffff6c = (CDeformableModelInstance *)((float)in_stack_ffffff6c + -3.141593f);
    }
    local_14 = (CDeformableModelInstance *)(in_stack_00000008 * (float)3.1415926535000001);
    local_18 = (CDeformableModelInstance *)-(float)local_14;
    if ((float)in_stack_ffffff6c < (float)local_18) {
      in_stack_ffffff6c = local_18;
    }
    if ((float)local_14 < (float)in_stack_ffffff6c) {
      in_stack_ffffff6c = local_14;
    }
    (in_stack_00000004->base_actor).orient.bank =
         (in_stack_00000004->base_actor).orient.bank + (float)in_stack_ffffff6c;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&in_stack_00000004->base_actor);
  }
  pCVar8 = in_stack_00000004->grabbed_by;
  pCVar1 = pCVar8->vtable;
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&in_stack_00000004->model,(CVector3f *)(auStack_78 + 8),0);
  fVar7 = (*pCVar1[1].cylinderGroundCheck)(pCVar8,(float)in_stack_00000004,pCVar6);
  if (fVar7 == 0.0) {
    in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
LAB_004f82e5:
    iVar5 = 0;
  }
  else {
    if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) goto LAB_004f82e5;
    if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) == 0) goto LAB_004f82f8;
    iVar5 = 0x11;
  }
  in_stack_ffffff6c = &in_stack_00000004->model;
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&in_stack_ffffff6c->motion_controller,iVar5,1);
LAB_004f82f8:
  core_inv_cpp_CInventory_updateInventory_FUN_004ffad0
            ((CInventory *)(in_stack_00000004[2].cloth_data + 0x5058));
  pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004->carry_hands[1].carry_actor,g_CWeaponClassInfo.name_hash);
  if (pCVar8 != (CDemonActor *)0x0) {
    (*pCVar8->vtable->process)(pCVar8);
    pCVar8[4].actor_name[8] = 'd';
    pCVar8[4].actor_name[9] = '\0';
    pCVar8[4].actor_name[10] = '\0';
    pCVar8[4].actor_name[0xb] = '\0';
  }
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  local_1c = &in_stack_00000004->model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(local_1c);
  iVar5 = (*(in_stack_00000004->base_actor).vtable[1].hasCollision)
                    (&in_stack_00000004->base_actor,(SCollisionInfo *)in_stack_ffffff6c);
  if (iVar5 == 0) {
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar7 = *(float *)(in_stack_00000004[2].cloth_data + 0x5510);
    iVar5 = DAT_02db8970;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CVector3f *)(in_stack_00000004[2].cloth_data + 0x5504),&CStack_88);
    auStack_78._0_4_ = CStack_88.w;
    *(uint *)(auStack_78 + (uint)bVar13 * -8 + 4) =
         *(uint *)(auStack_78 + (uint)bVar13 * -8 + -0xc);
    *(uint *)(auStack_78 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
         *(uint *)(auStack_78 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + -8);
    *(uint *)
     ((int)(auStack_78 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) + ((uint)bVar13 * -2 + 1) * 4) =
         *(uint *)
          ((int)(auStack_78 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + -8) +
          ((uint)bVar13 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (local_14,(CQuaternion4f *)auStack_78,fVar7,iVar5,blend_callback);
  }
  core_icepick_cpp_FUN_004f8810();
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
  return;
}
