// Name: core_icepick.cpp_FUN_004f80b0
// Address: 004f80b0
// Address Range: [[004f80b0, 004f8807]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_FUN_004f80b0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004f86be) */

void __cdecl core_icepick_cpp_FUN_004f80b0(void)

{
  bool bVar1;
  float fVar2;
  CCharacter *pCVar3;
  int iVar4;
  CVector3f *pCVar5;
  CDemonActor *pCVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  SMotion *pSVar10;
  byte bVar11;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float afStackY_186c [1521];
  float fVar12;
  CDeformableModelInstance *pCVar13;
  code *blend_callback;
  CQuaternion4f CStack_90;
  byte auStack_80 [24];
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
  CDeformableModelInstance *local_1c;
  CDeformableModelInstance *local_18;
  CDeformableModelInstance *local_14;
  
  bVar11 = 0;
  iVar4 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar4 == 0) {
    return;
  }
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 4) {
    return;
  }
  if (*(int *)(in_stack_00000004[1].base.actor_name + 4) == 2) {
    core_icepick_cpp_FUN_004f8c70();
  }
  fVar2 = (float)12.566370614;
  fVar12 = *(float *)in_stack_00000004[1].base.actor_name;
  *(uint *)(in_stack_00000004[2].cloth_data + 0x5514) =
       (uint)(in_stack_00000004->carry_hands[1].carry_actor != (CDemonActor *)0x0);
  fVar12 = fVar12 - in_stack_00000008;
  *(float *)(in_stack_00000004->unk1 + 0x2c) = in_stack_00000008 * fVar2;
  *(float *)in_stack_00000004[1].base.actor_name = fVar12;
  if (fVar12 < 0.0) {
    in_stack_00000004[1].base.actor_name[0] = '\0';
    in_stack_00000004[1].base.actor_name[1] = '\0';
    in_stack_00000004[1].base.actor_name[2] = '\0';
    in_stack_00000004[1].base.actor_name[3] = '\0';
  }
  pCVar5 = &(in_stack_00000004->model).accumulated_root_motion;
  (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
  (in_stack_00000004->model).accumulated_root_motion.y =
       (in_stack_00000004->model).accumulated_root_motion.z;
  pCVar5->x = (in_stack_00000004->model).accumulated_root_motion.y;
  core_icepick_cpp_FUN_004f93a0();
  *(float *)(in_stack_00000004->unk1 + 0x28) = (in_stack_00000004->model).accumulated_root_motion.z;
  iVar4 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
  if (iVar4 == 0) {
    pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&(in_stack_00000004->model).motion_controller);
    uVar7 = pSVar10->state_index;
    if (uVar7 < 9) {
      if ((((uVar7 == 0) || (uVar7 < 2)) || (uVar7 < 3)) || (uVar7 == 3)) goto LAB_004f8427;
    }
    else {
      if (uVar7 < 10) {
        return;
      }
      if (uVar7 < 0xf) {
        if (uVar7 < 0xb) {
LAB_004f8427:
          if (*(int *)(in_stack_00000004->unk1 + 4) != 0) {
            iVar4 = 0;
            if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) &&
               (*(int *)(in_stack_00000004[2].cloth_data + 0x5514) == 0)) {
              iVar4 = 10;
            }
            if (*(int *)(in_stack_00000004[1].base.actor_name + 8) != 0) {
              if (*(int *)(in_stack_00000004[1].base.actor_name + 0x10) == 0) {
                iVar4 = 1;
              }
              else {
                iVar4 = 2;
              }
            }
            if (*(int *)(in_stack_00000004[1].base.actor_name + 0xc) != 0) {
              iVar4 = 3;
            }
            if (in_stack_00000004[1].base.location.position.x != 0.0) {
              iVar4 = *(int *)(in_stack_00000004[2].cloth_data + 0x54f4);
              in_stack_00000004[1].base.location.position.x = 0.0;
              uVar7 = (uint)(iVar4 == 0);
              *(uint *)(in_stack_00000004[2].cloth_data + 0x54f4) = uVar7;
              if ((uVar7 == 0) || (*(int *)(in_stack_00000004[2].cloth_data + 0x5514) != 0)) {
                iVar4 = 0;
              }
              else {
                iVar4 = 10;
              }
            }
            if (*(int *)(in_stack_00000004[1].base.actor_name + 0x14) != 0) {
              bVar1 = true;
              if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) &&
                 (*(int *)(in_stack_00000004[1].base.actor_name + 4) != 2)) {
                iVar8 = core_hero_cpp_FUN_004f2af0();
                bVar1 = false;
                if (iVar8 != 0) goto LAB_004f84cc;
                local_24 = core_hero_cpp_FUN_004f2d70();
                if ((local_24 != 0) && (local_24 != 1)) {
                  core_hero_cpp_FUN_004f2ed0();
                }
                if ((local_24 != 0) || (iVar8 = core_hero_cpp_FUN_004f2c40(), iVar8 != 0))
                goto LAB_004f84cc;
                iVar8 = core_hero_cpp_FUN_004f2f50();
                if (iVar8 != 0) {
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
                  (pCVar3->base).actor_name[0x14] = '\0';
                  (pCVar3->base).actor_name[0x15] = '\0';
                  (pCVar3->base).actor_name[0x16] = '\0';
                  (pCVar3->base).actor_name[0x17] = '\0';
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
                  pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                                     (in_stack_00000004->carry_hands[1].carry_actor,
                                      g_CWeaponClassInfo.name_hash);
                  if (pCVar6 != (CDemonActor *)0x0) {
                    (*(((pCVar6->vtable)._uc)->_uc).cfunc4)();
                  }
                }
              }
            }
switchD_004f8665_default:
            *(float *)(in_stack_00000004->unk1 + 0xc) =
                 (float)in_stack_00000004[1].base.location.area_id *
                 *(float *)(in_stack_00000004->unk1 + 0x2c);
            pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                (&(in_stack_00000004->model).motion_controller);
            if (iVar4 != pSVar10->state_index) {
              if ((((iVar4 == 0xe) || (iVar4 == 0xf)) || (iVar4 == 0x10)) &&
                 (iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                    (*(uint *)(in_stack_00000004[2].cloth_data + 0x54fc)),
                 iVar8 == 0)) {
                uVar9 = (*((in_stack_00000004->base).vtable._ub)->playSound)
                                  (&in_stack_00000004->base,"icepick-miss?.wav");
                *(uint *)(in_stack_00000004[2].cloth_data + 0x54fc) = uVar9;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->model).motion_controller,iVar4,1);
            }
            if ((*(int *)(in_stack_00000004[1].base.actor_name + 0x18) != 0) &&
               (iVar4 = core_icepick_cpp_FUN_004f8970(), iVar4 == 0)) {
              core_icepick_cpp_FUN_004f8ad0();
            }
          }
        }
      }
      else if (((0xf < uVar7) && (0x10 < uVar7)) && (uVar7 == 0x15)) goto LAB_004f8427;
    }
  }
  else {
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    pCVar5->x = (in_stack_00000004->model).accumulated_root_motion.y;
    uVar7 = *(uint *)(in_stack_00000004->unk2 + 0x10);
    if (uVar7 < 2) {
      if (uVar7 == 1) {
        iVar4 = 1;
      }
      else {
LAB_004f8417:
        iVar4 = 0;
      }
    }
    else {
      if (2 < uVar7) {
        if (uVar7 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
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
    *(float *)(in_stack_00000004->unk1 + 0x20) =
         *(float *)(in_stack_00000004->unk1 + 0x20) - in_stack_00000008 * (float)32;
    local_50 = *(float *)(in_stack_00000004->unk1 + 0x1c) * in_stack_00000008;
    local_4c = *(float *)(in_stack_00000004->unk1 + 0x20) * in_stack_00000008;
    local_48 = in_stack_00000008 * *(float *)(in_stack_00000004->unk1 + 0x24);
    local_5c = local_50 + *(float *)(in_stack_00000004->unk1 + 0x10);
    local_58 = local_4c + *(float *)(in_stack_00000004->unk1 + 0x14);
    local_38 = local_38 + local_5c;
    local_54 = local_48 + *(float *)(in_stack_00000004->unk1 + 0x18);
    local_34 = local_34 + local_58;
    local_30 = local_30 + local_54;
    core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
    goto LAB_004f82f8;
  }
  if (in_stack_00000004->grabbed_type == 0) {
    pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       (&in_stack_00000004->base,&local_68,
                        &(in_stack_00000004->grabbed_by->location).position);
    pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_44,pCVar5);
    local_14 = (CDeformableModelInstance *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar5->y)
    ;
    pCVar13 = local_14;
    if ((float)local_14 < (float)-1.57079632675) {
      pCVar13 = (CDeformableModelInstance *)((float)local_14 + 3.141593f);
    }
    if ((float)1.57079632675 < (float)pCVar13) {
      pCVar13 = (CDeformableModelInstance *)((float)pCVar13 + -3.141593f);
    }
    local_18 = (CDeformableModelInstance *)(in_stack_00000008 * (float)3.1415926535000001);
    local_1c = (CDeformableModelInstance *)-(float)local_18;
    if ((float)pCVar13 < (float)local_1c) {
      pCVar13 = local_1c;
    }
    if ((float)local_18 < (float)pCVar13) {
      pCVar13 = local_18;
    }
    (in_stack_00000004->base).orient.bank = (in_stack_00000004->base).orient.bank + (float)pCVar13;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&in_stack_00000004->base);
  }
  local_14 = (CDeformableModelInstance *)(in_stack_00000004->grabbed_by->vtable)._uc;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
            (&in_stack_00000004->model,(CVector3f *)(auStack_80 + 0xc),0);
  iVar4 = (*((CCharacter_vtable *)((int)local_14 + 0xec))->cfunc15)();
  if (iVar4 == 0) {
    in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
LAB_004f82e5:
    iVar4 = 0;
  }
  else {
    if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) goto LAB_004f82e5;
    if (*(int *)(in_stack_00000004[1].base.actor_name + 0x14) == 0) goto LAB_004f82f8;
    iVar4 = 0x11;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(in_stack_00000004->model).motion_controller,iVar4,1);
