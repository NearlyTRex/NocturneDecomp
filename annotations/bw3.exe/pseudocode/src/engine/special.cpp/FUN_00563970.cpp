// Name: engine_special.cpp_FUN_00563970
// Address: 00563970
// Address Range: [[00563970, 00563e37]]
// Convention: unknown
// Signature: void engine_special_cpp_FUN_00563970(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_special_cpp_FUN_00563970(int param_1,float param_2)

{
  char cVar1;
  CDemonActor *pCVar2;
  CMotionList *this_ptr;
  int iVar3;
  char *pcVar4;
  uint *puVar5;
  char *pcVar6;
  char *pcVar7;
  uint *puVar8;
  CDemonActor *pCVar9;
  byte bVar10;
  int iVar11;
  uint auStack_b0 [6];
  uint auStack_98 [6];
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  CVector3f CStack_5c;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  byte auStack_44 [12];
  float afStack_38 [3];
  float fStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar10 = 0;
  if ((*(uint *)(param_1 + 0x1b4) & 0x7fffffff) == 0) {
    *(float *)(param_1 + 0x1b8) = *(float *)(param_1 + 0x1b8) - param_2;
    if (0.0 < *(float *)(param_1 + 0x1b8)) {
      return;
    }
    *(uint *)(param_1 + 0x1b8) = 0x3f000000;
    if ((0 < *(int *)(param_1 + 0x1c4)) && (*(int *)(param_1 + 0x1c4) <= *(int *)(param_1 + 0x1c0)))
    {
      return;
    }
    pCVar2 = core_mission_cpp_FUN_004f6e90(0x01D81080,(char *)(param_1 + 0x158));
    pcVar6 = (char *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar2,g_CEnemyClassInfo.name_hash)
    ;
    if ((pcVar6 == (char *)0x0) ||
       (iVar3 = (**(code **)(*(int *)(pcVar6 + 0x154) + 0x10c))(pcVar6), iVar3 == 0)) {
      if (pCVar2 != (CDemonActor *)0x0) {
        return;
      }
      *(uint *)(param_1 + 0x1b4) = *(uint *)(param_1 + 0x1bc);
    }
    else {
      pcVar4 = (char *)0x5d54af;
      iVar3 = -1;
      do {
        pcVar7 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar7 = pcVar6 + (uint)bVar10 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      *(uint *)(param_1 + 0x1b4) = *(uint *)(param_1 + 0x1bc);
    }
  }
  *(float *)(param_1 + 0x1b4) = *(float *)(param_1 + 0x1b4) - param_2;
  if (*(float *)(param_1 + 0x1b4) <= 0.0) {
    *(uint *)(param_1 + 0x1b8) = 0x3f000000;
    *(uint *)(param_1 + 0x1b4) = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0x3f800000;
    core_actor_cpp_FUN_00408b00(param_1,&uStack_80);
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0x3fc00000;
    core_actor_cpp_FUN_00408b00(param_1,&uStack_50);
    fStack_2c = (float)core_setcolid_cpp_FUN_0053de10
                                 (g_CDemonSetPtr,*(uint *)(param_1 + 0x20),
                                  *(uint *)(param_1 + 0x28),0,0,0x3f800000,
                                  *(uint *)(param_1 + 0x24),
                                  *(float *)(param_1 + 0x24) + _DAT_005d54b7);
    fStack_14 = fStack_2c;
    core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
    if (1.0 <= fStack_2c) {
      if (*(int *)(param_1 + 0x1c8) != 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
        puVar5 = auStack_98;
        puVar8 = auStack_b0;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = *puVar5;
          puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
        }
        iVar3 = core_box_cpp_FUN_0041daf0(auStack_b0);
        if (iVar3 != 0) {
          return;
        }
      }
      pCVar2 = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c4f0(param_1 + 0x176);
      if (pCVar2 != (CDemonActor *)0x0) {
        iVar3 = (CCharacter *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar2,g_CCharacterClassInfo.name_hash);
        core_actor_cpp_castToClassHash_FUN_0040c840(pCVar2,g_CBoxActorClassInfo.name_hash);
        if (iVar3 != 0) {
          iVar11 = -1;
          pcVar6 = (char *)(param_1 + 0x2520);
          do {
            if (iVar11 == 0) break;
            iVar11 = iVar11 + -1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + (uint)bVar10 * -2 + 1;
          } while (cVar1 != '\0');
          if (iVar11 != -2) {
            core_skeleton_cpp_FUN_0054eae0(iVar3 + 0x158,(char *)(param_1 + 0x2520));
          }
        }
        pcVar6 = (char *)(param_1 + 0x158);
        pCVar9 = pCVar2;
        do {
          cVar1 = *pcVar6;
          *(char *)pCVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pCVar9->field_0x1 = cVar1;
          pCVar9 = (CDemonActor *)&pCVar9->field_0x2;
        } while (cVar1 != '\0');
        *(uint *)&pCVar2->field_0x20 = *(uint *)(param_1 + 0x20);
        *(uint *)&pCVar2->field_0x24 = *(uint *)(param_1 + 0x24);
        *(uint *)&pCVar2->field_0x28 = *(uint *)(param_1 + 0x28);
        *(uint *)&pCVar2->field_0x2c = *(uint *)(param_1 + 0x2c);
        if ((uint *)&pCVar2->field_0x30 != (uint *)(param_1 + 0x30)) {
          *(uint *)&pCVar2->field_0x30 = *(uint *)(param_1 + 0x30);
          *(uint *)&pCVar2->field_0x34 = *(uint *)(param_1 + 0x34);
          *(uint *)&pCVar2->field_0x38 = *(uint *)(param_1 + 0x38);
        }
        (*(code *)**(uint **)&pCVar2->field_0x154)(pCVar2);
        iVar3 = (CCharacter *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar2,g_CCharacterClassInfo.name_hash);
        if ((iVar3 != 0) && (*(char *)(param_1 + 0x194) != '\0')) {
          iVar11 = 1;
          pcVar6 = (char *)(param_1 + 0x194);
          this_ptr = core_motion_cpp_FUN_004fc310((CMotionController *)(iVar3 + 0x158));
          iVar11 = core_motion_cpp_FUN_004fb9c0(this_ptr,pcVar6,iVar11);
          core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
                    ((CMotionController *)(iVar3 + 0x158),iVar11,0.0);
          (*(code *)**(uint **)(iVar3 + 0x154))(iVar3);
        }
        iVar3 = (CZombie *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar2,g_CZombieClassInfo.name_hash);
        if (iVar3 != 0) {
          *(uint *)(iVar3 + 0xd0e4) = *(uint *)(param_1 + 0x1cc);
        }
        core_mission_cpp_FUN_004f6930(0x01D81080,pCVar2);
        if (auStack_44 != &pCVar2->field_0x20) {
          auStack_44._0_4_ = *(uint *)&pCVar2->field_0x20;
          auStack_44._4_4_ = *(uint *)&pCVar2->field_0x24;
          auStack_44._8_4_ = *(uint *)&pCVar2->field_0x28;
        }
        auStack_44._4_4_ = (float)auStack_44._4_4_ + _DAT_005d54bb;
        iVar3 = 0;
        do {
          uStack_28 = core_actor_cpp_FUN_0040ce40(0xc1a00000,0x41a00000);
          uStack_24 = core_actor_cpp_FUN_0040ce40(0xc1a00000,0x41a00000);
          afStack_38[0] = (float)core_actor_cpp_FUN_0040ce40(0xc1a00000,0x41a00000);
          uStack_20 = uStack_24;
          uStack_1c = uStack_28;
          afStack_38[1] = (float)uStack_24;
          afStack_38[2] = (float)uStack_28;
          if (&CStack_5c != (CVector3f *)afStack_38) {
            CStack_5c._4_4_ = uStack_24;
            CStack_5c._8_4_ = uStack_28;
            CStack_5c._0_4_ = afStack_38[0];
          }
          iVar3 = iVar3 + 1;
          fStack_18 = afStack_38[0];
          fStack_14 = afStack_38[0];
          core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                    (0x01C73654,(CVector3f *)auStack_44,&CStack_5c,0x20000,0x10000,1,0xffff);
        } while (iVar3 < 0x20);
        *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + 1;
        return;
      }
    }
  }
  return;
}
