# CInventory

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 1120 | fields | — |
| nocturne | 1120 | fields | — |
| bw1 | 1132 | fields | — |
| blairwitch2 | 1572 | fields | — |
| bw3 | 1136 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `battery_charge` | `float` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `owner` | `CDemonActor*` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `item_count` | `int` | 0x8 | 0x8 | 0x10 | 0x10 | 0x10 |
| `items` | `CDemonActor*[100]` | 0xc | 0xc | 0x14 | 0x14 | 0x14 |
| `item_angles` | `float[100]` | 0x19c | 0x19c | 0x1a4 | 0x1a4 | 0x1a4 |
| `save_version` | `int` | 0x32c | 0x32c | 0x334 | 0x334 | 0x334 |
| `selected_weapon` | `CWeapon*` | 0x330 | 0x330 | 0x338 |  | 0x338 |
| `selected_item` | `CDemonActor*` | 0x334 | 0x334 | 0x33c |  | 0x33c |
| `weapon_highlight_timer` | `float` | 0x338 | 0x338 | 0x340 | 0x340 | 0x340 |
| `item_highlight_timer` | `float` | 0x33c | 0x33c | 0x344 | 0x344 | 0x344 |
| `inventory_display_timer` | `float` | 0x340 | 0x340 | 0x348 | 0x348 | 0x348 |
| `message_display_timer` | `float` | 0x344 | 0x344 | 0x34c | 0x34c | 0x34c |
| `ammo_detail_timer` | `float` | 0x348 | 0x348 | 0x350 | 0x350 | 0x350 |
| `message_text` | `char[256]` | 0x34c | 0x34c | 0x354 | 0x354 | 0x354 |
| `render_mode_flag` | `int` | 0x44c | 0x44c | 0x454 | 0x454 | 0x454 |
| `preserve_items` | `int` | 0x450 | 0x450 | 0x458 | 0x460 | 0x458 |
| `light_gun_ptr` | `CLightGun*` | 0x454 | 0x454 | 0x45c | 0x458 |  |
| `ammo_ptr` | `CAmmo*` | 0x458 | 0x458 | 0x464 | 0x464 |  |
| `cached_ammo_count` | `int` | 0x45c | 0x45c | 0x468 | 0x45c |  |
| `show_compass` | `int` |  |  |  | 0x8 |  |
| `current_group` | `int` |  |  |  | 0x468 |  |
| `item_groups` | `int[100]` |  |  |  | 0x46c |  |
| `selected_items` | `CDemonActor*[5]` |  |  |  | 0x5fc |  |
| `selected_weapons` | `CWeapon*[5]` |  |  |  | 0x610 |  |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x8+0x8, 0x460+0x4
- **blairwitch2**: 0xc+0x4, 0x338+0x8
- **bw3**: 0x8+0x8, 0x45c+0x14
