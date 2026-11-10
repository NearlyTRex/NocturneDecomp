// Name: core_stranger.cpp_FUN_005881d0
// Address: 005881d0
// Address Range: [[005881d0, 005889ab]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_005881d0(CStranger *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_stranger_cpp_FUN_005881d0(CStranger *param_1,float param_2)

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
  uint *puVar12;
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
  float afStack_a0 [8];
  uint local_80;
  float afStack_7c [8];
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
  local_1c = (CMotionController *)&param_1->field_0x158;
  apCStack_34[3] = (CVector3f *)&param_1->field_0x1ff9c;
  apCStack_34[2] = (CVector3f *)&param_1->field_0x1ff90;
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_00524270(local_1c,&param_2);
    if (bone_index < 0x12) {
      if (bone_index < 6) {
        if (bone_index < 2) {
          if (bone_index == 1) {
LAB_00588243:
            uVar2 = _DAT_02c8361c;
            if (bone_index == 7) {
              uVar2 = _DAT_02c83620;
            }
            core_skeleton_cpp_FUN_00569040(local_1c,uVar2);
            afStack_7c[2] = afStack_58[2];
            afStack_7c[(uint)bVar8 * -2 + 3] = afStack_58[(uint)bVar8 * -2 + 3];
            pCVar1 = local_1c;
            afStack_7c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
                 afStack_58[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
            if (*(int *)&param_1->field_0x1ff84 == 0) {
              this_ptr_00 = param_1->ladder_to_descend;
              if (this_ptr_00 == (CLadder *)0x0) {
                if (*(int *)&param_1->field_0x2500 != 0) {
                  local_18 = (float)core_motion_cpp_FUN_00524a40(local_1c,4);
                  if ((float)_DAT_005f6a29 < local_18) {
                    (**(code **)(*(int *)&param_1->field_0x154 + 0x24))
                              (param_1,afStack_7c + 2,0x3fd9999a);
                  }
                  else {
                    local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar1,1);
                    if (local_18 <= (float)_DAT_005f6a29) {
                      local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar1,2);
                      if ((float)_DAT_005f6a29 < local_18) {
                        (**(code **)(*(int *)&param_1->field_0x154 + 0x24))
                                  (param_1,afStack_7c + 2,0x3f800000);
                      }
                    }
                    else {
                      (**(code **)(*(int *)&param_1->field_0x154 + 0x24))
                                (param_1,afStack_7c + 2,0x3f800000);
                    }
                  }
                }
                goto LAB_005882ec;
              }
              local_18 = *(float *)&param_1->field_0x154;
              EVar5 = (*((this_ptr_00->base).vtable._ub)->getGroundType)(&this_ptr_00->base);
              core_actor_cpp_FUN_00408b40(param_1,afStack_7c + 2,EVar5);
              pfVar11 = afStack_d0 + 8;
              pfVar7 = afStack_d0 + 8;
              pfVar6 = afStack_a0;
            }
            else {
              local_18 = *(float *)&param_1->field_0x154;
              uVar2 = (**(code **)(*(int *)(*(int *)&param_1->field_0x1ff84 + 0x154) + 0x44))
                                (*(int *)&param_1->field_0x1ff84,0x3f800000);
              core_actor_cpp_FUN_00408b40(param_1,afStack_7c + 2,uVar2);
              pfVar11 = afStack_a0 + 2;
              pfVar7 = afStack_a0 + 2;
              pfVar6 = afStack_7c;
            }
            pfVar6 = pfVar6 + 5;
            *pfVar7 = *pfVar6;
            pCVar10 = param_1;
            pfVar7[(uint)bVar8 * -2 + 1] = pfVar6[(uint)bVar8 * -2 + 1];
            (pfVar7 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
                 (pfVar6 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
            (**(code **)((int)local_18 + 0x28))(pCVar10,pfVar11);
          }
          else {
LAB_0058899d:
            core_charactr_cpp_CCharacter_processMotion_FUN_00434a80
                      ((CCharacter *)param_1,bone_index);
          }
        }
        else if (bone_index < 3) {
          if (*(int *)&param_1->field_0x1ff5c == 4) {
            *(uint *)&param_1->field_0x1ff5c = 0;
          }
          else {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       *(int *)&param_1->field_0x1ff5c,0x7e2);
          }
          iVar3 = *(int *)&param_1->field_0x1ff78;
          if (iVar3 == 0) {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\nstranger.cpp line %d",0x7e8);
          }
          else {
            iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x84))(iVar3,param_1);
            if (iVar3 == 0) {
              *(uint *)&param_1->field_0x1ff78 = 0;
            }
            else {
              iVar4 = *(int *)&param_1->field_0x1ff78;
              if ((iVar4 != 0) &&
                 (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x84))(iVar4,param_1), iVar4 == 4))
              {
                *(uint *)&param_1->field_0x2c9c = 0;
                *(uint *)&param_1->field_0x2c98 = 0xe;
              }
              if (iVar3 == 2) {
                if (*(int *)&param_1->field_0x1ff5c != 0) {
                  shape_edittool_cpp_FUN_00494340
                            (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                             *(int *)&param_1->field_0x1ff5c,0x806);
                }
                *(uint *)&param_1->field_0x1ff5c = 1;
              }
              core_hero_cpp_FUN_004ec280((CHero *)param_1,1);
            }
          }
        }
        else {
          if (bone_index != 3) goto LAB_0058899d;
          this_ptr = *(CWeapon **)&param_1->field_0x2628;
          core_stranger_cpp_CStranger_dropRightHandObject_FUN_0058ce20(param_1);
          iVar3 = *(int *)&param_1->field_0x1ff5c;
          if (iVar3 == 2) {
            if (this_ptr != (CWeapon *)0x0) {
              (*((this_ptr->base).vtable._ub)->setPositionAndOrientation)
                        (&this_ptr->base,apCStack_34[2],apCStack_34[3]);
            }
LAB_0058833e:
            *(uint *)&param_1->field_0x1ff5c = 0;
          }
          else {
            if (iVar3 == 6) goto LAB_0058833e;
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"<actionPending = %d\nstranger.cpp line %d" + 1,iVar3,0x7c4);
          }
          *(uint *)&param_1->field_0x1ff8c = 0;
          if (*(int *)&param_1->field_0x2c98 == 0xe) {
            *(uint *)&param_1->field_0x2c9c = 0;
            *(uint *)&param_1->field_0x2c98 = 0;
          }
          if (this_ptr == param_1->weapon) {
            param_1->weapon = (CWeapon *)0x0;
          }
        }
      }
      else if (bone_index < 7) {
        local_24 = core_actor_cpp_castToClassHash_FUN_0040c600
                             (*(uint *)&param_1->field_0x26fc,g_CEnemyClassInfo.name_hash);
        local_20 = local_24;
        if (local_24 != 0) {
          core_skeleton_cpp_FUN_00569040(local_1c,_DAT_02c83630);
          puVar12 = &local_80;
          local_80 = local_d4;
          afStack_7c[(uint)bVar8 * -2] = afStack_d0[(uint)bVar8 * -2];
          afStack_7c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          core_actor_cpp_FUN_00408b40(param_1,puVar12);
          this_ptr_01 = local_110;
          local_44.x = local_bc;
          *(float *)((int)&local_44 + (uint)bVar8 * -8 + 4) = afStack_d0[(uint)bVar8 * -2 + 6];
          *(float *)((int)&local_44 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
               afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(this_ptr_01);
          local_10c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,15.0);
          local_18 = local_10c;
          core_actor_cpp_FUN_00408bb0(local_20,&local_44);
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
          (**(code **)(*(int *)(local_24 + 0x154) + 0x108))(local_24,local_110);
          if (0.0 < local_10c) {
            fVar9 = (float10)local_10c * (float10)_DAT_005f6a21;
            round();
            local_18 = (float)(int)ROUND(fVar9);
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                      (g_CGorePtr,&local_44,(CVector3f *)0x0,(int)local_18 + 1,BLOOD_TYPE_RED);
            (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"kick1.wav");
          }
        }
        *(uint *)&param_1->field_0x26fc = 0;
      }
      else if (bone_index < 0xf) {
        if (bone_index == 7) goto LAB_00588243;
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,bone_index);
      }
      else if (bone_index < 0x10) {
        if (*(int *)&param_1->field_0x26fc != 0) {
          core_actor_cpp_FUN_00408bb0(param_1,*(int *)&param_1->field_0x26fc + 0x20);
          local_a4 = local_38;
          afStack_a0[(uint)bVar8 * -2] = (float)apCStack_34[(uint)bVar8 * -2];
          afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               (float)apCStack_34[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          if (0.0 < afStack_a0[1]) {
            (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"hit-gh[4,7].wav");
          }
        }
      }
      else if (bone_index == 0x11) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"fall-1.wav");
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,bone_index);
      }
    }
    else if (0x12 < bone_index) {
      if (bone_index < 0x17) {
        if (bone_index < 0x15) {
          if (bone_index != 0x13) goto LAB_0058899d;
          core_stranger_cpp_CStranger_processPickupComplete_FUN_0058cda0(param_1);
        }
        else if (bone_index < 0x16) {
          if (*(CWeapon **)&param_1->field_0x2628 == param_1->weapon) {
            param_1->weapon = (CWeapon *)0x0;
          }
          core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0((CHero *)param_1,1);
          if (*(int *)&param_1->field_0x1ff5c == 1) {
            *(uint *)&param_1->field_0x1ff5c = 0;
          }
          else {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       *(int *)&param_1->field_0x1ff5c,0x826);
          }
        }
        else {
          if (*(int *)&param_1->field_0x1ff5c == 5) {
            *(uint *)&param_1->field_0x1ff5c = 0;
          }
          else {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       *(int *)&param_1->field_0x1ff5c,0x879);
          }
          if (*(int *)&param_1->field_0x1ff74 == 0) {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"doorToOpen == NULL\nstranger.cpp line %d",0x87f);
          }
          iVar3 = core_hero_cpp_CHero_tryOpenDoor_FUN_004eb5e0((CHero *)param_1);
          if (iVar3 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(local_1c,0,1);
          }
        }
      }
      else if (bone_index < 0x18) {
        core_hero_cpp_FUN_004eb7f0(param_1);
      }
      else if (bone_index < 0x29a) {
        if (bone_index != 0x18) goto LAB_0058899d;
      }
      else if (bone_index < 0x29b) {
        *(uint *)&param_1->field_0x251c = 0x41200000;
      }
      else {
        if (bone_index != 0x29b) goto LAB_0058899d;
        *(uint *)&param_1->field_0x251c = 0x41000000;
      }
    }
LAB_005882ec:
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
