// Name: core_game.cpp_FUN_004b9960
// Address: 004b9960
// Address Range: [[004b9960, 004ba213]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004b9960(CGame *this_ptr,SPlayerInput *player_control)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004b9960(CGame *this_ptr,SPlayerInput *player_control)

{
  SPlayerInput *pSVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  
  if (this_ptr->screen_clear_condition != 0) {
    (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x200);
    (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x201);
  }
  *(uint *)(player_control + 0x28) = 0;
  pSVar1 = player_control + 0x28;
  if ((&DAT_01c6cef0)[*(int *)&this_ptr->field_0x38] == '\0') {
    if ((((&DAT_01c6cef0)[*(int *)&this_ptr->field_0x3c] != '\0') &&
        ((int)*(float *)pSVar1 < 0x3f800000)) &&
       (*(float *)pSVar1 = g_CGamePtr->delta_time_float / _DAT_005c2800 + *(float *)pSVar1,
       0x3f800000 < (int)*(float *)pSVar1)) {
      *(float *)pSVar1 = 1.0;
    }
  }
  else if ((_DAT_005c2804 < *(float *)pSVar1) &&
          (fVar2 = *(float *)pSVar1 - g_CGamePtr->delta_time_float / _DAT_005c2800,
          *(float *)pSVar1 = fVar2, fVar2 < _DAT_005c2804)) {
    *(float *)pSVar1 = -1.0;
  }
  if ((&DAT_01c6cef0)[*(int *)&this_ptr->field_0x34] == '\0') {
    if (((&DAT_01c6cef0)[*(int *)&this_ptr->field_0x44] != '\0') ||
       ((&DAT_01c6cef0)[*(int *)&this_ptr->field_0x40] != '\0')) {
      fVar2 = (float)this_ptr->x_mouse_sensitivity * (float)_DAT_005c2810 * (float)_DAT_005c2818;
      pSVar1 = player_control + 0x2c;
      if ((&DAT_01c6cef0)[*(int *)&this_ptr->field_0x44] == '\0') {
        if ((((&DAT_01c6cef0)[*(int *)&this_ptr->field_0x40] != '\0') &&
            ((int)*(float *)pSVar1 < 0x3e800000)) &&
           (*(float *)pSVar1 =
                 (g_CGamePtr->delta_time_float * _DAT_005c2808) / fVar2 + *(float *)pSVar1,
           0x3e800000 < (int)*(float *)pSVar1)) {
          *(float *)pSVar1 = 0.25;
        }
      }
      else if ((_DAT_005c2820 < *(float *)pSVar1) &&
              (fVar2 = *(float *)pSVar1 - (g_CGamePtr->delta_time_float * _DAT_005c2808) / fVar2,
              *(float *)pSVar1 = fVar2, fVar2 < _DAT_005c2820)) {
        *(float *)pSVar1 = -0.25;
      }
      goto LAB_004b9a6d;
    }
    fVar2 = (g_CGamePtr->delta_time_float * _DAT_005c2808) / _DAT_005c280c;
    pSVar1 = player_control + 0x2c;
    if (0.0 <= *(float *)pSVar1) {
      *(float *)pSVar1 = *(float *)pSVar1 - fVar2;
      fVar2 = *(float *)pSVar1;
      goto joined_r0x004ba097;
    }
    fVar2 = *(float *)pSVar1 + fVar2;
LAB_004b9a5a:
    *(float *)(player_control + 0x2c) = fVar2;
    if (*(float *)(player_control + 0x2c) <= 0.0) goto LAB_004b9a6d;
  }
  else {
    pSVar1 = player_control + 0x28;
    if ((&DAT_01c6cef0)[*(int *)&this_ptr->field_0x44] == '\0') {
      if ((((&DAT_01c6cef0)[*(int *)&this_ptr->field_0x40] != '\0') &&
          ((int)*(float *)pSVar1 < 0x3f800000)) &&
         (*(float *)pSVar1 = g_CGamePtr->delta_time_float / _DAT_005c2800 + *(float *)pSVar1,
         0x3f800000 < (int)*(float *)pSVar1)) {
        *(float *)pSVar1 = 1.0;
      }
    }
    else if ((_DAT_005c2804 < *(float *)pSVar1) &&
            (fVar2 = *(float *)pSVar1 - g_CGamePtr->delta_time_float / _DAT_005c2800,
            *(float *)pSVar1 = fVar2, fVar2 < _DAT_005c2804)) {
      *(float *)pSVar1 = -1.0;
    }
    fVar2 = (g_CGamePtr->delta_time_float * _DAT_005c2808) / _DAT_005c280c;
    pSVar1 = player_control + 0x2c;
    if (*(float *)pSVar1 < 0.0) {
      fVar2 = *(float *)pSVar1 + fVar2;
      goto LAB_004b9a5a;
    }
    *(float *)pSVar1 = *(float *)pSVar1 - fVar2;
    fVar2 = *(float *)pSVar1;
joined_r0x004ba097:
    if (0.0 <= fVar2) goto LAB_004b9a6d;
  }
  *(uint *)(player_control + 0x2c) = 0;
LAB_004b9a6d:
  if (((&DAT_01c6cef0)[*(int *)&this_ptr->field_0x78] == '\0') &&
     ((&DAT_01c6cef0)[*(int *)&this_ptr->field_0x7c] == '\0')) {
    fVar2 = (g_CGamePtr->delta_time_float * _DAT_005c2808) / _DAT_005c2824;
    pSVar1 = player_control + 0x30;
    if (0.0 <= *(float *)pSVar1) {
      *(float *)pSVar1 = *(float *)pSVar1 - fVar2;
      if (*(float *)pSVar1 < 0.0) {
        *(float *)pSVar1 = 0.0;
      }
    }
    else {
      *(float *)pSVar1 = *(float *)pSVar1 + fVar2;
      if (0.0 < *(float *)pSVar1) {
        *(float *)pSVar1 = 0.0;
      }
    }
  }
  else {
    fVar2 = (float)this_ptr->y_mouse_sensitivity * (float)_DAT_005c2828 * (float)_DAT_005c2818;
    pSVar1 = player_control + 0x30;
    if ((&DAT_01c6cef0)[*(int *)&this_ptr->field_0x78] == '\0') {
      if ((((&DAT_01c6cef0)[*(int *)&this_ptr->field_0x7c] != '\0') &&
          ((int)*(float *)pSVar1 < 0x3e800000)) &&
         (*(float *)pSVar1 =
               (g_CGamePtr->delta_time_float * _DAT_005c2808) / fVar2 + *(float *)pSVar1,
         0x3e800000 < (int)*(float *)pSVar1)) {
        *(float *)pSVar1 = 0.25;
      }
    }
    else if ((_DAT_005c2820 < *(float *)pSVar1) &&
            (fVar2 = *(float *)pSVar1 - (g_CGamePtr->delta_time_float * _DAT_005c2808) / fVar2,
            *(float *)pSVar1 = fVar2, fVar2 < _DAT_005c2820)) {
      *(float *)pSVar1 = -0.25;
    }
  }
  if (this_ptr->always_run == 0) {
    bVar5 = (&DAT_01c6cef0)[this_ptr->key_walk];
  }
  else {
    bVar5 = (&DAT_01c6cef0)[this_ptr->key_walk] == '\0';
  }
  *(uint *)(player_control + 8) = (uint)bVar5;
  if ((&DAT_01d21fa0)[this_ptr->quimby_flag] != (&DAT_01c6cef0)[this_ptr->quimby_flag]) {
    *(uint *)player_control = (uint)(byte)(&DAT_01c6cef0)[this_ptr->quimby_flag];
  }
  if ((&DAT_01d21fa0)[this_ptr->shadow_flag] != (&DAT_01c6cef0)[this_ptr->shadow_flag]) {
    *(uint *)(player_control + 4) = (uint)(byte)(&DAT_01c6cef0)[this_ptr->shadow_flag];
  }
  iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
  if (iVar3 == 0) {
    iVar3 = *(int *)&this_ptr->field_0x48;
    if ((&DAT_01d21fa0)[iVar3] != (&DAT_01c6cef0)[iVar3]) {
      *(uint *)(player_control + 0xc) = (uint)(byte)(&DAT_01c6cef0)[iVar3];
    }
    if ((&DAT_01d21fa0)[*(int *)&this_ptr->field_0x4c] !=
        (&DAT_01c6cef0)[*(int *)&this_ptr->field_0x4c]) {
      *(uint *)(player_control + 0x10) = (uint)(byte)(&DAT_01c6cef0)[*(int *)&this_ptr->field_0x4c];
    }
  }
  else {
    *(uint *)(player_control + 0x10) = 0;
    *(uint *)(player_control + 0xc) = 0;
  }
  if ((&DAT_01d21fa0)[*(int *)&this_ptr->field_0x50] ==
      (&DAT_01c6cef0)[*(int *)&this_ptr->field_0x50]) {
    *(uint *)(player_control + 0x14) = 0;
  }
  else {
    *(uint *)(player_control + 0x14) = (uint)(byte)(&DAT_01c6cef0)[*(int *)&this_ptr->field_0x50];
  }
  if ((&DAT_01d21fa0)[*(int *)&this_ptr->field_0x54] ==
      (&DAT_01c6cef0)[*(int *)&this_ptr->field_0x54]) {
    *(uint *)(player_control + 0x18) = 0;
  }
  else {
    *(uint *)(player_control + 0x18) = (uint)(byte)(&DAT_01c6cef0)[*(int *)&this_ptr->field_0x54];
  }
  if ((&DAT_01d21fa0)[*(int *)&this_ptr->field_0x6c] ==
      (&DAT_01c6cef0)[*(int *)&this_ptr->field_0x6c]) {
    *(uint *)(player_control + 0x1c) = 0;
  }
  else {
    *(uint *)(player_control + 0x1c) = (uint)(byte)(&DAT_01c6cef0)[*(int *)&this_ptr->field_0x6c];
  }
  if ((&DAT_01d21fa0)[*(int *)&this_ptr->field_0x70] ==
      (&DAT_01c6cef0)[*(int *)&this_ptr->field_0x70]) {
    *(uint *)(player_control + 0x20) = 0;
  }
  else {
    *(uint *)(player_control + 0x20) = (uint)(byte)(&DAT_01c6cef0)[*(int *)&this_ptr->field_0x70];
  }
  if ((&DAT_01d21fa0)[*(int *)&this_ptr->field_0x74] ==
      (&DAT_01c6cef0)[*(int *)&this_ptr->field_0x74]) {
    *(uint *)(player_control + 0x24) = 0;
  }
  else {
    *(uint *)(player_control + 0x24) = (uint)(byte)(&DAT_01c6cef0)[*(int *)&this_ptr->field_0x74];
  }
  iVar3 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,*(uint *)&this_ptr->field_0x94);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
              ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),(CDemonActor *)0x0,
               5,1);
  }
  iVar3 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,*(uint *)&this_ptr->field_0x98);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
              ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),(CDemonActor *)0x0,
               5,-1);
  }
  iVar3 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,*(uint *)&this_ptr->field_0x9c);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004dbc40
              ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),1);
  }
  iVar3 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,*(uint *)&this_ptr->field_0xa0);
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004dbc40
              ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),-1);
  }
  iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x148))(iVar3);
  iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,*(uint *)&this_ptr->field_0x80);
  if ((iVar4 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                 (CDemonActor *)0x0,0,1), iVar3 == 0)) {
    *(uint *)(player_control + 0x1c) = 1;
  }
  iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,*(uint *)&this_ptr->field_0x84);
  if ((iVar4 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                 (CDemonActor *)0x0,1,1), iVar3 == 0)) {
    *(uint *)(player_control + 0x1c) = 1;
  }
  iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,*(uint *)&this_ptr->field_0x88);
  if ((iVar4 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                 (CDemonActor *)0x0,2,1), iVar3 == 0)) {
    *(uint *)(player_control + 0x1c) = 1;
  }
  iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,*(uint *)&this_ptr->field_0x8c);
  if ((iVar4 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                 (CDemonActor *)0x0,3,1), iVar3 == 0)) {
    *(uint *)(player_control + 0x1c) = 1;
  }
  iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,*(uint *)&this_ptr->field_0x90);
  if ((iVar4 != 0) &&
     (core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40
                ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                 (CDemonActor *)0x0,4,1), iVar3 == 0)) {
    *(uint *)(player_control + 0x1c) = 1;
  }
  iVar3 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,*(uint *)&this_ptr->field_0x58);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  (**(code **)(*(int *)(iVar3 + 0x154) + 0x150))(iVar3);
  return;
}
