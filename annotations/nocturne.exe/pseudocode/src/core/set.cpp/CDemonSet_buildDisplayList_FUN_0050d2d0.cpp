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
  int *piVar2;
  CDemonActor *pCVar3;
  SIZE_T SVar4;
  SIZE_T SVar5;
  CBoundingBox3D *pCVar6;
  CDemonSet *pCVar7;
  int iVar8;
  int iVar9;
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
  iVar9 = 0;
  pCVar7 = this_ptr;
  if (0 < this_ptr->renderable_actor_count) {
    do {
      pCVar3 = pCVar7->renderable_actors[0];
      if (pCVar3 != *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
        if (((((pCVar3->location).position.x == (pCVar3->previous_transform_state).position.x) &&
             ((pCVar3->location).position.y == (pCVar3->previous_transform_state).position.y)) &&
            ((pCVar3->location).position.z == (pCVar3->previous_transform_state).position.z)) &&
           ((((pCVar3->orient).vec.x == (pCVar3->previous_transform_state).orientation.vec.x &&
             ((pCVar3->orient).vec.y == (pCVar3->previous_transform_state).orientation.vec.y)) &&
            ((pCVar3->orient).vec.z == (pCVar3->previous_transform_state).orientation.vec.z)))) {
          if (((pCVar3->previous_transform_state).dirty_flags & local_24) == 0) goto LAB_0050d39b;
        }
        else {
          piVar2 = &(pCVar3->previous_transform_state).dirty_flags;
          *piVar2 = *piVar2 | dirty_flags_mask;
        }
        if (((pCVar3->previous_transform_state).dirty_flags & local_24) != 0) {
          pCVar6 = (*((pCVar3->vtable)._ub)->getBoundingBox)
                             (pCVar3,(CBoundingBox3D *)&stack0xffffff7c);
          fStack_40 = (pCVar6->min).x + (pCVar6->max).x;
          local_3c = (pCVar6->min).y + (pCVar6->max).y;
          CStack_4c.x = fStack_40 * 0.5f;
          CStack_4c.y = local_3c * 0.5f;
          fStack_38 = (pCVar6->min).z + (pCVar6->max).z;
          CStack_4c.z = fStack_38 * 0.5f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                    (pCVar3,(CVector3f *)auStack_64,&CStack_4c);
          *(CDemonActor **)(&DAT_02080434 + _DAT_02080430 * 8) = pCVar3;
          iVar8 = _DAT_02080430 * 8;
          _DAT_02080430 = _DAT_02080430 + 1;
          *(float *)(&DAT_02080438 + iVar8) =
               (fStack_50 - fStack_5c) * (fStack_50 - fStack_5c) +
               (fStack_54 - (float)auStack_64._4_4_) * (fStack_54 - (float)auStack_64._4_4_) +
               (fStack_58 - (float)auStack_64._0_4_) * (fStack_58 - (float)auStack_64._0_4_);
        }
      }
LAB_0050d39b:
      iVar9 = iVar9 + 1;
      pCVar7 = (CDemonSet *)pCVar7->cameras;
    } while (iVar9 < this_ptr->renderable_actor_count);
  }
  _qsort
            (&DAT_02080434,_DAT_02080430,8,core_set_cpp_qsortByDisplayListEntry_FUN_0050d2a0);
  SVar5 = _DAT_02080430;
  pCVar3 = *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  if (pCVar3 == (CDemonActor *)0x0) {
    iVar9 = 0;
    if (0 < (int)_DAT_02080430) {
      iVar8 = 0;
      pCVar7 = this_ptr;
      do {
        SVar4 = _DAT_02080430;
        puVar1 = (uint *)(&DAT_02080434 + iVar8);
        iVar8 = iVar8 + 8;
        iVar9 = iVar9 + 1;
        pCVar7->sorted_render_actors[0] = (CDemonActor *)*puVar1;
        pCVar7 = (CDemonSet *)pCVar7->cameras;
        SVar5 = _DAT_02080430;
      } while (iVar9 < (int)SVar4);
    }
  }
  else {
    iVar9 = 0;
    this_ptr->sorted_render_actors[0] = pCVar3;
    if (0 < (int)SVar5) {
      iVar8 = 0;
      pCVar7 = this_ptr;
      do {
        SVar5 = _DAT_02080430;
        puVar1 = (uint *)(&DAT_02080434 + iVar8);
        iVar8 = iVar8 + 8;
        iVar9 = iVar9 + 1;
        pCVar7->sorted_render_actors[1] = (CDemonActor *)*puVar1;
        pCVar7 = (CDemonSet *)pCVar7->cameras;
      } while (iVar9 < (int)SVar5);
    }
    SVar5 = _DAT_02080430 + 1;
  }
  this_ptr->sorted_render_actor_count = SVar5;
  if (g_CGame_PTR_005b9354->profile_mode != 0) {
    local_14 = wincore_winrun_cpp_getTime_FUN_00558a30();
    local_14 = local_14 - local_28;
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"buildDispList %d items : %3.2f ms\n");
    return;
  }
  return;
}
