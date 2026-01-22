#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CGun.h"
#include "types/classes/CHaystack.h"
#include "types/classes/CHealthItem.h"
#include "types/classes/CHero.h"
#include "types/classes/CHeroPlaceholder.h"
#include "types/classes/CHighPriestOfGardath.h"
#include "types/classes/CHiram.h"
#include "types/classes/CHostage.h"
#include "types/classes/CHotDemon.h"
#include "types/classes/CIcePick.h"
#include "types/classes/CImp.h"
#include "types/classes/CIni.h"
#include "types/classes/CIniFile.h"
#include "types/classes/CInventory.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CLightGun.h"
#include "types/classes/CNPC.h"
#include "types/classes/CWeapon.h"
#include "types/structs/SInventoryItemInfo.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x4F0000
// =============================================================================

CDemonActorType * __cdecl core_gun_cpp_staticInit_FUN_004f0280(void);
undefined __unknown core_gun_cpp_FUN_004f02b0();
undefined __unknown core_gun_cpp_FUN_004f02e0();
CGun * __cdecl core_gun_cpp_FUN_004f02f0(CGun * this_ptr);
undefined __unknown core_gun_cpp_FUN_004f0350();
undefined __unknown core_gun_cpp_FUN_004f0b20();
CGun * __cdecl core_gun_cpp_FUN_004f0b50(CGun * this_ptr, uint d1, uint d2);
CDemonActorType * __cdecl core_haystack_cpp_staticInit_FUN_004f0ba0(void);
undefined __unknown core_haystack_cpp_FUN_004f0bd0();
undefined __unknown core_haystack_cpp_FUN_004f0c00();
CHaystack * __cdecl core_haystack_cpp_FUN_004f0c10(CHaystack * this_ptr);
undefined __unknown core_haystack_cpp_FUN_004f0c80();
undefined __unknown core_haystack_cpp_FUN_004f0e40();
undefined __unknown core_haystack_cpp_FUN_004f13f0();
undefined __unknown core_haystack_cpp_FUN_004f1970();
undefined __unknown core_haystack_cpp_FUN_004f1ab0();
undefined __unknown core_haystack_cpp_CHaystack_load_FUN_004f1b50();
undefined __unknown core_haystack_cpp_FUN_004f1b60();
void __cdecl core_haystack_cpp_CHaystack_FUN_004f1b70(CHaystack * this_ptr);
undefined __unknown core_haystack_cpp_FUN_004f1c90();
undefined __unknown core_haystack_cpp_FUN_004f1ca0();
undefined __unknown core_haystack_cpp_FUN_004f1cb0();
undefined __unknown core_haystack_cpp_FUN_004f1cd0();
undefined __unknown core_haystack_cpp_FUN_004f1cf0();
CHaystack * __cdecl core_haystack_cpp_FUN_004f1d10(CHaystack * this_ptr, uint d1, uint d2);
CDemonActorType * __cdecl core_health_cpp_staticInit_FUN_004f1d60(void);
undefined __unknown core_health_cpp_FUN_004f1d90();
undefined __unknown core_health_cpp_FUN_004f1dc0();
CHealthItem * __cdecl core_health_cpp_FUN_004f1dd0(CHealthItem * this_ptr);
undefined __unknown core_health_cpp_FUN_004f1e30();
undefined __unknown core_health_cpp_FUN_004f1e50();
undefined __unknown core_health_cpp_FUN_004f1e60();
undefined __unknown core_health_cpp_FUN_004f1ed0();
undefined __unknown core_health_cpp_CHealthItem_serialize_FUN_004f1f20();
undefined __unknown core_health_cpp_FUN_004f1fa0();
undefined __unknown core_health_cpp_FUN_004f1fb0();
undefined __unknown core_health_cpp_FUN_004f1fd0();
undefined __unknown core_health_cpp_FUN_004f2020();
undefined __unknown core_health_cpp_FUN_004f2040();
undefined __unknown core_health_cpp_FUN_004f20b0();
CHealthItem * __cdecl core_health_cpp_FUN_004f20d0(CHealthItem * this_ptr, uint d1, uint d2);
CDemonActorType * __cdecl core_hero_cpp_staticInit_FUN_004f2120(void);
undefined __unknown core_hero_cpp_closestHeroToPoint_FUN_004f2170();
undefined __unknown core_hero_cpp_FUN_004f2220();
undefined __unknown core_hero_cpp_FUN_004f22a0();
undefined __unknown core_hero_cpp_FUN_004f2340();
void __cdecl core_hero_cpp_CHero_dtor_FUN_004f2470(CHero * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8);
void __cdecl core_hero_cpp_CHero_FUN_004f2540(CHero * this_ptr);
int __cdecl core_hero_cpp_CHero_FUN_004f2580(CHero * this_ptr);
int __cdecl core_hero_cpp_CHero_FUN_004f25c0(CHero * this_ptr);
void __cdecl core_hero_cpp_CHero_serialize_FUN_004f2610(CHero * this_ptr);
int __cdecl core_hero_cpp_CHero_FUN_004f2870(CHero * this_ptr);
int __cdecl core_hero_cpp_CHero_FUN_004f2880(CHero * this_ptr);
int __cdecl core_hero_cpp_CHero_FUN_004f2890(CHero * this_ptr);
int __cdecl core_hero_cpp_CHero_FUN_004f28a0(CHero * this_ptr);
int __cdecl core_hero_cpp_CHero_FUN_004f28d0(CHero * this_ptr);
void __cdecl core_hero_cpp_CHero_FUN_004f29b0(CHero * this_ptr);
void __cdecl core_hero_cpp_CHero_FUN_004f2a30(CHero * this_ptr);
undefined __unknown core_hero_cpp_FUN_004f2af0();
undefined __unknown core_hero_cpp_FUN_004f2c40();
undefined __unknown core_hero_cpp_FUN_004f2d70();
undefined __unknown core_hero_cpp_FUN_004f2ed0();
undefined __unknown core_hero_cpp_FUN_004f2f50();
undefined __unknown core_hero_cpp_FUN_004f30f0();
undefined __unknown core_hero_cpp_FUN_004f3120();
undefined __unknown core_hero_cpp_FUN_004f3350();
undefined __unknown core_hero_cpp_FUN_004f33b0();
undefined __unknown core_hero_cpp_FUN_004f3580();
undefined __unknown core_hero_cpp_FUN_004f35b0();
undefined __unknown core_hero_cpp_CallInventorySelectHealth_FUN_004f3760();
int __cdecl core_hero_cpp_CHero_FUN_004f37d0(CHero * this_ptr);
undefined __unknown core_hero_cpp_FUN_004f3890();
undefined __unknown core_hero_cpp_FUN_004f38d0();
undefined __unknown core_hero_cpp_FUN_004f3910();
undefined __unknown core_hero_cpp_FUN_004f3930();
undefined __unknown core_hero_cpp_FUN_004f3960();
void __cdecl core_hero_cpp_CHero_FUN_004f3af0(CHero * this_ptr);
void __cdecl core_hero_cpp_CHero_FUN_004f3b20(CHero * this_ptr);
undefined __unknown core_hero_cpp_FUN_004f3bc0();
CDemonActorType * __cdecl core_hero_cpp_CHeroPlaceholder_getActorType_FUN_004f3bf0(CHeroPlaceholder * this_ptr);
CHeroPlaceholder * __cdecl core_hero_cpp_FUN_004f3c00(CHeroPlaceholder * this_ptr);
CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_dtor_FUN_004f3c30(CHeroPlaceholder * this_ptr, uint d1, uint d2);
int __cdecl core_hero_cpp_CHeroPlaceholder_FUN_004f3c90(CHeroPlaceholder * this_ptr);
void __cdecl core_hero_cpp_CHeroPlaceholder_FUN_004f3d20(CHeroPlaceholder * this_ptr);
CDemonActor * __cdecl core_hero_cpp_CHeroPlaceholder_createHero_FUN_004f3d80(CHeroPlaceholder * this_ptr);
void __cdecl core_hero_cpp_CHeroPlaceholder_serialize_FUN_004f3ef0(CHeroPlaceholder * this_ptr);
void __cdecl core_hero_cpp_CHero_FUN_004f3f20(CHero * this_ptr);
void __cdecl core_hero_cpp_CHeroPlaceholder_FUN_004f3f60(CHeroPlaceholder * this_ptr);
void __cdecl core_hero_cpp_CHero_FUN_004f3fa0(CHero * this_ptr);
ulonglong __cdecl wincore_wddvmem_cpp_initializeColorMasks_FUN_004f3ff0(void);
ulonglong __cdecl wincore_wddvmem_cpp_populateColorTable_FUN_004f4140(void);
void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004f41c0(void);
CDemonActorType * __cdecl core_hiram_cpp_staticInit_FUN_004f4380(void);
undefined __unknown core_hiram_cpp_FUN_004f43b0();
undefined __unknown core_hiram_cpp_FUN_004f43e0();
CHiram * __cdecl core_hiram_cpp_FUN_004f43f0(CHiram * this_ptr);
CHiram * __cdecl core_hiram_cpp_FUN_004f4450(CHiram * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8, uint d9);
undefined __unknown core_hiram_cpp_FUN_004f4530();
undefined __unknown core_hiram_cpp_FUN_004f4550();
undefined __unknown core_hiram_cpp_CHiram_load_FUN_004f4690();
undefined __unknown core_hiram_cpp_FUN_004f46a0();
undefined __unknown core_hiram_cpp_FUN_004f46e0();
CNPC * __cdecl core_npc_cpp_CNPC_dtor_FUN_004f4700(CNPC * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8, uint d9);
CDemonActorType * __cdecl core_hostage_cpp_staticInit_FUN_004f47d0(void);
undefined __unknown core_hostage_cpp_FUN_004f4800();
undefined __unknown core_hostage_cpp_FUN_004f4830();
CHostage * __cdecl core_hostage_cpp_FUN_004f4840(CHostage * this_ptr);
undefined __unknown core_hostage_cpp_NPCSFromZombieTown_FUN_004f4970();
undefined __unknown core_hostage_cpp_FUN_004f4b40();
undefined __unknown core_hostage_cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0();
undefined __unknown core_hostage_cpp_FUN_004f5ff0();
undefined __unknown core_hostage_cpp_RelatedToScatDazzle_FUN_004f6120();
undefined __unknown core_hostage_cpp_CHostage_load_FUN_004f6170();
int __cdecl core_hostage_cpp_CHostage_FUN_004f6390(CHostage * this_ptr);
int __cdecl core_hostage_cpp_CHostage_FUN_004f63d0(CHostage * this_ptr);
int __cdecl core_hostage_cpp_CHostage_FUN_004f63e0(CHostage * this_ptr);
void __cdecl core_hostage_cpp_CHostage_FUN_004f6450(CHostage * this_ptr);
void __cdecl core_hostage_cpp_CHostage_FUN_004f6550(CHostage * this_ptr);
undefined __unknown core_hostage_cpp_FUN_004f69c0();
undefined __unknown core_hostage_cpp_FUN_004f6b30();
CHostage * __cdecl core_hostage_cpp_FUN_004f6b60(CHostage * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8, uint d9);
CDemonActorType * __cdecl core_hotdemon_cpp_staticInit_FUN_004f6c30(void);
undefined __unknown core_hotdemon_cpp_FUN_004f6c60();
undefined __unknown core_hotdemon_cpp_FUN_004f6c90();
CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004f6ca0(CHotDemon * this_ptr);
undefined __unknown core_hotdemon_cpp_FUN_004f6d00();
undefined __unknown core_hotdemon_cpp_FUN_004f6f20();
undefined __unknown core_hotdemon_cpp_FUN_004f7680();
undefined __unknown core_hotdemon_cpp_CHotDemon_load_FUN_004f76c0();
undefined __unknown core_hotdemon_cpp_FUN_004f7720();
undefined __unknown core_hotdemon_cpp_FUN_004f78f0();
undefined __unknown core_hotdemon_cpp_FUN_004f79b0();
undefined __unknown core_hotdemon_cpp_FUN_004f79d0();
undefined __unknown core_hotdemon_cpp_FUN_004f7a10();
CDemonActor * __cdecl core_hotdemon_cpp_FUN_004f7a40(CHotDemon * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8);
CDemonActorType * __cdecl core_hpriest_cpp_staticInit_FUN_004f7b00(void);
undefined __unknown core_hpriest_cpp_FUN_004f7b30();
undefined __unknown core_hpriest_cpp_FUN_004f7b60();
CHighPriestOfGardath * __cdecl core_hpriest_cpp_FUN_004f7b70(CHighPriestOfGardath * this_ptr);
undefined __unknown core_hpriest_cpp_CHighPriestOfGardath_load_FUN_004f7bd0();
undefined __unknown core_hpriest_cpp_FUN_004f7c00();
undefined __unknown core_hpriest_cpp_FUN_004f7c50();
undefined __unknown core_hpriest_cpp_CHighPriestOfGardath_FUN_004f7c70();
CHighPriestOfGardath * __cdecl core_hpriest_cpp_FUN_004f7cb0(CHighPriestOfGardath * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8, uint d9);
CDemonActorType * __cdecl core_icepick_cpp_staticInit_FUN_004f7d80(void);
undefined __unknown core_icepick_cpp_FUN_004f7db0();
undefined __unknown core_icepick_cpp_FUN_004f7de0();
CIcePick * __cdecl core_icepick_cpp_FUN_004f7df0(CIcePick * this_ptr);
undefined __unknown core_icepick_cpp_FUN_004f7e80();
undefined __unknown core_icepick_cpp_FUN_004f80b0();
undefined __unknown core_icepick_cpp_FUN_004f8810();
undefined __unknown core_icepick_cpp_FUN_004f8970();
undefined __unknown core_icepick_cpp_FUN_004f8ad0();
undefined __unknown core_icepick_cpp_FUN_004f8b00();
undefined __unknown core_icepick_cpp_FUN_004f8b20();
undefined __unknown core_icepick_cpp_FUN_004f8c70();
undefined __unknown core_icepick_cpp_FUN_004f93a0();
undefined __unknown core_icepick_cpp_FUN_004f9490();
undefined __unknown core_icepick_cpp_CIcePick_load_FUN_004f9590();
undefined __unknown core_icepick_cpp_FUN_004f95a0();
undefined __unknown core_icepick_cpp_CIcePick_FUN_004f95b0();
undefined __unknown core_icepick_cpp_FUN_004f9760();
undefined __unknown core_icepick_cpp_FUN_004f9770();
undefined __unknown core_icepick_cpp_FUN_004f9780();
undefined __unknown core_icepick_cpp_FUN_004f97a0();
undefined __unknown core_icepick_cpp_FUN_004f97c0();
CIcePick * __cdecl core_icepick_cpp_FUN_004f97e0(CIcePick * this_ptr, uint d1, uint d2);
CDemonActorType * __cdecl core_imp_cpp_staticInit_FUN_004f9830(void);
undefined __unknown core_imp_cpp_FUN_004f9860();
undefined __unknown core_imp_cpp_FUN_004f9890();
CImp * __cdecl core_imp_cpp_FUN_004f98a0(CImp * this_ptr);
undefined __unknown core_imp_cpp_FUN_004f9910();
undefined __unknown core_imp_cpp_FUN_004f9c30();
undefined __unknown core_imp_cpp_FUN_004fa900();
undefined __unknown core_imp_cpp_FUN_004fa920();
undefined __unknown core_imp_cpp_FUN_004faaf0();
undefined __unknown core_imp_cpp_CImp_load_FUN_004fab00();
undefined __unknown core_imp_cpp_FUN_004fab60();
undefined __unknown core_imp_cpp_FUN_004fae00();
undefined __unknown core_imp_cpp_FUN_004faf40();
undefined __unknown core_imp_cpp_FUN_004fb0f0();
undefined __unknown core_imp_cpp_FUN_004fb110();
undefined __unknown core_imp_cpp_FUN_004fb150();
CImp * __cdecl core_imp_cpp_FUN_004fb180(CImp * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8);
void __cdecl engine_ini_cpp_staticInit_FUN_004fb240(void);
int __cdecl engine_ini_cpp_CIni_getProfileString_FUN_004fb250(CIni * this_ptr, char * section, char * key, char * default_value, char * output_buffer, int buffer_size, char * filename);
int __cdecl engine_ini_cpp_CIni_findLineNumberOfVariable_FUN_004fb470(CIni * this_ptr, char * section, char * key, char * value, char * filename);
int __cdecl engine_ini_cpp_CIni_writeProfileString_FUN_004fb660(CIni * this_ptr, char * section, char * key, char * value, char * filename);
void __cdecl engine_ini_cpp_getProfileString_FUN_004fb960(char * section, char * key, char * default_value, char * output_buffer, int buffer_size, char * filename);
int __cdecl engine_ini_cpp_getProfileInteger_FUN_004fb9a0(char * section, char * key, char * default_value, char * filename);
void __cdecl engine_ini_cpp_writeProfileString_FUN_004fba40(char * section, char * key, char * value, char * filename);
CIniFile * __cdecl engine_ini_cpp_CIniFile_ctor_FUN_004fba70(CIniFile * this_ptr, char * filename, int read_mode);
void __cdecl engine_ini_cpp_CIniFile_init_FUN_004fbaa0(char * dest, char * source);
void __cdecl engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile * this_ptr, char * section);
void __cdecl engine_ini_cpp_CIniFile_getString_FUN_004fbb20(CIniFile * this_ptr, char * key, char * output_buffer, int buffer_size, char * default_value);
void __cdecl engine_ini_cpp_CIniFile_setString_FUN_004fbbb0(CIniFile * this_ptr, char * key, char * value);
void __cdecl engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr);
void __cdecl engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value);
void __cdecl engine_ini_cpp_CIniFile_getFloat_FUN_004fbcd0(CIniFile * this_ptr, char * key, float * output);
void __cdecl engine_ini_cpp_CIniFile_setFloatValue_FUN_004fbd30(CIniFile * this_ptr, char * key, float value);
CIni * __cdecl engine_ini_cpp_CIni_ctor_FUN_004fbd70(CIni * this_ptr);
CIni * __cdecl engine_ini_cpp_CIni_dtor_FUN_004fbd80(CIni * this_ptr);
void __cdecl core_inivar_cpp_readIniData_FUN_004fbd90(void);
void __cdecl core_inivar_cpp_writeIniData_FUN_004fc510(void);
void __cdecl core_inv_cpp_staticInit_FUN_004fcc30(void);
CKeyFramedModelInstance * __cdecl core_inv_cpp_getItemModel_FUN_004fcda0(CDemonActor * actor_ptr);
char * __cdecl core_inv_cpp_getItemDisplayName_FUN_004fcf00(CDemonActor * actor_ptr);
char * __cdecl core_inv_cpp_getItemIconName_FUN_004fcf70(CDemonActor * actor_ptr);
int __cdecl core_inv_cpp_loadItem_FUN_004fcfe0(SInventoryItemInfo * item_info, FILE * file_handle);
void __cdecl core_inv_cpp_CInventory_ctor_FUN_004fd020(CInventory * this_ptr);
int __cdecl core_inv_cpp_CInventory_dtor_FUN_004fd0c0(CInventory * this_ptr);
void __cdecl core_inv_cpp_CInventory_clear_FUN_004fd0e0(CInventory * this_ptr);
void __cdecl core_inv_cpp_CInventory_initialize_FUN_004fd190(CInventory * this_ptr);
void __cdecl core_inv_cpp_loadInventory_FUN_004fd220(void);
void __cdecl core_inv_cpp_freeInventory_FUN_004fd510(void);
void __cdecl core_inv_cpp_clampWeaponAmmoCount_FUN_004fd5d0(CDemonActor * actor_ptr);
int __cdecl core_inv_cpp_CInventory_addItem_FUN_004fd600(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message);
void __cdecl core_inv_cpp_CInventory_createAmmoFromWeapon_FUN_004fe900(CInventory * this_ptr, CWeapon * weapon);
CDemonActor * __cdecl core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0(CInventory * this_ptr, char * item_name);
int __cdecl core_inv_cpp_CInventory_hasItemOfClass_FUN_004fe9d0(CInventory * this_ptr, char * class_name);
void __cdecl core_inv_cpp_CInventory_removeItem_FUN_004fea70(CInventory * this_ptr, CDemonActor * item_to_remove, int should_delete_actor);
void __cdecl core_inv_cpp_CInventory_selectWeapon_FUN_004feb10(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction);
void __cdecl core_inv_cpp_CInventory_selectItem_FUN_004fec10(CInventory * this_ptr, int direction);
void __cdecl core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10(CInventory * this_ptr, int direction);
void __cdecl core_inv_cpp_CInventory_renderItemModel_FUN_004fee00(CInventory * this_ptr, CDemonActor * item, int viewport_x, int viewport_y, int viewport_size, int rotation_y, int alpha);
void __cdecl core_inv_cpp_CInventory_save_FUN_004ff210(CInventory * this_ptr, FILE * file_handle);
void __cdecl core_inv_cpp_CInventory_saveItems_FUN_004ff3b0(CInventory * this_ptr, FILE * file_handle);
void __cdecl core_inv_cpp_CInventory_load_FUN_004ff400(CInventory * this_ptr);
void __cdecl core_inv_cpp_CInventory_loadItems_FUN_004ff740(CInventory * this_ptr);
void __cdecl core_inv_cpp_CInventory_setupItems_FUN_004ff780(CInventory * this_ptr);
int __cdecl core_inv_cpp_CInventory_select_FUN_004ff800(CInventory * this_ptr, CDemonActor * actor_ptr);
CLightGun * __cdecl core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(CInventory * this_ptr);
void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004ffad0(CInventory * this_ptr);
float __cdecl core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0(CInventory * inventory_ptr, float max_charge);
void __cdecl core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(CInventory * this_ptr);
int __cdecl core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70(CInventory * this_ptr, CDemonActor * weapon_actor, int weapon_category);
void __cdecl core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0(CInventory * this_ptr, int reset_both);
void __cdecl core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0(CInventory * this_ptr);

