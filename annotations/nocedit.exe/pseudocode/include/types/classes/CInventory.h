#pragma once

// Forward declarations
struct CAmmo;
struct CLightGun;
struct CWeapon;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CInventory
// Ghidra size: 0x460 (1120 bytes)
#pragma pack(push, 1)
typedef struct CInventory {
    float battery_charge; // 0x0
    struct CDemonActor* owner; // 0x4
    int item_count; // 0x8
    struct CDemonActor* items[100]; // 0xc
    float item_angles[100]; // 0x19c
    int save_version; // 0x32c
    struct CWeapon* selected_weapon; // 0x330
    struct CDemonActor* selected_item; // 0x334
    float weapon_highlight_timer; // 0x338
    float item_highlight_timer; // 0x33c
    float inventory_display_timer; // 0x340
    float message_display_timer; // 0x344
    float ammo_detail_timer; // 0x348
    char message_text[256]; // 0x34c
    int render_mode_flag; // 0x44c
    int preserve_items; // 0x450
    struct CLightGun* light_gun_ptr; // 0x454
    struct CAmmo* ammo_ptr; // 0x458
    int cached_ammo_count; // 0x45c
} CInventory;
#pragma pack(pop)

