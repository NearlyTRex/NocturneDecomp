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
  CVector3f *pCVar4;
  int *piVar5;
  float fVar6;
  int iVar7;
  CBoundingBox3D *pCVar8;
  SIZE_T SVar9;
  int iVar10;
  uint uVar11;
  BADSPACEBASE *in_ESP;
  CDemonSet *pCVar12;
  CDemonSet *in_stack_00000010;
  uint in_stack_00000014;
  CVector3i *in_stack_ffffff7c;
  ulonglong uStack_7c;
  float afStack_68 [7];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  CVector3f CStack_38;
  float local_2c;
  float local_28;
  float local_24;
  CVector3f CStack_20;
  float local_14;
  
  if (g_CGamePtr->profile_mode != 0) {
    local_28 = (float)wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  DAT_03342b4c = 0;
  engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
            (g_CDemonRendererPtr,in_stack_ffffff7c);
  engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
            (g_CDemonRendererPtr,afStack_68);
  CStack_20.y = 1.68156e-44;
  if ((g_DynamicLightCount != 0) || (g_CGamePtr->block_auto_save != 0)) {
    CStack_20.y = 1.82169e-44;
  }
  if (g_ActiveLightCount != 0) {
    CStack_20.y = (float)((uint)CStack_20.y | 0x22);
  }
  CStack_20.z = 0.0;
  pCVar12 = in_stack_00000010;
  if (0 < *(int *)(in_stack_00000010->field19_0x14f0a0 + 0x9c4c)) {
    do {
      this_ptr_00 = *(CHero **)(pCVar12->field19_0x14f0a0 + 0x9c50);
      if ((this_ptr_00 != g_HeroActors[g_LocalHeroIndex]) &&
         ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0 ||
          ((this_ptr_00->base_character).base_actor.field26_0x148 == 0)))) {
        if (in_stack_00000014 == 0xffffffff) {
          (this_ptr_00->base_character).base_actor.previous_transform_state.dirty_flags = -1;
        }
        pCVar3 = &(this_ptr_00->base_character).base_actor.previous_transform_state;
        iVar7 = core_set_cpp_CDemonSet_isCameraPanning_FUN_00571320(in_stack_00000010);
        pCVar1 = &(this_ptr_00->base_character).base_actor.location;
        pCVar4 = &(this_ptr_00->base_character).base_actor.previous_transform_state.orientation;
        pCVar2 = &(this_ptr_00->base_character).base_actor.orient;
        if (iVar7 == 0) {
          if (((((pCVar1->position).x == (pCVar3->position).x) &&
               ((this_ptr_00->base_character).base_actor.location.position.y ==
                (this_ptr_00->base_character).base_actor.previous_transform_state.position.y)) &&
              ((this_ptr_00->base_character).base_actor.location.position.z ==
               (this_ptr_00->base_character).base_actor.previous_transform_state.position.z)) &&
             (((pCVar2->pitch == pCVar4->x &&
               ((this_ptr_00->base_character).base_actor.orient.bank ==
                (this_ptr_00->base_character).base_actor.previous_transform_state.orientation.y)) &&
              ((this_ptr_00->base_character).base_actor.orient.heading ==
               (this_ptr_00->base_character).base_actor.previous_transform_state.orientation.z)))) {
            if (((this_ptr_00->base_character).base_actor.previous_transform_state.dirty_flags &
                (uint)CStack_20.y) == 0) goto LAB_0056fc73;
          }
          else {
            piVar5 = &(this_ptr_00->base_character).base_actor.previous_transform_state.dirty_flags;
            *piVar5 = *piVar5 | in_stack_00000014;
          }
          uVar11 = (this_ptr_00->base_character).base_actor.previous_transform_state.dirty_flags &
                   (uint)CStack_20.y;
joined_r0x0056fede:
          if (uVar11 == 0) goto LAB_0056fc73;
        }
        else {
          if ((((pCVar1->position).x == (pCVar3->position).x) &&
              ((this_ptr_00->base_character).base_actor.location.position.y ==
               (this_ptr_00->base_character).base_actor.previous_transform_state.position.y)) &&
             (((this_ptr_00->base_character).base_actor.location.position.z ==
               (this_ptr_00->base_character).base_actor.previous_transform_state.position.z &&
              (((pCVar2->pitch == pCVar4->x &&
                ((this_ptr_00->base_character).base_actor.orient.bank ==
                 (this_ptr_00->base_character).base_actor.previous_transform_state.orientation.y))
               && ((this_ptr_00->base_character).base_actor.orient.heading ==
                   (this_ptr_00->base_character).base_actor.previous_transform_state.orientation.z))
              )))) {
            uVar11 = (this_ptr_00->base_character).base_actor.field25_0x144;
            goto joined_r0x0056fede;
          }
          (this_ptr_00->base_character).base_actor.field25_0x144 = 1;
        }
        pCVar8 = (*((this_ptr_00->base_character).base_actor.vtable)->getBoundingBox)
                           ((CDemonActor *)this_ptr_00,(CBoundingBox3D *)&uStack_7c);
        local_2c = (pCVar8->min).x + (pCVar8->max).x;
        local_28 = (pCVar8->min).y + (pCVar8->max).y;
        CStack_38.x = local_2c * 0.5f;
        CStack_38.y = local_28 * 0.5f;
        local_24 = (pCVar8->min).z + (pCVar8->max).z;
        CStack_38.z = local_24 * 0.5f;
        uStack_7c._4_4_ = 7.989013e-39;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr_00,&CStack_20,&CStack_38);
        SVar9 = DAT_03342b4c + 1;
        (&g_VertexNormalArray[20000].y)[DAT_03342b4c * 2] = (float)this_ptr_00;
        DAT_03342b4c = SVar9;
        (&DAT_03342b4c)[SVar9 * 2] =
             (SIZE_T)((fStack_44 - local_14) * (fStack_44 - local_14) +
                     (fStack_48 - CStack_20.z) * (fStack_48 - CStack_20.z) +
                     (fStack_4c - CStack_20.y) * (fStack_4c - CStack_20.y));
      }
