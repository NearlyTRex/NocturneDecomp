// Name: core_stranger.cpp_CStranger_tryPlaceObject_FUN_0058d910
// Address: 0058d910
// Address Range: [[0058d910, 0058e234]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_tryPlaceObject_FUN_0058d910(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_stranger_cpp_CStranger_tryPlaceObject_FUN_0058d910(CStranger *this_ptr)

{
  double dVar1;
  double dVar2;
  double dVar3;
  CLocation *pCVar4;
  UOrientationVector *pUVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_1160 [1002];
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float local_148;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_124;
  float local_120;
  float local_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float local_10c;
  float local_108;
  float local_104;
  float fStack_100;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  float local_ac;
  float local_a0;
  float local_98;
  float fStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float local_7c;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float fStack_4c;
  float local_48;
  CActorDestination *local_44;
  CActorDestination *pCStack_40;
  CLocation *pCStack_3c;
  CLocation *local_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  CActorDestination *pCStack_28;
  CActorDestination *local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar8 = 0;
  if (*(int *)&this_ptr->field_0x1ff78 != 0) {
    return 0;
  }
  if (*(int *)&this_ptr->field_0x2628 == 0) {
    return 0;
  }
  if ((*(int *)&this_ptr->field_0x2c98 != 0xe) &&
     (local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                           ((CCharacter *)this_ptr,0), local_14 < (float)_DAT_005f6df9)) {
    return 0;
  }
  local_14 = (float)core_motion_cpp_FUN_00524a40(&this_ptr->field_0x158,0);
  if (local_14 < 1.0) {
    return 0;
  }
  iVar6 = *(int *)&this_ptr->field_0x2628;
  if ((iVar6 == 0) ||
     (iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x84))(iVar6,this_ptr), iVar6 != 4)) {
    local_18 = 0;
    for (local_1c = 0; local_1c < g_CDemonSetPtr->actor_count; local_1c = local_1c + 1) {
      local_44 = (CActorDestination *)
                 core_actor_cpp_castToClassHash_FUN_0040c600
                           (*(uint *)((int)g_CDemonSetPtr->actors + local_18),
                            g_CActorDestinationClassInfo.name_hash);
      local_24 = local_44;
      if ((local_44 != (CActorDestination *)0x0) &&
         (iVar6 = core_dest_cpp_CActorDestination_acceptsActor_FUN_0045d550
                            (local_44,*(CDemonActor **)&this_ptr->field_0x2628), iVar6 != 0)) {
        core_actor_cpp_FUN_00408bb0(this_ptr,*(int *)&this_ptr->field_0x2628 + 0x20);
        pCVar4 = &(local_24->base).location;
        local_c4 = local_130;
        *(uint *)((int)&stack0xffffff40 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xfffffed4 + (uint)bVar8 * -8);
        *(uint *)((int)&stack0xffffff44 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xfffffed8 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        local_38 = pCVar4;
        core_actor_cpp_FUN_00408bb0(this_ptr,pCVar4);
        local_dc = local_58;
        *(uint *)((int)&stack0xffffff28 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffffac + (uint)bVar8 * -8);
        *(uint *)((int)&stack0xffffff2c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffffb0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        local_70 = local_dc - local_c4;
        local_6c = local_d8 - local_c0;
        local_68 = local_d4 - local_bc;
        local_10c = local_dc - local_c4;
        *(uint *)((int)&stack0xfffffef8 + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xffffff94 + (uint)bVar8 * -8);
        *(uint *)((int)&stack0xfffffefc + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xffffff98 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        dVar1 = (double)local_104;
        dVar2 = (double)local_108;
        dVar3 = (double)local_10c;
        engine_console_cpp_FUN_00445430
                  (g_CConsolePtr,"Delta to dest : %3.2f,%3.2f,%3.2f\n",dVar3,dVar2,dVar1);
        if ((((0.0 < local_104) && ((dVar1 < _DAT_005f6e01 && (ABS(dVar3) < _DAT_005f6e09)))) &&
            (0.0 < dVar2)) && (dVar2 < _DAT_005f6e11)) {
          *(uint *)&this_ptr->field_0x1ff5c = 2;
          if ((CLocation *)&this_ptr->field_0x1ff90 != local_38) {
            *(float *)&this_ptr->field_0x1ff90 = (local_38->position).x;
            *(float *)&this_ptr->field_0x1ff94 = (local_38->position).y;
            *(float *)&this_ptr->field_0x1ff98 = (local_38->position).z;
          }
          pUVar5 = &(local_44->base).orient;
          if ((UOrientationVector *)&this_ptr->field_0x1ff9c != pUVar5) {
            *(float *)&this_ptr->field_0x1ff9c = (pUVar5->vec).x;
            *(float *)&this_ptr->field_0x1ffa0 = (local_44->base).orient.vec.y;
            *(float *)&this_ptr->field_0x1ffa4 = (local_44->base).orient.vec.z;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,0x21,1);
          return 1;
        }
      }
      local_18 = local_18 + 4;
    }
  }
  else {
    iStack_34 = 0;
    for (iStack_30 = 0; iStack_30 < g_CDemonSetPtr->actor_count; iStack_30 = iStack_30 + 1) {
      pCStack_40 = (CActorDestination *)
                   core_actor_cpp_castToClassHash_FUN_0040c600
                             (*(uint *)((int)g_CDemonSetPtr->actors + iStack_34),
                              g_CActorDestinationClassInfo.name_hash);
      pCStack_28 = pCStack_40;
      if ((pCStack_40 != (CActorDestination *)0x0) &&
         (iVar6 = core_dest_cpp_CActorDestination_acceptsActor_FUN_0045d550
                            (pCStack_40,*(CDemonActor **)&this_ptr->field_0x2628), iVar6 != 0)) {
        core_actor_cpp_FUN_00408bb0(this_ptr,*(int *)&this_ptr->field_0x2628 + 0x20);
        pCVar4 = &(pCStack_28->base).location;
        fStack_88 = fStack_100;
        *(uint *)((int)&stack0xffffff7c + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffff04 + (uint)bVar8 * -8);
        *(uint *)((int)&stack0xffffff80 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffff08 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        pCStack_3c = pCVar4;
        core_actor_cpp_FUN_00408bb0(this_ptr,pCVar4);
        fStack_118 = fStack_94;
        *(uint *)((int)&stack0xfffffeec + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffff70 + (uint)bVar8 * -8);
        *(uint *)((int)&stack0xfffffef0 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffff74 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        fStack_174 = fStack_114 - fStack_84;
        fStack_170 = fStack_110 - fStack_80;
        fStack_16c = fStack_118 - fStack_88;
        *(uint *)((int)&stack0xfffffe98 + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xfffffe8c + (uint)bVar8 * -8);
        *(uint *)((int)&stack0xfffffe9c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xfffffe90 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        if ((0.0 < fStack_164) &&
           ((((fStack_164 < (float)_DAT_005f6e01 && (ABS(fStack_16c) < (float)_DAT_005f6e09)) &&
             (0.0 < (double)fStack_168)) && ((double)fStack_168 < _DAT_005f6e11)))) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,0x25,1);
          core_actor_cpp_FUN_00408bb0(this_ptr,pCStack_3c);
          fStack_160 = fStack_154;
          (&stack0xfffffea4)[(uint)bVar8 * 0xfffffffe] =
               (float)*(uint *)(&stack0xfffffeb0 + (uint)bVar8 * -8);
          *(uint *)((int)&stack0xfffffea8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               *(uint *)(&stack0xfffffeb4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          if (&this_ptr->carry_object_world_center != (CVector3f *)&stack0xfffffea0) {
            (this_ptr->carry_object_world_center).x = fStack_160;
            (this_ptr->carry_object_world_center).y = fStack_15c;
            (this_ptr->carry_object_world_center).z = fStack_158;
          }
          fStack_4c = (this_ptr->carry_object_bbox).max.y - (this_ptr->carry_object_bbox).min.y;
          local_14 = core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00585170
                               (*(CDemonActor **)&this_ptr->field_0x2628);
          iVar6 = *(int *)&this_ptr->field_0x1ff5c;
          (this_ptr->carry_object_world_center).y =
               (fStack_4c - local_14) + (this_ptr->carry_object_world_center).y;
          if (iVar6 != 0) {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"?actionPending = %d\nstranger.cpp line %d" + 1,iVar6,0xee0);
          }
          pCVar4 = &(pCStack_40->base).location;
          *(uint *)&this_ptr->field_0x1ff5c = 2;
          if ((CLocation *)&this_ptr->field_0x1ff90 != pCVar4) {
            *(float *)&this_ptr->field_0x1ff90 = (pCVar4->position).x;
            *(float *)&this_ptr->field_0x1ff94 = (pCStack_40->base).location.position.y;
            *(float *)&this_ptr->field_0x1ff98 = (pCStack_40->base).location.position.z;
          }
          pUVar5 = &(pCStack_40->base).orient;
          if ((UOrientationVector *)&this_ptr->field_0x1ff9c != pUVar5) {
            *(float *)&this_ptr->field_0x1ff9c = (pUVar5->vec).x;
            *(float *)&this_ptr->field_0x1ffa0 = (pCStack_40->base).orient.vec.y;
            *(float *)&this_ptr->field_0x1ffa4 = (pCStack_40->base).orient.vec.z;
          }
          return 1;
        }
      }
      iStack_34 = iStack_34 + 4;
    }
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
            (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0x2628);
  puVar10 = &stack0xffffff0c;
  puVar7 = (uint *)(*(int *)&this_ptr->field_0x2628 + 0x24 + (uint)bVar8 * -8);
  local_13c = *(float *)(*(int *)&this_ptr->field_0x2628 + 0x20);
  *(uint *)((int)&stack0xfffffec8 + (uint)bVar8 * -8) = *puVar7;
  *(uint *)((int)&stack0xfffffecc + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       puVar7[(uint)bVar8 * -2 + 1];
  local_f4 = 0;
  local_f0 = 0;
  local_ec = 0x3f800000;
  core_actor_cpp_FUN_00408ac0(this_ptr,puVar10);
  local_a0 = local_148;
  *(uint *)(&stack0xffffff64 + (uint)bVar8 * -8) =
       *(uint *)(&stack0xfffffebc + (uint)bVar8 * -8);
  *(uint *)((int)&stack0xffffff68 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       *(uint *)(&stack0xfffffec0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  local_138 = *(float *)&this_ptr->field_0x24;
  local_13c = local_13c + local_a0;
  local_b8 = 0;
  local_b4 = 0;
  local_134 = local_134 + local_98;
  local_b0 = 0x3fc00000;
  core_actor_cpp_FUN_00408ac0(this_ptr,&stack0xffffff48);
  uVar11 = 0x40400000;
  uVar9 = 0x3dcccccd;
  local_64 = local_7c;
  *(uint *)((int)&stack0xffffffa0 + (uint)bVar8 * -8) =
       *(uint *)(&stack0xffffff88 + (uint)bVar8 * -8);
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       *(uint *)(&stack0xffffff8c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  local_14 = (float)core_setcolid_cpp_FUN_00558450
                              (g_CDemonSetPtr,local_13c,local_134,local_64,local_5c,0x3f800000,uVar9
                               ,uVar11);
  if (local_14 < 1.0) {
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    return 0;
  }
  uVar9 = 0x3f000000;
  local_e8 = local_13c + local_64;
  local_e4 = local_138 + local_60;
  local_e0 = local_134 + local_5c;
  local_ac = local_13c + local_64;
  *(float *)((int)&stack0xffffff58 + (uint)bVar8 * 0xfffffffe * 4) =
       (&stack0xffffff1c)[(uint)bVar8 * 0xfffffffe];
  *(uint *)(&stack0xffffff5c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       *(uint *)((int)&stack0xffffff20 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  local_48 = (float)core_setcolid_cpp_FUN_005562c0(g_CDemonSetPtr,&stack0xffffff54,uVar9);
  local_14 = local_48;
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  if (ABS(local_48 - *(float *)&this_ptr->field_0x24) <= 1.0) {
    local_2c = 0;
    local_20 = 0;
    do {
      if (g_CDemonSetPtr->actor_count <= local_2c) {
        iVar6 = *(int *)&this_ptr->field_0x2628;
        *(uint *)&this_ptr->field_0x1ff5c = 6;
        if ((iVar6 == 0) ||
           (iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x84))(iVar6,this_ptr), iVar6 != 4)) {
          iVar6 = 0x1f;
        }
        else {
          iVar6 = 0x24;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,iVar6,1);
        this_ptr->action_timer = 4.0;
        return 1;
      }
      iVar6 = core_actor_cpp_castToClassHash_FUN_0040c600
                        (*(uint *)((int)g_CDemonSetPtr->actors + local_20),
                         g_CCrateClassInfo.name_hash);
      if (iVar6 != 0) {
        local_d0 = *(float *)(iVar6 + 0x20) - local_13c;
        local_cc = *(float *)(iVar6 + 0x24) - local_138;
        local_c8 = *(float *)(iVar6 + 0x28) - local_134;
        local_124 = local_d0;
        *(uint *)((int)&stack0xfffffee0 + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xffffff34 + (uint)bVar8 * -8);
        *(uint *)((int)&stack0xfffffee4 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xffffff38 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        if (SQRT(local_11c * local_11c + local_124 * local_124 + local_120 * local_120) <
            (float)_DAT_005f6e09) {
          return 0;
        }
      }
      local_2c = local_2c + 1;
      local_20 = local_20 + 4;
    } while( true );
  }
  return 0;
}
