// Name: core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0
// Address: 0050d2d0
// Address Range: [[0050d2d0, 0050d636]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(CDemonSet *this_ptr,uint dirty_flags_mask)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(CDemonSet *this_ptr,uint dirty_flags_mask)

{
  uint *puVar1;
  CHero *this_ptr_00;
  int *piVar2;
  SIZE_T SVar3;
  SIZE_T SVar4;
  CBoundingBox3D *pCVar5;
  CDemonSet *pCVar6;
  int iVar7;
  int iVar8;
  byte auStack_64 [8];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CVector3f CStack_4c;
  float fStack_40;
  float local_3c;
  float fStack_38;
  int local_28;
  uint local_24;
  int local_14;
  
  if (g_CGame_PTR_005b9354->profile_mode != 0) {
    local_28 = wincore_winrun_cpp_getTime_FUN_00558a30();
  }
  _DAT_02080430 = 0;
  engine_drender_cpp_FUN_00460d10();
  engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
            (g_CDemonRenderer_PTR_005ae704,(CVector3f *)(auStack_64 + 4));
  if (_DAT_007f7370 == 0) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 3803;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CSet::buildActorDisplayList - Don't have a camera!");
  }
  local_24 = 0xc;
  if ((_DAT_01fba2d8 != 0) || (g_CGame_PTR_005b9354->goggles_active != 0)) {
    local_24 = 0xd;
  }
  if (_DAT_01fb9b54 != 0) {
    local_24 = local_24 | 0x22;
  }
  iVar8 = 0;
  pCVar6 = this_ptr;
  if (0 < this_ptr->renderable_actor_count) {
    do {
      this_ptr_00 = (CHero *)pCVar6->renderable_actors[0];
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
          pCVar5 = (*((this_ptr_00->base).base.vtable._ub)->getBoundingBox)
                             ((CDemonActor *)this_ptr_00,(CBoundingBox3D *)&stack0xffffff7c);
          fStack_40 = (pCVar5->min).x + (pCVar5->max).x;
          local_3c = (pCVar5->min).y + (pCVar5->max).y;
          CStack_4c.x = fStack_40 * 0.5f;
          CStack_4c.y = local_3c * 0.5f;
          fStack_38 = (pCVar5->min).z + (pCVar5->max).z;
          CStack_4c.z = fStack_38 * 0.5f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                    ((CDemonActor *)this_ptr_00,(CVector3f *)auStack_64,&CStack_4c);
          *(CHero **)(&DAT_02080434 + _DAT_02080430 * 8) = this_ptr_00;
          iVar7 = _DAT_02080430 * 8;
          _DAT_02080430 = _DAT_02080430 + 1;
          *(float *)(&DAT_02080438 + iVar7) =
               (fStack_50 - fStack_5c) * (fStack_50 - fStack_5c) +
               (fStack_54 - (float)auStack_64._4_4_) * (fStack_54 - (float)auStack_64._4_4_) +
               (fStack_58 - (float)auStack_64._0_4_) * (fStack_58 - (float)auStack_64._0_4_);
        }
      }
LAB_0050d39b:
      iVar8 = iVar8 + 1;
      pCVar6 = (CDemonSet *)pCVar6->cameras;
    } while (iVar8 < this_ptr->renderable_actor_count);
  }
  _qsort
            (&DAT_02080434,_DAT_02080430,8,core_set_cpp_qsortByDisplayListEntry_FUN_0050d2a0);
  SVar4 = _DAT_02080430;
  if (g_HeroActors[g_LocalHeroIndex] == (CHero *)0x0) {
    iVar8 = 0;
    if (0 < (int)_DAT_02080430) {
      iVar7 = 0;
      pCVar6 = this_ptr;
      do {
        SVar3 = _DAT_02080430;
        puVar1 = (uint *)(&DAT_02080434 + iVar7);
        iVar7 = iVar7 + 8;
        iVar8 = iVar8 + 1;
        pCVar6->sorted_render_actors[0] = (CDemonActor *)*puVar1;
        pCVar6 = (CDemonSet *)pCVar6->cameras;
        SVar4 = _DAT_02080430;
      } while (iVar8 < (int)SVar3);
    }
  }
  else {
    iVar8 = 0;
    this_ptr->sorted_render_actors[0] = (CDemonActor *)g_HeroActors[g_LocalHeroIndex];
    if (0 < (int)SVar4) {
      iVar7 = 0;
      pCVar6 = this_ptr;
      do {
        SVar4 = _DAT_02080430;
        puVar1 = (uint *)(&DAT_02080434 + iVar7);
        iVar7 = iVar7 + 8;
        iVar8 = iVar8 + 1;
        pCVar6->sorted_render_actors[1] = (CDemonActor *)*puVar1;
        pCVar6 = (CDemonSet *)pCVar6->cameras;
      } while (iVar8 < (int)SVar4);
    }
    SVar4 = _DAT_02080430 + 1;
  }
  this_ptr->sorted_render_actor_count = SVar4;
  if (g_CGame_PTR_005b9354->profile_mode != 0) {
    local_14 = wincore_winrun_cpp_getTime_FUN_00558a30();
    local_14 = local_14 - local_28;
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"buildDispList %d items : %3.2f ms\n");
    return;
  }
  return;
}