LAB_0056fc73:
      CStack_20.z = (float)((int)CStack_20.z + 1);
      pCVar12 = (CDemonSet *)pCVar12->cameras;
    } while ((int)CStack_20.z < *(int *)(in_stack_00000010->field19_0x14f0a0 + 0x9c4c));
  }
  crt_stdlib_c_qsort_FUN_005fdf38(&DAT_03342b50,DAT_03342b4c,8,core_set_cpp_FUN_0056fba0);
  fVar6 = CStack_20.y;
  SVar9 = DAT_03342b4c;
  if (g_HeroActors[g_LocalHeroIndex] == (CHero *)0x0) {
    iVar7 = 0;
    if (0 < (int)DAT_03342b4c) {
      iVar10 = 0;
      uVar11 = in_stack_00000014;
      do {
        iVar7 = iVar7 + 1;
        *(uint *)(uVar11 + 0x15f6e8) = *(uint *)((int)&DAT_03342b50 + iVar10);
        iVar10 = iVar10 + 8;
        SVar9 = DAT_03342b4c;
        uVar11 = uVar11 + 4;
      } while (iVar7 < (int)DAT_03342b4c);
    }
  }
  else {
    iVar7 = 0;
    *(CHero **)(in_stack_00000014 + 0x15f6e8) = g_HeroActors[g_LocalHeroIndex];
    if (0 < (int)SVar9) {
      iVar10 = 0;
      uVar11 = in_stack_00000014;
      do {
        iVar7 = iVar7 + 1;
        *(uint *)(uVar11 + 0x15f6ec) = *(uint *)((int)&DAT_03342b50 + iVar10);
        iVar10 = iVar10 + 8;
        uVar11 = uVar11 + 4;
      } while (iVar7 < (int)DAT_03342b4c);
    }
    SVar9 = DAT_03342b4c + 1;
  }
  *(SIZE_T *)(in_stack_00000014 + 0x15f6e4) = SVar9;
  if (g_CGamePtr->profile_mode == 0) {
    return;
  }
  uStack_7c._0_4_ = 7.989523e-39;
  iVar7 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  uStack_7c = ((double)(iVar7 - (int)fVar6) * 0.055555555555555601 * 1.52587890625e-05 * 1000) /
              (double)g_CGamePtr->delta_time_float;
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"buildDispList %d items : %3.2f ms\n",DAT_03342b4c);
  return;
}