LAB_004f82f8:
  core_inv_cpp_CInventory_updateInventory_FUN_004ffad0
            ((CInventory *)(in_stack_00000004[2].cloth_data + 0x5058));
  pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004->carry_hands[1].carry_actor,g_CWeaponClassInfo.name_hash);
  if (pCVar6 != (CDemonActor *)0x0) {
    (*((pCVar6->vtable)._ub)->process)(pCVar6,in_stack_00000008);
    pCVar6[4].actor_name[8] = 'd';
    pCVar6[4].actor_name[9] = '\0';
    pCVar6[4].actor_name[10] = '\0';
    pCVar6[4].actor_name[0xb] = '\0';
  }
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  pCStack_20 = &in_stack_00000004->model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCStack_20);
  iVar4 = (*(((in_stack_00000004->base).vtable._uc)->_uc).isDamageable)(in_stack_00000004);
  if (iVar4 == 0) {
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar12 = *(float *)(in_stack_00000004[2].cloth_data + 0x5510);
    iVar4 = INT_02db8970;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CVector3f *)(in_stack_00000004[2].cloth_data + 0x5504),&CStack_90);
    auStack_80._0_4_ = CStack_90.w;
    *(uint *)(auStack_80 + (uint)bVar11 * -8 + 4) =
         *(uint *)(auStack_80 + (uint)bVar11 * -8 + -0xc);
    *(uint *)(auStack_80 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         *(uint *)(auStack_80 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + -8);
    *(uint *)
     ((int)(auStack_80 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) + ((uint)bVar11 * -2 + 1) * 4) =
         *(uint *)
          ((int)(auStack_80 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + -8) +
          ((uint)bVar11 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (local_1c,(CQuaternion4f *)auStack_80,fVar12,iVar4,blend_callback);
  }
  core_icepick_cpp_FUN_004f8810();
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
  return;
}
