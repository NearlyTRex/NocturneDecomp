// Name: core_set.cpp_CDemonSet_buildDisplayList_FUN_0056fbd0
// Address: 0056fbd0
// MANUAL RECONSTRUCTION
// Address Range: [[0056fbd0, 0056ffdc]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_buildDisplayList_FUN_0056fbd0(CDemonSet *this_ptr,uint dirty_flags_mask)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_buildDisplayList_FUN_0056fbd0(CDemonSet *this_ptr,uint dirty_flags_mask)

{
  int iVar8;
  CBoundingBox3D *pCVar9;
  int iVar10;
  int iVar1;
  int iVar11;
  CDemonSet *pCVar2;
  CDemonSet *pCVar12;
  int iVar3;
  CBoundingBox3D local_88;
  CVector3f local_70;
  CVector3i local_64;
  CVector3f CStack_50;
  CVector3f CStack_38;
  int local_2c;
  uint local_28;
  int local_24;
  UOrientationVector *pUVar5;
  int *piVar6;
  CLocation *pCVar1;
  CHero *this_ptr_00;
  uint uVar4;
  UOrientationVector *pUVar2;
  CDemonActorTransformState *pCVar3;
  
  if (g_CGamePtr->profile_mode != 0) {
    local_2c = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  g_SetDisplayListCount = 0;
  engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
            (g_CDemonRendererPtr2,&local_64);
  engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
            (g_CDemonRendererPtr2,&local_70);
  local_28 = 0xc;
  if ((g_DynamicLightCount != 0) || (g_CGamePtr->goggles_active != 0)) {
    local_28 = 0xd;
  }
  if (g_SpotLightCount != 0) {
    local_28 = local_28 | 0x22;
  }
  local_24 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->renderable_actor_count) {
    do {
      this_ptr_00 = (CHero *)pCVar2->renderable_actors[0];
      if ((this_ptr_00 != g_HeroActors[g_LocalHeroIndex]) &&
         ((g_CDemonMissionPtr->is_in_editor == 0 || ((this_ptr_00->base).base.is_editor_hidden == 0)
          ))) {
        if (dirty_flags_mask == 0xffffffff) {
          (this_ptr_00->base).base.previous_transform_state.dirty_flags = -1;
        }
        pCVar3 = &(this_ptr_00->base).base.previous_transform_state;
        iVar1 = core_set_cpp_CDemonSet_isCameraPanning_FUN_00571320(this_ptr);
        pCVar1 = &(this_ptr_00->base).base.location;
        pUVar5 = &(this_ptr_00->base).base.previous_transform_state.orientation;
        pUVar2 = &(this_ptr_00->base).base.orient;
        if (iVar1 == 0) {
          if (((((pCVar1->position).x == (pCVar3->position).x) &&
               ((this_ptr_00->base).base.location.position.y ==
                (this_ptr_00->base).base.previous_transform_state.position.y)) &&
              ((this_ptr_00->base).base.location.position.z ==
               (this_ptr_00->base).base.previous_transform_state.position.z)) &&
             ((((pUVar2->vec).x == (pUVar5->vec).x &&
               ((this_ptr_00->base).base.orient.vec.y ==
                (this_ptr_00->base).base.previous_transform_state.orientation.vec.y)) &&
              ((this_ptr_00->base).base.orient.vec.z ==
               (this_ptr_00->base).base.previous_transform_state.orientation.vec.z)))) {
            if (((this_ptr_00->base).base.previous_transform_state.dirty_flags & local_28) == 0)
            goto LAB_0056fc73;
          }
          else {
            piVar6 = &(this_ptr_00->base).base.previous_transform_state.dirty_flags;
            *piVar6 = *piVar6 | dirty_flags_mask;
          }
          uVar4 = (this_ptr_00->base).base.previous_transform_state.dirty_flags & local_28;
joined_r0x0056fede:
          if (uVar4 == 0) goto LAB_0056fc73;
        }
        else {
          if ((((pCVar1->position).x == (pCVar3->position).x) &&
              ((this_ptr_00->base).base.location.position.y ==
               (this_ptr_00->base).base.previous_transform_state.position.y)) &&
             (((this_ptr_00->base).base.location.position.z ==
               (this_ptr_00->base).base.previous_transform_state.position.z &&
              ((((pUVar2->vec).x == (pUVar5->vec).x &&
                ((this_ptr_00->base).base.orient.vec.y ==
                 (this_ptr_00->base).base.previous_transform_state.orientation.vec.y)) &&
               ((this_ptr_00->base).base.orient.vec.z ==
                (this_ptr_00->base).base.previous_transform_state.orientation.vec.z)))))) {
            uVar4 = (this_ptr_00->base).base.render_needs_update;
            goto joined_r0x0056fede;
          }
          (this_ptr_00->base).base.render_needs_update = 1;
        }
        pCVar9 = (*((this_ptr_00->base).base.vtable._ub)->getBoundingBox)
                           ((CDemonActor *)this_ptr_00,&local_88);
        CStack_50.x = ((pCVar9->min).x + (pCVar9->max).x) * 0.5f;
        CStack_50.y = ((pCVar9->min).y + (pCVar9->max).y) * 0.5f;
        CStack_50.z = ((pCVar9->min).z + (pCVar9->max).z) * 0.5f;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr_00,&CStack_38,&CStack_50);
        g_SetDisplayListSortBuffer[g_SetDisplayListCount].actor = (CDemonActor *)this_ptr_00;
        g_SetDisplayListCount = g_SetDisplayListCount + 1;
        g_SetDisplayListSortBuffer[g_SetDisplayListCount].distance_sq =
             ((local_70.x - CStack_38.x) * (local_70.x - CStack_38.x) +
              (local_70.y - CStack_38.y) * (local_70.y - CStack_38.y) +
              (local_70.z - CStack_38.z) * (local_70.z - CStack_38.z));
      }
LAB_0056fc73:
      local_24 = local_24 + 1;
      pCVar2 = (CDemonSet *)pCVar2->cameras;
    } while (local_24 < this_ptr->renderable_actor_count);
  }
  _qsort
            (g_SetDisplayListSortBuffer,g_SetDisplayListCount,8,
             core_set_cpp_qsortByDisplayListEntry_FUN_0056fba0);
  iVar1 = g_SetDisplayListCount;
  if (g_HeroActors[g_LocalHeroIndex] == (CHero *)0x0) {
    iVar3 = 0;
    if (0 < g_SetDisplayListCount) {
      iVar10 = 0;
      pCVar12 = this_ptr;
      do {
        pCVar12 = (CDemonSet *)pCVar12->cameras;
        iVar3 = iVar3 + 1;
        pCVar12->sorted_render_actors[0] =
             *(CDemonActor **)((int)&g_SetDisplayListSortBuffer[0].actor + iVar10);
        iVar10 = iVar10 + 8;
        iVar1 = g_SetDisplayListCount;
        pCVar12 = pCVar12;
      } while (iVar3 < g_SetDisplayListCount);
    }
  }
  else {
    iVar8 = 0;
    this_ptr->sorted_render_actors[0] = (CDemonActor *)g_HeroActors[g_LocalHeroIndex];
    if (0 < iVar1) {
      iVar11 = 0;
      pCVar2 = this_ptr;
      do {
        iVar8 = iVar8 + 1;
        pCVar2->sorted_render_actors[1] =
             *(CDemonActor **)((int)&g_SetDisplayListSortBuffer[0].actor + iVar11);
        iVar11 = iVar11 + 8;
        pCVar2 = (CDemonSet *)pCVar2->cameras;
      } while (iVar8 < g_SetDisplayListCount);
    }
    iVar1 = g_SetDisplayListCount + 1;
  }
  this_ptr->sorted_render_actor_count = iVar1;
  if (g_CGamePtr->profile_mode == 0) {
    return;
  }
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"buildDispList %d items : %3.2f ms\n",g_SetDisplayListCount,
             ((double)(iVar1 - local_2c) * 0.055555555555555601 * 1.52587890625e-05 * 1000) /
             (double)g_CGamePtr->delta_time_float);
  return;
}
