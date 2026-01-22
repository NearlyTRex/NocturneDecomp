// Name: core_set.cpp_CDemonSet_FUN_0056fbd0
// Address: 0056fbd0
// Address Range: [[0056fbd0, 0056ffdc]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056fbd0(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056fbd0(CDemonSet *this_ptr)

{
  CLocation *pCVar1;
  COrientation *pCVar2;
  CDemonActorTransformState *pCVar3;
  CHero *this_ptr_00;
  uint uVar4;
  CVector3f *pCVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  CBoundingBox3D *pCVar9;
  SIZE_T SVar10;
  int iVar11;
  CDemonSet *pCVar12;
  uint in_stack_00000008;
  float local_70 [2];
  float fStack_68;
  CVector3i local_64;
  CVector3f CStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  CVector3f CStack_38;
  int local_2c;
  uint local_28;
  int local_24;
  int local_14;
  
  if (g_CGamePtr->profile_mode != 0) {
    local_2c = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  DAT_03342b4c = 0;
  engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
            (g_CDemonRendererPtr2,&local_64);
  engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
            (g_CDemonRendererPtr2,local_70);
  local_28 = 0xc;
  if ((g_DynamicLightCount != 0) || (g_CGamePtr->block_auto_save != 0)) {
    local_28 = 0xd;
  }
  if (g_ActiveLightCount != 0) {
    local_28 = local_28 | 0x22;
  }
  local_24 = 0;
  pCVar12 = this_ptr;
  if (0 < *(int *)(this_ptr->field19_0x14f0a0 + 0x9c4c)) {
    do {
      this_ptr_00 = *(CHero **)(pCVar12->field19_0x14f0a0 + 0x9c50);
      if ((this_ptr_00 != g_HeroActors[g_LocalHeroIndex]) &&
         ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0 ||
          ((this_ptr_00->base_character).base_actor.field26_0x148 == 0)))) {
        if (in_stack_00000008 == 0xffffffff) {
          (this_ptr_00->base_character).base_actor.previous_transform_state.dirty_flags = -1;
        }
        pCVar3 = &(this_ptr_00->base_character).base_actor.previous_transform_state;
        iVar8 = core_set_cpp_CDemonSet_isCameraPanning_FUN_00571320(this_ptr);
        pCVar1 = &(this_ptr_00->base_character).base_actor.location;
        pCVar5 = &(this_ptr_00->base_character).base_actor.previous_transform_state.orientation;
        pCVar2 = &(this_ptr_00->base_character).base_actor.orient;
        if (iVar8 == 0) {
          if (((((pCVar1->position).x == (pCVar3->position).x) &&
               ((this_ptr_00->base_character).base_actor.location.position.y ==
                (this_ptr_00->base_character).base_actor.previous_transform_state.position.y)) &&
              ((this_ptr_00->base_character).base_actor.location.position.z ==
               (this_ptr_00->base_character).base_actor.previous_transform_state.position.z)) &&
             (((pCVar2->pitch == pCVar5->x &&
               ((this_ptr_00->base_character).base_actor.orient.bank ==
                (this_ptr_00->base_character).base_actor.previous_transform_state.orientation.y)) &&
              ((this_ptr_00->base_character).base_actor.orient.heading ==
               (this_ptr_00->base_character).base_actor.previous_transform_state.orientation.z)))) {
            if (((this_ptr_00->base_character).base_actor.previous_transform_state.dirty_flags &
                local_28) == 0) goto LAB_0056fc73;
          }
          else {
            piVar6 = &(this_ptr_00->base_character).base_actor.previous_transform_state.dirty_flags;
            *piVar6 = *piVar6 | in_stack_00000008;
          }
          uVar4 = (this_ptr_00->base_character).base_actor.previous_transform_state.dirty_flags &
                  local_28;
joined_r0x0056fede:
          if (uVar4 == 0) goto LAB_0056fc73;
        }
        else {
          if ((((pCVar1->position).x == (pCVar3->position).x) &&
              ((this_ptr_00->base_character).base_actor.location.position.y ==
               (this_ptr_00->base_character).base_actor.previous_transform_state.position.y)) &&
             (((this_ptr_00->base_character).base_actor.location.position.z ==
               (this_ptr_00->base_character).base_actor.previous_transform_state.position.z &&
              (((pCVar2->pitch == pCVar5->x &&
                ((this_ptr_00->base_character).base_actor.orient.bank ==
                 (this_ptr_00->base_character).base_actor.previous_transform_state.orientation.y))
               && ((this_ptr_00->base_character).base_actor.orient.heading ==
                   (this_ptr_00->base_character).base_actor.previous_transform_state.orientation.z))
              )))) {
            uVar4 = (this_ptr_00->base_character).base_actor.field25_0x144;
            goto joined_r0x0056fede;
          }
          (this_ptr_00->base_character).base_actor.field25_0x144 = 1;
        }
        pCVar9 = (*((this_ptr_00->base_character).base_actor.vtable)->getBoundingBox)
                           ((CDemonActor *)this_ptr_00,(CBoundingBox3D *)&stack0xffffff78);
        fStack_44 = (pCVar9->min).x + (pCVar9->max).x;
        fStack_40 = (pCVar9->min).y + (pCVar9->max).y;
        CStack_50.x = fStack_44 * 0.5f;
        CStack_50.y = fStack_40 * 0.5f;
        fStack_3c = (pCVar9->min).z + (pCVar9->max).z;
        CStack_50.z = fStack_3c * 0.5f;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr_00,&CStack_38,&CStack_50);
        SVar10 = DAT_03342b4c + 1;
        (&g_VertexNormalArray[20000].y)[DAT_03342b4c * 2] = (float)this_ptr_00;
        DAT_03342b4c = SVar10;
        (&DAT_03342b4c)[SVar10 * 2] =
             (SIZE_T)(((float)local_64.y - CStack_38.z) * ((float)local_64.y - CStack_38.z) +
                     ((float)local_64.x - CStack_38.y) * ((float)local_64.x - CStack_38.y) +
                     (fStack_68 - CStack_38.x) * (fStack_68 - CStack_38.x));
      }
LAB_0056fc73:
      local_24 = local_24 + 1;
      pCVar12 = (CDemonSet *)pCVar12->cameras;
    } while (local_24 < *(int *)(this_ptr->field19_0x14f0a0 + 0x9c4c));
  }
  crt_stdlib_c_qsort_FUN_005fdf38(&DAT_03342b50,DAT_03342b4c,8,core_set_cpp_FUN_0056fba0);
  iVar8 = local_2c;
  SVar10 = DAT_03342b4c;
  if (g_HeroActors[g_LocalHeroIndex] == (CHero *)0x0) {
    iVar7 = 0;
    if (0 < (int)DAT_03342b4c) {
      iVar11 = 0;
      pCVar12 = this_ptr;
      do {
        iVar7 = iVar7 + 1;
        *(uint *)(pCVar12->field73_0x15f6e4 + 4) =
             *(uint *)((int)&DAT_03342b50 + iVar11);
        iVar11 = iVar11 + 8;
        SVar10 = DAT_03342b4c;
        pCVar12 = (CDemonSet *)pCVar12->cameras;
      } while (iVar7 < (int)DAT_03342b4c);
    }
  }
  else {
    iVar7 = 0;
    *(CHero **)(this_ptr->field73_0x15f6e4 + 4) = g_HeroActors[g_LocalHeroIndex];
    if (0 < (int)SVar10) {
      iVar11 = 0;
      pCVar12 = this_ptr;
      do {
        iVar7 = iVar7 + 1;
        *(uint *)(pCVar12->field73_0x15f6e4 + 8) =
             *(uint *)((int)&DAT_03342b50 + iVar11);
        iVar11 = iVar11 + 8;
        pCVar12 = (CDemonSet *)pCVar12->cameras;
      } while (iVar7 < (int)DAT_03342b4c);
    }
    SVar10 = DAT_03342b4c + 1;
  }
  *(SIZE_T *)this_ptr->field73_0x15f6e4 = SVar10;
  if (g_CGamePtr->profile_mode == 0) {
    return;
  }
  local_14 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  local_14 = local_14 - iVar8;
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"buildDispList %d items : %3.2f ms\n",DAT_03342b4c,
             ((double)local_14 * 0.055555555555555601 * 1.52587890625e-05 * 1000) /
             (double)g_CGamePtr->delta_time_float);
  return;
}
