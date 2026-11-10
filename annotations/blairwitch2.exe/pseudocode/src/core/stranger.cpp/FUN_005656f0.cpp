// Name: core_stranger.cpp_FUN_005656f0
// Address: 005656f0
// Address Range: [[005656f0, 00565ecb]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_005656f0(CStranger *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_stranger_cpp_FUN_005656f0(CStranger *param_1,float param_2)

{
  CWeapon *this_ptr;
  CLadder *this_ptr_00;
  CMotionController *pCVar1;
  uint bone_index;
  uint uVar2;
  int iVar3;
  int iVar4;
  EGroundType EVar5;
  float *pfVar6;
  float *pfVar7;
  byte bVar8;
  float10 fVar9;
  float afStackY_10bc [39];
  CVector3f *apCStackY_1020 [957];
  CStranger *pCVar10;
  float *pfVar11;
  SDamageInfo *this_ptr_01;
  SDamageInfo local_110 [4];
  float local_10c;
  float local_f4;
  uint local_f0;
  uint local_ec;
  CStranger *local_dc;
  CStranger *local_d8;
  uint local_d4;
  float afStack_d0 [4];
  uint local_c0;
  float local_bc;
  float afStack_b0 [3];
  uint local_a4;
  float afStack_a0 [5];
  float afStack_8c [3];
  uint local_80;
  float afStack_7c [5];
  float afStack_68 [3];
  float local_5c;
  float afStack_58 [5];
  CVector3f local_44;
  uint local_38;
  CVector3f *apCStack_34 [4];
  int local_24;
  int local_20;
  CMotionController *local_1c;
  float local_18;
  
  bVar8 = 0;
  local_1c = (CMotionController *)&param_1->field_0x2b4;
  apCStack_34[3] = (CVector3f *)&param_1->field_0x2562c;
  apCStack_34[2] = (CVector3f *)&param_1->field_0x25620;
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_005030c0(local_1c,&param_2);
    if (bone_index < 0x12) {
      if (bone_index < 6) {
        if (bone_index < 2) {
          if (bone_index == 1) {
LAB_00565763:
            uVar2 = _DAT_0264be4c;
            if (bone_index == 7) {
              uVar2 = _DAT_0264be50;
            }
            core_skeleton_cpp_FUN_005469a0(local_1c,uVar2);
            afStack_7c[2] = (float)local_a4;
            afStack_7c[(uint)bVar8 * -2 + 3] = afStack_a0[(uint)bVar8 * -2];
            pCVar1 = local_1c;
            afStack_7c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
                 afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
            if (*(int *)&param_1->field_0x25614 == 0) {
              this_ptr_00 = param_1->ladder_to_descend;
              if (this_ptr_00 == (CLadder *)0x0) {
                if (*(int *)&param_1->field_0x2570 != 0) {
                  local_18 = (float)core_motion_cpp_FUN_005038a0(local_1c,3);
                  if ((float)_DAT_005eb7b5 < local_18) {
                    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x2c))
                              (param_1,afStack_7c + 2,0x3fd9999a);
                  }
                  else {
                    local_18 = (float)core_motion_cpp_FUN_005038a0(pCVar1,1);
                    if (local_18 <= (float)_DAT_005eb7b5) {
                      local_18 = (float)core_motion_cpp_FUN_005038a0(pCVar1,2);
                      if ((float)_DAT_005eb7b5 < local_18) {
                        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x2c))
                                  (param_1,afStack_7c + 2,0x3f800000);
                      }
                    }
                    else {
                      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x2c))
                                (param_1,afStack_7c + 2,0x3f800000);
                    }
                  }
                }
                goto LAB_00565806;
              }
              local_18 = *(float *)&param_1->field_0x2b0;
              EVar5 = (*((this_ptr_00->base).vtable._ub)->getGroundType)(&this_ptr_00->base);
              core_actor_cpp_FUN_00408d70(param_1,afStack_7c + 2,EVar5);
              pfVar11 = afStack_d0 + 8;
              pfVar7 = afStack_d0 + 8;
              pfVar6 = afStack_8c;
            }
            else {
              local_18 = *(float *)&param_1->field_0x2b0;
              uVar2 = (**(code **)(*(int *)(*(int *)&param_1->field_0x25614 + 0x2b0) + 0x4c))
                                (*(int *)&param_1->field_0x25614,0x3f800000);
              core_actor_cpp_FUN_00408d70(param_1,afStack_7c + 2,uVar2);
              pfVar11 = afStack_a0 + 2;
              pfVar7 = afStack_a0 + 2;
              pfVar6 = afStack_7c + 5;
            }
            *pfVar7 = *pfVar6;
            pCVar10 = param_1;
            pfVar7[(uint)bVar8 * -2 + 1] = pfVar6[(uint)bVar8 * -2 + 1];
            (pfVar7 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
                 (pfVar6 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
            (**(code **)((int)local_18 + 0x30))(pCVar10,pfVar11);
          }
          else {
LAB_00565ebd:
            core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00
                      ((CCharacter *)param_1,bone_index);
          }
        }
        else if (bone_index < 3) {
          if (param_1->action_pending == 4) {
            param_1->action_pending = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d");
          }
          iVar3 = *(int *)&param_1->field_0x25608;
          if (iVar3 == 0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\nstranger.cpp line %d");
          }
          else {
            iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x8c))(iVar3,param_1);
            if (iVar3 == 0) {
              *(uint *)&param_1->field_0x25608 = 0;
            }
            else {
              iVar4 = *(int *)&param_1->field_0x25608;
              if ((iVar4 != 0) &&
                 (iVar4 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x8c))(iVar4,param_1), iVar4 == 4))
              {
                *(uint *)&param_1->field_0x2d08 = 0;
                *(uint *)&param_1->field_0x2d04 = 0xe;
              }
              if (iVar3 == 2) {
                if (param_1->action_pending != 0) {
                  shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                            (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d");
                }
                param_1->action_pending = 1;
              }
              core_hero_cpp_FUN_004cff50((CHero *)param_1,1);
            }
          }
        }
        else {
          if (bone_index != 3) goto LAB_00565ebd;
          this_ptr = *(CWeapon **)&param_1->field_0x2698;
          core_stranger_cpp_FUN_0056a1e0(param_1);
          if (param_1->action_pending == 2) {
            if (this_ptr != (CWeapon *)0x0) {
              (*((this_ptr->base).vtable._ub)->setPositionAndOrientation)
                        (&this_ptr->base,apCStack_34[2],apCStack_34[3]);
            }
LAB_00565858:
            param_1->action_pending = 0;
          }
          else {
            if (param_1->action_pending == 6) goto LAB_00565858;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"<actionPending = %d\nstranger.cpp line %d" + 1);
          }
          *(uint *)&param_1->field_0x2561c = 0;
          if (*(int *)&param_1->field_0x2d04 == 0xe) {
            *(uint *)&param_1->field_0x2d08 = 0;
            *(uint *)&param_1->field_0x2d04 = 0;
          }
          if (this_ptr == param_1->weapon) {
            param_1->weapon = (CWeapon *)0x0;
          }
        }
      }
      else if (bone_index < 7) {
        local_24 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (*(uint *)&param_1->field_0x276c,g_CEnemyClassInfo.name_hash);
        local_20 = local_24;
        if (local_24 != 0) {
          core_skeleton_cpp_FUN_005469a0(local_1c,_DAT_0264be60);
          pfVar11 = afStack_58 + 2;
          afStack_58[2] = (float)local_d4;
          afStack_58[(uint)bVar8 * -2 + 3] = afStack_d0[(uint)bVar8 * -2];
          afStack_58[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
               afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          core_actor_cpp_FUN_00408d70(param_1,pfVar11);
          this_ptr_01 = local_110;
          local_44.x = local_bc;
          *(float *)((int)&local_44 + (uint)bVar8 * -8 + 4) = afStack_d0[(uint)bVar8 * -2 + 6];
          *(float *)((int)&local_44 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
               afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(this_ptr_01);
          local_10c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,15.0);
          local_18 = local_10c;
          core_actor_cpp_FUN_00408de0(local_20,&local_44);
          afStack_d0[2] = local_5c;
          afStack_d0[(uint)bVar8 * -2 + 3] = afStack_58[(uint)bVar8 * -2];
          afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
               afStack_58[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          if (&local_f4 != afStack_d0 + 2) {
            local_f4 = afStack_d0[2];
            local_f0 = afStack_d0[3];
            local_ec = local_c0;
          }
          local_dc = param_1;
          local_d8 = param_1;
          (**(code **)(*(int *)(local_24 + 0x2b0) + 0x110))(local_24,local_110);
          if (0.0 < local_10c) {
            fVar9 = (float10)local_10c * (float10)_DAT_005eb7ad;
            round();
            local_18 = (float)(int)ROUND(fVar9);
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                      (g_CGorePtr,&local_44,(CVector3f *)0x0,(int)local_18 + 1,BLOOD_TYPE_RED);
            (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"kick1.wav");
          }
        }
        *(uint *)&param_1->field_0x276c = 0;
      }
      else if (bone_index < 0xf) {
        if (bone_index == 7) goto LAB_00565763;
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,bone_index);
      }
      else if (bone_index < 0x10) {
        if (*(int *)&param_1->field_0x276c != 0) {
          core_actor_cpp_FUN_00408de0(param_1,*(int *)&param_1->field_0x276c + 0x20);
          local_80 = local_38;
          afStack_7c[(uint)bVar8 * -2] = (float)apCStack_34[(uint)bVar8 * -2];
          afStack_7c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               (float)apCStack_34[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          if (0.0 < afStack_7c[1]) {
            (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"hit-gh[4,7].wav");
          }
        }
      }
      else if (bone_index == 0x11) {
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"fall-1.wav");
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,bone_index);
      }
    }
    else if (0x12 < bone_index) {
      if (bone_index < 0x17) {
        if (bone_index < 0x15) {
          if (bone_index != 0x13) goto LAB_00565ebd;
          core_stranger_cpp_FUN_0056a160(param_1);
        }
        else if (bone_index < 0x16) {
          if (*(CWeapon **)&param_1->field_0x2698 == param_1->weapon) {
            param_1->weapon = (CWeapon *)0x0;
          }
          core_hero_cpp_FUN_004cff90(param_1,1);
          if (param_1->action_pending == 1) {
            param_1->action_pending = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d");
          }
        }
        else {
          if (param_1->action_pending == 5) {
            param_1->action_pending = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d");
          }
          if (*(int *)&param_1->field_0x25604 == 0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"doorToOpen == NULL\nstranger.cpp line %d");
          }
          iVar3 = core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230((CHero *)param_1);
          if (iVar3 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(local_1c,0,1);
          }
        }
      }
      else if (bone_index < 0x18) {
        core_hero_cpp_FUN_004cf440(param_1);
      }
      else if (bone_index < 0x29a) {
        if (bone_index != 0x18) goto LAB_00565ebd;
      }
      else if (bone_index < 0x29b) {
        *(uint *)&param_1->field_0x258c = 0x41200000;
      }
      else {
        if (bone_index != 0x29b) goto LAB_00565ebd;
        *(uint *)&param_1->field_0x258c = 0x41000000;
      }
    }
LAB_00565806:
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
