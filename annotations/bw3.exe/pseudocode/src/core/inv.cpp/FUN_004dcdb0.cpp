// Name: core_inv.cpp_FUN_004dcdb0
// Address: 004dcdb0
// Address Range: [[004dcdb0, 004dd2ba]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004dcdb0(CInventory *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_inv_cpp_FUN_004dcdb0(CInventory *param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CDemonActor *actor_ptr;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  if (((*(int *)(param_1 + 0x338) != 0) &&
      (iVar8 = core_actor_cpp_castToClassHash_FUN_0040c840
                         (*(uint *)(*(int *)(param_1 + 0x338) + 0x304),
                          g_CHeroClassInfo.name_hash), iVar8 != 0)) &&
     (((*(int *)(*(int *)(param_1 + 0x338) + 0x56c) == 10 &&
       (*(int *)(param_1 + 0x46c) != *(int *)(iVar8 + 0x20b80))) ||
      ((*(int *)(*(int *)(param_1 + 0x338) + 0x56c) == 0xb &&
       (*(int *)(param_1 + 0x468) != *(int *)(iVar8 + 0x20b84))))))) {
    core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340(param_1,0);
    if (*(int *)(*(int *)(param_1 + 0x338) + 0x56c) == 10) {
      *(uint *)(param_1 + 0x46c) = *(uint *)(iVar8 + 0x20b80);
    }
    else {
      *(uint *)(param_1 + 0x468) = *(uint *)(iVar8 + 0x20b84);
    }
  }
  if ((((*(int *)&g_CGamePtr->field_0x264 != 0) || (*(int *)&g_CFieldNotesPtr->field_0x40 != 0)) ||
      (DAT_007dffb4 != 0)) || (*(int *)&g_CGamePtr->field_0x24c != 0)) {
    *(uint *)(param_1 + 0x344) = 0;
    *(uint *)(param_1 + 0x34c) = 0;
    *(uint *)(param_1 + 0x350) = 0;
    *(uint *)(param_1 + 0x340) = 0;
  }
  *(float *)(param_1 + 0x340) = *(float *)(param_1 + 0x340) - *(float *)&g_CGamePtr->field_0x314;
  if (*(float *)(param_1 + 0x340) <= 0.0) {
    *(uint *)(param_1 + 0x340) = 0;
  }
  *(float *)(param_1 + 0x344) = *(float *)(param_1 + 0x344) - *(float *)&g_CGamePtr->field_0x314;
  if (*(float *)(param_1 + 0x344) <= 0.0) {
    *(uint *)(param_1 + 0x344) = 0;
  }
  *(float *)(param_1 + 0x348) = *(float *)(param_1 + 0x348) - *(float *)&g_CGamePtr->field_0x314;
  if (*(float *)(param_1 + 0x348) <= 0.0) {
    *(uint *)(param_1 + 0x348) = 0;
  }
  *(float *)(param_1 + 0x34c) = *(float *)(param_1 + 0x34c) - *(float *)&g_CGamePtr->field_0x314;
  if (*(float *)(param_1 + 0x34c) <= 0.0) {
    param_1[0x354] = (CInventory)0x0;
    *(uint *)(param_1 + 0x34c) = 0;
  }
  *(float *)(param_1 + 0x350) = *(float *)(param_1 + 0x350) - *(float *)&g_CGamePtr->field_0x314;
  if (*(float *)(param_1 + 0x350) < 0.0) {
    *(uint *)(param_1 + 0x350) = 0;
  }
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (_DAT_01d5be80 = _DAT_01d5be80 - *(float *)&g_CGamePtr->field_0x314, _DAT_01d5be80 <= 0.0)) {
    _DAT_01d5be80 = (float)core_actor_cpp_FUN_0040ce40(0x3dcccccd,0x3ecccccd);
    iVar9 = 0;
    iVar8 = 0;
    _DAT_01d70a20 = 0xffffffff;
    while (iVar9 < *(int *)&g_CDemonSetPtr->field_0x14f0a8) {
      actor_ptr = (CDemonActor *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (*(uint *)(&g_CDemonSetPtr->field_0x14f0ac + iVar8),
                             g_CEnemyClassInfo.name_hash);
      if (((actor_ptr == (CDemonActor *)0x0) ||
          (iVar5 = (**(code **)(*(int *)&actor_ptr->field_0x154 + 0x10c))(actor_ptr), iVar5 != 0))
         || ((iVar5 = core_actor_cpp_FUN_0040c790(actor_ptr,"CTVBat"), iVar5 != 0 ||
             (iVar5 = core_actor_cpp_FUN_0040c790(actor_ptr,"CWhitewolf"), iVar5 != 0)))) {
LAB_004dd05b:
        iVar9 = iVar9 + 1;
        iVar8 = iVar8 + 4;
      }
      else {
        iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        fVar2 = *(float *)(iVar5 + 0x20) - *(float *)&actor_ptr->field_0x20;
        fVar4 = *(float *)(iVar5 + 0x24) - *(float *)&actor_ptr->field_0x24;
        fVar3 = *(float *)(iVar5 + 0x28) - *(float *)&actor_ptr->field_0x28;
        fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
        dVar1 = (double)fVar2;
        if ((float)_DAT_005c65df < fVar2) goto LAB_004dd05b;
        if (dVar1 <= _DAT_005c65e7) {
          if (dVar1 <= _DAT_005c65ef) {
            if (dVar1 <= _DAT_005c65f7) {
              _DAT_01d70a20 = 0;
              iVar5 = 0;
              while (iVar6 = core_sound_cpp_FUN_00560af0(0x02CF5680,*(uint *)(iVar5 + 0x1d70a24)),
                    iVar6 != 0) {
                iVar5 = iVar5 + 4;
                if (0xf < iVar5) {
                  return;
                }
              }
              uVar7 = core_sound_cpp_CSound_playSound_FUN_005609b0
                                (0x02CF5680,(void *)0x0,"voodoo1.wav");
              *(uint *)&actor_ptr[0x1d].field_0xb4 = uVar7;
              *(uint *)(iVar5 + 0x1d70a24) = uVar7;
              iVar9 = iVar9 + 1;
              iVar8 = iVar8 + 4;
            }
            else {
              _DAT_01d70a20 = 1;
              iVar5 = 0;
              while (iVar6 = core_sound_cpp_FUN_00560af0(0x02CF5680,*(uint *)(iVar5 + 0x1d70a24)),
                    iVar6 != 0) {
                iVar5 = iVar5 + 4;
                if (0xf < iVar5) {
                  return;
                }
              }
              uVar7 = core_sound_cpp_CSound_playSound_FUN_005609b0
                                (0x02CF5680,(void *)0x0,"voodoo2.wav");
              *(uint *)&actor_ptr[0x1d].field_0xb4 = uVar7;
              *(uint *)(iVar5 + 0x1d70a24) = uVar7;
              iVar9 = iVar9 + 1;
              iVar8 = iVar8 + 4;
            }
          }
          else {
            _DAT_01d70a20 = 2;
            iVar5 = 0;
            while (iVar6 = core_sound_cpp_FUN_00560af0(0x02CF5680,*(uint *)(iVar5 + 0x1d70a24)),
                  iVar6 != 0) {
              iVar5 = iVar5 + 4;
              if (0xf < iVar5) {
                return;
              }
            }
            uVar7 = core_sound_cpp_CSound_playSound_FUN_005609b0
                              (0x02CF5680,(void *)0x0,"voodoo3.wav");
            *(uint *)&actor_ptr[0x1d].field_0xb4 = uVar7;
            *(uint *)(iVar5 + 0x1d70a24) = uVar7;
            iVar9 = iVar9 + 1;
            iVar8 = iVar8 + 4;
          }
        }
        else {
          _DAT_01d70a20 = 3;
          iVar5 = 0;
          while (iVar6 = core_sound_cpp_FUN_00560af0(0x02CF5680,*(uint *)(iVar5 + 0x1d70a24)),
                iVar6 != 0) {
            iVar5 = iVar5 + 4;
            if (0xf < iVar5) {
              return;
            }
          }
          uVar7 = core_sound_cpp_CSound_playSound_FUN_005609b0
                            (0x02CF5680,(void *)0x0,"voodoo4.wav");
          *(uint *)&actor_ptr[0x1d].field_0xb4 = uVar7;
          *(uint *)(iVar5 + 0x1d70a24) = uVar7;
          iVar9 = iVar9 + 1;
          iVar8 = iVar8 + 4;
        }
      }
    }
  }
  return;
}
