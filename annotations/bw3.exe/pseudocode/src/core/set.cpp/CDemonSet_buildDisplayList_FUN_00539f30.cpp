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
  int *piVar1;
  CDemonActor *pCVar2;
  uint uVar3;
  SIZE_T SVar4;
  SIZE_T SVar5;
  CDemonSet *pCVar6;
  int iVar7;
  float *unaff_EBP;
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
  CVector3i local_74;
  uint local_68;
  float afStack_64 [4];
  float fStack_54;
  float afStack_50 [5];
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
    local_20 = wincore_winrun_cpp_getTime_FUN_005806a0();
  }
  _DAT_0211e350 = 0;
  engine_drender_cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046d1a0(DAT_005f2afc,&local_74);
  engine_drender_cpp_FUN_0046d1c0();
  local_a4 = local_68;
  *(float *)((int)&stack0xffffff60 + (uint)bVar11 * 0xfffffffe * 4) = afStack_64[(uint)bVar11 * -2];
  *(float *)((int)&stack0xffffff64 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
       afStack_64[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  local_28 = 0xc;
  if ((_DAT_0203ad1c != 0) || (g_CGamePtr->goggles_active != 0)) {
    local_28 = 0xd;
  }
  if (_DAT_0203a598 != 0) {
    local_28 = local_28 | 0x22;
  }
  iVar8 = 0;
  if (0 < this_ptr->renderable_actor_count) {
    local_18 = &stack0xffffff50;
    local_24 = this_ptr;
    do {
      pCVar2 = local_24->renderable_actors[0];
      if (pCVar2 != *(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) {
        if ((g_CGamePtr->goggles_active == 0) &&
           (iVar7 = core_set_cpp_CDemonSet_isCameraPanning_FUN_0053b9a0(this_ptr), iVar7 != 0)) {
          if ((((pCVar2->location).position.x == (pCVar2->previous_transform_state).position.x) &&
              ((((pCVar2->location).position.y == (pCVar2->previous_transform_state).position.y &&
                ((pCVar2->location).position.z == (pCVar2->previous_transform_state).position.z)) &&
               ((pCVar2->orient).vec.x == (pCVar2->previous_transform_state).orientation.vec.x))))
             && (((pCVar2->orient).vec.y == (pCVar2->previous_transform_state).orientation.vec.y &&
                 ((pCVar2->orient).vec.z == (pCVar2->previous_transform_state).orientation.vec.z))))
          {
            uVar3 = pCVar2->render_needs_update;
            goto LAB_0053a13a;
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
            if (((pCVar2->previous_transform_state).dirty_flags & local_28) == 0) goto LAB_0053a008;
          }
          else {
            piVar1 = &(pCVar2->previous_transform_state).dirty_flags;
            *piVar1 = *piVar1 | dirty_flags_mask;
          }
          uVar3 = (pCVar2->previous_transform_state).dirty_flags & local_28;
LAB_0053a13a:
          if (uVar3 == 0) goto LAB_0053a008;
        }
        (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,(CBoundingBox3D *)in_stack_ffffff2c);
        puVar9 = (uint *)&stack0xffffff34;
        puVar10 = (uint *)&stack0xffffff44;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
        }
        fStack_84 = fStack_b4 + *unaff_EBP;
        fStack_80 = fStack_b0 + unaff_EBP[1];
        fStack_7c = fStack_ac + unaff_EBP[2];
        fStack_3c = fStack_b4 + *unaff_EBP;
        afStack_50[(uint)bVar11 * -2 + 6] = afStack_64[(uint)bVar11 * -2 + -7];
        afStack_50[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
             afStack_64[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -6];
        pfVar12 = afStack_50 + 2;
        fStack_54 = fStack_3c * _DAT_005d0837;
        afStack_50[0] = fStack_38 * _DAT_005d0837;
        afStack_50[1] = fStack_34 * _DAT_005d0837;
        afStack_50[2] = fStack_3c * _DAT_005d0837;
        afStack_50[(uint)bVar11 * -2 + 3] = afStack_50[(uint)bVar11 * -2];
        afStack_50[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
             afStack_50[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        in_stack_ffffff2c = pCVar2;
        core_actor_cpp_FUN_00408b80(pCVar2,pfVar12);
        fStack_90 = fStack_78;
        (&stack0xffffff74)[(uint)bVar11 * 0xfffffffe] =
             (float)*(uint *)((int)&local_74 + (uint)bVar11 * -8);
        *(uint *)((int)&stack0xffffff78 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
             *(uint *)((int)&local_74 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 4);
        *(CDemonActor **)(&DAT_0211e354 + _DAT_0211e350 * 8) = pCVar2;
        iVar7 = _DAT_0211e350 * 8;
        _DAT_0211e350 = _DAT_0211e350 + 1;
        *(float *)(&DAT_0211e358 + iVar7) =
             (fStack_94 - fStack_88) * (fStack_94 - fStack_88) +
             (fStack_98 - fStack_8c) * (fStack_98 - fStack_8c) +
             (fStack_9c - fStack_90) * (fStack_9c - fStack_90);
      }
LAB_0053a008:
      iVar8 = iVar8 + 1;
      local_24 = (CDemonSet *)local_24->cameras;
    } while (iVar8 < this_ptr->renderable_actor_count);
  }
  _qsort
            (&DAT_0211e354,_DAT_0211e350,8,core_set_cpp_qsortByDisplayListEntry_FUN_00539f00);
  SVar5 = _DAT_0211e350;
  pCVar2 = *(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  if (pCVar2 == (CDemonActor *)0x0) {
    iVar8 = 0;
    if (0 < (int)_DAT_0211e350) {
      iVar7 = 0;
      pCVar6 = this_ptr;
      do {
        SVar4 = _DAT_0211e350;
        puVar9 = (uint *)(&DAT_0211e354 + iVar7);
        iVar7 = iVar7 + 8;
        iVar8 = iVar8 + 1;
        pCVar6->sorted_render_actors[0] = (CDemonActor *)*puVar9;
        SVar5 = _DAT_0211e350;
        pCVar6 = (CDemonSet *)pCVar6->cameras;
      } while (iVar8 < (int)SVar4);
    }
  }
  else {
    iVar8 = 0;
    this_ptr->sorted_render_actors[0] = pCVar2;
    if (0 < (int)SVar5) {
      iVar7 = 0;
      pCVar6 = this_ptr;
      do {
        SVar5 = _DAT_0211e350;
        puVar9 = (uint *)(&DAT_0211e354 + iVar7);
        iVar7 = iVar7 + 8;
        iVar8 = iVar8 + 1;
        pCVar6->sorted_render_actors[1] = (CDemonActor *)*puVar9;
        pCVar6 = (CDemonSet *)pCVar6->cameras;
      } while (iVar8 < (int)SVar5);
    }
    SVar5 = _DAT_0211e350 + 1;
  }
  this_ptr->sorted_render_actor_count = SVar5;
  if (g_CGamePtr->profile_mode != 0) {
    local_14 = wincore_winrun_cpp_getTime_FUN_005806a0();
    local_14 = local_14 - local_20;
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"buildDispList %d items : %3.2f ms\n");
    return;
  }
  return;
}
