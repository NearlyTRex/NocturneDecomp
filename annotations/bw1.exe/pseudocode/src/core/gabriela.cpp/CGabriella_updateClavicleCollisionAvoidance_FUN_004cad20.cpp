// Name: core_gabriela.cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004cad20
// Address: 004cad20
// Address Range: [[004cad20, 004cafe2]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004cad20(CGabriella *this_ptr,float delta_time,int has_carried_objects)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004cad20(CGabriella *this_ptr,float delta_time,int has_carried_objects)

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
  fVar1 = delta_time / _DAT_00600d6c;
  this_ptr->left_clavicle_blend = this_ptr->left_clavicle_blend - fVar1;
  this_ptr->right_clavicle_blend = this_ptr->right_clavicle_blend - fVar1;
  if (this_ptr->left_clavicle_blend < 0.0) {
    this_ptr->left_clavicle_blend = 0.0;
  }
  if (this_ptr->right_clavicle_blend < 0.0) {
    this_ptr->right_clavicle_blend = 0.0;
  }
  if (has_carried_objects != 0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
    if (*(CDemonActor **)&this_ptr->field_0x25b0 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0x25b0);
    }
    if (*(CDemonActor **)&this_ptr->field_0x2628 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0x2628);
    }
    core_setcolid_cpp_CDemonSet_disableIgnore_FUN_005592b0(g_CDemonSetPtr);
    local_18 = 0;
    local_1c = 0;
    local_20 = 0.0;
    iVar2 = *(int *)&this_ptr->field_0x25b0;
    if (iVar2 == 0) {
      local_20 = -0.5;
    }
    else {
      (**(code **)(*(int *)(iVar2 + 0x154) + 0x1c))(iVar2);
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
    core_gabriela_cpp_FUN_004caff0
              (this_ptr,delta_time,&this_ptr->left_clavicle_blend,_DAT_01cc9148,_DAT_01cc910c,
               &stack0xffffffe0);
    iVar2 = *(int *)&this_ptr->field_0x2628;
    if (iVar2 == 0) {
      local_20 = 0.5;
    }
    else {
      (**(code **)(*(int *)(iVar2 + 0x154) + 0x1c))(iVar2);
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
    core_gabriela_cpp_FUN_004caff0
              (this_ptr,delta_time,&this_ptr->right_clavicle_blend,_DAT_01cc914c,_DAT_01cc9110,
               &stack0xffffffe0);
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    return;
  }
  core_skeleton_cpp_FUN_00568100
            (&this_ptr->field_0x158,0,0,this_ptr->left_clavicle_blend,_DAT_01cc910c,
             core_skeleton_cpp_FUN_00567360);
  core_skeleton_cpp_FUN_00568100
            (&this_ptr->field_0x158,0,0,this_ptr->right_clavicle_blend,_DAT_01cc9110,
             core_skeleton_cpp_FUN_00567360);
  return;
}
