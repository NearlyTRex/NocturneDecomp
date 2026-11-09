// Name: core_set.cpp_FUN_0054fc20
// Address: 0054fc20
// Address Range: [[0054fc20, 00550256]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_0054fc20(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_0054fc20(CDemonSet *this_ptr)

{
  int *piVar1;
  uint *puVar2;
  CDemonActor *pCVar3;
  uint uVar4;
  int iVar5;
  CPathMap *this_ptr_00;
  int iVar6;
  int iVar7;
  CGlass *this_ptr_01;
  CTrigger *this_ptr_02;
  CFlameCan *this_ptr_03;
  CDemonSet *pCVar8;
  int iVar9;
  float *pfVar10;
  byte bVar11;
  float afStackY_104c [993];
  float local_b0;
  SDamageInfo aSStack_ac [4];
  int iStack_a8;
  CVector3f aCStack_a0 [3];
  uint uStack_7c;
  CVector3f CStack_70;
  float local_64;
  float afStack_60 [4];
  float fStack_50;
  int local_4c;
  int iStack_48;
  int local_44;
  byte *puStack_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  CDemonSet *local_20;
  int local_1c;
  int iStack_18;
  
  bVar11 = 0;
  iVar5 = 0;
  if (0 < *(int *)&this_ptr->field_0x14d164) {
    do {
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)&this_ptr->field_0x14d164);
  }
  if (*(int *)&g_CGamePtr->field_0x228 != 0) {
    local_4c = wincore_winrun_cpp_FUN_005b2420();
    local_28 = 0;
  }
  _DAT_01fe55bc = 0;
  _DAT_01fe55d0 = 0;
  local_b0 = *(float *)&g_CGamePtr->field_0x294;
  if (0.0 < local_b0) {
    afStack_60[3] = local_b0;
    core_setcolid_cpp_FUN_005593e0(this_ptr);
    iVar5 = 0;
    pCVar8 = this_ptr;
    if (0 < *(int *)&this_ptr->field_0x14d164) {
      do {
        *(int *)(*(int *)&pCVar8->field_0x14d168 + 0x6c) = iVar5;
        iVar5 = iVar5 + 1;
        pCVar8 = (CDemonSet *)&pCVar8->field_0x4;
      } while (iVar5 < *(int *)&this_ptr->field_0x14d164);
    }
    if (0.0 < local_b0) {
      local_2c = -999999;
      iVar5 = local_2c;
      do {
        local_2c = iVar5;
        local_24 = 999999;
        local_1c = 0;
        if (0 < *(int *)&this_ptr->field_0x14d164) {
          local_20 = this_ptr;
          iVar5 = local_28 << 2;
          do {
            pCVar3 = *(CDemonActor **)&local_20->field_0x14d168;
            if (*(int *)&pCVar3->field_0x104 == 0) {
              iVar6 = *(int *)&pCVar3->field_0x64;
              if (iVar6 == local_2c) {
                pfVar10 = (float *)((int)pCVar3 + (uint)bVar11 * -8 + 0x34);
                local_64 = *(float *)&pCVar3->field_0x30;
                afStack_60[(uint)bVar11 * -2] = *pfVar10;
                afStack_60[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                     pfVar10[(uint)bVar11 * -2 + 1];
                DAT_007c2ff4 = pCVar3;
                if (*(int *)&g_CGamePtr->field_0x228 == 2) {
                  local_30 = wincore_winrun_cpp_FUN_005b2420();
                }
                (**(code **)(*(int *)&DAT_007c2ff4->field_0x154 + 0xc))(DAT_007c2ff4);
                if (*(int *)&g_CGamePtr->field_0x228 == 2) {
                  iVar6 = wincore_winrun_cpp_FUN_005b2420();
                  *(int *)(iVar5 + 0x2026370) = iVar6 - local_30;
                  *(CDemonActor **)(iVar5 + 0x20282b0) = DAT_007c2ff4;
                }
                if (*(int *)&g_CGamePtr->field_0x228 != 0) {
                  local_28 = local_28 + 1;
                  iVar5 = iVar5 + 4;
                }
                this_ptr_00 = (CPathMap *)(**(code **)(*(int *)&DAT_007c2ff4->field_0x154 + 0xc4))()
                ;
                if (this_ptr_00 != (CPathMap *)0x0) {
                  core_path_cpp_FUN_005334f0(this_ptr_00,(CVector3f *)&DAT_007c2ff4->field_0x20,0);
                }
                if (((afStack_60[0] == *(float *)&DAT_007c2ff4->field_0x34) &&
                    (local_64 == *(float *)&DAT_007c2ff4->field_0x30)) &&
                   (afStack_60[1] == *(float *)&DAT_007c2ff4->field_0x38)) {
                  DAT_007c2ff4 = (CDemonActor *)0x0;
                }
                else {
                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(DAT_007c2ff4);
                  DAT_007c2ff4 = (CDemonActor *)0x0;
                }
              }
              else if ((local_2c < iVar6) && (iVar6 < local_24)) {
                local_24 = iVar6;
              }
            }
            local_20 = (CDemonSet *)&local_20->field_0x4;
            local_1c = local_1c + 1;
          } while (local_1c < *(int *)&this_ptr->field_0x14d164);
        }
        iVar5 = local_24;
      } while (local_24 < 999999);
    }
    iVar5 = 0;
    pCVar8 = this_ptr;
    if (0 < *(int *)&this_ptr->field_0x14d164) {
      do {
        iVar6 = core_actor_cpp_castToClassHash_FUN_0040c600(*(uint *)&pCVar8->field_0x14d168);
        local_3c = iVar6;
        if (((iVar6 != 0) && (iVar7 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x10c))(), iVar7 == 0))
           && (fStack_50 = (float)iVar7,
              iVar6 = core_fire_cpp_FUN_004b6ce0
                                (0x01C57074,(CVector3f *)(iVar6 + 0x20),0.0,&CStack_70,
                                 afStack_60 + 4), iVar6 != 0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_ac);
          iStack_a8 = (int)fStack_50;
          uStack_7c = 4;
          if (aCStack_a0 != &CStack_70) {
            aCStack_a0[0]._0_4_ = CStack_70._0_4_;
            aCStack_a0[0]._4_4_ = CStack_70._4_4_;
            aCStack_a0[0]._8_4_ = CStack_70._8_4_;
          }
          (**(code **)(*(int *)(local_3c + 0x154) + 0x108))(local_3c);
        }
        this_ptr_01 = (CGlass *)
                      core_actor_cpp_castToClassHash_FUN_0040c600
                                (*(uint *)&pCVar8->field_0x14d168);
        if (this_ptr_01 != (CGlass *)0x0) {
          puStack_40 = &this_ptr_01->field_0x20;
          iVar6 = core_fire_cpp_FUN_004b6ce0
                            (0x01C57074,(CVector3f *)puStack_40,0.0,(CVector3f *)0x0,(float *)0x0)
          ;
          if ((iVar6 != 0) &&
             (iVar6 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004e3a40(this_ptr_01),
             iVar6 != 0)) {
            core_glass_cpp_FUN_004e34b0(this_ptr_01);
          }
        }
        this_ptr_02 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040c600
                                (*(uint *)&pCVar8->field_0x14d168);
        if (((this_ptr_02 != (CTrigger *)0x0) && (*(int *)&this_ptr_02->field_0x174 == 7)) &&
           (this_ptr_02->field_0x308 == '\0')) {
          afStack_60[2] = 0.0;
          iVar6 = core_fire_cpp_FUN_004b6ce0
                            (0x01C57074,(CVector3f *)&this_ptr_02->field_0x20,0.0,(CVector3f *)0x0
                             ,afStack_60 + 2);
          if (iVar6 != 0) {
            core_trigger_cpp_FUN_0059be30(this_ptr_02,afStack_60[2]);
          }
        }
        this_ptr_03 = (CFlameCan *)
                      core_actor_cpp_castToClassHash_FUN_0040c600
                                (*(uint *)&pCVar8->field_0x14d168);
        if ((this_ptr_03 != (CFlameCan *)0x0) &&
           (iVar6 = core_fire_cpp_FUN_004b6ce0
                              (0x01C57074,(CVector3f *)&this_ptr_03->field_0x20,0.0,
                               (CVector3f *)0x0,(float *)0x0), iVar6 != 0)) {
          core_flamecan_cpp_CFlameCan_ignite_FUN_004b9180(this_ptr_03);
        }
        iVar5 = iVar5 + 1;
        pCVar8 = (CDemonSet *)&pCVar8->field_0x4;
      } while (iVar5 < *(int *)&this_ptr->field_0x14d164);
    }
    if (*(int *)&g_CGamePtr->field_0x228 != 0) {
      if (*(int *)&g_CGamePtr->field_0x228 == 2) {
        local_34 = 0;
        local_44 = local_28 + -1;
        local_38 = 0;
        if (0 < local_44) {
          iStack_48 = local_28 << 2;
          do {
            if (local_34 + 1 < local_28) {
              iVar5 = (local_34 + 1) * 4;
              do {
                iVar6 = *(int *)(local_38 + 0x2026370);
                if (iVar6 < *(int *)(iVar5 + 0x2026370)) {
                  *(int *)(local_38 + 0x2026370) = *(int *)(iVar5 + 0x2026370);
                  *(int *)(iVar5 + 0x2026370) = iVar6;
                  uVar4 = *(uint *)(local_38 + 0x20282b0);
                  *(uint *)(local_38 + 0x20282b0) = *(uint *)(iVar5 + 0x20282b0);
                  *(uint *)(iVar5 + 0x20282b0) = uVar4;
                }
                iVar5 = iVar5 + 4;
              } while (iVar5 < iStack_48);
            }
            local_38 = local_38 + 4;
            local_34 = local_34 + 1;
          } while (local_34 < local_44);
        }
        iVar5 = 0x14;
        if (local_28 < 0x14) {
          iVar5 = local_28;
        }
        if (0 < iVar5) {
          iVar7 = 0;
          iVar6 = 0;
          do {
            piVar1 = (int *)(iVar7 + 0x2026370);
            puVar2 = (uint *)(iVar7 + 0x20282b0);
            iVar7 = iVar7 + 4;
            iVar9 = iVar6 + 1;
            engine_console_cpp_FUN_00445430
                      (g_CConsolePtr,"%d. %s : %3.2f ms\n",iVar6,*puVar2,
                       ((double)*piVar1 * _DAT_005f088e * _DAT_005f0896 * _DAT_005f089e) /
                       (double)local_b0);
            iVar6 = iVar9;
          } while (iVar9 < iVar5);
        }
      }
      iVar5 = local_4c;
      iStack_18 = wincore_winrun_cpp_FUN_005b2420();
      iStack_18 = iStack_18 - iVar5;
      engine_console_cpp_FUN_00445430
                (g_CConsolePtr,"Process time (%d actors) : %3.2f ms\n",local_28,
                 ((double)iStack_18 * _DAT_005f088e * _DAT_005f0896 * _DAT_005f089e) /
                 (double)local_b0);
    }
    iVar5 = 0;
    if (0 < *(int *)&this_ptr->field_0x14d164) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)&this_ptr->field_0x14d164);
    }
  }
  return;
}
