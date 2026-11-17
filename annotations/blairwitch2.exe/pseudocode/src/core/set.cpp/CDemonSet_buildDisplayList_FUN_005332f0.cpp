// Name: core_set.cpp_CDemonSet_buildDisplayList_FUN_005332f0
// Address: 005332f0
// Address Range: [[005332f0, 005337a9]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_buildDisplayList_FUN_005332f0(CDemonSet *this_ptr,uint dirty_flags_mask)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_set_cpp_CDemonSet_buildDisplayList_FUN_005332f0(CDemonSet *this_ptr,uint dirty_flags_mask)

{
  CHero *this_ptr_00;
  uint uVar1;
  int *piVar2;
  SDisplayListSortEntry *pSVar3;
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
  CHero *in_stack_ffffff2c;
  CVector3f *input_local_point;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a4;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  byte auStack_78 [8];
  float afStack_70 [2];
  CVector3f local_68;
  float fStack_54;
  float afStack_50 [2];
  CVector3f CStack_48;
  float fStack_3c;
  float fStack_38;
  float afStack_34 [3];
  uint local_28;
  CDemonSet *local_24;
  int local_20;
  float *local_18;
  int local_14;
  
  bVar11 = 0;
  if (g_CGamePtr->profile_mode != 0) {
    local_20 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  }
  g_INT_0208f774 = 0;
  engine_drender_cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046b5c0
            (g_CDemonRenderer_PTR_0060b280,(CVector3i *)(auStack_78 + 4));
  engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_0046b5e0
            (g_CDemonRenderer_PTR_0060b280,&local_68);
  local_a4 = local_68.x;
  *(uint *)((int)&stack0xffffff60 + (uint)bVar11 * 0xfffffffe * 4) =
       *(uint *)((int)&local_68 + (uint)bVar11 * -8 + 4);
  *(uint *)((int)&stack0xffffff60 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 1) * 4) =
       *(uint *)((int)&local_68 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
  local_28 = 0xc;
  if ((g_INT_01fc9608 != 0) || (g_CGamePtr->goggles_active != 0)) {
    local_28 = 0xd;
  }
  if (g_INT_01fc8e84 != 0) {
    local_28 = local_28 | 0x22;
  }
  iVar7 = 0;
  if (0 < this_ptr->renderable_actor_count) {
    local_18 = &stack0xffffff50;
    local_24 = this_ptr;
    do {
      this_ptr_00 = (CHero *)local_24->renderable_actors[0];
      if (this_ptr_00 != g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]) {
        if ((g_CGamePtr->goggles_active == 0) &&
           (iVar8 = core_set_cpp_CDemonSet_isCameraPanning_FUN_00534b80(this_ptr), iVar8 != 0)) {
          if ((((this_ptr_00->base).base.location.position.x ==
                (this_ptr_00->base).base.previous_transform_state.position.x) &&
              ((((this_ptr_00->base).base.location.position.y ==
                 (this_ptr_00->base).base.previous_transform_state.position.y &&
                ((this_ptr_00->base).base.location.position.z ==
                 (this_ptr_00->base).base.previous_transform_state.position.z)) &&
               ((this_ptr_00->base).base.orient.vec.x ==
                (this_ptr_00->base).base.previous_transform_state.orientation.vec.x)))) &&
             (((this_ptr_00->base).base.orient.vec.y ==
               *(float *)((int)&(this_ptr_00->base).base.previous_transform_state.orientation + 4)
              && ((this_ptr_00->base).base.orient.vec.z ==
                  *(float *)((int)&(this_ptr_00->base).base.previous_transform_state.orientation + 8
                            ))))) {
            uVar1 = (this_ptr_00->base).base.render_needs_update;
            goto LAB_005334fa;
          }
          (this_ptr_00->base).base.render_needs_update = 1;
        }
        else {
          if ((((this_ptr_00->base).base.location.position.x ==
                (this_ptr_00->base).base.previous_transform_state.position.x) &&
              ((this_ptr_00->base).base.location.position.y ==
               (this_ptr_00->base).base.previous_transform_state.position.y)) &&
             (((this_ptr_00->base).base.location.position.z ==
               (this_ptr_00->base).base.previous_transform_state.position.z &&
              ((((this_ptr_00->base).base.orient.vec.x ==
                 (this_ptr_00->base).base.previous_transform_state.orientation.vec.x &&
                ((this_ptr_00->base).base.orient.vec.y ==
                 *(float *)((int)&(this_ptr_00->base).base.previous_transform_state.orientation + 4)
                )) && ((this_ptr_00->base).base.orient.vec.z ==
                       *(float *)((int)&(this_ptr_00->base).base.previous_transform_state.
                                        orientation + 8))))))) {
            if (((this_ptr_00->base).base.previous_transform_state.dirty_flags & local_28) == 0)
            goto LAB_005333c8;
          }
          else {
            piVar2 = &(this_ptr_00->base).base.previous_transform_state.dirty_flags;
            *piVar2 = *piVar2 | dirty_flags_mask;
          }
          uVar1 = (this_ptr_00->base).base.previous_transform_state.dirty_flags & local_28;
LAB_005334fa:
          if (uVar1 == 0) goto LAB_005333c8;
        }
        (*((this_ptr_00->base).base.vtable._ub)->getBoundingBox)
                  ((CDemonActor *)this_ptr_00,(CBoundingBox3D *)in_stack_ffffff2c);
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
        afStack_34[(uint)bVar11 * -2 + -1] = (&stack0xffffff74)[(uint)bVar11 * -2 + 3];
        afStack_34[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
             (&stack0xffffff74)[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        input_local_point = &CStack_48;
        fStack_54 = fStack_3c * 0.5f;
        afStack_50[0] = fStack_38 * 0.5f;
        afStack_50[1] = afStack_34[0] * 0.5f;
        CStack_48.x = fStack_3c * 0.5f;
        *(float *)((int)&CStack_48 + (uint)bVar11 * -8 + 4) = afStack_50[(uint)bVar11 * -2];
        *(float *)((int)&CStack_48 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             afStack_50[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        in_stack_ffffff2c = this_ptr_00;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                  ((CDemonActor *)this_ptr_00,input_local_point,(CVector3f *)auStack_78);
        fStack_90 = (float)auStack_78._0_4_;
        (&stack0xffffff74)[(uint)bVar11 * 0xfffffffe] =
             (float)*(uint *)(auStack_78 + (uint)bVar11 * -8 + 4);
        (&stack0xffffff74)[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2];
        g_SDisplayListSortEntry_ARRAY_0208f778[g_INT_0208f774].actor = (CDemonActor *)this_ptr_00;
        pSVar3 = g_SDisplayListSortEntry_ARRAY_0208f778 + g_INT_0208f774;
        g_INT_0208f774 = g_INT_0208f774 + 1;
        pSVar3->distance_sq =
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
            (g_SDisplayListSortEntry_ARRAY_0208f778,g_INT_0208f774,8,
             core_set_cpp_qsortByDisplayListEntry_FUN_005332c0);
  iVar7 = g_INT_0208f774;
  if (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4] == (CHero *)0x0) {
    iVar8 = 0;
    if (0 < g_INT_0208f774) {
      iVar6 = 0;
      pCVar5 = this_ptr;
      do {
        iVar4 = g_INT_0208f774;
        puVar9 = (uint *)((int)&g_SDisplayListSortEntry_ARRAY_0208f778[0].actor + iVar6);
        iVar6 = iVar6 + 8;
        iVar8 = iVar8 + 1;
        pCVar5->sorted_render_actors[0] = (CDemonActor *)*puVar9;
        iVar7 = g_INT_0208f774;
        pCVar5 = (CDemonSet *)pCVar5->cameras;
      } while (iVar8 < iVar4);
    }
  }
  else {
    iVar8 = 0;
    this_ptr->sorted_render_actors[0] = (CDemonActor *)g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
    if (0 < iVar7) {
      iVar7 = 0;
      pCVar5 = this_ptr;
      do {
        iVar6 = g_INT_0208f774;
        puVar9 = (uint *)((int)&g_SDisplayListSortEntry_ARRAY_0208f778[0].actor + iVar7);
        iVar7 = iVar7 + 8;
        iVar8 = iVar8 + 1;
        pCVar5->sorted_render_actors[1] = (CDemonActor *)*puVar9;
        pCVar5 = (CDemonSet *)pCVar5->cameras;
      } while (iVar8 < iVar6);
    }
    iVar7 = g_INT_0208f774 + 1;
  }
  this_ptr->sorted_render_actor_count = iVar7;
  if (g_CGamePtr->profile_mode != 0) {
    local_14 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
    local_14 = local_14 - local_20;
    engine_console_cpp_CConsole_printf_FUN_00436710
              (g_CConsolePtr,"buildDispList %d items : %3.2f ms\n");
    return;
  }
  return;
}
