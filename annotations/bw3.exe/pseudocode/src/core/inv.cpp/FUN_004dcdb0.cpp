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
  CCharacter *this_ptr;
  EDeathState EVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  if (((*(int *)(param_1 + 0x338) != 0) &&
      (iVar9 = core_actor_cpp_castToClassHash_FUN_0040c840
                         (*(uint *)(*(int *)(param_1 + 0x338) + 0x304),
                          g_CHeroClassInfo.name_hash), iVar9 != 0)) &&
     (((*(int *)(*(int *)(param_1 + 0x338) + 0x56c) == 10 &&
       (*(int *)(param_1 + 0x46c) != *(int *)(iVar9 + 0x20b80))) ||
      ((*(int *)(*(int *)(param_1 + 0x338) + 0x56c) == 0xb &&
       (*(int *)(param_1 + 0x468) != *(int *)(iVar9 + 0x20b84))))))) {
    core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340(param_1,0);
    if (*(int *)(*(int *)(param_1 + 0x338) + 0x56c) == 10) {
      *(uint *)(param_1 + 0x46c) = *(uint *)(iVar9 + 0x20b80);
    }
    else {
      *(uint *)(param_1 + 0x468) = *(uint *)(iVar9 + 0x20b84);
    }
  }
  if ((((*(int *)&g_CGamePtr->field_0x264 != 0) || (*(int *)&g_CFieldNotesPtr->field_0x40 != 0)) ||
      (DAT_007dffb4 != 0)) || (*(int *)&g_CGamePtr->field_0x24c != 0)) {
    *(uint *)(param_1 + 0x344) = 0;
    *(uint *)(param_1 + 0x34c) = 0;
    *(uint *)(param_1 + 0x350) = 0;
    *(uint *)(param_1 + 0x340) = 0;
  }
  *(float *)(param_1 + 0x340) = *(float *)(param_1 + 0x340) - g_CGamePtr->delta_time_float;
  if (*(float *)(param_1 + 0x340) <= 0.0) {
    *(uint *)(param_1 + 0x340) = 0;
  }
  *(float *)(param_1 + 0x344) = *(float *)(param_1 + 0x344) - g_CGamePtr->delta_time_float;
  if (*(float *)(param_1 + 0x344) <= 0.0) {
    *(uint *)(param_1 + 0x344) = 0;
  }
  *(float *)(param_1 + 0x348) = *(float *)(param_1 + 0x348) - g_CGamePtr->delta_time_float;
  if (*(float *)(param_1 + 0x348) <= 0.0) {
    *(uint *)(param_1 + 0x348) = 0;
  }
  *(float *)(param_1 + 0x34c) = *(float *)(param_1 + 0x34c) - g_CGamePtr->delta_time_float;
  if (*(float *)(param_1 + 0x34c) <= 0.0) {
    param_1[0x354] = (CInventory)0x0;
    *(uint *)(param_1 + 0x34c) = 0;
  }
  *(float *)(param_1 + 0x350) = *(float *)(param_1 + 0x350) - g_CGamePtr->delta_time_float;
  if (*(float *)(param_1 + 0x350) < 0.0) {
    *(uint *)(param_1 + 0x350) = 0;
  }
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (_DAT_01d5be80 = _DAT_01d5be80 - g_CGamePtr->delta_time_float, _DAT_01d5be80 <= 0.0)) {
    _DAT_01d5be80 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.4);
    iVar10 = 0;
    iVar9 = 0;
    _DAT_01d70a20 = 0xffffffff;
    while (iVar10 < g_CDemonSetPtr->character_count) {
      this_ptr = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (*(uint *)((int)g_CDemonSetPtr->characters + iVar9),
                            g_CEnemyClassInfo.name_hash);
      if (((this_ptr == (CCharacter *)0x0) ||
          (EVar5 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr),
          EVar5 != DEATH_STATE_ALIVE)) ||
         ((iVar6 = core_actor_cpp_isOfClass_FUN_0040c790((CDemonActor *)this_ptr,"CTVBat"),
          iVar6 != 0 ||
          (iVar6 = core_actor_cpp_isOfClass_FUN_0040c790
                             ((CDemonActor *)this_ptr,"CWhitewolf"), iVar6 != 0)))) {
LAB_004dd05b:
        iVar10 = iVar10 + 1;
        iVar9 = iVar9 + 4;
      }
      else {
        iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        fVar2 = *(float *)(iVar6 + 0x20) - (this_ptr->base).location.position.x;
        fVar4 = *(float *)(iVar6 + 0x24) - (this_ptr->base).location.position.y;
        fVar3 = *(float *)(iVar6 + 0x28) - (this_ptr->base).location.position.z;
        fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
        dVar1 = (double)fVar2;
        if ((float)_DAT_005c65df < fVar2) goto LAB_004dd05b;
        if (dVar1 <= _DAT_005c65e7) {
          if (dVar1 <= _DAT_005c65ef) {
            if (dVar1 <= _DAT_005c65f7) {
              _DAT_01d70a20 = 0;
              iVar6 = 0;
              while (iVar7 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                                       (0x02CF5680,*(uint *)(iVar6 + 0x1d70a24)), iVar7 != 0) {
                iVar6 = iVar6 + 4;
                if (0xf < iVar6) {
                  return;
                }
              }
              uVar8 = core_sound_cpp_CSound_playSound_FUN_005609b0
                                (0x02CF5680,(void *)0x0,"voodoo1.wav");
              *(uint *)&this_ptr->field_0x27ac = uVar8;
              *(uint *)(iVar6 + 0x1d70a24) = uVar8;
              iVar10 = iVar10 + 1;
              iVar9 = iVar9 + 4;
            }
            else {
              _DAT_01d70a20 = 1;
              iVar6 = 0;
              while (iVar7 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                                       (0x02CF5680,*(uint *)(iVar6 + 0x1d70a24)), iVar7 != 0) {
                iVar6 = iVar6 + 4;
                if (0xf < iVar6) {
                  return;
                }
              }
              uVar8 = core_sound_cpp_CSound_playSound_FUN_005609b0
                                (0x02CF5680,(void *)0x0,"voodoo2.wav");
              *(uint *)&this_ptr->field_0x27ac = uVar8;
              *(uint *)(iVar6 + 0x1d70a24) = uVar8;
              iVar10 = iVar10 + 1;
              iVar9 = iVar9 + 4;
            }
          }
          else {
            _DAT_01d70a20 = 2;
            iVar6 = 0;
            while (iVar7 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                                     (0x02CF5680,*(uint *)(iVar6 + 0x1d70a24)), iVar7 != 0) {
              iVar6 = iVar6 + 4;
              if (0xf < iVar6) {
                return;
              }
            }
            uVar8 = core_sound_cpp_CSound_playSound_FUN_005609b0
                              (0x02CF5680,(void *)0x0,"voodoo3.wav");
            *(uint *)&this_ptr->field_0x27ac = uVar8;
            *(uint *)(iVar6 + 0x1d70a24) = uVar8;
            iVar10 = iVar10 + 1;
            iVar9 = iVar9 + 4;
          }
        }
        else {
          _DAT_01d70a20 = 3;
          iVar6 = 0;
          while (iVar7 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                                   (0x02CF5680,*(uint *)(iVar6 + 0x1d70a24)), iVar7 != 0) {
            iVar6 = iVar6 + 4;
            if (0xf < iVar6) {
              return;
            }
          }
          uVar8 = core_sound_cpp_CSound_playSound_FUN_005609b0
                            (0x02CF5680,(void *)0x0,"voodoo4.wav");
          *(uint *)&this_ptr->field_0x27ac = uVar8;
          *(uint *)(iVar6 + 0x1d70a24) = uVar8;
          iVar10 = iVar10 + 1;
          iVar9 = iVar9 + 4;
        }
      }
    }
  }
  return;
}
