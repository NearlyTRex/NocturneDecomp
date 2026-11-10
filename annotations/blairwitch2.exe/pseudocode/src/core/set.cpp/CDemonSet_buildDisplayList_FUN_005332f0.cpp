// Name: core_set.cpp_CDemonSet_buildDisplayList_FUN_005332f0
// Address: 005332f0
// Address Range: [[005332f0, 005337a9]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_buildDisplayList_FUN_005332f0(CDemonSet *this_ptr,uint dirty_flags_mask)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_buildDisplayList_FUN_005332f0(CDemonSet *this_ptr,uint dirty_flags_mask)

{
  CDemonActor *pCVar1;
  uint uVar2;
  int iVar3;
  CDemonSet *pCVar4;
  int iVar5;
  float *unaff_EBP;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  float afStackY_108c [1001];
  CDemonActor *in_stack_ffffff2c;
  float *pfVar11;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  uint local_a4;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  uint local_68;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  uint local_28;
  CDemonSet *local_24;
  int local_20;
  float *local_18;
  int local_14;
  
  bVar10 = 0;
  if (g_CGamePtr->profile_mode != 0) {
    local_20 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  }
  _DAT_0208f774 = 0;
  engine_matrix_c_FUN_0046b5c0();
  engine_matrix_c_FUN_0046b5e0();
  local_a4 = local_68;
  *(uint *)((int)&stack0xffffff60 + (uint)bVar10 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff9c + (uint)bVar10 * -8);
  *(uint *)((int)&stack0xffffff64 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
       *(uint *)(&stack0xffffffa0 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
  local_28 = 0xc;
  if ((_DAT_01fc9608 != 0) || (*(int *)&g_CGamePtr->field_0x25c != 0)) {
    local_28 = 0xd;
  }
  if (_DAT_01fc8e84 != 0) {
    local_28 = local_28 | 0x22;
  }
  iVar6 = 0;
  if (0 < this_ptr->renderable_actor_count) {
    local_18 = &stack0xffffff50;
    local_24 = this_ptr;
    do {
      pCVar1 = local_24->renderable_actors[0];
      if (pCVar1 != *(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4)) {
        if ((*(int *)&g_CGamePtr->field_0x25c == 0) &&
           (iVar7 = core_set_cpp_CDemonSet_isCameraPanning_FUN_00534b80(this_ptr), iVar7 != 0)) {
          if (((*(float *)&pCVar1->field_0x20 == *(float *)&pCVar1->field_0x12c) &&
              (((*(float *)&pCVar1->field_0x24 == *(float *)&pCVar1->field_0x130 &&
                (*(float *)&pCVar1->field_0x28 == *(float *)&pCVar1->field_0x134)) &&
               ((pCVar1->orient).vec.x == *(float *)&pCVar1->field_0x138)))) &&
             (((pCVar1->orient).vec.y == *(float *)&pCVar1->field_0x13c &&
              ((pCVar1->orient).vec.z == *(float *)&pCVar1->field_0x140)))) {
            uVar2 = *(uint *)&pCVar1->field_0x148;
            goto LAB_005334fa;
          }
          *(uint *)&pCVar1->field_0x148 = 1;
        }
        else {
          if (((*(float *)&pCVar1->field_0x20 == *(float *)&pCVar1->field_0x12c) &&
              (*(float *)&pCVar1->field_0x24 == *(float *)&pCVar1->field_0x130)) &&
             ((*(float *)&pCVar1->field_0x28 == *(float *)&pCVar1->field_0x134 &&
              ((((pCVar1->orient).vec.x == *(float *)&pCVar1->field_0x138 &&
                ((pCVar1->orient).vec.y == *(float *)&pCVar1->field_0x13c)) &&
               ((pCVar1->orient).vec.z == *(float *)&pCVar1->field_0x140)))))) {
            if ((*(uint *)&pCVar1->field_0x144 & local_28) == 0) goto LAB_005333c8;
          }
          else {
            *(uint *)&pCVar1->field_0x144 = *(uint *)&pCVar1->field_0x144 | dirty_flags_mask;
          }
          uVar2 = *(uint *)&pCVar1->field_0x144 & local_28;
LAB_005334fa:
          if (uVar2 == 0) goto LAB_005333c8;
        }
        (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,(CBoundingBox3D *)in_stack_ffffff2c);
        puVar8 = (uint *)&stack0xffffff34;
        puVar9 = (uint *)&stack0xffffff44;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
          puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
        }
        fStack_84 = fStack_b4 + *unaff_EBP;
        fStack_80 = fStack_b0 + unaff_EBP[1];
        fStack_7c = fStack_ac + unaff_EBP[2];
        fStack_3c = fStack_b4 + *unaff_EBP;
        *(uint *)((int)&stack0xffffffc8 + (uint)bVar10 * -8) =
             *(uint *)((int)&stack0xffffff80 + (uint)bVar10 * -8);
        *(uint *)((int)&stack0xffffffcc + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
             *(uint *)((int)&stack0xffffff84 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
        pfVar11 = &stack0xffffffb8;
        fStack_54 = fStack_3c * _DAT_005e5b6a;
        fStack_50 = fStack_38 * _DAT_005e5b6a;
        fStack_4c = fStack_34 * _DAT_005e5b6a;
        fStack_48 = fStack_3c * _DAT_005e5b6a;
        *(float *)((int)&stack0xffffffbc + (uint)bVar10 * 0xfffffffe * 4) =
             (&stack0xffffffb0)[(uint)bVar10 * 0xfffffffe];
        *(uint *)(&stack0xffffffc0 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
             *(uint *)((int)&stack0xffffffb4 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
        in_stack_ffffff2c = pCVar1;
        core_actor_cpp_FUN_00408d70(pCVar1,pfVar11);
        fStack_90 = fStack_78;
        (&stack0xffffff74)[(uint)bVar10 * 0xfffffffe] =
             (float)*(uint *)(&stack0xffffff8c + (uint)bVar10 * -8);
        *(uint *)((int)&stack0xffffff78 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
             *(uint *)(&stack0xffffff90 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
        *(CDemonActor **)(&DAT_0208f778 + _DAT_0208f774 * 8) = pCVar1;
        iVar7 = _DAT_0208f774 * 8;
        _DAT_0208f774 = _DAT_0208f774 + 1;
        *(float *)(&DAT_0208f77c + iVar7) =
             (fStack_94 - fStack_88) * (fStack_94 - fStack_88) +
             (fStack_98 - fStack_8c) * (fStack_98 - fStack_8c) +
             (fStack_9c - fStack_90) * (fStack_9c - fStack_90);
      }
LAB_005333c8:
      iVar6 = iVar6 + 1;
      local_24 = (CDemonSet *)local_24->cameras;
    } while (iVar6 < this_ptr->renderable_actor_count);
  }
  _qsort
            (&DAT_0208f778,_DAT_0208f774,8,core_set_cpp_qsortByDisplayListEntry_FUN_005332c0);
  iVar6 = _DAT_0208f774;
  pCVar1 = *(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4);
  if (pCVar1 == (CDemonActor *)0x0) {
    iVar7 = 0;
    if (0 < _DAT_0208f774) {
      iVar5 = 0;
      pCVar4 = this_ptr;
      do {
        iVar3 = _DAT_0208f774;
        puVar8 = (uint *)(&DAT_0208f778 + iVar5);
        iVar5 = iVar5 + 8;
        iVar7 = iVar7 + 1;
        pCVar4->sorted_render_actors[0] = (CDemonActor *)*puVar8;
        iVar6 = _DAT_0208f774;
        pCVar4 = (CDemonSet *)pCVar4->cameras;
      } while (iVar7 < iVar3);
    }
  }
  else {
    iVar7 = 0;
    this_ptr->sorted_render_actors[0] = pCVar1;
    if (0 < iVar6) {
      iVar6 = 0;
      pCVar4 = this_ptr;
      do {
        iVar5 = _DAT_0208f774;
        puVar8 = (uint *)(&DAT_0208f778 + iVar6);
        iVar6 = iVar6 + 8;
        iVar7 = iVar7 + 1;
        pCVar4->sorted_render_actors[1] = (CDemonActor *)*puVar8;
        pCVar4 = (CDemonSet *)pCVar4->cameras;
      } while (iVar7 < iVar5);
    }
    iVar6 = _DAT_0208f774 + 1;
  }
  this_ptr->sorted_render_actor_count = iVar6;
  if (g_CGamePtr->profile_mode != 0) {
    local_14 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
    local_14 = local_14 - local_20;
    engine_console_cpp_FUN_00436710
              (g_CConsolePtr,"buildDispList %d items : %3.2f ms\n",_DAT_0208f774,
               ((double)local_14 * _DAT_005e5b72 * _DAT_005e5b7a * _DAT_005e5b82) /
               (double)g_CGamePtr->delta_time_float);
    return;
  }
  return;
}
