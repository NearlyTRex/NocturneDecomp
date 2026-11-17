// Name: core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0
// Address: 0050d2d0
// Address Range: [[0050d2d0, 0050d636]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(CDemonSet *this_ptr,uint dirty_flags_mask)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(CDemonSet *this_ptr,uint dirty_flags_mask)

{
  uint *puVar1;
  CHero *this_ptr_00;
  int *piVar2;
  int iVar3;
  CBoundingBox3D *pCVar4;
  CDemonSet *pCVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte auStack_64 [8];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CVector3f CStack_4c;
  float fStack_40;
  CVector3i local_3c;
  int local_28;
  uint local_24;
  int local_14;
  
  if (g_CGamePtr->profile_mode != 0) {
    local_28 = wincore_winrun_cpp_getTime_FUN_00558a30();
  }
  g_INT_02080430 = 0;
  engine_drender_cpp_CDemonRenderer_getCameraOriginFixed_FUN_00460d10
            (g_CDemonRenderer_PTR_005ae704,&local_3c);
  engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
            (g_CDemonRenderer_PTR_005ae704,(CVector3f *)(auStack_64 + 4));
  if (g_CDemonCamera_PTR_007f7370 == (CDemonCamera *)0x0) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 3803;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CSet::buildActorDisplayList - Don't have a camera!");
  }
  local_24 = 0xc;
  if ((g_INT_01fba2d8 != 0) || (g_CGamePtr->goggles_active != 0)) {
    local_24 = 0xd;
  }
  if (g_INT_01fb9b54 != 0) {
    local_24 = local_24 | 0x22;
  }
  iVar8 = 0;
  pCVar5 = this_ptr;
  if (0 < this_ptr->renderable_actor_count) {
    do {
      this_ptr_00 = (CHero *)pCVar5->renderable_actors[0];
      if (this_ptr_00 != g_HeroActors[g_LocalHeroIndex]) {
        if (((((this_ptr_00->base).base.location.position.x ==
               (this_ptr_00->base).base.previous_transform_state.position.x) &&
             ((this_ptr_00->base).base.location.position.y ==
              (this_ptr_00->base).base.previous_transform_state.position.y)) &&
            ((this_ptr_00->base).base.location.position.z ==
             (this_ptr_00->base).base.previous_transform_state.position.z)) &&
           ((((this_ptr_00->base).base.orient.vec.x ==
              (this_ptr_00->base).base.previous_transform_state.orientation.vec.x &&
             ((this_ptr_00->base).base.orient.vec.y ==
              *(float *)((int)&(this_ptr_00->base).base.previous_transform_state.orientation + 4)))
            && ((this_ptr_00->base).base.orient.vec.z ==
                *(float *)((int)&(this_ptr_00->base).base.previous_transform_state.orientation + 8))
            ))) {
          if (((this_ptr_00->base).base.previous_transform_state.dirty_flags & local_24) == 0)
          goto LAB_0050d39b;
        }
        else {
          piVar2 = &(this_ptr_00->base).base.previous_transform_state.dirty_flags;
          *piVar2 = *piVar2 | dirty_flags_mask;
        }
        if (((this_ptr_00->base).base.previous_transform_state.dirty_flags & local_24) != 0) {
          pCVar4 = (*((this_ptr_00->base).base.vtable._ub)->getBoundingBox)
                             ((CDemonActor *)this_ptr_00,(CBoundingBox3D *)&stack0xffffff7c);
          fStack_40 = (pCVar4->min).x + (pCVar4->max).x;
          local_3c.x = (int)((pCVar4->min).y + (pCVar4->max).y);
          CStack_4c.x = fStack_40 * 0.5f;
          CStack_4c.y = (float)local_3c.x * 0.5f;
          local_3c.y = (int)((pCVar4->min).z + (pCVar4->max).z);
          CStack_4c.z = (float)local_3c.y * 0.5f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                    ((CDemonActor *)this_ptr_00,(CVector3f *)auStack_64,&CStack_4c);
          *(CHero **)(&DAT_02080434 + g_INT_02080430 * 8) = this_ptr_00;
          iVar7 = g_INT_02080430 * 2;
          g_INT_02080430 = g_INT_02080430 + 1;
          (&g_INT_02080438)[iVar7] =
               (int)((fStack_50 - fStack_5c) * (fStack_50 - fStack_5c) +
                    (fStack_54 - (float)auStack_64._4_4_) * (fStack_54 - (float)auStack_64._4_4_) +
                    (fStack_58 - (float)auStack_64._0_4_) * (fStack_58 - (float)auStack_64._0_4_));
        }
      }
LAB_0050d39b:
      iVar8 = iVar8 + 1;
      pCVar5 = (CDemonSet *)pCVar5->cameras;
    } while (iVar8 < this_ptr->renderable_actor_count);
  }
  _qsort
            (&DAT_02080434,g_INT_02080430,8,core_set_cpp_qsortByDisplayListEntry_FUN_0050d2a0);
  iVar8 = g_INT_02080430;
  if (g_HeroActors[g_LocalHeroIndex] == (CHero *)0x0) {
    iVar7 = 0;
    if (0 < g_INT_02080430) {
      iVar6 = 0;
      pCVar5 = this_ptr;
      do {
        iVar3 = g_INT_02080430;
        puVar1 = (uint *)(&DAT_02080434 + iVar6);
        iVar6 = iVar6 + 8;
        iVar7 = iVar7 + 1;
        pCVar5->sorted_render_actors[0] = (CDemonActor *)*puVar1;
        pCVar5 = (CDemonSet *)pCVar5->cameras;
        iVar8 = g_INT_02080430;
      } while (iVar7 < iVar3);
    }
  }
  else {
    iVar7 = 0;
    this_ptr->sorted_render_actors[0] = (CDemonActor *)g_HeroActors[g_LocalHeroIndex];
    if (0 < iVar8) {
      iVar8 = 0;
      pCVar5 = this_ptr;
      do {
        iVar6 = g_INT_02080430;
        puVar1 = (uint *)(&DAT_02080434 + iVar8);
        iVar8 = iVar8 + 8;
        iVar7 = iVar7 + 1;
        pCVar5->sorted_render_actors[1] = (CDemonActor *)*puVar1;
        pCVar5 = (CDemonSet *)pCVar5->cameras;
      } while (iVar7 < iVar6);
    }
    iVar8 = g_INT_02080430 + 1;
  }
  this_ptr->sorted_render_actor_count = iVar8;
  if (g_CGamePtr->profile_mode != 0) {
    local_14 = wincore_winrun_cpp_getTime_FUN_00558a30();
    local_14 = local_14 - local_28;
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsolePtr,"buildDispList %d items : %3.2f ms\n",g_INT_02080430,
               ((double)local_14 * 0.055555555555555601 * 1.52587890625e-05 * 1000) /
               (double)g_CGamePtr->delta_time_float);
    return;
  }
  return;
}
