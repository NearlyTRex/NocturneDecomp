// Name: core_gabriela.cpp_FUN_004af410
// Address: 004af410
// Address Range: [[004af410, 004af8f1]]
// Convention: unknown
// Signature: void core_gabriela_cpp_FUN_004af410(CGabriella *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gabriela_cpp_FUN_004af410(CGabriella *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  float10 fVar5;
  uint auStackY_109c [996];
  CGabriella *pCVar6;
  uint *puVar7;
  SDamageInfo *this_ptr;
  SDamageInfo local_f0 [4];
  float local_ec;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  CGabriella *local_bc;
  CGabriella *local_b8;
  CVector3f local_b4;
  uint local_a8;
  uint auStack_a4 [5];
  uint local_90;
  uint uStack_84;
  uint local_78 [3];
  uint local_6c;
  uint local_68;
  uint local_64;
  uint auStack_60 [3];
  float local_54;
  uint local_48 [3];
  uint local_3c;
  uint local_30;
  float local_28;
  int local_24;
  int local_20;
  CMotionController *local_1c;
  float local_18;
  
  bVar4 = 0;
  local_1c = (CMotionController *)&param_1->field_0x2b4;
  do {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_005030c0(local_1c,&param_2);
    switch(iVar2) {
    case 1:
    case 7:
      uVar3 = _DAT_01cb0694;
      if (iVar2 == 7) {
        uVar3 = _DAT_01cb0698;
      }
      core_skeleton_cpp_FUN_005469a0(local_1c,uVar3);
      local_48[0] = local_90;
      auStack_a4[(uint)bVar4 * -2 + 0x18] = auStack_a4[(uint)bVar4 * -2 + 6];
      auStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19] =
           auStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
      iVar2 = *(int *)&param_1->field_0x25614;
      if (iVar2 == 0) {
        if (*(int *)&param_1->field_0x2570 != 0) {
          local_18 = (float)core_motion_cpp_FUN_005038a0(local_1c,2);
          if ((float)_DAT_005d702b < local_18) {
            (**(code **)(*(int *)&param_1->field_0x2b0 + 0x2c))
                      (param_1,auStack_a4 + 0x17,0x3fd9999a);
          }
          else {
            local_18 = (float)core_motion_cpp_FUN_005038a0(local_1c,1);
            if (local_18 <= (float)_DAT_005d702b) {
              local_18 = (float)core_motion_cpp_FUN_005038a0(local_1c,3);
              if ((float)_DAT_005d702b < local_18) {
                (**(code **)(*(int *)&param_1->field_0x2b0 + 0x2c))
                          (param_1,auStack_a4 + 0x17,0x3f800000);
              }
            }
            else {
              (**(code **)(*(int *)&param_1->field_0x2b0 + 0x2c))
                        (param_1,auStack_a4 + 0x17,0x3f800000);
            }
          }
        }
      }
      else {
        local_18 = *(float *)&param_1->field_0x2b0;
        uVar3 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x4c))(iVar2,0x3f800000);
        core_actor_cpp_FUN_00408d70(param_1,auStack_a4 + 0x17,uVar3);
        fVar1 = local_18;
        puVar7 = auStack_a4 + 0x11;
        auStack_60[0] = uStack_84;
        auStack_a4[(uint)bVar4 * -2 + 0x12] = auStack_a4[(uint)bVar4 * -2 + 9];
        pCVar6 = param_1;
        auStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13] =
             auStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
        (**(code **)((int)fVar1 + 0x30))(pCVar6,puVar7);
      }
      break;
    case 2:
      iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                        (*(uint *)&param_1->field_0x25608,DAT_007bcc84);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x7d4) != 1) {
          param_1->flashlight_angle = -0.5235988;
          core_hero_cpp_FUN_004cff50((CHero *)param_1,0);
          break;
        }
        param_1->flashlight_angle = 0.31415927;
      }
    case 0x14:
      core_hero_cpp_FUN_004cff50((CHero *)param_1,0);
      break;
    case 3:
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x130))(param_1,0,0);
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(local_1c,0,1);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,iVar2);
      break;
    case 6:
      local_24 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (*(uint *)&param_1->field_0x276c,g_CEnemyClassInfo.name_hash);
      local_20 = local_24;
      if (local_24 != 0) {
        core_skeleton_cpp_FUN_005469a0(local_1c,_DAT_01cb06a8);
        puVar7 = auStack_a4 + 0xb;
        local_78[0] = local_3c;
        auStack_a4[(uint)bVar4 * -2 + 0xc] = auStack_a4[(uint)bVar4 * -2 + 0x1b];
        auStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
             auStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1c];
        core_actor_cpp_FUN_00408d70(param_1,puVar7);
        this_ptr = local_f0;
        local_b4.x = local_54;
        *(uint *)((int)&local_b4 + (uint)bVar4 * -8 + 4) = auStack_a4[(uint)bVar4 * -2 + 0x15]
        ;
        *(uint *)((int)&local_b4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
             auStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16];
        core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(this_ptr);
        local_ec = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,15.0);
        local_18 = local_ec;
        core_actor_cpp_FUN_00408de0(local_20,&local_b4);
        local_6c = local_a8;
        auStack_a4[(uint)bVar4 * -2 + 0xf] = auStack_a4[(uint)bVar4 * -2];
        auStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
             auStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
        if (&local_d4 != auStack_a4 + 0xe) {
          local_d4 = local_6c;
          local_d0 = local_68;
          local_cc = local_64;
        }
        local_bc = param_1;
        local_b8 = param_1;
        (**(code **)(*(int *)(local_24 + 0x2b0) + 0x110))(local_24,local_f0);
        if (0.0 < local_ec) {
          fVar5 = (float10)local_ec * (float10)_DAT_005d7023;
          round();
          local_18 = (float)(int)ROUND(fVar5);
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                    (g_CGorePtr,&local_b4,(CVector3f *)0x0,(int)local_18 + 1,BLOOD_TYPE_RED);
          (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"kick1.wav");
          *(uint *)&param_1->field_0x276c = 0;
          break;
        }
      }
      *(uint *)&param_1->field_0x276c = 0;
      break;
    case 0xf:
      if (*(int *)&param_1->field_0x276c != 0) {
        core_actor_cpp_FUN_00408de0(param_1,*(int *)&param_1->field_0x276c + 0x20);
        local_30 = auStack_a4[2];
        auStack_a4[(uint)bVar4 * -2 + 0x1e] = auStack_a4[(uint)bVar4 * -2 + 3];
        auStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1f] =
             auStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
        if (0.0 < local_28) {
          (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"hit-gh[4,7].wav");
        }
      }
      break;
    case 0x11:
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"gb-fall1.wav");
      break;
    case 0x12:
      break;
    case 0x13:
      core_gabriela_cpp_CGabriella_collectAmmo_FUN_004b0a40(param_1);
      break;
    case 0x15:
      core_hero_cpp_FUN_004cff90(param_1,0);
      break;
    case 0x16:
      iVar2 = core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230((CHero *)param_1);
      if (iVar2 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(local_1c,0,1);
      }
    }
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
