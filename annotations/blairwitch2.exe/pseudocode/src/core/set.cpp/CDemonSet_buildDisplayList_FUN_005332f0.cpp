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
  int *piVar1;
  CDemonActor *pCVar2;
  uint uVar3;
  int iVar4;
  CDemonSet *pCVar5;
  int iVar6;
  float *unaff_EBP;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  float afStackY_108c [1001];
  CDemonActor *in_stack_ffffff2c;
  float *pfVar12;
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
  
  bVar11 = 0;
  if (g_CGamePtr->profile_mode != 0) {
    local_20 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  }
  _DAT_0208f774 = 0;
  engine_matrix_c_FUN_0046b5c0();
  engine_matrix_c_FUN_0046b5e0();
  local_a4 = local_68;
  *(uint *)((int)&stack0xffffff60 + (uint)bVar11 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff9c + (uint)bVar11 * -8);
  *(uint *)((int)&stack0xffffff64 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
       *(uint *)(&stack0xffffffa0 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
  local_28 = 0xc;
  if ((_DAT_01fc9608 != 0) || (g_CGamePtr->goggles_active != 0)) {
    local_28 = 0xd;
  }
  if (_DAT_01fc8e84 != 0) {
    local_28 = local_28 | 0x22;
  }
  iVar7 = 0;
  if (0 < this_ptr->renderable_actor_count) {
    local_18 = &stack0xffffff50;
    local_24 = this_ptr;
    do {
      pCVar2 = local_24->renderable_actors[0];
      if (pCVar2 != *(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4)) {
        if ((g_CGamePtr->goggles_active == 0) &&
           (iVar8 = core_set_cpp_CDemonSet_isCameraPanning_FUN_00534b80(this_ptr), iVar8 != 0)) {
          if ((((pCVar2->location).position.x == (pCVar2->previous_transform_state).position.x) &&
              ((((pCVar2->location).position.y == (pCVar2->previous_transform_state).position.y &&
                ((pCVar2->location).position.z == (pCVar2->previous_transform_state).position.z)) &&
               ((pCVar2->orient).vec.x == (pCVar2->previous_transform_state).orientation.vec.x))))
             && (((pCVar2->orient).vec.y == (pCVar2->previous_transform_state).orientation.vec.y &&
                 ((pCVar2->orient).vec.z == (pCVar2->previous_transform_state).orientation.vec.z))))
          {
            uVar3 = pCVar2->render_needs_update;
            goto LAB_005334fa;
          }
          pCVar2->render_needs_update = 1;
        }
        else {
          if ((((pCVar2->location).position.x == (pCVar2->previous_transform_state).position.x) &&
              ((pCVar2->location).position.y == (pCVar2->previous_transform_state).position.y)) &&
             (((pCVar2->location).position.z == (pCVar2->previous_transform_state).position.z &&
              ((((pCVar2->orient).vec.x == (pCVar2->previous_transform_state).orientation.vec.x &&
                ((pCVar2->orient).vec.y == (pCVar2->previous_transform_state).orientation.vec.y)) &&
               ((pCVar2->orient).vec.z == (pCVar2->previous_transform_state).orientation.vec.z))))))
          {
            if (((pCVar2->previous_transform_state).dirty_flags & local_28) == 0) goto LAB_005333c8;
          }
          else {
            piVar1 = &(pCVar2->previous_transform_state).dirty_flags;
            *piVar1 = *piVar1 | dirty_flags_mask;
          }
          uVar3 = (pCVar2->previous_transform_state).dirty_flags & local_28;
LAB_005334fa:
          if (uVar3 == 0) goto LAB_005333c8;
        }
        (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,(CBoundingBox3D *)in_stack_ffffff2c);
        puVar9 = (uint *)&stack0xffffff34;
        puVar10 = (uint *)&stack0xffffff44;
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
        }
        fStack_84 = fStack_b4 + *unaff_EBP;
        fStack_80 = fStack_b0 + unaff_EBP[1];
        fStack_7c = fStack_ac + unaff_EBP[2];
        fStack_3c = fStack_b4 + *unaff_EBP;
        *(uint *)((int)&stack0xffffffc8 + (uint)bVar11 * -8) =
             *(uint *)((int)&stack0xffffff80 + (uint)bVar11 * -8);
        *(uint *)((int)&stack0xffffffcc + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
             *(uint *)((int)&stack0xffffff84 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
        pfVar12 = &stack0xffffffb8;
        fStack_54 = fStack_3c * _DAT_005e5b6a;
        fStack_50 = fStack_38 * _DAT_005e5b6a;
        fStack_4c = fStack_34 * _DAT_005e5b6a;
        fStack_48 = fStack_3c * _DAT_005e5b6a;
        *(float *)((int)&stack0xffffffbc + (uint)bVar11 * 0xfffffffe * 4) =
             (&stack0xffffffb0)[(uint)bVar11 * 0xfffffffe];
        *(uint *)(&stack0xffffffc0 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
             *(uint *)((int)&stack0xffffffb4 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
        in_stack_ffffff2c = pCVar2;
        core_actor_cpp_FUN_00408d70(pCVar2,pfVar12);
        fStack_90 = fStack_78;
        (&stack0xffffff74)[(uint)bVar11 * 0xfffffffe] =
             (float)*(uint *)(&stack0xffffff8c + (uint)bVar11 * -8);
        *(uint *)((int)&stack0xffffff78 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
             *(uint *)(&stack0xffffff90 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
        *(CDemonActor **)(&DAT_0208f778 + _DAT_0208f774 * 8) = pCVar2;
        iVar8 = _DAT_0208f774 * 8;
        _DAT_0208f774 = _DAT_0208f774 + 1;
        *(float *)(&DAT_0208f77c + iVar8) =
             (fStack_94 - fStack_88) * (fStack_94 - fStack_88) +
             (fStack_98 - fStack_8c) * (fStack_98 - fStack_8c) +
             (fStack_9c - fStack_90) * (fStack_9c - fStack_90);
      }
LAB_005333c8:
      iVar7 = iVar7 + 1;
      local_24 = (CDemonSet *)local_24->cameras;
    } while (iVar7 < this_ptr->renderable_actor_count);
  }
  _qsort
            (&DAT_0208f778,_DAT_0208f774,8,core_set_cpp_qsortByDisplayListEntry_FUN_005332c0);
  iVar7 = _DAT_0208f774;
  pCVar2 = *(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4);
  if (pCVar2 == (CDemonActor *)0x0) {
    iVar8 = 0;
    if (0 < _DAT_0208f774) {
      iVar6 = 0;
      pCVar5 = this_ptr;
      do {
        iVar4 = _DAT_0208f774;
        puVar9 = (uint *)(&DAT_0208f778 + iVar6);
        iVar6 = iVar6 + 8;
        iVar8 = iVar8 + 1;
        pCVar5->sorted_render_actors[0] = (CDemonActor *)*puVar9;
        iVar7 = _DAT_0208f774;
        pCVar5 = (CDemonSet *)pCVar5->cameras;
      } while (iVar8 < iVar4);
    }
  }
  else {
    iVar8 = 0;
    this_ptr->sorted_render_actors[0] = pCVar2;
    if (0 < iVar7) {
      iVar7 = 0;
      pCVar5 = this_ptr;
      do {
        iVar6 = _DAT_0208f774;
        puVar9 = (uint *)(&DAT_0208f778 + iVar7);
        iVar7 = iVar7 + 8;
        iVar8 = iVar8 + 1;
        pCVar5->sorted_render_actors[1] = (CDemonActor *)*puVar9;
        pCVar5 = (CDemonSet *)pCVar5->cameras;
      } while (iVar8 < iVar6);
    }
    iVar7 = _DAT_0208f774 + 1;
  }
  this_ptr->sorted_render_actor_count = iVar7;
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
