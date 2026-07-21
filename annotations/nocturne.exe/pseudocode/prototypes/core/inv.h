#pragma once

// Function prototypes for core/inv.cpp
// Generated from Ghidra function signatures

// Original: core_inv.cpp_getItemModel_FUN_004beb40
// Address: 004beb40
int getItemModel(undefined4 param_1);

// Original: core_inv.cpp_getItemDisplayName_FUN_004beca0
// Address: 004beca0
int __cdecl getItemDisplayName(undefined4 param_1);

// Original: core_inv.cpp_getItemIconName_FUN_004bed10
// Address: 004bed10
int __cdecl getItemIconName(undefined4 param_1);

// Original: core_inv.cpp_loadItem_FUN_004bed80
// Address: 004bed80
bool __cdecl loadItem(int param_1,undefined4 param_2);

// Original: core_inv.cpp_CInventory_ctor_FUN_004bedc0
// Address: 004bedc0
void __cdecl CInventory::ctor(undefined4 *param_1);

// Original: core_inv.cpp_CInventory_clear_FUN_004bee80
// Address: 004bee80
void __cdecl CInventory::clear(int param_1);

// Original: core_inv.cpp_CInventory_initialize_FUN_004bef10
// Address: 004bef10
void __cdecl CInventory::initialize(int param_1);

// Original: core_inv.cpp_loadAssets_FUN_004befa0
// Address: 004befa0
void __cdecl loadAssets(void);

// Original: core_inv.cpp_freeInventory_FUN_004bf270
// Address: 004bf270
void __cdecl freeInventory(void);

// Original: core_inv.cpp_CInventory_addItem_FUN_004bf360
// Address: 004bf360
undefined4 __cdecl CInventory::addItem(int param_1,int param_2,int param_3);

// Original: core_inv.cpp_CInventory_findItemByName_FUN_004c0710
// Address: 004c0710
undefined4 __cdecl CInventory::findItemByName(int param_1,undefined4 param_2);

// Original: core_inv.cpp_CInventory_hasItemOfClass_FUN_004c0760
// Address: 004c0760
undefined4 __cdecl CInventory::hasItemOfClass(int param_1,undefined4 param_2);

// Original: core_inv.cpp_CInventory_removeItem_FUN_004c07b0
// Address: 004c07b0
void __cdecl CInventory::removeItem(int param_1,int param_2,int param_3);

// Original: core_inv.cpp_CInventory_selectWeapon_FUN_004c0850
// Address: 004c0850
void __cdecl CInventory::selectWeapon(int param_1,int param_2,undefined4 param_3,int param_4);

// Original: core_inv.cpp_CInventory_selectItem_FUN_004c0950
// Address: 004c0950
void __cdecl CInventory::selectItem(int param_1,int param_2);

// Original: core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004c0a50
// Address: 004c0a50
void __cdecl CInventory::cycleWeaponOfSameClass(int param_1,int param_2);

// Original: core_inv.cpp_CInventory_renderItemModel_FUN_004c0b40
// Address: 004c0b40
void __cdecl CInventory::renderItemModel(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,int param_7);

// Original: core_inv.cpp_CInventory_save_FUN_004c0fa0
// Address: 004c0fa0
void __cdecl CInventory::save(float *param_1,undefined4 param_2);

// Original: core_inv.cpp_CInventory_saveItems_FUN_004c1140
// Address: 004c1140
void __cdecl CInventory::saveItems(int param_1,undefined4 param_2);

// Original: core_inv.cpp_CInventory_load_FUN_004c1190
// Address: 004c1190
void __cdecl CInventory::load(int param_1,undefined4 param_2);

// Original: core_inv.cpp_CInventory_loadItems_FUN_004c14d0
// Address: 004c14d0
void __cdecl CInventory::loadItems(int param_1);

// Original: core_inv.cpp_CInventory_setupItems_FUN_004c1510
// Address: 004c1510
void __cdecl CInventory::setupItems(int param_1);

// Original: core_inv.cpp_CInventory_select_FUN_004c1580
// Address: 004c1580
undefined4 __cdecl CInventory::select(int param_1,undefined4 param_2);

// Original: core_inv.cpp_CInventory_getActiveLightGun_FUN_004c1830
// Address: 004c1830
int __cdecl CInventory::getActiveLightGun(int param_1);

// Original: core_inv.cpp_CInventory_updateInventory_FUN_004c1850
// Address: 004c1850
void __cdecl CInventory::updateInventory(float *param_1);

// Original: core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004c1b20
// Address: 004c1b20
float __cdecl CInventory::calculateTotalBatteryCharge(int param_1,float param_2);

// Original: core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90
// Address: 004c1b90
void __cdecl CInventory::updateSelectedWeaponAmmoDisplay(int param_1);

// Original: core_inv.cpp_CInventory_isWeaponInCategory_FUN_004c1bf0
// Address: 004c1bf0
undefined4 __cdecl CInventory::isWeaponInCategory(undefined4 param_1,undefined4 param_2,int param_3);

// Original: core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20
// Address: 004c1d20
void __cdecl CInventory::resetWeaponSwitchTimers(int param_1,int param_2);

// Original: core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004c1d70
// Address: 004c1d70
void __cdecl CInventory::resetItemSwitchTimers(int param_1);

// Original: core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_004c1da0
// Address: 004c1da0
void __cdecl CInventory::resetInventoryDisplayTimer(int param_1);

// Original: core_inv.cpp_drawWeaponIconBackground_FUN_004c1dd0
// Address: 004c1dd0
void drawWeaponIconBackground(int param_1,int param_2,int param_3,int param_4,undefined4 param_5);

// Original: core_inv.cpp_drawItemIconBackground_FUN_004c1f90
// Address: 004c1f90
void __cdecl drawItemIconBackground(int param_1,int param_2,int param_3,int param_4,undefined4 param_5);

// Original: core_inv.cpp_CInventory_renderSelectedItems_FUN_004c2150
// Address: 004c2150
void __cdecl CInventory::renderSelectedItems(int param_1);

// Original: core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004c31b0
// Address: 004c31b0
undefined4 __cdecl CInventory::checkHasMatchingKey(int param_1,uint param_2,int param_3);

// Original: core_inv.cpp_CInventory_removeMatchingKeys_FUN_004c3280
// Address: 004c3280
void __cdecl CInventory::removeMatchingKeys(int param_1,uint param_2);

// Original: core_inv.cpp_CInventory_toggleDetailView_FUN_004c32e0
// Address: 004c32e0
void __cdecl CInventory::toggleDetailView(int param_1);

// Original: core_inv.cpp_CInventory_autoUseHealthItem_FUN_004c3350
// Address: 004c3350
void __cdecl CInventory::autoUseHealthItem(int param_1);
