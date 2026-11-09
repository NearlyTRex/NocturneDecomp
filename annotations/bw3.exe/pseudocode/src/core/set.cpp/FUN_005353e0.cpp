// Name: core_set.cpp_FUN_005353e0
// Address: 005353e0
// Address Range: [[005353e0, 00535a77]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_005353e0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_005353e0(CDemonSet *this_ptr)

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
  float *pfVar9;
  int iVar10;
  byte bVar11;
  float afStackY_104c [993];
  float local_b0;
  SDamageInfo aSStack_ac [4];
  int iStack_a8;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_7c;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  float local_64;
  float afStack_60 [3];
  int iStack_54;
  float fStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int local_40;
  byte *puStack_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CDemonSet *local_1c;
  int local_18;
  int iStack_14;
  
  bVar11 = 0;
  iVar5 = 0;
  if (0 < *(int *)&this_ptr->field_0x14d164) {
    do {
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)&this_ptr->field_0x14d164);
  }
  if (*(int *)&g_CGamePtr->field_0x230 != 0) {
    local_48 = wincore_winrun_cpp_FUN_005806a0();
    local_24 = 0;
  }
  _DAT_0203ad1c = 0;
  _DAT_0203ad30 = 0;
  local_b0 = *(float *)&g_CGamePtr->field_0x314;
  if (0.0 < local_b0) {
    afStack_60[2] = local_b0;
    core_setcolid_cpp_FUN_0053eda0(this_ptr);
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
      local_28 = -999999;
      iVar5 = local_28;
      do {
        local_28 = iVar5;
        local_20 = 999999;
        local_18 = 0;
        if (0 < *(int *)&this_ptr->field_0x14d164) {
          local_1c = this_ptr;
          iVar5 = local_24 << 2;
          do {
            pCVar3 = *(CDemonActor **)&local_1c->field_0x14d168;
            if (*(int *)&pCVar3->field_0x104 == 0) {
              iVar6 = *(int *)&pCVar3->field_0x64;
              if (iVar6 == local_28) {
                pfVar9 = (float *)((int)pCVar3 + (uint)bVar11 * -8 + 0x34);
                local_64 = *(float *)&pCVar3->field_0x30;
                afStack_60[(uint)bVar11 * -2] = *pfVar9;
                afStack_60[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                     pfVar9[(uint)bVar11 * -2 + 1];
                DAT_007df974 = pCVar3;
                if (*(int *)&g_CGamePtr->field_0x230 == 2) {
                  local_2c = wincore_winrun_cpp_FUN_005806a0();
                }
                (**(code **)(*(int *)&DAT_007df974->field_0x154 + 0xc))(DAT_007df974);
                if (*(int *)&g_CGamePtr->field_0x230 == 2) {
                  iVar6 = wincore_winrun_cpp_FUN_005806a0();
                  *(int *)(iVar5 + 0x207bad8) = iVar6 - local_2c;
                  *(CDemonActor **)(iVar5 + 0x207da18) = DAT_007df974;
                }
                if (*(int *)&g_CGamePtr->field_0x230 != 0) {
                  local_24 = local_24 + 1;
                  iVar5 = iVar5 + 4;
                }
                this_ptr_00 = (CPathMap *)(**(code **)(*(int *)&DAT_007df974->field_0x154 + 0xc4))()
                ;
                if (this_ptr_00 != (CPathMap *)0x0) {
                  core_path_cpp_FUN_0050b1d0(this_ptr_00,(CVector3f *)&DAT_007df974->field_0x20,0);
                }
                if (((afStack_60[0] == *(float *)&DAT_007df974->field_0x34) &&
                    (local_64 == *(float *)&DAT_007df974->field_0x30)) &&
                   (afStack_60[1] == *(float *)&DAT_007df974->field_0x38)) {
                  DAT_007df974 = (CDemonActor *)0x0;
                }
                else {
                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(DAT_007df974);
                  DAT_007df974 = (CDemonActor *)0x0;
                }
              }
              else if ((local_28 < iVar6) && (iVar6 < local_20)) {
                local_20 = iVar6;
              }
            }
            local_1c = (CDemonSet *)&local_1c->field_0x4;
            local_18 = local_18 + 1;
          } while (local_18 < *(int *)&this_ptr->field_0x14d164);
        }
        iVar5 = local_20;
      } while (local_20 < 999999);
    }
    iVar5 = 0;
    pCVar8 = this_ptr;
    if (0 < *(int *)&this_ptr->field_0x14d164) {
      do {
        iVar6 = core_actor_cpp_castToClassHash_FUN_0040c840(*(uint *)&pCVar8->field_0x14d168);
        local_38 = iVar6;
        if (((iVar6 != 0) && (iVar7 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x10c))(), iVar7 == 0))
           && (iStack_54 = iVar7,
              iVar7 = core_fire_cpp_FUN_004a3790(0x01C73654,iVar6 + 0x20,0,&uStack_70,&iStack_54),
              iVar7 != 0)) {
          if (iStack_4c == 1) {
            iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840(iVar6);
            if (iVar7 == 0) {
              *(uint *)(iVar6 + 0x3254) = 0x41200000;
              *(uint *)(iVar6 + 0x3258) = 0;
            }
          }
          else if (iStack_4c == 0) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_ac);
            iStack_a8 = iStack_54;
            uStack_7c = 4;
            if (&uStack_a0 != &uStack_70) {
              uStack_a0 = uStack_70;
              uStack_9c = uStack_6c;
              uStack_98 = uStack_68;
            }
            (**(code **)(*(int *)(local_38 + 0x154) + 0x108))(local_38);
          }
        }
        this_ptr_01 = (CGlass *)
                      core_actor_cpp_castToClassHash_FUN_0040c840
                                (*(uint *)&pCVar8->field_0x14d168);
        if (this_ptr_01 != (CGlass *)0x0) {
          puStack_3c = &this_ptr_01->field_0x20;
          iVar6 = core_fire_cpp_FUN_004a3790(0x01C73654,puStack_3c,0,0,0);
          if ((iVar6 != 0) && (iVar6 = core_glass_cpp_FUN_004cc5d0(this_ptr_01), iVar6 != 0)) {
            core_glass_cpp_FUN_004cc040(this_ptr_01);
          }
        }
        this_ptr_02 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040c840
                                (*(uint *)&pCVar8->field_0x14d168);
        if (((this_ptr_02 != (CTrigger *)0x0) && (*(int *)&this_ptr_02->field_0x174 == 7)) &&
           (this_ptr_02->field_0x308 == '\0')) {
          fStack_50 = 0.0;
          iVar6 = core_fire_cpp_FUN_004a3790(0x01C73654,&this_ptr_02->field_0x20,0,0,&fStack_50);
          if (iVar6 != 0) {
            core_trigger_cpp_FUN_0056ee20(this_ptr_02,fStack_50);
          }
        }
        this_ptr_03 = (CFlameCan *)
                      core_actor_cpp_castToClassHash_FUN_0040c840
                                (*(uint *)&pCVar8->field_0x14d168);
        if ((this_ptr_03 != (CFlameCan *)0x0) &&
           (iVar6 = core_fire_cpp_FUN_004a3790(0x01C73654,&this_ptr_03->field_0x20,0,0,0),
           iVar6 != 0)) {
          core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(this_ptr_03);
        }
        iVar5 = iVar5 + 1;
        pCVar8 = (CDemonSet *)&pCVar8->field_0x4;
      } while (iVar5 < *(int *)&this_ptr->field_0x14d164);
    }
    if (*(int *)&g_CGamePtr->field_0x230 != 0) {
      if (*(int *)&g_CGamePtr->field_0x230 == 2) {
        local_30 = 0;
        local_40 = local_24 + -1;
        local_34 = 0;
        if (0 < local_40) {
          iStack_44 = local_24 << 2;
          do {
            if (local_30 + 1 < local_24) {
              iVar5 = (local_30 + 1) * 4;
              do {
                iVar6 = *(int *)(local_34 + 0x207bad8);
                if (iVar6 < *(int *)(iVar5 + 0x207bad8)) {
                  *(uint *)(local_34 + 0x207bad8) = *(uint *)(iVar5 + 0x207bad8);
                  *(int *)(iVar5 + 0x207bad8) = iVar6;
                  uVar4 = *(uint *)(local_34 + 0x207da18);
                  *(uint *)(local_34 + 0x207da18) = *(uint *)(iVar5 + 0x207da18);
                  *(uint *)(iVar5 + 0x207da18) = uVar4;
                }
                iVar5 = iVar5 + 4;
              } while (iVar5 < iStack_44);
            }
            local_34 = local_34 + 4;
            local_30 = local_30 + 1;
          } while (local_30 < local_40);
        }
        iVar5 = 0x14;
        if (local_24 < 0x14) {
          iVar5 = local_24;
        }
        if (0 < iVar5) {
          iVar7 = 0;
          iVar6 = 0;
          do {
            piVar1 = (int *)(iVar7 + 0x207bad8);
            puVar2 = (uint *)(iVar7 + 0x207da18);
            iVar7 = iVar7 + 4;
            iVar10 = iVar6 + 1;
            engine_console_cpp_FUN_00441ff0
                      (g_CConsolePtr,"%d. %s : %3.2f ms\n",iVar6,*puVar2,
                       ((double)*piVar1 * _DAT_005d0527 * _DAT_005d052f * _DAT_005d0537) /
                       (double)local_b0);
            iVar6 = iVar10;
          } while (iVar10 < iVar5);
        }
      }
      iVar5 = local_48;
      iStack_14 = wincore_winrun_cpp_FUN_005806a0();
      iStack_14 = iStack_14 - iVar5;
      engine_console_cpp_FUN_00441ff0
                (g_CConsolePtr,"Process time (%d actors) : %3.2f ms\n",local_24,
                 ((double)iStack_14 * _DAT_005d0527 * _DAT_005d052f * _DAT_005d0537) /
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
