// Name: core_set.cpp_CDemonSet_buildDisplayList_FUN_00539f30
// Address: 00539f30
// Address Range: [[00539f30, 0053a3e9]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_buildDisplayList_FUN_00539f30(CDemonSet *this_ptr,uint dirty_flags_mask)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_buildDisplayList_FUN_00539f30(CDemonSet *this_ptr,uint dirty_flags_mask)

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
  if (*(int *)&g_CGamePtr->field_0x230 != 0) {
    local_20 = wincore_winrun_cpp_getTime_FUN_005806a0();
  }
  _DAT_0211e350 = 0;
  engine_matrix_c_FUN_0046d1a0();
  engine_matrix_c_FUN_0046d1c0();
  local_a4 = local_68;
  *(uint *)((int)&stack0xffffff60 + (uint)bVar10 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff9c + (uint)bVar10 * -8);
  *(uint *)((int)&stack0xffffff64 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
       *(uint *)(&stack0xffffffa0 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
  local_28 = 0xc;
  if ((_DAT_0203ad1c != 0) || (*(int *)&g_CGamePtr->field_0x264 != 0)) {
    local_28 = 0xd;
  }
  if (_DAT_0203a598 != 0) {
    local_28 = local_28 | 0x22;
  }
  iVar6 = 0;
  if (0 < this_ptr->renderable_actor_count) {
    local_18 = &stack0xffffff50;
    local_24 = this_ptr;
    do {
      pCVar1 = local_24->renderable_actors[0];
      if (pCVar1 != *(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) {
        if ((*(int *)&g_CGamePtr->field_0x264 == 0) &&
           (iVar7 = core_set_cpp_CDemonSet_isCameraPanning_FUN_0053b9a0(this_ptr), iVar7 != 0)) {
          if ((((pCVar1->location).position.x == (pCVar1->previous_transform_state).position.y) &&
              ((((pCVar1->location).position.y == (pCVar1->previous_transform_state).position.z &&
                ((pCVar1->location).position.z ==
                 (pCVar1->previous_transform_state).orientation.vec.x)) &&
               ((pCVar1->orient).vec.x == (pCVar1->previous_transform_state).orientation.vec.y))))
             && (((pCVar1->orient).vec.y == (pCVar1->previous_transform_state).orientation.vec.z &&
                 ((pCVar1->orient).vec.z == (float)(pCVar1->previous_transform_state).dirty_flags)))
             ) {
            uVar2 = pCVar1->is_editor_hidden;
            goto LAB_0053a13a;
          }
          pCVar1->is_editor_hidden = 1;
        }
        else {
          if ((((pCVar1->location).position.x == (pCVar1->previous_transform_state).position.y) &&
              ((pCVar1->location).position.y == (pCVar1->previous_transform_state).position.z)) &&
             (((pCVar1->location).position.z == (pCVar1->previous_transform_state).orientation.vec.x
              && ((((pCVar1->orient).vec.x == (pCVar1->previous_transform_state).orientation.vec.y
                   && ((pCVar1->orient).vec.y ==
                       (pCVar1->previous_transform_state).orientation.vec.z)) &&
                  ((pCVar1->orient).vec.z == (float)(pCVar1->previous_transform_state).dirty_flags))
                 )))) {
            if ((pCVar1->render_needs_update & local_28) == 0) goto LAB_0053a008;
          }
          else {
            pCVar1->render_needs_update = pCVar1->render_needs_update | dirty_flags_mask;
          }
          uVar2 = pCVar1->render_needs_update & local_28;
LAB_0053a13a:
          if (uVar2 == 0) goto LAB_0053a008;
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
        fStack_54 = fStack_3c * _DAT_005d0837;
        fStack_50 = fStack_38 * _DAT_005d0837;
        fStack_4c = fStack_34 * _DAT_005d0837;
        fStack_48 = fStack_3c * _DAT_005d0837;
        *(float *)((int)&stack0xffffffbc + (uint)bVar10 * 0xfffffffe * 4) =
             (&stack0xffffffb0)[(uint)bVar10 * 0xfffffffe];
        *(uint *)(&stack0xffffffc0 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
             *(uint *)((int)&stack0xffffffb4 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
        in_stack_ffffff2c = pCVar1;
        core_actor_cpp_FUN_00408b80(pCVar1,pfVar11);
        fStack_90 = fStack_78;
        (&stack0xffffff74)[(uint)bVar10 * 0xfffffffe] =
             (float)*(uint *)(&stack0xffffff8c + (uint)bVar10 * -8);
        *(uint *)((int)&stack0xffffff78 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
             *(uint *)(&stack0xffffff90 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
        *(CDemonActor **)(&DAT_0211e354 + _DAT_0211e350 * 8) = pCVar1;
        iVar7 = _DAT_0211e350 * 8;
        _DAT_0211e350 = _DAT_0211e350 + 1;
        *(float *)(&DAT_0211e358 + iVar7) =
             (fStack_94 - fStack_88) * (fStack_94 - fStack_88) +
             (fStack_98 - fStack_8c) * (fStack_98 - fStack_8c) +
             (fStack_9c - fStack_90) * (fStack_9c - fStack_90);
      }
LAB_0053a008:
      iVar6 = iVar6 + 1;
      local_24 = (CDemonSet *)local_24->cameras;
    } while (iVar6 < this_ptr->renderable_actor_count);
  }
  _qsort
            (&DAT_0211e354,_DAT_0211e350,8,core_set_cpp_qsortByDisplayListEntry_FUN_00539f00);
  iVar6 = _DAT_0211e350;
  pCVar1 = *(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  if (pCVar1 == (CDemonActor *)0x0) {
    iVar7 = 0;
    if (0 < _DAT_0211e350) {
      iVar5 = 0;
      pCVar4 = this_ptr;
      do {
        iVar3 = _DAT_0211e350;
        puVar8 = (uint *)(&DAT_0211e354 + iVar5);
        iVar5 = iVar5 + 8;
        iVar7 = iVar7 + 1;
        pCVar4->sorted_render_actors[0] = (CDemonActor *)*puVar8;
        iVar6 = _DAT_0211e350;
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
        iVar5 = _DAT_0211e350;
        puVar8 = (uint *)(&DAT_0211e354 + iVar6);
        iVar6 = iVar6 + 8;
        iVar7 = iVar7 + 1;
        pCVar4->sorted_render_actors[1] = (CDemonActor *)*puVar8;
        pCVar4 = (CDemonSet *)pCVar4->cameras;
      } while (iVar7 < iVar5);
    }
    iVar6 = _DAT_0211e350 + 1;
  }
  this_ptr->sorted_render_actor_count = iVar6;
  if (*(int *)&g_CGamePtr->field_0x230 != 0) {
    local_14 = wincore_winrun_cpp_getTime_FUN_005806a0();
    local_14 = local_14 - local_20;
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"buildDispList %d items : %3.2f ms\n",_DAT_0211e350,
               ((double)local_14 * _DAT_005d083f * _DAT_005d0847 * _DAT_005d084f) /
               (double)g_CGamePtr->delta_time_float);
    return;
  }
  return;
}
