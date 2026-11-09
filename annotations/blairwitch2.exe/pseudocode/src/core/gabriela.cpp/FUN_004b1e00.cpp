// Name: core_gabriela.cpp_FUN_004b1e00
// Address: 004b1e00
// Address Range: [[004b1e00, 004b20c2]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_FUN_004b1e00(CGabriella *this_ptr,float delta_time,int has_carried_objects)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_FUN_004b1e00(CGabriella *this_ptr,float delta_time,int has_carried_objects)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1038 [988];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  uint uStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_24;
  float local_20;
  uint local_1c;
  uint local_18;
  
  bVar5 = 0;
  fVar1 = delta_time / _DAT_005f734c;
  *(float *)&this_ptr->field_0x2565c = *(float *)&this_ptr->field_0x2565c - fVar1;
  *(float *)&this_ptr->field_0x25660 = *(float *)&this_ptr->field_0x25660 - fVar1;
  if (*(float *)&this_ptr->field_0x2565c < 0.0) {
    *(uint *)&this_ptr->field_0x2565c = 0;
  }
  if (*(float *)&this_ptr->field_0x25660 < 0.0) {
    *(uint *)&this_ptr->field_0x25660 = 0;
  }
  if (has_carried_objects != 0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
    if (*(CDemonActor **)&this_ptr->field_0x2620 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0x2620);
    }
    if (*(CDemonActor **)&this_ptr->field_0x2698 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0x2698);
    }
    core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00537e90(g_CDemonSetPtr);
    local_18 = 0;
    local_1c = 0;
    local_20 = 0.0;
    iVar2 = *(int *)&this_ptr->field_0x2620;
    if (iVar2 == 0) {
      local_20 = -0.5;
    }
    else {
      (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x24))(iVar2);
      puVar3 = (uint *)&stack0xffffff50;
      puVar4 = &stack0xffffff98;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      fStack_50 = fStack_5c - fStack_68;
      fStack_4c = fStack_58 - fStack_64;
      fStack_48 = fStack_54 - fStack_60;
      fStack_2c = fStack_5c - fStack_68;
      *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffffdc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      local_20 = -fStack_24;
    }
    core_gabriela_cpp_FUN_004b20d0
              (this_ptr,delta_time,&this_ptr->field_0x2565c,_DAT_01cb06b8,_DAT_01cb067c,
               &stack0xffffffe0);
    iVar2 = *(int *)&this_ptr->field_0x2698;
    if (iVar2 == 0) {
      local_20 = 0.5;
    }
    else {
      (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x24))(iVar2);
      puVar3 = (uint *)&stack0xffffff80;
      puVar4 = &stack0xffffff68;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      fStack_38 = fStack_8c - fStack_98;
      fStack_34 = fStack_88 - fStack_94;
      fStack_30 = fStack_84 - fStack_90;
      fStack_44 = fStack_8c - fStack_98;
      *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      local_20 = (float)uStack_3c;
    }
    core_gabriela_cpp_FUN_004b20d0
              (this_ptr,delta_time,&this_ptr->field_0x25660,_DAT_01cb06bc,_DAT_01cb0680,
               &stack0xffffffe0);
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    return;
  }
  core_skeleton_cpp_FUN_00545a60
            (&this_ptr->field_0x2b4,0,0,*(uint *)&this_ptr->field_0x2565c,_DAT_01cb067c,
             core_skeleton_cpp_FUN_00544cc0);
  core_skeleton_cpp_FUN_00545a60
            (&this_ptr->field_0x2b4,0,0,*(uint *)&this_ptr->field_0x25660,_DAT_01cb0680,
             core_skeleton_cpp_FUN_00544cc0);
  return;
}
