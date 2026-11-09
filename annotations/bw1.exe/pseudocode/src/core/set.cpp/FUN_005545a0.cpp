// Name: core_set.cpp_FUN_005545a0
// Address: 005545a0
// Address Range: [[005545a0, 00554a59]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_005545a0(CDemonSet *this_ptr,uint dirty_flags_mask)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_005545a0(CDemonSet *this_ptr,uint dirty_flags_mask)

{
  uint uVar1;
  int iVar2;
  CDemonSet *pCVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  byte bVar9;
  float afStackY_108c [1001];
  float local_bc;
  float fStack_b8;
  float fStack_b4;
  float local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float local_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  uint local_28;
  CDemonSet *local_24;
  int local_20;
  float *local_18;
  int local_14;
  
  bVar9 = 0;
  if (*(int *)&g_CGamePtr->field_0x228 != 0) {
    local_20 = wincore_winrun_cpp_FUN_005b2420();
  }
  _DAT_020ab728 = 0;
  engine_matrix_c_FUN_00483ac0();
  engine_matrix_c_FUN_00483ae0();
  local_a4 = local_68;
  *(uint *)((int)&stack0xffffff60 + (uint)bVar9 * -8) =
       *(uint *)(&stack0xffffff9c + (uint)bVar9 * -8);
  *(uint *)((int)&stack0xffffff64 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
       *(uint *)(&stack0xffffffa0 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  local_28 = 0xc;
  if ((_DAT_01fe55bc != 0) || (*(int *)&g_CGamePtr->field_0x25c != 0)) {
    local_28 = 0xd;
  }
  if (_DAT_01fe4e38 != 0) {
    local_28 = local_28 | 0x22;
  }
  iVar4 = 0;
  if (0 < *(int *)&this_ptr->field_0x158cfc) {
    local_18 = (float *)&stack0xffffff50;
    local_24 = this_ptr;
    do {
      iVar7 = *(int *)&local_24->field_0x158d00;
      if (iVar7 != *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
        if ((*(int *)&g_CGamePtr->field_0x25c == 0) &&
           (iVar5 = core_set_cpp_CDemonSet_isCameraPanning_FUN_00555fe0(this_ptr), iVar5 != 0)) {
          if (((*(float *)(iVar7 + 0x20) == *(float *)(iVar7 + 300)) &&
              (((*(float *)(iVar7 + 0x24) == *(float *)(iVar7 + 0x130) &&
                (*(float *)(iVar7 + 0x28) == *(float *)(iVar7 + 0x134))) &&
               (*(float *)(iVar7 + 0x30) == *(float *)(iVar7 + 0x138))))) &&
             ((*(float *)(iVar7 + 0x34) == *(float *)(iVar7 + 0x13c) &&
              (*(float *)(iVar7 + 0x38) == *(float *)(iVar7 + 0x140))))) {
            uVar1 = *(uint *)(iVar7 + 0x148);
            goto LAB_005547aa;
          }
          *(uint *)(iVar7 + 0x148) = 1;
        }
        else {
          if (((*(float *)(iVar7 + 0x20) == *(float *)(iVar7 + 300)) &&
              (*(float *)(iVar7 + 0x24) == *(float *)(iVar7 + 0x130))) &&
             ((*(float *)(iVar7 + 0x28) == *(float *)(iVar7 + 0x134) &&
              (((*(float *)(iVar7 + 0x30) == *(float *)(iVar7 + 0x138) &&
                (*(float *)(iVar7 + 0x34) == *(float *)(iVar7 + 0x13c))) &&
               (*(float *)(iVar7 + 0x38) == *(float *)(iVar7 + 0x140))))))) {
            if ((*(uint *)(iVar7 + 0x144) & local_28) == 0) goto LAB_00554678;
          }
          else {
            *(uint *)(iVar7 + 0x144) = *(uint *)(iVar7 + 0x144) | dirty_flags_mask;
          }
          uVar1 = *(uint *)(iVar7 + 0x144) & local_28;
LAB_005547aa:
          if (uVar1 == 0) goto LAB_00554678;
        }
        (**(code **)(*(int *)(iVar7 + 0x154) + 0x1c))();
        puVar6 = (uint *)&stack0xffffff2c;
        puVar8 = &stack0xffffff44;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        }
        fStack_8c = local_bc + *local_18;
        fStack_88 = fStack_b8 + local_18[1];
        fStack_84 = fStack_b4 + local_18[2];
        fStack_44 = local_bc + *local_18;
        *(uint *)((int)&stack0xffffffc0 + (uint)bVar9 * -8) =
             *(uint *)((int)&stack0xffffff78 + (uint)bVar9 * -8);
        *(uint *)((int)&stack0xffffffc4 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
             *(uint *)((int)&stack0xffffff7c + (uint)bVar9 * -8 + (uint)bVar9 * -8);
        fStack_5c = fStack_44 * _DAT_005f0b8e;
        fStack_58 = fStack_40 * _DAT_005f0b8e;
        fStack_54 = fStack_3c * _DAT_005f0b8e;
        fStack_50 = fStack_44 * _DAT_005f0b8e;
        *(uint *)(&stack0xffffffb4 + (uint)bVar9 * -8) =
             *(uint *)((int)&stack0xffffffa8 + (uint)bVar9 * -8);
        *(uint *)(&stack0xffffffb8 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
             *(uint *)((int)&stack0xffffffac + (uint)bVar9 * -8 + (uint)bVar9 * -8);
        core_actor_cpp_FUN_00408b40(iVar7);
        fStack_98 = fStack_80;
        *(uint *)((int)&stack0xffffff6c + (uint)bVar9 * -8) =
             *(uint *)(&stack0xffffff84 + (uint)bVar9 * -8);
        *(uint *)((int)&stack0xffffff70 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
             *(uint *)(&stack0xffffff88 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
        *(int *)(&DAT_020ab72c + _DAT_020ab728 * 8) = iVar7;
        iVar7 = _DAT_020ab728 * 8;
        _DAT_020ab728 = _DAT_020ab728 + 1;
        *(float *)(&DAT_020ab730 + iVar7) =
             (fStack_9c - fStack_90) * (fStack_9c - fStack_90) +
             (fStack_a0 - fStack_94) * (fStack_a0 - fStack_94) +
             (local_a4 - fStack_98) * (local_a4 - fStack_98);
      }
LAB_00554678:
      iVar4 = iVar4 + 1;
      local_24 = (CDemonSet *)&local_24->field_0x4;
    } while (iVar4 < *(int *)&this_ptr->field_0x158cfc);
  }
  _qsort
            (&DAT_020ab72c,_DAT_020ab728,8,core_set_cpp_qsortByDisplayListEntry_FUN_00554570);
  iVar7 = _DAT_020ab728;
  iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  if (iVar4 == 0) {
    iVar7 = 0;
    iVar4 = _DAT_020ab728;
    if (0 < _DAT_020ab728) {
      iVar5 = 0;
      pCVar3 = this_ptr;
      do {
        iVar2 = _DAT_020ab728;
        puVar6 = (uint *)(&DAT_020ab72c + iVar5);
        iVar5 = iVar5 + 8;
        iVar7 = iVar7 + 1;
        *(uint *)&pCVar3->field_0x15f700 = *puVar6;
        iVar4 = _DAT_020ab728;
        pCVar3 = (CDemonSet *)&pCVar3->field_0x4;
      } while (iVar7 < iVar2);
    }
  }
  else {
    iVar5 = 0;
    *(int *)&this_ptr->field_0x15f700 = iVar4;
    if (0 < iVar7) {
      iVar4 = 0;
      pCVar3 = this_ptr;
      do {
        iVar7 = _DAT_020ab728;
        puVar6 = (uint *)(&DAT_020ab72c + iVar4);
        iVar4 = iVar4 + 8;
        iVar5 = iVar5 + 1;
        *(uint *)&pCVar3->field_0x15f704 = *puVar6;
        pCVar3 = (CDemonSet *)&pCVar3->field_0x4;
      } while (iVar5 < iVar7);
    }
    iVar4 = _DAT_020ab728 + 1;
  }
  *(int *)&this_ptr->field_0x15f6fc = iVar4;
  if (*(int *)&g_CGamePtr->field_0x228 != 0) {
    local_14 = wincore_winrun_cpp_FUN_005b2420();
    local_14 = local_14 - local_20;
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"buildDispList %d items : %3.2f ms\n",_DAT_020ab728,
               ((double)local_14 * _DAT_005f0b96 * _DAT_005f0b9e * _DAT_005f0ba6) /
               (double)*(float *)&g_CGamePtr->field_0x294);
    return;
  }
  return;
}
